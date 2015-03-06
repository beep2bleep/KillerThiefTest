#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
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
extern TypeInfo t3618_TI;

#include "t852.h"

#include "t14.h"

// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Hashtable/EnumeratorMode>
extern MethodInfo m27802_MI;
static PropertyInfo t3618____Current_PropertyInfo = 
{
	&t3618_TI, "Current", &m27802_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3618_PIs[] =
{
	&t3618____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3618_TI;
extern Il2CppType t852_0_0_0;
extern void* RuntimeInvoker_t852 (MethodInfo* method, void* obj, void** args);
MethodInfo m27802_MI = 
{
	"get_Current", NULL, &t3618_TI, &t852_0_0_0, RuntimeInvoker_t852, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3618_MIs[] =
{
	&m27802_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3618_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3618_0_0_0;
extern Il2CppType t3618_1_0_0;
struct t3618;
extern TypeInfo t3618_TI;
extern Il2CppGenericClass t3618_GC;
TypeInfo t3618_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3618_MIs, t3618_PIs, NULL, NULL, NULL, NULL, NULL, &t3618_TI, t3618_ITIs, NULL, &EmptyCustomAttributesCache, &t3618_TI, &t3618_0_0_0, &t3618_1_0_0, NULL, &t3618_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2730.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2730_TI;
#include "t2730MD.h"

#include "t4.h"
#include "t16.h"
#include "t8.h"
#include "t1269.h"
#include "t15.h"
#include "t17.h"
extern TypeInfo t2730_TI;
extern TypeInfo t852_TI;
extern TypeInfo t1269_TI;
#include "t1269MD.h"
#include "t14MD.h"
extern MethodInfo m15868_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21207_MI;
struct t14;
#include "t1233.h"
 int32_t m21207 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21207_MI;


extern MethodInfo m15864_MI;
 void m15864 (t2730 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15865_MI;
 t4 * m15865 (t2730 * __this, MethodInfo* method){
	{
		int32_t L_0 = m15868(__this, &m15868_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t852_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15866_MI;
 void m15866 (t2730 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15867_MI;
 bool m15867 (t2730 * __this, MethodInfo* method){
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
extern MethodInfo m15868_MI;
 int32_t m15868 (t2730 * __this, MethodInfo* method){
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
		int32_t L_8 = m21207(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21207_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>
extern Il2CppType t14_0_0_1;
FieldInfo t2730_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2730_TI, offsetof(t2730, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2730_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2730_TI, offsetof(t2730, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2730_FIs[] =
{
	&t2730_f0_FieldInfo,
	&t2730_f1_FieldInfo,
	NULL
};
extern MethodInfo m15865_MI;
static PropertyInfo t2730____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2730_TI, "System.Collections.IEnumerator.Current", &m15865_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15868_MI;
static PropertyInfo t2730____Current_PropertyInfo = 
{
	&t2730_TI, "Current", &m15868_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2730_PIs[] =
{
	&t2730____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2730____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2730_m15864_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2730_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15864_MI = 
{
	".ctor", (methodPointerType)&m15864, &t2730_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2730_m15864_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2730_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15865_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15865, &t2730_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2730_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15866_MI = 
{
	"Dispose", (methodPointerType)&m15866, &t2730_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2730_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15867_MI = 
{
	"MoveNext", (methodPointerType)&m15867, &t2730_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2730_TI;
extern Il2CppType t852_0_0_0;
extern void* RuntimeInvoker_t852 (MethodInfo* method, void* obj, void** args);
MethodInfo m15868_MI = 
{
	"get_Current", (methodPointerType)&m15868, &t2730_TI, &t852_0_0_0, RuntimeInvoker_t852, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2730_MIs[] =
{
	&m15864_MI,
	&m15865_MI,
	&m15866_MI,
	&m15867_MI,
	&m15868_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15865_MI;
extern MethodInfo m15867_MI;
extern MethodInfo m15866_MI;
extern MethodInfo m15868_MI;
static MethodInfo* t2730_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15865_MI,
	&m15867_MI,
	&m15866_MI,
	&m15868_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3618_TI;
static TypeInfo* t2730_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3618_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3618_TI;
static Il2CppInterfaceOffsetPair t2730_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3618_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2730_0_0_0;
extern Il2CppType t2730_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2730_TI;
extern Il2CppGenericClass t2730_GC;
extern TypeInfo t14_TI;
TypeInfo t2730_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2730_MIs, t2730_PIs, t2730_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2730_TI, t2730_ITIs, t2730_VT, &EmptyCustomAttributesCache, &t2730_TI, &t2730_0_0_0, &t2730_1_0_0, t2730_IOs, &t2730_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2730)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4691_TI;

#include "mscorlib_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>
extern MethodInfo m27803_MI;
static PropertyInfo t4691____Count_PropertyInfo = 
{
	&t4691_TI, "Count", &m27803_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27804_MI;
static PropertyInfo t4691____IsReadOnly_PropertyInfo = 
{
	&t4691_TI, "IsReadOnly", &m27804_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4691_PIs[] =
{
	&t4691____Count_PropertyInfo,
	&t4691____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4691_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27803_MI = 
{
	"get_Count", NULL, &t4691_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4691_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m27804_MI = 
{
	"get_IsReadOnly", NULL, &t4691_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t852_0_0_0;
static ParameterInfo t4691_m27805_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t852_0_0_0},
};
extern TypeInfo t4691_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27805_MI = 
{
	"Add", NULL, &t4691_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4691_m27805_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4691_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m27806_MI = 
{
	"Clear", NULL, &t4691_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t852_0_0_0;
static ParameterInfo t4691_m27807_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t852_0_0_0},
};
extern TypeInfo t4691_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27807_MI = 
{
	"Contains", NULL, &t4691_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4691_m27807_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2977_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4691_m27808_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2977_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4691_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27808_MI = 
{
	"CopyTo", NULL, &t4691_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4691_m27808_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t852_0_0_0;
static ParameterInfo t4691_m27809_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t852_0_0_0},
};
extern TypeInfo t4691_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27809_MI = 
{
	"Remove", NULL, &t4691_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4691_m27809_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4691_MIs[] =
{
	&m27803_MI,
	&m27804_MI,
	&m27805_MI,
	&m27806_MI,
	&m27807_MI,
	&m27808_MI,
	&m27809_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4693_TI;
static TypeInfo* t4691_ITIs[] = 
{
	&t591_TI,
	&t4693_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4691_0_0_0;
extern Il2CppType t4691_1_0_0;
struct t4691;
extern TypeInfo t4691_TI;
extern Il2CppGenericClass t4691_GC;
TypeInfo t4691_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4691_MIs, t4691_PIs, NULL, NULL, NULL, NULL, NULL, &t4691_TI, t4691_ITIs, NULL, &EmptyCustomAttributesCache, &t4691_TI, &t4691_0_0_0, &t4691_1_0_0, NULL, &t4691_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4693_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Hashtable/EnumeratorMode>
extern TypeInfo t4693_TI;
extern Il2CppType t3618_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27810_MI = 
{
	"GetEnumerator", NULL, &t4693_TI, &t3618_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4693_MIs[] =
{
	&m27810_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4693_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4693_0_0_0;
extern Il2CppType t4693_1_0_0;
struct t4693;
extern TypeInfo t4693_TI;
extern Il2CppGenericClass t4693_GC;
TypeInfo t4693_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4693_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4693_TI, t4693_ITIs, NULL, &EmptyCustomAttributesCache, &t4693_TI, &t4693_0_0_0, &t4693_1_0_0, NULL, &t4693_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4692_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>
extern MethodInfo m27811_MI;
extern MethodInfo m27812_MI;
static PropertyInfo t4692____Item_PropertyInfo = 
{
	&t4692_TI, "Item", &m27811_MI, &m27812_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4692_PIs[] =
{
	&t4692____Item_PropertyInfo,
	NULL
};
extern Il2CppType t852_0_0_0;
static ParameterInfo t4692_m27813_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t852_0_0_0},
};
extern TypeInfo t4692_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27813_MI = 
{
	"IndexOf", NULL, &t4692_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4692_m27813_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t852_0_0_0;
static ParameterInfo t4692_m27814_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t852_0_0_0},
};
extern TypeInfo t4692_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27814_MI = 
{
	"Insert", NULL, &t4692_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4692_m27814_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4692_m27815_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4692_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27815_MI = 
{
	"RemoveAt", NULL, &t4692_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4692_m27815_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4692_m27811_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4692_TI;
extern Il2CppType t852_0_0_0;
extern void* RuntimeInvoker_t852_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27811_MI = 
{
	"get_Item", NULL, &t4692_TI, &t852_0_0_0, RuntimeInvoker_t852_t16, t4692_m27811_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t852_0_0_0;
static ParameterInfo t4692_m27812_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t852_0_0_0},
};
extern TypeInfo t4692_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27812_MI = 
{
	"set_Item", NULL, &t4692_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4692_m27812_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4692_MIs[] =
{
	&m27813_MI,
	&m27814_MI,
	&m27815_MI,
	&m27811_MI,
	&m27812_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4691_TI;
extern TypeInfo t4693_TI;
static TypeInfo* t4692_ITIs[] = 
{
	&t591_TI,
	&t4691_TI,
	&t4693_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4692_0_0_0;
extern Il2CppType t4692_1_0_0;
struct t4692;
extern TypeInfo t4692_TI;
extern Il2CppGenericClass t4692_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4692_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4692_MIs, t4692_PIs, NULL, NULL, NULL, NULL, NULL, &t4692_TI, t4692_ITIs, NULL, &t1400__CustomAttributeCache, &t4692_TI, &t4692_0_0_0, &t4692_1_0_0, NULL, &t4692_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3619_TI;

#include "t861.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>
extern MethodInfo m27816_MI;
static PropertyInfo t3619____Current_PropertyInfo = 
{
	&t3619_TI, "Current", &m27816_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3619_PIs[] =
{
	&t3619____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3619_TI;
extern Il2CppType t861_0_0_0;
extern void* RuntimeInvoker_t861 (MethodInfo* method, void* obj, void** args);
MethodInfo m27816_MI = 
{
	"get_Current", NULL, &t3619_TI, &t861_0_0_0, RuntimeInvoker_t861, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3619_MIs[] =
{
	&m27816_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3619_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3619_0_0_0;
extern Il2CppType t3619_1_0_0;
struct t3619;
extern TypeInfo t3619_TI;
extern Il2CppGenericClass t3619_GC;
TypeInfo t3619_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3619_MIs, t3619_PIs, NULL, NULL, NULL, NULL, NULL, &t3619_TI, t3619_ITIs, NULL, &EmptyCustomAttributesCache, &t3619_TI, &t3619_0_0_0, &t3619_1_0_0, NULL, &t3619_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2731.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2731_TI;
#include "t2731MD.h"

extern TypeInfo t2731_TI;
extern TypeInfo t861_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m15873_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21218_MI;
struct t14;
 int32_t m21218 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21218_MI;


extern MethodInfo m15869_MI;
 void m15869 (t2731 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15870_MI;
 t4 * m15870 (t2731 * __this, MethodInfo* method){
	{
		int32_t L_0 = m15873(__this, &m15873_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t861_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15871_MI;
 void m15871 (t2731 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15872_MI;
 bool m15872 (t2731 * __this, MethodInfo* method){
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
extern MethodInfo m15873_MI;
 int32_t m15873 (t2731 * __this, MethodInfo* method){
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
		int32_t L_8 = m21218(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21218_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>
extern Il2CppType t14_0_0_1;
FieldInfo t2731_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2731_TI, offsetof(t2731, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2731_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2731_TI, offsetof(t2731, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2731_FIs[] =
{
	&t2731_f0_FieldInfo,
	&t2731_f1_FieldInfo,
	NULL
};
extern MethodInfo m15870_MI;
static PropertyInfo t2731____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2731_TI, "System.Collections.IEnumerator.Current", &m15870_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15873_MI;
static PropertyInfo t2731____Current_PropertyInfo = 
{
	&t2731_TI, "Current", &m15873_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2731_PIs[] =
{
	&t2731____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2731____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2731_m15869_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2731_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15869_MI = 
{
	".ctor", (methodPointerType)&m15869, &t2731_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2731_m15869_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2731_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15870_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15870, &t2731_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2731_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15871_MI = 
{
	"Dispose", (methodPointerType)&m15871, &t2731_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2731_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15872_MI = 
{
	"MoveNext", (methodPointerType)&m15872, &t2731_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2731_TI;
extern Il2CppType t861_0_0_0;
extern void* RuntimeInvoker_t861 (MethodInfo* method, void* obj, void** args);
MethodInfo m15873_MI = 
{
	"get_Current", (methodPointerType)&m15873, &t2731_TI, &t861_0_0_0, RuntimeInvoker_t861, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2731_MIs[] =
{
	&m15869_MI,
	&m15870_MI,
	&m15871_MI,
	&m15872_MI,
	&m15873_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15870_MI;
extern MethodInfo m15872_MI;
extern MethodInfo m15871_MI;
extern MethodInfo m15873_MI;
static MethodInfo* t2731_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15870_MI,
	&m15872_MI,
	&m15871_MI,
	&m15873_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3619_TI;
static TypeInfo* t2731_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3619_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3619_TI;
static Il2CppInterfaceOffsetPair t2731_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3619_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2731_0_0_0;
extern Il2CppType t2731_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2731_TI;
extern Il2CppGenericClass t2731_GC;
extern TypeInfo t14_TI;
TypeInfo t2731_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2731_MIs, t2731_PIs, t2731_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2731_TI, t2731_ITIs, t2731_VT, &EmptyCustomAttributesCache, &t2731_TI, &t2731_0_0_0, &t2731_1_0_0, t2731_IOs, &t2731_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2731)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4694_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>
extern MethodInfo m27817_MI;
static PropertyInfo t4694____Count_PropertyInfo = 
{
	&t4694_TI, "Count", &m27817_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27818_MI;
static PropertyInfo t4694____IsReadOnly_PropertyInfo = 
{
	&t4694_TI, "IsReadOnly", &m27818_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4694_PIs[] =
{
	&t4694____Count_PropertyInfo,
	&t4694____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4694_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27817_MI = 
{
	"get_Count", NULL, &t4694_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4694_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m27818_MI = 
{
	"get_IsReadOnly", NULL, &t4694_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t861_0_0_0;
static ParameterInfo t4694_m27819_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t861_0_0_0},
};
extern TypeInfo t4694_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27819_MI = 
{
	"Add", NULL, &t4694_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4694_m27819_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4694_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m27820_MI = 
{
	"Clear", NULL, &t4694_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t861_0_0_0;
static ParameterInfo t4694_m27821_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t861_0_0_0},
};
extern TypeInfo t4694_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27821_MI = 
{
	"Contains", NULL, &t4694_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4694_m27821_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2978_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4694_m27822_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2978_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4694_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27822_MI = 
{
	"CopyTo", NULL, &t4694_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4694_m27822_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t861_0_0_0;
static ParameterInfo t4694_m27823_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t861_0_0_0},
};
extern TypeInfo t4694_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27823_MI = 
{
	"Remove", NULL, &t4694_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4694_m27823_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4694_MIs[] =
{
	&m27817_MI,
	&m27818_MI,
	&m27819_MI,
	&m27820_MI,
	&m27821_MI,
	&m27822_MI,
	&m27823_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4696_TI;
static TypeInfo* t4694_ITIs[] = 
{
	&t591_TI,
	&t4696_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4694_0_0_0;
extern Il2CppType t4694_1_0_0;
struct t4694;
extern TypeInfo t4694_TI;
extern Il2CppGenericClass t4694_GC;
TypeInfo t4694_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4694_MIs, t4694_PIs, NULL, NULL, NULL, NULL, NULL, &t4694_TI, t4694_ITIs, NULL, &EmptyCustomAttributesCache, &t4694_TI, &t4694_0_0_0, &t4694_1_0_0, NULL, &t4694_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4696_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>
extern TypeInfo t4696_TI;
extern Il2CppType t3619_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27824_MI = 
{
	"GetEnumerator", NULL, &t4696_TI, &t3619_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4696_MIs[] =
{
	&m27824_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4696_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4696_0_0_0;
extern Il2CppType t4696_1_0_0;
struct t4696;
extern TypeInfo t4696_TI;
extern Il2CppGenericClass t4696_GC;
TypeInfo t4696_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4696_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4696_TI, t4696_ITIs, NULL, &EmptyCustomAttributesCache, &t4696_TI, &t4696_0_0_0, &t4696_1_0_0, NULL, &t4696_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4695_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>
extern MethodInfo m27825_MI;
extern MethodInfo m27826_MI;
static PropertyInfo t4695____Item_PropertyInfo = 
{
	&t4695_TI, "Item", &m27825_MI, &m27826_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4695_PIs[] =
{
	&t4695____Item_PropertyInfo,
	NULL
};
extern Il2CppType t861_0_0_0;
static ParameterInfo t4695_m27827_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t861_0_0_0},
};
extern TypeInfo t4695_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27827_MI = 
{
	"IndexOf", NULL, &t4695_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4695_m27827_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t861_0_0_0;
static ParameterInfo t4695_m27828_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t861_0_0_0},
};
extern TypeInfo t4695_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27828_MI = 
{
	"Insert", NULL, &t4695_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4695_m27828_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4695_m27829_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4695_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27829_MI = 
{
	"RemoveAt", NULL, &t4695_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4695_m27829_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4695_m27825_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4695_TI;
extern Il2CppType t861_0_0_0;
extern void* RuntimeInvoker_t861_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27825_MI = 
{
	"get_Item", NULL, &t4695_TI, &t861_0_0_0, RuntimeInvoker_t861_t16, t4695_m27825_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t861_0_0_0;
static ParameterInfo t4695_m27826_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t861_0_0_0},
};
extern TypeInfo t4695_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27826_MI = 
{
	"set_Item", NULL, &t4695_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4695_m27826_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4695_MIs[] =
{
	&m27827_MI,
	&m27828_MI,
	&m27829_MI,
	&m27825_MI,
	&m27826_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4694_TI;
extern TypeInfo t4696_TI;
static TypeInfo* t4695_ITIs[] = 
{
	&t591_TI,
	&t4694_TI,
	&t4696_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4695_0_0_0;
extern Il2CppType t4695_1_0_0;
struct t4695;
extern TypeInfo t4695_TI;
extern Il2CppGenericClass t4695_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4695_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4695_MIs, t4695_PIs, NULL, NULL, NULL, NULL, NULL, &t4695_TI, t4695_ITIs, NULL, &t1400__CustomAttributeCache, &t4695_TI, &t4695_0_0_0, &t4695_1_0_0, NULL, &t4695_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3620_TI;

#include "t862.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>
extern MethodInfo m27830_MI;
static PropertyInfo t3620____Current_PropertyInfo = 
{
	&t3620_TI, "Current", &m27830_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3620_PIs[] =
{
	&t3620____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3620_TI;
extern Il2CppType t862_0_0_0;
extern void* RuntimeInvoker_t862 (MethodInfo* method, void* obj, void** args);
MethodInfo m27830_MI = 
{
	"get_Current", NULL, &t3620_TI, &t862_0_0_0, RuntimeInvoker_t862, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3620_MIs[] =
{
	&m27830_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3620_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3620_0_0_0;
extern Il2CppType t3620_1_0_0;
struct t3620;
extern TypeInfo t3620_TI;
extern Il2CppGenericClass t3620_GC;
TypeInfo t3620_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3620_MIs, t3620_PIs, NULL, NULL, NULL, NULL, NULL, &t3620_TI, t3620_ITIs, NULL, &EmptyCustomAttributesCache, &t3620_TI, &t3620_0_0_0, &t3620_1_0_0, NULL, &t3620_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2732.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2732_TI;
#include "t2732MD.h"

extern TypeInfo t2732_TI;
extern TypeInfo t862_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m15878_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21229_MI;
struct t14;
 int32_t m21229 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21229_MI;


extern MethodInfo m15874_MI;
 void m15874 (t2732 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15875_MI;
 t4 * m15875 (t2732 * __this, MethodInfo* method){
	{
		int32_t L_0 = m15878(__this, &m15878_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t862_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15876_MI;
 void m15876 (t2732 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15877_MI;
 bool m15877 (t2732 * __this, MethodInfo* method){
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
extern MethodInfo m15878_MI;
 int32_t m15878 (t2732 * __this, MethodInfo* method){
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
		int32_t L_8 = m21229(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21229_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>
extern Il2CppType t14_0_0_1;
FieldInfo t2732_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2732_TI, offsetof(t2732, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2732_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2732_TI, offsetof(t2732, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2732_FIs[] =
{
	&t2732_f0_FieldInfo,
	&t2732_f1_FieldInfo,
	NULL
};
extern MethodInfo m15875_MI;
static PropertyInfo t2732____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2732_TI, "System.Collections.IEnumerator.Current", &m15875_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15878_MI;
static PropertyInfo t2732____Current_PropertyInfo = 
{
	&t2732_TI, "Current", &m15878_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2732_PIs[] =
{
	&t2732____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2732____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2732_m15874_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2732_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15874_MI = 
{
	".ctor", (methodPointerType)&m15874, &t2732_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2732_m15874_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2732_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15875_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15875, &t2732_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2732_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15876_MI = 
{
	"Dispose", (methodPointerType)&m15876, &t2732_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2732_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15877_MI = 
{
	"MoveNext", (methodPointerType)&m15877, &t2732_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2732_TI;
extern Il2CppType t862_0_0_0;
extern void* RuntimeInvoker_t862 (MethodInfo* method, void* obj, void** args);
MethodInfo m15878_MI = 
{
	"get_Current", (methodPointerType)&m15878, &t2732_TI, &t862_0_0_0, RuntimeInvoker_t862, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2732_MIs[] =
{
	&m15874_MI,
	&m15875_MI,
	&m15876_MI,
	&m15877_MI,
	&m15878_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15875_MI;
extern MethodInfo m15877_MI;
extern MethodInfo m15876_MI;
extern MethodInfo m15878_MI;
static MethodInfo* t2732_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15875_MI,
	&m15877_MI,
	&m15876_MI,
	&m15878_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3620_TI;
static TypeInfo* t2732_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3620_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3620_TI;
static Il2CppInterfaceOffsetPair t2732_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3620_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2732_0_0_0;
extern Il2CppType t2732_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2732_TI;
extern Il2CppGenericClass t2732_GC;
extern TypeInfo t14_TI;
TypeInfo t2732_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2732_MIs, t2732_PIs, t2732_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2732_TI, t2732_ITIs, t2732_VT, &EmptyCustomAttributesCache, &t2732_TI, &t2732_0_0_0, &t2732_1_0_0, t2732_IOs, &t2732_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2732)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4697_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>
extern MethodInfo m27831_MI;
static PropertyInfo t4697____Count_PropertyInfo = 
{
	&t4697_TI, "Count", &m27831_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27832_MI;
static PropertyInfo t4697____IsReadOnly_PropertyInfo = 
{
	&t4697_TI, "IsReadOnly", &m27832_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4697_PIs[] =
{
	&t4697____Count_PropertyInfo,
	&t4697____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4697_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27831_MI = 
{
	"get_Count", NULL, &t4697_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4697_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m27832_MI = 
{
	"get_IsReadOnly", NULL, &t4697_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t862_0_0_0;
static ParameterInfo t4697_m27833_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t862_0_0_0},
};
extern TypeInfo t4697_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27833_MI = 
{
	"Add", NULL, &t4697_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4697_m27833_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4697_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m27834_MI = 
{
	"Clear", NULL, &t4697_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t862_0_0_0;
static ParameterInfo t4697_m27835_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t862_0_0_0},
};
extern TypeInfo t4697_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27835_MI = 
{
	"Contains", NULL, &t4697_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4697_m27835_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2979_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4697_m27836_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2979_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4697_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27836_MI = 
{
	"CopyTo", NULL, &t4697_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4697_m27836_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t862_0_0_0;
static ParameterInfo t4697_m27837_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t862_0_0_0},
};
extern TypeInfo t4697_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27837_MI = 
{
	"Remove", NULL, &t4697_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4697_m27837_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4697_MIs[] =
{
	&m27831_MI,
	&m27832_MI,
	&m27833_MI,
	&m27834_MI,
	&m27835_MI,
	&m27836_MI,
	&m27837_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4699_TI;
static TypeInfo* t4697_ITIs[] = 
{
	&t591_TI,
	&t4699_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4697_0_0_0;
extern Il2CppType t4697_1_0_0;
struct t4697;
extern TypeInfo t4697_TI;
extern Il2CppGenericClass t4697_GC;
TypeInfo t4697_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4697_MIs, t4697_PIs, NULL, NULL, NULL, NULL, NULL, &t4697_TI, t4697_ITIs, NULL, &EmptyCustomAttributesCache, &t4697_TI, &t4697_0_0_0, &t4697_1_0_0, NULL, &t4697_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4699_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>
extern TypeInfo t4699_TI;
extern Il2CppType t3620_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27838_MI = 
{
	"GetEnumerator", NULL, &t4699_TI, &t3620_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4699_MIs[] =
{
	&m27838_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4699_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4699_0_0_0;
extern Il2CppType t4699_1_0_0;
struct t4699;
extern TypeInfo t4699_TI;
extern Il2CppGenericClass t4699_GC;
TypeInfo t4699_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4699_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4699_TI, t4699_ITIs, NULL, &EmptyCustomAttributesCache, &t4699_TI, &t4699_0_0_0, &t4699_1_0_0, NULL, &t4699_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4698_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>
extern MethodInfo m27839_MI;
extern MethodInfo m27840_MI;
static PropertyInfo t4698____Item_PropertyInfo = 
{
	&t4698_TI, "Item", &m27839_MI, &m27840_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4698_PIs[] =
{
	&t4698____Item_PropertyInfo,
	NULL
};
extern Il2CppType t862_0_0_0;
static ParameterInfo t4698_m27841_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t862_0_0_0},
};
extern TypeInfo t4698_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27841_MI = 
{
	"IndexOf", NULL, &t4698_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4698_m27841_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t862_0_0_0;
static ParameterInfo t4698_m27842_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t862_0_0_0},
};
extern TypeInfo t4698_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27842_MI = 
{
	"Insert", NULL, &t4698_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4698_m27842_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4698_m27843_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4698_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27843_MI = 
{
	"RemoveAt", NULL, &t4698_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4698_m27843_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4698_m27839_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4698_TI;
extern Il2CppType t862_0_0_0;
extern void* RuntimeInvoker_t862_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27839_MI = 
{
	"get_Item", NULL, &t4698_TI, &t862_0_0_0, RuntimeInvoker_t862_t16, t4698_m27839_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t862_0_0_0;
static ParameterInfo t4698_m27840_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t862_0_0_0},
};
extern TypeInfo t4698_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27840_MI = 
{
	"set_Item", NULL, &t4698_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4698_m27840_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4698_MIs[] =
{
	&m27841_MI,
	&m27842_MI,
	&m27843_MI,
	&m27839_MI,
	&m27840_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4697_TI;
extern TypeInfo t4699_TI;
static TypeInfo* t4698_ITIs[] = 
{
	&t591_TI,
	&t4697_TI,
	&t4699_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4698_0_0_0;
extern Il2CppType t4698_1_0_0;
struct t4698;
extern TypeInfo t4698_TI;
extern Il2CppGenericClass t4698_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4698_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4698_MIs, t4698_PIs, NULL, NULL, NULL, NULL, NULL, &t4698_TI, t4698_ITIs, NULL, &t1400__CustomAttributeCache, &t4698_TI, &t4698_0_0_0, &t4698_1_0_0, NULL, &t4698_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3621_TI;

#include "t671.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggableAttribute>
extern MethodInfo m27844_MI;
static PropertyInfo t3621____Current_PropertyInfo = 
{
	&t3621_TI, "Current", &m27844_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3621_PIs[] =
{
	&t3621____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3621_TI;
extern Il2CppType t671_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27844_MI = 
{
	"get_Current", NULL, &t3621_TI, &t671_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3621_MIs[] =
{
	&m27844_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3621_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3621_0_0_0;
extern Il2CppType t3621_1_0_0;
struct t3621;
extern TypeInfo t3621_TI;
extern Il2CppGenericClass t3621_GC;
TypeInfo t3621_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3621_MIs, t3621_PIs, NULL, NULL, NULL, NULL, NULL, &t3621_TI, t3621_ITIs, NULL, &EmptyCustomAttributesCache, &t3621_TI, &t3621_0_0_0, &t3621_1_0_0, NULL, &t3621_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2733.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2733_TI;
#include "t2733MD.h"

extern TypeInfo t2733_TI;
extern TypeInfo t671_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m15883_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21240_MI;
struct t14;
struct t14;
 t4 * m16794_gshared (t14 * __this, int32_t p0, MethodInfo* method);
#define m16794(__this, p0, method) (t4 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
#define m21240(__this, p0, method) (t671 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21240_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>
extern Il2CppType t14_0_0_1;
FieldInfo t2733_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2733_TI, offsetof(t2733, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2733_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2733_TI, offsetof(t2733, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2733_FIs[] =
{
	&t2733_f0_FieldInfo,
	&t2733_f1_FieldInfo,
	NULL
};
extern MethodInfo m15880_MI;
static PropertyInfo t2733____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2733_TI, "System.Collections.IEnumerator.Current", &m15880_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15883_MI;
static PropertyInfo t2733____Current_PropertyInfo = 
{
	&t2733_TI, "Current", &m15883_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2733_PIs[] =
{
	&t2733____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2733____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2733_m15879_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2733_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15879_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2733_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2733_m15879_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2733_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15880_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2733_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2733_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15881_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2733_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2733_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15882_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2733_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2733_TI;
extern Il2CppType t671_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15883_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2733_TI, &t671_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2733_MIs[] =
{
	&m15879_MI,
	&m15880_MI,
	&m15881_MI,
	&m15882_MI,
	&m15883_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15880_MI;
extern MethodInfo m15882_MI;
extern MethodInfo m15881_MI;
extern MethodInfo m15883_MI;
static MethodInfo* t2733_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15880_MI,
	&m15882_MI,
	&m15881_MI,
	&m15883_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3621_TI;
static TypeInfo* t2733_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3621_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3621_TI;
static Il2CppInterfaceOffsetPair t2733_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3621_TI, 7},
};
extern MethodInfo m15883_MI;
extern TypeInfo t671_TI;
extern MethodInfo m21240_MI;
static void* t2733_RGCTXData[3] = 
{
	&m15883_MI,
	&t671_TI,
	&m21240_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2733_0_0_0;
extern Il2CppType t2733_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2733_TI;
extern Il2CppGenericClass t2733_GC;
extern TypeInfo t14_TI;
TypeInfo t2733_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2733_MIs, t2733_PIs, t2733_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2733_TI, t2733_ITIs, t2733_VT, &EmptyCustomAttributesCache, &t2733_TI, &t2733_0_0_0, &t2733_1_0_0, t2733_IOs, &t2733_GC, NULL, NULL, NULL, t2733_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2733)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4700_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>
extern MethodInfo m27845_MI;
static PropertyInfo t4700____Count_PropertyInfo = 
{
	&t4700_TI, "Count", &m27845_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27846_MI;
static PropertyInfo t4700____IsReadOnly_PropertyInfo = 
{
	&t4700_TI, "IsReadOnly", &m27846_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4700_PIs[] =
{
	&t4700____Count_PropertyInfo,
	&t4700____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4700_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27845_MI = 
{
	"get_Count", NULL, &t4700_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4700_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m27846_MI = 
{
	"get_IsReadOnly", NULL, &t4700_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t671_0_0_0;
static ParameterInfo t4700_m27847_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t671_0_0_0},
};
extern TypeInfo t4700_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27847_MI = 
{
	"Add", NULL, &t4700_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4700_m27847_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4700_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m27848_MI = 
{
	"Clear", NULL, &t4700_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t671_0_0_0;
static ParameterInfo t4700_m27849_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t671_0_0_0},
};
extern TypeInfo t4700_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27849_MI = 
{
	"Contains", NULL, &t4700_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4700_m27849_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2980_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4700_m27850_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2980_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4700_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27850_MI = 
{
	"CopyTo", NULL, &t4700_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4700_m27850_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t671_0_0_0;
static ParameterInfo t4700_m27851_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t671_0_0_0},
};
extern TypeInfo t4700_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27851_MI = 
{
	"Remove", NULL, &t4700_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4700_m27851_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4700_MIs[] =
{
	&m27845_MI,
	&m27846_MI,
	&m27847_MI,
	&m27848_MI,
	&m27849_MI,
	&m27850_MI,
	&m27851_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4702_TI;
static TypeInfo* t4700_ITIs[] = 
{
	&t591_TI,
	&t4702_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4700_0_0_0;
extern Il2CppType t4700_1_0_0;
struct t4700;
extern TypeInfo t4700_TI;
extern Il2CppGenericClass t4700_GC;
TypeInfo t4700_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4700_MIs, t4700_PIs, NULL, NULL, NULL, NULL, NULL, &t4700_TI, t4700_ITIs, NULL, &EmptyCustomAttributesCache, &t4700_TI, &t4700_0_0_0, &t4700_1_0_0, NULL, &t4700_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4702_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggableAttribute>
extern TypeInfo t4702_TI;
extern Il2CppType t3621_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27852_MI = 
{
	"GetEnumerator", NULL, &t4702_TI, &t3621_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4702_MIs[] =
{
	&m27852_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4702_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4702_0_0_0;
extern Il2CppType t4702_1_0_0;
struct t4702;
extern TypeInfo t4702_TI;
extern Il2CppGenericClass t4702_GC;
TypeInfo t4702_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4702_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4702_TI, t4702_ITIs, NULL, &EmptyCustomAttributesCache, &t4702_TI, &t4702_0_0_0, &t4702_1_0_0, NULL, &t4702_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4701_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute>
extern MethodInfo m27853_MI;
extern MethodInfo m27854_MI;
static PropertyInfo t4701____Item_PropertyInfo = 
{
	&t4701_TI, "Item", &m27853_MI, &m27854_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4701_PIs[] =
{
	&t4701____Item_PropertyInfo,
	NULL
};
extern Il2CppType t671_0_0_0;
static ParameterInfo t4701_m27855_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t671_0_0_0},
};
extern TypeInfo t4701_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27855_MI = 
{
	"IndexOf", NULL, &t4701_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4701_m27855_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t671_0_0_0;
static ParameterInfo t4701_m27856_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t671_0_0_0},
};
extern TypeInfo t4701_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27856_MI = 
{
	"Insert", NULL, &t4701_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4701_m27856_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4701_m27857_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4701_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27857_MI = 
{
	"RemoveAt", NULL, &t4701_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4701_m27857_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4701_m27853_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4701_TI;
extern Il2CppType t671_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27853_MI = 
{
	"get_Item", NULL, &t4701_TI, &t671_0_0_0, RuntimeInvoker_t4_t16, t4701_m27853_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t671_0_0_0;
static ParameterInfo t4701_m27854_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t671_0_0_0},
};
extern TypeInfo t4701_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27854_MI = 
{
	"set_Item", NULL, &t4701_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4701_m27854_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4701_MIs[] =
{
	&m27855_MI,
	&m27856_MI,
	&m27857_MI,
	&m27853_MI,
	&m27854_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4700_TI;
extern TypeInfo t4702_TI;
static TypeInfo* t4701_ITIs[] = 
{
	&t591_TI,
	&t4700_TI,
	&t4702_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4701_0_0_0;
extern Il2CppType t4701_1_0_0;
struct t4701;
extern TypeInfo t4701_TI;
extern Il2CppGenericClass t4701_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4701_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4701_MIs, t4701_PIs, NULL, NULL, NULL, NULL, NULL, &t4701_TI, t4701_ITIs, NULL, &t1400__CustomAttributeCache, &t4701_TI, &t4701_0_0_0, &t4701_1_0_0, NULL, &t4701_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3622_TI;

#include "t863.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>
extern MethodInfo m27858_MI;
static PropertyInfo t3622____Current_PropertyInfo = 
{
	&t3622_TI, "Current", &m27858_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3622_PIs[] =
{
	&t3622____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3622_TI;
extern Il2CppType t863_0_0_0;
extern void* RuntimeInvoker_t863 (MethodInfo* method, void* obj, void** args);
MethodInfo m27858_MI = 
{
	"get_Current", NULL, &t3622_TI, &t863_0_0_0, RuntimeInvoker_t863, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3622_MIs[] =
{
	&m27858_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3622_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3622_0_0_0;
extern Il2CppType t3622_1_0_0;
struct t3622;
extern TypeInfo t3622_TI;
extern Il2CppGenericClass t3622_GC;
TypeInfo t3622_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3622_MIs, t3622_PIs, NULL, NULL, NULL, NULL, NULL, &t3622_TI, t3622_ITIs, NULL, &EmptyCustomAttributesCache, &t3622_TI, &t3622_0_0_0, &t3622_1_0_0, NULL, &t3622_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2734.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2734_TI;
#include "t2734MD.h"

extern TypeInfo t2734_TI;
extern TypeInfo t863_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m15888_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21251_MI;
struct t14;
 int32_t m21251 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21251_MI;


extern MethodInfo m15884_MI;
 void m15884 (t2734 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15885_MI;
 t4 * m15885 (t2734 * __this, MethodInfo* method){
	{
		int32_t L_0 = m15888(__this, &m15888_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t863_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15886_MI;
 void m15886 (t2734 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15887_MI;
 bool m15887 (t2734 * __this, MethodInfo* method){
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
extern MethodInfo m15888_MI;
 int32_t m15888 (t2734 * __this, MethodInfo* method){
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
		int32_t L_8 = m21251(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21251_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>
extern Il2CppType t14_0_0_1;
FieldInfo t2734_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2734_TI, offsetof(t2734, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2734_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2734_TI, offsetof(t2734, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2734_FIs[] =
{
	&t2734_f0_FieldInfo,
	&t2734_f1_FieldInfo,
	NULL
};
extern MethodInfo m15885_MI;
static PropertyInfo t2734____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2734_TI, "System.Collections.IEnumerator.Current", &m15885_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15888_MI;
static PropertyInfo t2734____Current_PropertyInfo = 
{
	&t2734_TI, "Current", &m15888_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2734_PIs[] =
{
	&t2734____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2734____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2734_m15884_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2734_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15884_MI = 
{
	".ctor", (methodPointerType)&m15884, &t2734_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2734_m15884_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2734_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15885_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15885, &t2734_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2734_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15886_MI = 
{
	"Dispose", (methodPointerType)&m15886, &t2734_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2734_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15887_MI = 
{
	"MoveNext", (methodPointerType)&m15887, &t2734_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2734_TI;
extern Il2CppType t863_0_0_0;
extern void* RuntimeInvoker_t863 (MethodInfo* method, void* obj, void** args);
MethodInfo m15888_MI = 
{
	"get_Current", (methodPointerType)&m15888, &t2734_TI, &t863_0_0_0, RuntimeInvoker_t863, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2734_MIs[] =
{
	&m15884_MI,
	&m15885_MI,
	&m15886_MI,
	&m15887_MI,
	&m15888_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15885_MI;
extern MethodInfo m15887_MI;
extern MethodInfo m15886_MI;
extern MethodInfo m15888_MI;
static MethodInfo* t2734_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15885_MI,
	&m15887_MI,
	&m15886_MI,
	&m15888_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3622_TI;
static TypeInfo* t2734_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3622_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3622_TI;
static Il2CppInterfaceOffsetPair t2734_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3622_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2734_0_0_0;
extern Il2CppType t2734_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2734_TI;
extern Il2CppGenericClass t2734_GC;
extern TypeInfo t14_TI;
TypeInfo t2734_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2734_MIs, t2734_PIs, t2734_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2734_TI, t2734_ITIs, t2734_VT, &EmptyCustomAttributesCache, &t2734_TI, &t2734_0_0_0, &t2734_1_0_0, t2734_IOs, &t2734_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2734)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4703_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>
extern MethodInfo m27859_MI;
static PropertyInfo t4703____Count_PropertyInfo = 
{
	&t4703_TI, "Count", &m27859_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27860_MI;
static PropertyInfo t4703____IsReadOnly_PropertyInfo = 
{
	&t4703_TI, "IsReadOnly", &m27860_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4703_PIs[] =
{
	&t4703____Count_PropertyInfo,
	&t4703____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4703_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27859_MI = 
{
	"get_Count", NULL, &t4703_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4703_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m27860_MI = 
{
	"get_IsReadOnly", NULL, &t4703_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t863_0_0_0;
static ParameterInfo t4703_m27861_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t863_0_0_0},
};
extern TypeInfo t4703_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27861_MI = 
{
	"Add", NULL, &t4703_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4703_m27861_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4703_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m27862_MI = 
{
	"Clear", NULL, &t4703_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t863_0_0_0;
static ParameterInfo t4703_m27863_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t863_0_0_0},
};
extern TypeInfo t4703_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27863_MI = 
{
	"Contains", NULL, &t4703_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4703_m27863_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2981_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4703_m27864_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2981_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4703_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27864_MI = 
{
	"CopyTo", NULL, &t4703_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4703_m27864_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t863_0_0_0;
static ParameterInfo t4703_m27865_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t863_0_0_0},
};
extern TypeInfo t4703_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27865_MI = 
{
	"Remove", NULL, &t4703_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4703_m27865_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4703_MIs[] =
{
	&m27859_MI,
	&m27860_MI,
	&m27861_MI,
	&m27862_MI,
	&m27863_MI,
	&m27864_MI,
	&m27865_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4705_TI;
static TypeInfo* t4703_ITIs[] = 
{
	&t591_TI,
	&t4705_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4703_0_0_0;
extern Il2CppType t4703_1_0_0;
struct t4703;
extern TypeInfo t4703_TI;
extern Il2CppGenericClass t4703_GC;
TypeInfo t4703_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4703_MIs, t4703_PIs, NULL, NULL, NULL, NULL, NULL, &t4703_TI, t4703_ITIs, NULL, &EmptyCustomAttributesCache, &t4703_TI, &t4703_0_0_0, &t4703_1_0_0, NULL, &t4703_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4705_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>
extern TypeInfo t4705_TI;
extern Il2CppType t3622_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27866_MI = 
{
	"GetEnumerator", NULL, &t4705_TI, &t3622_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4705_MIs[] =
{
	&m27866_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4705_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4705_0_0_0;
extern Il2CppType t4705_1_0_0;
struct t4705;
extern TypeInfo t4705_TI;
extern Il2CppGenericClass t4705_GC;
TypeInfo t4705_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4705_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4705_TI, t4705_ITIs, NULL, &EmptyCustomAttributesCache, &t4705_TI, &t4705_0_0_0, &t4705_1_0_0, NULL, &t4705_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4704_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>
extern MethodInfo m27867_MI;
extern MethodInfo m27868_MI;
static PropertyInfo t4704____Item_PropertyInfo = 
{
	&t4704_TI, "Item", &m27867_MI, &m27868_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4704_PIs[] =
{
	&t4704____Item_PropertyInfo,
	NULL
};
extern Il2CppType t863_0_0_0;
static ParameterInfo t4704_m27869_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t863_0_0_0},
};
extern TypeInfo t4704_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27869_MI = 
{
	"IndexOf", NULL, &t4704_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4704_m27869_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t863_0_0_0;
static ParameterInfo t4704_m27870_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t863_0_0_0},
};
extern TypeInfo t4704_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27870_MI = 
{
	"Insert", NULL, &t4704_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4704_m27870_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4704_m27871_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4704_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27871_MI = 
{
	"RemoveAt", NULL, &t4704_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4704_m27871_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4704_m27867_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4704_TI;
extern Il2CppType t863_0_0_0;
extern void* RuntimeInvoker_t863_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27867_MI = 
{
	"get_Item", NULL, &t4704_TI, &t863_0_0_0, RuntimeInvoker_t863_t16, t4704_m27867_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t863_0_0_0;
static ParameterInfo t4704_m27868_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t863_0_0_0},
};
extern TypeInfo t4704_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27868_MI = 
{
	"set_Item", NULL, &t4704_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4704_m27868_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4704_MIs[] =
{
	&m27869_MI,
	&m27870_MI,
	&m27871_MI,
	&m27867_MI,
	&m27868_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4703_TI;
extern TypeInfo t4705_TI;
static TypeInfo* t4704_ITIs[] = 
{
	&t591_TI,
	&t4703_TI,
	&t4705_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4704_0_0_0;
extern Il2CppType t4704_1_0_0;
struct t4704;
extern TypeInfo t4704_TI;
extern Il2CppGenericClass t4704_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4704_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4704_MIs, t4704_PIs, NULL, NULL, NULL, NULL, NULL, &t4704_TI, t4704_ITIs, NULL, &t1400__CustomAttributeCache, &t4704_TI, &t4704_0_0_0, &t4704_1_0_0, NULL, &t4704_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3623_TI;

#include "t864.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>
extern MethodInfo m27872_MI;
static PropertyInfo t3623____Current_PropertyInfo = 
{
	&t3623_TI, "Current", &m27872_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3623_PIs[] =
{
	&t3623____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3623_TI;
extern Il2CppType t864_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27872_MI = 
{
	"get_Current", NULL, &t3623_TI, &t864_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3623_MIs[] =
{
	&m27872_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3623_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3623_0_0_0;
extern Il2CppType t3623_1_0_0;
struct t3623;
extern TypeInfo t3623_TI;
extern Il2CppGenericClass t3623_GC;
TypeInfo t3623_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3623_MIs, t3623_PIs, NULL, NULL, NULL, NULL, NULL, &t3623_TI, t3623_ITIs, NULL, &EmptyCustomAttributesCache, &t3623_TI, &t3623_0_0_0, &t3623_1_0_0, NULL, &t3623_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2735.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2735_TI;
#include "t2735MD.h"

extern TypeInfo t2735_TI;
extern TypeInfo t864_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m15893_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21262_MI;
struct t14;
#define m21262(__this, p0, method) (t864 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21262_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>
extern Il2CppType t14_0_0_1;
FieldInfo t2735_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2735_TI, offsetof(t2735, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2735_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2735_TI, offsetof(t2735, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2735_FIs[] =
{
	&t2735_f0_FieldInfo,
	&t2735_f1_FieldInfo,
	NULL
};
extern MethodInfo m15890_MI;
static PropertyInfo t2735____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2735_TI, "System.Collections.IEnumerator.Current", &m15890_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15893_MI;
static PropertyInfo t2735____Current_PropertyInfo = 
{
	&t2735_TI, "Current", &m15893_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2735_PIs[] =
{
	&t2735____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2735____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2735_m15889_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2735_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15889_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2735_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2735_m15889_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2735_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15890_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2735_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2735_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15891_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2735_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2735_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15892_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2735_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2735_TI;
extern Il2CppType t864_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15893_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2735_TI, &t864_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2735_MIs[] =
{
	&m15889_MI,
	&m15890_MI,
	&m15891_MI,
	&m15892_MI,
	&m15893_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15890_MI;
extern MethodInfo m15892_MI;
extern MethodInfo m15891_MI;
extern MethodInfo m15893_MI;
static MethodInfo* t2735_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15890_MI,
	&m15892_MI,
	&m15891_MI,
	&m15893_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3623_TI;
static TypeInfo* t2735_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3623_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3623_TI;
static Il2CppInterfaceOffsetPair t2735_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3623_TI, 7},
};
extern MethodInfo m15893_MI;
extern TypeInfo t864_TI;
extern MethodInfo m21262_MI;
static void* t2735_RGCTXData[3] = 
{
	&m15893_MI,
	&t864_TI,
	&m21262_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2735_0_0_0;
extern Il2CppType t2735_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2735_TI;
extern Il2CppGenericClass t2735_GC;
extern TypeInfo t14_TI;
TypeInfo t2735_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2735_MIs, t2735_PIs, t2735_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2735_TI, t2735_ITIs, t2735_VT, &EmptyCustomAttributesCache, &t2735_TI, &t2735_0_0_0, &t2735_1_0_0, t2735_IOs, &t2735_GC, NULL, NULL, NULL, t2735_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2735)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4706_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>
extern MethodInfo m27873_MI;
static PropertyInfo t4706____Count_PropertyInfo = 
{
	&t4706_TI, "Count", &m27873_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27874_MI;
static PropertyInfo t4706____IsReadOnly_PropertyInfo = 
{
	&t4706_TI, "IsReadOnly", &m27874_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4706_PIs[] =
{
	&t4706____Count_PropertyInfo,
	&t4706____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4706_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27873_MI = 
{
	"get_Count", NULL, &t4706_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4706_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m27874_MI = 
{
	"get_IsReadOnly", NULL, &t4706_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t864_0_0_0;
static ParameterInfo t4706_m27875_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t864_0_0_0},
};
extern TypeInfo t4706_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27875_MI = 
{
	"Add", NULL, &t4706_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4706_m27875_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4706_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m27876_MI = 
{
	"Clear", NULL, &t4706_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t864_0_0_0;
static ParameterInfo t4706_m27877_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t864_0_0_0},
};
extern TypeInfo t4706_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27877_MI = 
{
	"Contains", NULL, &t4706_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4706_m27877_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2982_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4706_m27878_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2982_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4706_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27878_MI = 
{
	"CopyTo", NULL, &t4706_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4706_m27878_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t864_0_0_0;
static ParameterInfo t4706_m27879_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t864_0_0_0},
};
extern TypeInfo t4706_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27879_MI = 
{
	"Remove", NULL, &t4706_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4706_m27879_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4706_MIs[] =
{
	&m27873_MI,
	&m27874_MI,
	&m27875_MI,
	&m27876_MI,
	&m27877_MI,
	&m27878_MI,
	&m27879_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4708_TI;
static TypeInfo* t4706_ITIs[] = 
{
	&t591_TI,
	&t4708_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4706_0_0_0;
extern Il2CppType t4706_1_0_0;
struct t4706;
extern TypeInfo t4706_TI;
extern Il2CppGenericClass t4706_GC;
TypeInfo t4706_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4706_MIs, t4706_PIs, NULL, NULL, NULL, NULL, NULL, &t4706_TI, t4706_ITIs, NULL, &EmptyCustomAttributesCache, &t4706_TI, &t4706_0_0_0, &t4706_1_0_0, NULL, &t4706_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4708_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerDisplayAttribute>
extern TypeInfo t4708_TI;
extern Il2CppType t3623_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27880_MI = 
{
	"GetEnumerator", NULL, &t4708_TI, &t3623_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4708_MIs[] =
{
	&m27880_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4708_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4708_0_0_0;
extern Il2CppType t4708_1_0_0;
struct t4708;
extern TypeInfo t4708_TI;
extern Il2CppGenericClass t4708_GC;
TypeInfo t4708_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4708_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4708_TI, t4708_ITIs, NULL, &EmptyCustomAttributesCache, &t4708_TI, &t4708_0_0_0, &t4708_1_0_0, NULL, &t4708_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4707_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.DebuggerDisplayAttribute>
extern MethodInfo m27881_MI;
extern MethodInfo m27882_MI;
static PropertyInfo t4707____Item_PropertyInfo = 
{
	&t4707_TI, "Item", &m27881_MI, &m27882_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4707_PIs[] =
{
	&t4707____Item_PropertyInfo,
	NULL
};
extern Il2CppType t864_0_0_0;
static ParameterInfo t4707_m27883_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t864_0_0_0},
};
extern TypeInfo t4707_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27883_MI = 
{
	"IndexOf", NULL, &t4707_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4707_m27883_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t864_0_0_0;
static ParameterInfo t4707_m27884_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t864_0_0_0},
};
extern TypeInfo t4707_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27884_MI = 
{
	"Insert", NULL, &t4707_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4707_m27884_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4707_m27885_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4707_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27885_MI = 
{
	"RemoveAt", NULL, &t4707_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4707_m27885_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4707_m27881_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4707_TI;
extern Il2CppType t864_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27881_MI = 
{
	"get_Item", NULL, &t4707_TI, &t864_0_0_0, RuntimeInvoker_t4_t16, t4707_m27881_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t864_0_0_0;
static ParameterInfo t4707_m27882_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t864_0_0_0},
};
extern TypeInfo t4707_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27882_MI = 
{
	"set_Item", NULL, &t4707_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4707_m27882_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4707_MIs[] =
{
	&m27883_MI,
	&m27884_MI,
	&m27885_MI,
	&m27881_MI,
	&m27882_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4706_TI;
extern TypeInfo t4708_TI;
static TypeInfo* t4707_ITIs[] = 
{
	&t591_TI,
	&t4706_TI,
	&t4708_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4707_0_0_0;
extern Il2CppType t4707_1_0_0;
struct t4707;
extern TypeInfo t4707_TI;
extern Il2CppGenericClass t4707_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4707_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4707_MIs, t4707_PIs, NULL, NULL, NULL, NULL, NULL, &t4707_TI, t4707_ITIs, NULL, &t1400__CustomAttributeCache, &t4707_TI, &t4707_0_0_0, &t4707_1_0_0, NULL, &t4707_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3624_TI;

#include "t865.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>
extern MethodInfo m27886_MI;
static PropertyInfo t3624____Current_PropertyInfo = 
{
	&t3624_TI, "Current", &m27886_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3624_PIs[] =
{
	&t3624____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3624_TI;
extern Il2CppType t865_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27886_MI = 
{
	"get_Current", NULL, &t3624_TI, &t865_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3624_MIs[] =
{
	&m27886_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3624_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3624_0_0_0;
extern Il2CppType t3624_1_0_0;
struct t3624;
extern TypeInfo t3624_TI;
extern Il2CppGenericClass t3624_GC;
TypeInfo t3624_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3624_MIs, t3624_PIs, NULL, NULL, NULL, NULL, NULL, &t3624_TI, t3624_ITIs, NULL, &EmptyCustomAttributesCache, &t3624_TI, &t3624_0_0_0, &t3624_1_0_0, NULL, &t3624_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2736.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2736_TI;
#include "t2736MD.h"

extern TypeInfo t2736_TI;
extern TypeInfo t865_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m15898_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21273_MI;
struct t14;
#define m21273(__this, p0, method) (t865 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21273_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>
extern Il2CppType t14_0_0_1;
FieldInfo t2736_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2736_TI, offsetof(t2736, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2736_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2736_TI, offsetof(t2736, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2736_FIs[] =
{
	&t2736_f0_FieldInfo,
	&t2736_f1_FieldInfo,
	NULL
};
extern MethodInfo m15895_MI;
static PropertyInfo t2736____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2736_TI, "System.Collections.IEnumerator.Current", &m15895_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15898_MI;
static PropertyInfo t2736____Current_PropertyInfo = 
{
	&t2736_TI, "Current", &m15898_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2736_PIs[] =
{
	&t2736____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2736____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2736_m15894_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2736_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15894_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2736_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2736_m15894_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2736_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15895_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2736_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2736_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15896_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2736_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2736_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15897_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2736_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2736_TI;
extern Il2CppType t865_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15898_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2736_TI, &t865_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2736_MIs[] =
{
	&m15894_MI,
	&m15895_MI,
	&m15896_MI,
	&m15897_MI,
	&m15898_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15895_MI;
extern MethodInfo m15897_MI;
extern MethodInfo m15896_MI;
extern MethodInfo m15898_MI;
static MethodInfo* t2736_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15895_MI,
	&m15897_MI,
	&m15896_MI,
	&m15898_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3624_TI;
static TypeInfo* t2736_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3624_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3624_TI;
static Il2CppInterfaceOffsetPair t2736_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3624_TI, 7},
};
extern MethodInfo m15898_MI;
extern TypeInfo t865_TI;
extern MethodInfo m21273_MI;
static void* t2736_RGCTXData[3] = 
{
	&m15898_MI,
	&t865_TI,
	&m21273_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2736_0_0_0;
extern Il2CppType t2736_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2736_TI;
extern Il2CppGenericClass t2736_GC;
extern TypeInfo t14_TI;
TypeInfo t2736_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2736_MIs, t2736_PIs, t2736_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2736_TI, t2736_ITIs, t2736_VT, &EmptyCustomAttributesCache, &t2736_TI, &t2736_0_0_0, &t2736_1_0_0, t2736_IOs, &t2736_GC, NULL, NULL, NULL, t2736_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2736)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4709_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>
extern MethodInfo m27887_MI;
static PropertyInfo t4709____Count_PropertyInfo = 
{
	&t4709_TI, "Count", &m27887_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27888_MI;
static PropertyInfo t4709____IsReadOnly_PropertyInfo = 
{
	&t4709_TI, "IsReadOnly", &m27888_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4709_PIs[] =
{
	&t4709____Count_PropertyInfo,
	&t4709____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4709_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27887_MI = 
{
	"get_Count", NULL, &t4709_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4709_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m27888_MI = 
{
	"get_IsReadOnly", NULL, &t4709_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t865_0_0_0;
static ParameterInfo t4709_m27889_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t865_0_0_0},
};
extern TypeInfo t4709_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27889_MI = 
{
	"Add", NULL, &t4709_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4709_m27889_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4709_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m27890_MI = 
{
	"Clear", NULL, &t4709_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t865_0_0_0;
static ParameterInfo t4709_m27891_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t865_0_0_0},
};
extern TypeInfo t4709_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27891_MI = 
{
	"Contains", NULL, &t4709_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4709_m27891_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2983_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4709_m27892_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2983_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4709_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27892_MI = 
{
	"CopyTo", NULL, &t4709_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4709_m27892_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t865_0_0_0;
static ParameterInfo t4709_m27893_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t865_0_0_0},
};
extern TypeInfo t4709_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27893_MI = 
{
	"Remove", NULL, &t4709_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4709_m27893_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4709_MIs[] =
{
	&m27887_MI,
	&m27888_MI,
	&m27889_MI,
	&m27890_MI,
	&m27891_MI,
	&m27892_MI,
	&m27893_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4711_TI;
static TypeInfo* t4709_ITIs[] = 
{
	&t591_TI,
	&t4711_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4709_0_0_0;
extern Il2CppType t4709_1_0_0;
struct t4709;
extern TypeInfo t4709_TI;
extern Il2CppGenericClass t4709_GC;
TypeInfo t4709_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4709_MIs, t4709_PIs, NULL, NULL, NULL, NULL, NULL, &t4709_TI, t4709_ITIs, NULL, &EmptyCustomAttributesCache, &t4709_TI, &t4709_0_0_0, &t4709_1_0_0, NULL, &t4709_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4711_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerStepThroughAttribute>
extern TypeInfo t4711_TI;
extern Il2CppType t3624_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27894_MI = 
{
	"GetEnumerator", NULL, &t4711_TI, &t3624_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4711_MIs[] =
{
	&m27894_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4711_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4711_0_0_0;
extern Il2CppType t4711_1_0_0;
struct t4711;
extern TypeInfo t4711_TI;
extern Il2CppGenericClass t4711_GC;
TypeInfo t4711_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4711_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4711_TI, t4711_ITIs, NULL, &EmptyCustomAttributesCache, &t4711_TI, &t4711_0_0_0, &t4711_1_0_0, NULL, &t4711_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4710_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.DebuggerStepThroughAttribute>
extern MethodInfo m27895_MI;
extern MethodInfo m27896_MI;
static PropertyInfo t4710____Item_PropertyInfo = 
{
	&t4710_TI, "Item", &m27895_MI, &m27896_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4710_PIs[] =
{
	&t4710____Item_PropertyInfo,
	NULL
};
extern Il2CppType t865_0_0_0;
static ParameterInfo t4710_m27897_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t865_0_0_0},
};
extern TypeInfo t4710_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27897_MI = 
{
	"IndexOf", NULL, &t4710_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4710_m27897_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t865_0_0_0;
static ParameterInfo t4710_m27898_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t865_0_0_0},
};
extern TypeInfo t4710_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27898_MI = 
{
	"Insert", NULL, &t4710_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4710_m27898_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4710_m27899_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4710_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27899_MI = 
{
	"RemoveAt", NULL, &t4710_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4710_m27899_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4710_m27895_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4710_TI;
extern Il2CppType t865_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27895_MI = 
{
	"get_Item", NULL, &t4710_TI, &t865_0_0_0, RuntimeInvoker_t4_t16, t4710_m27895_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t865_0_0_0;
static ParameterInfo t4710_m27896_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t865_0_0_0},
};
extern TypeInfo t4710_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27896_MI = 
{
	"set_Item", NULL, &t4710_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4710_m27896_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4710_MIs[] =
{
	&m27897_MI,
	&m27898_MI,
	&m27899_MI,
	&m27895_MI,
	&m27896_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4709_TI;
extern TypeInfo t4711_TI;
static TypeInfo* t4710_ITIs[] = 
{
	&t591_TI,
	&t4709_TI,
	&t4711_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4710_0_0_0;
extern Il2CppType t4710_1_0_0;
struct t4710;
extern TypeInfo t4710_TI;
extern Il2CppGenericClass t4710_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4710_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4710_MIs, t4710_PIs, NULL, NULL, NULL, NULL, NULL, &t4710_TI, t4710_ITIs, NULL, &t1400__CustomAttributeCache, &t4710_TI, &t4710_0_0_0, &t4710_1_0_0, NULL, &t4710_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3625_TI;

#include "t866.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>
extern MethodInfo m27900_MI;
static PropertyInfo t3625____Current_PropertyInfo = 
{
	&t3625_TI, "Current", &m27900_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3625_PIs[] =
{
	&t3625____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3625_TI;
extern Il2CppType t866_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27900_MI = 
{
	"get_Current", NULL, &t3625_TI, &t866_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3625_MIs[] =
{
	&m27900_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3625_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3625_0_0_0;
extern Il2CppType t3625_1_0_0;
struct t3625;
extern TypeInfo t3625_TI;
extern Il2CppGenericClass t3625_GC;
TypeInfo t3625_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3625_MIs, t3625_PIs, NULL, NULL, NULL, NULL, NULL, &t3625_TI, t3625_ITIs, NULL, &EmptyCustomAttributesCache, &t3625_TI, &t3625_0_0_0, &t3625_1_0_0, NULL, &t3625_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2737.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2737_TI;
#include "t2737MD.h"

extern TypeInfo t2737_TI;
extern TypeInfo t866_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m15903_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21284_MI;
struct t14;
#define m21284(__this, p0, method) (t866 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21284_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>
extern Il2CppType t14_0_0_1;
FieldInfo t2737_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2737_TI, offsetof(t2737, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2737_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2737_TI, offsetof(t2737, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2737_FIs[] =
{
	&t2737_f0_FieldInfo,
	&t2737_f1_FieldInfo,
	NULL
};
extern MethodInfo m15900_MI;
static PropertyInfo t2737____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2737_TI, "System.Collections.IEnumerator.Current", &m15900_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15903_MI;
static PropertyInfo t2737____Current_PropertyInfo = 
{
	&t2737_TI, "Current", &m15903_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2737_PIs[] =
{
	&t2737____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2737____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2737_m15899_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2737_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15899_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2737_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2737_m15899_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2737_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15900_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2737_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2737_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15901_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2737_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2737_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15902_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2737_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2737_TI;
extern Il2CppType t866_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15903_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2737_TI, &t866_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2737_MIs[] =
{
	&m15899_MI,
	&m15900_MI,
	&m15901_MI,
	&m15902_MI,
	&m15903_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15900_MI;
extern MethodInfo m15902_MI;
extern MethodInfo m15901_MI;
extern MethodInfo m15903_MI;
static MethodInfo* t2737_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15900_MI,
	&m15902_MI,
	&m15901_MI,
	&m15903_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3625_TI;
static TypeInfo* t2737_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3625_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3625_TI;
static Il2CppInterfaceOffsetPair t2737_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3625_TI, 7},
};
extern MethodInfo m15903_MI;
extern TypeInfo t866_TI;
extern MethodInfo m21284_MI;
static void* t2737_RGCTXData[3] = 
{
	&m15903_MI,
	&t866_TI,
	&m21284_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2737_0_0_0;
extern Il2CppType t2737_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2737_TI;
extern Il2CppGenericClass t2737_GC;
extern TypeInfo t14_TI;
TypeInfo t2737_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2737_MIs, t2737_PIs, t2737_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2737_TI, t2737_ITIs, t2737_VT, &EmptyCustomAttributesCache, &t2737_TI, &t2737_0_0_0, &t2737_1_0_0, t2737_IOs, &t2737_GC, NULL, NULL, NULL, t2737_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2737)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4712_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>
extern MethodInfo m27901_MI;
static PropertyInfo t4712____Count_PropertyInfo = 
{
	&t4712_TI, "Count", &m27901_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27902_MI;
static PropertyInfo t4712____IsReadOnly_PropertyInfo = 
{
	&t4712_TI, "IsReadOnly", &m27902_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4712_PIs[] =
{
	&t4712____Count_PropertyInfo,
	&t4712____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4712_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27901_MI = 
{
	"get_Count", NULL, &t4712_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4712_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m27902_MI = 
{
	"get_IsReadOnly", NULL, &t4712_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t866_0_0_0;
static ParameterInfo t4712_m27903_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t866_0_0_0},
};
extern TypeInfo t4712_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27903_MI = 
{
	"Add", NULL, &t4712_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4712_m27903_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4712_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m27904_MI = 
{
	"Clear", NULL, &t4712_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t866_0_0_0;
static ParameterInfo t4712_m27905_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t866_0_0_0},
};
extern TypeInfo t4712_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27905_MI = 
{
	"Contains", NULL, &t4712_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4712_m27905_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2984_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4712_m27906_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2984_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4712_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27906_MI = 
{
	"CopyTo", NULL, &t4712_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4712_m27906_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t866_0_0_0;
static ParameterInfo t4712_m27907_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t866_0_0_0},
};
extern TypeInfo t4712_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27907_MI = 
{
	"Remove", NULL, &t4712_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4712_m27907_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4712_MIs[] =
{
	&m27901_MI,
	&m27902_MI,
	&m27903_MI,
	&m27904_MI,
	&m27905_MI,
	&m27906_MI,
	&m27907_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4714_TI;
static TypeInfo* t4712_ITIs[] = 
{
	&t591_TI,
	&t4714_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4712_0_0_0;
extern Il2CppType t4712_1_0_0;
struct t4712;
extern TypeInfo t4712_TI;
extern Il2CppGenericClass t4712_GC;
TypeInfo t4712_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4712_MIs, t4712_PIs, NULL, NULL, NULL, NULL, NULL, &t4712_TI, t4712_ITIs, NULL, &EmptyCustomAttributesCache, &t4712_TI, &t4712_0_0_0, &t4712_1_0_0, NULL, &t4712_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4714_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerTypeProxyAttribute>
extern TypeInfo t4714_TI;
extern Il2CppType t3625_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27908_MI = 
{
	"GetEnumerator", NULL, &t4714_TI, &t3625_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4714_MIs[] =
{
	&m27908_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4714_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4714_0_0_0;
extern Il2CppType t4714_1_0_0;
struct t4714;
extern TypeInfo t4714_TI;
extern Il2CppGenericClass t4714_GC;
TypeInfo t4714_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4714_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4714_TI, t4714_ITIs, NULL, &EmptyCustomAttributesCache, &t4714_TI, &t4714_0_0_0, &t4714_1_0_0, NULL, &t4714_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4713_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.DebuggerTypeProxyAttribute>
extern MethodInfo m27909_MI;
extern MethodInfo m27910_MI;
static PropertyInfo t4713____Item_PropertyInfo = 
{
	&t4713_TI, "Item", &m27909_MI, &m27910_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4713_PIs[] =
{
	&t4713____Item_PropertyInfo,
	NULL
};
extern Il2CppType t866_0_0_0;
static ParameterInfo t4713_m27911_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t866_0_0_0},
};
extern TypeInfo t4713_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27911_MI = 
{
	"IndexOf", NULL, &t4713_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4713_m27911_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t866_0_0_0;
static ParameterInfo t4713_m27912_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t866_0_0_0},
};
extern TypeInfo t4713_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27912_MI = 
{
	"Insert", NULL, &t4713_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4713_m27912_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4713_m27913_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4713_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27913_MI = 
{
	"RemoveAt", NULL, &t4713_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4713_m27913_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4713_m27909_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4713_TI;
extern Il2CppType t866_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27909_MI = 
{
	"get_Item", NULL, &t4713_TI, &t866_0_0_0, RuntimeInvoker_t4_t16, t4713_m27909_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t866_0_0_0;
static ParameterInfo t4713_m27910_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t866_0_0_0},
};
extern TypeInfo t4713_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27910_MI = 
{
	"set_Item", NULL, &t4713_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4713_m27910_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4713_MIs[] =
{
	&m27911_MI,
	&m27912_MI,
	&m27913_MI,
	&m27909_MI,
	&m27910_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4712_TI;
extern TypeInfo t4714_TI;
static TypeInfo* t4713_ITIs[] = 
{
	&t591_TI,
	&t4712_TI,
	&t4714_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4713_0_0_0;
extern Il2CppType t4713_1_0_0;
struct t4713;
extern TypeInfo t4713_TI;
extern Il2CppGenericClass t4713_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4713_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4713_MIs, t4713_PIs, NULL, NULL, NULL, NULL, NULL, &t4713_TI, t4713_ITIs, NULL, &t1400__CustomAttributeCache, &t4713_TI, &t4713_0_0_0, &t4713_1_0_0, NULL, &t4713_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3626_TI;

#include "t611.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.StackFrame>
extern MethodInfo m27914_MI;
static PropertyInfo t3626____Current_PropertyInfo = 
{
	&t3626_TI, "Current", &m27914_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3626_PIs[] =
{
	&t3626____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3626_TI;
extern Il2CppType t611_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27914_MI = 
{
	"get_Current", NULL, &t3626_TI, &t611_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3626_MIs[] =
{
	&m27914_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3626_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3626_0_0_0;
extern Il2CppType t3626_1_0_0;
struct t3626;
extern TypeInfo t3626_TI;
extern Il2CppGenericClass t3626_GC;
TypeInfo t3626_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3626_MIs, t3626_PIs, NULL, NULL, NULL, NULL, NULL, &t3626_TI, t3626_ITIs, NULL, &EmptyCustomAttributesCache, &t3626_TI, &t3626_0_0_0, &t3626_1_0_0, NULL, &t3626_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2738.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2738_TI;
#include "t2738MD.h"

extern TypeInfo t2738_TI;
extern TypeInfo t611_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m15908_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21295_MI;
struct t14;
#define m21295(__this, p0, method) (t611 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21295_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>
extern Il2CppType t14_0_0_1;
FieldInfo t2738_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2738_TI, offsetof(t2738, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2738_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2738_TI, offsetof(t2738, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2738_FIs[] =
{
	&t2738_f0_FieldInfo,
	&t2738_f1_FieldInfo,
	NULL
};
extern MethodInfo m15905_MI;
static PropertyInfo t2738____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2738_TI, "System.Collections.IEnumerator.Current", &m15905_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15908_MI;
static PropertyInfo t2738____Current_PropertyInfo = 
{
	&t2738_TI, "Current", &m15908_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2738_PIs[] =
{
	&t2738____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2738____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2738_m15904_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2738_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15904_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2738_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2738_m15904_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2738_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15905_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2738_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2738_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15906_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2738_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2738_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15907_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2738_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2738_TI;
extern Il2CppType t611_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15908_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2738_TI, &t611_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2738_MIs[] =
{
	&m15904_MI,
	&m15905_MI,
	&m15906_MI,
	&m15907_MI,
	&m15908_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15905_MI;
extern MethodInfo m15907_MI;
extern MethodInfo m15906_MI;
extern MethodInfo m15908_MI;
static MethodInfo* t2738_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15905_MI,
	&m15907_MI,
	&m15906_MI,
	&m15908_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3626_TI;
static TypeInfo* t2738_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3626_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3626_TI;
static Il2CppInterfaceOffsetPair t2738_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3626_TI, 7},
};
extern MethodInfo m15908_MI;
extern TypeInfo t611_TI;
extern MethodInfo m21295_MI;
static void* t2738_RGCTXData[3] = 
{
	&m15908_MI,
	&t611_TI,
	&m21295_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2738_0_0_0;
extern Il2CppType t2738_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2738_TI;
extern Il2CppGenericClass t2738_GC;
extern TypeInfo t14_TI;
TypeInfo t2738_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2738_MIs, t2738_PIs, t2738_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2738_TI, t2738_ITIs, t2738_VT, &EmptyCustomAttributesCache, &t2738_TI, &t2738_0_0_0, &t2738_1_0_0, t2738_IOs, &t2738_GC, NULL, NULL, NULL, t2738_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2738)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4715_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>
extern MethodInfo m27915_MI;
static PropertyInfo t4715____Count_PropertyInfo = 
{
	&t4715_TI, "Count", &m27915_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27916_MI;
static PropertyInfo t4715____IsReadOnly_PropertyInfo = 
{
	&t4715_TI, "IsReadOnly", &m27916_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4715_PIs[] =
{
	&t4715____Count_PropertyInfo,
	&t4715____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4715_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27915_MI = 
{
	"get_Count", NULL, &t4715_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4715_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m27916_MI = 
{
	"get_IsReadOnly", NULL, &t4715_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t611_0_0_0;
static ParameterInfo t4715_m27917_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t611_0_0_0},
};
extern TypeInfo t4715_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27917_MI = 
{
	"Add", NULL, &t4715_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4715_m27917_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4715_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m27918_MI = 
{
	"Clear", NULL, &t4715_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t611_0_0_0;
static ParameterInfo t4715_m27919_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t611_0_0_0},
};
extern TypeInfo t4715_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27919_MI = 
{
	"Contains", NULL, &t4715_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4715_m27919_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t867_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4715_m27920_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t867_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4715_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27920_MI = 
{
	"CopyTo", NULL, &t4715_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4715_m27920_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t611_0_0_0;
static ParameterInfo t4715_m27921_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t611_0_0_0},
};
extern TypeInfo t4715_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27921_MI = 
{
	"Remove", NULL, &t4715_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4715_m27921_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4715_MIs[] =
{
	&m27915_MI,
	&m27916_MI,
	&m27917_MI,
	&m27918_MI,
	&m27919_MI,
	&m27920_MI,
	&m27921_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4717_TI;
static TypeInfo* t4715_ITIs[] = 
{
	&t591_TI,
	&t4717_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4715_0_0_0;
extern Il2CppType t4715_1_0_0;
struct t4715;
extern TypeInfo t4715_TI;
extern Il2CppGenericClass t4715_GC;
TypeInfo t4715_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4715_MIs, t4715_PIs, NULL, NULL, NULL, NULL, NULL, &t4715_TI, t4715_ITIs, NULL, &EmptyCustomAttributesCache, &t4715_TI, &t4715_0_0_0, &t4715_1_0_0, NULL, &t4715_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4717_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.StackFrame>
extern TypeInfo t4717_TI;
extern Il2CppType t3626_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27922_MI = 
{
	"GetEnumerator", NULL, &t4717_TI, &t3626_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4717_MIs[] =
{
	&m27922_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4717_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4717_0_0_0;
extern Il2CppType t4717_1_0_0;
struct t4717;
extern TypeInfo t4717_TI;
extern Il2CppGenericClass t4717_GC;
TypeInfo t4717_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4717_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4717_TI, t4717_ITIs, NULL, &EmptyCustomAttributesCache, &t4717_TI, &t4717_0_0_0, &t4717_1_0_0, NULL, &t4717_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4716_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>
extern MethodInfo m27923_MI;
extern MethodInfo m27924_MI;
static PropertyInfo t4716____Item_PropertyInfo = 
{
	&t4716_TI, "Item", &m27923_MI, &m27924_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4716_PIs[] =
{
	&t4716____Item_PropertyInfo,
	NULL
};
extern Il2CppType t611_0_0_0;
static ParameterInfo t4716_m27925_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t611_0_0_0},
};
extern TypeInfo t4716_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27925_MI = 
{
	"IndexOf", NULL, &t4716_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4716_m27925_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t611_0_0_0;
static ParameterInfo t4716_m27926_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t611_0_0_0},
};
extern TypeInfo t4716_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27926_MI = 
{
	"Insert", NULL, &t4716_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4716_m27926_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4716_m27927_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4716_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27927_MI = 
{
	"RemoveAt", NULL, &t4716_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4716_m27927_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4716_m27923_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4716_TI;
extern Il2CppType t611_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27923_MI = 
{
	"get_Item", NULL, &t4716_TI, &t611_0_0_0, RuntimeInvoker_t4_t16, t4716_m27923_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t611_0_0_0;
static ParameterInfo t4716_m27924_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t611_0_0_0},
};
extern TypeInfo t4716_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27924_MI = 
{
	"set_Item", NULL, &t4716_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4716_m27924_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4716_MIs[] =
{
	&m27925_MI,
	&m27926_MI,
	&m27927_MI,
	&m27923_MI,
	&m27924_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4715_TI;
extern TypeInfo t4717_TI;
static TypeInfo* t4716_ITIs[] = 
{
	&t591_TI,
	&t4715_TI,
	&t4717_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4716_0_0_0;
extern Il2CppType t4716_1_0_0;
struct t4716;
extern TypeInfo t4716_TI;
extern Il2CppGenericClass t4716_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4716_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4716_MIs, t4716_PIs, NULL, NULL, NULL, NULL, NULL, &t4716_TI, t4716_ITIs, NULL, &t1400__CustomAttributeCache, &t4716_TI, &t4716_0_0_0, &t4716_1_0_0, NULL, &t4716_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3627_TI;

#include "t769.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Globalization.CompareOptions>
extern MethodInfo m27928_MI;
static PropertyInfo t3627____Current_PropertyInfo = 
{
	&t3627_TI, "Current", &m27928_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3627_PIs[] =
{
	&t3627____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3627_TI;
extern Il2CppType t769_0_0_0;
extern void* RuntimeInvoker_t769 (MethodInfo* method, void* obj, void** args);
MethodInfo m27928_MI = 
{
	"get_Current", NULL, &t3627_TI, &t769_0_0_0, RuntimeInvoker_t769, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3627_MIs[] =
{
	&m27928_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3627_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3627_0_0_0;
extern Il2CppType t3627_1_0_0;
struct t3627;
extern TypeInfo t3627_TI;
extern Il2CppGenericClass t3627_GC;
TypeInfo t3627_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3627_MIs, t3627_PIs, NULL, NULL, NULL, NULL, NULL, &t3627_TI, t3627_ITIs, NULL, &EmptyCustomAttributesCache, &t3627_TI, &t3627_0_0_0, &t3627_1_0_0, NULL, &t3627_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2739.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2739_TI;
#include "t2739MD.h"

extern TypeInfo t2739_TI;
extern TypeInfo t769_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m15913_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21306_MI;
struct t14;
 int32_t m21306 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21306_MI;


extern MethodInfo m15909_MI;
 void m15909 (t2739 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15910_MI;
 t4 * m15910 (t2739 * __this, MethodInfo* method){
	{
		int32_t L_0 = m15913(__this, &m15913_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t769_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15911_MI;
 void m15911 (t2739 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15912_MI;
 bool m15912 (t2739 * __this, MethodInfo* method){
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
extern MethodInfo m15913_MI;
 int32_t m15913 (t2739 * __this, MethodInfo* method){
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
		int32_t L_8 = m21306(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21306_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>
extern Il2CppType t14_0_0_1;
FieldInfo t2739_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2739_TI, offsetof(t2739, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2739_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2739_TI, offsetof(t2739, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2739_FIs[] =
{
	&t2739_f0_FieldInfo,
	&t2739_f1_FieldInfo,
	NULL
};
extern MethodInfo m15910_MI;
static PropertyInfo t2739____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2739_TI, "System.Collections.IEnumerator.Current", &m15910_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15913_MI;
static PropertyInfo t2739____Current_PropertyInfo = 
{
	&t2739_TI, "Current", &m15913_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2739_PIs[] =
{
	&t2739____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2739____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2739_m15909_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2739_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15909_MI = 
{
	".ctor", (methodPointerType)&m15909, &t2739_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2739_m15909_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2739_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15910_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15910, &t2739_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2739_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15911_MI = 
{
	"Dispose", (methodPointerType)&m15911, &t2739_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2739_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15912_MI = 
{
	"MoveNext", (methodPointerType)&m15912, &t2739_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2739_TI;
extern Il2CppType t769_0_0_0;
extern void* RuntimeInvoker_t769 (MethodInfo* method, void* obj, void** args);
MethodInfo m15913_MI = 
{
	"get_Current", (methodPointerType)&m15913, &t2739_TI, &t769_0_0_0, RuntimeInvoker_t769, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2739_MIs[] =
{
	&m15909_MI,
	&m15910_MI,
	&m15911_MI,
	&m15912_MI,
	&m15913_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15910_MI;
extern MethodInfo m15912_MI;
extern MethodInfo m15911_MI;
extern MethodInfo m15913_MI;
static MethodInfo* t2739_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15910_MI,
	&m15912_MI,
	&m15911_MI,
	&m15913_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3627_TI;
static TypeInfo* t2739_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3627_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3627_TI;
static Il2CppInterfaceOffsetPair t2739_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3627_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2739_0_0_0;
extern Il2CppType t2739_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2739_TI;
extern Il2CppGenericClass t2739_GC;
extern TypeInfo t14_TI;
TypeInfo t2739_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2739_MIs, t2739_PIs, t2739_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2739_TI, t2739_ITIs, t2739_VT, &EmptyCustomAttributesCache, &t2739_TI, &t2739_0_0_0, &t2739_1_0_0, t2739_IOs, &t2739_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2739)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4718_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>
extern MethodInfo m27929_MI;
static PropertyInfo t4718____Count_PropertyInfo = 
{
	&t4718_TI, "Count", &m27929_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27930_MI;
static PropertyInfo t4718____IsReadOnly_PropertyInfo = 
{
	&t4718_TI, "IsReadOnly", &m27930_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4718_PIs[] =
{
	&t4718____Count_PropertyInfo,
	&t4718____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4718_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27929_MI = 
{
	"get_Count", NULL, &t4718_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4718_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m27930_MI = 
{
	"get_IsReadOnly", NULL, &t4718_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t769_0_0_0;
static ParameterInfo t4718_m27931_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t769_0_0_0},
};
extern TypeInfo t4718_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27931_MI = 
{
	"Add", NULL, &t4718_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4718_m27931_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4718_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m27932_MI = 
{
	"Clear", NULL, &t4718_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t769_0_0_0;
static ParameterInfo t4718_m27933_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t769_0_0_0},
};
extern TypeInfo t4718_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27933_MI = 
{
	"Contains", NULL, &t4718_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4718_m27933_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2985_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4718_m27934_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2985_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4718_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27934_MI = 
{
	"CopyTo", NULL, &t4718_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4718_m27934_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t769_0_0_0;
static ParameterInfo t4718_m27935_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t769_0_0_0},
};
extern TypeInfo t4718_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27935_MI = 
{
	"Remove", NULL, &t4718_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4718_m27935_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4718_MIs[] =
{
	&m27929_MI,
	&m27930_MI,
	&m27931_MI,
	&m27932_MI,
	&m27933_MI,
	&m27934_MI,
	&m27935_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4720_TI;
static TypeInfo* t4718_ITIs[] = 
{
	&t591_TI,
	&t4720_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4718_0_0_0;
extern Il2CppType t4718_1_0_0;
struct t4718;
extern TypeInfo t4718_TI;
extern Il2CppGenericClass t4718_GC;
TypeInfo t4718_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4718_MIs, t4718_PIs, NULL, NULL, NULL, NULL, NULL, &t4718_TI, t4718_ITIs, NULL, &EmptyCustomAttributesCache, &t4718_TI, &t4718_0_0_0, &t4718_1_0_0, NULL, &t4718_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4720_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Globalization.CompareOptions>
extern TypeInfo t4720_TI;
extern Il2CppType t3627_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27936_MI = 
{
	"GetEnumerator", NULL, &t4720_TI, &t3627_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4720_MIs[] =
{
	&m27936_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4720_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4720_0_0_0;
extern Il2CppType t4720_1_0_0;
struct t4720;
extern TypeInfo t4720_TI;
extern Il2CppGenericClass t4720_GC;
TypeInfo t4720_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4720_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4720_TI, t4720_ITIs, NULL, &EmptyCustomAttributesCache, &t4720_TI, &t4720_0_0_0, &t4720_1_0_0, NULL, &t4720_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4719_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Globalization.CompareOptions>
extern MethodInfo m27937_MI;
extern MethodInfo m27938_MI;
static PropertyInfo t4719____Item_PropertyInfo = 
{
	&t4719_TI, "Item", &m27937_MI, &m27938_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4719_PIs[] =
{
	&t4719____Item_PropertyInfo,
	NULL
};
extern Il2CppType t769_0_0_0;
static ParameterInfo t4719_m27939_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t769_0_0_0},
};
extern TypeInfo t4719_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27939_MI = 
{
	"IndexOf", NULL, &t4719_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4719_m27939_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t769_0_0_0;
static ParameterInfo t4719_m27940_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t769_0_0_0},
};
extern TypeInfo t4719_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27940_MI = 
{
	"Insert", NULL, &t4719_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4719_m27940_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4719_m27941_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4719_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27941_MI = 
{
	"RemoveAt", NULL, &t4719_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4719_m27941_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4719_m27937_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4719_TI;
extern Il2CppType t769_0_0_0;
extern void* RuntimeInvoker_t769_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27937_MI = 
{
	"get_Item", NULL, &t4719_TI, &t769_0_0_0, RuntimeInvoker_t769_t16, t4719_m27937_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t769_0_0_0;
static ParameterInfo t4719_m27938_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t769_0_0_0},
};
extern TypeInfo t4719_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27938_MI = 
{
	"set_Item", NULL, &t4719_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4719_m27938_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4719_MIs[] =
{
	&m27939_MI,
	&m27940_MI,
	&m27941_MI,
	&m27937_MI,
	&m27938_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4718_TI;
extern TypeInfo t4720_TI;
static TypeInfo* t4719_ITIs[] = 
{
	&t591_TI,
	&t4718_TI,
	&t4720_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4719_0_0_0;
extern Il2CppType t4719_1_0_0;
struct t4719;
extern TypeInfo t4719_TI;
extern Il2CppGenericClass t4719_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4719_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4719_MIs, t4719_PIs, NULL, NULL, NULL, NULL, NULL, &t4719_TI, t4719_ITIs, NULL, &t1400__CustomAttributeCache, &t4719_TI, &t4719_0_0_0, &t4719_1_0_0, NULL, &t4719_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3628_TI;

#include "t868.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Globalization.Calendar>
extern MethodInfo m27942_MI;
static PropertyInfo t3628____Current_PropertyInfo = 
{
	&t3628_TI, "Current", &m27942_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3628_PIs[] =
{
	&t3628____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3628_TI;
extern Il2CppType t868_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27942_MI = 
{
	"get_Current", NULL, &t3628_TI, &t868_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3628_MIs[] =
{
	&m27942_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3628_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3628_0_0_0;
extern Il2CppType t3628_1_0_0;
struct t3628;
extern TypeInfo t3628_TI;
extern Il2CppGenericClass t3628_GC;
TypeInfo t3628_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3628_MIs, t3628_PIs, NULL, NULL, NULL, NULL, NULL, &t3628_TI, t3628_ITIs, NULL, &EmptyCustomAttributesCache, &t3628_TI, &t3628_0_0_0, &t3628_1_0_0, NULL, &t3628_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2740.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2740_TI;
#include "t2740MD.h"

extern TypeInfo t2740_TI;
extern TypeInfo t868_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m15918_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21317_MI;
struct t14;
#define m21317(__this, p0, method) (t868 *)m16794_gshared((t14 *)__this, (int32_t)p0, method)
extern MethodInfo m21317_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Globalization.Calendar>
extern Il2CppType t14_0_0_1;
FieldInfo t2740_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2740_TI, offsetof(t2740, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2740_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2740_TI, offsetof(t2740, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2740_FIs[] =
{
	&t2740_f0_FieldInfo,
	&t2740_f1_FieldInfo,
	NULL
};
extern MethodInfo m15915_MI;
static PropertyInfo t2740____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2740_TI, "System.Collections.IEnumerator.Current", &m15915_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15918_MI;
static PropertyInfo t2740____Current_PropertyInfo = 
{
	&t2740_TI, "Current", &m15918_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2740_PIs[] =
{
	&t2740____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2740____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2740_m15914_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2740_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15914_MI = 
{
	".ctor", (methodPointerType)&m7843_gshared, &t2740_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2740_m15914_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2740_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15915_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7845_gshared, &t2740_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2740_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15916_MI = 
{
	"Dispose", (methodPointerType)&m7847_gshared, &t2740_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2740_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15917_MI = 
{
	"MoveNext", (methodPointerType)&m7849_gshared, &t2740_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2740_TI;
extern Il2CppType t868_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15918_MI = 
{
	"get_Current", (methodPointerType)&m7851_gshared, &t2740_TI, &t868_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2740_MIs[] =
{
	&m15914_MI,
	&m15915_MI,
	&m15916_MI,
	&m15917_MI,
	&m15918_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15915_MI;
extern MethodInfo m15917_MI;
extern MethodInfo m15916_MI;
extern MethodInfo m15918_MI;
static MethodInfo* t2740_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15915_MI,
	&m15917_MI,
	&m15916_MI,
	&m15918_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3628_TI;
static TypeInfo* t2740_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3628_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3628_TI;
static Il2CppInterfaceOffsetPair t2740_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3628_TI, 7},
};
extern MethodInfo m15918_MI;
extern TypeInfo t868_TI;
extern MethodInfo m21317_MI;
static void* t2740_RGCTXData[3] = 
{
	&m15918_MI,
	&t868_TI,
	&m21317_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2740_0_0_0;
extern Il2CppType t2740_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2740_TI;
extern Il2CppGenericClass t2740_GC;
extern TypeInfo t14_TI;
TypeInfo t2740_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2740_MIs, t2740_PIs, t2740_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2740_TI, t2740_ITIs, t2740_VT, &EmptyCustomAttributesCache, &t2740_TI, &t2740_0_0_0, &t2740_1_0_0, t2740_IOs, &t2740_GC, NULL, NULL, NULL, t2740_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2740)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4721_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Globalization.Calendar>
extern MethodInfo m27943_MI;
static PropertyInfo t4721____Count_PropertyInfo = 
{
	&t4721_TI, "Count", &m27943_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27944_MI;
static PropertyInfo t4721____IsReadOnly_PropertyInfo = 
{
	&t4721_TI, "IsReadOnly", &m27944_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4721_PIs[] =
{
	&t4721____Count_PropertyInfo,
	&t4721____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4721_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27943_MI = 
{
	"get_Count", NULL, &t4721_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4721_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m27944_MI = 
{
	"get_IsReadOnly", NULL, &t4721_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t868_0_0_0;
static ParameterInfo t4721_m27945_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t868_0_0_0},
};
extern TypeInfo t4721_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27945_MI = 
{
	"Add", NULL, &t4721_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t4721_m27945_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4721_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m27946_MI = 
{
	"Clear", NULL, &t4721_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t868_0_0_0;
static ParameterInfo t4721_m27947_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t868_0_0_0},
};
extern TypeInfo t4721_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27947_MI = 
{
	"Contains", NULL, &t4721_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4721_m27947_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t874_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4721_m27948_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t874_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4721_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27948_MI = 
{
	"CopyTo", NULL, &t4721_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4721_m27948_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t868_0_0_0;
static ParameterInfo t4721_m27949_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t868_0_0_0},
};
extern TypeInfo t4721_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27949_MI = 
{
	"Remove", NULL, &t4721_TI, &t17_0_0_0, RuntimeInvoker_t17_t4, t4721_m27949_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4721_MIs[] =
{
	&m27943_MI,
	&m27944_MI,
	&m27945_MI,
	&m27946_MI,
	&m27947_MI,
	&m27948_MI,
	&m27949_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4723_TI;
static TypeInfo* t4721_ITIs[] = 
{
	&t591_TI,
	&t4723_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4721_0_0_0;
extern Il2CppType t4721_1_0_0;
struct t4721;
extern TypeInfo t4721_TI;
extern Il2CppGenericClass t4721_GC;
TypeInfo t4721_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4721_MIs, t4721_PIs, NULL, NULL, NULL, NULL, NULL, &t4721_TI, t4721_ITIs, NULL, &EmptyCustomAttributesCache, &t4721_TI, &t4721_0_0_0, &t4721_1_0_0, NULL, &t4721_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4723_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Globalization.Calendar>
extern TypeInfo t4723_TI;
extern Il2CppType t3628_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27950_MI = 
{
	"GetEnumerator", NULL, &t4723_TI, &t3628_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4723_MIs[] =
{
	&m27950_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4723_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4723_0_0_0;
extern Il2CppType t4723_1_0_0;
struct t4723;
extern TypeInfo t4723_TI;
extern Il2CppGenericClass t4723_GC;
TypeInfo t4723_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4723_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4723_TI, t4723_ITIs, NULL, &EmptyCustomAttributesCache, &t4723_TI, &t4723_0_0_0, &t4723_1_0_0, NULL, &t4723_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4722_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Globalization.Calendar>
extern MethodInfo m27951_MI;
extern MethodInfo m27952_MI;
static PropertyInfo t4722____Item_PropertyInfo = 
{
	&t4722_TI, "Item", &m27951_MI, &m27952_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4722_PIs[] =
{
	&t4722____Item_PropertyInfo,
	NULL
};
extern Il2CppType t868_0_0_0;
static ParameterInfo t4722_m27953_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t868_0_0_0},
};
extern TypeInfo t4722_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27953_MI = 
{
	"IndexOf", NULL, &t4722_TI, &t16_0_0_0, RuntimeInvoker_t16_t4, t4722_m27953_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t868_0_0_0;
static ParameterInfo t4722_m27954_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t868_0_0_0},
};
extern TypeInfo t4722_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27954_MI = 
{
	"Insert", NULL, &t4722_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4722_m27954_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4722_m27955_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4722_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27955_MI = 
{
	"RemoveAt", NULL, &t4722_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4722_m27955_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4722_m27951_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4722_TI;
extern Il2CppType t868_0_0_0;
extern void* RuntimeInvoker_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27951_MI = 
{
	"get_Item", NULL, &t4722_TI, &t868_0_0_0, RuntimeInvoker_t4_t16, t4722_m27951_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t868_0_0_0;
static ParameterInfo t4722_m27952_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t868_0_0_0},
};
extern TypeInfo t4722_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27952_MI = 
{
	"set_Item", NULL, &t4722_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t4, t4722_m27952_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4722_MIs[] =
{
	&m27953_MI,
	&m27954_MI,
	&m27955_MI,
	&m27951_MI,
	&m27952_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4721_TI;
extern TypeInfo t4723_TI;
static TypeInfo* t4722_ITIs[] = 
{
	&t591_TI,
	&t4721_TI,
	&t4723_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4722_0_0_0;
extern Il2CppType t4722_1_0_0;
struct t4722;
extern TypeInfo t4722_TI;
extern Il2CppGenericClass t4722_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4722_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4722_MIs, t4722_PIs, NULL, NULL, NULL, NULL, NULL, &t4722_TI, t4722_ITIs, NULL, &t1400__CustomAttributeCache, &t4722_TI, &t4722_0_0_0, &t4722_1_0_0, NULL, &t4722_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3629_TI;

#include "t875.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Globalization.DateTimeFormatFlags>
extern MethodInfo m27956_MI;
static PropertyInfo t3629____Current_PropertyInfo = 
{
	&t3629_TI, "Current", &m27956_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3629_PIs[] =
{
	&t3629____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3629_TI;
extern Il2CppType t875_0_0_0;
extern void* RuntimeInvoker_t875 (MethodInfo* method, void* obj, void** args);
MethodInfo m27956_MI = 
{
	"get_Current", NULL, &t3629_TI, &t875_0_0_0, RuntimeInvoker_t875, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3629_MIs[] =
{
	&m27956_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3629_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3629_0_0_0;
extern Il2CppType t3629_1_0_0;
struct t3629;
extern TypeInfo t3629_TI;
extern Il2CppGenericClass t3629_GC;
TypeInfo t3629_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3629_MIs, t3629_PIs, NULL, NULL, NULL, NULL, NULL, &t3629_TI, t3629_ITIs, NULL, &EmptyCustomAttributesCache, &t3629_TI, &t3629_0_0_0, &t3629_1_0_0, NULL, &t3629_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2741.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2741_TI;
#include "t2741MD.h"

extern TypeInfo t2741_TI;
extern TypeInfo t875_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m15923_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21328_MI;
struct t14;
 int32_t m21328 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21328_MI;


extern MethodInfo m15919_MI;
 void m15919 (t2741 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15920_MI;
 t4 * m15920 (t2741 * __this, MethodInfo* method){
	{
		int32_t L_0 = m15923(__this, &m15923_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t875_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15921_MI;
 void m15921 (t2741 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15922_MI;
 bool m15922 (t2741 * __this, MethodInfo* method){
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
extern MethodInfo m15923_MI;
 int32_t m15923 (t2741 * __this, MethodInfo* method){
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
		int32_t L_8 = m21328(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21328_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Globalization.DateTimeFormatFlags>
extern Il2CppType t14_0_0_1;
FieldInfo t2741_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2741_TI, offsetof(t2741, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2741_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2741_TI, offsetof(t2741, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2741_FIs[] =
{
	&t2741_f0_FieldInfo,
	&t2741_f1_FieldInfo,
	NULL
};
extern MethodInfo m15920_MI;
static PropertyInfo t2741____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2741_TI, "System.Collections.IEnumerator.Current", &m15920_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15923_MI;
static PropertyInfo t2741____Current_PropertyInfo = 
{
	&t2741_TI, "Current", &m15923_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2741_PIs[] =
{
	&t2741____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2741____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2741_m15919_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2741_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15919_MI = 
{
	".ctor", (methodPointerType)&m15919, &t2741_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2741_m15919_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2741_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15920_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15920, &t2741_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2741_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15921_MI = 
{
	"Dispose", (methodPointerType)&m15921, &t2741_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2741_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15922_MI = 
{
	"MoveNext", (methodPointerType)&m15922, &t2741_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2741_TI;
extern Il2CppType t875_0_0_0;
extern void* RuntimeInvoker_t875 (MethodInfo* method, void* obj, void** args);
MethodInfo m15923_MI = 
{
	"get_Current", (methodPointerType)&m15923, &t2741_TI, &t875_0_0_0, RuntimeInvoker_t875, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2741_MIs[] =
{
	&m15919_MI,
	&m15920_MI,
	&m15921_MI,
	&m15922_MI,
	&m15923_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15920_MI;
extern MethodInfo m15922_MI;
extern MethodInfo m15921_MI;
extern MethodInfo m15923_MI;
static MethodInfo* t2741_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15920_MI,
	&m15922_MI,
	&m15921_MI,
	&m15923_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3629_TI;
static TypeInfo* t2741_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3629_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3629_TI;
static Il2CppInterfaceOffsetPair t2741_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3629_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2741_0_0_0;
extern Il2CppType t2741_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2741_TI;
extern Il2CppGenericClass t2741_GC;
extern TypeInfo t14_TI;
TypeInfo t2741_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2741_MIs, t2741_PIs, t2741_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2741_TI, t2741_ITIs, t2741_VT, &EmptyCustomAttributesCache, &t2741_TI, &t2741_0_0_0, &t2741_1_0_0, t2741_IOs, &t2741_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2741)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4724_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Globalization.DateTimeFormatFlags>
extern MethodInfo m27957_MI;
static PropertyInfo t4724____Count_PropertyInfo = 
{
	&t4724_TI, "Count", &m27957_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27958_MI;
static PropertyInfo t4724____IsReadOnly_PropertyInfo = 
{
	&t4724_TI, "IsReadOnly", &m27958_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4724_PIs[] =
{
	&t4724____Count_PropertyInfo,
	&t4724____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4724_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27957_MI = 
{
	"get_Count", NULL, &t4724_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4724_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m27958_MI = 
{
	"get_IsReadOnly", NULL, &t4724_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t875_0_0_0;
static ParameterInfo t4724_m27959_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t875_0_0_0},
};
extern TypeInfo t4724_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27959_MI = 
{
	"Add", NULL, &t4724_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4724_m27959_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4724_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m27960_MI = 
{
	"Clear", NULL, &t4724_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t875_0_0_0;
static ParameterInfo t4724_m27961_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t875_0_0_0},
};
extern TypeInfo t4724_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27961_MI = 
{
	"Contains", NULL, &t4724_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4724_m27961_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2986_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4724_m27962_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2986_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4724_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27962_MI = 
{
	"CopyTo", NULL, &t4724_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4724_m27962_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t875_0_0_0;
static ParameterInfo t4724_m27963_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t875_0_0_0},
};
extern TypeInfo t4724_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27963_MI = 
{
	"Remove", NULL, &t4724_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4724_m27963_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4724_MIs[] =
{
	&m27957_MI,
	&m27958_MI,
	&m27959_MI,
	&m27960_MI,
	&m27961_MI,
	&m27962_MI,
	&m27963_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4726_TI;
static TypeInfo* t4724_ITIs[] = 
{
	&t591_TI,
	&t4726_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4724_0_0_0;
extern Il2CppType t4724_1_0_0;
struct t4724;
extern TypeInfo t4724_TI;
extern Il2CppGenericClass t4724_GC;
TypeInfo t4724_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4724_MIs, t4724_PIs, NULL, NULL, NULL, NULL, NULL, &t4724_TI, t4724_ITIs, NULL, &EmptyCustomAttributesCache, &t4724_TI, &t4724_0_0_0, &t4724_1_0_0, NULL, &t4724_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4726_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Globalization.DateTimeFormatFlags>
extern TypeInfo t4726_TI;
extern Il2CppType t3629_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27964_MI = 
{
	"GetEnumerator", NULL, &t4726_TI, &t3629_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4726_MIs[] =
{
	&m27964_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4726_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4726_0_0_0;
extern Il2CppType t4726_1_0_0;
struct t4726;
extern TypeInfo t4726_TI;
extern Il2CppGenericClass t4726_GC;
TypeInfo t4726_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4726_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4726_TI, t4726_ITIs, NULL, &EmptyCustomAttributesCache, &t4726_TI, &t4726_0_0_0, &t4726_1_0_0, NULL, &t4726_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4725_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Globalization.DateTimeFormatFlags>
extern MethodInfo m27965_MI;
extern MethodInfo m27966_MI;
static PropertyInfo t4725____Item_PropertyInfo = 
{
	&t4725_TI, "Item", &m27965_MI, &m27966_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4725_PIs[] =
{
	&t4725____Item_PropertyInfo,
	NULL
};
extern Il2CppType t875_0_0_0;
static ParameterInfo t4725_m27967_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t875_0_0_0},
};
extern TypeInfo t4725_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27967_MI = 
{
	"IndexOf", NULL, &t4725_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4725_m27967_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t875_0_0_0;
static ParameterInfo t4725_m27968_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t875_0_0_0},
};
extern TypeInfo t4725_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27968_MI = 
{
	"Insert", NULL, &t4725_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4725_m27968_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4725_m27969_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4725_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27969_MI = 
{
	"RemoveAt", NULL, &t4725_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4725_m27969_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4725_m27965_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4725_TI;
extern Il2CppType t875_0_0_0;
extern void* RuntimeInvoker_t875_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27965_MI = 
{
	"get_Item", NULL, &t4725_TI, &t875_0_0_0, RuntimeInvoker_t875_t16, t4725_m27965_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t875_0_0_0;
static ParameterInfo t4725_m27966_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t875_0_0_0},
};
extern TypeInfo t4725_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27966_MI = 
{
	"set_Item", NULL, &t4725_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4725_m27966_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4725_MIs[] =
{
	&m27967_MI,
	&m27968_MI,
	&m27969_MI,
	&m27965_MI,
	&m27966_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4724_TI;
extern TypeInfo t4726_TI;
static TypeInfo* t4725_ITIs[] = 
{
	&t591_TI,
	&t4724_TI,
	&t4726_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4725_0_0_0;
extern Il2CppType t4725_1_0_0;
struct t4725;
extern TypeInfo t4725_TI;
extern Il2CppGenericClass t4725_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4725_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4725_MIs, t4725_PIs, NULL, NULL, NULL, NULL, NULL, &t4725_TI, t4725_ITIs, NULL, &t1400__CustomAttributeCache, &t4725_TI, &t4725_0_0_0, &t4725_1_0_0, NULL, &t4725_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3630_TI;

#include "t876.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Globalization.DateTimeStyles>
extern MethodInfo m27970_MI;
static PropertyInfo t3630____Current_PropertyInfo = 
{
	&t3630_TI, "Current", &m27970_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3630_PIs[] =
{
	&t3630____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3630_TI;
extern Il2CppType t876_0_0_0;
extern void* RuntimeInvoker_t876 (MethodInfo* method, void* obj, void** args);
MethodInfo m27970_MI = 
{
	"get_Current", NULL, &t3630_TI, &t876_0_0_0, RuntimeInvoker_t876, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3630_MIs[] =
{
	&m27970_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3630_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3630_0_0_0;
extern Il2CppType t3630_1_0_0;
struct t3630;
extern TypeInfo t3630_TI;
extern Il2CppGenericClass t3630_GC;
TypeInfo t3630_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3630_MIs, t3630_PIs, NULL, NULL, NULL, NULL, NULL, &t3630_TI, t3630_ITIs, NULL, &EmptyCustomAttributesCache, &t3630_TI, &t3630_0_0_0, &t3630_1_0_0, NULL, &t3630_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2742.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2742_TI;
#include "t2742MD.h"

extern TypeInfo t2742_TI;
extern TypeInfo t876_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m15928_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21339_MI;
struct t14;
 int32_t m21339 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21339_MI;


extern MethodInfo m15924_MI;
 void m15924 (t2742 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15925_MI;
 t4 * m15925 (t2742 * __this, MethodInfo* method){
	{
		int32_t L_0 = m15928(__this, &m15928_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t876_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15926_MI;
 void m15926 (t2742 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15927_MI;
 bool m15927 (t2742 * __this, MethodInfo* method){
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
extern MethodInfo m15928_MI;
 int32_t m15928 (t2742 * __this, MethodInfo* method){
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
		int32_t L_8 = m21339(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21339_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Globalization.DateTimeStyles>
extern Il2CppType t14_0_0_1;
FieldInfo t2742_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2742_TI, offsetof(t2742, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2742_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2742_TI, offsetof(t2742, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2742_FIs[] =
{
	&t2742_f0_FieldInfo,
	&t2742_f1_FieldInfo,
	NULL
};
extern MethodInfo m15925_MI;
static PropertyInfo t2742____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2742_TI, "System.Collections.IEnumerator.Current", &m15925_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15928_MI;
static PropertyInfo t2742____Current_PropertyInfo = 
{
	&t2742_TI, "Current", &m15928_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2742_PIs[] =
{
	&t2742____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2742____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2742_m15924_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2742_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15924_MI = 
{
	".ctor", (methodPointerType)&m15924, &t2742_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2742_m15924_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2742_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15925_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15925, &t2742_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2742_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15926_MI = 
{
	"Dispose", (methodPointerType)&m15926, &t2742_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2742_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15927_MI = 
{
	"MoveNext", (methodPointerType)&m15927, &t2742_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2742_TI;
extern Il2CppType t876_0_0_0;
extern void* RuntimeInvoker_t876 (MethodInfo* method, void* obj, void** args);
MethodInfo m15928_MI = 
{
	"get_Current", (methodPointerType)&m15928, &t2742_TI, &t876_0_0_0, RuntimeInvoker_t876, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2742_MIs[] =
{
	&m15924_MI,
	&m15925_MI,
	&m15926_MI,
	&m15927_MI,
	&m15928_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15925_MI;
extern MethodInfo m15927_MI;
extern MethodInfo m15926_MI;
extern MethodInfo m15928_MI;
static MethodInfo* t2742_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15925_MI,
	&m15927_MI,
	&m15926_MI,
	&m15928_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3630_TI;
static TypeInfo* t2742_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3630_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3630_TI;
static Il2CppInterfaceOffsetPair t2742_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3630_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2742_0_0_0;
extern Il2CppType t2742_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2742_TI;
extern Il2CppGenericClass t2742_GC;
extern TypeInfo t14_TI;
TypeInfo t2742_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2742_MIs, t2742_PIs, t2742_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2742_TI, t2742_ITIs, t2742_VT, &EmptyCustomAttributesCache, &t2742_TI, &t2742_0_0_0, &t2742_1_0_0, t2742_IOs, &t2742_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2742)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4727_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Globalization.DateTimeStyles>
extern MethodInfo m27971_MI;
static PropertyInfo t4727____Count_PropertyInfo = 
{
	&t4727_TI, "Count", &m27971_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27972_MI;
static PropertyInfo t4727____IsReadOnly_PropertyInfo = 
{
	&t4727_TI, "IsReadOnly", &m27972_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4727_PIs[] =
{
	&t4727____Count_PropertyInfo,
	&t4727____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4727_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27971_MI = 
{
	"get_Count", NULL, &t4727_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4727_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m27972_MI = 
{
	"get_IsReadOnly", NULL, &t4727_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t876_0_0_0;
static ParameterInfo t4727_m27973_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t876_0_0_0},
};
extern TypeInfo t4727_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27973_MI = 
{
	"Add", NULL, &t4727_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4727_m27973_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4727_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m27974_MI = 
{
	"Clear", NULL, &t4727_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t876_0_0_0;
static ParameterInfo t4727_m27975_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t876_0_0_0},
};
extern TypeInfo t4727_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27975_MI = 
{
	"Contains", NULL, &t4727_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4727_m27975_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2987_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4727_m27976_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2987_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4727_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27976_MI = 
{
	"CopyTo", NULL, &t4727_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4727_m27976_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t876_0_0_0;
static ParameterInfo t4727_m27977_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t876_0_0_0},
};
extern TypeInfo t4727_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27977_MI = 
{
	"Remove", NULL, &t4727_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4727_m27977_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4727_MIs[] =
{
	&m27971_MI,
	&m27972_MI,
	&m27973_MI,
	&m27974_MI,
	&m27975_MI,
	&m27976_MI,
	&m27977_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4729_TI;
static TypeInfo* t4727_ITIs[] = 
{
	&t591_TI,
	&t4729_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4727_0_0_0;
extern Il2CppType t4727_1_0_0;
struct t4727;
extern TypeInfo t4727_TI;
extern Il2CppGenericClass t4727_GC;
TypeInfo t4727_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4727_MIs, t4727_PIs, NULL, NULL, NULL, NULL, NULL, &t4727_TI, t4727_ITIs, NULL, &EmptyCustomAttributesCache, &t4727_TI, &t4727_0_0_0, &t4727_1_0_0, NULL, &t4727_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4729_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Globalization.DateTimeStyles>
extern TypeInfo t4729_TI;
extern Il2CppType t3630_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27978_MI = 
{
	"GetEnumerator", NULL, &t4729_TI, &t3630_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4729_MIs[] =
{
	&m27978_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4729_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4729_0_0_0;
extern Il2CppType t4729_1_0_0;
struct t4729;
extern TypeInfo t4729_TI;
extern Il2CppGenericClass t4729_GC;
TypeInfo t4729_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4729_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4729_TI, t4729_ITIs, NULL, &EmptyCustomAttributesCache, &t4729_TI, &t4729_0_0_0, &t4729_1_0_0, NULL, &t4729_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4728_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Globalization.DateTimeStyles>
extern MethodInfo m27979_MI;
extern MethodInfo m27980_MI;
static PropertyInfo t4728____Item_PropertyInfo = 
{
	&t4728_TI, "Item", &m27979_MI, &m27980_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4728_PIs[] =
{
	&t4728____Item_PropertyInfo,
	NULL
};
extern Il2CppType t876_0_0_0;
static ParameterInfo t4728_m27981_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t876_0_0_0},
};
extern TypeInfo t4728_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27981_MI = 
{
	"IndexOf", NULL, &t4728_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4728_m27981_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t876_0_0_0;
static ParameterInfo t4728_m27982_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t876_0_0_0},
};
extern TypeInfo t4728_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27982_MI = 
{
	"Insert", NULL, &t4728_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4728_m27982_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4728_m27983_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4728_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27983_MI = 
{
	"RemoveAt", NULL, &t4728_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4728_m27983_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4728_m27979_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4728_TI;
extern Il2CppType t876_0_0_0;
extern void* RuntimeInvoker_t876_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27979_MI = 
{
	"get_Item", NULL, &t4728_TI, &t876_0_0_0, RuntimeInvoker_t876_t16, t4728_m27979_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t876_0_0_0;
static ParameterInfo t4728_m27980_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t876_0_0_0},
};
extern TypeInfo t4728_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27980_MI = 
{
	"set_Item", NULL, &t4728_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4728_m27980_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4728_MIs[] =
{
	&m27981_MI,
	&m27982_MI,
	&m27983_MI,
	&m27979_MI,
	&m27980_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4727_TI;
extern TypeInfo t4729_TI;
static TypeInfo* t4728_ITIs[] = 
{
	&t591_TI,
	&t4727_TI,
	&t4729_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4728_0_0_0;
extern Il2CppType t4728_1_0_0;
struct t4728;
extern TypeInfo t4728_TI;
extern Il2CppGenericClass t4728_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4728_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4728_MIs, t4728_PIs, NULL, NULL, NULL, NULL, NULL, &t4728_TI, t4728_ITIs, NULL, &t1400__CustomAttributeCache, &t4728_TI, &t4728_0_0_0, &t4728_1_0_0, NULL, &t4728_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3631_TI;

#include "t880.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Globalization.GregorianCalendarTypes>
extern MethodInfo m27984_MI;
static PropertyInfo t3631____Current_PropertyInfo = 
{
	&t3631_TI, "Current", &m27984_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3631_PIs[] =
{
	&t3631____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3631_TI;
extern Il2CppType t880_0_0_0;
extern void* RuntimeInvoker_t880 (MethodInfo* method, void* obj, void** args);
MethodInfo m27984_MI = 
{
	"get_Current", NULL, &t3631_TI, &t880_0_0_0, RuntimeInvoker_t880, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3631_MIs[] =
{
	&m27984_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3631_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3631_0_0_0;
extern Il2CppType t3631_1_0_0;
struct t3631;
extern TypeInfo t3631_TI;
extern Il2CppGenericClass t3631_GC;
TypeInfo t3631_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3631_MIs, t3631_PIs, NULL, NULL, NULL, NULL, NULL, &t3631_TI, t3631_ITIs, NULL, &EmptyCustomAttributesCache, &t3631_TI, &t3631_0_0_0, &t3631_1_0_0, NULL, &t3631_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2743.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2743_TI;
#include "t2743MD.h"

extern TypeInfo t2743_TI;
extern TypeInfo t880_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m15933_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21350_MI;
struct t14;
 int32_t m21350 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21350_MI;


extern MethodInfo m15929_MI;
 void m15929 (t2743 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15930_MI;
 t4 * m15930 (t2743 * __this, MethodInfo* method){
	{
		int32_t L_0 = m15933(__this, &m15933_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t880_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15931_MI;
 void m15931 (t2743 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15932_MI;
 bool m15932 (t2743 * __this, MethodInfo* method){
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
extern MethodInfo m15933_MI;
 int32_t m15933 (t2743 * __this, MethodInfo* method){
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
		int32_t L_8 = m21350(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21350_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Globalization.GregorianCalendarTypes>
extern Il2CppType t14_0_0_1;
FieldInfo t2743_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2743_TI, offsetof(t2743, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2743_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2743_TI, offsetof(t2743, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2743_FIs[] =
{
	&t2743_f0_FieldInfo,
	&t2743_f1_FieldInfo,
	NULL
};
extern MethodInfo m15930_MI;
static PropertyInfo t2743____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2743_TI, "System.Collections.IEnumerator.Current", &m15930_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15933_MI;
static PropertyInfo t2743____Current_PropertyInfo = 
{
	&t2743_TI, "Current", &m15933_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2743_PIs[] =
{
	&t2743____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2743____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2743_m15929_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2743_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15929_MI = 
{
	".ctor", (methodPointerType)&m15929, &t2743_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2743_m15929_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2743_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15930_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15930, &t2743_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2743_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15931_MI = 
{
	"Dispose", (methodPointerType)&m15931, &t2743_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2743_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15932_MI = 
{
	"MoveNext", (methodPointerType)&m15932, &t2743_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2743_TI;
extern Il2CppType t880_0_0_0;
extern void* RuntimeInvoker_t880 (MethodInfo* method, void* obj, void** args);
MethodInfo m15933_MI = 
{
	"get_Current", (methodPointerType)&m15933, &t2743_TI, &t880_0_0_0, RuntimeInvoker_t880, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2743_MIs[] =
{
	&m15929_MI,
	&m15930_MI,
	&m15931_MI,
	&m15932_MI,
	&m15933_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15930_MI;
extern MethodInfo m15932_MI;
extern MethodInfo m15931_MI;
extern MethodInfo m15933_MI;
static MethodInfo* t2743_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15930_MI,
	&m15932_MI,
	&m15931_MI,
	&m15933_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3631_TI;
static TypeInfo* t2743_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3631_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3631_TI;
static Il2CppInterfaceOffsetPair t2743_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3631_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2743_0_0_0;
extern Il2CppType t2743_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2743_TI;
extern Il2CppGenericClass t2743_GC;
extern TypeInfo t14_TI;
TypeInfo t2743_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2743_MIs, t2743_PIs, t2743_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2743_TI, t2743_ITIs, t2743_VT, &EmptyCustomAttributesCache, &t2743_TI, &t2743_0_0_0, &t2743_1_0_0, t2743_IOs, &t2743_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2743)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4730_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Globalization.GregorianCalendarTypes>
extern MethodInfo m27985_MI;
static PropertyInfo t4730____Count_PropertyInfo = 
{
	&t4730_TI, "Count", &m27985_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27986_MI;
static PropertyInfo t4730____IsReadOnly_PropertyInfo = 
{
	&t4730_TI, "IsReadOnly", &m27986_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4730_PIs[] =
{
	&t4730____Count_PropertyInfo,
	&t4730____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4730_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27985_MI = 
{
	"get_Count", NULL, &t4730_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4730_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m27986_MI = 
{
	"get_IsReadOnly", NULL, &t4730_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t880_0_0_0;
static ParameterInfo t4730_m27987_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t880_0_0_0},
};
extern TypeInfo t4730_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27987_MI = 
{
	"Add", NULL, &t4730_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4730_m27987_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4730_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m27988_MI = 
{
	"Clear", NULL, &t4730_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t880_0_0_0;
static ParameterInfo t4730_m27989_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t880_0_0_0},
};
extern TypeInfo t4730_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27989_MI = 
{
	"Contains", NULL, &t4730_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4730_m27989_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2988_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4730_m27990_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2988_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4730_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27990_MI = 
{
	"CopyTo", NULL, &t4730_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4730_m27990_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t880_0_0_0;
static ParameterInfo t4730_m27991_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t880_0_0_0},
};
extern TypeInfo t4730_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27991_MI = 
{
	"Remove", NULL, &t4730_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4730_m27991_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4730_MIs[] =
{
	&m27985_MI,
	&m27986_MI,
	&m27987_MI,
	&m27988_MI,
	&m27989_MI,
	&m27990_MI,
	&m27991_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4732_TI;
static TypeInfo* t4730_ITIs[] = 
{
	&t591_TI,
	&t4732_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4730_0_0_0;
extern Il2CppType t4730_1_0_0;
struct t4730;
extern TypeInfo t4730_TI;
extern Il2CppGenericClass t4730_GC;
TypeInfo t4730_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4730_MIs, t4730_PIs, NULL, NULL, NULL, NULL, NULL, &t4730_TI, t4730_ITIs, NULL, &EmptyCustomAttributesCache, &t4730_TI, &t4730_0_0_0, &t4730_1_0_0, NULL, &t4730_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4732_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Globalization.GregorianCalendarTypes>
extern TypeInfo t4732_TI;
extern Il2CppType t3631_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m27992_MI = 
{
	"GetEnumerator", NULL, &t4732_TI, &t3631_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4732_MIs[] =
{
	&m27992_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4732_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4732_0_0_0;
extern Il2CppType t4732_1_0_0;
struct t4732;
extern TypeInfo t4732_TI;
extern Il2CppGenericClass t4732_GC;
TypeInfo t4732_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4732_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4732_TI, t4732_ITIs, NULL, &EmptyCustomAttributesCache, &t4732_TI, &t4732_0_0_0, &t4732_1_0_0, NULL, &t4732_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4731_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Globalization.GregorianCalendarTypes>
extern MethodInfo m27993_MI;
extern MethodInfo m27994_MI;
static PropertyInfo t4731____Item_PropertyInfo = 
{
	&t4731_TI, "Item", &m27993_MI, &m27994_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4731_PIs[] =
{
	&t4731____Item_PropertyInfo,
	NULL
};
extern Il2CppType t880_0_0_0;
static ParameterInfo t4731_m27995_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t880_0_0_0},
};
extern TypeInfo t4731_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27995_MI = 
{
	"IndexOf", NULL, &t4731_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4731_m27995_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t880_0_0_0;
static ParameterInfo t4731_m27996_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t880_0_0_0},
};
extern TypeInfo t4731_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27996_MI = 
{
	"Insert", NULL, &t4731_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4731_m27996_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4731_m27997_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4731_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27997_MI = 
{
	"RemoveAt", NULL, &t4731_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4731_m27997_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4731_m27993_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4731_TI;
extern Il2CppType t880_0_0_0;
extern void* RuntimeInvoker_t880_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27993_MI = 
{
	"get_Item", NULL, &t4731_TI, &t880_0_0_0, RuntimeInvoker_t880_t16, t4731_m27993_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t880_0_0_0;
static ParameterInfo t4731_m27994_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t880_0_0_0},
};
extern TypeInfo t4731_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27994_MI = 
{
	"set_Item", NULL, &t4731_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4731_m27994_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4731_MIs[] =
{
	&m27995_MI,
	&m27996_MI,
	&m27997_MI,
	&m27993_MI,
	&m27994_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4730_TI;
extern TypeInfo t4732_TI;
static TypeInfo* t4731_ITIs[] = 
{
	&t591_TI,
	&t4730_TI,
	&t4732_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4731_0_0_0;
extern Il2CppType t4731_1_0_0;
struct t4731;
extern TypeInfo t4731_TI;
extern Il2CppGenericClass t4731_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4731_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4731_MIs, t4731_PIs, NULL, NULL, NULL, NULL, NULL, &t4731_TI, t4731_ITIs, NULL, &t1400__CustomAttributeCache, &t4731_TI, &t4731_0_0_0, &t4731_1_0_0, NULL, &t4731_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3632_TI;

#include "t695.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Globalization.NumberStyles>
extern MethodInfo m27998_MI;
static PropertyInfo t3632____Current_PropertyInfo = 
{
	&t3632_TI, "Current", &m27998_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3632_PIs[] =
{
	&t3632____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3632_TI;
extern Il2CppType t695_0_0_0;
extern void* RuntimeInvoker_t695 (MethodInfo* method, void* obj, void** args);
MethodInfo m27998_MI = 
{
	"get_Current", NULL, &t3632_TI, &t695_0_0_0, RuntimeInvoker_t695, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3632_MIs[] =
{
	&m27998_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3632_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3632_0_0_0;
extern Il2CppType t3632_1_0_0;
struct t3632;
extern TypeInfo t3632_TI;
extern Il2CppGenericClass t3632_GC;
TypeInfo t3632_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3632_MIs, t3632_PIs, NULL, NULL, NULL, NULL, NULL, &t3632_TI, t3632_ITIs, NULL, &EmptyCustomAttributesCache, &t3632_TI, &t3632_0_0_0, &t3632_1_0_0, NULL, &t3632_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2744.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2744_TI;
#include "t2744MD.h"

extern TypeInfo t2744_TI;
extern TypeInfo t695_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m15938_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21361_MI;
struct t14;
 int32_t m21361 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21361_MI;


extern MethodInfo m15934_MI;
 void m15934 (t2744 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15935_MI;
 t4 * m15935 (t2744 * __this, MethodInfo* method){
	{
		int32_t L_0 = m15938(__this, &m15938_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t695_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15936_MI;
 void m15936 (t2744 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15937_MI;
 bool m15937 (t2744 * __this, MethodInfo* method){
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
extern MethodInfo m15938_MI;
 int32_t m15938 (t2744 * __this, MethodInfo* method){
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
		int32_t L_8 = m21361(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21361_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Globalization.NumberStyles>
extern Il2CppType t14_0_0_1;
FieldInfo t2744_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2744_TI, offsetof(t2744, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2744_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2744_TI, offsetof(t2744, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2744_FIs[] =
{
	&t2744_f0_FieldInfo,
	&t2744_f1_FieldInfo,
	NULL
};
extern MethodInfo m15935_MI;
static PropertyInfo t2744____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2744_TI, "System.Collections.IEnumerator.Current", &m15935_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15938_MI;
static PropertyInfo t2744____Current_PropertyInfo = 
{
	&t2744_TI, "Current", &m15938_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2744_PIs[] =
{
	&t2744____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2744____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2744_m15934_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2744_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15934_MI = 
{
	".ctor", (methodPointerType)&m15934, &t2744_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2744_m15934_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2744_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15935_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15935, &t2744_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2744_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15936_MI = 
{
	"Dispose", (methodPointerType)&m15936, &t2744_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2744_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15937_MI = 
{
	"MoveNext", (methodPointerType)&m15937, &t2744_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2744_TI;
extern Il2CppType t695_0_0_0;
extern void* RuntimeInvoker_t695 (MethodInfo* method, void* obj, void** args);
MethodInfo m15938_MI = 
{
	"get_Current", (methodPointerType)&m15938, &t2744_TI, &t695_0_0_0, RuntimeInvoker_t695, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2744_MIs[] =
{
	&m15934_MI,
	&m15935_MI,
	&m15936_MI,
	&m15937_MI,
	&m15938_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15935_MI;
extern MethodInfo m15937_MI;
extern MethodInfo m15936_MI;
extern MethodInfo m15938_MI;
static MethodInfo* t2744_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15935_MI,
	&m15937_MI,
	&m15936_MI,
	&m15938_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3632_TI;
static TypeInfo* t2744_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3632_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3632_TI;
static Il2CppInterfaceOffsetPair t2744_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3632_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2744_0_0_0;
extern Il2CppType t2744_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2744_TI;
extern Il2CppGenericClass t2744_GC;
extern TypeInfo t14_TI;
TypeInfo t2744_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2744_MIs, t2744_PIs, t2744_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2744_TI, t2744_ITIs, t2744_VT, &EmptyCustomAttributesCache, &t2744_TI, &t2744_0_0_0, &t2744_1_0_0, t2744_IOs, &t2744_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2744)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4733_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Globalization.NumberStyles>
extern MethodInfo m27999_MI;
static PropertyInfo t4733____Count_PropertyInfo = 
{
	&t4733_TI, "Count", &m27999_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28000_MI;
static PropertyInfo t4733____IsReadOnly_PropertyInfo = 
{
	&t4733_TI, "IsReadOnly", &m28000_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4733_PIs[] =
{
	&t4733____Count_PropertyInfo,
	&t4733____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4733_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m27999_MI = 
{
	"get_Count", NULL, &t4733_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4733_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28000_MI = 
{
	"get_IsReadOnly", NULL, &t4733_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t695_0_0_0;
static ParameterInfo t4733_m28001_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern TypeInfo t4733_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28001_MI = 
{
	"Add", NULL, &t4733_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4733_m28001_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4733_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28002_MI = 
{
	"Clear", NULL, &t4733_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t695_0_0_0;
static ParameterInfo t4733_m28003_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern TypeInfo t4733_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28003_MI = 
{
	"Contains", NULL, &t4733_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4733_m28003_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2989_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4733_m28004_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2989_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4733_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28004_MI = 
{
	"CopyTo", NULL, &t4733_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4733_m28004_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t695_0_0_0;
static ParameterInfo t4733_m28005_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern TypeInfo t4733_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28005_MI = 
{
	"Remove", NULL, &t4733_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4733_m28005_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4733_MIs[] =
{
	&m27999_MI,
	&m28000_MI,
	&m28001_MI,
	&m28002_MI,
	&m28003_MI,
	&m28004_MI,
	&m28005_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4735_TI;
static TypeInfo* t4733_ITIs[] = 
{
	&t591_TI,
	&t4735_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4733_0_0_0;
extern Il2CppType t4733_1_0_0;
struct t4733;
extern TypeInfo t4733_TI;
extern Il2CppGenericClass t4733_GC;
TypeInfo t4733_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4733_MIs, t4733_PIs, NULL, NULL, NULL, NULL, NULL, &t4733_TI, t4733_ITIs, NULL, &EmptyCustomAttributesCache, &t4733_TI, &t4733_0_0_0, &t4733_1_0_0, NULL, &t4733_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4735_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Globalization.NumberStyles>
extern TypeInfo t4735_TI;
extern Il2CppType t3632_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28006_MI = 
{
	"GetEnumerator", NULL, &t4735_TI, &t3632_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4735_MIs[] =
{
	&m28006_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4735_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4735_0_0_0;
extern Il2CppType t4735_1_0_0;
struct t4735;
extern TypeInfo t4735_TI;
extern Il2CppGenericClass t4735_GC;
TypeInfo t4735_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4735_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4735_TI, t4735_ITIs, NULL, &EmptyCustomAttributesCache, &t4735_TI, &t4735_0_0_0, &t4735_1_0_0, NULL, &t4735_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4734_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Globalization.NumberStyles>
extern MethodInfo m28007_MI;
extern MethodInfo m28008_MI;
static PropertyInfo t4734____Item_PropertyInfo = 
{
	&t4734_TI, "Item", &m28007_MI, &m28008_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4734_PIs[] =
{
	&t4734____Item_PropertyInfo,
	NULL
};
extern Il2CppType t695_0_0_0;
static ParameterInfo t4734_m28009_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern TypeInfo t4734_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28009_MI = 
{
	"IndexOf", NULL, &t4734_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4734_m28009_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t4734_m28010_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern TypeInfo t4734_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28010_MI = 
{
	"Insert", NULL, &t4734_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4734_m28010_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4734_m28011_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4734_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28011_MI = 
{
	"RemoveAt", NULL, &t4734_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4734_m28011_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4734_m28007_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4734_TI;
extern Il2CppType t695_0_0_0;
extern void* RuntimeInvoker_t695_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28007_MI = 
{
	"get_Item", NULL, &t4734_TI, &t695_0_0_0, RuntimeInvoker_t695_t16, t4734_m28007_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t4734_m28008_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern TypeInfo t4734_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28008_MI = 
{
	"set_Item", NULL, &t4734_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4734_m28008_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4734_MIs[] =
{
	&m28009_MI,
	&m28010_MI,
	&m28011_MI,
	&m28007_MI,
	&m28008_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4733_TI;
extern TypeInfo t4735_TI;
static TypeInfo* t4734_ITIs[] = 
{
	&t591_TI,
	&t4733_TI,
	&t4735_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4734_0_0_0;
extern Il2CppType t4734_1_0_0;
struct t4734;
extern TypeInfo t4734_TI;
extern Il2CppGenericClass t4734_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4734_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4734_MIs, t4734_PIs, NULL, NULL, NULL, NULL, NULL, &t4734_TI, t4734_ITIs, NULL, &t1400__CustomAttributeCache, &t4734_TI, &t4734_0_0_0, &t4734_1_0_0, NULL, &t4734_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3633_TI;

#include "t701.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Globalization.UnicodeCategory>
extern MethodInfo m28012_MI;
static PropertyInfo t3633____Current_PropertyInfo = 
{
	&t3633_TI, "Current", &m28012_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3633_PIs[] =
{
	&t3633____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3633_TI;
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t701 (MethodInfo* method, void* obj, void** args);
MethodInfo m28012_MI = 
{
	"get_Current", NULL, &t3633_TI, &t701_0_0_0, RuntimeInvoker_t701, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3633_MIs[] =
{
	&m28012_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3633_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3633_0_0_0;
extern Il2CppType t3633_1_0_0;
struct t3633;
extern TypeInfo t3633_TI;
extern Il2CppGenericClass t3633_GC;
TypeInfo t3633_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3633_MIs, t3633_PIs, NULL, NULL, NULL, NULL, NULL, &t3633_TI, t3633_ITIs, NULL, &EmptyCustomAttributesCache, &t3633_TI, &t3633_0_0_0, &t3633_1_0_0, NULL, &t3633_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2745.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2745_TI;
#include "t2745MD.h"

extern TypeInfo t2745_TI;
extern TypeInfo t701_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m15943_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21372_MI;
struct t14;
 int32_t m21372 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21372_MI;


extern MethodInfo m15939_MI;
 void m15939 (t2745 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15940_MI;
 t4 * m15940 (t2745 * __this, MethodInfo* method){
	{
		int32_t L_0 = m15943(__this, &m15943_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t701_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15941_MI;
 void m15941 (t2745 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15942_MI;
 bool m15942 (t2745 * __this, MethodInfo* method){
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
extern MethodInfo m15943_MI;
 int32_t m15943 (t2745 * __this, MethodInfo* method){
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
		int32_t L_8 = m21372(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21372_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Globalization.UnicodeCategory>
extern Il2CppType t14_0_0_1;
FieldInfo t2745_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2745_TI, offsetof(t2745, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2745_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2745_TI, offsetof(t2745, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2745_FIs[] =
{
	&t2745_f0_FieldInfo,
	&t2745_f1_FieldInfo,
	NULL
};
extern MethodInfo m15940_MI;
static PropertyInfo t2745____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2745_TI, "System.Collections.IEnumerator.Current", &m15940_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15943_MI;
static PropertyInfo t2745____Current_PropertyInfo = 
{
	&t2745_TI, "Current", &m15943_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2745_PIs[] =
{
	&t2745____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2745____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2745_m15939_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2745_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15939_MI = 
{
	".ctor", (methodPointerType)&m15939, &t2745_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2745_m15939_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2745_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15940_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15940, &t2745_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2745_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15941_MI = 
{
	"Dispose", (methodPointerType)&m15941, &t2745_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2745_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15942_MI = 
{
	"MoveNext", (methodPointerType)&m15942, &t2745_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2745_TI;
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t701 (MethodInfo* method, void* obj, void** args);
MethodInfo m15943_MI = 
{
	"get_Current", (methodPointerType)&m15943, &t2745_TI, &t701_0_0_0, RuntimeInvoker_t701, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2745_MIs[] =
{
	&m15939_MI,
	&m15940_MI,
	&m15941_MI,
	&m15942_MI,
	&m15943_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15940_MI;
extern MethodInfo m15942_MI;
extern MethodInfo m15941_MI;
extern MethodInfo m15943_MI;
static MethodInfo* t2745_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15940_MI,
	&m15942_MI,
	&m15941_MI,
	&m15943_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3633_TI;
static TypeInfo* t2745_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3633_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3633_TI;
static Il2CppInterfaceOffsetPair t2745_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3633_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2745_0_0_0;
extern Il2CppType t2745_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2745_TI;
extern Il2CppGenericClass t2745_GC;
extern TypeInfo t14_TI;
TypeInfo t2745_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2745_MIs, t2745_PIs, t2745_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2745_TI, t2745_ITIs, t2745_VT, &EmptyCustomAttributesCache, &t2745_TI, &t2745_0_0_0, &t2745_1_0_0, t2745_IOs, &t2745_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2745)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4736_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Globalization.UnicodeCategory>
extern MethodInfo m28013_MI;
static PropertyInfo t4736____Count_PropertyInfo = 
{
	&t4736_TI, "Count", &m28013_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28014_MI;
static PropertyInfo t4736____IsReadOnly_PropertyInfo = 
{
	&t4736_TI, "IsReadOnly", &m28014_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4736_PIs[] =
{
	&t4736____Count_PropertyInfo,
	&t4736____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4736_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28013_MI = 
{
	"get_Count", NULL, &t4736_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4736_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28014_MI = 
{
	"get_IsReadOnly", NULL, &t4736_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t701_0_0_0;
static ParameterInfo t4736_m28015_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern TypeInfo t4736_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28015_MI = 
{
	"Add", NULL, &t4736_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4736_m28015_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4736_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28016_MI = 
{
	"Clear", NULL, &t4736_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t701_0_0_0;
static ParameterInfo t4736_m28017_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern TypeInfo t4736_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28017_MI = 
{
	"Contains", NULL, &t4736_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4736_m28017_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2990_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4736_m28018_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2990_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4736_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28018_MI = 
{
	"CopyTo", NULL, &t4736_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4736_m28018_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t701_0_0_0;
static ParameterInfo t4736_m28019_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern TypeInfo t4736_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28019_MI = 
{
	"Remove", NULL, &t4736_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4736_m28019_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4736_MIs[] =
{
	&m28013_MI,
	&m28014_MI,
	&m28015_MI,
	&m28016_MI,
	&m28017_MI,
	&m28018_MI,
	&m28019_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4738_TI;
static TypeInfo* t4736_ITIs[] = 
{
	&t591_TI,
	&t4738_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4736_0_0_0;
extern Il2CppType t4736_1_0_0;
struct t4736;
extern TypeInfo t4736_TI;
extern Il2CppGenericClass t4736_GC;
TypeInfo t4736_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4736_MIs, t4736_PIs, NULL, NULL, NULL, NULL, NULL, &t4736_TI, t4736_ITIs, NULL, &EmptyCustomAttributesCache, &t4736_TI, &t4736_0_0_0, &t4736_1_0_0, NULL, &t4736_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4738_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Globalization.UnicodeCategory>
extern TypeInfo t4738_TI;
extern Il2CppType t3633_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28020_MI = 
{
	"GetEnumerator", NULL, &t4738_TI, &t3633_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4738_MIs[] =
{
	&m28020_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4738_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4738_0_0_0;
extern Il2CppType t4738_1_0_0;
struct t4738;
extern TypeInfo t4738_TI;
extern Il2CppGenericClass t4738_GC;
TypeInfo t4738_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4738_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4738_TI, t4738_ITIs, NULL, &EmptyCustomAttributesCache, &t4738_TI, &t4738_0_0_0, &t4738_1_0_0, NULL, &t4738_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4737_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Globalization.UnicodeCategory>
extern MethodInfo m28021_MI;
extern MethodInfo m28022_MI;
static PropertyInfo t4737____Item_PropertyInfo = 
{
	&t4737_TI, "Item", &m28021_MI, &m28022_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4737_PIs[] =
{
	&t4737____Item_PropertyInfo,
	NULL
};
extern Il2CppType t701_0_0_0;
static ParameterInfo t4737_m28023_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern TypeInfo t4737_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28023_MI = 
{
	"IndexOf", NULL, &t4737_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4737_m28023_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t701_0_0_0;
static ParameterInfo t4737_m28024_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern TypeInfo t4737_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28024_MI = 
{
	"Insert", NULL, &t4737_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4737_m28024_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4737_m28025_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4737_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28025_MI = 
{
	"RemoveAt", NULL, &t4737_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4737_m28025_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4737_m28021_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4737_TI;
extern Il2CppType t701_0_0_0;
extern void* RuntimeInvoker_t701_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28021_MI = 
{
	"get_Item", NULL, &t4737_TI, &t701_0_0_0, RuntimeInvoker_t701_t16, t4737_m28021_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t701_0_0_0;
static ParameterInfo t4737_m28022_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t701_0_0_0},
};
extern TypeInfo t4737_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28022_MI = 
{
	"set_Item", NULL, &t4737_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4737_m28022_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4737_MIs[] =
{
	&m28023_MI,
	&m28024_MI,
	&m28025_MI,
	&m28021_MI,
	&m28022_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4736_TI;
extern TypeInfo t4738_TI;
static TypeInfo* t4737_ITIs[] = 
{
	&t591_TI,
	&t4736_TI,
	&t4738_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4737_0_0_0;
extern Il2CppType t4737_1_0_0;
struct t4737;
extern TypeInfo t4737_TI;
extern Il2CppGenericClass t4737_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4737_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4737_MIs, t4737_PIs, NULL, NULL, NULL, NULL, NULL, &t4737_TI, t4737_ITIs, NULL, &t1400__CustomAttributeCache, &t4737_TI, &t4737_0_0_0, &t4737_1_0_0, NULL, &t4737_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3634_TI;

#include "t896.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IO.FileAccess>
extern MethodInfo m28026_MI;
static PropertyInfo t3634____Current_PropertyInfo = 
{
	&t3634_TI, "Current", &m28026_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3634_PIs[] =
{
	&t3634____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3634_TI;
extern Il2CppType t896_0_0_0;
extern void* RuntimeInvoker_t896 (MethodInfo* method, void* obj, void** args);
MethodInfo m28026_MI = 
{
	"get_Current", NULL, &t3634_TI, &t896_0_0_0, RuntimeInvoker_t896, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3634_MIs[] =
{
	&m28026_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3634_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3634_0_0_0;
extern Il2CppType t3634_1_0_0;
struct t3634;
extern TypeInfo t3634_TI;
extern Il2CppGenericClass t3634_GC;
TypeInfo t3634_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3634_MIs, t3634_PIs, NULL, NULL, NULL, NULL, NULL, &t3634_TI, t3634_ITIs, NULL, &EmptyCustomAttributesCache, &t3634_TI, &t3634_0_0_0, &t3634_1_0_0, NULL, &t3634_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2746.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2746_TI;
#include "t2746MD.h"

extern TypeInfo t2746_TI;
extern TypeInfo t896_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m15948_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21383_MI;
struct t14;
 int32_t m21383 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21383_MI;


extern MethodInfo m15944_MI;
 void m15944 (t2746 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15945_MI;
 t4 * m15945 (t2746 * __this, MethodInfo* method){
	{
		int32_t L_0 = m15948(__this, &m15948_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t896_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15946_MI;
 void m15946 (t2746 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15947_MI;
 bool m15947 (t2746 * __this, MethodInfo* method){
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
extern MethodInfo m15948_MI;
 int32_t m15948 (t2746 * __this, MethodInfo* method){
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
		int32_t L_8 = m21383(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21383_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.FileAccess>
extern Il2CppType t14_0_0_1;
FieldInfo t2746_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2746_TI, offsetof(t2746, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2746_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2746_TI, offsetof(t2746, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2746_FIs[] =
{
	&t2746_f0_FieldInfo,
	&t2746_f1_FieldInfo,
	NULL
};
extern MethodInfo m15945_MI;
static PropertyInfo t2746____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2746_TI, "System.Collections.IEnumerator.Current", &m15945_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15948_MI;
static PropertyInfo t2746____Current_PropertyInfo = 
{
	&t2746_TI, "Current", &m15948_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2746_PIs[] =
{
	&t2746____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2746____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2746_m15944_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2746_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15944_MI = 
{
	".ctor", (methodPointerType)&m15944, &t2746_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2746_m15944_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2746_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15945_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15945, &t2746_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2746_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15946_MI = 
{
	"Dispose", (methodPointerType)&m15946, &t2746_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2746_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15947_MI = 
{
	"MoveNext", (methodPointerType)&m15947, &t2746_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2746_TI;
extern Il2CppType t896_0_0_0;
extern void* RuntimeInvoker_t896 (MethodInfo* method, void* obj, void** args);
MethodInfo m15948_MI = 
{
	"get_Current", (methodPointerType)&m15948, &t2746_TI, &t896_0_0_0, RuntimeInvoker_t896, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2746_MIs[] =
{
	&m15944_MI,
	&m15945_MI,
	&m15946_MI,
	&m15947_MI,
	&m15948_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15945_MI;
extern MethodInfo m15947_MI;
extern MethodInfo m15946_MI;
extern MethodInfo m15948_MI;
static MethodInfo* t2746_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15945_MI,
	&m15947_MI,
	&m15946_MI,
	&m15948_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3634_TI;
static TypeInfo* t2746_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3634_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3634_TI;
static Il2CppInterfaceOffsetPair t2746_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3634_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2746_0_0_0;
extern Il2CppType t2746_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2746_TI;
extern Il2CppGenericClass t2746_GC;
extern TypeInfo t14_TI;
TypeInfo t2746_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2746_MIs, t2746_PIs, t2746_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2746_TI, t2746_ITIs, t2746_VT, &EmptyCustomAttributesCache, &t2746_TI, &t2746_0_0_0, &t2746_1_0_0, t2746_IOs, &t2746_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2746)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4739_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.FileAccess>
extern MethodInfo m28027_MI;
static PropertyInfo t4739____Count_PropertyInfo = 
{
	&t4739_TI, "Count", &m28027_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28028_MI;
static PropertyInfo t4739____IsReadOnly_PropertyInfo = 
{
	&t4739_TI, "IsReadOnly", &m28028_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4739_PIs[] =
{
	&t4739____Count_PropertyInfo,
	&t4739____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4739_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28027_MI = 
{
	"get_Count", NULL, &t4739_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4739_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28028_MI = 
{
	"get_IsReadOnly", NULL, &t4739_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t896_0_0_0;
static ParameterInfo t4739_m28029_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t896_0_0_0},
};
extern TypeInfo t4739_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28029_MI = 
{
	"Add", NULL, &t4739_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4739_m28029_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4739_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28030_MI = 
{
	"Clear", NULL, &t4739_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t896_0_0_0;
static ParameterInfo t4739_m28031_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t896_0_0_0},
};
extern TypeInfo t4739_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28031_MI = 
{
	"Contains", NULL, &t4739_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4739_m28031_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2991_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4739_m28032_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2991_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4739_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28032_MI = 
{
	"CopyTo", NULL, &t4739_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4739_m28032_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t896_0_0_0;
static ParameterInfo t4739_m28033_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t896_0_0_0},
};
extern TypeInfo t4739_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28033_MI = 
{
	"Remove", NULL, &t4739_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4739_m28033_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4739_MIs[] =
{
	&m28027_MI,
	&m28028_MI,
	&m28029_MI,
	&m28030_MI,
	&m28031_MI,
	&m28032_MI,
	&m28033_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4741_TI;
static TypeInfo* t4739_ITIs[] = 
{
	&t591_TI,
	&t4741_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4739_0_0_0;
extern Il2CppType t4739_1_0_0;
struct t4739;
extern TypeInfo t4739_TI;
extern Il2CppGenericClass t4739_GC;
TypeInfo t4739_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4739_MIs, t4739_PIs, NULL, NULL, NULL, NULL, NULL, &t4739_TI, t4739_ITIs, NULL, &EmptyCustomAttributesCache, &t4739_TI, &t4739_0_0_0, &t4739_1_0_0, NULL, &t4739_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4741_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.FileAccess>
extern TypeInfo t4741_TI;
extern Il2CppType t3634_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28034_MI = 
{
	"GetEnumerator", NULL, &t4741_TI, &t3634_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4741_MIs[] =
{
	&m28034_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4741_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4741_0_0_0;
extern Il2CppType t4741_1_0_0;
struct t4741;
extern TypeInfo t4741_TI;
extern Il2CppGenericClass t4741_GC;
TypeInfo t4741_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4741_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4741_TI, t4741_ITIs, NULL, &EmptyCustomAttributesCache, &t4741_TI, &t4741_0_0_0, &t4741_1_0_0, NULL, &t4741_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4740_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IO.FileAccess>
extern MethodInfo m28035_MI;
extern MethodInfo m28036_MI;
static PropertyInfo t4740____Item_PropertyInfo = 
{
	&t4740_TI, "Item", &m28035_MI, &m28036_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4740_PIs[] =
{
	&t4740____Item_PropertyInfo,
	NULL
};
extern Il2CppType t896_0_0_0;
static ParameterInfo t4740_m28037_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t896_0_0_0},
};
extern TypeInfo t4740_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28037_MI = 
{
	"IndexOf", NULL, &t4740_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4740_m28037_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t896_0_0_0;
static ParameterInfo t4740_m28038_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t896_0_0_0},
};
extern TypeInfo t4740_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28038_MI = 
{
	"Insert", NULL, &t4740_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4740_m28038_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4740_m28039_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4740_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28039_MI = 
{
	"RemoveAt", NULL, &t4740_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4740_m28039_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4740_m28035_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4740_TI;
extern Il2CppType t896_0_0_0;
extern void* RuntimeInvoker_t896_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28035_MI = 
{
	"get_Item", NULL, &t4740_TI, &t896_0_0_0, RuntimeInvoker_t896_t16, t4740_m28035_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t896_0_0_0;
static ParameterInfo t4740_m28036_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t896_0_0_0},
};
extern TypeInfo t4740_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28036_MI = 
{
	"set_Item", NULL, &t4740_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4740_m28036_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4740_MIs[] =
{
	&m28037_MI,
	&m28038_MI,
	&m28039_MI,
	&m28035_MI,
	&m28036_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4739_TI;
extern TypeInfo t4741_TI;
static TypeInfo* t4740_ITIs[] = 
{
	&t591_TI,
	&t4739_TI,
	&t4741_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4740_0_0_0;
extern Il2CppType t4740_1_0_0;
struct t4740;
extern TypeInfo t4740_TI;
extern Il2CppGenericClass t4740_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4740_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4740_MIs, t4740_PIs, NULL, NULL, NULL, NULL, NULL, &t4740_TI, t4740_ITIs, NULL, &t1400__CustomAttributeCache, &t4740_TI, &t4740_0_0_0, &t4740_1_0_0, NULL, &t4740_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3635_TI;

#include "t897.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IO.FileAttributes>
extern MethodInfo m28040_MI;
static PropertyInfo t3635____Current_PropertyInfo = 
{
	&t3635_TI, "Current", &m28040_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3635_PIs[] =
{
	&t3635____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3635_TI;
extern Il2CppType t897_0_0_0;
extern void* RuntimeInvoker_t897 (MethodInfo* method, void* obj, void** args);
MethodInfo m28040_MI = 
{
	"get_Current", NULL, &t3635_TI, &t897_0_0_0, RuntimeInvoker_t897, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3635_MIs[] =
{
	&m28040_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3635_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3635_0_0_0;
extern Il2CppType t3635_1_0_0;
struct t3635;
extern TypeInfo t3635_TI;
extern Il2CppGenericClass t3635_GC;
TypeInfo t3635_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3635_MIs, t3635_PIs, NULL, NULL, NULL, NULL, NULL, &t3635_TI, t3635_ITIs, NULL, &EmptyCustomAttributesCache, &t3635_TI, &t3635_0_0_0, &t3635_1_0_0, NULL, &t3635_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2747.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2747_TI;
#include "t2747MD.h"

extern TypeInfo t2747_TI;
extern TypeInfo t897_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m15953_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21394_MI;
struct t14;
 int32_t m21394 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21394_MI;


extern MethodInfo m15949_MI;
 void m15949 (t2747 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15950_MI;
 t4 * m15950 (t2747 * __this, MethodInfo* method){
	{
		int32_t L_0 = m15953(__this, &m15953_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t897_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15951_MI;
 void m15951 (t2747 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15952_MI;
 bool m15952 (t2747 * __this, MethodInfo* method){
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
extern MethodInfo m15953_MI;
 int32_t m15953 (t2747 * __this, MethodInfo* method){
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
		int32_t L_8 = m21394(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21394_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.FileAttributes>
extern Il2CppType t14_0_0_1;
FieldInfo t2747_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2747_TI, offsetof(t2747, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2747_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2747_TI, offsetof(t2747, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2747_FIs[] =
{
	&t2747_f0_FieldInfo,
	&t2747_f1_FieldInfo,
	NULL
};
extern MethodInfo m15950_MI;
static PropertyInfo t2747____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2747_TI, "System.Collections.IEnumerator.Current", &m15950_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15953_MI;
static PropertyInfo t2747____Current_PropertyInfo = 
{
	&t2747_TI, "Current", &m15953_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2747_PIs[] =
{
	&t2747____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2747____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2747_m15949_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2747_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15949_MI = 
{
	".ctor", (methodPointerType)&m15949, &t2747_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2747_m15949_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2747_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15950_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15950, &t2747_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2747_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15951_MI = 
{
	"Dispose", (methodPointerType)&m15951, &t2747_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2747_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15952_MI = 
{
	"MoveNext", (methodPointerType)&m15952, &t2747_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2747_TI;
extern Il2CppType t897_0_0_0;
extern void* RuntimeInvoker_t897 (MethodInfo* method, void* obj, void** args);
MethodInfo m15953_MI = 
{
	"get_Current", (methodPointerType)&m15953, &t2747_TI, &t897_0_0_0, RuntimeInvoker_t897, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2747_MIs[] =
{
	&m15949_MI,
	&m15950_MI,
	&m15951_MI,
	&m15952_MI,
	&m15953_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15950_MI;
extern MethodInfo m15952_MI;
extern MethodInfo m15951_MI;
extern MethodInfo m15953_MI;
static MethodInfo* t2747_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15950_MI,
	&m15952_MI,
	&m15951_MI,
	&m15953_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3635_TI;
static TypeInfo* t2747_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3635_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3635_TI;
static Il2CppInterfaceOffsetPair t2747_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3635_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2747_0_0_0;
extern Il2CppType t2747_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2747_TI;
extern Il2CppGenericClass t2747_GC;
extern TypeInfo t14_TI;
TypeInfo t2747_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2747_MIs, t2747_PIs, t2747_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2747_TI, t2747_ITIs, t2747_VT, &EmptyCustomAttributesCache, &t2747_TI, &t2747_0_0_0, &t2747_1_0_0, t2747_IOs, &t2747_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2747)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4742_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.FileAttributes>
extern MethodInfo m28041_MI;
static PropertyInfo t4742____Count_PropertyInfo = 
{
	&t4742_TI, "Count", &m28041_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28042_MI;
static PropertyInfo t4742____IsReadOnly_PropertyInfo = 
{
	&t4742_TI, "IsReadOnly", &m28042_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4742_PIs[] =
{
	&t4742____Count_PropertyInfo,
	&t4742____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4742_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28041_MI = 
{
	"get_Count", NULL, &t4742_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4742_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28042_MI = 
{
	"get_IsReadOnly", NULL, &t4742_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t897_0_0_0;
static ParameterInfo t4742_m28043_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t897_0_0_0},
};
extern TypeInfo t4742_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28043_MI = 
{
	"Add", NULL, &t4742_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4742_m28043_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4742_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28044_MI = 
{
	"Clear", NULL, &t4742_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t897_0_0_0;
static ParameterInfo t4742_m28045_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t897_0_0_0},
};
extern TypeInfo t4742_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28045_MI = 
{
	"Contains", NULL, &t4742_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4742_m28045_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2992_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4742_m28046_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2992_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4742_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28046_MI = 
{
	"CopyTo", NULL, &t4742_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4742_m28046_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t897_0_0_0;
static ParameterInfo t4742_m28047_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t897_0_0_0},
};
extern TypeInfo t4742_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28047_MI = 
{
	"Remove", NULL, &t4742_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4742_m28047_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4742_MIs[] =
{
	&m28041_MI,
	&m28042_MI,
	&m28043_MI,
	&m28044_MI,
	&m28045_MI,
	&m28046_MI,
	&m28047_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4744_TI;
static TypeInfo* t4742_ITIs[] = 
{
	&t591_TI,
	&t4744_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4742_0_0_0;
extern Il2CppType t4742_1_0_0;
struct t4742;
extern TypeInfo t4742_TI;
extern Il2CppGenericClass t4742_GC;
TypeInfo t4742_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4742_MIs, t4742_PIs, NULL, NULL, NULL, NULL, NULL, &t4742_TI, t4742_ITIs, NULL, &EmptyCustomAttributesCache, &t4742_TI, &t4742_0_0_0, &t4742_1_0_0, NULL, &t4742_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4744_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.FileAttributes>
extern TypeInfo t4744_TI;
extern Il2CppType t3635_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28048_MI = 
{
	"GetEnumerator", NULL, &t4744_TI, &t3635_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4744_MIs[] =
{
	&m28048_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4744_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4744_0_0_0;
extern Il2CppType t4744_1_0_0;
struct t4744;
extern TypeInfo t4744_TI;
extern Il2CppGenericClass t4744_GC;
TypeInfo t4744_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4744_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4744_TI, t4744_ITIs, NULL, &EmptyCustomAttributesCache, &t4744_TI, &t4744_0_0_0, &t4744_1_0_0, NULL, &t4744_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4743_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IO.FileAttributes>
extern MethodInfo m28049_MI;
extern MethodInfo m28050_MI;
static PropertyInfo t4743____Item_PropertyInfo = 
{
	&t4743_TI, "Item", &m28049_MI, &m28050_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4743_PIs[] =
{
	&t4743____Item_PropertyInfo,
	NULL
};
extern Il2CppType t897_0_0_0;
static ParameterInfo t4743_m28051_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t897_0_0_0},
};
extern TypeInfo t4743_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28051_MI = 
{
	"IndexOf", NULL, &t4743_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4743_m28051_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t897_0_0_0;
static ParameterInfo t4743_m28052_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t897_0_0_0},
};
extern TypeInfo t4743_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28052_MI = 
{
	"Insert", NULL, &t4743_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4743_m28052_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4743_m28053_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4743_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28053_MI = 
{
	"RemoveAt", NULL, &t4743_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4743_m28053_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4743_m28049_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4743_TI;
extern Il2CppType t897_0_0_0;
extern void* RuntimeInvoker_t897_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28049_MI = 
{
	"get_Item", NULL, &t4743_TI, &t897_0_0_0, RuntimeInvoker_t897_t16, t4743_m28049_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t897_0_0_0;
static ParameterInfo t4743_m28050_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t897_0_0_0},
};
extern TypeInfo t4743_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28050_MI = 
{
	"set_Item", NULL, &t4743_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4743_m28050_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4743_MIs[] =
{
	&m28051_MI,
	&m28052_MI,
	&m28053_MI,
	&m28049_MI,
	&m28050_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4742_TI;
extern TypeInfo t4744_TI;
static TypeInfo* t4743_ITIs[] = 
{
	&t591_TI,
	&t4742_TI,
	&t4744_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4743_0_0_0;
extern Il2CppType t4743_1_0_0;
struct t4743;
extern TypeInfo t4743_TI;
extern Il2CppGenericClass t4743_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4743_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4743_MIs, t4743_PIs, NULL, NULL, NULL, NULL, NULL, &t4743_TI, t4743_ITIs, NULL, &t1400__CustomAttributeCache, &t4743_TI, &t4743_0_0_0, &t4743_1_0_0, NULL, &t4743_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3636_TI;

#include "t895.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IO.FileMode>
extern MethodInfo m28054_MI;
static PropertyInfo t3636____Current_PropertyInfo = 
{
	&t3636_TI, "Current", &m28054_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3636_PIs[] =
{
	&t3636____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3636_TI;
extern Il2CppType t895_0_0_0;
extern void* RuntimeInvoker_t895 (MethodInfo* method, void* obj, void** args);
MethodInfo m28054_MI = 
{
	"get_Current", NULL, &t3636_TI, &t895_0_0_0, RuntimeInvoker_t895, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3636_MIs[] =
{
	&m28054_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3636_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3636_0_0_0;
extern Il2CppType t3636_1_0_0;
struct t3636;
extern TypeInfo t3636_TI;
extern Il2CppGenericClass t3636_GC;
TypeInfo t3636_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3636_MIs, t3636_PIs, NULL, NULL, NULL, NULL, NULL, &t3636_TI, t3636_ITIs, NULL, &EmptyCustomAttributesCache, &t3636_TI, &t3636_0_0_0, &t3636_1_0_0, NULL, &t3636_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2748.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2748_TI;
#include "t2748MD.h"

extern TypeInfo t2748_TI;
extern TypeInfo t895_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m15958_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21405_MI;
struct t14;
 int32_t m21405 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21405_MI;


extern MethodInfo m15954_MI;
 void m15954 (t2748 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15955_MI;
 t4 * m15955 (t2748 * __this, MethodInfo* method){
	{
		int32_t L_0 = m15958(__this, &m15958_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t895_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15956_MI;
 void m15956 (t2748 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15957_MI;
 bool m15957 (t2748 * __this, MethodInfo* method){
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
extern MethodInfo m15958_MI;
 int32_t m15958 (t2748 * __this, MethodInfo* method){
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
		int32_t L_8 = m21405(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21405_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.FileMode>
extern Il2CppType t14_0_0_1;
FieldInfo t2748_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2748_TI, offsetof(t2748, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2748_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2748_TI, offsetof(t2748, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2748_FIs[] =
{
	&t2748_f0_FieldInfo,
	&t2748_f1_FieldInfo,
	NULL
};
extern MethodInfo m15955_MI;
static PropertyInfo t2748____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2748_TI, "System.Collections.IEnumerator.Current", &m15955_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15958_MI;
static PropertyInfo t2748____Current_PropertyInfo = 
{
	&t2748_TI, "Current", &m15958_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2748_PIs[] =
{
	&t2748____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2748____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2748_m15954_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2748_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15954_MI = 
{
	".ctor", (methodPointerType)&m15954, &t2748_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2748_m15954_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2748_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15955_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15955, &t2748_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2748_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15956_MI = 
{
	"Dispose", (methodPointerType)&m15956, &t2748_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2748_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15957_MI = 
{
	"MoveNext", (methodPointerType)&m15957, &t2748_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2748_TI;
extern Il2CppType t895_0_0_0;
extern void* RuntimeInvoker_t895 (MethodInfo* method, void* obj, void** args);
MethodInfo m15958_MI = 
{
	"get_Current", (methodPointerType)&m15958, &t2748_TI, &t895_0_0_0, RuntimeInvoker_t895, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2748_MIs[] =
{
	&m15954_MI,
	&m15955_MI,
	&m15956_MI,
	&m15957_MI,
	&m15958_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15955_MI;
extern MethodInfo m15957_MI;
extern MethodInfo m15956_MI;
extern MethodInfo m15958_MI;
static MethodInfo* t2748_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15955_MI,
	&m15957_MI,
	&m15956_MI,
	&m15958_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3636_TI;
static TypeInfo* t2748_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3636_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3636_TI;
static Il2CppInterfaceOffsetPair t2748_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3636_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2748_0_0_0;
extern Il2CppType t2748_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2748_TI;
extern Il2CppGenericClass t2748_GC;
extern TypeInfo t14_TI;
TypeInfo t2748_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2748_MIs, t2748_PIs, t2748_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2748_TI, t2748_ITIs, t2748_VT, &EmptyCustomAttributesCache, &t2748_TI, &t2748_0_0_0, &t2748_1_0_0, t2748_IOs, &t2748_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2748)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4745_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.FileMode>
extern MethodInfo m28055_MI;
static PropertyInfo t4745____Count_PropertyInfo = 
{
	&t4745_TI, "Count", &m28055_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28056_MI;
static PropertyInfo t4745____IsReadOnly_PropertyInfo = 
{
	&t4745_TI, "IsReadOnly", &m28056_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4745_PIs[] =
{
	&t4745____Count_PropertyInfo,
	&t4745____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4745_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28055_MI = 
{
	"get_Count", NULL, &t4745_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4745_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28056_MI = 
{
	"get_IsReadOnly", NULL, &t4745_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t895_0_0_0;
static ParameterInfo t4745_m28057_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t895_0_0_0},
};
extern TypeInfo t4745_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28057_MI = 
{
	"Add", NULL, &t4745_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4745_m28057_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4745_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28058_MI = 
{
	"Clear", NULL, &t4745_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t895_0_0_0;
static ParameterInfo t4745_m28059_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t895_0_0_0},
};
extern TypeInfo t4745_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28059_MI = 
{
	"Contains", NULL, &t4745_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4745_m28059_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2993_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4745_m28060_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2993_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4745_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28060_MI = 
{
	"CopyTo", NULL, &t4745_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4745_m28060_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t895_0_0_0;
static ParameterInfo t4745_m28061_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t895_0_0_0},
};
extern TypeInfo t4745_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28061_MI = 
{
	"Remove", NULL, &t4745_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4745_m28061_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4745_MIs[] =
{
	&m28055_MI,
	&m28056_MI,
	&m28057_MI,
	&m28058_MI,
	&m28059_MI,
	&m28060_MI,
	&m28061_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4747_TI;
static TypeInfo* t4745_ITIs[] = 
{
	&t591_TI,
	&t4747_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4745_0_0_0;
extern Il2CppType t4745_1_0_0;
struct t4745;
extern TypeInfo t4745_TI;
extern Il2CppGenericClass t4745_GC;
TypeInfo t4745_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4745_MIs, t4745_PIs, NULL, NULL, NULL, NULL, NULL, &t4745_TI, t4745_ITIs, NULL, &EmptyCustomAttributesCache, &t4745_TI, &t4745_0_0_0, &t4745_1_0_0, NULL, &t4745_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4747_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.FileMode>
extern TypeInfo t4747_TI;
extern Il2CppType t3636_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28062_MI = 
{
	"GetEnumerator", NULL, &t4747_TI, &t3636_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4747_MIs[] =
{
	&m28062_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4747_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4747_0_0_0;
extern Il2CppType t4747_1_0_0;
struct t4747;
extern TypeInfo t4747_TI;
extern Il2CppGenericClass t4747_GC;
TypeInfo t4747_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4747_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4747_TI, t4747_ITIs, NULL, &EmptyCustomAttributesCache, &t4747_TI, &t4747_0_0_0, &t4747_1_0_0, NULL, &t4747_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4746_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IO.FileMode>
extern MethodInfo m28063_MI;
extern MethodInfo m28064_MI;
static PropertyInfo t4746____Item_PropertyInfo = 
{
	&t4746_TI, "Item", &m28063_MI, &m28064_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4746_PIs[] =
{
	&t4746____Item_PropertyInfo,
	NULL
};
extern Il2CppType t895_0_0_0;
static ParameterInfo t4746_m28065_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t895_0_0_0},
};
extern TypeInfo t4746_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28065_MI = 
{
	"IndexOf", NULL, &t4746_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4746_m28065_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t895_0_0_0;
static ParameterInfo t4746_m28066_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t895_0_0_0},
};
extern TypeInfo t4746_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28066_MI = 
{
	"Insert", NULL, &t4746_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4746_m28066_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4746_m28067_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4746_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28067_MI = 
{
	"RemoveAt", NULL, &t4746_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4746_m28067_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4746_m28063_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4746_TI;
extern Il2CppType t895_0_0_0;
extern void* RuntimeInvoker_t895_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28063_MI = 
{
	"get_Item", NULL, &t4746_TI, &t895_0_0_0, RuntimeInvoker_t895_t16, t4746_m28063_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t895_0_0_0;
static ParameterInfo t4746_m28064_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t895_0_0_0},
};
extern TypeInfo t4746_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28064_MI = 
{
	"set_Item", NULL, &t4746_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4746_m28064_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4746_MIs[] =
{
	&m28065_MI,
	&m28066_MI,
	&m28067_MI,
	&m28063_MI,
	&m28064_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4745_TI;
extern TypeInfo t4747_TI;
static TypeInfo* t4746_ITIs[] = 
{
	&t591_TI,
	&t4745_TI,
	&t4747_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4746_0_0_0;
extern Il2CppType t4746_1_0_0;
struct t4746;
extern TypeInfo t4746_TI;
extern Il2CppGenericClass t4746_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4746_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4746_MIs, t4746_PIs, NULL, NULL, NULL, NULL, NULL, &t4746_TI, t4746_ITIs, NULL, &t1400__CustomAttributeCache, &t4746_TI, &t4746_0_0_0, &t4746_1_0_0, NULL, &t4746_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3637_TI;

#include "t899.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IO.FileOptions>
extern MethodInfo m28068_MI;
static PropertyInfo t3637____Current_PropertyInfo = 
{
	&t3637_TI, "Current", &m28068_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3637_PIs[] =
{
	&t3637____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3637_TI;
extern Il2CppType t899_0_0_0;
extern void* RuntimeInvoker_t899 (MethodInfo* method, void* obj, void** args);
MethodInfo m28068_MI = 
{
	"get_Current", NULL, &t3637_TI, &t899_0_0_0, RuntimeInvoker_t899, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3637_MIs[] =
{
	&m28068_MI,
	NULL
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
static TypeInfo* t3637_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3637_0_0_0;
extern Il2CppType t3637_1_0_0;
struct t3637;
extern TypeInfo t3637_TI;
extern Il2CppGenericClass t3637_GC;
TypeInfo t3637_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3637_MIs, t3637_PIs, NULL, NULL, NULL, NULL, NULL, &t3637_TI, t3637_ITIs, NULL, &EmptyCustomAttributesCache, &t3637_TI, &t3637_0_0_0, &t3637_1_0_0, NULL, &t3637_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2749.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2749_TI;
#include "t2749MD.h"

extern TypeInfo t2749_TI;
extern TypeInfo t899_TI;
extern TypeInfo t1269_TI;
extern MethodInfo m15963_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m21416_MI;
struct t14;
 int32_t m21416 (t14 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21416_MI;


extern MethodInfo m15959_MI;
 void m15959 (t2749 * __this, t14 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15960_MI;
 t4 * m15960 (t2749 * __this, MethodInfo* method){
	{
		int32_t L_0 = m15963(__this, &m15963_MI);
		int32_t L_1 = L_0;
		t4 * L_2 = Box(InitializedTypeInfo(&t899_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15961_MI;
 void m15961 (t2749 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15962_MI;
 bool m15962 (t2749 * __this, MethodInfo* method){
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
extern MethodInfo m15963_MI;
 int32_t m15963 (t2749 * __this, MethodInfo* method){
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
		int32_t L_8 = m21416(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21416_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.FileOptions>
extern Il2CppType t14_0_0_1;
FieldInfo t2749_f0_FieldInfo = 
{
	"array", &t14_0_0_1, &t2749_TI, offsetof(t2749, f0) + sizeof(t4), &EmptyCustomAttributesCache};
extern Il2CppType t16_0_0_1;
FieldInfo t2749_f1_FieldInfo = 
{
	"idx", &t16_0_0_1, &t2749_TI, offsetof(t2749, f1) + sizeof(t4), &EmptyCustomAttributesCache};
static FieldInfo* t2749_FIs[] =
{
	&t2749_f0_FieldInfo,
	&t2749_f1_FieldInfo,
	NULL
};
extern MethodInfo m15960_MI;
static PropertyInfo t2749____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2749_TI, "System.Collections.IEnumerator.Current", &m15960_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15963_MI;
static PropertyInfo t2749____Current_PropertyInfo = 
{
	&t2749_TI, "Current", &m15963_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2749_PIs[] =
{
	&t2749____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2749____Current_PropertyInfo,
	NULL
};
extern Il2CppType t14_0_0_0;
static ParameterInfo t2749_m15959_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t14_0_0_0},
};
extern TypeInfo t2749_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15959_MI = 
{
	".ctor", (methodPointerType)&m15959, &t2749_TI, &t15_0_0_0, RuntimeInvoker_t15_t4, t2749_m15959_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2749_TI;
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m15960_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15960, &t2749_TI, &t4_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2749_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m15961_MI = 
{
	"Dispose", (methodPointerType)&m15961, &t2749_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2749_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m15962_MI = 
{
	"MoveNext", (methodPointerType)&m15962, &t2749_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2749_TI;
extern Il2CppType t899_0_0_0;
extern void* RuntimeInvoker_t899 (MethodInfo* method, void* obj, void** args);
MethodInfo m15963_MI = 
{
	"get_Current", (methodPointerType)&m15963, &t2749_TI, &t899_0_0_0, RuntimeInvoker_t899, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2749_MIs[] =
{
	&m15959_MI,
	&m15960_MI,
	&m15961_MI,
	&m15962_MI,
	&m15963_MI,
	NULL
};
extern MethodInfo m1358_MI;
extern MethodInfo m20_MI;
extern MethodInfo m1359_MI;
extern MethodInfo m1473_MI;
extern MethodInfo m15960_MI;
extern MethodInfo m15962_MI;
extern MethodInfo m15961_MI;
extern MethodInfo m15963_MI;
static MethodInfo* t2749_VT[] =
{
	&m1358_MI,
	&m20_MI,
	&m1359_MI,
	&m1473_MI,
	&m15960_MI,
	&m15962_MI,
	&m15961_MI,
	&m15963_MI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3637_TI;
static TypeInfo* t2749_ITIs[] = 
{
	&t123_TI,
	&t24_TI,
	&t3637_TI,
};
extern TypeInfo t123_TI;
extern TypeInfo t24_TI;
extern TypeInfo t3637_TI;
static Il2CppInterfaceOffsetPair t2749_IOs[] = 
{
	{ &t123_TI, 4},
	{ &t24_TI, 6},
	{ &t3637_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2749_0_0_0;
extern Il2CppType t2749_1_0_0;
extern TypeInfo t95_TI;
extern TypeInfo t2749_TI;
extern Il2CppGenericClass t2749_GC;
extern TypeInfo t14_TI;
TypeInfo t2749_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2749_MIs, t2749_PIs, t2749_FIs, NULL, &t95_TI, NULL, &t14_TI, &t2749_TI, t2749_ITIs, t2749_VT, &EmptyCustomAttributesCache, &t2749_TI, &t2749_0_0_0, &t2749_1_0_0, t2749_IOs, &t2749_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2749)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4748_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.FileOptions>
extern MethodInfo m28069_MI;
static PropertyInfo t4748____Count_PropertyInfo = 
{
	&t4748_TI, "Count", &m28069_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28070_MI;
static PropertyInfo t4748____IsReadOnly_PropertyInfo = 
{
	&t4748_TI, "IsReadOnly", &m28070_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4748_PIs[] =
{
	&t4748____Count_PropertyInfo,
	&t4748____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4748_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28069_MI = 
{
	"get_Count", NULL, &t4748_TI, &t16_0_0_0, RuntimeInvoker_t16, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4748_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
MethodInfo m28070_MI = 
{
	"get_IsReadOnly", NULL, &t4748_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t899_0_0_0;
static ParameterInfo t4748_m28071_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t899_0_0_0},
};
extern TypeInfo t4748_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28071_MI = 
{
	"Add", NULL, &t4748_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4748_m28071_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4748_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15 (MethodInfo* method, void* obj, void** args);
MethodInfo m28072_MI = 
{
	"Clear", NULL, &t4748_TI, &t15_0_0_0, RuntimeInvoker_t15, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t899_0_0_0;
static ParameterInfo t4748_m28073_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t899_0_0_0},
};
extern TypeInfo t4748_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28073_MI = 
{
	"Contains", NULL, &t4748_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4748_m28073_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2994_0_0_0;
extern Il2CppType t16_0_0_0;
static ParameterInfo t4748_m28074_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2994_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4748_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t4_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28074_MI = 
{
	"CopyTo", NULL, &t4748_TI, &t15_0_0_0, RuntimeInvoker_t15_t4_t16, t4748_m28074_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t899_0_0_0;
static ParameterInfo t4748_m28075_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t899_0_0_0},
};
extern TypeInfo t4748_TI;
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28075_MI = 
{
	"Remove", NULL, &t4748_TI, &t17_0_0_0, RuntimeInvoker_t17_t16, t4748_m28075_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4748_MIs[] =
{
	&m28069_MI,
	&m28070_MI,
	&m28071_MI,
	&m28072_MI,
	&m28073_MI,
	&m28074_MI,
	&m28075_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4750_TI;
static TypeInfo* t4748_ITIs[] = 
{
	&t591_TI,
	&t4750_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4748_0_0_0;
extern Il2CppType t4748_1_0_0;
struct t4748;
extern TypeInfo t4748_TI;
extern Il2CppGenericClass t4748_GC;
TypeInfo t4748_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4748_MIs, t4748_PIs, NULL, NULL, NULL, NULL, NULL, &t4748_TI, t4748_ITIs, NULL, &EmptyCustomAttributesCache, &t4748_TI, &t4748_0_0_0, &t4748_1_0_0, NULL, &t4748_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4750_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.FileOptions>
extern TypeInfo t4750_TI;
extern Il2CppType t3637_0_0_0;
extern void* RuntimeInvoker_t4 (MethodInfo* method, void* obj, void** args);
MethodInfo m28076_MI = 
{
	"GetEnumerator", NULL, &t4750_TI, &t3637_0_0_0, RuntimeInvoker_t4, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4750_MIs[] =
{
	&m28076_MI,
	NULL
};
extern TypeInfo t591_TI;
static TypeInfo* t4750_ITIs[] = 
{
	&t591_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4750_0_0_0;
extern Il2CppType t4750_1_0_0;
struct t4750;
extern TypeInfo t4750_TI;
extern Il2CppGenericClass t4750_GC;
TypeInfo t4750_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4750_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4750_TI, t4750_ITIs, NULL, &EmptyCustomAttributesCache, &t4750_TI, &t4750_0_0_0, &t4750_1_0_0, NULL, &t4750_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4749_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IO.FileOptions>
extern MethodInfo m28077_MI;
extern MethodInfo m28078_MI;
static PropertyInfo t4749____Item_PropertyInfo = 
{
	&t4749_TI, "Item", &m28077_MI, &m28078_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4749_PIs[] =
{
	&t4749____Item_PropertyInfo,
	NULL
};
extern Il2CppType t899_0_0_0;
static ParameterInfo t4749_m28079_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t899_0_0_0},
};
extern TypeInfo t4749_TI;
extern Il2CppType t16_0_0_0;
extern void* RuntimeInvoker_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28079_MI = 
{
	"IndexOf", NULL, &t4749_TI, &t16_0_0_0, RuntimeInvoker_t16_t16, t4749_m28079_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t899_0_0_0;
static ParameterInfo t4749_m28080_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t899_0_0_0},
};
extern TypeInfo t4749_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28080_MI = 
{
	"Insert", NULL, &t4749_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4749_m28080_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4749_m28081_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4749_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28081_MI = 
{
	"RemoveAt", NULL, &t4749_TI, &t15_0_0_0, RuntimeInvoker_t15_t16, t4749_m28081_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
static ParameterInfo t4749_m28077_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
};
extern TypeInfo t4749_TI;
extern Il2CppType t899_0_0_0;
extern void* RuntimeInvoker_t899_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28077_MI = 
{
	"get_Item", NULL, &t4749_TI, &t899_0_0_0, RuntimeInvoker_t899_t16, t4749_m28077_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t16_0_0_0;
extern Il2CppType t899_0_0_0;
static ParameterInfo t4749_m28078_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t16_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t899_0_0_0},
};
extern TypeInfo t4749_TI;
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t15_t16_t16 (MethodInfo* method, void* obj, void** args);
MethodInfo m28078_MI = 
{
	"set_Item", NULL, &t4749_TI, &t15_0_0_0, RuntimeInvoker_t15_t16_t16, t4749_m28078_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4749_MIs[] =
{
	&m28079_MI,
	&m28080_MI,
	&m28081_MI,
	&m28077_MI,
	&m28078_MI,
	NULL
};
extern TypeInfo t591_TI;
extern TypeInfo t4748_TI;
extern TypeInfo t4750_TI;
static TypeInfo* t4749_ITIs[] = 
{
	&t591_TI,
	&t4748_TI,
	&t4750_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4749_0_0_0;
extern Il2CppType t4749_1_0_0;
struct t4749;
extern TypeInfo t4749_TI;
extern Il2CppGenericClass t4749_GC;
extern CustomAttributesCache t1400__CustomAttributeCache;
TypeInfo t4749_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4749_MIs, t4749_PIs, NULL, NULL, NULL, NULL, NULL, &t4749_TI, t4749_ITIs, NULL, &t1400__CustomAttributeCache, &t4749_TI, &t4749_0_0_0, &t4749_1_0_0, NULL, &t4749_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
