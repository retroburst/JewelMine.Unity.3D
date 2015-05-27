#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t3757.h"
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
extern TypeInfo t3757_TI;
#include "t3757MD.h"

#include "t5.h"
#include "t702.h"
#include "t110.h"
#include "t11.h"
#include "t133.h"
#include "t109.h"
#include "t107.h"
#include "t108.h"
extern TypeInfo t702_TI;
extern TypeInfo t133_TI;
#include "t133MD.h"
#include "t107MD.h"
extern MethodInfo m21328_MI;
extern MethodInfo m4758_MI;
extern MethodInfo m4763_MI;
extern MethodInfo m27707_MI;
struct t107;
#include "t1181.h"
 int32_t m27707 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21324_MI;
 void m21324 (t3757 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21325_MI;
 t5 * m21325 (t3757 * __this, MethodInfo* method){
	{
		int32_t L_0 = m21328(__this, &m21328_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t702_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m21326_MI;
 void m21326 (t3757 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21327_MI;
 bool m21327 (t3757 * __this, MethodInfo* method){
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
		t107 * L_1 = (__this->f0);
		int32_t L_2 = m4763(L_1, &m4763_MI);
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
 int32_t m21328 (t3757 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t133 * L_1 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4758(L_1, (t11*) &_stringLiteral1078, &m4758_MI);
		il2cpp_codegen_raise_exception(L_1);
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
		t133 * L_3 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4758(L_3, (t11*) &_stringLiteral1079, &m4758_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t107 * L_4 = (__this->f0);
		t107 * L_5 = (__this->f0);
		int32_t L_6 = m4763(L_5, &m4763_MI);
		int32_t L_7 = (__this->f1);
		int32_t L_8 = m27707(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m27707_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Events.UnityEventCallState>
extern Il2CppType t107_0_0_1;
FieldInfo t3757_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3757_TI, offsetof(t3757, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3757_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3757_TI, offsetof(t3757, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3757_FIs[] =
{
	&t3757_f0_FieldInfo,
	&t3757_f1_FieldInfo,
	NULL
};
static PropertyInfo t3757____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3757_TI, "System.Collections.IEnumerator.Current", &m21325_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3757____Current_PropertyInfo = 
{
	&t3757_TI, "Current", &m21328_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3757_PIs[] =
{
	&t3757____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3757____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
extern Il2CppType t107_0_0_0;
static ParameterInfo t3757_m21324_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21324_GM;
MethodInfo m21324_MI = 
{
	".ctor", (methodPointerType)&m21324, &t3757_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3757_m21324_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21324_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21325_GM;
MethodInfo m21325_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21325, &t3757_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21325_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21326_GM;
MethodInfo m21326_MI = 
{
	"Dispose", (methodPointerType)&m21326, &t3757_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21326_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21327_GM;
MethodInfo m21327_MI = 
{
	"MoveNext", (methodPointerType)&m21327, &t3757_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21327_GM};
extern Il2CppType t702_0_0_0;
extern void* RuntimeInvoker_t702 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21328_GM;
MethodInfo m21328_MI = 
{
	"get_Current", (methodPointerType)&m21328, &t3757_TI, &t702_0_0_0, RuntimeInvoker_t702, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21328_GM};
static MethodInfo* t3757_MIs[] =
{
	&m21324_MI,
	&m21325_MI,
	&m21326_MI,
	&m21327_MI,
	&m21328_MI,
	NULL
};
extern MethodInfo m2041_MI;
extern MethodInfo m465_MI;
extern MethodInfo m2042_MI;
extern MethodInfo m2147_MI;
static MethodInfo* t3757_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21325_MI,
	&m21327_MI,
	&m21326_MI,
	&m21328_MI,
};
extern TypeInfo t196_TI;
extern TypeInfo t132_TI;
extern TypeInfo t5252_TI;
static TypeInfo* t3757_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5252_TI,
};
static Il2CppInterfaceOffsetPair t3757_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5252_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3757_0_0_0;
extern Il2CppType t3757_1_0_0;
extern TypeInfo t267_TI;
extern Il2CppGenericClass t3757_GC;
extern TypeInfo t107_TI;
TypeInfo t3757_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3757_MIs, t3757_PIs, t3757_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3757_TI, t3757_ITIs, t3757_VT, &EmptyCustomAttributesCache, &t3757_TI, &t3757_0_0_0, &t3757_1_0_0, t3757_IOs, &t3757_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3757)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6627_TI;

#include "UnityEngine_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Events.UnityEventCallState>
extern MethodInfo m35591_MI;
static PropertyInfo t6627____Count_PropertyInfo = 
{
	&t6627_TI, "Count", &m35591_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35592_MI;
static PropertyInfo t6627____IsReadOnly_PropertyInfo = 
{
	&t6627_TI, "IsReadOnly", &m35592_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6627_PIs[] =
{
	&t6627____Count_PropertyInfo,
	&t6627____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35591_GM;
MethodInfo m35591_MI = 
{
	"get_Count", NULL, &t6627_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35591_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35592_GM;
MethodInfo m35592_MI = 
{
	"get_IsReadOnly", NULL, &t6627_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35592_GM};
extern Il2CppType t702_0_0_0;
extern Il2CppType t702_0_0_0;
static ParameterInfo t6627_m35593_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t702_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35593_GM;
MethodInfo m35593_MI = 
{
	"Add", NULL, &t6627_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6627_m35593_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35593_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35594_GM;
MethodInfo m35594_MI = 
{
	"Clear", NULL, &t6627_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35594_GM};
extern Il2CppType t702_0_0_0;
static ParameterInfo t6627_m35595_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t702_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35595_GM;
MethodInfo m35595_MI = 
{
	"Contains", NULL, &t6627_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6627_m35595_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35595_GM};
extern Il2CppType t4464_0_0_0;
extern Il2CppType t4464_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6627_m35596_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4464_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35596_GM;
MethodInfo m35596_MI = 
{
	"CopyTo", NULL, &t6627_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6627_m35596_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35596_GM};
extern Il2CppType t702_0_0_0;
static ParameterInfo t6627_m35597_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t702_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35597_GM;
MethodInfo m35597_MI = 
{
	"Remove", NULL, &t6627_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6627_m35597_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35597_GM};
static MethodInfo* t6627_MIs[] =
{
	&m35591_MI,
	&m35592_MI,
	&m35593_MI,
	&m35594_MI,
	&m35595_MI,
	&m35596_MI,
	&m35597_MI,
	NULL
};
extern TypeInfo t739_TI;
extern TypeInfo t6629_TI;
static TypeInfo* t6627_ITIs[] = 
{
	&t739_TI,
	&t6629_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6627_0_0_0;
extern Il2CppType t6627_1_0_0;
struct t6627;
extern Il2CppGenericClass t6627_GC;
TypeInfo t6627_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6627_MIs, t6627_PIs, NULL, NULL, NULL, NULL, NULL, &t6627_TI, t6627_ITIs, NULL, &EmptyCustomAttributesCache, &t6627_TI, &t6627_0_0_0, &t6627_1_0_0, NULL, &t6627_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Events.UnityEventCallState>
extern Il2CppType t5252_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35598_GM;
MethodInfo m35598_MI = 
{
	"GetEnumerator", NULL, &t6629_TI, &t5252_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35598_GM};
static MethodInfo* t6629_MIs[] =
{
	&m35598_MI,
	NULL
};
static TypeInfo* t6629_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6629_0_0_0;
extern Il2CppType t6629_1_0_0;
struct t6629;
extern Il2CppGenericClass t6629_GC;
TypeInfo t6629_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6629_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6629_TI, t6629_ITIs, NULL, &EmptyCustomAttributesCache, &t6629_TI, &t6629_0_0_0, &t6629_1_0_0, NULL, &t6629_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6628_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Events.UnityEventCallState>
extern MethodInfo m35599_MI;
extern MethodInfo m35600_MI;
static PropertyInfo t6628____Item_PropertyInfo = 
{
	&t6628_TI, "Item", &m35599_MI, &m35600_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6628_PIs[] =
{
	&t6628____Item_PropertyInfo,
	NULL
};
extern Il2CppType t702_0_0_0;
static ParameterInfo t6628_m35601_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t702_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35601_GM;
MethodInfo m35601_MI = 
{
	"IndexOf", NULL, &t6628_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6628_m35601_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35601_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t702_0_0_0;
static ParameterInfo t6628_m35602_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t702_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35602_GM;
MethodInfo m35602_MI = 
{
	"Insert", NULL, &t6628_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6628_m35602_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35602_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6628_m35603_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35603_GM;
MethodInfo m35603_MI = 
{
	"RemoveAt", NULL, &t6628_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6628_m35603_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35603_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6628_m35599_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t702_0_0_0;
extern void* RuntimeInvoker_t702_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35599_GM;
MethodInfo m35599_MI = 
{
	"get_Item", NULL, &t6628_TI, &t702_0_0_0, RuntimeInvoker_t702_t110, t6628_m35599_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35599_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t702_0_0_0;
static ParameterInfo t6628_m35600_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t702_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35600_GM;
MethodInfo m35600_MI = 
{
	"set_Item", NULL, &t6628_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6628_m35600_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35600_GM};
static MethodInfo* t6628_MIs[] =
{
	&m35601_MI,
	&m35602_MI,
	&m35603_MI,
	&m35599_MI,
	&m35600_MI,
	NULL
};
static TypeInfo* t6628_ITIs[] = 
{
	&t739_TI,
	&t6627_TI,
	&t6629_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6628_0_0_0;
extern Il2CppType t6628_1_0_0;
struct t6628;
extern Il2CppGenericClass t6628_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6628_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6628_MIs, t6628_PIs, NULL, NULL, NULL, NULL, NULL, &t6628_TI, t6628_ITIs, NULL, &t2240__CustomAttributeCache, &t6628_TI, &t6628_0_0_0, &t6628_1_0_0, NULL, &t6628_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t793.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t793_TI;
#include "t793MD.h"

#include "t117.h"
#include "t695.h"
#include "t116.h"
#include "mscorlib_ArrayTypes.h"
#include "t3240.h"
extern TypeInfo t168_TI;
extern TypeInfo t5_TI;
extern TypeInfo t116_TI;
extern TypeInfo t3240_TI;
extern TypeInfo t109_TI;
#include "t3240MD.h"
extern MethodInfo m18109_MI;
extern MethodInfo m18111_MI;


extern MethodInfo m3619_MI;
 void m3619 (t793 * __this, t117 * p0, t695 * p1, float p2, MethodInfo* method){
	{
		__this->f1 = ((t168*)SZArrayNew(InitializedTypeInfo(&t168_TI), 1));
		m18109(__this, p0, p1, &m18109_MI);
		t168* L_0 = (__this->f1);
		float L_1 = p2;
		t5 * L_2 = Box(InitializedTypeInfo(&t116_TI), &L_1);
		ArrayElementTypeCheck (L_0, L_2);
		*((t5 **)(t5 **)SZArrayLdElema(L_0, 0)) = (t5 *)L_2;
		return;
	}
}
extern MethodInfo m21329_MI;
 void m21329 (t793 * __this, t168* p0, MethodInfo* method){
	{
		t168* L_0 = (__this->f1);
		m18111(__this, L_0, &m18111_MI);
		return;
	}
}
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<System.Single>
extern Il2CppType t168_0_0_33;
FieldInfo t793_f1_FieldInfo = 
{
	"m_Arg1", &t168_0_0_33, &t793_TI, offsetof(t793, f1), &EmptyCustomAttributesCache};
static FieldInfo* t793_FIs[] =
{
	&t793_f1_FieldInfo,
	NULL
};
extern Il2CppType t117_0_0_0;
extern Il2CppType t117_0_0_0;
extern Il2CppType t695_0_0_0;
extern Il2CppType t695_0_0_0;
extern Il2CppType t116_0_0_0;
extern Il2CppType t116_0_0_0;
static ParameterInfo t793_m3619_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t117_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t116_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t116 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m3619_GM;
MethodInfo m3619_MI = 
{
	".ctor", (methodPointerType)&m3619, &t793_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t116, t793_m3619_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL, &m3619_GM};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t793_m21329_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21329_GM;
MethodInfo m21329_MI = 
{
	"Invoke", (methodPointerType)&m21329, &t793_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t793_m21329_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21329_GM};
static MethodInfo* t793_MIs[] =
{
	&m3619_MI,
	&m21329_MI,
	NULL
};
extern MethodInfo m464_MI;
extern MethodInfo m466_MI;
extern MethodInfo m467_MI;
extern MethodInfo m18112_MI;
static MethodInfo* t793_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21329_MI,
	&m18112_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t793_0_0_0;
extern Il2CppType t793_1_0_0;
struct t793;
extern Il2CppGenericClass t793_GC;
TypeInfo t793_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t793_MIs, NULL, t793_FIs, NULL, &t3240_TI, NULL, NULL, &t793_TI, NULL, t793_VT, &EmptyCustomAttributesCache, &t793_TI, &t793_0_0_0, &t793_1_0_0, NULL, &t793_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t793), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#include "t794.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t794_TI;
#include "t794MD.h"

#include "t3758.h"
extern TypeInfo t110_TI;
extern TypeInfo t3758_TI;
#include "t3758MD.h"
extern MethodInfo m21331_MI;
extern MethodInfo m21333_MI;


extern MethodInfo m3620_MI;
 void m3620 (t794 * __this, t117 * p0, t695 * p1, int32_t p2, MethodInfo* method){
	{
		__this->f1 = ((t168*)SZArrayNew(InitializedTypeInfo(&t168_TI), 1));
		m21331(__this, p0, p1, &m21331_MI);
		t168* L_0 = (__this->f1);
		int32_t L_1 = p2;
		t5 * L_2 = Box(InitializedTypeInfo(&t110_TI), &L_1);
		ArrayElementTypeCheck (L_0, L_2);
		*((t5 **)(t5 **)SZArrayLdElema(L_0, 0)) = (t5 *)L_2;
		return;
	}
}
extern MethodInfo m21330_MI;
 void m21330 (t794 * __this, t168* p0, MethodInfo* method){
	{
		t168* L_0 = (__this->f1);
		m21333(__this, L_0, &m21333_MI);
		return;
	}
}
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<System.Int32>
extern Il2CppType t168_0_0_33;
FieldInfo t794_f1_FieldInfo = 
{
	"m_Arg1", &t168_0_0_33, &t794_TI, offsetof(t794, f1), &EmptyCustomAttributesCache};
static FieldInfo* t794_FIs[] =
{
	&t794_f1_FieldInfo,
	NULL
};
extern Il2CppType t117_0_0_0;
extern Il2CppType t695_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t794_m3620_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t117_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m3620_GM;
MethodInfo m3620_MI = 
{
	".ctor", (methodPointerType)&m3620, &t794_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t110, t794_m3620_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL, &m3620_GM};
extern Il2CppType t168_0_0_0;
static ParameterInfo t794_m21330_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21330_GM;
MethodInfo m21330_MI = 
{
	"Invoke", (methodPointerType)&m21330, &t794_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t794_m21330_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21330_GM};
static MethodInfo* t794_MIs[] =
{
	&m3620_MI,
	&m21330_MI,
	NULL
};
extern MethodInfo m21334_MI;
static MethodInfo* t794_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21330_MI,
	&m21334_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t794_0_0_0;
extern Il2CppType t794_1_0_0;
struct t794;
extern Il2CppGenericClass t794_GC;
TypeInfo t794_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t794_MIs, NULL, t794_FIs, NULL, &t3758_TI, NULL, NULL, &t794_TI, NULL, t794_VT, &EmptyCustomAttributesCache, &t794_TI, &t794_0_0_0, &t794_1_0_0, NULL, &t794_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t794), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif

#include "t3759.h"
#include "t114.h"
#include "t115.h"
#include "t183.h"
#include "t160.h"
extern TypeInfo t3759_TI;
extern TypeInfo t114_TI;
extern TypeInfo t160_TI;
#include "t694MD.h"
#include "t114MD.h"
#include "t183MD.h"
#include "t160MD.h"
#include "t3759MD.h"
extern Il2CppType t3759_0_0_0;
extern MethodInfo m3437_MI;
extern MethodInfo m532_MI;
extern MethodInfo m3602_MI;
extern MethodInfo m706_MI;
extern MethodInfo m3436_MI;
extern MethodInfo m2581_MI;
extern MethodInfo m27717_MI;
extern MethodInfo m3438_MI;
extern MethodInfo m21336_MI;
extern MethodInfo m3598_MI;
extern MethodInfo m3596_MI;
struct t694;
#include "t694.h"
 void m27717 (t5 * __this, t5 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


 void m21331 (t3758 * __this, t5 * p0, t695 * p1, MethodInfo* method){
	{
		m3437(__this, p0, p1, &m3437_MI);
		t3759 * L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_1 = m532(NULL, LoadTypeToken(&t3759_0_0_0), &m532_MI);
		t183 * L_2 = m3602(NULL, L_1, p0, p1, &m3602_MI);
		t183 * L_3 = m706(NULL, L_0, ((t3759 *)IsInst(L_2, InitializedTypeInfo(&t3759_TI))), &m706_MI);
		__this->f0 = ((t3759 *)Castclass(L_3, InitializedTypeInfo(&t3759_TI)));
		return;
	}
}
extern MethodInfo m21332_MI;
 void m21332 (t3758 * __this, t3759 * p0, MethodInfo* method){
	{
		m3436(__this, &m3436_MI);
		t3759 * L_0 = (__this->f0);
		t183 * L_1 = m706(NULL, L_0, p0, &m706_MI);
		__this->f0 = ((t3759 *)Castclass(L_1, InitializedTypeInfo(&t3759_TI)));
		return;
	}
}
 void m21333 (t3758 * __this, t168* p0, MethodInfo* method){
	{
		if ((((int32_t)(((int32_t)(((t107 *)p0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		t160 * L_0 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_0, (t11*) &_stringLiteral224, &m2581_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0014:
	{
		int32_t L_1 = 0;
		m27717(NULL, (*(t5 **)(t5 **)SZArrayLdElema(p0, L_1)), &m27717_MI);
		t3759 * L_2 = (__this->f0);
		bool L_3 = m3438(NULL, L_2, &m3438_MI);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		t3759 * L_4 = (__this->f0);
		int32_t L_5 = 0;
		VirtActionInvoker1< int32_t >::Invoke(&m21336_MI, L_4, ((*(int32_t*)((int32_t*)UnBox ((*(t5 **)(t5 **)SZArrayLdElema(p0, L_5)), InitializedTypeInfo(&t110_TI))))));
	}

IL_003f:
	{
		return;
	}
}
 bool m21334 (t3758 * __this, t5 * p0, t695 * p1, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		t3759 * L_0 = (__this->f0);
		t5 * L_1 = m3598(L_0, &m3598_MI);
		if ((((t5 *)L_1) != ((t5 *)p0)))
		{
			goto IL_0021;
		}
	}
	{
		t3759 * L_2 = (__this->f0);
		t695 * L_3 = m3596(L_2, &m3596_MI);
		G_B3_0 = ((((t695 *)L_3) == ((t695 *)p1))? 1 : 0);
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
// Metadata Definition UnityEngine.Events.InvokableCall`1<System.Int32>
extern Il2CppType t3759_0_0_1;
FieldInfo t3758_f0_FieldInfo = 
{
	"Delegate", &t3759_0_0_1, &t3758_TI, offsetof(t3758, f0), &EmptyCustomAttributesCache};
static FieldInfo* t3758_FIs[] =
{
	&t3758_f0_FieldInfo,
	NULL
};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t3758_m21331_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21331_GM;
MethodInfo m21331_MI = 
{
	".ctor", (methodPointerType)&m21331, &t3758_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t3758_m21331_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21331_GM};
extern Il2CppType t3759_0_0_0;
static ParameterInfo t3758_m21332_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t3759_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21332_GM;
MethodInfo m21332_MI = 
{
	".ctor", (methodPointerType)&m21332, &t3758_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3758_m21332_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21332_GM};
extern Il2CppType t168_0_0_0;
static ParameterInfo t3758_m21333_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21333_GM;
MethodInfo m21333_MI = 
{
	"Invoke", (methodPointerType)&m21333, &t3758_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3758_m21333_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21333_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t3758_m21334_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21334_GM;
MethodInfo m21334_MI = 
{
	"Find", (methodPointerType)&m21334, &t3758_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t3758_m21334_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21334_GM};
static MethodInfo* t3758_MIs[] =
{
	&m21331_MI,
	&m21332_MI,
	&m21333_MI,
	&m21334_MI,
	NULL
};
static MethodInfo* t3758_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21333_MI,
	&m21334_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t3758_0_0_0;
extern Il2CppType t3758_1_0_0;
extern TypeInfo t694_TI;
struct t3758;
extern Il2CppGenericClass t3758_GC;
TypeInfo t3758_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t3758_MIs, NULL, t3758_FIs, NULL, &t694_TI, NULL, NULL, &t3758_TI, NULL, t3758_VT, &EmptyCustomAttributesCache, &t3758_TI, &t3758_0_0_0, &t3758_1_0_0, NULL, &t3758_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3758), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif

#include "t124.h"
#include "t222.h"


extern MethodInfo m21335_MI;
 void m21335 (t3759 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
 void m21336 (t3759 * __this, int32_t p0, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m21336((t3759 *)__this->f9,p0, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t5 *, t5 * __this, int32_t p0, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	typedef void (*FunctionPointerType) (t5 * __this, int32_t p0, MethodInfo* method);
	((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m21337_MI;
 t5 * m21337 (t3759 * __this, int32_t p0, t222 * p1, t5 * p2, MethodInfo* method){
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t110_TI), &p0);
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m21338_MI;
 void m21338 (t3759 * __this, t5 * p0, MethodInfo* method){
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
// Metadata Definition UnityEngine.Events.UnityAction`1<System.Int32>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t3759_m21335_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21335_GM;
MethodInfo m21335_MI = 
{
	".ctor", (methodPointerType)&m21335, &t3759_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t3759_m21335_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21335_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3759_m21336_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21336_GM;
MethodInfo m21336_MI = 
{
	"Invoke", (methodPointerType)&m21336, &t3759_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t3759_m21336_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21336_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3759_m21337_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21337_GM;
MethodInfo m21337_MI = 
{
	"BeginInvoke", (methodPointerType)&m21337, &t3759_TI, &t221_0_0_0, RuntimeInvoker_t5_t110_t5_t5, t3759_m21337_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m21337_GM};
extern Il2CppType t221_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t3759_m21338_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21338_GM;
MethodInfo m21338_MI = 
{
	"EndInvoke", (methodPointerType)&m21338, &t3759_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3759_m21338_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21338_GM};
static MethodInfo* t3759_MIs[] =
{
	&m21335_MI,
	&m21336_MI,
	&m21337_MI,
	&m21338_MI,
	NULL
};
extern MethodInfo m2341_MI;
extern MethodInfo m2342_MI;
extern MethodInfo m2343_MI;
extern MethodInfo m2344_MI;
extern MethodInfo m2345_MI;
extern MethodInfo m2346_MI;
extern MethodInfo m2347_MI;
static MethodInfo* t3759_VT[] =
{
	&m2341_MI,
	&m465_MI,
	&m2342_MI,
	&m467_MI,
	&m2343_MI,
	&m2344_MI,
	&m2343_MI,
	&m2345_MI,
	&m2346_MI,
	&m2347_MI,
	&m21336_MI,
	&m21337_MI,
	&m21338_MI,
};
extern TypeInfo t516_TI;
extern TypeInfo t517_TI;
static Il2CppInterfaceOffsetPair t3759_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t3759_1_0_0;
extern TypeInfo t353_TI;
struct t3759;
extern Il2CppGenericClass t3759_GC;
TypeInfo t3759_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t3759_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t3759_TI, NULL, t3759_VT, &EmptyCustomAttributesCache, &t3759_TI, &t3759_0_0_0, &t3759_1_0_0, t3759_IOs, &t3759_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3759), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t795.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t795_TI;
#include "t795MD.h"

#include "t515.h"
extern TypeInfo t11_TI;
extern TypeInfo t515_TI;
#include "t515MD.h"
extern MethodInfo m2339_MI;
extern MethodInfo m18038_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<System.String>
extern Il2CppType t168_0_0_33;
FieldInfo t795_f1_FieldInfo = 
{
	"m_Arg1", &t168_0_0_33, &t795_TI, offsetof(t795, f1), &EmptyCustomAttributesCache};
static FieldInfo* t795_FIs[] =
{
	&t795_f1_FieldInfo,
	NULL
};
extern Il2CppType t117_0_0_0;
extern Il2CppType t695_0_0_0;
extern Il2CppType t11_0_0_0;
extern Il2CppType t11_0_0_0;
static ParameterInfo t795_m3621_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t117_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m3621_GM;
MethodInfo m3621_MI = 
{
	".ctor", (methodPointerType)&m12070_gshared, &t795_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t5, t795_m3621_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL, &m3621_GM};
extern Il2CppType t168_0_0_0;
static ParameterInfo t795_m21339_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21339_GM;
MethodInfo m21339_MI = 
{
	"Invoke", (methodPointerType)&m12072_gshared, &t795_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t795_m21339_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21339_GM};
static MethodInfo* t795_MIs[] =
{
	&m3621_MI,
	&m21339_MI,
	NULL
};
extern MethodInfo m21339_MI;
extern MethodInfo m18039_MI;
static MethodInfo* t795_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21339_MI,
	&m18039_MI,
};
extern Il2CppType t3223_0_0_0;
extern TypeInfo t3223_TI;
extern MethodInfo m25892_MI;
extern TypeInfo t11_TI;
extern MethodInfo m18035_MI;
extern TypeInfo t11_TI;
static Il2CppRGCTXData t795_RGCTXData[8] = 
{
	&t3223_0_0_0/* Type Usage */,
	&t3223_TI/* Class Usage */,
	&m25892_MI/* Method Usage */,
	&t11_TI/* Class Usage */,
	&m18035_MI/* Method Usage */,
	&m2339_MI/* Method Usage */,
	&t11_TI/* Class Usage */,
	&m18038_MI/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t795_0_0_0;
extern Il2CppType t795_1_0_0;
struct t795;
extern Il2CppGenericClass t795_GC;
TypeInfo t795_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t795_MIs, NULL, t795_FIs, NULL, &t515_TI, NULL, NULL, &t795_TI, NULL, t795_VT, &EmptyCustomAttributesCache, &t795_TI, &t795_0_0_0, &t795_1_0_0, NULL, &t795_GC, NULL, NULL, NULL, t795_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t795), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#include "t796.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t796_TI;
#include "t796MD.h"

#include "t3317.h"
extern TypeInfo t108_TI;
extern TypeInfo t3317_TI;
#include "t3317MD.h"
extern MethodInfo m18680_MI;
extern MethodInfo m18682_MI;


extern MethodInfo m3622_MI;
 void m3622 (t796 * __this, t117 * p0, t695 * p1, bool p2, MethodInfo* method){
	{
		__this->f1 = ((t168*)SZArrayNew(InitializedTypeInfo(&t168_TI), 1));
		m18680(__this, p0, p1, &m18680_MI);
		t168* L_0 = (__this->f1);
		bool L_1 = p2;
		t5 * L_2 = Box(InitializedTypeInfo(&t108_TI), &L_1);
		ArrayElementTypeCheck (L_0, L_2);
		*((t5 **)(t5 **)SZArrayLdElema(L_0, 0)) = (t5 *)L_2;
		return;
	}
}
extern MethodInfo m21340_MI;
 void m21340 (t796 * __this, t168* p0, MethodInfo* method){
	{
		t168* L_0 = (__this->f1);
		m18682(__this, L_0, &m18682_MI);
		return;
	}
}
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
extern Il2CppType t168_0_0_33;
FieldInfo t796_f1_FieldInfo = 
{
	"m_Arg1", &t168_0_0_33, &t796_TI, offsetof(t796, f1), &EmptyCustomAttributesCache};
static FieldInfo* t796_FIs[] =
{
	&t796_f1_FieldInfo,
	NULL
};
extern Il2CppType t117_0_0_0;
extern Il2CppType t695_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t796_m3622_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t117_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m3622_GM;
MethodInfo m3622_MI = 
{
	".ctor", (methodPointerType)&m3622, &t796_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t111, t796_m3622_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL, &m3622_GM};
extern Il2CppType t168_0_0_0;
static ParameterInfo t796_m21340_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21340_GM;
MethodInfo m21340_MI = 
{
	"Invoke", (methodPointerType)&m21340, &t796_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t796_m21340_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21340_GM};
static MethodInfo* t796_MIs[] =
{
	&m3622_MI,
	&m21340_MI,
	NULL
};
extern MethodInfo m18683_MI;
static MethodInfo* t796_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21340_MI,
	&m18683_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t796_0_0_0;
extern Il2CppType t796_1_0_0;
struct t796;
extern Il2CppGenericClass t796_GC;
TypeInfo t796_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t796_MIs, NULL, t796_FIs, NULL, &t3317_TI, NULL, NULL, &t796_TI, NULL, t796_VT, &EmptyCustomAttributesCache, &t796_TI, &t796_0_0_0, &t796_1_0_0, NULL, &t796_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t796), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#include "t706.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t706_TI;
#include "t706MD.h"

#include "t703.h"
#include "t798.h"
#include "t3764.h"
#include "t3765.h"
#include "t484.h"
#include "t3766.h"
#include "t3773.h"
#include "t3767.h"
extern TypeInfo t703_TI;
extern TypeInfo t723_TI;
extern TypeInfo t1982_TI;
extern TypeInfo t1181_TI;
extern TypeInfo t3763_TI;
extern TypeInfo t3760_TI;
extern TypeInfo t798_TI;
extern TypeInfo t3761_TI;
extern TypeInfo t3762_TI;
extern TypeInfo t3764_TI;
extern TypeInfo t484_TI;
extern TypeInfo t3765_TI;
extern TypeInfo t3766_TI;
extern TypeInfo t3773_TI;
#include "t1181MD.h"
#include "t5MD.h"
#include "t166MD.h"
#include "t3764MD.h"
#include "t484MD.h"
#include "t3765MD.h"
#include "t3766MD.h"
#include "t798MD.h"
#include "t3773MD.h"
extern MethodInfo m21388_MI;
extern MethodInfo m21389_MI;
extern MethodInfo m4991_MI;
extern MethodInfo m27730_MI;
extern MethodInfo m4767_MI;
extern MethodInfo m21374_MI;
extern MethodInfo m460_MI;
extern MethodInfo m21376_MI;
extern MethodInfo m21362_MI;
extern MethodInfo m35604_MI;
extern MethodInfo m21361_MI;
extern MethodInfo m3629_MI;
extern MethodInfo m6741_MI;
extern MethodInfo m21359_MI;
extern MethodInfo m21366_MI;
extern MethodInfo m21372_MI;
extern MethodInfo m21375_MI;
extern MethodInfo m21377_MI;
extern MethodInfo m21360_MI;
extern MethodInfo m21385_MI;
extern MethodInfo m5931_MI;
extern MethodInfo m21386_MI;
extern MethodInfo m35605_MI;
extern MethodInfo m35606_MI;
extern MethodInfo m35607_MI;
extern MethodInfo m746_MI;
extern MethodInfo m516_MI;
extern MethodInfo m21399_MI;
extern MethodInfo m5904_MI;
extern MethodInfo m27732_MI;
extern MethodInfo m21369_MI;
extern MethodInfo m21370_MI;
extern MethodInfo m3595_MI;
extern MethodInfo m21474_MI;
extern MethodInfo m21478_MI;
extern MethodInfo m21395_MI;
extern MethodInfo m21373_MI;
extern MethodInfo m21379_MI;
extern MethodInfo m5963_MI;
extern MethodInfo m21484_MI;
extern MethodInfo m27734_MI;
extern MethodInfo m27742_MI;
extern MethodInfo m6740_MI;
struct t107;
struct t107;
 void m23607_gshared (t5 * __this, t168** p0, int32_t p1, MethodInfo* method);
#define m23607(__this, p0, p1, method) (void)m23607_gshared((t5 *)__this, (t168**)p0, (int32_t)p1, method)
#define m27730(__this, p0, p1, method) (void)m23607_gshared((t5 *)__this, (t168**)p0, (int32_t)p1, method)
struct t107;
#include "t3771.h"
struct t107;
#include "t2334.h"
 int32_t m11458_gshared (t5 * __this, t168* p0, t5 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m11458(__this, p0, p1, p2, p3, method) (int32_t)m11458_gshared((t5 *)__this, (t168*)p0, (t5 *)p1, (int32_t)p2, (int32_t)p3, method)
#define m27732(__this, p0, p1, p2, p3, method) (int32_t)m11458_gshared((t5 *)__this, (t168*)p0, (t5 *)p1, (int32_t)p2, (int32_t)p3, method)
struct t107;
struct t107;
 void m23676_gshared (t5 * __this, t168* p0, int32_t p1, int32_t p2, t5* p3, MethodInfo* method);
#define m23676(__this, p0, p1, p2, p3, method) (void)m23676_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (int32_t)p2, (t5*)p3, method)
#define m27734(__this, p0, p1, p2, p3, method) (void)m23676_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (int32_t)p2, (t5*)p3, method)
struct t107;
#include "t142.h"
struct t107;
#include "t2458.h"
 void m23827_gshared (t5 * __this, t168* p0, int32_t p1, t2458 * p2, MethodInfo* method);
#define m23827(__this, p0, p1, p2, method) (void)m23827_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (t2458 *)p2, method)
#define m27742(__this, p0, p1, p2, method) (void)m23827_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (t2458 *)p2, method)


 t798  m3629 (t706 * __this, MethodInfo* method){
	{
		t798  L_0 = {0};
		m21395(&L_0, __this, &m21395_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
extern Il2CppType t110_0_0_32849;
FieldInfo t706_f0_FieldInfo = 
{
	"DefaultCapacity", &t110_0_0_32849, &t706_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t3760_0_0_1;
FieldInfo t706_f1_FieldInfo = 
{
	"_items", &t3760_0_0_1, &t706_TI, offsetof(t706, f1), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t706_f2_FieldInfo = 
{
	"_size", &t110_0_0_1, &t706_TI, offsetof(t706, f2), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t706_f3_FieldInfo = 
{
	"_version", &t110_0_0_1, &t706_TI, offsetof(t706, f3), &EmptyCustomAttributesCache};
extern Il2CppType t3760_0_0_49;
FieldInfo t706_f4_FieldInfo = 
{
	"EmptyArray", &t3760_0_0_49, &t706_TI, offsetof(t706_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t706_FIs[] =
{
	&t706_f0_FieldInfo,
	&t706_f1_FieldInfo,
	&t706_f2_FieldInfo,
	&t706_f3_FieldInfo,
	&t706_f4_FieldInfo,
	NULL
};
static const int32_t t706_f0_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t706_f0_DefaultValue = 
{
	&t706_f0_FieldInfo, { (char*)&t706_f0_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t706_FDVs[] = 
{
	&t706_f0_DefaultValue,
	NULL
};
extern MethodInfo m21352_MI;
static PropertyInfo t706____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t706_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m21352_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21353_MI;
static PropertyInfo t706____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t706_TI, "System.Collections.ICollection.IsSynchronized", &m21353_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21354_MI;
static PropertyInfo t706____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t706_TI, "System.Collections.ICollection.SyncRoot", &m21354_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21355_MI;
static PropertyInfo t706____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t706_TI, "System.Collections.IList.IsFixedSize", &m21355_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21356_MI;
static PropertyInfo t706____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t706_TI, "System.Collections.IList.IsReadOnly", &m21356_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21357_MI;
extern MethodInfo m21358_MI;
static PropertyInfo t706____System_Collections_IList_Item_PropertyInfo = 
{
	&t706_TI, "System.Collections.IList.Item", &m21357_MI, &m21358_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t706____Capacity_PropertyInfo = 
{
	&t706_TI, "Capacity", &m21385_MI, &m21386_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21387_MI;
static PropertyInfo t706____Count_PropertyInfo = 
{
	&t706_TI, "Count", &m21387_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t706____Item_PropertyInfo = 
{
	&t706_TI, "Item", &m21388_MI, &m21389_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t706_PIs[] =
{
	&t706____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t706____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t706____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t706____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t706____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t706____System_Collections_IList_Item_PropertyInfo,
	&t706____Capacity_PropertyInfo,
	&t706____Count_PropertyInfo,
	&t706____Item_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m3628_GM;
MethodInfo m3628_MI = 
{
	".ctor", (methodPointerType)&m11648_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m3628_GM};
extern Il2CppType t3761_0_0_0;
extern Il2CppType t3761_0_0_0;
static ParameterInfo t706_m21341_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t3761_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21341_GM;
MethodInfo m21341_MI = 
{
	".ctor", (methodPointerType)&m11650_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t706_m21341_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21341_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t706_m21342_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21342_GM;
MethodInfo m21342_MI = 
{
	".ctor", (methodPointerType)&m11652_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t706_m21342_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21342_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21343_GM;
MethodInfo m21343_MI = 
{
	".cctor", (methodPointerType)&m11654_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21343_GM};
extern Il2CppType t3762_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21344_GM;
MethodInfo m21344_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m11656_gshared, &t706_TI, &t3762_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21344_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t706_m21345_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21345_GM;
MethodInfo m21345_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11658_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t706_m21345_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21345_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21346_GM;
MethodInfo m21346_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11660_gshared, &t706_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21346_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t706_m21347_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21347_GM;
MethodInfo m21347_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11662_gshared, &t706_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t706_m21347_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21347_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t706_m21348_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21348_GM;
MethodInfo m21348_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11664_gshared, &t706_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t706_m21348_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21348_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t706_m21349_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21349_GM;
MethodInfo m21349_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11666_gshared, &t706_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t706_m21349_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21349_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t706_m21350_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21350_GM;
MethodInfo m21350_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11668_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t706_m21350_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21350_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t706_m21351_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21351_GM;
MethodInfo m21351_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11670_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t706_m21351_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21351_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21352_GM;
MethodInfo m21352_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11672_gshared, &t706_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21352_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21353_GM;
MethodInfo m21353_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11674_gshared, &t706_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21353_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21354_GM;
MethodInfo m21354_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11676_gshared, &t706_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21354_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21355_GM;
MethodInfo m21355_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11678_gshared, &t706_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21355_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21356_GM;
MethodInfo m21356_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11680_gshared, &t706_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21356_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t706_m21357_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21357_GM;
MethodInfo m21357_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11682_gshared, &t706_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t706_m21357_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21357_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t706_m21358_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21358_GM;
MethodInfo m21358_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11684_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t706_m21358_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21358_GM};
extern Il2CppType t703_0_0_0;
extern Il2CppType t703_0_0_0;
static ParameterInfo t706_m21359_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21359_GM;
MethodInfo m21359_MI = 
{
	"Add", (methodPointerType)&m11686_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t706_m21359_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21359_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t706_m21360_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21360_GM;
MethodInfo m21360_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m11688_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t706_m21360_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21360_GM};
extern Il2CppType t3763_0_0_0;
extern Il2CppType t3763_0_0_0;
static ParameterInfo t706_m21361_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t3763_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21361_GM;
MethodInfo m21361_MI = 
{
	"AddCollection", (methodPointerType)&m11690_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t706_m21361_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21361_GM};
extern Il2CppType t3761_0_0_0;
static ParameterInfo t706_m21362_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t3761_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21362_GM;
MethodInfo m21362_MI = 
{
	"AddEnumerable", (methodPointerType)&m11692_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t706_m21362_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21362_GM};
extern Il2CppType t3761_0_0_0;
static ParameterInfo t706_m21363_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t3761_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21363_GM;
MethodInfo m21363_MI = 
{
	"AddRange", (methodPointerType)&m11693_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t706_m21363_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21363_GM};
extern Il2CppType t3764_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21364_GM;
MethodInfo m21364_MI = 
{
	"AsReadOnly", (methodPointerType)&m11695_gshared, &t706_TI, &t3764_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21364_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21365_GM;
MethodInfo m21365_MI = 
{
	"Clear", (methodPointerType)&m11696_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21365_GM};
extern Il2CppType t703_0_0_0;
static ParameterInfo t706_m21366_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21366_GM;
MethodInfo m21366_MI = 
{
	"Contains", (methodPointerType)&m11698_gshared, &t706_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t706_m21366_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21366_GM};
extern Il2CppType t3760_0_0_0;
extern Il2CppType t3760_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t706_m21367_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3760_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21367_GM;
MethodInfo m21367_MI = 
{
	"CopyTo", (methodPointerType)&m11700_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t706_m21367_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21367_GM};
extern Il2CppType t3765_0_0_0;
extern Il2CppType t3765_0_0_0;
static ParameterInfo t706_m21368_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t3765_0_0_0},
};
extern Il2CppType t703_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21368_GM;
MethodInfo m21368_MI = 
{
	"Find", (methodPointerType)&m11702_gshared, &t706_TI, &t703_0_0_0, RuntimeInvoker_t5_t5, t706_m21368_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21368_GM};
extern Il2CppType t3765_0_0_0;
static ParameterInfo t706_m21369_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t3765_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21369_GM;
MethodInfo m21369_MI = 
{
	"CheckMatch", (methodPointerType)&m11704_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t706_m21369_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21369_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t3765_0_0_0;
static ParameterInfo t706_m21370_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t3765_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21370_GM;
MethodInfo m21370_MI = 
{
	"GetIndex", (methodPointerType)&m11706_gshared, &t706_TI, &t110_0_0_0, RuntimeInvoker_t110_t110_t110_t5, t706_m21370_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL, &m21370_GM};
extern Il2CppType t3766_0_0_0;
extern Il2CppType t3766_0_0_0;
static ParameterInfo t706_m21371_ParameterInfos[] = 
{
	{"action", 0, 134217728, &EmptyCustomAttributesCache, &t3766_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21371_GM;
MethodInfo m21371_MI = 
{
	"ForEach", (methodPointerType)&m11707_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t706_m21371_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21371_GM};
extern Il2CppType t798_0_0_0;
extern void* RuntimeInvoker_t798 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m3629_GM;
MethodInfo m3629_MI = 
{
	"GetEnumerator", (methodPointerType)&m3629, &t706_TI, &t798_0_0_0, RuntimeInvoker_t798, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m3629_GM};
extern Il2CppType t703_0_0_0;
static ParameterInfo t706_m21372_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21372_GM;
MethodInfo m21372_MI = 
{
	"IndexOf", (methodPointerType)&m11709_gshared, &t706_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t706_m21372_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21372_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t706_m21373_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21373_GM;
MethodInfo m21373_MI = 
{
	"Shift", (methodPointerType)&m11711_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t706_m21373_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21373_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t706_m21374_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21374_GM;
MethodInfo m21374_MI = 
{
	"CheckIndex", (methodPointerType)&m11713_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t706_m21374_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21374_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t703_0_0_0;
static ParameterInfo t706_m21375_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21375_GM;
MethodInfo m21375_MI = 
{
	"Insert", (methodPointerType)&m11715_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t706_m21375_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21375_GM};
extern Il2CppType t3761_0_0_0;
static ParameterInfo t706_m21376_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t3761_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21376_GM;
MethodInfo m21376_MI = 
{
	"CheckCollection", (methodPointerType)&m11717_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t706_m21376_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21376_GM};
extern Il2CppType t703_0_0_0;
static ParameterInfo t706_m21377_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21377_GM;
MethodInfo m21377_MI = 
{
	"Remove", (methodPointerType)&m11719_gshared, &t706_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t706_m21377_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21377_GM};
extern Il2CppType t3765_0_0_0;
static ParameterInfo t706_m21378_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t3765_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21378_GM;
MethodInfo m21378_MI = 
{
	"RemoveAll", (methodPointerType)&m11721_gshared, &t706_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t706_m21378_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21378_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t706_m21379_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21379_GM;
MethodInfo m21379_MI = 
{
	"RemoveAt", (methodPointerType)&m11723_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t706_m21379_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21379_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21380_GM;
MethodInfo m21380_MI = 
{
	"Reverse", (methodPointerType)&m11725_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21380_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21381_GM;
MethodInfo m21381_MI = 
{
	"Sort", (methodPointerType)&m11727_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21381_GM};
extern Il2CppType t3767_0_0_0;
extern Il2CppType t3767_0_0_0;
static ParameterInfo t706_m21382_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t3767_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21382_GM;
MethodInfo m21382_MI = 
{
	"Sort", (methodPointerType)&m11729_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t706_m21382_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21382_GM};
extern Il2CppType t3760_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21383_GM;
MethodInfo m21383_MI = 
{
	"ToArray", (methodPointerType)&m11731_gshared, &t706_TI, &t3760_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21383_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21384_GM;
MethodInfo m21384_MI = 
{
	"TrimExcess", (methodPointerType)&m11733_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21384_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21385_GM;
MethodInfo m21385_MI = 
{
	"get_Capacity", (methodPointerType)&m11735_gshared, &t706_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21385_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t706_m21386_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21386_GM;
MethodInfo m21386_MI = 
{
	"set_Capacity", (methodPointerType)&m11737_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t706_m21386_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21386_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21387_GM;
MethodInfo m21387_MI = 
{
	"get_Count", (methodPointerType)&m11738_gshared, &t706_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21387_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t706_m21388_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t703_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21388_GM;
MethodInfo m21388_MI = 
{
	"get_Item", (methodPointerType)&m11740_gshared, &t706_TI, &t703_0_0_0, RuntimeInvoker_t5_t110, t706_m21388_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21388_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t703_0_0_0;
static ParameterInfo t706_m21389_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21389_GM;
MethodInfo m21389_MI = 
{
	"set_Item", (methodPointerType)&m11742_gshared, &t706_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t706_m21389_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21389_GM};
static MethodInfo* t706_MIs[] =
{
	&m3628_MI,
	&m21341_MI,
	&m21342_MI,
	&m21343_MI,
	&m21344_MI,
	&m21345_MI,
	&m21346_MI,
	&m21347_MI,
	&m21348_MI,
	&m21349_MI,
	&m21350_MI,
	&m21351_MI,
	&m21352_MI,
	&m21353_MI,
	&m21354_MI,
	&m21355_MI,
	&m21356_MI,
	&m21357_MI,
	&m21358_MI,
	&m21359_MI,
	&m21360_MI,
	&m21361_MI,
	&m21362_MI,
	&m21363_MI,
	&m21364_MI,
	&m21365_MI,
	&m21366_MI,
	&m21367_MI,
	&m21368_MI,
	&m21369_MI,
	&m21370_MI,
	&m21371_MI,
	&m3629_MI,
	&m21372_MI,
	&m21373_MI,
	&m21374_MI,
	&m21375_MI,
	&m21376_MI,
	&m21377_MI,
	&m21378_MI,
	&m21379_MI,
	&m21380_MI,
	&m21381_MI,
	&m21382_MI,
	&m21383_MI,
	&m21384_MI,
	&m21385_MI,
	&m21386_MI,
	&m21387_MI,
	&m21388_MI,
	&m21389_MI,
	NULL
};
extern MethodInfo m21346_MI;
extern MethodInfo m21345_MI;
extern MethodInfo m21347_MI;
extern MethodInfo m21365_MI;
extern MethodInfo m21348_MI;
extern MethodInfo m21349_MI;
extern MethodInfo m21350_MI;
extern MethodInfo m21351_MI;
extern MethodInfo m21367_MI;
extern MethodInfo m21344_MI;
static MethodInfo* t706_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21346_MI,
	&m21387_MI,
	&m21353_MI,
	&m21354_MI,
	&m21345_MI,
	&m21355_MI,
	&m21356_MI,
	&m21357_MI,
	&m21358_MI,
	&m21347_MI,
	&m21365_MI,
	&m21348_MI,
	&m21349_MI,
	&m21350_MI,
	&m21351_MI,
	&m21379_MI,
	&m21387_MI,
	&m21352_MI,
	&m21359_MI,
	&m21365_MI,
	&m21366_MI,
	&m21367_MI,
	&m21377_MI,
	&m21344_MI,
	&m21372_MI,
	&m21375_MI,
	&m21379_MI,
	&m21388_MI,
	&m21389_MI,
};
extern TypeInfo t811_TI;
extern TypeInfo t1129_TI;
extern TypeInfo t3769_TI;
static TypeInfo* t706_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t3763_TI,
	&t3761_TI,
	&t3769_TI,
};
static Il2CppInterfaceOffsetPair t706_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t3763_TI, 20},
	{ &t3761_TI, 27},
	{ &t3769_TI, 28},
};
extern TypeInfo t706_TI;
extern TypeInfo t3763_TI;
extern TypeInfo t3760_TI;
extern TypeInfo t798_TI;
extern TypeInfo t703_TI;
extern TypeInfo t3764_TI;
static Il2CppRGCTXData t706_RGCTXData[38] = 
{
	&t706_TI/* Static Usage */,
	&m21376_MI/* Method Usage */,
	&t3763_TI/* Class Usage */,
	&m21362_MI/* Method Usage */,
	&m35604_MI/* Method Usage */,
	&t3760_TI/* Array Usage */,
	&m21361_MI/* Method Usage */,
	&m3629_MI/* Method Usage */,
	&t798_TI/* Class Usage */,
	&t703_TI/* Class Usage */,
	&m21359_MI/* Method Usage */,
	&m21366_MI/* Method Usage */,
	&m21372_MI/* Method Usage */,
	&m21374_MI/* Method Usage */,
	&m21375_MI/* Method Usage */,
	&m21377_MI/* Method Usage */,
	&m21388_MI/* Method Usage */,
	&m21389_MI/* Method Usage */,
	&m21360_MI/* Method Usage */,
	&m21385_MI/* Method Usage */,
	&m21386_MI/* Method Usage */,
	&m35605_MI/* Method Usage */,
	&m35606_MI/* Method Usage */,
	&m35607_MI/* Method Usage */,
	&t3764_TI/* Class Usage */,
	&m21399_MI/* Method Usage */,
	&m27732_MI/* Method Usage */,
	&m21369_MI/* Method Usage */,
	&m21370_MI/* Method Usage */,
	&m21474_MI/* Method Usage */,
	&m21478_MI/* Method Usage */,
	&m21395_MI/* Method Usage */,
	&m21373_MI/* Method Usage */,
	&m21379_MI/* Method Usage */,
	&m21484_MI/* Method Usage */,
	&m27734_MI/* Method Usage */,
	&m27742_MI/* Method Usage */,
	&m27730_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t706_0_0_0;
extern Il2CppType t706_1_0_0;
struct t706;
extern Il2CppGenericClass t706_GC;
extern CustomAttributesCache t1524__CustomAttributeCache;
TypeInfo t706_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t706_MIs, t706_PIs, t706_FIs, NULL, &t5_TI, NULL, NULL, &t706_TI, t706_ITIs, t706_VT, &t1524__CustomAttributeCache, &t706_TI, &t706_0_0_0, &t706_1_0_0, t706_IOs, &t706_GC, NULL, t706_FDVs, NULL, t706_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t706), 0, -1, sizeof(t706_SFs), 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, true, false, false, 51, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Events.PersistentCall>
static PropertyInfo t3763____Count_PropertyInfo = 
{
	&t3763_TI, "Count", &m35604_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35608_MI;
static PropertyInfo t3763____IsReadOnly_PropertyInfo = 
{
	&t3763_TI, "IsReadOnly", &m35608_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3763_PIs[] =
{
	&t3763____Count_PropertyInfo,
	&t3763____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35604_GM;
MethodInfo m35604_MI = 
{
	"get_Count", NULL, &t3763_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35604_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35608_GM;
MethodInfo m35608_MI = 
{
	"get_IsReadOnly", NULL, &t3763_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35608_GM};
extern Il2CppType t703_0_0_0;
static ParameterInfo t3763_m35609_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35609_GM;
MethodInfo m35609_MI = 
{
	"Add", NULL, &t3763_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3763_m35609_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35609_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35610_GM;
MethodInfo m35610_MI = 
{
	"Clear", NULL, &t3763_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35610_GM};
extern Il2CppType t703_0_0_0;
static ParameterInfo t3763_m35611_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35611_GM;
MethodInfo m35611_MI = 
{
	"Contains", NULL, &t3763_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3763_m35611_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35611_GM};
extern Il2CppType t3760_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t3763_m35605_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3760_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35605_GM;
MethodInfo m35605_MI = 
{
	"CopyTo", NULL, &t3763_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t3763_m35605_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35605_GM};
extern Il2CppType t703_0_0_0;
static ParameterInfo t3763_m35612_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35612_GM;
MethodInfo m35612_MI = 
{
	"Remove", NULL, &t3763_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3763_m35612_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35612_GM};
static MethodInfo* t3763_MIs[] =
{
	&m35604_MI,
	&m35608_MI,
	&m35609_MI,
	&m35610_MI,
	&m35611_MI,
	&m35605_MI,
	&m35612_MI,
	NULL
};
static TypeInfo* t3763_ITIs[] = 
{
	&t739_TI,
	&t3761_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3763_1_0_0;
struct t3763;
extern Il2CppGenericClass t3763_GC;
TypeInfo t3763_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3763_MIs, t3763_PIs, NULL, NULL, NULL, NULL, NULL, &t3763_TI, t3763_ITIs, NULL, &EmptyCustomAttributesCache, &t3763_TI, &t3763_0_0_0, &t3763_1_0_0, NULL, &t3763_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Events.PersistentCall>
extern Il2CppType t3762_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35606_GM;
MethodInfo m35606_MI = 
{
	"GetEnumerator", NULL, &t3761_TI, &t3762_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35606_GM};
static MethodInfo* t3761_MIs[] =
{
	&m35606_MI,
	NULL
};
static TypeInfo* t3761_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3761_1_0_0;
struct t3761;
extern Il2CppGenericClass t3761_GC;
TypeInfo t3761_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3761_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3761_TI, t3761_ITIs, NULL, &EmptyCustomAttributesCache, &t3761_TI, &t3761_0_0_0, &t3761_1_0_0, NULL, &t3761_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Events.PersistentCall>
static PropertyInfo t3762____Current_PropertyInfo = 
{
	&t3762_TI, "Current", &m35607_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3762_PIs[] =
{
	&t3762____Current_PropertyInfo,
	NULL
};
extern Il2CppType t703_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35607_GM;
MethodInfo m35607_MI = 
{
	"get_Current", NULL, &t3762_TI, &t703_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35607_GM};
static MethodInfo* t3762_MIs[] =
{
	&m35607_MI,
	NULL
};
static TypeInfo* t3762_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3762_0_0_0;
extern Il2CppType t3762_1_0_0;
struct t3762;
extern Il2CppGenericClass t3762_GC;
TypeInfo t3762_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3762_MIs, t3762_PIs, NULL, NULL, NULL, NULL, NULL, &t3762_TI, t3762_ITIs, NULL, &EmptyCustomAttributesCache, &t3762_TI, &t3762_0_0_0, &t3762_1_0_0, NULL, &t3762_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3768.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3768_TI;
#include "t3768MD.h"

extern MethodInfo m21394_MI;
extern MethodInfo m27719_MI;
struct t107;
struct t107;
 t5 * m23596_gshared (t107 * __this, int32_t p0, MethodInfo* method);
#define m23596(__this, p0, method) (t5 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
#define m27719(__this, p0, method) (t703 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Events.PersistentCall>
extern Il2CppType t107_0_0_1;
FieldInfo t3768_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3768_TI, offsetof(t3768, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3768_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3768_TI, offsetof(t3768, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3768_FIs[] =
{
	&t3768_f0_FieldInfo,
	&t3768_f1_FieldInfo,
	NULL
};
extern MethodInfo m21391_MI;
static PropertyInfo t3768____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3768_TI, "System.Collections.IEnumerator.Current", &m21391_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3768____Current_PropertyInfo = 
{
	&t3768_TI, "Current", &m21394_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3768_PIs[] =
{
	&t3768____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3768____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3768_m21390_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21390_GM;
MethodInfo m21390_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3768_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3768_m21390_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21390_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21391_GM;
MethodInfo m21391_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3768_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21391_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21392_GM;
MethodInfo m21392_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3768_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21392_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21393_GM;
MethodInfo m21393_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3768_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21393_GM};
extern Il2CppType t703_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21394_GM;
MethodInfo m21394_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3768_TI, &t703_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21394_GM};
static MethodInfo* t3768_MIs[] =
{
	&m21390_MI,
	&m21391_MI,
	&m21392_MI,
	&m21393_MI,
	&m21394_MI,
	NULL
};
extern MethodInfo m21393_MI;
extern MethodInfo m21392_MI;
static MethodInfo* t3768_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21391_MI,
	&m21393_MI,
	&m21392_MI,
	&m21394_MI,
};
static TypeInfo* t3768_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t3762_TI,
};
static Il2CppInterfaceOffsetPair t3768_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t3762_TI, 7},
};
extern TypeInfo t703_TI;
static Il2CppRGCTXData t3768_RGCTXData[3] = 
{
	&m21394_MI/* Method Usage */,
	&t703_TI/* Class Usage */,
	&m27719_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3768_0_0_0;
extern Il2CppType t3768_1_0_0;
extern Il2CppGenericClass t3768_GC;
TypeInfo t3768_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3768_MIs, t3768_PIs, t3768_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3768_TI, t3768_ITIs, t3768_VT, &EmptyCustomAttributesCache, &t3768_TI, &t3768_0_0_0, &t3768_1_0_0, t3768_IOs, &t3768_GC, NULL, NULL, NULL, t3768_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3768)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Events.PersistentCall>
extern MethodInfo m35613_MI;
extern MethodInfo m35614_MI;
static PropertyInfo t3769____Item_PropertyInfo = 
{
	&t3769_TI, "Item", &m35613_MI, &m35614_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3769_PIs[] =
{
	&t3769____Item_PropertyInfo,
	NULL
};
extern Il2CppType t703_0_0_0;
static ParameterInfo t3769_m35615_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35615_GM;
MethodInfo m35615_MI = 
{
	"IndexOf", NULL, &t3769_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3769_m35615_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35615_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t703_0_0_0;
static ParameterInfo t3769_m35616_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35616_GM;
MethodInfo m35616_MI = 
{
	"Insert", NULL, &t3769_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3769_m35616_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35616_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3769_m35617_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35617_GM;
MethodInfo m35617_MI = 
{
	"RemoveAt", NULL, &t3769_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t3769_m35617_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35617_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3769_m35613_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t703_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35613_GM;
MethodInfo m35613_MI = 
{
	"get_Item", NULL, &t3769_TI, &t703_0_0_0, RuntimeInvoker_t5_t110, t3769_m35613_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35613_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t703_0_0_0;
static ParameterInfo t3769_m35614_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35614_GM;
MethodInfo m35614_MI = 
{
	"set_Item", NULL, &t3769_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3769_m35614_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35614_GM};
static MethodInfo* t3769_MIs[] =
{
	&m35615_MI,
	&m35616_MI,
	&m35617_MI,
	&m35613_MI,
	&m35614_MI,
	NULL
};
static TypeInfo* t3769_ITIs[] = 
{
	&t739_TI,
	&t3763_TI,
	&t3761_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3769_0_0_0;
extern Il2CppType t3769_1_0_0;
struct t3769;
extern Il2CppGenericClass t3769_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t3769_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3769_MIs, t3769_PIs, NULL, NULL, NULL, NULL, NULL, &t3769_TI, t3769_ITIs, NULL, &t2240__CustomAttributeCache, &t3769_TI, &t3769_0_0_0, &t3769_1_0_0, NULL, &t3769_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif

#include "t1363.h"
extern TypeInfo t1363_TI;
#include "t1363MD.h"
extern MethodInfo m21398_MI;
extern MethodInfo m4766_MI;
extern MethodInfo m531_MI;
extern MethodInfo m3643_MI;
extern MethodInfo m5942_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
extern Il2CppType t706_0_0_1;
FieldInfo t798_f0_FieldInfo = 
{
	"l", &t706_0_0_1, &t798_TI, offsetof(t798, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t798_f1_FieldInfo = 
{
	"next", &t110_0_0_1, &t798_TI, offsetof(t798, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t798_f2_FieldInfo = 
{
	"ver", &t110_0_0_1, &t798_TI, offsetof(t798, f2) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t703_0_0_1;
FieldInfo t798_f3_FieldInfo = 
{
	"current", &t703_0_0_1, &t798_TI, offsetof(t798, f3) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t798_FIs[] =
{
	&t798_f0_FieldInfo,
	&t798_f1_FieldInfo,
	&t798_f2_FieldInfo,
	&t798_f3_FieldInfo,
	NULL
};
extern MethodInfo m21396_MI;
static PropertyInfo t798____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t798_TI, "System.Collections.IEnumerator.Current", &m21396_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3630_MI;
static PropertyInfo t798____Current_PropertyInfo = 
{
	&t798_TI, "Current", &m3630_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t798_PIs[] =
{
	&t798____System_Collections_IEnumerator_Current_PropertyInfo,
	&t798____Current_PropertyInfo,
	NULL
};
extern Il2CppType t706_0_0_0;
static ParameterInfo t798_m21395_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t706_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21395_GM;
MethodInfo m21395_MI = 
{
	".ctor", (methodPointerType)&m11749_gshared, &t798_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t798_m21395_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21395_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21396_GM;
MethodInfo m21396_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11750_gshared, &t798_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21396_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21397_GM;
MethodInfo m21397_MI = 
{
	"Dispose", (methodPointerType)&m11751_gshared, &t798_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21397_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21398_GM;
MethodInfo m21398_MI = 
{
	"VerifyState", (methodPointerType)&m11752_gshared, &t798_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21398_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m3631_GM;
MethodInfo m3631_MI = 
{
	"MoveNext", (methodPointerType)&m11753_gshared, &t798_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m3631_GM};
extern Il2CppType t703_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m3630_GM;
MethodInfo m3630_MI = 
{
	"get_Current", (methodPointerType)&m11754_gshared, &t798_TI, &t703_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m3630_GM};
static MethodInfo* t798_MIs[] =
{
	&m21395_MI,
	&m21396_MI,
	&m21397_MI,
	&m21398_MI,
	&m3631_MI,
	&m3630_MI,
	NULL
};
extern MethodInfo m3631_MI;
extern MethodInfo m21397_MI;
static MethodInfo* t798_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21396_MI,
	&m3631_MI,
	&m21397_MI,
	&m3630_MI,
};
static TypeInfo* t798_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t3762_TI,
};
static Il2CppInterfaceOffsetPair t798_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t3762_TI, 7},
};
extern TypeInfo t703_TI;
extern TypeInfo t798_TI;
static Il2CppRGCTXData t798_RGCTXData[3] = 
{
	&m21398_MI/* Method Usage */,
	&t703_TI/* Class Usage */,
	&t798_TI/* Class Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t798_0_0_0;
extern Il2CppType t798_1_0_0;
extern Il2CppGenericClass t798_GC;
extern TypeInfo t1524_TI;
TypeInfo t798_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t798_MIs, t798_PIs, t798_FIs, NULL, &t267_TI, NULL, &t1524_TI, &t798_TI, t798_ITIs, t798_VT, &EmptyCustomAttributesCache, &t798_TI, &t798_0_0_0, &t798_1_0_0, t798_IOs, &t798_GC, NULL, NULL, NULL, t798_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t798)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif

#include "t491.h"
extern TypeInfo t491_TI;
#include "t491MD.h"
#include "t3770MD.h"
extern MethodInfo m21428_MI;
extern MethodInfo m2163_MI;
extern MethodInfo m4754_MI;
extern MethodInfo m4947_MI;
extern MethodInfo m21460_MI;
extern MethodInfo m35611_MI;
extern MethodInfo m35615_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>
extern Il2CppType t3769_0_0_1;
FieldInfo t3764_f0_FieldInfo = 
{
	"list", &t3769_0_0_1, &t3764_TI, offsetof(t3764, f0), &EmptyCustomAttributesCache};
static FieldInfo* t3764_FIs[] =
{
	&t3764_f0_FieldInfo,
	NULL
};
extern MethodInfo m21405_MI;
extern MethodInfo m21406_MI;
static PropertyInfo t3764____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t3764_TI, "System.Collections.Generic.IList<T>.Item", &m21405_MI, &m21406_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21407_MI;
static PropertyInfo t3764____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t3764_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m21407_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21417_MI;
static PropertyInfo t3764____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t3764_TI, "System.Collections.ICollection.IsSynchronized", &m21417_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21418_MI;
static PropertyInfo t3764____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t3764_TI, "System.Collections.ICollection.SyncRoot", &m21418_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21419_MI;
static PropertyInfo t3764____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t3764_TI, "System.Collections.IList.IsFixedSize", &m21419_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21420_MI;
static PropertyInfo t3764____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t3764_TI, "System.Collections.IList.IsReadOnly", &m21420_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21421_MI;
extern MethodInfo m21422_MI;
static PropertyInfo t3764____System_Collections_IList_Item_PropertyInfo = 
{
	&t3764_TI, "System.Collections.IList.Item", &m21421_MI, &m21422_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21427_MI;
static PropertyInfo t3764____Count_PropertyInfo = 
{
	&t3764_TI, "Count", &m21427_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3764____Item_PropertyInfo = 
{
	&t3764_TI, "Item", &m21428_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3764_PIs[] =
{
	&t3764____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t3764____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t3764____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t3764____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t3764____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t3764____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t3764____System_Collections_IList_Item_PropertyInfo,
	&t3764____Count_PropertyInfo,
	&t3764____Item_PropertyInfo,
	NULL
};
extern Il2CppType t3769_0_0_0;
static ParameterInfo t3764_m21399_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t3769_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21399_GM;
MethodInfo m21399_MI = 
{
	".ctor", (methodPointerType)&m11755_gshared, &t3764_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3764_m21399_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21399_GM};
extern Il2CppType t703_0_0_0;
static ParameterInfo t3764_m21400_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21400_GM;
MethodInfo m21400_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m11756_gshared, &t3764_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3764_m21400_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21400_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21401_GM;
MethodInfo m21401_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m11757_gshared, &t3764_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21401_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t703_0_0_0;
static ParameterInfo t3764_m21402_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21402_GM;
MethodInfo m21402_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m11758_gshared, &t3764_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3764_m21402_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21402_GM};
extern Il2CppType t703_0_0_0;
static ParameterInfo t3764_m21403_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21403_GM;
MethodInfo m21403_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m11759_gshared, &t3764_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3764_m21403_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21403_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3764_m21404_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21404_GM;
MethodInfo m21404_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m11760_gshared, &t3764_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t3764_m21404_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21404_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3764_m21405_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t703_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21405_GM;
MethodInfo m21405_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m11761_gshared, &t3764_TI, &t703_0_0_0, RuntimeInvoker_t5_t110, t3764_m21405_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21405_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t703_0_0_0;
static ParameterInfo t3764_m21406_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21406_GM;
MethodInfo m21406_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m11762_gshared, &t3764_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3764_m21406_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21406_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21407_GM;
MethodInfo m21407_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11763_gshared, &t3764_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21407_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t3764_m21408_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21408_GM;
MethodInfo m21408_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11764_gshared, &t3764_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t3764_m21408_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21408_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21409_GM;
MethodInfo m21409_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11765_gshared, &t3764_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21409_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3764_m21410_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21410_GM;
MethodInfo m21410_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11766_gshared, &t3764_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3764_m21410_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21410_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21411_GM;
MethodInfo m21411_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m11767_gshared, &t3764_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21411_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3764_m21412_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21412_GM;
MethodInfo m21412_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11768_gshared, &t3764_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3764_m21412_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21412_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3764_m21413_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21413_GM;
MethodInfo m21413_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11769_gshared, &t3764_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3764_m21413_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21413_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3764_m21414_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21414_GM;
MethodInfo m21414_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11770_gshared, &t3764_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3764_m21414_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21414_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3764_m21415_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21415_GM;
MethodInfo m21415_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11771_gshared, &t3764_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3764_m21415_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21415_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3764_m21416_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21416_GM;
MethodInfo m21416_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m11772_gshared, &t3764_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t3764_m21416_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21416_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21417_GM;
MethodInfo m21417_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11773_gshared, &t3764_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21417_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21418_GM;
MethodInfo m21418_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11774_gshared, &t3764_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21418_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21419_GM;
MethodInfo m21419_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11775_gshared, &t3764_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21419_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21420_GM;
MethodInfo m21420_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11776_gshared, &t3764_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21420_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3764_m21421_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21421_GM;
MethodInfo m21421_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11777_gshared, &t3764_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t3764_m21421_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21421_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3764_m21422_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21422_GM;
MethodInfo m21422_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11778_gshared, &t3764_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3764_m21422_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21422_GM};
extern Il2CppType t703_0_0_0;
static ParameterInfo t3764_m21423_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21423_GM;
MethodInfo m21423_MI = 
{
	"Contains", (methodPointerType)&m11779_gshared, &t3764_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3764_m21423_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21423_GM};
extern Il2CppType t3760_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t3764_m21424_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3760_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21424_GM;
MethodInfo m21424_MI = 
{
	"CopyTo", (methodPointerType)&m11780_gshared, &t3764_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t3764_m21424_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21424_GM};
extern Il2CppType t3762_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21425_GM;
MethodInfo m21425_MI = 
{
	"GetEnumerator", (methodPointerType)&m11781_gshared, &t3764_TI, &t3762_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21425_GM};
extern Il2CppType t703_0_0_0;
static ParameterInfo t3764_m21426_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21426_GM;
MethodInfo m21426_MI = 
{
	"IndexOf", (methodPointerType)&m11782_gshared, &t3764_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3764_m21426_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21426_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21427_GM;
MethodInfo m21427_MI = 
{
	"get_Count", (methodPointerType)&m11783_gshared, &t3764_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21427_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3764_m21428_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t703_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21428_GM;
MethodInfo m21428_MI = 
{
	"get_Item", (methodPointerType)&m11784_gshared, &t3764_TI, &t703_0_0_0, RuntimeInvoker_t5_t110, t3764_m21428_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21428_GM};
static MethodInfo* t3764_MIs[] =
{
	&m21399_MI,
	&m21400_MI,
	&m21401_MI,
	&m21402_MI,
	&m21403_MI,
	&m21404_MI,
	&m21405_MI,
	&m21406_MI,
	&m21407_MI,
	&m21408_MI,
	&m21409_MI,
	&m21410_MI,
	&m21411_MI,
	&m21412_MI,
	&m21413_MI,
	&m21414_MI,
	&m21415_MI,
	&m21416_MI,
	&m21417_MI,
	&m21418_MI,
	&m21419_MI,
	&m21420_MI,
	&m21421_MI,
	&m21422_MI,
	&m21423_MI,
	&m21424_MI,
	&m21425_MI,
	&m21426_MI,
	&m21427_MI,
	&m21428_MI,
	NULL
};
extern MethodInfo m21409_MI;
extern MethodInfo m21408_MI;
extern MethodInfo m21410_MI;
extern MethodInfo m21411_MI;
extern MethodInfo m21412_MI;
extern MethodInfo m21413_MI;
extern MethodInfo m21414_MI;
extern MethodInfo m21415_MI;
extern MethodInfo m21416_MI;
extern MethodInfo m21400_MI;
extern MethodInfo m21401_MI;
extern MethodInfo m21423_MI;
extern MethodInfo m21424_MI;
extern MethodInfo m21403_MI;
extern MethodInfo m21426_MI;
extern MethodInfo m21402_MI;
extern MethodInfo m21404_MI;
extern MethodInfo m21425_MI;
static MethodInfo* t3764_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21409_MI,
	&m21427_MI,
	&m21417_MI,
	&m21418_MI,
	&m21408_MI,
	&m21419_MI,
	&m21420_MI,
	&m21421_MI,
	&m21422_MI,
	&m21410_MI,
	&m21411_MI,
	&m21412_MI,
	&m21413_MI,
	&m21414_MI,
	&m21415_MI,
	&m21416_MI,
	&m21427_MI,
	&m21407_MI,
	&m21400_MI,
	&m21401_MI,
	&m21423_MI,
	&m21424_MI,
	&m21403_MI,
	&m21426_MI,
	&m21402_MI,
	&m21404_MI,
	&m21405_MI,
	&m21406_MI,
	&m21425_MI,
	&m21428_MI,
};
static TypeInfo* t3764_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t3763_TI,
	&t3769_TI,
	&t3761_TI,
};
static Il2CppInterfaceOffsetPair t3764_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t3763_TI, 20},
	{ &t3769_TI, 27},
	{ &t3761_TI, 32},
};
extern TypeInfo t703_TI;
static Il2CppRGCTXData t3764_RGCTXData[9] = 
{
	&m21428_MI/* Method Usage */,
	&m21460_MI/* Method Usage */,
	&t703_TI/* Class Usage */,
	&m35611_MI/* Method Usage */,
	&m35615_MI/* Method Usage */,
	&m35613_MI/* Method Usage */,
	&m35605_MI/* Method Usage */,
	&m35606_MI/* Method Usage */,
	&m35604_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3764_0_0_0;
extern Il2CppType t3764_1_0_0;
struct t3764;
extern Il2CppGenericClass t3764_GC;
extern CustomAttributesCache t1526__CustomAttributeCache;
TypeInfo t3764_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t3764_MIs, t3764_PIs, t3764_FIs, NULL, &t5_TI, NULL, NULL, &t3764_TI, t3764_ITIs, t3764_VT, &t1526__CustomAttributeCache, &t3764_TI, &t3764_0_0_0, &t3764_1_0_0, t3764_IOs, &t3764_GC, NULL, NULL, NULL, t3764_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3764), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t3770.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3770_TI;

extern MethodInfo m21463_MI;
extern MethodInfo m21464_MI;
extern MethodInfo m21461_MI;
extern MethodInfo m21459_MI;
extern MethodInfo m3628_MI;
extern MethodInfo m11151_MI;
extern MethodInfo m21452_MI;
extern MethodInfo m21462_MI;
extern MethodInfo m21450_MI;
extern MethodInfo m21455_MI;
extern MethodInfo m21446_MI;
extern MethodInfo m35610_MI;
extern MethodInfo m35616_MI;
extern MethodInfo m35617_MI;
extern MethodInfo m6793_MI;
extern MethodInfo m11150_MI;
extern MethodInfo m11152_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>
extern Il2CppType t3769_0_0_1;
FieldInfo t3770_f0_FieldInfo = 
{
	"list", &t3769_0_0_1, &t3770_TI, offsetof(t3770, f0), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_1;
FieldInfo t3770_f1_FieldInfo = 
{
	"syncRoot", &t5_0_0_1, &t3770_TI, offsetof(t3770, f1), &EmptyCustomAttributesCache};
static FieldInfo* t3770_FIs[] =
{
	&t3770_f0_FieldInfo,
	&t3770_f1_FieldInfo,
	NULL
};
extern MethodInfo m21430_MI;
static PropertyInfo t3770____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t3770_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m21430_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21438_MI;
static PropertyInfo t3770____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t3770_TI, "System.Collections.ICollection.IsSynchronized", &m21438_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21439_MI;
static PropertyInfo t3770____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t3770_TI, "System.Collections.ICollection.SyncRoot", &m21439_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21440_MI;
static PropertyInfo t3770____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t3770_TI, "System.Collections.IList.IsFixedSize", &m21440_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21441_MI;
static PropertyInfo t3770____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t3770_TI, "System.Collections.IList.IsReadOnly", &m21441_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21442_MI;
extern MethodInfo m21443_MI;
static PropertyInfo t3770____System_Collections_IList_Item_PropertyInfo = 
{
	&t3770_TI, "System.Collections.IList.Item", &m21442_MI, &m21443_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21456_MI;
static PropertyInfo t3770____Count_PropertyInfo = 
{
	&t3770_TI, "Count", &m21456_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21457_MI;
extern MethodInfo m21458_MI;
static PropertyInfo t3770____Item_PropertyInfo = 
{
	&t3770_TI, "Item", &m21457_MI, &m21458_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3770_PIs[] =
{
	&t3770____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t3770____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t3770____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t3770____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t3770____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t3770____System_Collections_IList_Item_PropertyInfo,
	&t3770____Count_PropertyInfo,
	&t3770____Item_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21429_GM;
MethodInfo m21429_MI = 
{
	".ctor", (methodPointerType)&m11785_gshared, &t3770_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21429_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21430_GM;
MethodInfo m21430_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11786_gshared, &t3770_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21430_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t3770_m21431_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21431_GM;
MethodInfo m21431_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11787_gshared, &t3770_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t3770_m21431_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21431_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21432_GM;
MethodInfo m21432_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11788_gshared, &t3770_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21432_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3770_m21433_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21433_GM;
MethodInfo m21433_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11789_gshared, &t3770_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3770_m21433_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21433_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3770_m21434_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21434_GM;
MethodInfo m21434_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11790_gshared, &t3770_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3770_m21434_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21434_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3770_m21435_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21435_GM;
MethodInfo m21435_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11791_gshared, &t3770_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3770_m21435_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21435_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3770_m21436_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21436_GM;
MethodInfo m21436_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11792_gshared, &t3770_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3770_m21436_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21436_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3770_m21437_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21437_GM;
MethodInfo m21437_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11793_gshared, &t3770_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3770_m21437_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21437_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21438_GM;
MethodInfo m21438_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11794_gshared, &t3770_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21438_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21439_GM;
MethodInfo m21439_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11795_gshared, &t3770_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21439_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21440_GM;
MethodInfo m21440_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11796_gshared, &t3770_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21440_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21441_GM;
MethodInfo m21441_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11797_gshared, &t3770_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21441_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3770_m21442_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21442_GM;
MethodInfo m21442_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11798_gshared, &t3770_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t3770_m21442_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21442_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3770_m21443_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21443_GM;
MethodInfo m21443_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11799_gshared, &t3770_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3770_m21443_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21443_GM};
extern Il2CppType t703_0_0_0;
static ParameterInfo t3770_m21444_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21444_GM;
MethodInfo m21444_MI = 
{
	"Add", (methodPointerType)&m11800_gshared, &t3770_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3770_m21444_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21444_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21445_GM;
MethodInfo m21445_MI = 
{
	"Clear", (methodPointerType)&m11801_gshared, &t3770_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21445_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21446_GM;
MethodInfo m21446_MI = 
{
	"ClearItems", (methodPointerType)&m11802_gshared, &t3770_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21446_GM};
extern Il2CppType t703_0_0_0;
static ParameterInfo t3770_m21447_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21447_GM;
MethodInfo m21447_MI = 
{
	"Contains", (methodPointerType)&m11803_gshared, &t3770_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3770_m21447_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21447_GM};
extern Il2CppType t3760_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t3770_m21448_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3760_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21448_GM;
MethodInfo m21448_MI = 
{
	"CopyTo", (methodPointerType)&m11804_gshared, &t3770_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t3770_m21448_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21448_GM};
extern Il2CppType t3762_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21449_GM;
MethodInfo m21449_MI = 
{
	"GetEnumerator", (methodPointerType)&m11805_gshared, &t3770_TI, &t3762_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21449_GM};
extern Il2CppType t703_0_0_0;
static ParameterInfo t3770_m21450_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21450_GM;
MethodInfo m21450_MI = 
{
	"IndexOf", (methodPointerType)&m11806_gshared, &t3770_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3770_m21450_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21450_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t703_0_0_0;
static ParameterInfo t3770_m21451_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21451_GM;
MethodInfo m21451_MI = 
{
	"Insert", (methodPointerType)&m11807_gshared, &t3770_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3770_m21451_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21451_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t703_0_0_0;
static ParameterInfo t3770_m21452_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21452_GM;
MethodInfo m21452_MI = 
{
	"InsertItem", (methodPointerType)&m11808_gshared, &t3770_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3770_m21452_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21452_GM};
extern Il2CppType t703_0_0_0;
static ParameterInfo t3770_m21453_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21453_GM;
MethodInfo m21453_MI = 
{
	"Remove", (methodPointerType)&m11809_gshared, &t3770_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3770_m21453_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21453_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3770_m21454_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21454_GM;
MethodInfo m21454_MI = 
{
	"RemoveAt", (methodPointerType)&m11810_gshared, &t3770_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t3770_m21454_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21454_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3770_m21455_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21455_GM;
MethodInfo m21455_MI = 
{
	"RemoveItem", (methodPointerType)&m11811_gshared, &t3770_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t3770_m21455_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21455_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21456_GM;
MethodInfo m21456_MI = 
{
	"get_Count", (methodPointerType)&m11812_gshared, &t3770_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21456_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3770_m21457_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t703_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21457_GM;
MethodInfo m21457_MI = 
{
	"get_Item", (methodPointerType)&m11813_gshared, &t3770_TI, &t703_0_0_0, RuntimeInvoker_t5_t110, t3770_m21457_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21457_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t703_0_0_0;
static ParameterInfo t3770_m21458_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21458_GM;
MethodInfo m21458_MI = 
{
	"set_Item", (methodPointerType)&m11814_gshared, &t3770_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3770_m21458_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21458_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t703_0_0_0;
static ParameterInfo t3770_m21459_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21459_GM;
MethodInfo m21459_MI = 
{
	"SetItem", (methodPointerType)&m11815_gshared, &t3770_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3770_m21459_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21459_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3770_m21460_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21460_GM;
MethodInfo m21460_MI = 
{
	"IsValidItem", (methodPointerType)&m11816_gshared, &t3770_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3770_m21460_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21460_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3770_m21461_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t703_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21461_GM;
MethodInfo m21461_MI = 
{
	"ConvertItem", (methodPointerType)&m11817_gshared, &t3770_TI, &t703_0_0_0, RuntimeInvoker_t5_t5, t3770_m21461_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21461_GM};
extern Il2CppType t3769_0_0_0;
static ParameterInfo t3770_m21462_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t3769_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21462_GM;
MethodInfo m21462_MI = 
{
	"CheckWritable", (methodPointerType)&m11818_gshared, &t3770_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3770_m21462_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21462_GM};
extern Il2CppType t3769_0_0_0;
static ParameterInfo t3770_m21463_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t3769_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21463_GM;
MethodInfo m21463_MI = 
{
	"IsSynchronized", (methodPointerType)&m11819_gshared, &t3770_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3770_m21463_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21463_GM};
extern Il2CppType t3769_0_0_0;
static ParameterInfo t3770_m21464_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t3769_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21464_GM;
MethodInfo m21464_MI = 
{
	"IsFixedSize", (methodPointerType)&m11820_gshared, &t3770_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3770_m21464_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21464_GM};
static MethodInfo* t3770_MIs[] =
{
	&m21429_MI,
	&m21430_MI,
	&m21431_MI,
	&m21432_MI,
	&m21433_MI,
	&m21434_MI,
	&m21435_MI,
	&m21436_MI,
	&m21437_MI,
	&m21438_MI,
	&m21439_MI,
	&m21440_MI,
	&m21441_MI,
	&m21442_MI,
	&m21443_MI,
	&m21444_MI,
	&m21445_MI,
	&m21446_MI,
	&m21447_MI,
	&m21448_MI,
	&m21449_MI,
	&m21450_MI,
	&m21451_MI,
	&m21452_MI,
	&m21453_MI,
	&m21454_MI,
	&m21455_MI,
	&m21456_MI,
	&m21457_MI,
	&m21458_MI,
	&m21459_MI,
	&m21460_MI,
	&m21461_MI,
	&m21462_MI,
	&m21463_MI,
	&m21464_MI,
	NULL
};
extern MethodInfo m21432_MI;
extern MethodInfo m21431_MI;
extern MethodInfo m21433_MI;
extern MethodInfo m21445_MI;
extern MethodInfo m21434_MI;
extern MethodInfo m21435_MI;
extern MethodInfo m21436_MI;
extern MethodInfo m21437_MI;
extern MethodInfo m21454_MI;
extern MethodInfo m21444_MI;
extern MethodInfo m21447_MI;
extern MethodInfo m21448_MI;
extern MethodInfo m21453_MI;
extern MethodInfo m21451_MI;
extern MethodInfo m21449_MI;
static MethodInfo* t3770_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21432_MI,
	&m21456_MI,
	&m21438_MI,
	&m21439_MI,
	&m21431_MI,
	&m21440_MI,
	&m21441_MI,
	&m21442_MI,
	&m21443_MI,
	&m21433_MI,
	&m21445_MI,
	&m21434_MI,
	&m21435_MI,
	&m21436_MI,
	&m21437_MI,
	&m21454_MI,
	&m21456_MI,
	&m21430_MI,
	&m21444_MI,
	&m21445_MI,
	&m21447_MI,
	&m21448_MI,
	&m21453_MI,
	&m21450_MI,
	&m21451_MI,
	&m21454_MI,
	&m21457_MI,
	&m21458_MI,
	&m21449_MI,
	&m21446_MI,
	&m21452_MI,
	&m21455_MI,
	&m21459_MI,
};
static TypeInfo* t3770_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t3763_TI,
	&t3769_TI,
	&t3761_TI,
};
static Il2CppInterfaceOffsetPair t3770_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t3763_TI, 20},
	{ &t3769_TI, 27},
	{ &t3761_TI, 32},
};
extern TypeInfo t706_TI;
extern TypeInfo t703_TI;
static Il2CppRGCTXData t3770_RGCTXData[25] = 
{
	&t706_TI/* Class Usage */,
	&m3628_MI/* Method Usage */,
	&m35608_MI/* Method Usage */,
	&m35606_MI/* Method Usage */,
	&m35604_MI/* Method Usage */,
	&m21461_MI/* Method Usage */,
	&m21452_MI/* Method Usage */,
	&m21460_MI/* Method Usage */,
	&t703_TI/* Class Usage */,
	&m35611_MI/* Method Usage */,
	&m35615_MI/* Method Usage */,
	&m21462_MI/* Method Usage */,
	&m21450_MI/* Method Usage */,
	&m21455_MI/* Method Usage */,
	&m21463_MI/* Method Usage */,
	&m21464_MI/* Method Usage */,
	&m35613_MI/* Method Usage */,
	&m21459_MI/* Method Usage */,
	&m21446_MI/* Method Usage */,
	&m35610_MI/* Method Usage */,
	&m35605_MI/* Method Usage */,
	&m35616_MI/* Method Usage */,
	&m35617_MI/* Method Usage */,
	&m35614_MI/* Method Usage */,
	&t703_0_0_0/* Type Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3770_0_0_0;
extern Il2CppType t3770_1_0_0;
struct t3770;
extern Il2CppGenericClass t3770_GC;
extern CustomAttributesCache t1525__CustomAttributeCache;
TypeInfo t3770_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t3770_MIs, t3770_PIs, t3770_FIs, NULL, &t5_TI, NULL, NULL, &t3770_TI, t3770_ITIs, t3770_VT, &t1525__CustomAttributeCache, &t3770_TI, &t3770_0_0_0, &t3770_1_0_0, t3770_IOs, &t3770_GC, NULL, NULL, NULL, t3770_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3770), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3771_TI;
#include "t3771MD.h"

#include "t1520.h"
#include "t3772.h"
extern TypeInfo t7708_TI;
extern TypeInfo t1520_TI;
extern TypeInfo t675_TI;
extern TypeInfo t3772_TI;
#include "t1196MD.h"
#include "t3772MD.h"
extern Il2CppType t7708_0_0_0;
extern Il2CppType t1520_0_0_0;
extern MethodInfo m3626_MI;
extern MethodInfo m3624_MI;
extern MethodInfo m10126_MI;
extern MethodInfo m21470_MI;
extern MethodInfo m35618_MI;
extern MethodInfo m27731_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.PersistentCall>
extern Il2CppType t3771_0_0_49;
FieldInfo t3771_f0_FieldInfo = 
{
	"_default", &t3771_0_0_49, &t3771_TI, offsetof(t3771_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t3771_FIs[] =
{
	&t3771_f0_FieldInfo,
	NULL
};
extern MethodInfo m21469_MI;
static PropertyInfo t3771____Default_PropertyInfo = 
{
	&t3771_TI, "Default", &m21469_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3771_PIs[] =
{
	&t3771____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21465_GM;
MethodInfo m21465_MI = 
{
	".ctor", (methodPointerType)&m11821_gshared, &t3771_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21465_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21466_GM;
MethodInfo m21466_MI = 
{
	".cctor", (methodPointerType)&m11822_gshared, &t3771_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21466_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3771_m21467_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21467_GM;
MethodInfo m21467_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m11823_gshared, &t3771_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3771_m21467_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21467_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3771_m21468_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21468_GM;
MethodInfo m21468_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m11824_gshared, &t3771_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t3771_m21468_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21468_GM};
extern Il2CppType t703_0_0_0;
static ParameterInfo t3771_m35618_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35618_GM;
MethodInfo m35618_MI = 
{
	"GetHashCode", NULL, &t3771_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3771_m35618_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35618_GM};
extern Il2CppType t703_0_0_0;
extern Il2CppType t703_0_0_0;
static ParameterInfo t3771_m27731_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m27731_GM;
MethodInfo m27731_MI = 
{
	"Equals", NULL, &t3771_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t3771_m27731_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m27731_GM};
extern Il2CppType t3771_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21469_GM;
MethodInfo m21469_MI = 
{
	"get_Default", (methodPointerType)&m11825_gshared, &t3771_TI, &t3771_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21469_GM};
static MethodInfo* t3771_MIs[] =
{
	&m21465_MI,
	&m21466_MI,
	&m21467_MI,
	&m21468_MI,
	&m35618_MI,
	&m27731_MI,
	&m21469_MI,
	NULL
};
extern MethodInfo m21468_MI;
extern MethodInfo m21467_MI;
static MethodInfo* t3771_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m27731_MI,
	&m35618_MI,
	&m21468_MI,
	&m21467_MI,
	NULL,
	NULL,
};
extern TypeInfo t7709_TI;
extern TypeInfo t998_TI;
static TypeInfo* t3771_ITIs[] = 
{
	&t7709_TI,
	&t998_TI,
};
static Il2CppInterfaceOffsetPair t3771_IOs[] = 
{
	{ &t7709_TI, 4},
	{ &t998_TI, 6},
};
extern TypeInfo t3771_TI;
extern TypeInfo t3771_TI;
extern TypeInfo t3772_TI;
extern TypeInfo t703_TI;
static Il2CppRGCTXData t3771_RGCTXData[9] = 
{
	&t7708_0_0_0/* Type Usage */,
	&t703_0_0_0/* Type Usage */,
	&t3771_TI/* Class Usage */,
	&t3771_TI/* Static Usage */,
	&t3772_TI/* Class Usage */,
	&m21470_MI/* Method Usage */,
	&t703_TI/* Class Usage */,
	&m35618_MI/* Method Usage */,
	&m27731_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3771_0_0_0;
extern Il2CppType t3771_1_0_0;
struct t3771;
extern Il2CppGenericClass t3771_GC;
TypeInfo t3771_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t3771_MIs, t3771_PIs, t3771_FIs, NULL, &t5_TI, NULL, NULL, &t3771_TI, t3771_ITIs, t3771_VT, &EmptyCustomAttributesCache, &t3771_TI, &t3771_0_0_0, &t3771_1_0_0, t3771_IOs, &t3771_GC, NULL, NULL, NULL, t3771_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3771), 0, -1, sizeof(t3771_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.Events.PersistentCall>
extern Il2CppType t703_0_0_0;
extern Il2CppType t703_0_0_0;
static ParameterInfo t7709_m35619_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35619_GM;
MethodInfo m35619_MI = 
{
	"Equals", NULL, &t7709_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t7709_m35619_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35619_GM};
extern Il2CppType t703_0_0_0;
static ParameterInfo t7709_m35620_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35620_GM;
MethodInfo m35620_MI = 
{
	"GetHashCode", NULL, &t7709_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7709_m35620_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35620_GM};
static MethodInfo* t7709_MIs[] =
{
	&m35619_MI,
	&m35620_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7709_0_0_0;
extern Il2CppType t7709_1_0_0;
struct t7709;
extern Il2CppGenericClass t7709_GC;
TypeInfo t7709_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t7709_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7709_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7709_TI, &t7709_0_0_0, &t7709_1_0_0, NULL, &t7709_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.IEquatable`1<UnityEngine.Events.PersistentCall>
extern Il2CppType t703_0_0_0;
static ParameterInfo t7708_m35621_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35621_GM;
MethodInfo m35621_MI = 
{
	"Equals", NULL, &t7708_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7708_m35621_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35621_GM};
static MethodInfo* t7708_MIs[] =
{
	&m35621_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7708_1_0_0;
struct t7708;
extern Il2CppGenericClass t7708_GC;
TypeInfo t7708_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t7708_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7708_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7708_TI, &t7708_0_0_0, &t7708_1_0_0, NULL, &t7708_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m21465_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Events.PersistentCall>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21470_GM;
MethodInfo m21470_MI = 
{
	".ctor", (methodPointerType)&m11856_gshared, &t3772_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21470_GM};
extern Il2CppType t703_0_0_0;
static ParameterInfo t3772_m21471_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21471_GM;
MethodInfo m21471_MI = 
{
	"GetHashCode", (methodPointerType)&m11857_gshared, &t3772_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3772_m21471_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21471_GM};
extern Il2CppType t703_0_0_0;
extern Il2CppType t703_0_0_0;
static ParameterInfo t3772_m21472_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21472_GM;
MethodInfo m21472_MI = 
{
	"Equals", (methodPointerType)&m11858_gshared, &t3772_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t3772_m21472_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21472_GM};
static MethodInfo* t3772_MIs[] =
{
	&m21470_MI,
	&m21471_MI,
	&m21472_MI,
	NULL
};
extern MethodInfo m21472_MI;
extern MethodInfo m21471_MI;
static MethodInfo* t3772_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21472_MI,
	&m21471_MI,
	&m21468_MI,
	&m21467_MI,
	&m21471_MI,
	&m21472_MI,
};
static Il2CppInterfaceOffsetPair t3772_IOs[] = 
{
	{ &t7709_TI, 4},
	{ &t998_TI, 6},
};
extern TypeInfo t3771_TI;
extern TypeInfo t3771_TI;
extern TypeInfo t3772_TI;
extern TypeInfo t703_TI;
extern TypeInfo t703_TI;
static Il2CppRGCTXData t3772_RGCTXData[11] = 
{
	&t7708_0_0_0/* Type Usage */,
	&t703_0_0_0/* Type Usage */,
	&t3771_TI/* Class Usage */,
	&t3771_TI/* Static Usage */,
	&t3772_TI/* Class Usage */,
	&m21470_MI/* Method Usage */,
	&t703_TI/* Class Usage */,
	&m35618_MI/* Method Usage */,
	&m27731_MI/* Method Usage */,
	&m21465_MI/* Method Usage */,
	&t703_TI/* Class Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3772_0_0_0;
extern Il2CppType t3772_1_0_0;
struct t3772;
extern Il2CppGenericClass t3772_GC;
extern TypeInfo t1519_TI;
TypeInfo t3772_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t3772_MIs, NULL, NULL, NULL, &t3771_TI, NULL, &t1519_TI, &t3772_TI, NULL, t3772_VT, &EmptyCustomAttributesCache, &t3772_TI, &t3772_0_0_0, &t3772_1_0_0, t3772_IOs, &t3772_GC, NULL, NULL, NULL, t3772_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3772), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Predicate`1<UnityEngine.Events.PersistentCall>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t3765_m21473_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21473_GM;
MethodInfo m21473_MI = 
{
	".ctor", (methodPointerType)&m11859_gshared, &t3765_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t3765_m21473_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21473_GM};
extern Il2CppType t703_0_0_0;
static ParameterInfo t3765_m21474_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21474_GM;
MethodInfo m21474_MI = 
{
	"Invoke", (methodPointerType)&m11860_gshared, &t3765_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3765_m21474_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21474_GM};
extern Il2CppType t703_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3765_m21475_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21475_GM;
MethodInfo m21475_MI = 
{
	"BeginInvoke", (methodPointerType)&m11861_gshared, &t3765_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t3765_m21475_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m21475_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t3765_m21476_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21476_GM;
MethodInfo m21476_MI = 
{
	"EndInvoke", (methodPointerType)&m11862_gshared, &t3765_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3765_m21476_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21476_GM};
static MethodInfo* t3765_MIs[] =
{
	&m21473_MI,
	&m21474_MI,
	&m21475_MI,
	&m21476_MI,
	NULL
};
extern MethodInfo m21475_MI;
extern MethodInfo m21476_MI;
static MethodInfo* t3765_VT[] =
{
	&m2341_MI,
	&m465_MI,
	&m2342_MI,
	&m467_MI,
	&m2343_MI,
	&m2344_MI,
	&m2343_MI,
	&m2345_MI,
	&m2346_MI,
	&m2347_MI,
	&m21474_MI,
	&m21475_MI,
	&m21476_MI,
};
static Il2CppInterfaceOffsetPair t3765_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3765_1_0_0;
struct t3765;
extern Il2CppGenericClass t3765_GC;
TypeInfo t3765_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t3765_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t3765_TI, NULL, t3765_VT, &EmptyCustomAttributesCache, &t3765_TI, &t3765_0_0_0, &t3765_1_0_0, t3765_IOs, &t3765_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3765), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Action`1<UnityEngine.Events.PersistentCall>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t3766_m21477_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21477_GM;
MethodInfo m21477_MI = 
{
	".ctor", (methodPointerType)&m11863_gshared, &t3766_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t3766_m21477_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21477_GM};
extern Il2CppType t703_0_0_0;
static ParameterInfo t3766_m21478_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21478_GM;
MethodInfo m21478_MI = 
{
	"Invoke", (methodPointerType)&m11864_gshared, &t3766_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3766_m21478_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21478_GM};
extern Il2CppType t703_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3766_m21479_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21479_GM;
MethodInfo m21479_MI = 
{
	"BeginInvoke", (methodPointerType)&m11865_gshared, &t3766_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t3766_m21479_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m21479_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t3766_m21480_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21480_GM;
MethodInfo m21480_MI = 
{
	"EndInvoke", (methodPointerType)&m11866_gshared, &t3766_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3766_m21480_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21480_GM};
static MethodInfo* t3766_MIs[] =
{
	&m21477_MI,
	&m21478_MI,
	&m21479_MI,
	&m21480_MI,
	NULL
};
extern MethodInfo m21479_MI;
extern MethodInfo m21480_MI;
static MethodInfo* t3766_VT[] =
{
	&m2341_MI,
	&m465_MI,
	&m2342_MI,
	&m467_MI,
	&m2343_MI,
	&m2344_MI,
	&m2343_MI,
	&m2345_MI,
	&m2346_MI,
	&m2347_MI,
	&m21478_MI,
	&m21479_MI,
	&m21480_MI,
};
static Il2CppInterfaceOffsetPair t3766_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3766_1_0_0;
struct t3766;
extern Il2CppGenericClass t3766_GC;
TypeInfo t3766_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Action`1", "System", t3766_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t3766_TI, NULL, t3766_VT, &EmptyCustomAttributesCache, &t3766_TI, &t3766_0_0_0, &t3766_1_0_0, t3766_IOs, &t3766_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3766), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif

#include "t1510.h"
#include "t3774.h"
extern TypeInfo t5256_TI;
extern TypeInfo t1510_TI;
extern TypeInfo t3774_TI;
#include "t3774MD.h"
extern Il2CppType t5256_0_0_0;
extern Il2CppType t1510_0_0_0;
extern MethodInfo m21485_MI;
extern MethodInfo m35622_MI;
extern MethodInfo m10152_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.Events.PersistentCall>
extern Il2CppType t3773_0_0_49;
FieldInfo t3773_f0_FieldInfo = 
{
	"_default", &t3773_0_0_49, &t3773_TI, offsetof(t3773_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t3773_FIs[] =
{
	&t3773_f0_FieldInfo,
	NULL
};
static PropertyInfo t3773____Default_PropertyInfo = 
{
	&t3773_TI, "Default", &m21484_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3773_PIs[] =
{
	&t3773____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21481_GM;
MethodInfo m21481_MI = 
{
	".ctor", (methodPointerType)&m11867_gshared, &t3773_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21481_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21482_GM;
MethodInfo m21482_MI = 
{
	".cctor", (methodPointerType)&m11868_gshared, &t3773_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21482_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3773_m21483_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21483_GM;
MethodInfo m21483_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m11869_gshared, &t3773_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t3773_m21483_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21483_GM};
extern Il2CppType t703_0_0_0;
extern Il2CppType t703_0_0_0;
static ParameterInfo t3773_m35622_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35622_GM;
MethodInfo m35622_MI = 
{
	"Compare", NULL, &t3773_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t3773_m35622_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35622_GM};
extern Il2CppType t3773_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21484_GM;
MethodInfo m21484_MI = 
{
	"get_Default", (methodPointerType)&m11870_gshared, &t3773_TI, &t3773_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21484_GM};
static MethodInfo* t3773_MIs[] =
{
	&m21481_MI,
	&m21482_MI,
	&m21483_MI,
	&m35622_MI,
	&m21484_MI,
	NULL
};
extern MethodInfo m21483_MI;
static MethodInfo* t3773_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m35622_MI,
	&m21483_MI,
	NULL,
};
extern TypeInfo t5255_TI;
extern TypeInfo t991_TI;
static TypeInfo* t3773_ITIs[] = 
{
	&t5255_TI,
	&t991_TI,
};
static Il2CppInterfaceOffsetPair t3773_IOs[] = 
{
	{ &t5255_TI, 4},
	{ &t991_TI, 5},
};
extern TypeInfo t3773_TI;
extern TypeInfo t3773_TI;
extern TypeInfo t3774_TI;
extern TypeInfo t703_TI;
static Il2CppRGCTXData t3773_RGCTXData[8] = 
{
	&t5256_0_0_0/* Type Usage */,
	&t703_0_0_0/* Type Usage */,
	&t3773_TI/* Class Usage */,
	&t3773_TI/* Static Usage */,
	&t3774_TI/* Class Usage */,
	&m21485_MI/* Method Usage */,
	&t703_TI/* Class Usage */,
	&m35622_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3773_0_0_0;
extern Il2CppType t3773_1_0_0;
struct t3773;
extern Il2CppGenericClass t3773_GC;
TypeInfo t3773_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t3773_MIs, t3773_PIs, t3773_FIs, NULL, &t5_TI, NULL, NULL, &t3773_TI, t3773_ITIs, t3773_VT, &EmptyCustomAttributesCache, &t3773_TI, &t3773_0_0_0, &t3773_1_0_0, t3773_IOs, &t3773_GC, NULL, NULL, NULL, t3773_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3773), 0, -1, sizeof(t3773_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.Events.PersistentCall>
extern Il2CppType t703_0_0_0;
extern Il2CppType t703_0_0_0;
static ParameterInfo t5255_m27739_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m27739_GM;
MethodInfo m27739_MI = 
{
	"Compare", NULL, &t5255_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t5255_m27739_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m27739_GM};
static MethodInfo* t5255_MIs[] =
{
	&m27739_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5255_0_0_0;
extern Il2CppType t5255_1_0_0;
struct t5255;
extern Il2CppGenericClass t5255_GC;
TypeInfo t5255_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t5255_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5255_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5255_TI, &t5255_0_0_0, &t5255_1_0_0, NULL, &t5255_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.IComparable`1<UnityEngine.Events.PersistentCall>
extern Il2CppType t703_0_0_0;
static ParameterInfo t5256_m27740_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m27740_GM;
MethodInfo m27740_MI = 
{
	"CompareTo", NULL, &t5256_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t5256_m27740_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m27740_GM};
static MethodInfo* t5256_MIs[] =
{
	&m27740_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5256_1_0_0;
struct t5256;
extern Il2CppGenericClass t5256_GC;
TypeInfo t5256_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t5256_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5256_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5256_TI, &t5256_0_0_0, &t5256_1_0_0, NULL, &t5256_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t122_TI;
extern MethodInfo m21481_MI;
extern MethodInfo m27740_MI;
extern MethodInfo m11009_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Events.PersistentCall>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21485_GM;
MethodInfo m21485_MI = 
{
	".ctor", (methodPointerType)&m11871_gshared, &t3774_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21485_GM};
extern Il2CppType t703_0_0_0;
extern Il2CppType t703_0_0_0;
static ParameterInfo t3774_m21486_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21486_GM;
MethodInfo m21486_MI = 
{
	"Compare", (methodPointerType)&m11872_gshared, &t3774_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t3774_m21486_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21486_GM};
static MethodInfo* t3774_MIs[] =
{
	&m21485_MI,
	&m21486_MI,
	NULL
};
extern MethodInfo m21486_MI;
static MethodInfo* t3774_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21486_MI,
	&m21483_MI,
	&m21486_MI,
};
static Il2CppInterfaceOffsetPair t3774_IOs[] = 
{
	{ &t5255_TI, 4},
	{ &t991_TI, 5},
};
extern TypeInfo t3773_TI;
extern TypeInfo t3773_TI;
extern TypeInfo t3774_TI;
extern TypeInfo t703_TI;
extern TypeInfo t703_TI;
extern TypeInfo t5256_TI;
static Il2CppRGCTXData t3774_RGCTXData[12] = 
{
	&t5256_0_0_0/* Type Usage */,
	&t703_0_0_0/* Type Usage */,
	&t3773_TI/* Class Usage */,
	&t3773_TI/* Static Usage */,
	&t3774_TI/* Class Usage */,
	&m21485_MI/* Method Usage */,
	&t703_TI/* Class Usage */,
	&m35622_MI/* Method Usage */,
	&m21481_MI/* Method Usage */,
	&t703_TI/* Class Usage */,
	&t5256_TI/* Class Usage */,
	&m27740_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3774_0_0_0;
extern Il2CppType t3774_1_0_0;
struct t3774;
extern Il2CppGenericClass t3774_GC;
extern TypeInfo t1509_TI;
TypeInfo t3774_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t3774_MIs, NULL, NULL, NULL, &t3773_TI, NULL, &t1509_TI, &t3774_TI, NULL, t3774_VT, &EmptyCustomAttributesCache, &t3774_TI, &t3774_0_0_0, &t3774_1_0_0, t3774_IOs, &t3774_GC, NULL, NULL, NULL, t3774_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3774), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3767_TI;
#include "t3767MD.h"



// Metadata Definition System.Comparison`1<UnityEngine.Events.PersistentCall>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t3767_m21487_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21487_GM;
MethodInfo m21487_MI = 
{
	".ctor", (methodPointerType)&m11938_gshared, &t3767_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t3767_m21487_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21487_GM};
extern Il2CppType t703_0_0_0;
extern Il2CppType t703_0_0_0;
static ParameterInfo t3767_m21488_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21488_GM;
MethodInfo m21488_MI = 
{
	"Invoke", (methodPointerType)&m11939_gshared, &t3767_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t3767_m21488_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21488_GM};
extern Il2CppType t703_0_0_0;
extern Il2CppType t703_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3767_m21489_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t703_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21489_GM;
MethodInfo m21489_MI = 
{
	"BeginInvoke", (methodPointerType)&m11940_gshared, &t3767_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5_t5, t3767_m21489_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL, &m21489_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t3767_m21490_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21490_GM;
MethodInfo m21490_MI = 
{
	"EndInvoke", (methodPointerType)&m11941_gshared, &t3767_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3767_m21490_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21490_GM};
static MethodInfo* t3767_MIs[] =
{
	&m21487_MI,
	&m21488_MI,
	&m21489_MI,
	&m21490_MI,
	NULL
};
extern MethodInfo m21488_MI;
extern MethodInfo m21489_MI;
extern MethodInfo m21490_MI;
static MethodInfo* t3767_VT[] =
{
	&m2341_MI,
	&m465_MI,
	&m2342_MI,
	&m467_MI,
	&m2343_MI,
	&m2344_MI,
	&m2343_MI,
	&m2345_MI,
	&m2346_MI,
	&m2347_MI,
	&m21488_MI,
	&m21489_MI,
	&m21490_MI,
};
static Il2CppInterfaceOffsetPair t3767_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3767_1_0_0;
struct t3767;
extern Il2CppGenericClass t3767_GC;
TypeInfo t3767_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t3767_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t3767_TI, NULL, t3767_VT, &EmptyCustomAttributesCache, &t3767_TI, &t3767_0_0_0, &t3767_1_0_0, t3767_IOs, &t3767_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3767), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t708.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t708_TI;
#include "t708MD.h"

#include "t3782.h"
#include "t3779.h"
#include "t799.h"
#include "t3780.h"
#include "t3788.h"
#include "t3781.h"
extern TypeInfo t3778_TI;
extern TypeInfo t3775_TI;
extern TypeInfo t3782_TI;
extern TypeInfo t3776_TI;
extern TypeInfo t3777_TI;
extern TypeInfo t3779_TI;
extern TypeInfo t799_TI;
extern TypeInfo t3780_TI;
extern TypeInfo t3788_TI;
#include "t3779MD.h"
#include "t799MD.h"
#include "t3780MD.h"
#include "t3782MD.h"
#include "t3788MD.h"
extern MethodInfo m3634_MI;
extern MethodInfo m21533_MI;
extern MethodInfo m27756_MI;
extern MethodInfo m21521_MI;
extern MethodInfo m21523_MI;
extern MethodInfo m21511_MI;
extern MethodInfo m35623_MI;
extern MethodInfo m21510_MI;
extern MethodInfo m21518_MI;
extern MethodInfo m3633_MI;
extern MethodInfo m3636_MI;
extern MethodInfo m21519_MI;
extern MethodInfo m21522_MI;
extern MethodInfo m21524_MI;
extern MethodInfo m21509_MI;
extern MethodInfo m21531_MI;
extern MethodInfo m21532_MI;
extern MethodInfo m35624_MI;
extern MethodInfo m35625_MI;
extern MethodInfo m35626_MI;
extern MethodInfo m21545_MI;
extern MethodInfo m27758_MI;
extern MethodInfo m21515_MI;
extern MethodInfo m21516_MI;
extern MethodInfo m21619_MI;
extern MethodInfo m21623_MI;
extern MethodInfo m21539_MI;
extern MethodInfo m21520_MI;
extern MethodInfo m21525_MI;
extern MethodInfo m21629_MI;
extern MethodInfo m27760_MI;
extern MethodInfo m27768_MI;
struct t107;
#define m27756(__this, p0, p1, method) (void)m23607_gshared((t5 *)__this, (t168**)p0, (int32_t)p1, method)
struct t107;
#include "t3786.h"
#define m27758(__this, p0, p1, p2, p3, method) (int32_t)m11458_gshared((t5 *)__this, (t168*)p0, (t5 *)p1, (int32_t)p2, (int32_t)p3, method)
struct t107;
#define m27760(__this, p0, p1, p2, p3, method) (void)m23676_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (int32_t)p2, (t5*)p3, method)
struct t107;
#define m27768(__this, p0, p1, p2, method) (void)m23827_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (t2458 *)p2, method)


 t3782  m21518 (t708 * __this, MethodInfo* method){
	{
		t3782  L_0 = {0};
		m21539(&L_0, __this, &m21539_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
extern Il2CppType t110_0_0_32849;
FieldInfo t708_f0_FieldInfo = 
{
	"DefaultCapacity", &t110_0_0_32849, &t708_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t3775_0_0_1;
FieldInfo t708_f1_FieldInfo = 
{
	"_items", &t3775_0_0_1, &t708_TI, offsetof(t708, f1), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t708_f2_FieldInfo = 
{
	"_size", &t110_0_0_1, &t708_TI, offsetof(t708, f2), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t708_f3_FieldInfo = 
{
	"_version", &t110_0_0_1, &t708_TI, offsetof(t708, f3), &EmptyCustomAttributesCache};
extern Il2CppType t3775_0_0_49;
FieldInfo t708_f4_FieldInfo = 
{
	"EmptyArray", &t3775_0_0_49, &t708_TI, offsetof(t708_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t708_FIs[] =
{
	&t708_f0_FieldInfo,
	&t708_f1_FieldInfo,
	&t708_f2_FieldInfo,
	&t708_f3_FieldInfo,
	&t708_f4_FieldInfo,
	NULL
};
static const int32_t t708_f0_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t708_f0_DefaultValue = 
{
	&t708_f0_FieldInfo, { (char*)&t708_f0_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t708_FDVs[] = 
{
	&t708_f0_DefaultValue,
	NULL
};
extern MethodInfo m21502_MI;
static PropertyInfo t708____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t708_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m21502_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21503_MI;
static PropertyInfo t708____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t708_TI, "System.Collections.ICollection.IsSynchronized", &m21503_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21504_MI;
static PropertyInfo t708____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t708_TI, "System.Collections.ICollection.SyncRoot", &m21504_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21505_MI;
static PropertyInfo t708____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t708_TI, "System.Collections.IList.IsFixedSize", &m21505_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21506_MI;
static PropertyInfo t708____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t708_TI, "System.Collections.IList.IsReadOnly", &m21506_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21507_MI;
extern MethodInfo m21508_MI;
static PropertyInfo t708____System_Collections_IList_Item_PropertyInfo = 
{
	&t708_TI, "System.Collections.IList.Item", &m21507_MI, &m21508_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t708____Capacity_PropertyInfo = 
{
	&t708_TI, "Capacity", &m21531_MI, &m21532_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3635_MI;
static PropertyInfo t708____Count_PropertyInfo = 
{
	&t708_TI, "Count", &m3635_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t708____Item_PropertyInfo = 
{
	&t708_TI, "Item", &m3634_MI, &m21533_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t708_PIs[] =
{
	&t708____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t708____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t708____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t708____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t708____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t708____System_Collections_IList_Item_PropertyInfo,
	&t708____Capacity_PropertyInfo,
	&t708____Count_PropertyInfo,
	&t708____Item_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m3632_GM;
MethodInfo m3632_MI = 
{
	".ctor", (methodPointerType)&m11648_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m3632_GM};
extern Il2CppType t3776_0_0_0;
extern Il2CppType t3776_0_0_0;
static ParameterInfo t708_m21491_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t3776_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21491_GM;
MethodInfo m21491_MI = 
{
	".ctor", (methodPointerType)&m11650_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t708_m21491_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21491_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t708_m21492_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21492_GM;
MethodInfo m21492_MI = 
{
	".ctor", (methodPointerType)&m11652_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t708_m21492_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21492_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21493_GM;
MethodInfo m21493_MI = 
{
	".cctor", (methodPointerType)&m11654_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21493_GM};
extern Il2CppType t3777_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21494_GM;
MethodInfo m21494_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m11656_gshared, &t708_TI, &t3777_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21494_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t708_m21495_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21495_GM;
MethodInfo m21495_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11658_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t708_m21495_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21495_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21496_GM;
MethodInfo m21496_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11660_gshared, &t708_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21496_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t708_m21497_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21497_GM;
MethodInfo m21497_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11662_gshared, &t708_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t708_m21497_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21497_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t708_m21498_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21498_GM;
MethodInfo m21498_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11664_gshared, &t708_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t708_m21498_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21498_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t708_m21499_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21499_GM;
MethodInfo m21499_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11666_gshared, &t708_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t708_m21499_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21499_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t708_m21500_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21500_GM;
MethodInfo m21500_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11668_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t708_m21500_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21500_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t708_m21501_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21501_GM;
MethodInfo m21501_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11670_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t708_m21501_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21501_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21502_GM;
MethodInfo m21502_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11672_gshared, &t708_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21502_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21503_GM;
MethodInfo m21503_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11674_gshared, &t708_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21503_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21504_GM;
MethodInfo m21504_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11676_gshared, &t708_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21504_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21505_GM;
MethodInfo m21505_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11678_gshared, &t708_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21505_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21506_GM;
MethodInfo m21506_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11680_gshared, &t708_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21506_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t708_m21507_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21507_GM;
MethodInfo m21507_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11682_gshared, &t708_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t708_m21507_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21507_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t708_m21508_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21508_GM;
MethodInfo m21508_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11684_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t708_m21508_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21508_GM};
extern Il2CppType t694_0_0_0;
extern Il2CppType t694_0_0_0;
static ParameterInfo t708_m3633_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m3633_GM;
MethodInfo m3633_MI = 
{
	"Add", (methodPointerType)&m11686_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t708_m3633_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m3633_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t708_m21509_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21509_GM;
MethodInfo m21509_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m11688_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t708_m21509_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21509_GM};
extern Il2CppType t3778_0_0_0;
extern Il2CppType t3778_0_0_0;
static ParameterInfo t708_m21510_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t3778_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21510_GM;
MethodInfo m21510_MI = 
{
	"AddCollection", (methodPointerType)&m11690_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t708_m21510_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21510_GM};
extern Il2CppType t3776_0_0_0;
static ParameterInfo t708_m21511_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t3776_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21511_GM;
MethodInfo m21511_MI = 
{
	"AddEnumerable", (methodPointerType)&m11692_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t708_m21511_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21511_GM};
extern Il2CppType t3776_0_0_0;
static ParameterInfo t708_m3640_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t3776_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m3640_GM;
MethodInfo m3640_MI = 
{
	"AddRange", (methodPointerType)&m11693_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t708_m3640_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m3640_GM};
extern Il2CppType t3779_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21512_GM;
MethodInfo m21512_MI = 
{
	"AsReadOnly", (methodPointerType)&m11695_gshared, &t708_TI, &t3779_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21512_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m3639_GM;
MethodInfo m3639_MI = 
{
	"Clear", (methodPointerType)&m11696_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m3639_GM};
extern Il2CppType t694_0_0_0;
static ParameterInfo t708_m3636_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m3636_GM;
MethodInfo m3636_MI = 
{
	"Contains", (methodPointerType)&m11698_gshared, &t708_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t708_m3636_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m3636_GM};
extern Il2CppType t3775_0_0_0;
extern Il2CppType t3775_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t708_m21513_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3775_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21513_GM;
MethodInfo m21513_MI = 
{
	"CopyTo", (methodPointerType)&m11700_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t708_m21513_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21513_GM};
extern Il2CppType t799_0_0_0;
extern Il2CppType t799_0_0_0;
static ParameterInfo t708_m21514_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t799_0_0_0},
};
extern Il2CppType t694_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21514_GM;
MethodInfo m21514_MI = 
{
	"Find", (methodPointerType)&m11702_gshared, &t708_TI, &t694_0_0_0, RuntimeInvoker_t5_t5, t708_m21514_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21514_GM};
extern Il2CppType t799_0_0_0;
static ParameterInfo t708_m21515_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t799_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21515_GM;
MethodInfo m21515_MI = 
{
	"CheckMatch", (methodPointerType)&m11704_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t708_m21515_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21515_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t799_0_0_0;
static ParameterInfo t708_m21516_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t799_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21516_GM;
MethodInfo m21516_MI = 
{
	"GetIndex", (methodPointerType)&m11706_gshared, &t708_TI, &t110_0_0_0, RuntimeInvoker_t110_t110_t110_t5, t708_m21516_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL, &m21516_GM};
extern Il2CppType t3780_0_0_0;
extern Il2CppType t3780_0_0_0;
static ParameterInfo t708_m21517_ParameterInfos[] = 
{
	{"action", 0, 134217728, &EmptyCustomAttributesCache, &t3780_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21517_GM;
MethodInfo m21517_MI = 
{
	"ForEach", (methodPointerType)&m11707_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t708_m21517_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21517_GM};
extern Il2CppType t3782_0_0_0;
extern void* RuntimeInvoker_t3782 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21518_GM;
MethodInfo m21518_MI = 
{
	"GetEnumerator", (methodPointerType)&m21518, &t708_TI, &t3782_0_0_0, RuntimeInvoker_t3782, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21518_GM};
extern Il2CppType t694_0_0_0;
static ParameterInfo t708_m21519_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21519_GM;
MethodInfo m21519_MI = 
{
	"IndexOf", (methodPointerType)&m11709_gshared, &t708_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t708_m21519_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21519_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t708_m21520_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21520_GM;
MethodInfo m21520_MI = 
{
	"Shift", (methodPointerType)&m11711_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t708_m21520_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21520_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t708_m21521_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21521_GM;
MethodInfo m21521_MI = 
{
	"CheckIndex", (methodPointerType)&m11713_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t708_m21521_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21521_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t694_0_0_0;
static ParameterInfo t708_m21522_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21522_GM;
MethodInfo m21522_MI = 
{
	"Insert", (methodPointerType)&m11715_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t708_m21522_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21522_GM};
extern Il2CppType t3776_0_0_0;
static ParameterInfo t708_m21523_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t3776_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21523_GM;
MethodInfo m21523_MI = 
{
	"CheckCollection", (methodPointerType)&m11717_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t708_m21523_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21523_GM};
extern Il2CppType t694_0_0_0;
static ParameterInfo t708_m21524_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21524_GM;
MethodInfo m21524_MI = 
{
	"Remove", (methodPointerType)&m11719_gshared, &t708_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t708_m21524_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21524_GM};
extern Il2CppType t799_0_0_0;
static ParameterInfo t708_m3638_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t799_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m3638_GM;
MethodInfo m3638_MI = 
{
	"RemoveAll", (methodPointerType)&m11721_gshared, &t708_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t708_m3638_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m3638_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t708_m21525_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21525_GM;
MethodInfo m21525_MI = 
{
	"RemoveAt", (methodPointerType)&m11723_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t708_m21525_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21525_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21526_GM;
MethodInfo m21526_MI = 
{
	"Reverse", (methodPointerType)&m11725_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21526_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21527_GM;
MethodInfo m21527_MI = 
{
	"Sort", (methodPointerType)&m11727_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21527_GM};
extern Il2CppType t3781_0_0_0;
extern Il2CppType t3781_0_0_0;
static ParameterInfo t708_m21528_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t3781_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21528_GM;
MethodInfo m21528_MI = 
{
	"Sort", (methodPointerType)&m11729_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t708_m21528_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21528_GM};
extern Il2CppType t3775_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21529_GM;
MethodInfo m21529_MI = 
{
	"ToArray", (methodPointerType)&m11731_gshared, &t708_TI, &t3775_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21529_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21530_GM;
MethodInfo m21530_MI = 
{
	"TrimExcess", (methodPointerType)&m11733_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21530_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21531_GM;
MethodInfo m21531_MI = 
{
	"get_Capacity", (methodPointerType)&m11735_gshared, &t708_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21531_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t708_m21532_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21532_GM;
MethodInfo m21532_MI = 
{
	"set_Capacity", (methodPointerType)&m11737_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t708_m21532_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21532_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m3635_GM;
MethodInfo m3635_MI = 
{
	"get_Count", (methodPointerType)&m11738_gshared, &t708_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m3635_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t708_m3634_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t694_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m3634_GM;
MethodInfo m3634_MI = 
{
	"get_Item", (methodPointerType)&m11740_gshared, &t708_TI, &t694_0_0_0, RuntimeInvoker_t5_t110, t708_m3634_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL, &m3634_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t694_0_0_0;
static ParameterInfo t708_m21533_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21533_GM;
MethodInfo m21533_MI = 
{
	"set_Item", (methodPointerType)&m11742_gshared, &t708_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t708_m21533_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21533_GM};
static MethodInfo* t708_MIs[] =
{
	&m3632_MI,
	&m21491_MI,
	&m21492_MI,
	&m21493_MI,
	&m21494_MI,
	&m21495_MI,
	&m21496_MI,
	&m21497_MI,
	&m21498_MI,
	&m21499_MI,
	&m21500_MI,
	&m21501_MI,
	&m21502_MI,
	&m21503_MI,
	&m21504_MI,
	&m21505_MI,
	&m21506_MI,
	&m21507_MI,
	&m21508_MI,
	&m3633_MI,
	&m21509_MI,
	&m21510_MI,
	&m21511_MI,
	&m3640_MI,
	&m21512_MI,
	&m3639_MI,
	&m3636_MI,
	&m21513_MI,
	&m21514_MI,
	&m21515_MI,
	&m21516_MI,
	&m21517_MI,
	&m21518_MI,
	&m21519_MI,
	&m21520_MI,
	&m21521_MI,
	&m21522_MI,
	&m21523_MI,
	&m21524_MI,
	&m3638_MI,
	&m21525_MI,
	&m21526_MI,
	&m21527_MI,
	&m21528_MI,
	&m21529_MI,
	&m21530_MI,
	&m21531_MI,
	&m21532_MI,
	&m3635_MI,
	&m3634_MI,
	&m21533_MI,
	NULL
};
extern MethodInfo m21496_MI;
extern MethodInfo m21495_MI;
extern MethodInfo m21497_MI;
extern MethodInfo m3639_MI;
extern MethodInfo m21498_MI;
extern MethodInfo m21499_MI;
extern MethodInfo m21500_MI;
extern MethodInfo m21501_MI;
extern MethodInfo m21513_MI;
extern MethodInfo m21494_MI;
static MethodInfo* t708_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21496_MI,
	&m3635_MI,
	&m21503_MI,
	&m21504_MI,
	&m21495_MI,
	&m21505_MI,
	&m21506_MI,
	&m21507_MI,
	&m21508_MI,
	&m21497_MI,
	&m3639_MI,
	&m21498_MI,
	&m21499_MI,
	&m21500_MI,
	&m21501_MI,
	&m21525_MI,
	&m3635_MI,
	&m21502_MI,
	&m3633_MI,
	&m3639_MI,
	&m3636_MI,
	&m21513_MI,
	&m21524_MI,
	&m21494_MI,
	&m21519_MI,
	&m21522_MI,
	&m21525_MI,
	&m3634_MI,
	&m21533_MI,
};
extern TypeInfo t3784_TI;
static TypeInfo* t708_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t3778_TI,
	&t3776_TI,
	&t3784_TI,
};
static Il2CppInterfaceOffsetPair t708_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t3778_TI, 20},
	{ &t3776_TI, 27},
	{ &t3784_TI, 28},
};
extern TypeInfo t708_TI;
extern TypeInfo t3778_TI;
extern TypeInfo t3775_TI;
extern TypeInfo t3782_TI;
extern TypeInfo t694_TI;
extern TypeInfo t3779_TI;
static Il2CppRGCTXData t708_RGCTXData[38] = 
{
	&t708_TI/* Static Usage */,
	&m21523_MI/* Method Usage */,
	&t3778_TI/* Class Usage */,
	&m21511_MI/* Method Usage */,
	&m35623_MI/* Method Usage */,
	&t3775_TI/* Array Usage */,
	&m21510_MI/* Method Usage */,
	&m21518_MI/* Method Usage */,
	&t3782_TI/* Class Usage */,
	&t694_TI/* Class Usage */,
	&m3633_MI/* Method Usage */,
	&m3636_MI/* Method Usage */,
	&m21519_MI/* Method Usage */,
	&m21521_MI/* Method Usage */,
	&m21522_MI/* Method Usage */,
	&m21524_MI/* Method Usage */,
	&m3634_MI/* Method Usage */,
	&m21533_MI/* Method Usage */,
	&m21509_MI/* Method Usage */,
	&m21531_MI/* Method Usage */,
	&m21532_MI/* Method Usage */,
	&m35624_MI/* Method Usage */,
	&m35625_MI/* Method Usage */,
	&m35626_MI/* Method Usage */,
	&t3779_TI/* Class Usage */,
	&m21545_MI/* Method Usage */,
	&m27758_MI/* Method Usage */,
	&m21515_MI/* Method Usage */,
	&m21516_MI/* Method Usage */,
	&m21619_MI/* Method Usage */,
	&m21623_MI/* Method Usage */,
	&m21539_MI/* Method Usage */,
	&m21520_MI/* Method Usage */,
	&m21525_MI/* Method Usage */,
	&m21629_MI/* Method Usage */,
	&m27760_MI/* Method Usage */,
	&m27768_MI/* Method Usage */,
	&m27756_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t708_0_0_0;
extern Il2CppType t708_1_0_0;
struct t708;
extern Il2CppGenericClass t708_GC;
extern CustomAttributesCache t1524__CustomAttributeCache;
TypeInfo t708_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t708_MIs, t708_PIs, t708_FIs, NULL, &t5_TI, NULL, NULL, &t708_TI, t708_ITIs, t708_VT, &t1524__CustomAttributeCache, &t708_TI, &t708_0_0_0, &t708_1_0_0, t708_IOs, &t708_GC, NULL, t708_FDVs, NULL, t708_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t708), 0, -1, sizeof(t708_SFs), 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, true, false, false, 51, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Events.BaseInvokableCall>
static PropertyInfo t3778____Count_PropertyInfo = 
{
	&t3778_TI, "Count", &m35623_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35627_MI;
static PropertyInfo t3778____IsReadOnly_PropertyInfo = 
{
	&t3778_TI, "IsReadOnly", &m35627_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3778_PIs[] =
{
	&t3778____Count_PropertyInfo,
	&t3778____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35623_GM;
MethodInfo m35623_MI = 
{
	"get_Count", NULL, &t3778_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35623_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35627_GM;
MethodInfo m35627_MI = 
{
	"get_IsReadOnly", NULL, &t3778_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35627_GM};
extern Il2CppType t694_0_0_0;
static ParameterInfo t3778_m35628_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35628_GM;
MethodInfo m35628_MI = 
{
	"Add", NULL, &t3778_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3778_m35628_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35628_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35629_GM;
MethodInfo m35629_MI = 
{
	"Clear", NULL, &t3778_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35629_GM};
extern Il2CppType t694_0_0_0;
static ParameterInfo t3778_m35630_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35630_GM;
MethodInfo m35630_MI = 
{
	"Contains", NULL, &t3778_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3778_m35630_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35630_GM};
extern Il2CppType t3775_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t3778_m35624_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3775_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35624_GM;
MethodInfo m35624_MI = 
{
	"CopyTo", NULL, &t3778_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t3778_m35624_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35624_GM};
extern Il2CppType t694_0_0_0;
static ParameterInfo t3778_m35631_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35631_GM;
MethodInfo m35631_MI = 
{
	"Remove", NULL, &t3778_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3778_m35631_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35631_GM};
static MethodInfo* t3778_MIs[] =
{
	&m35623_MI,
	&m35627_MI,
	&m35628_MI,
	&m35629_MI,
	&m35630_MI,
	&m35624_MI,
	&m35631_MI,
	NULL
};
static TypeInfo* t3778_ITIs[] = 
{
	&t739_TI,
	&t3776_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3778_1_0_0;
struct t3778;
extern Il2CppGenericClass t3778_GC;
TypeInfo t3778_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t3778_MIs, t3778_PIs, NULL, NULL, NULL, NULL, NULL, &t3778_TI, t3778_ITIs, NULL, &EmptyCustomAttributesCache, &t3778_TI, &t3778_0_0_0, &t3778_1_0_0, NULL, &t3778_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Events.BaseInvokableCall>
extern Il2CppType t3777_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35625_GM;
MethodInfo m35625_MI = 
{
	"GetEnumerator", NULL, &t3776_TI, &t3777_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35625_GM};
static MethodInfo* t3776_MIs[] =
{
	&m35625_MI,
	NULL
};
static TypeInfo* t3776_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3776_1_0_0;
struct t3776;
extern Il2CppGenericClass t3776_GC;
TypeInfo t3776_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t3776_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3776_TI, t3776_ITIs, NULL, &EmptyCustomAttributesCache, &t3776_TI, &t3776_0_0_0, &t3776_1_0_0, NULL, &t3776_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Events.BaseInvokableCall>
static PropertyInfo t3777____Current_PropertyInfo = 
{
	&t3777_TI, "Current", &m35626_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3777_PIs[] =
{
	&t3777____Current_PropertyInfo,
	NULL
};
extern Il2CppType t694_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35626_GM;
MethodInfo m35626_MI = 
{
	"get_Current", NULL, &t3777_TI, &t694_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35626_GM};
static MethodInfo* t3777_MIs[] =
{
	&m35626_MI,
	NULL
};
static TypeInfo* t3777_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3777_0_0_0;
extern Il2CppType t3777_1_0_0;
struct t3777;
extern Il2CppGenericClass t3777_GC;
TypeInfo t3777_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3777_MIs, t3777_PIs, NULL, NULL, NULL, NULL, NULL, &t3777_TI, t3777_ITIs, NULL, &EmptyCustomAttributesCache, &t3777_TI, &t3777_0_0_0, &t3777_1_0_0, NULL, &t3777_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3783.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3783_TI;
#include "t3783MD.h"

extern MethodInfo m21538_MI;
extern MethodInfo m27745_MI;
struct t107;
#define m27745(__this, p0, method) (t694 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Events.BaseInvokableCall>
extern Il2CppType t107_0_0_1;
FieldInfo t3783_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3783_TI, offsetof(t3783, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3783_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3783_TI, offsetof(t3783, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3783_FIs[] =
{
	&t3783_f0_FieldInfo,
	&t3783_f1_FieldInfo,
	NULL
};
extern MethodInfo m21535_MI;
static PropertyInfo t3783____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3783_TI, "System.Collections.IEnumerator.Current", &m21535_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3783____Current_PropertyInfo = 
{
	&t3783_TI, "Current", &m21538_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3783_PIs[] =
{
	&t3783____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3783____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3783_m21534_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21534_GM;
MethodInfo m21534_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3783_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3783_m21534_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21534_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21535_GM;
MethodInfo m21535_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3783_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21535_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21536_GM;
MethodInfo m21536_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3783_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21536_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21537_GM;
MethodInfo m21537_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3783_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21537_GM};
extern Il2CppType t694_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21538_GM;
MethodInfo m21538_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3783_TI, &t694_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21538_GM};
static MethodInfo* t3783_MIs[] =
{
	&m21534_MI,
	&m21535_MI,
	&m21536_MI,
	&m21537_MI,
	&m21538_MI,
	NULL
};
extern MethodInfo m21537_MI;
extern MethodInfo m21536_MI;
static MethodInfo* t3783_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21535_MI,
	&m21537_MI,
	&m21536_MI,
	&m21538_MI,
};
static TypeInfo* t3783_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t3777_TI,
};
static Il2CppInterfaceOffsetPair t3783_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t3777_TI, 7},
};
extern TypeInfo t694_TI;
static Il2CppRGCTXData t3783_RGCTXData[3] = 
{
	&m21538_MI/* Method Usage */,
	&t694_TI/* Class Usage */,
	&m27745_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3783_0_0_0;
extern Il2CppType t3783_1_0_0;
extern Il2CppGenericClass t3783_GC;
TypeInfo t3783_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3783_MIs, t3783_PIs, t3783_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3783_TI, t3783_ITIs, t3783_VT, &EmptyCustomAttributesCache, &t3783_TI, &t3783_0_0_0, &t3783_1_0_0, t3783_IOs, &t3783_GC, NULL, NULL, NULL, t3783_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3783)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Events.BaseInvokableCall>
extern MethodInfo m35632_MI;
extern MethodInfo m35633_MI;
static PropertyInfo t3784____Item_PropertyInfo = 
{
	&t3784_TI, "Item", &m35632_MI, &m35633_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3784_PIs[] =
{
	&t3784____Item_PropertyInfo,
	NULL
};
extern Il2CppType t694_0_0_0;
static ParameterInfo t3784_m35634_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35634_GM;
MethodInfo m35634_MI = 
{
	"IndexOf", NULL, &t3784_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3784_m35634_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35634_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t694_0_0_0;
static ParameterInfo t3784_m35635_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35635_GM;
MethodInfo m35635_MI = 
{
	"Insert", NULL, &t3784_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3784_m35635_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35635_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3784_m35636_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35636_GM;
MethodInfo m35636_MI = 
{
	"RemoveAt", NULL, &t3784_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t3784_m35636_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35636_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3784_m35632_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t694_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35632_GM;
MethodInfo m35632_MI = 
{
	"get_Item", NULL, &t3784_TI, &t694_0_0_0, RuntimeInvoker_t5_t110, t3784_m35632_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35632_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t694_0_0_0;
static ParameterInfo t3784_m35633_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35633_GM;
MethodInfo m35633_MI = 
{
	"set_Item", NULL, &t3784_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3784_m35633_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35633_GM};
static MethodInfo* t3784_MIs[] =
{
	&m35634_MI,
	&m35635_MI,
	&m35636_MI,
	&m35632_MI,
	&m35633_MI,
	NULL
};
static TypeInfo* t3784_ITIs[] = 
{
	&t739_TI,
	&t3778_TI,
	&t3776_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3784_0_0_0;
extern Il2CppType t3784_1_0_0;
struct t3784;
extern Il2CppGenericClass t3784_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t3784_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t3784_MIs, t3784_PIs, NULL, NULL, NULL, NULL, NULL, &t3784_TI, t3784_ITIs, NULL, &t2240__CustomAttributeCache, &t3784_TI, &t3784_0_0_0, &t3784_1_0_0, NULL, &t3784_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m21542_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>
extern Il2CppType t708_0_0_1;
FieldInfo t3782_f0_FieldInfo = 
{
	"l", &t708_0_0_1, &t3782_TI, offsetof(t3782, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3782_f1_FieldInfo = 
{
	"next", &t110_0_0_1, &t3782_TI, offsetof(t3782, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3782_f2_FieldInfo = 
{
	"ver", &t110_0_0_1, &t3782_TI, offsetof(t3782, f2) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t694_0_0_1;
FieldInfo t3782_f3_FieldInfo = 
{
	"current", &t694_0_0_1, &t3782_TI, offsetof(t3782, f3) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3782_FIs[] =
{
	&t3782_f0_FieldInfo,
	&t3782_f1_FieldInfo,
	&t3782_f2_FieldInfo,
	&t3782_f3_FieldInfo,
	NULL
};
extern MethodInfo m21540_MI;
static PropertyInfo t3782____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3782_TI, "System.Collections.IEnumerator.Current", &m21540_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21544_MI;
static PropertyInfo t3782____Current_PropertyInfo = 
{
	&t3782_TI, "Current", &m21544_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3782_PIs[] =
{
	&t3782____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3782____Current_PropertyInfo,
	NULL
};
extern Il2CppType t708_0_0_0;
static ParameterInfo t3782_m21539_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t708_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21539_GM;
MethodInfo m21539_MI = 
{
	".ctor", (methodPointerType)&m11749_gshared, &t3782_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3782_m21539_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21539_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21540_GM;
MethodInfo m21540_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11750_gshared, &t3782_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21540_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21541_GM;
MethodInfo m21541_MI = 
{
	"Dispose", (methodPointerType)&m11751_gshared, &t3782_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21541_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21542_GM;
MethodInfo m21542_MI = 
{
	"VerifyState", (methodPointerType)&m11752_gshared, &t3782_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21542_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21543_GM;
MethodInfo m21543_MI = 
{
	"MoveNext", (methodPointerType)&m11753_gshared, &t3782_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21543_GM};
extern Il2CppType t694_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21544_GM;
MethodInfo m21544_MI = 
{
	"get_Current", (methodPointerType)&m11754_gshared, &t3782_TI, &t694_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21544_GM};
static MethodInfo* t3782_MIs[] =
{
	&m21539_MI,
	&m21540_MI,
	&m21541_MI,
	&m21542_MI,
	&m21543_MI,
	&m21544_MI,
	NULL
};
extern MethodInfo m21543_MI;
extern MethodInfo m21541_MI;
static MethodInfo* t3782_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21540_MI,
	&m21543_MI,
	&m21541_MI,
	&m21544_MI,
};
static TypeInfo* t3782_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t3777_TI,
};
static Il2CppInterfaceOffsetPair t3782_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t3777_TI, 7},
};
extern TypeInfo t694_TI;
extern TypeInfo t3782_TI;
static Il2CppRGCTXData t3782_RGCTXData[3] = 
{
	&m21542_MI/* Method Usage */,
	&t694_TI/* Class Usage */,
	&t3782_TI/* Class Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3782_0_0_0;
extern Il2CppType t3782_1_0_0;
extern Il2CppGenericClass t3782_GC;
TypeInfo t3782_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t3782_MIs, t3782_PIs, t3782_FIs, NULL, &t267_TI, NULL, &t1524_TI, &t3782_TI, t3782_ITIs, t3782_VT, &EmptyCustomAttributesCache, &t3782_TI, &t3782_0_0_0, &t3782_1_0_0, t3782_IOs, &t3782_GC, NULL, NULL, NULL, t3782_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3782)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif

#include "t3785MD.h"
extern MethodInfo m21574_MI;
extern MethodInfo m21606_MI;
extern MethodInfo m35630_MI;
extern MethodInfo m35634_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>
extern Il2CppType t3784_0_0_1;
FieldInfo t3779_f0_FieldInfo = 
{
	"list", &t3784_0_0_1, &t3779_TI, offsetof(t3779, f0), &EmptyCustomAttributesCache};
static FieldInfo* t3779_FIs[] =
{
	&t3779_f0_FieldInfo,
	NULL
};
extern MethodInfo m21551_MI;
extern MethodInfo m21552_MI;
static PropertyInfo t3779____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t3779_TI, "System.Collections.Generic.IList<T>.Item", &m21551_MI, &m21552_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21553_MI;
static PropertyInfo t3779____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t3779_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m21553_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21563_MI;
static PropertyInfo t3779____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t3779_TI, "System.Collections.ICollection.IsSynchronized", &m21563_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21564_MI;
static PropertyInfo t3779____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t3779_TI, "System.Collections.ICollection.SyncRoot", &m21564_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21565_MI;
static PropertyInfo t3779____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t3779_TI, "System.Collections.IList.IsFixedSize", &m21565_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21566_MI;
static PropertyInfo t3779____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t3779_TI, "System.Collections.IList.IsReadOnly", &m21566_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21567_MI;
extern MethodInfo m21568_MI;
static PropertyInfo t3779____System_Collections_IList_Item_PropertyInfo = 
{
	&t3779_TI, "System.Collections.IList.Item", &m21567_MI, &m21568_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21573_MI;
static PropertyInfo t3779____Count_PropertyInfo = 
{
	&t3779_TI, "Count", &m21573_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3779____Item_PropertyInfo = 
{
	&t3779_TI, "Item", &m21574_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3779_PIs[] =
{
	&t3779____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t3779____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t3779____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t3779____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t3779____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t3779____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t3779____System_Collections_IList_Item_PropertyInfo,
	&t3779____Count_PropertyInfo,
	&t3779____Item_PropertyInfo,
	NULL
};
extern Il2CppType t3784_0_0_0;
static ParameterInfo t3779_m21545_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t3784_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21545_GM;
MethodInfo m21545_MI = 
{
	".ctor", (methodPointerType)&m11755_gshared, &t3779_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3779_m21545_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21545_GM};
extern Il2CppType t694_0_0_0;
static ParameterInfo t3779_m21546_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21546_GM;
MethodInfo m21546_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m11756_gshared, &t3779_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3779_m21546_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21546_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21547_GM;
MethodInfo m21547_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m11757_gshared, &t3779_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21547_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t694_0_0_0;
static ParameterInfo t3779_m21548_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21548_GM;
MethodInfo m21548_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m11758_gshared, &t3779_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3779_m21548_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21548_GM};
extern Il2CppType t694_0_0_0;
static ParameterInfo t3779_m21549_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21549_GM;
MethodInfo m21549_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m11759_gshared, &t3779_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3779_m21549_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21549_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3779_m21550_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21550_GM;
MethodInfo m21550_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m11760_gshared, &t3779_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t3779_m21550_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21550_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3779_m21551_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t694_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21551_GM;
MethodInfo m21551_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m11761_gshared, &t3779_TI, &t694_0_0_0, RuntimeInvoker_t5_t110, t3779_m21551_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21551_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t694_0_0_0;
static ParameterInfo t3779_m21552_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21552_GM;
MethodInfo m21552_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m11762_gshared, &t3779_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3779_m21552_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21552_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21553_GM;
MethodInfo m21553_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11763_gshared, &t3779_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21553_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t3779_m21554_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21554_GM;
MethodInfo m21554_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11764_gshared, &t3779_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t3779_m21554_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21554_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21555_GM;
MethodInfo m21555_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11765_gshared, &t3779_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21555_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3779_m21556_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21556_GM;
MethodInfo m21556_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11766_gshared, &t3779_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3779_m21556_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21556_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21557_GM;
MethodInfo m21557_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m11767_gshared, &t3779_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21557_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3779_m21558_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21558_GM;
MethodInfo m21558_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11768_gshared, &t3779_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3779_m21558_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21558_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3779_m21559_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21559_GM;
MethodInfo m21559_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11769_gshared, &t3779_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3779_m21559_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21559_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3779_m21560_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21560_GM;
MethodInfo m21560_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11770_gshared, &t3779_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3779_m21560_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21560_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3779_m21561_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21561_GM;
MethodInfo m21561_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11771_gshared, &t3779_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3779_m21561_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21561_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3779_m21562_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21562_GM;
MethodInfo m21562_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m11772_gshared, &t3779_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t3779_m21562_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21562_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21563_GM;
MethodInfo m21563_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11773_gshared, &t3779_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21563_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21564_GM;
MethodInfo m21564_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11774_gshared, &t3779_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21564_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21565_GM;
MethodInfo m21565_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11775_gshared, &t3779_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21565_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21566_GM;
MethodInfo m21566_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11776_gshared, &t3779_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21566_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3779_m21567_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21567_GM;
MethodInfo m21567_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11777_gshared, &t3779_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t3779_m21567_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21567_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3779_m21568_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21568_GM;
MethodInfo m21568_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11778_gshared, &t3779_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3779_m21568_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21568_GM};
extern Il2CppType t694_0_0_0;
static ParameterInfo t3779_m21569_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21569_GM;
MethodInfo m21569_MI = 
{
	"Contains", (methodPointerType)&m11779_gshared, &t3779_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3779_m21569_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21569_GM};
extern Il2CppType t3775_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t3779_m21570_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3775_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21570_GM;
MethodInfo m21570_MI = 
{
	"CopyTo", (methodPointerType)&m11780_gshared, &t3779_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t3779_m21570_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21570_GM};
extern Il2CppType t3777_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21571_GM;
MethodInfo m21571_MI = 
{
	"GetEnumerator", (methodPointerType)&m11781_gshared, &t3779_TI, &t3777_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21571_GM};
extern Il2CppType t694_0_0_0;
static ParameterInfo t3779_m21572_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21572_GM;
MethodInfo m21572_MI = 
{
	"IndexOf", (methodPointerType)&m11782_gshared, &t3779_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3779_m21572_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21572_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21573_GM;
MethodInfo m21573_MI = 
{
	"get_Count", (methodPointerType)&m11783_gshared, &t3779_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21573_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3779_m21574_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t694_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21574_GM;
MethodInfo m21574_MI = 
{
	"get_Item", (methodPointerType)&m11784_gshared, &t3779_TI, &t694_0_0_0, RuntimeInvoker_t5_t110, t3779_m21574_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21574_GM};
static MethodInfo* t3779_MIs[] =
{
	&m21545_MI,
	&m21546_MI,
	&m21547_MI,
	&m21548_MI,
	&m21549_MI,
	&m21550_MI,
	&m21551_MI,
	&m21552_MI,
	&m21553_MI,
	&m21554_MI,
	&m21555_MI,
	&m21556_MI,
	&m21557_MI,
	&m21558_MI,
	&m21559_MI,
	&m21560_MI,
	&m21561_MI,
	&m21562_MI,
	&m21563_MI,
	&m21564_MI,
	&m21565_MI,
	&m21566_MI,
	&m21567_MI,
	&m21568_MI,
	&m21569_MI,
	&m21570_MI,
	&m21571_MI,
	&m21572_MI,
	&m21573_MI,
	&m21574_MI,
	NULL
};
extern MethodInfo m21555_MI;
extern MethodInfo m21554_MI;
extern MethodInfo m21556_MI;
extern MethodInfo m21557_MI;
extern MethodInfo m21558_MI;
extern MethodInfo m21559_MI;
extern MethodInfo m21560_MI;
extern MethodInfo m21561_MI;
extern MethodInfo m21562_MI;
extern MethodInfo m21546_MI;
extern MethodInfo m21547_MI;
extern MethodInfo m21569_MI;
extern MethodInfo m21570_MI;
extern MethodInfo m21549_MI;
extern MethodInfo m21572_MI;
extern MethodInfo m21548_MI;
extern MethodInfo m21550_MI;
extern MethodInfo m21571_MI;
static MethodInfo* t3779_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21555_MI,
	&m21573_MI,
	&m21563_MI,
	&m21564_MI,
	&m21554_MI,
	&m21565_MI,
	&m21566_MI,
	&m21567_MI,
	&m21568_MI,
	&m21556_MI,
	&m21557_MI,
	&m21558_MI,
	&m21559_MI,
	&m21560_MI,
	&m21561_MI,
	&m21562_MI,
	&m21573_MI,
	&m21553_MI,
	&m21546_MI,
	&m21547_MI,
	&m21569_MI,
	&m21570_MI,
	&m21549_MI,
	&m21572_MI,
	&m21548_MI,
	&m21550_MI,
	&m21551_MI,
	&m21552_MI,
	&m21571_MI,
	&m21574_MI,
};
static TypeInfo* t3779_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t3778_TI,
	&t3784_TI,
	&t3776_TI,
};
static Il2CppInterfaceOffsetPair t3779_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t3778_TI, 20},
	{ &t3784_TI, 27},
	{ &t3776_TI, 32},
};
extern TypeInfo t694_TI;
static Il2CppRGCTXData t3779_RGCTXData[9] = 
{
	&m21574_MI/* Method Usage */,
	&m21606_MI/* Method Usage */,
	&t694_TI/* Class Usage */,
	&m35630_MI/* Method Usage */,
	&m35634_MI/* Method Usage */,
	&m35632_MI/* Method Usage */,
	&m35624_MI/* Method Usage */,
	&m35625_MI/* Method Usage */,
	&m35623_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3779_0_0_0;
extern Il2CppType t3779_1_0_0;
struct t3779;
extern Il2CppGenericClass t3779_GC;
extern CustomAttributesCache t1526__CustomAttributeCache;
TypeInfo t3779_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t3779_MIs, t3779_PIs, t3779_FIs, NULL, &t5_TI, NULL, NULL, &t3779_TI, t3779_ITIs, t3779_VT, &t1526__CustomAttributeCache, &t3779_TI, &t3779_0_0_0, &t3779_1_0_0, t3779_IOs, &t3779_GC, NULL, NULL, NULL, t3779_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3779), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t3785.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3785_TI;

extern MethodInfo m21609_MI;
extern MethodInfo m21610_MI;
extern MethodInfo m21607_MI;
extern MethodInfo m21605_MI;
extern MethodInfo m3632_MI;
extern MethodInfo m21598_MI;
extern MethodInfo m21608_MI;
extern MethodInfo m21596_MI;
extern MethodInfo m21601_MI;
extern MethodInfo m21592_MI;
extern MethodInfo m35629_MI;
extern MethodInfo m35635_MI;
extern MethodInfo m35636_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>
extern Il2CppType t3784_0_0_1;
FieldInfo t3785_f0_FieldInfo = 
{
	"list", &t3784_0_0_1, &t3785_TI, offsetof(t3785, f0), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_1;
FieldInfo t3785_f1_FieldInfo = 
{
	"syncRoot", &t5_0_0_1, &t3785_TI, offsetof(t3785, f1), &EmptyCustomAttributesCache};
static FieldInfo* t3785_FIs[] =
{
	&t3785_f0_FieldInfo,
	&t3785_f1_FieldInfo,
	NULL
};
extern MethodInfo m21576_MI;
static PropertyInfo t3785____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t3785_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m21576_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21584_MI;
static PropertyInfo t3785____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t3785_TI, "System.Collections.ICollection.IsSynchronized", &m21584_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21585_MI;
static PropertyInfo t3785____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t3785_TI, "System.Collections.ICollection.SyncRoot", &m21585_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21586_MI;
static PropertyInfo t3785____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t3785_TI, "System.Collections.IList.IsFixedSize", &m21586_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21587_MI;
static PropertyInfo t3785____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t3785_TI, "System.Collections.IList.IsReadOnly", &m21587_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21588_MI;
extern MethodInfo m21589_MI;
static PropertyInfo t3785____System_Collections_IList_Item_PropertyInfo = 
{
	&t3785_TI, "System.Collections.IList.Item", &m21588_MI, &m21589_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21602_MI;
static PropertyInfo t3785____Count_PropertyInfo = 
{
	&t3785_TI, "Count", &m21602_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21603_MI;
extern MethodInfo m21604_MI;
static PropertyInfo t3785____Item_PropertyInfo = 
{
	&t3785_TI, "Item", &m21603_MI, &m21604_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3785_PIs[] =
{
	&t3785____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t3785____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t3785____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t3785____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t3785____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t3785____System_Collections_IList_Item_PropertyInfo,
	&t3785____Count_PropertyInfo,
	&t3785____Item_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21575_GM;
MethodInfo m21575_MI = 
{
	".ctor", (methodPointerType)&m11785_gshared, &t3785_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21575_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21576_GM;
MethodInfo m21576_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11786_gshared, &t3785_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21576_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t3785_m21577_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21577_GM;
MethodInfo m21577_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11787_gshared, &t3785_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t3785_m21577_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21577_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21578_GM;
MethodInfo m21578_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11788_gshared, &t3785_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21578_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3785_m21579_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21579_GM;
MethodInfo m21579_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11789_gshared, &t3785_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3785_m21579_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21579_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3785_m21580_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21580_GM;
MethodInfo m21580_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11790_gshared, &t3785_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3785_m21580_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21580_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3785_m21581_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21581_GM;
MethodInfo m21581_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11791_gshared, &t3785_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3785_m21581_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21581_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3785_m21582_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21582_GM;
MethodInfo m21582_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11792_gshared, &t3785_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3785_m21582_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21582_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3785_m21583_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21583_GM;
MethodInfo m21583_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11793_gshared, &t3785_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3785_m21583_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21583_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21584_GM;
MethodInfo m21584_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11794_gshared, &t3785_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21584_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21585_GM;
MethodInfo m21585_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11795_gshared, &t3785_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21585_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21586_GM;
MethodInfo m21586_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11796_gshared, &t3785_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21586_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21587_GM;
MethodInfo m21587_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11797_gshared, &t3785_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21587_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3785_m21588_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21588_GM;
MethodInfo m21588_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11798_gshared, &t3785_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t3785_m21588_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21588_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3785_m21589_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21589_GM;
MethodInfo m21589_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11799_gshared, &t3785_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3785_m21589_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21589_GM};
extern Il2CppType t694_0_0_0;
static ParameterInfo t3785_m21590_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21590_GM;
MethodInfo m21590_MI = 
{
	"Add", (methodPointerType)&m11800_gshared, &t3785_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3785_m21590_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21590_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21591_GM;
MethodInfo m21591_MI = 
{
	"Clear", (methodPointerType)&m11801_gshared, &t3785_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21591_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21592_GM;
MethodInfo m21592_MI = 
{
	"ClearItems", (methodPointerType)&m11802_gshared, &t3785_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21592_GM};
extern Il2CppType t694_0_0_0;
static ParameterInfo t3785_m21593_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21593_GM;
MethodInfo m21593_MI = 
{
	"Contains", (methodPointerType)&m11803_gshared, &t3785_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3785_m21593_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21593_GM};
extern Il2CppType t3775_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t3785_m21594_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3775_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21594_GM;
MethodInfo m21594_MI = 
{
	"CopyTo", (methodPointerType)&m11804_gshared, &t3785_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t3785_m21594_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21594_GM};
extern Il2CppType t3777_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21595_GM;
MethodInfo m21595_MI = 
{
	"GetEnumerator", (methodPointerType)&m11805_gshared, &t3785_TI, &t3777_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21595_GM};
extern Il2CppType t694_0_0_0;
static ParameterInfo t3785_m21596_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21596_GM;
MethodInfo m21596_MI = 
{
	"IndexOf", (methodPointerType)&m11806_gshared, &t3785_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3785_m21596_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21596_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t694_0_0_0;
static ParameterInfo t3785_m21597_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21597_GM;
MethodInfo m21597_MI = 
{
	"Insert", (methodPointerType)&m11807_gshared, &t3785_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3785_m21597_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21597_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t694_0_0_0;
static ParameterInfo t3785_m21598_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21598_GM;
MethodInfo m21598_MI = 
{
	"InsertItem", (methodPointerType)&m11808_gshared, &t3785_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3785_m21598_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21598_GM};
extern Il2CppType t694_0_0_0;
static ParameterInfo t3785_m21599_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21599_GM;
MethodInfo m21599_MI = 
{
	"Remove", (methodPointerType)&m11809_gshared, &t3785_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3785_m21599_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21599_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3785_m21600_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21600_GM;
MethodInfo m21600_MI = 
{
	"RemoveAt", (methodPointerType)&m11810_gshared, &t3785_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t3785_m21600_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21600_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3785_m21601_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21601_GM;
MethodInfo m21601_MI = 
{
	"RemoveItem", (methodPointerType)&m11811_gshared, &t3785_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t3785_m21601_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21601_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21602_GM;
MethodInfo m21602_MI = 
{
	"get_Count", (methodPointerType)&m11812_gshared, &t3785_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21602_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3785_m21603_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t694_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21603_GM;
MethodInfo m21603_MI = 
{
	"get_Item", (methodPointerType)&m11813_gshared, &t3785_TI, &t694_0_0_0, RuntimeInvoker_t5_t110, t3785_m21603_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21603_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t694_0_0_0;
static ParameterInfo t3785_m21604_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21604_GM;
MethodInfo m21604_MI = 
{
	"set_Item", (methodPointerType)&m11814_gshared, &t3785_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3785_m21604_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21604_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t694_0_0_0;
static ParameterInfo t3785_m21605_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21605_GM;
MethodInfo m21605_MI = 
{
	"SetItem", (methodPointerType)&m11815_gshared, &t3785_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3785_m21605_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21605_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3785_m21606_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21606_GM;
MethodInfo m21606_MI = 
{
	"IsValidItem", (methodPointerType)&m11816_gshared, &t3785_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3785_m21606_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21606_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3785_m21607_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t694_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21607_GM;
MethodInfo m21607_MI = 
{
	"ConvertItem", (methodPointerType)&m11817_gshared, &t3785_TI, &t694_0_0_0, RuntimeInvoker_t5_t5, t3785_m21607_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21607_GM};
extern Il2CppType t3784_0_0_0;
static ParameterInfo t3785_m21608_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t3784_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21608_GM;
MethodInfo m21608_MI = 
{
	"CheckWritable", (methodPointerType)&m11818_gshared, &t3785_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3785_m21608_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21608_GM};
extern Il2CppType t3784_0_0_0;
static ParameterInfo t3785_m21609_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t3784_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21609_GM;
MethodInfo m21609_MI = 
{
	"IsSynchronized", (methodPointerType)&m11819_gshared, &t3785_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3785_m21609_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21609_GM};
extern Il2CppType t3784_0_0_0;
static ParameterInfo t3785_m21610_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t3784_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21610_GM;
MethodInfo m21610_MI = 
{
	"IsFixedSize", (methodPointerType)&m11820_gshared, &t3785_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3785_m21610_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21610_GM};
static MethodInfo* t3785_MIs[] =
{
	&m21575_MI,
	&m21576_MI,
	&m21577_MI,
	&m21578_MI,
	&m21579_MI,
	&m21580_MI,
	&m21581_MI,
	&m21582_MI,
	&m21583_MI,
	&m21584_MI,
	&m21585_MI,
	&m21586_MI,
	&m21587_MI,
	&m21588_MI,
	&m21589_MI,
	&m21590_MI,
	&m21591_MI,
	&m21592_MI,
	&m21593_MI,
	&m21594_MI,
	&m21595_MI,
	&m21596_MI,
	&m21597_MI,
	&m21598_MI,
	&m21599_MI,
	&m21600_MI,
	&m21601_MI,
	&m21602_MI,
	&m21603_MI,
	&m21604_MI,
	&m21605_MI,
	&m21606_MI,
	&m21607_MI,
	&m21608_MI,
	&m21609_MI,
	&m21610_MI,
	NULL
};
extern MethodInfo m21578_MI;
extern MethodInfo m21577_MI;
extern MethodInfo m21579_MI;
extern MethodInfo m21591_MI;
extern MethodInfo m21580_MI;
extern MethodInfo m21581_MI;
extern MethodInfo m21582_MI;
extern MethodInfo m21583_MI;
extern MethodInfo m21600_MI;
extern MethodInfo m21590_MI;
extern MethodInfo m21593_MI;
extern MethodInfo m21594_MI;
extern MethodInfo m21599_MI;
extern MethodInfo m21597_MI;
extern MethodInfo m21595_MI;
static MethodInfo* t3785_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21578_MI,
	&m21602_MI,
	&m21584_MI,
	&m21585_MI,
	&m21577_MI,
	&m21586_MI,
	&m21587_MI,
	&m21588_MI,
	&m21589_MI,
	&m21579_MI,
	&m21591_MI,
	&m21580_MI,
	&m21581_MI,
	&m21582_MI,
	&m21583_MI,
	&m21600_MI,
	&m21602_MI,
	&m21576_MI,
	&m21590_MI,
	&m21591_MI,
	&m21593_MI,
	&m21594_MI,
	&m21599_MI,
	&m21596_MI,
	&m21597_MI,
	&m21600_MI,
	&m21603_MI,
	&m21604_MI,
	&m21595_MI,
	&m21592_MI,
	&m21598_MI,
	&m21601_MI,
	&m21605_MI,
};
static TypeInfo* t3785_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t3778_TI,
	&t3784_TI,
	&t3776_TI,
};
static Il2CppInterfaceOffsetPair t3785_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t3778_TI, 20},
	{ &t3784_TI, 27},
	{ &t3776_TI, 32},
};
extern TypeInfo t708_TI;
extern TypeInfo t694_TI;
static Il2CppRGCTXData t3785_RGCTXData[25] = 
{
	&t708_TI/* Class Usage */,
	&m3632_MI/* Method Usage */,
	&m35627_MI/* Method Usage */,
	&m35625_MI/* Method Usage */,
	&m35623_MI/* Method Usage */,
	&m21607_MI/* Method Usage */,
	&m21598_MI/* Method Usage */,
	&m21606_MI/* Method Usage */,
	&t694_TI/* Class Usage */,
	&m35630_MI/* Method Usage */,
	&m35634_MI/* Method Usage */,
	&m21608_MI/* Method Usage */,
	&m21596_MI/* Method Usage */,
	&m21601_MI/* Method Usage */,
	&m21609_MI/* Method Usage */,
	&m21610_MI/* Method Usage */,
	&m35632_MI/* Method Usage */,
	&m21605_MI/* Method Usage */,
	&m21592_MI/* Method Usage */,
	&m35629_MI/* Method Usage */,
	&m35624_MI/* Method Usage */,
	&m35635_MI/* Method Usage */,
	&m35636_MI/* Method Usage */,
	&m35633_MI/* Method Usage */,
	&t694_0_0_0/* Type Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3785_0_0_0;
extern Il2CppType t3785_1_0_0;
struct t3785;
extern Il2CppGenericClass t3785_GC;
extern CustomAttributesCache t1525__CustomAttributeCache;
TypeInfo t3785_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t3785_MIs, t3785_PIs, t3785_FIs, NULL, &t5_TI, NULL, NULL, &t3785_TI, t3785_ITIs, t3785_VT, &t1525__CustomAttributeCache, &t3785_TI, &t3785_0_0_0, &t3785_1_0_0, t3785_IOs, &t3785_GC, NULL, NULL, NULL, t3785_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3785), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3786_TI;
#include "t3786MD.h"

#include "t3787.h"
extern TypeInfo t7710_TI;
extern TypeInfo t3787_TI;
#include "t3787MD.h"
extern Il2CppType t7710_0_0_0;
extern MethodInfo m21616_MI;
extern MethodInfo m35637_MI;
extern MethodInfo m27757_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.BaseInvokableCall>
extern Il2CppType t3786_0_0_49;
FieldInfo t3786_f0_FieldInfo = 
{
	"_default", &t3786_0_0_49, &t3786_TI, offsetof(t3786_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t3786_FIs[] =
{
	&t3786_f0_FieldInfo,
	NULL
};
extern MethodInfo m21615_MI;
static PropertyInfo t3786____Default_PropertyInfo = 
{
	&t3786_TI, "Default", &m21615_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3786_PIs[] =
{
	&t3786____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21611_GM;
MethodInfo m21611_MI = 
{
	".ctor", (methodPointerType)&m11821_gshared, &t3786_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21611_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21612_GM;
MethodInfo m21612_MI = 
{
	".cctor", (methodPointerType)&m11822_gshared, &t3786_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21612_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3786_m21613_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21613_GM;
MethodInfo m21613_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m11823_gshared, &t3786_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3786_m21613_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21613_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3786_m21614_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21614_GM;
MethodInfo m21614_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m11824_gshared, &t3786_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t3786_m21614_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21614_GM};
extern Il2CppType t694_0_0_0;
static ParameterInfo t3786_m35637_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35637_GM;
MethodInfo m35637_MI = 
{
	"GetHashCode", NULL, &t3786_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3786_m35637_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35637_GM};
extern Il2CppType t694_0_0_0;
extern Il2CppType t694_0_0_0;
static ParameterInfo t3786_m27757_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m27757_GM;
MethodInfo m27757_MI = 
{
	"Equals", NULL, &t3786_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t3786_m27757_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m27757_GM};
extern Il2CppType t3786_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21615_GM;
MethodInfo m21615_MI = 
{
	"get_Default", (methodPointerType)&m11825_gshared, &t3786_TI, &t3786_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21615_GM};
static MethodInfo* t3786_MIs[] =
{
	&m21611_MI,
	&m21612_MI,
	&m21613_MI,
	&m21614_MI,
	&m35637_MI,
	&m27757_MI,
	&m21615_MI,
	NULL
};
extern MethodInfo m21614_MI;
extern MethodInfo m21613_MI;
static MethodInfo* t3786_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m27757_MI,
	&m35637_MI,
	&m21614_MI,
	&m21613_MI,
	NULL,
	NULL,
};
extern TypeInfo t7711_TI;
static TypeInfo* t3786_ITIs[] = 
{
	&t7711_TI,
	&t998_TI,
};
static Il2CppInterfaceOffsetPair t3786_IOs[] = 
{
	{ &t7711_TI, 4},
	{ &t998_TI, 6},
};
extern TypeInfo t3786_TI;
extern TypeInfo t3786_TI;
extern TypeInfo t3787_TI;
extern TypeInfo t694_TI;
static Il2CppRGCTXData t3786_RGCTXData[9] = 
{
	&t7710_0_0_0/* Type Usage */,
	&t694_0_0_0/* Type Usage */,
	&t3786_TI/* Class Usage */,
	&t3786_TI/* Static Usage */,
	&t3787_TI/* Class Usage */,
	&m21616_MI/* Method Usage */,
	&t694_TI/* Class Usage */,
	&m35637_MI/* Method Usage */,
	&m27757_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3786_0_0_0;
extern Il2CppType t3786_1_0_0;
struct t3786;
extern Il2CppGenericClass t3786_GC;
TypeInfo t3786_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t3786_MIs, t3786_PIs, t3786_FIs, NULL, &t5_TI, NULL, NULL, &t3786_TI, t3786_ITIs, t3786_VT, &EmptyCustomAttributesCache, &t3786_TI, &t3786_0_0_0, &t3786_1_0_0, t3786_IOs, &t3786_GC, NULL, NULL, NULL, t3786_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3786), 0, -1, sizeof(t3786_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.Events.BaseInvokableCall>
extern Il2CppType t694_0_0_0;
extern Il2CppType t694_0_0_0;
static ParameterInfo t7711_m35638_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35638_GM;
MethodInfo m35638_MI = 
{
	"Equals", NULL, &t7711_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t7711_m35638_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35638_GM};
extern Il2CppType t694_0_0_0;
static ParameterInfo t7711_m35639_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35639_GM;
MethodInfo m35639_MI = 
{
	"GetHashCode", NULL, &t7711_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7711_m35639_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35639_GM};
static MethodInfo* t7711_MIs[] =
{
	&m35638_MI,
	&m35639_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7711_0_0_0;
extern Il2CppType t7711_1_0_0;
struct t7711;
extern Il2CppGenericClass t7711_GC;
TypeInfo t7711_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t7711_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7711_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7711_TI, &t7711_0_0_0, &t7711_1_0_0, NULL, &t7711_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.IEquatable`1<UnityEngine.Events.BaseInvokableCall>
extern Il2CppType t694_0_0_0;
static ParameterInfo t7710_m35640_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35640_GM;
MethodInfo m35640_MI = 
{
	"Equals", NULL, &t7710_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7710_m35640_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35640_GM};
static MethodInfo* t7710_MIs[] =
{
	&m35640_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7710_1_0_0;
struct t7710;
extern Il2CppGenericClass t7710_GC;
TypeInfo t7710_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t7710_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7710_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7710_TI, &t7710_0_0_0, &t7710_1_0_0, NULL, &t7710_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m21611_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Events.BaseInvokableCall>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21616_GM;
MethodInfo m21616_MI = 
{
	".ctor", (methodPointerType)&m11856_gshared, &t3787_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21616_GM};
extern Il2CppType t694_0_0_0;
static ParameterInfo t3787_m21617_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21617_GM;
MethodInfo m21617_MI = 
{
	"GetHashCode", (methodPointerType)&m11857_gshared, &t3787_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3787_m21617_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21617_GM};
extern Il2CppType t694_0_0_0;
extern Il2CppType t694_0_0_0;
static ParameterInfo t3787_m21618_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21618_GM;
MethodInfo m21618_MI = 
{
	"Equals", (methodPointerType)&m11858_gshared, &t3787_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t3787_m21618_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21618_GM};
static MethodInfo* t3787_MIs[] =
{
	&m21616_MI,
	&m21617_MI,
	&m21618_MI,
	NULL
};
extern MethodInfo m21618_MI;
extern MethodInfo m21617_MI;
static MethodInfo* t3787_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21618_MI,
	&m21617_MI,
	&m21614_MI,
	&m21613_MI,
	&m21617_MI,
	&m21618_MI,
};
static Il2CppInterfaceOffsetPair t3787_IOs[] = 
{
	{ &t7711_TI, 4},
	{ &t998_TI, 6},
};
extern TypeInfo t3786_TI;
extern TypeInfo t3786_TI;
extern TypeInfo t3787_TI;
extern TypeInfo t694_TI;
extern TypeInfo t694_TI;
static Il2CppRGCTXData t3787_RGCTXData[11] = 
{
	&t7710_0_0_0/* Type Usage */,
	&t694_0_0_0/* Type Usage */,
	&t3786_TI/* Class Usage */,
	&t3786_TI/* Static Usage */,
	&t3787_TI/* Class Usage */,
	&m21616_MI/* Method Usage */,
	&t694_TI/* Class Usage */,
	&m35637_MI/* Method Usage */,
	&m27757_MI/* Method Usage */,
	&m21611_MI/* Method Usage */,
	&t694_TI/* Class Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3787_0_0_0;
extern Il2CppType t3787_1_0_0;
struct t3787;
extern Il2CppGenericClass t3787_GC;
TypeInfo t3787_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t3787_MIs, NULL, NULL, NULL, &t3786_TI, NULL, &t1519_TI, &t3787_TI, NULL, t3787_VT, &EmptyCustomAttributesCache, &t3787_TI, &t3787_0_0_0, &t3787_1_0_0, t3787_IOs, &t3787_GC, NULL, NULL, NULL, t3787_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3787), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t799_m3637_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m3637_GM;
MethodInfo m3637_MI = 
{
	".ctor", (methodPointerType)&m11859_gshared, &t799_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t799_m3637_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m3637_GM};
extern Il2CppType t694_0_0_0;
static ParameterInfo t799_m21619_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21619_GM;
MethodInfo m21619_MI = 
{
	"Invoke", (methodPointerType)&m11860_gshared, &t799_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t799_m21619_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21619_GM};
extern Il2CppType t694_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t799_m21620_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21620_GM;
MethodInfo m21620_MI = 
{
	"BeginInvoke", (methodPointerType)&m11861_gshared, &t799_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t799_m21620_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m21620_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t799_m21621_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21621_GM;
MethodInfo m21621_MI = 
{
	"EndInvoke", (methodPointerType)&m11862_gshared, &t799_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t799_m21621_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21621_GM};
static MethodInfo* t799_MIs[] =
{
	&m3637_MI,
	&m21619_MI,
	&m21620_MI,
	&m21621_MI,
	NULL
};
extern MethodInfo m21620_MI;
extern MethodInfo m21621_MI;
static MethodInfo* t799_VT[] =
{
	&m2341_MI,
	&m465_MI,
	&m2342_MI,
	&m467_MI,
	&m2343_MI,
	&m2344_MI,
	&m2343_MI,
	&m2345_MI,
	&m2346_MI,
	&m2347_MI,
	&m21619_MI,
	&m21620_MI,
	&m21621_MI,
};
static Il2CppInterfaceOffsetPair t799_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t799_1_0_0;
struct t799;
extern Il2CppGenericClass t799_GC;
TypeInfo t799_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t799_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t799_TI, NULL, t799_VT, &EmptyCustomAttributesCache, &t799_TI, &t799_0_0_0, &t799_1_0_0, t799_IOs, &t799_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t799), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Action`1<UnityEngine.Events.BaseInvokableCall>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t3780_m21622_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21622_GM;
MethodInfo m21622_MI = 
{
	".ctor", (methodPointerType)&m11863_gshared, &t3780_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t3780_m21622_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21622_GM};
extern Il2CppType t694_0_0_0;
static ParameterInfo t3780_m21623_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21623_GM;
MethodInfo m21623_MI = 
{
	"Invoke", (methodPointerType)&m11864_gshared, &t3780_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3780_m21623_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21623_GM};
extern Il2CppType t694_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3780_m21624_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21624_GM;
MethodInfo m21624_MI = 
{
	"BeginInvoke", (methodPointerType)&m11865_gshared, &t3780_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t3780_m21624_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m21624_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t3780_m21625_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21625_GM;
MethodInfo m21625_MI = 
{
	"EndInvoke", (methodPointerType)&m11866_gshared, &t3780_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3780_m21625_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21625_GM};
static MethodInfo* t3780_MIs[] =
{
	&m21622_MI,
	&m21623_MI,
	&m21624_MI,
	&m21625_MI,
	NULL
};
extern MethodInfo m21624_MI;
extern MethodInfo m21625_MI;
static MethodInfo* t3780_VT[] =
{
	&m2341_MI,
	&m465_MI,
	&m2342_MI,
	&m467_MI,
	&m2343_MI,
	&m2344_MI,
	&m2343_MI,
	&m2345_MI,
	&m2346_MI,
	&m2347_MI,
	&m21623_MI,
	&m21624_MI,
	&m21625_MI,
};
static Il2CppInterfaceOffsetPair t3780_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3780_1_0_0;
struct t3780;
extern Il2CppGenericClass t3780_GC;
TypeInfo t3780_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Action`1", "System", t3780_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t3780_TI, NULL, t3780_VT, &EmptyCustomAttributesCache, &t3780_TI, &t3780_0_0_0, &t3780_1_0_0, t3780_IOs, &t3780_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3780), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif

#include "t3789.h"
extern TypeInfo t5260_TI;
extern TypeInfo t3789_TI;
#include "t3789MD.h"
extern Il2CppType t5260_0_0_0;
extern MethodInfo m21630_MI;
extern MethodInfo m35641_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.Events.BaseInvokableCall>
extern Il2CppType t3788_0_0_49;
FieldInfo t3788_f0_FieldInfo = 
{
	"_default", &t3788_0_0_49, &t3788_TI, offsetof(t3788_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t3788_FIs[] =
{
	&t3788_f0_FieldInfo,
	NULL
};
static PropertyInfo t3788____Default_PropertyInfo = 
{
	&t3788_TI, "Default", &m21629_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3788_PIs[] =
{
	&t3788____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21626_GM;
MethodInfo m21626_MI = 
{
	".ctor", (methodPointerType)&m11867_gshared, &t3788_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21626_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21627_GM;
MethodInfo m21627_MI = 
{
	".cctor", (methodPointerType)&m11868_gshared, &t3788_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21627_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3788_m21628_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21628_GM;
MethodInfo m21628_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m11869_gshared, &t3788_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t3788_m21628_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21628_GM};
extern Il2CppType t694_0_0_0;
extern Il2CppType t694_0_0_0;
static ParameterInfo t3788_m35641_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35641_GM;
MethodInfo m35641_MI = 
{
	"Compare", NULL, &t3788_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t3788_m35641_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35641_GM};
extern Il2CppType t3788_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21629_GM;
MethodInfo m21629_MI = 
{
	"get_Default", (methodPointerType)&m11870_gshared, &t3788_TI, &t3788_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21629_GM};
static MethodInfo* t3788_MIs[] =
{
	&m21626_MI,
	&m21627_MI,
	&m21628_MI,
	&m35641_MI,
	&m21629_MI,
	NULL
};
extern MethodInfo m21628_MI;
static MethodInfo* t3788_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m35641_MI,
	&m21628_MI,
	NULL,
};
extern TypeInfo t5259_TI;
static TypeInfo* t3788_ITIs[] = 
{
	&t5259_TI,
	&t991_TI,
};
static Il2CppInterfaceOffsetPair t3788_IOs[] = 
{
	{ &t5259_TI, 4},
	{ &t991_TI, 5},
};
extern TypeInfo t3788_TI;
extern TypeInfo t3788_TI;
extern TypeInfo t3789_TI;
extern TypeInfo t694_TI;
static Il2CppRGCTXData t3788_RGCTXData[8] = 
{
	&t5260_0_0_0/* Type Usage */,
	&t694_0_0_0/* Type Usage */,
	&t3788_TI/* Class Usage */,
	&t3788_TI/* Static Usage */,
	&t3789_TI/* Class Usage */,
	&m21630_MI/* Method Usage */,
	&t694_TI/* Class Usage */,
	&m35641_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3788_0_0_0;
extern Il2CppType t3788_1_0_0;
struct t3788;
extern Il2CppGenericClass t3788_GC;
TypeInfo t3788_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t3788_MIs, t3788_PIs, t3788_FIs, NULL, &t5_TI, NULL, NULL, &t3788_TI, t3788_ITIs, t3788_VT, &EmptyCustomAttributesCache, &t3788_TI, &t3788_0_0_0, &t3788_1_0_0, t3788_IOs, &t3788_GC, NULL, NULL, NULL, t3788_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3788), 0, -1, sizeof(t3788_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.Events.BaseInvokableCall>
extern Il2CppType t694_0_0_0;
extern Il2CppType t694_0_0_0;
static ParameterInfo t5259_m27765_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m27765_GM;
MethodInfo m27765_MI = 
{
	"Compare", NULL, &t5259_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t5259_m27765_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m27765_GM};
static MethodInfo* t5259_MIs[] =
{
	&m27765_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5259_0_0_0;
extern Il2CppType t5259_1_0_0;
struct t5259;
extern Il2CppGenericClass t5259_GC;
TypeInfo t5259_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t5259_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5259_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5259_TI, &t5259_0_0_0, &t5259_1_0_0, NULL, &t5259_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.IComparable`1<UnityEngine.Events.BaseInvokableCall>
extern Il2CppType t694_0_0_0;
static ParameterInfo t5260_m27766_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m27766_GM;
MethodInfo m27766_MI = 
{
	"CompareTo", NULL, &t5260_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t5260_m27766_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m27766_GM};
static MethodInfo* t5260_MIs[] =
{
	&m27766_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5260_1_0_0;
struct t5260;
extern Il2CppGenericClass t5260_GC;
TypeInfo t5260_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t5260_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5260_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5260_TI, &t5260_0_0_0, &t5260_1_0_0, NULL, &t5260_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m21626_MI;
extern MethodInfo m27766_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Events.BaseInvokableCall>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21630_GM;
MethodInfo m21630_MI = 
{
	".ctor", (methodPointerType)&m11871_gshared, &t3789_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21630_GM};
extern Il2CppType t694_0_0_0;
extern Il2CppType t694_0_0_0;
static ParameterInfo t3789_m21631_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21631_GM;
MethodInfo m21631_MI = 
{
	"Compare", (methodPointerType)&m11872_gshared, &t3789_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t3789_m21631_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21631_GM};
static MethodInfo* t3789_MIs[] =
{
	&m21630_MI,
	&m21631_MI,
	NULL
};
extern MethodInfo m21631_MI;
static MethodInfo* t3789_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21631_MI,
	&m21628_MI,
	&m21631_MI,
};
static Il2CppInterfaceOffsetPair t3789_IOs[] = 
{
	{ &t5259_TI, 4},
	{ &t991_TI, 5},
};
extern TypeInfo t3788_TI;
extern TypeInfo t3788_TI;
extern TypeInfo t3789_TI;
extern TypeInfo t694_TI;
extern TypeInfo t694_TI;
extern TypeInfo t5260_TI;
static Il2CppRGCTXData t3789_RGCTXData[12] = 
{
	&t5260_0_0_0/* Type Usage */,
	&t694_0_0_0/* Type Usage */,
	&t3788_TI/* Class Usage */,
	&t3788_TI/* Static Usage */,
	&t3789_TI/* Class Usage */,
	&m21630_MI/* Method Usage */,
	&t694_TI/* Class Usage */,
	&m35641_MI/* Method Usage */,
	&m21626_MI/* Method Usage */,
	&t694_TI/* Class Usage */,
	&t5260_TI/* Class Usage */,
	&m27766_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3789_0_0_0;
extern Il2CppType t3789_1_0_0;
struct t3789;
extern Il2CppGenericClass t3789_GC;
TypeInfo t3789_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t3789_MIs, NULL, NULL, NULL, &t3788_TI, NULL, &t1509_TI, &t3789_TI, NULL, t3789_VT, &EmptyCustomAttributesCache, &t3789_TI, &t3789_0_0_0, &t3789_1_0_0, t3789_IOs, &t3789_GC, NULL, NULL, NULL, t3789_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3789), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3781_TI;
#include "t3781MD.h"



// Metadata Definition System.Comparison`1<UnityEngine.Events.BaseInvokableCall>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t3781_m21632_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21632_GM;
MethodInfo m21632_MI = 
{
	".ctor", (methodPointerType)&m11938_gshared, &t3781_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t3781_m21632_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21632_GM};
extern Il2CppType t694_0_0_0;
extern Il2CppType t694_0_0_0;
static ParameterInfo t3781_m21633_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21633_GM;
MethodInfo m21633_MI = 
{
	"Invoke", (methodPointerType)&m11939_gshared, &t3781_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t3781_m21633_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21633_GM};
extern Il2CppType t694_0_0_0;
extern Il2CppType t694_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3781_m21634_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t694_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21634_GM;
MethodInfo m21634_MI = 
{
	"BeginInvoke", (methodPointerType)&m11940_gshared, &t3781_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5_t5, t3781_m21634_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL, &m21634_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t3781_m21635_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21635_GM;
MethodInfo m21635_MI = 
{
	"EndInvoke", (methodPointerType)&m11941_gshared, &t3781_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3781_m21635_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21635_GM};
static MethodInfo* t3781_MIs[] =
{
	&m21632_MI,
	&m21633_MI,
	&m21634_MI,
	&m21635_MI,
	NULL
};
extern MethodInfo m21633_MI;
extern MethodInfo m21634_MI;
extern MethodInfo m21635_MI;
static MethodInfo* t3781_VT[] =
{
	&m2341_MI,
	&m465_MI,
	&m2342_MI,
	&m467_MI,
	&m2343_MI,
	&m2344_MI,
	&m2343_MI,
	&m2345_MI,
	&m2346_MI,
	&m2347_MI,
	&m21633_MI,
	&m21634_MI,
	&m21635_MI,
};
static Il2CppInterfaceOffsetPair t3781_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3781_1_0_0;
struct t3781;
extern Il2CppGenericClass t3781_GC;
TypeInfo t3781_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t3781_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t3781_TI, NULL, t3781_VT, &EmptyCustomAttributesCache, &t3781_TI, &t3781_0_0_0, &t3781_1_0_0, t3781_IOs, &t3781_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3781), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3836_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Boolean>
extern MethodInfo m35642_MI;
static PropertyInfo t3836____Current_PropertyInfo = 
{
	&t3836_TI, "Current", &m35642_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3836_PIs[] =
{
	&t3836____Current_PropertyInfo,
	NULL
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35642_GM;
MethodInfo m35642_MI = 
{
	"get_Current", NULL, &t3836_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35642_GM};
static MethodInfo* t3836_MIs[] =
{
	&m35642_MI,
	NULL
};
static TypeInfo* t3836_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3836_0_0_0;
extern Il2CppType t3836_1_0_0;
struct t3836;
extern Il2CppGenericClass t3836_GC;
TypeInfo t3836_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3836_MIs, t3836_PIs, NULL, NULL, NULL, NULL, NULL, &t3836_TI, t3836_ITIs, NULL, &EmptyCustomAttributesCache, &t3836_TI, &t3836_0_0_0, &t3836_1_0_0, NULL, &t3836_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3790.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3790_TI;
#include "t3790MD.h"

extern MethodInfo m21640_MI;
extern MethodInfo m27771_MI;
struct t107;
 bool m27771 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21636_MI;
 void m21636 (t3790 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21637_MI;
 t5 * m21637 (t3790 * __this, MethodInfo* method){
	{
		bool L_0 = m21640(__this, &m21640_MI);
		bool L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t108_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m21638_MI;
 void m21638 (t3790 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21639_MI;
 bool m21639 (t3790 * __this, MethodInfo* method){
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
		t107 * L_1 = (__this->f0);
		int32_t L_2 = m4763(L_1, &m4763_MI);
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
 bool m21640 (t3790 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t133 * L_1 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4758(L_1, (t11*) &_stringLiteral1078, &m4758_MI);
		il2cpp_codegen_raise_exception(L_1);
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
		t133 * L_3 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4758(L_3, (t11*) &_stringLiteral1079, &m4758_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t107 * L_4 = (__this->f0);
		t107 * L_5 = (__this->f0);
		int32_t L_6 = m4763(L_5, &m4763_MI);
		int32_t L_7 = (__this->f1);
		bool L_8 = m27771(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m27771_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Boolean>
extern Il2CppType t107_0_0_1;
FieldInfo t3790_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3790_TI, offsetof(t3790, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3790_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3790_TI, offsetof(t3790, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3790_FIs[] =
{
	&t3790_f0_FieldInfo,
	&t3790_f1_FieldInfo,
	NULL
};
static PropertyInfo t3790____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3790_TI, "System.Collections.IEnumerator.Current", &m21637_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3790____Current_PropertyInfo = 
{
	&t3790_TI, "Current", &m21640_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3790_PIs[] =
{
	&t3790____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3790____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3790_m21636_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21636_GM;
MethodInfo m21636_MI = 
{
	".ctor", (methodPointerType)&m21636, &t3790_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3790_m21636_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21636_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21637_GM;
MethodInfo m21637_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21637, &t3790_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21637_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21638_GM;
MethodInfo m21638_MI = 
{
	"Dispose", (methodPointerType)&m21638, &t3790_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21638_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21639_GM;
MethodInfo m21639_MI = 
{
	"MoveNext", (methodPointerType)&m21639, &t3790_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21639_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21640_GM;
MethodInfo m21640_MI = 
{
	"get_Current", (methodPointerType)&m21640, &t3790_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21640_GM};
static MethodInfo* t3790_MIs[] =
{
	&m21636_MI,
	&m21637_MI,
	&m21638_MI,
	&m21639_MI,
	&m21640_MI,
	NULL
};
static MethodInfo* t3790_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21637_MI,
	&m21639_MI,
	&m21638_MI,
	&m21640_MI,
};
static TypeInfo* t3790_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t3836_TI,
};
static Il2CppInterfaceOffsetPair t3790_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t3836_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3790_0_0_0;
extern Il2CppType t3790_1_0_0;
extern Il2CppGenericClass t3790_GC;
TypeInfo t3790_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3790_MIs, t3790_PIs, t3790_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3790_TI, t3790_ITIs, t3790_VT, &EmptyCustomAttributesCache, &t3790_TI, &t3790_0_0_0, &t3790_1_0_0, t3790_IOs, &t3790_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3790)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6630_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Boolean>
extern MethodInfo m35643_MI;
static PropertyInfo t6630____Count_PropertyInfo = 
{
	&t6630_TI, "Count", &m35643_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35644_MI;
static PropertyInfo t6630____IsReadOnly_PropertyInfo = 
{
	&t6630_TI, "IsReadOnly", &m35644_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6630_PIs[] =
{
	&t6630____Count_PropertyInfo,
	&t6630____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35643_GM;
MethodInfo m35643_MI = 
{
	"get_Count", NULL, &t6630_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35643_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35644_GM;
MethodInfo m35644_MI = 
{
	"get_IsReadOnly", NULL, &t6630_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35644_GM};
extern Il2CppType t108_0_0_0;
static ParameterInfo t6630_m35645_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35645_GM;
MethodInfo m35645_MI = 
{
	"Add", NULL, &t6630_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t6630_m35645_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35645_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35646_GM;
MethodInfo m35646_MI = 
{
	"Clear", NULL, &t6630_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35646_GM};
extern Il2CppType t108_0_0_0;
static ParameterInfo t6630_m35647_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35647_GM;
MethodInfo m35647_MI = 
{
	"Contains", NULL, &t6630_TI, &t108_0_0_0, RuntimeInvoker_t108_t111, t6630_m35647_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35647_GM};
extern Il2CppType t1034_0_0_0;
extern Il2CppType t1034_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6630_m35648_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1034_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35648_GM;
MethodInfo m35648_MI = 
{
	"CopyTo", NULL, &t6630_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6630_m35648_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35648_GM};
extern Il2CppType t108_0_0_0;
static ParameterInfo t6630_m35649_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35649_GM;
MethodInfo m35649_MI = 
{
	"Remove", NULL, &t6630_TI, &t108_0_0_0, RuntimeInvoker_t108_t111, t6630_m35649_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35649_GM};
static MethodInfo* t6630_MIs[] =
{
	&m35643_MI,
	&m35644_MI,
	&m35645_MI,
	&m35646_MI,
	&m35647_MI,
	&m35648_MI,
	&m35649_MI,
	NULL
};
extern TypeInfo t6632_TI;
static TypeInfo* t6630_ITIs[] = 
{
	&t739_TI,
	&t6632_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6630_0_0_0;
extern Il2CppType t6630_1_0_0;
struct t6630;
extern Il2CppGenericClass t6630_GC;
TypeInfo t6630_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6630_MIs, t6630_PIs, NULL, NULL, NULL, NULL, NULL, &t6630_TI, t6630_ITIs, NULL, &EmptyCustomAttributesCache, &t6630_TI, &t6630_0_0_0, &t6630_1_0_0, NULL, &t6630_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Boolean>
extern Il2CppType t3836_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35650_GM;
MethodInfo m35650_MI = 
{
	"GetEnumerator", NULL, &t6632_TI, &t3836_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35650_GM};
static MethodInfo* t6632_MIs[] =
{
	&m35650_MI,
	NULL
};
static TypeInfo* t6632_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6632_0_0_0;
extern Il2CppType t6632_1_0_0;
struct t6632;
extern Il2CppGenericClass t6632_GC;
TypeInfo t6632_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6632_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6632_TI, t6632_ITIs, NULL, &EmptyCustomAttributesCache, &t6632_TI, &t6632_0_0_0, &t6632_1_0_0, NULL, &t6632_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6631_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Boolean>
extern MethodInfo m35651_MI;
extern MethodInfo m35652_MI;
static PropertyInfo t6631____Item_PropertyInfo = 
{
	&t6631_TI, "Item", &m35651_MI, &m35652_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6631_PIs[] =
{
	&t6631____Item_PropertyInfo,
	NULL
};
extern Il2CppType t108_0_0_0;
static ParameterInfo t6631_m35653_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35653_GM;
MethodInfo m35653_MI = 
{
	"IndexOf", NULL, &t6631_TI, &t110_0_0_0, RuntimeInvoker_t110_t111, t6631_m35653_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35653_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t6631_m35654_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35654_GM;
MethodInfo m35654_MI = 
{
	"Insert", NULL, &t6631_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t111, t6631_m35654_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35654_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6631_m35655_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35655_GM;
MethodInfo m35655_MI = 
{
	"RemoveAt", NULL, &t6631_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6631_m35655_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35655_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6631_m35651_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35651_GM;
MethodInfo m35651_MI = 
{
	"get_Item", NULL, &t6631_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6631_m35651_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35651_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t6631_m35652_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35652_GM;
MethodInfo m35652_MI = 
{
	"set_Item", NULL, &t6631_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t111, t6631_m35652_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35652_GM};
static MethodInfo* t6631_MIs[] =
{
	&m35653_MI,
	&m35654_MI,
	&m35655_MI,
	&m35651_MI,
	&m35652_MI,
	NULL
};
static TypeInfo* t6631_ITIs[] = 
{
	&t739_TI,
	&t6630_TI,
	&t6632_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6631_0_0_0;
extern Il2CppType t6631_1_0_0;
struct t6631;
extern Il2CppGenericClass t6631_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6631_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6631_MIs, t6631_PIs, NULL, NULL, NULL, NULL, NULL, &t6631_TI, t6631_ITIs, NULL, &t2240__CustomAttributeCache, &t6631_TI, &t6631_0_0_0, &t6631_1_0_0, NULL, &t6631_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6633_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>
extern MethodInfo m35656_MI;
static PropertyInfo t6633____Count_PropertyInfo = 
{
	&t6633_TI, "Count", &m35656_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35657_MI;
static PropertyInfo t6633____IsReadOnly_PropertyInfo = 
{
	&t6633_TI, "IsReadOnly", &m35657_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6633_PIs[] =
{
	&t6633____Count_PropertyInfo,
	&t6633____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35656_GM;
MethodInfo m35656_MI = 
{
	"get_Count", NULL, &t6633_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35656_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35657_GM;
MethodInfo m35657_MI = 
{
	"get_IsReadOnly", NULL, &t6633_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35657_GM};
extern Il2CppType t2091_0_0_0;
extern Il2CppType t2091_0_0_0;
static ParameterInfo t6633_m35658_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2091_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35658_GM;
MethodInfo m35658_MI = 
{
	"Add", NULL, &t6633_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6633_m35658_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35658_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35659_GM;
MethodInfo m35659_MI = 
{
	"Clear", NULL, &t6633_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35659_GM};
extern Il2CppType t2091_0_0_0;
static ParameterInfo t6633_m35660_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2091_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35660_GM;
MethodInfo m35660_MI = 
{
	"Contains", NULL, &t6633_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6633_m35660_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35660_GM};
extern Il2CppType t4191_0_0_0;
extern Il2CppType t4191_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6633_m35661_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4191_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35661_GM;
MethodInfo m35661_MI = 
{
	"CopyTo", NULL, &t6633_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6633_m35661_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35661_GM};
extern Il2CppType t2091_0_0_0;
static ParameterInfo t6633_m35662_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2091_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35662_GM;
MethodInfo m35662_MI = 
{
	"Remove", NULL, &t6633_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6633_m35662_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35662_GM};
static MethodInfo* t6633_MIs[] =
{
	&m35656_MI,
	&m35657_MI,
	&m35658_MI,
	&m35659_MI,
	&m35660_MI,
	&m35661_MI,
	&m35662_MI,
	NULL
};
extern TypeInfo t6635_TI;
static TypeInfo* t6633_ITIs[] = 
{
	&t739_TI,
	&t6635_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6633_0_0_0;
extern Il2CppType t6633_1_0_0;
struct t6633;
extern Il2CppGenericClass t6633_GC;
TypeInfo t6633_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6633_MIs, t6633_PIs, NULL, NULL, NULL, NULL, NULL, &t6633_TI, t6633_ITIs, NULL, &EmptyCustomAttributesCache, &t6633_TI, &t6633_0_0_0, &t6633_1_0_0, NULL, &t6633_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Boolean>>
extern Il2CppType t5262_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35663_GM;
MethodInfo m35663_MI = 
{
	"GetEnumerator", NULL, &t6635_TI, &t5262_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35663_GM};
static MethodInfo* t6635_MIs[] =
{
	&m35663_MI,
	NULL
};
static TypeInfo* t6635_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6635_0_0_0;
extern Il2CppType t6635_1_0_0;
struct t6635;
extern Il2CppGenericClass t6635_GC;
TypeInfo t6635_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6635_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6635_TI, t6635_ITIs, NULL, &EmptyCustomAttributesCache, &t6635_TI, &t6635_0_0_0, &t6635_1_0_0, NULL, &t6635_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5262_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Boolean>>
extern MethodInfo m35664_MI;
static PropertyInfo t5262____Current_PropertyInfo = 
{
	&t5262_TI, "Current", &m35664_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5262_PIs[] =
{
	&t5262____Current_PropertyInfo,
	NULL
};
extern Il2CppType t2091_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35664_GM;
MethodInfo m35664_MI = 
{
	"get_Current", NULL, &t5262_TI, &t2091_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35664_GM};
static MethodInfo* t5262_MIs[] =
{
	&m35664_MI,
	NULL
};
static TypeInfo* t5262_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5262_0_0_0;
extern Il2CppType t5262_1_0_0;
struct t5262;
extern Il2CppGenericClass t5262_GC;
TypeInfo t5262_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5262_MIs, t5262_PIs, NULL, NULL, NULL, NULL, NULL, &t5262_TI, t5262_ITIs, NULL, &EmptyCustomAttributesCache, &t5262_TI, &t5262_0_0_0, &t5262_1_0_0, NULL, &t5262_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2091_TI;



// Metadata Definition System.IComparable`1<System.Boolean>
extern Il2CppType t108_0_0_0;
static ParameterInfo t2091_m35665_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35665_GM;
MethodInfo m35665_MI = 
{
	"CompareTo", NULL, &t2091_TI, &t110_0_0_0, RuntimeInvoker_t110_t111, t2091_m35665_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35665_GM};
static MethodInfo* t2091_MIs[] =
{
	&m35665_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2091_1_0_0;
struct t2091;
extern Il2CppGenericClass t2091_GC;
TypeInfo t2091_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t2091_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2091_TI, NULL, NULL, &EmptyCustomAttributesCache, &t2091_TI, &t2091_0_0_0, &t2091_1_0_0, NULL, &t2091_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t3791.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3791_TI;
#include "t3791MD.h"

extern MethodInfo m21645_MI;
extern MethodInfo m27782_MI;
struct t107;
#define m27782(__this, p0, method) (t5*)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>
extern Il2CppType t107_0_0_1;
FieldInfo t3791_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3791_TI, offsetof(t3791, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3791_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3791_TI, offsetof(t3791, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3791_FIs[] =
{
	&t3791_f0_FieldInfo,
	&t3791_f1_FieldInfo,
	NULL
};
extern MethodInfo m21642_MI;
static PropertyInfo t3791____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3791_TI, "System.Collections.IEnumerator.Current", &m21642_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3791____Current_PropertyInfo = 
{
	&t3791_TI, "Current", &m21645_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3791_PIs[] =
{
	&t3791____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3791____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3791_m21641_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21641_GM;
MethodInfo m21641_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3791_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3791_m21641_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21641_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21642_GM;
MethodInfo m21642_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3791_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21642_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21643_GM;
MethodInfo m21643_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3791_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21643_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21644_GM;
MethodInfo m21644_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3791_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21644_GM};
extern Il2CppType t2091_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21645_GM;
MethodInfo m21645_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3791_TI, &t2091_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21645_GM};
static MethodInfo* t3791_MIs[] =
{
	&m21641_MI,
	&m21642_MI,
	&m21643_MI,
	&m21644_MI,
	&m21645_MI,
	NULL
};
extern MethodInfo m21644_MI;
extern MethodInfo m21643_MI;
static MethodInfo* t3791_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21642_MI,
	&m21644_MI,
	&m21643_MI,
	&m21645_MI,
};
static TypeInfo* t3791_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5262_TI,
};
static Il2CppInterfaceOffsetPair t3791_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5262_TI, 7},
};
extern TypeInfo t2091_TI;
static Il2CppRGCTXData t3791_RGCTXData[3] = 
{
	&m21645_MI/* Method Usage */,
	&t2091_TI/* Class Usage */,
	&m27782_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3791_0_0_0;
extern Il2CppType t3791_1_0_0;
extern Il2CppGenericClass t3791_GC;
TypeInfo t3791_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3791_MIs, t3791_PIs, t3791_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3791_TI, t3791_ITIs, t3791_VT, &EmptyCustomAttributesCache, &t3791_TI, &t3791_0_0_0, &t3791_1_0_0, t3791_IOs, &t3791_GC, NULL, NULL, NULL, t3791_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3791)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6634_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.Boolean>>
extern MethodInfo m35666_MI;
extern MethodInfo m35667_MI;
static PropertyInfo t6634____Item_PropertyInfo = 
{
	&t6634_TI, "Item", &m35666_MI, &m35667_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6634_PIs[] =
{
	&t6634____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2091_0_0_0;
static ParameterInfo t6634_m35668_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2091_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35668_GM;
MethodInfo m35668_MI = 
{
	"IndexOf", NULL, &t6634_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6634_m35668_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35668_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2091_0_0_0;
static ParameterInfo t6634_m35669_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2091_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35669_GM;
MethodInfo m35669_MI = 
{
	"Insert", NULL, &t6634_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6634_m35669_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35669_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6634_m35670_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35670_GM;
MethodInfo m35670_MI = 
{
	"RemoveAt", NULL, &t6634_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6634_m35670_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35670_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6634_m35666_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t2091_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35666_GM;
MethodInfo m35666_MI = 
{
	"get_Item", NULL, &t6634_TI, &t2091_0_0_0, RuntimeInvoker_t5_t110, t6634_m35666_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35666_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2091_0_0_0;
static ParameterInfo t6634_m35667_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2091_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35667_GM;
MethodInfo m35667_MI = 
{
	"set_Item", NULL, &t6634_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6634_m35667_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35667_GM};
static MethodInfo* t6634_MIs[] =
{
	&m35668_MI,
	&m35669_MI,
	&m35670_MI,
	&m35666_MI,
	&m35667_MI,
	NULL
};
static TypeInfo* t6634_ITIs[] = 
{
	&t739_TI,
	&t6633_TI,
	&t6635_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6634_0_0_0;
extern Il2CppType t6634_1_0_0;
struct t6634;
extern Il2CppGenericClass t6634_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6634_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6634_MIs, t6634_PIs, NULL, NULL, NULL, NULL, NULL, &t6634_TI, t6634_ITIs, NULL, &t2240__CustomAttributeCache, &t6634_TI, &t6634_0_0_0, &t6634_1_0_0, NULL, &t6634_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6636_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>
extern MethodInfo m35671_MI;
static PropertyInfo t6636____Count_PropertyInfo = 
{
	&t6636_TI, "Count", &m35671_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35672_MI;
static PropertyInfo t6636____IsReadOnly_PropertyInfo = 
{
	&t6636_TI, "IsReadOnly", &m35672_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6636_PIs[] =
{
	&t6636____Count_PropertyInfo,
	&t6636____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35671_GM;
MethodInfo m35671_MI = 
{
	"get_Count", NULL, &t6636_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35671_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35672_GM;
MethodInfo m35672_MI = 
{
	"get_IsReadOnly", NULL, &t6636_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35672_GM};
extern Il2CppType t2092_0_0_0;
extern Il2CppType t2092_0_0_0;
static ParameterInfo t6636_m35673_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2092_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35673_GM;
MethodInfo m35673_MI = 
{
	"Add", NULL, &t6636_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6636_m35673_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35673_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35674_GM;
MethodInfo m35674_MI = 
{
	"Clear", NULL, &t6636_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35674_GM};
extern Il2CppType t2092_0_0_0;
static ParameterInfo t6636_m35675_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2092_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35675_GM;
MethodInfo m35675_MI = 
{
	"Contains", NULL, &t6636_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6636_m35675_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35675_GM};
extern Il2CppType t4192_0_0_0;
extern Il2CppType t4192_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6636_m35676_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4192_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35676_GM;
MethodInfo m35676_MI = 
{
	"CopyTo", NULL, &t6636_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6636_m35676_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35676_GM};
extern Il2CppType t2092_0_0_0;
static ParameterInfo t6636_m35677_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2092_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35677_GM;
MethodInfo m35677_MI = 
{
	"Remove", NULL, &t6636_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6636_m35677_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35677_GM};
static MethodInfo* t6636_MIs[] =
{
	&m35671_MI,
	&m35672_MI,
	&m35673_MI,
	&m35674_MI,
	&m35675_MI,
	&m35676_MI,
	&m35677_MI,
	NULL
};
extern TypeInfo t6638_TI;
static TypeInfo* t6636_ITIs[] = 
{
	&t739_TI,
	&t6638_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6636_0_0_0;
extern Il2CppType t6636_1_0_0;
struct t6636;
extern Il2CppGenericClass t6636_GC;
TypeInfo t6636_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6636_MIs, t6636_PIs, NULL, NULL, NULL, NULL, NULL, &t6636_TI, t6636_ITIs, NULL, &EmptyCustomAttributesCache, &t6636_TI, &t6636_0_0_0, &t6636_1_0_0, NULL, &t6636_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Boolean>>
extern Il2CppType t5264_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35678_GM;
MethodInfo m35678_MI = 
{
	"GetEnumerator", NULL, &t6638_TI, &t5264_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35678_GM};
static MethodInfo* t6638_MIs[] =
{
	&m35678_MI,
	NULL
};
static TypeInfo* t6638_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6638_0_0_0;
extern Il2CppType t6638_1_0_0;
struct t6638;
extern Il2CppGenericClass t6638_GC;
TypeInfo t6638_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6638_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6638_TI, t6638_ITIs, NULL, &EmptyCustomAttributesCache, &t6638_TI, &t6638_0_0_0, &t6638_1_0_0, NULL, &t6638_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5264_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Boolean>>
extern MethodInfo m35679_MI;
static PropertyInfo t5264____Current_PropertyInfo = 
{
	&t5264_TI, "Current", &m35679_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5264_PIs[] =
{
	&t5264____Current_PropertyInfo,
	NULL
};
extern Il2CppType t2092_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35679_GM;
MethodInfo m35679_MI = 
{
	"get_Current", NULL, &t5264_TI, &t2092_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35679_GM};
static MethodInfo* t5264_MIs[] =
{
	&m35679_MI,
	NULL
};
static TypeInfo* t5264_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5264_0_0_0;
extern Il2CppType t5264_1_0_0;
struct t5264;
extern Il2CppGenericClass t5264_GC;
TypeInfo t5264_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5264_MIs, t5264_PIs, NULL, NULL, NULL, NULL, NULL, &t5264_TI, t5264_ITIs, NULL, &EmptyCustomAttributesCache, &t5264_TI, &t5264_0_0_0, &t5264_1_0_0, NULL, &t5264_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2092_TI;



// Metadata Definition System.IEquatable`1<System.Boolean>
extern Il2CppType t108_0_0_0;
static ParameterInfo t2092_m35680_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35680_GM;
MethodInfo m35680_MI = 
{
	"Equals", NULL, &t2092_TI, &t108_0_0_0, RuntimeInvoker_t108_t111, t2092_m35680_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35680_GM};
static MethodInfo* t2092_MIs[] =
{
	&m35680_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2092_1_0_0;
struct t2092;
extern Il2CppGenericClass t2092_GC;
TypeInfo t2092_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t2092_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2092_TI, NULL, NULL, &EmptyCustomAttributesCache, &t2092_TI, &t2092_0_0_0, &t2092_1_0_0, NULL, &t2092_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t3792.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3792_TI;
#include "t3792MD.h"

extern MethodInfo m21650_MI;
extern MethodInfo m27793_MI;
struct t107;
#define m27793(__this, p0, method) (t5*)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.Boolean>>
extern Il2CppType t107_0_0_1;
FieldInfo t3792_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3792_TI, offsetof(t3792, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3792_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3792_TI, offsetof(t3792, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3792_FIs[] =
{
	&t3792_f0_FieldInfo,
	&t3792_f1_FieldInfo,
	NULL
};
extern MethodInfo m21647_MI;
static PropertyInfo t3792____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3792_TI, "System.Collections.IEnumerator.Current", &m21647_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3792____Current_PropertyInfo = 
{
	&t3792_TI, "Current", &m21650_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3792_PIs[] =
{
	&t3792____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3792____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3792_m21646_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21646_GM;
MethodInfo m21646_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3792_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3792_m21646_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21646_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21647_GM;
MethodInfo m21647_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3792_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21647_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21648_GM;
MethodInfo m21648_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3792_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21648_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21649_GM;
MethodInfo m21649_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3792_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21649_GM};
extern Il2CppType t2092_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21650_GM;
MethodInfo m21650_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3792_TI, &t2092_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21650_GM};
static MethodInfo* t3792_MIs[] =
{
	&m21646_MI,
	&m21647_MI,
	&m21648_MI,
	&m21649_MI,
	&m21650_MI,
	NULL
};
extern MethodInfo m21649_MI;
extern MethodInfo m21648_MI;
static MethodInfo* t3792_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21647_MI,
	&m21649_MI,
	&m21648_MI,
	&m21650_MI,
};
static TypeInfo* t3792_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5264_TI,
};
static Il2CppInterfaceOffsetPair t3792_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5264_TI, 7},
};
extern TypeInfo t2092_TI;
static Il2CppRGCTXData t3792_RGCTXData[3] = 
{
	&m21650_MI/* Method Usage */,
	&t2092_TI/* Class Usage */,
	&m27793_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3792_0_0_0;
extern Il2CppType t3792_1_0_0;
extern Il2CppGenericClass t3792_GC;
TypeInfo t3792_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3792_MIs, t3792_PIs, t3792_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3792_TI, t3792_ITIs, t3792_VT, &EmptyCustomAttributesCache, &t3792_TI, &t3792_0_0_0, &t3792_1_0_0, t3792_IOs, &t3792_GC, NULL, NULL, NULL, t3792_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3792)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6637_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.Boolean>>
extern MethodInfo m35681_MI;
extern MethodInfo m35682_MI;
static PropertyInfo t6637____Item_PropertyInfo = 
{
	&t6637_TI, "Item", &m35681_MI, &m35682_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6637_PIs[] =
{
	&t6637____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2092_0_0_0;
static ParameterInfo t6637_m35683_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2092_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35683_GM;
MethodInfo m35683_MI = 
{
	"IndexOf", NULL, &t6637_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6637_m35683_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35683_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2092_0_0_0;
static ParameterInfo t6637_m35684_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2092_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35684_GM;
MethodInfo m35684_MI = 
{
	"Insert", NULL, &t6637_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6637_m35684_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35684_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6637_m35685_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35685_GM;
MethodInfo m35685_MI = 
{
	"RemoveAt", NULL, &t6637_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6637_m35685_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35685_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6637_m35681_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t2092_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35681_GM;
MethodInfo m35681_MI = 
{
	"get_Item", NULL, &t6637_TI, &t2092_0_0_0, RuntimeInvoker_t5_t110, t6637_m35681_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35681_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2092_0_0_0;
static ParameterInfo t6637_m35682_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2092_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35682_GM;
MethodInfo m35682_MI = 
{
	"set_Item", NULL, &t6637_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6637_m35682_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35682_GM};
static MethodInfo* t6637_MIs[] =
{
	&m35683_MI,
	&m35684_MI,
	&m35685_MI,
	&m35681_MI,
	&m35682_MI,
	NULL
};
static TypeInfo* t6637_ITIs[] = 
{
	&t739_TI,
	&t6636_TI,
	&t6638_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6637_0_0_0;
extern Il2CppType t6637_1_0_0;
struct t6637;
extern Il2CppGenericClass t6637_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6637_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6637_MIs, t6637_PIs, NULL, NULL, NULL, NULL, NULL, &t6637_TI, t6637_ITIs, NULL, &t2240__CustomAttributeCache, &t6637_TI, &t6637_0_0_0, &t6637_1_0_0, NULL, &t6637_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t3793.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3793_TI;
#include "t3793MD.h"

#include "t3751.h"
extern TypeInfo t3751_TI;
#include "t704MD.h"
#include "t3751MD.h"
extern MethodInfo m3458_MI;
extern MethodInfo m3466_MI;
extern MethodInfo m21303_MI;


extern MethodInfo m21651_MI;
 void m21651_gshared (t3793 * __this, MethodInfo* method)
{
	{
		__this->f4 = ((t168*)SZArrayNew(InitializedTypeInfo(&t168_TI), 2));
		m3458(__this, &m3458_MI);
		return;
	}
}
extern MethodInfo m21652_MI;
 t695 * m21652_gshared (t3793 * __this, t11* p0, t5 * p1, MethodInfo* method)
{
	{
		t675* L_0 = ((t675*)SZArrayNew(InitializedTypeInfo(&t675_TI), 2));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_1 = m532(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), &m532_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t114 **)(t114 **)SZArrayLdElema(L_0, 0)) = (t114 *)L_1;
		t675* L_2 = L_0;
		t114 * L_3 = m532(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), &m532_MI);
		ArrayElementTypeCheck (L_2, L_3);
		*((t114 **)(t114 **)SZArrayLdElema(L_2, 1)) = (t114 *)L_3;
		t695 * L_4 = m3466(NULL, p1, p0, L_2, &m3466_MI);
		return L_4;
	}
}
extern MethodInfo m21653_MI;
 t694 * m21653_gshared (t3793 * __this, t5 * p0, t695 * p1, MethodInfo* method)
{
	{
		t3751 * L_0 = (t3751 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (t3751 * __this, t5 * p0, t695 * p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, p0, p1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_0;
	}
}
// Metadata Definition UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
extern Il2CppType t168_0_0_33;
FieldInfo t3793_f4_FieldInfo = 
{
	"m_InvokeArray", &t168_0_0_33, &t3793_TI, offsetof(t3793, f4), &EmptyCustomAttributesCache};
static FieldInfo* t3793_FIs[] =
{
	&t3793_f4_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21651_GM;
MethodInfo m21651_MI = 
{
	".ctor", (methodPointerType)&m21651_gshared, &t3793_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21651_GM};
extern Il2CppType t11_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3793_m21652_ParameterInfos[] = 
{
	{"name", 0, 134217728, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"targetObj", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t695_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21652_GM;
MethodInfo m21652_MI = 
{
	"FindMethod_Impl", (methodPointerType)&m21652_gshared, &t3793_TI, &t695_0_0_0, RuntimeInvoker_t5_t5_t5, t3793_m21652_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21652_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t3793_m21653_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t694_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21653_GM;
MethodInfo m21653_MI = 
{
	"GetDelegate", (methodPointerType)&m21653_gshared, &t3793_TI, &t694_0_0_0, RuntimeInvoker_t5_t5_t5, t3793_m21653_ParameterInfos, &EmptyCustomAttributesCache, 195, 0, 7, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21653_GM};
static MethodInfo* t3793_MIs[] =
{
	&m21651_MI,
	&m21652_MI,
	&m21653_MI,
	NULL
};
extern MethodInfo m1980_MI;
extern MethodInfo m1981_MI;
extern MethodInfo m1982_MI;
static MethodInfo* t3793_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m1980_MI,
	&m1981_MI,
	&m1982_MI,
	&m21652_MI,
	&m21653_MI,
};
extern TypeInfo t454_TI;
static Il2CppInterfaceOffsetPair t3793_IOs[] = 
{
	{ &t454_TI, 4},
};
extern TypeInfo t3751_TI;
static Il2CppRGCTXData t3793_RGCTXData[4] = 
{
	&t5_0_0_0/* Type Usage */,
	&t5_0_0_0/* Type Usage */,
	&t3751_TI/* Class Usage */,
	&m21303_MI/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t3793_0_0_0;
extern Il2CppType t3793_1_0_0;
extern TypeInfo t704_TI;
struct t3793;
extern Il2CppGenericClass t3793_GC;
TypeInfo t3793_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityEvent`2", "UnityEngine.Events", t3793_MIs, NULL, t3793_FIs, NULL, &t704_TI, NULL, NULL, &t3793_TI, NULL, t3793_VT, &EmptyCustomAttributesCache, &t3793_TI, &t3793_0_0_0, &t3793_1_0_0, t3793_IOs, &t3793_GC, NULL, NULL, NULL, t3793_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3793), 0, -1, 0, 0, -1, 1056897, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 8, 0, 1};
#include "t3794.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3794_TI;
#include "t3794MD.h"

#include "t3753.h"
extern TypeInfo t3753_TI;
#include "t3753MD.h"
extern MethodInfo m21310_MI;


extern MethodInfo m21654_MI;
 void m21654_gshared (t3794 * __this, MethodInfo* method)
{
	{
		__this->f4 = ((t168*)SZArrayNew(InitializedTypeInfo(&t168_TI), 3));
		m3458(__this, &m3458_MI);
		return;
	}
}
extern MethodInfo m21655_MI;
 t695 * m21655_gshared (t3794 * __this, t11* p0, t5 * p1, MethodInfo* method)
{
	{
		t675* L_0 = ((t675*)SZArrayNew(InitializedTypeInfo(&t675_TI), 3));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_1 = m532(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), &m532_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t114 **)(t114 **)SZArrayLdElema(L_0, 0)) = (t114 *)L_1;
		t675* L_2 = L_0;
		t114 * L_3 = m532(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), &m532_MI);
		ArrayElementTypeCheck (L_2, L_3);
		*((t114 **)(t114 **)SZArrayLdElema(L_2, 1)) = (t114 *)L_3;
		t675* L_4 = L_2;
		t114 * L_5 = m532(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)), &m532_MI);
		ArrayElementTypeCheck (L_4, L_5);
		*((t114 **)(t114 **)SZArrayLdElema(L_4, 2)) = (t114 *)L_5;
		t695 * L_6 = m3466(NULL, p1, p0, L_4, &m3466_MI);
		return L_6;
	}
}
extern MethodInfo m21656_MI;
 t694 * m21656_gshared (t3794 * __this, t5 * p0, t695 * p1, MethodInfo* method)
{
	{
		t3753 * L_0 = (t3753 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (t3753 * __this, t5 * p0, t695 * p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, p0, p1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_0;
	}
}
// Metadata Definition UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
extern Il2CppType t168_0_0_33;
FieldInfo t3794_f4_FieldInfo = 
{
	"m_InvokeArray", &t168_0_0_33, &t3794_TI, offsetof(t3794, f4), &EmptyCustomAttributesCache};
static FieldInfo* t3794_FIs[] =
{
	&t3794_f4_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21654_GM;
MethodInfo m21654_MI = 
{
	".ctor", (methodPointerType)&m21654_gshared, &t3794_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21654_GM};
extern Il2CppType t11_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3794_m21655_ParameterInfos[] = 
{
	{"name", 0, 134217728, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"targetObj", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t695_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21655_GM;
MethodInfo m21655_MI = 
{
	"FindMethod_Impl", (methodPointerType)&m21655_gshared, &t3794_TI, &t695_0_0_0, RuntimeInvoker_t5_t5_t5, t3794_m21655_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21655_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t3794_m21656_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t694_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21656_GM;
MethodInfo m21656_MI = 
{
	"GetDelegate", (methodPointerType)&m21656_gshared, &t3794_TI, &t694_0_0_0, RuntimeInvoker_t5_t5_t5, t3794_m21656_ParameterInfos, &EmptyCustomAttributesCache, 195, 0, 7, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21656_GM};
static MethodInfo* t3794_MIs[] =
{
	&m21654_MI,
	&m21655_MI,
	&m21656_MI,
	NULL
};
static MethodInfo* t3794_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m1980_MI,
	&m1981_MI,
	&m1982_MI,
	&m21655_MI,
	&m21656_MI,
};
static Il2CppInterfaceOffsetPair t3794_IOs[] = 
{
	{ &t454_TI, 4},
};
extern TypeInfo t3753_TI;
static Il2CppRGCTXData t3794_RGCTXData[5] = 
{
	&t5_0_0_0/* Type Usage */,
	&t5_0_0_0/* Type Usage */,
	&t5_0_0_0/* Type Usage */,
	&t3753_TI/* Class Usage */,
	&m21310_MI/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t3794_0_0_0;
extern Il2CppType t3794_1_0_0;
struct t3794;
extern Il2CppGenericClass t3794_GC;
TypeInfo t3794_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityEvent`3", "UnityEngine.Events", t3794_MIs, NULL, t3794_FIs, NULL, &t704_TI, NULL, NULL, &t3794_TI, NULL, t3794_VT, &EmptyCustomAttributesCache, &t3794_TI, &t3794_0_0_0, &t3794_1_0_0, t3794_IOs, &t3794_GC, NULL, NULL, NULL, t3794_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3794), 0, -1, 0, 0, -1, 1056897, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 8, 0, 1};
#include "t3795.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3795_TI;
#include "t3795MD.h"

#include "t3755.h"
extern TypeInfo t3755_TI;
#include "t3755MD.h"
extern MethodInfo m21317_MI;


extern MethodInfo m21657_MI;
 void m21657_gshared (t3795 * __this, MethodInfo* method)
{
	{
		__this->f4 = ((t168*)SZArrayNew(InitializedTypeInfo(&t168_TI), 4));
		m3458(__this, &m3458_MI);
		return;
	}
}
extern MethodInfo m21658_MI;
 t695 * m21658_gshared (t3795 * __this, t11* p0, t5 * p1, MethodInfo* method)
{
	{
		t675* L_0 = ((t675*)SZArrayNew(InitializedTypeInfo(&t675_TI), 4));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_1 = m532(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), &m532_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t114 **)(t114 **)SZArrayLdElema(L_0, 0)) = (t114 *)L_1;
		t675* L_2 = L_0;
		t114 * L_3 = m532(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), &m532_MI);
		ArrayElementTypeCheck (L_2, L_3);
		*((t114 **)(t114 **)SZArrayLdElema(L_2, 1)) = (t114 *)L_3;
		t675* L_4 = L_2;
		t114 * L_5 = m532(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)), &m532_MI);
		ArrayElementTypeCheck (L_4, L_5);
		*((t114 **)(t114 **)SZArrayLdElema(L_4, 2)) = (t114 *)L_5;
		t675* L_6 = L_4;
		t114 * L_7 = m532(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)), &m532_MI);
		ArrayElementTypeCheck (L_6, L_7);
		*((t114 **)(t114 **)SZArrayLdElema(L_6, 3)) = (t114 *)L_7;
		t695 * L_8 = m3466(NULL, p1, p0, L_6, &m3466_MI);
		return L_8;
	}
}
extern MethodInfo m21659_MI;
 t694 * m21659_gshared (t3795 * __this, t5 * p0, t695 * p1, MethodInfo* method)
{
	{
		t3755 * L_0 = (t3755 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (t3755 * __this, t5 * p0, t695 * p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, p0, p1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_0;
	}
}
// Metadata Definition UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
extern Il2CppType t168_0_0_33;
FieldInfo t3795_f4_FieldInfo = 
{
	"m_InvokeArray", &t168_0_0_33, &t3795_TI, offsetof(t3795, f4), &EmptyCustomAttributesCache};
static FieldInfo* t3795_FIs[] =
{
	&t3795_f4_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21657_GM;
MethodInfo m21657_MI = 
{
	".ctor", (methodPointerType)&m21657_gshared, &t3795_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21657_GM};
extern Il2CppType t11_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3795_m21658_ParameterInfos[] = 
{
	{"name", 0, 134217728, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"targetObj", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t695_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21658_GM;
MethodInfo m21658_MI = 
{
	"FindMethod_Impl", (methodPointerType)&m21658_gshared, &t3795_TI, &t695_0_0_0, RuntimeInvoker_t5_t5_t5, t3795_m21658_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21658_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t3795_m21659_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t694_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21659_GM;
MethodInfo m21659_MI = 
{
	"GetDelegate", (methodPointerType)&m21659_gshared, &t3795_TI, &t694_0_0_0, RuntimeInvoker_t5_t5_t5, t3795_m21659_ParameterInfos, &EmptyCustomAttributesCache, 195, 0, 7, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21659_GM};
static MethodInfo* t3795_MIs[] =
{
	&m21657_MI,
	&m21658_MI,
	&m21659_MI,
	NULL
};
static MethodInfo* t3795_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m1980_MI,
	&m1981_MI,
	&m1982_MI,
	&m21658_MI,
	&m21659_MI,
};
static Il2CppInterfaceOffsetPair t3795_IOs[] = 
{
	{ &t454_TI, 4},
};
extern TypeInfo t3755_TI;
static Il2CppRGCTXData t3795_RGCTXData[6] = 
{
	&t5_0_0_0/* Type Usage */,
	&t5_0_0_0/* Type Usage */,
	&t5_0_0_0/* Type Usage */,
	&t5_0_0_0/* Type Usage */,
	&t3755_TI/* Class Usage */,
	&m21317_MI/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t3795_0_0_0;
extern Il2CppType t3795_1_0_0;
struct t3795;
extern Il2CppGenericClass t3795_GC;
TypeInfo t3795_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityEvent`4", "UnityEngine.Events", t3795_MIs, NULL, t3795_FIs, NULL, &t704_TI, NULL, NULL, &t3795_TI, NULL, t3795_VT, &EmptyCustomAttributesCache, &t3795_TI, &t3795_0_0_0, &t3795_1_0_0, t3795_IOs, &t3795_GC, NULL, NULL, NULL, t3795_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3795), 0, -1, 0, 0, -1, 1056897, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 8, 0, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5266_TI;

#include "t713.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UserAuthorizationDialog>
extern MethodInfo m35686_MI;
static PropertyInfo t5266____Current_PropertyInfo = 
{
	&t5266_TI, "Current", &m35686_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5266_PIs[] =
{
	&t5266____Current_PropertyInfo,
	NULL
};
extern Il2CppType t713_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35686_GM;
MethodInfo m35686_MI = 
{
	"get_Current", NULL, &t5266_TI, &t713_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35686_GM};
static MethodInfo* t5266_MIs[] =
{
	&m35686_MI,
	NULL
};
static TypeInfo* t5266_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5266_0_0_0;
extern Il2CppType t5266_1_0_0;
struct t5266;
extern Il2CppGenericClass t5266_GC;
TypeInfo t5266_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5266_MIs, t5266_PIs, NULL, NULL, NULL, NULL, NULL, &t5266_TI, t5266_ITIs, NULL, &EmptyCustomAttributesCache, &t5266_TI, &t5266_0_0_0, &t5266_1_0_0, NULL, &t5266_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3796.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3796_TI;
#include "t3796MD.h"

extern TypeInfo t713_TI;
extern MethodInfo m21664_MI;
extern MethodInfo m27804_MI;
struct t107;
#define m27804(__this, p0, method) (t713 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UserAuthorizationDialog>
extern Il2CppType t107_0_0_1;
FieldInfo t3796_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3796_TI, offsetof(t3796, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3796_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3796_TI, offsetof(t3796, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3796_FIs[] =
{
	&t3796_f0_FieldInfo,
	&t3796_f1_FieldInfo,
	NULL
};
extern MethodInfo m21661_MI;
static PropertyInfo t3796____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3796_TI, "System.Collections.IEnumerator.Current", &m21661_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3796____Current_PropertyInfo = 
{
	&t3796_TI, "Current", &m21664_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3796_PIs[] =
{
	&t3796____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3796____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3796_m21660_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21660_GM;
MethodInfo m21660_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3796_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3796_m21660_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21660_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21661_GM;
MethodInfo m21661_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3796_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21661_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21662_GM;
MethodInfo m21662_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3796_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21662_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21663_GM;
MethodInfo m21663_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3796_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21663_GM};
extern Il2CppType t713_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21664_GM;
MethodInfo m21664_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3796_TI, &t713_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21664_GM};
static MethodInfo* t3796_MIs[] =
{
	&m21660_MI,
	&m21661_MI,
	&m21662_MI,
	&m21663_MI,
	&m21664_MI,
	NULL
};
extern MethodInfo m21663_MI;
extern MethodInfo m21662_MI;
static MethodInfo* t3796_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21661_MI,
	&m21663_MI,
	&m21662_MI,
	&m21664_MI,
};
static TypeInfo* t3796_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5266_TI,
};
static Il2CppInterfaceOffsetPair t3796_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5266_TI, 7},
};
extern TypeInfo t713_TI;
static Il2CppRGCTXData t3796_RGCTXData[3] = 
{
	&m21664_MI/* Method Usage */,
	&t713_TI/* Class Usage */,
	&m27804_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3796_0_0_0;
extern Il2CppType t3796_1_0_0;
extern Il2CppGenericClass t3796_GC;
TypeInfo t3796_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3796_MIs, t3796_PIs, t3796_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3796_TI, t3796_ITIs, t3796_VT, &EmptyCustomAttributesCache, &t3796_TI, &t3796_0_0_0, &t3796_1_0_0, t3796_IOs, &t3796_GC, NULL, NULL, NULL, t3796_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3796)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6639_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UserAuthorizationDialog>
extern MethodInfo m35687_MI;
static PropertyInfo t6639____Count_PropertyInfo = 
{
	&t6639_TI, "Count", &m35687_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35688_MI;
static PropertyInfo t6639____IsReadOnly_PropertyInfo = 
{
	&t6639_TI, "IsReadOnly", &m35688_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6639_PIs[] =
{
	&t6639____Count_PropertyInfo,
	&t6639____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35687_GM;
MethodInfo m35687_MI = 
{
	"get_Count", NULL, &t6639_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35687_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35688_GM;
MethodInfo m35688_MI = 
{
	"get_IsReadOnly", NULL, &t6639_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35688_GM};
extern Il2CppType t713_0_0_0;
extern Il2CppType t713_0_0_0;
static ParameterInfo t6639_m35689_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t713_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35689_GM;
MethodInfo m35689_MI = 
{
	"Add", NULL, &t6639_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6639_m35689_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35689_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35690_GM;
MethodInfo m35690_MI = 
{
	"Clear", NULL, &t6639_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35690_GM};
extern Il2CppType t713_0_0_0;
static ParameterInfo t6639_m35691_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t713_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35691_GM;
MethodInfo m35691_MI = 
{
	"Contains", NULL, &t6639_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6639_m35691_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35691_GM};
extern Il2CppType t4465_0_0_0;
extern Il2CppType t4465_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6639_m35692_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4465_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35692_GM;
MethodInfo m35692_MI = 
{
	"CopyTo", NULL, &t6639_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6639_m35692_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35692_GM};
extern Il2CppType t713_0_0_0;
static ParameterInfo t6639_m35693_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t713_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35693_GM;
MethodInfo m35693_MI = 
{
	"Remove", NULL, &t6639_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6639_m35693_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35693_GM};
static MethodInfo* t6639_MIs[] =
{
	&m35687_MI,
	&m35688_MI,
	&m35689_MI,
	&m35690_MI,
	&m35691_MI,
	&m35692_MI,
	&m35693_MI,
	NULL
};
extern TypeInfo t6641_TI;
static TypeInfo* t6639_ITIs[] = 
{
	&t739_TI,
	&t6641_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6639_0_0_0;
extern Il2CppType t6639_1_0_0;
struct t6639;
extern Il2CppGenericClass t6639_GC;
TypeInfo t6639_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6639_MIs, t6639_PIs, NULL, NULL, NULL, NULL, NULL, &t6639_TI, t6639_ITIs, NULL, &EmptyCustomAttributesCache, &t6639_TI, &t6639_0_0_0, &t6639_1_0_0, NULL, &t6639_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UserAuthorizationDialog>
extern Il2CppType t5266_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35694_GM;
MethodInfo m35694_MI = 
{
	"GetEnumerator", NULL, &t6641_TI, &t5266_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35694_GM};
static MethodInfo* t6641_MIs[] =
{
	&m35694_MI,
	NULL
};
static TypeInfo* t6641_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6641_0_0_0;
extern Il2CppType t6641_1_0_0;
struct t6641;
extern Il2CppGenericClass t6641_GC;
TypeInfo t6641_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6641_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6641_TI, t6641_ITIs, NULL, &EmptyCustomAttributesCache, &t6641_TI, &t6641_0_0_0, &t6641_1_0_0, NULL, &t6641_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6640_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UserAuthorizationDialog>
extern MethodInfo m35695_MI;
extern MethodInfo m35696_MI;
static PropertyInfo t6640____Item_PropertyInfo = 
{
	&t6640_TI, "Item", &m35695_MI, &m35696_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6640_PIs[] =
{
	&t6640____Item_PropertyInfo,
	NULL
};
extern Il2CppType t713_0_0_0;
static ParameterInfo t6640_m35697_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t713_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35697_GM;
MethodInfo m35697_MI = 
{
	"IndexOf", NULL, &t6640_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6640_m35697_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35697_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t713_0_0_0;
static ParameterInfo t6640_m35698_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t713_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35698_GM;
MethodInfo m35698_MI = 
{
	"Insert", NULL, &t6640_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6640_m35698_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35698_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6640_m35699_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35699_GM;
MethodInfo m35699_MI = 
{
	"RemoveAt", NULL, &t6640_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6640_m35699_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35699_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6640_m35695_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t713_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35695_GM;
MethodInfo m35695_MI = 
{
	"get_Item", NULL, &t6640_TI, &t713_0_0_0, RuntimeInvoker_t5_t110, t6640_m35695_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35695_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t713_0_0_0;
static ParameterInfo t6640_m35696_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t713_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35696_GM;
MethodInfo m35696_MI = 
{
	"set_Item", NULL, &t6640_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6640_m35696_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35696_GM};
static MethodInfo* t6640_MIs[] =
{
	&m35697_MI,
	&m35698_MI,
	&m35699_MI,
	&m35695_MI,
	&m35696_MI,
	NULL
};
static TypeInfo* t6640_ITIs[] = 
{
	&t739_TI,
	&t6639_TI,
	&t6641_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6640_0_0_0;
extern Il2CppType t6640_1_0_0;
struct t6640;
extern Il2CppGenericClass t6640_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6640_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6640_MIs, t6640_PIs, NULL, NULL, NULL, NULL, NULL, &t6640_TI, t6640_ITIs, NULL, &t2240__CustomAttributeCache, &t6640_TI, &t6640_0_0_0, &t6640_1_0_0, NULL, &t6640_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t3797.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3797_TI;
#include "t3797MD.h"

#include "t3798.h"
extern TypeInfo t3798_TI;
#include "t3798MD.h"
extern MethodInfo m21667_MI;
extern MethodInfo m21669_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UserAuthorizationDialog>
extern Il2CppType t168_0_0_33;
FieldInfo t3797_f1_FieldInfo = 
{
	"m_Arg1", &t168_0_0_33, &t3797_TI, offsetof(t3797, f1), &EmptyCustomAttributesCache};
static FieldInfo* t3797_FIs[] =
{
	&t3797_f1_FieldInfo,
	NULL
};
extern Il2CppType t117_0_0_0;
extern Il2CppType t695_0_0_0;
extern Il2CppType t713_0_0_0;
static ParameterInfo t3797_m21665_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t117_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t713_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21665_GM;
MethodInfo m21665_MI = 
{
	".ctor", (methodPointerType)&m12070_gshared, &t3797_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t5, t3797_m21665_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL, &m21665_GM};
extern Il2CppType t168_0_0_0;
static ParameterInfo t3797_m21666_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21666_GM;
MethodInfo m21666_MI = 
{
	"Invoke", (methodPointerType)&m12072_gshared, &t3797_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3797_m21666_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21666_GM};
static MethodInfo* t3797_MIs[] =
{
	&m21665_MI,
	&m21666_MI,
	NULL
};
extern MethodInfo m21666_MI;
extern MethodInfo m21670_MI;
static MethodInfo* t3797_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21666_MI,
	&m21670_MI,
};
extern Il2CppType t3799_0_0_0;
extern TypeInfo t3799_TI;
extern MethodInfo m27814_MI;
extern TypeInfo t713_TI;
extern MethodInfo m21672_MI;
extern TypeInfo t713_TI;
static Il2CppRGCTXData t3797_RGCTXData[8] = 
{
	&t3799_0_0_0/* Type Usage */,
	&t3799_TI/* Class Usage */,
	&m27814_MI/* Method Usage */,
	&t713_TI/* Class Usage */,
	&m21672_MI/* Method Usage */,
	&m21667_MI/* Method Usage */,
	&t713_TI/* Class Usage */,
	&m21669_MI/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t3797_0_0_0;
extern Il2CppType t3797_1_0_0;
struct t3797;
extern Il2CppGenericClass t3797_GC;
TypeInfo t3797_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t3797_MIs, NULL, t3797_FIs, NULL, &t3798_TI, NULL, NULL, &t3797_TI, NULL, t3797_VT, &EmptyCustomAttributesCache, &t3797_TI, &t3797_0_0_0, &t3797_1_0_0, NULL, &t3797_GC, NULL, NULL, NULL, t3797_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3797), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif

#include "t3799.h"
extern TypeInfo t3799_TI;
#include "t3799MD.h"
struct t694;
struct t694;
 void m23910_gshared (t5 * __this, t5 * p0, MethodInfo* method);
#define m23910(__this, p0, method) (void)m23910_gshared((t5 *)__this, (t5 *)p0, method)
#define m27814(__this, p0, method) (void)m23910_gshared((t5 *)__this, (t5 *)p0, method)


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UserAuthorizationDialog>
extern Il2CppType t3799_0_0_1;
FieldInfo t3798_f0_FieldInfo = 
{
	"Delegate", &t3799_0_0_1, &t3798_TI, offsetof(t3798, f0), &EmptyCustomAttributesCache};
static FieldInfo* t3798_FIs[] =
{
	&t3798_f0_FieldInfo,
	NULL
};
extern Il2CppType t5_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t3798_m21667_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21667_GM;
MethodInfo m21667_MI = 
{
	".ctor", (methodPointerType)&m12073_gshared, &t3798_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t3798_m21667_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21667_GM};
extern Il2CppType t3799_0_0_0;
static ParameterInfo t3798_m21668_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t3799_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21668_GM;
MethodInfo m21668_MI = 
{
	".ctor", (methodPointerType)&m12074_gshared, &t3798_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3798_m21668_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21668_GM};
extern Il2CppType t168_0_0_0;
static ParameterInfo t3798_m21669_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21669_GM;
MethodInfo m21669_MI = 
{
	"Invoke", (methodPointerType)&m12075_gshared, &t3798_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3798_m21669_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21669_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t3798_m21670_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21670_GM;
MethodInfo m21670_MI = 
{
	"Find", (methodPointerType)&m12076_gshared, &t3798_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t3798_m21670_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21670_GM};
static MethodInfo* t3798_MIs[] =
{
	&m21667_MI,
	&m21668_MI,
	&m21669_MI,
	&m21670_MI,
	NULL
};
static MethodInfo* t3798_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21669_MI,
	&m21670_MI,
};
extern TypeInfo t3799_TI;
extern TypeInfo t713_TI;
static Il2CppRGCTXData t3798_RGCTXData[5] = 
{
	&t3799_0_0_0/* Type Usage */,
	&t3799_TI/* Class Usage */,
	&m27814_MI/* Method Usage */,
	&t713_TI/* Class Usage */,
	&m21672_MI/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t3798_0_0_0;
extern Il2CppType t3798_1_0_0;
struct t3798;
extern Il2CppGenericClass t3798_GC;
TypeInfo t3798_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t3798_MIs, NULL, t3798_FIs, NULL, &t694_TI, NULL, NULL, &t3798_TI, NULL, t3798_VT, &EmptyCustomAttributesCache, &t3798_TI, &t3798_0_0_0, &t3798_1_0_0, NULL, &t3798_GC, NULL, NULL, NULL, t3798_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3798), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UserAuthorizationDialog>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t3799_m21671_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21671_GM;
MethodInfo m21671_MI = 
{
	".ctor", (methodPointerType)&m12077_gshared, &t3799_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t3799_m21671_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21671_GM};
extern Il2CppType t713_0_0_0;
static ParameterInfo t3799_m21672_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t713_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21672_GM;
MethodInfo m21672_MI = 
{
	"Invoke", (methodPointerType)&m12078_gshared, &t3799_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3799_m21672_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21672_GM};
extern Il2CppType t713_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3799_m21673_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t713_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21673_GM;
MethodInfo m21673_MI = 
{
	"BeginInvoke", (methodPointerType)&m12079_gshared, &t3799_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t3799_m21673_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m21673_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t3799_m21674_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21674_GM;
MethodInfo m21674_MI = 
{
	"EndInvoke", (methodPointerType)&m12080_gshared, &t3799_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3799_m21674_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21674_GM};
static MethodInfo* t3799_MIs[] =
{
	&m21671_MI,
	&m21672_MI,
	&m21673_MI,
	&m21674_MI,
	NULL
};
extern MethodInfo m21673_MI;
extern MethodInfo m21674_MI;
static MethodInfo* t3799_VT[] =
{
	&m2341_MI,
	&m465_MI,
	&m2342_MI,
	&m467_MI,
	&m2343_MI,
	&m2344_MI,
	&m2343_MI,
	&m2345_MI,
	&m2346_MI,
	&m2347_MI,
	&m21672_MI,
	&m21673_MI,
	&m21674_MI,
};
static Il2CppInterfaceOffsetPair t3799_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t3799_1_0_0;
struct t3799;
extern Il2CppGenericClass t3799_GC;
TypeInfo t3799_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t3799_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t3799_TI, NULL, t3799_VT, &EmptyCustomAttributesCache, &t3799_TI, &t3799_0_0_0, &t3799_1_0_0, t3799_IOs, &t3799_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3799), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5268_TI;

#include "t714.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Internal.DefaultValueAttribute>
extern MethodInfo m35700_MI;
static PropertyInfo t5268____Current_PropertyInfo = 
{
	&t5268_TI, "Current", &m35700_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5268_PIs[] =
{
	&t5268____Current_PropertyInfo,
	NULL
};
extern Il2CppType t714_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35700_GM;
MethodInfo m35700_MI = 
{
	"get_Current", NULL, &t5268_TI, &t714_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35700_GM};
static MethodInfo* t5268_MIs[] =
{
	&m35700_MI,
	NULL
};
static TypeInfo* t5268_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5268_0_0_0;
extern Il2CppType t5268_1_0_0;
struct t5268;
extern Il2CppGenericClass t5268_GC;
TypeInfo t5268_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5268_MIs, t5268_PIs, NULL, NULL, NULL, NULL, NULL, &t5268_TI, t5268_ITIs, NULL, &EmptyCustomAttributesCache, &t5268_TI, &t5268_0_0_0, &t5268_1_0_0, NULL, &t5268_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3800.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3800_TI;
#include "t3800MD.h"

extern TypeInfo t714_TI;
extern MethodInfo m21679_MI;
extern MethodInfo m27816_MI;
struct t107;
#define m27816(__this, p0, method) (t714 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Internal.DefaultValueAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3800_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3800_TI, offsetof(t3800, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3800_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3800_TI, offsetof(t3800, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3800_FIs[] =
{
	&t3800_f0_FieldInfo,
	&t3800_f1_FieldInfo,
	NULL
};
extern MethodInfo m21676_MI;
static PropertyInfo t3800____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3800_TI, "System.Collections.IEnumerator.Current", &m21676_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3800____Current_PropertyInfo = 
{
	&t3800_TI, "Current", &m21679_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3800_PIs[] =
{
	&t3800____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3800____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3800_m21675_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21675_GM;
MethodInfo m21675_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3800_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3800_m21675_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21675_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21676_GM;
MethodInfo m21676_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3800_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21676_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21677_GM;
MethodInfo m21677_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3800_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21677_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21678_GM;
MethodInfo m21678_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3800_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21678_GM};
extern Il2CppType t714_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21679_GM;
MethodInfo m21679_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3800_TI, &t714_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21679_GM};
static MethodInfo* t3800_MIs[] =
{
	&m21675_MI,
	&m21676_MI,
	&m21677_MI,
	&m21678_MI,
	&m21679_MI,
	NULL
};
extern MethodInfo m21678_MI;
extern MethodInfo m21677_MI;
static MethodInfo* t3800_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21676_MI,
	&m21678_MI,
	&m21677_MI,
	&m21679_MI,
};
static TypeInfo* t3800_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5268_TI,
};
static Il2CppInterfaceOffsetPair t3800_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5268_TI, 7},
};
extern TypeInfo t714_TI;
static Il2CppRGCTXData t3800_RGCTXData[3] = 
{
	&m21679_MI/* Method Usage */,
	&t714_TI/* Class Usage */,
	&m27816_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3800_0_0_0;
extern Il2CppType t3800_1_0_0;
extern Il2CppGenericClass t3800_GC;
TypeInfo t3800_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3800_MIs, t3800_PIs, t3800_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3800_TI, t3800_ITIs, t3800_VT, &EmptyCustomAttributesCache, &t3800_TI, &t3800_0_0_0, &t3800_1_0_0, t3800_IOs, &t3800_GC, NULL, NULL, NULL, t3800_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3800)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6642_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Internal.DefaultValueAttribute>
extern MethodInfo m35701_MI;
static PropertyInfo t6642____Count_PropertyInfo = 
{
	&t6642_TI, "Count", &m35701_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35702_MI;
static PropertyInfo t6642____IsReadOnly_PropertyInfo = 
{
	&t6642_TI, "IsReadOnly", &m35702_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6642_PIs[] =
{
	&t6642____Count_PropertyInfo,
	&t6642____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35701_GM;
MethodInfo m35701_MI = 
{
	"get_Count", NULL, &t6642_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35701_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35702_GM;
MethodInfo m35702_MI = 
{
	"get_IsReadOnly", NULL, &t6642_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35702_GM};
extern Il2CppType t714_0_0_0;
extern Il2CppType t714_0_0_0;
static ParameterInfo t6642_m35703_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t714_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35703_GM;
MethodInfo m35703_MI = 
{
	"Add", NULL, &t6642_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6642_m35703_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35703_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35704_GM;
MethodInfo m35704_MI = 
{
	"Clear", NULL, &t6642_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35704_GM};
extern Il2CppType t714_0_0_0;
static ParameterInfo t6642_m35705_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t714_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35705_GM;
MethodInfo m35705_MI = 
{
	"Contains", NULL, &t6642_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6642_m35705_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35705_GM};
extern Il2CppType t4466_0_0_0;
extern Il2CppType t4466_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6642_m35706_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4466_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35706_GM;
MethodInfo m35706_MI = 
{
	"CopyTo", NULL, &t6642_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6642_m35706_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35706_GM};
extern Il2CppType t714_0_0_0;
static ParameterInfo t6642_m35707_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t714_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35707_GM;
MethodInfo m35707_MI = 
{
	"Remove", NULL, &t6642_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6642_m35707_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35707_GM};
static MethodInfo* t6642_MIs[] =
{
	&m35701_MI,
	&m35702_MI,
	&m35703_MI,
	&m35704_MI,
	&m35705_MI,
	&m35706_MI,
	&m35707_MI,
	NULL
};
extern TypeInfo t6644_TI;
static TypeInfo* t6642_ITIs[] = 
{
	&t739_TI,
	&t6644_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6642_0_0_0;
extern Il2CppType t6642_1_0_0;
struct t6642;
extern Il2CppGenericClass t6642_GC;
TypeInfo t6642_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6642_MIs, t6642_PIs, NULL, NULL, NULL, NULL, NULL, &t6642_TI, t6642_ITIs, NULL, &EmptyCustomAttributesCache, &t6642_TI, &t6642_0_0_0, &t6642_1_0_0, NULL, &t6642_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Internal.DefaultValueAttribute>
extern Il2CppType t5268_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35708_GM;
MethodInfo m35708_MI = 
{
	"GetEnumerator", NULL, &t6644_TI, &t5268_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35708_GM};
static MethodInfo* t6644_MIs[] =
{
	&m35708_MI,
	NULL
};
static TypeInfo* t6644_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6644_0_0_0;
extern Il2CppType t6644_1_0_0;
struct t6644;
extern Il2CppGenericClass t6644_GC;
TypeInfo t6644_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6644_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6644_TI, t6644_ITIs, NULL, &EmptyCustomAttributesCache, &t6644_TI, &t6644_0_0_0, &t6644_1_0_0, NULL, &t6644_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6643_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Internal.DefaultValueAttribute>
extern MethodInfo m35709_MI;
extern MethodInfo m35710_MI;
static PropertyInfo t6643____Item_PropertyInfo = 
{
	&t6643_TI, "Item", &m35709_MI, &m35710_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6643_PIs[] =
{
	&t6643____Item_PropertyInfo,
	NULL
};
extern Il2CppType t714_0_0_0;
static ParameterInfo t6643_m35711_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t714_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35711_GM;
MethodInfo m35711_MI = 
{
	"IndexOf", NULL, &t6643_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6643_m35711_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35711_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t714_0_0_0;
static ParameterInfo t6643_m35712_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t714_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35712_GM;
MethodInfo m35712_MI = 
{
	"Insert", NULL, &t6643_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6643_m35712_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35712_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6643_m35713_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35713_GM;
MethodInfo m35713_MI = 
{
	"RemoveAt", NULL, &t6643_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6643_m35713_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35713_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6643_m35709_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t714_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35709_GM;
MethodInfo m35709_MI = 
{
	"get_Item", NULL, &t6643_TI, &t714_0_0_0, RuntimeInvoker_t5_t110, t6643_m35709_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35709_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t714_0_0_0;
static ParameterInfo t6643_m35710_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t714_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35710_GM;
MethodInfo m35710_MI = 
{
	"set_Item", NULL, &t6643_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6643_m35710_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35710_GM};
static MethodInfo* t6643_MIs[] =
{
	&m35711_MI,
	&m35712_MI,
	&m35713_MI,
	&m35709_MI,
	&m35710_MI,
	NULL
};
static TypeInfo* t6643_ITIs[] = 
{
	&t739_TI,
	&t6642_TI,
	&t6644_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6643_0_0_0;
extern Il2CppType t6643_1_0_0;
struct t6643;
extern Il2CppGenericClass t6643_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6643_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6643_MIs, t6643_PIs, NULL, NULL, NULL, NULL, NULL, &t6643_TI, t6643_ITIs, NULL, &t2240__CustomAttributeCache, &t6643_TI, &t6643_0_0_0, &t6643_1_0_0, NULL, &t6643_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5270_TI;

#include "t715.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Internal.ExcludeFromDocsAttribute>
extern MethodInfo m35714_MI;
static PropertyInfo t5270____Current_PropertyInfo = 
{
	&t5270_TI, "Current", &m35714_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5270_PIs[] =
{
	&t5270____Current_PropertyInfo,
	NULL
};
extern Il2CppType t715_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35714_GM;
MethodInfo m35714_MI = 
{
	"get_Current", NULL, &t5270_TI, &t715_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35714_GM};
static MethodInfo* t5270_MIs[] =
{
	&m35714_MI,
	NULL
};
static TypeInfo* t5270_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5270_0_0_0;
extern Il2CppType t5270_1_0_0;
struct t5270;
extern Il2CppGenericClass t5270_GC;
TypeInfo t5270_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5270_MIs, t5270_PIs, NULL, NULL, NULL, NULL, NULL, &t5270_TI, t5270_ITIs, NULL, &EmptyCustomAttributesCache, &t5270_TI, &t5270_0_0_0, &t5270_1_0_0, NULL, &t5270_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3801.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3801_TI;
#include "t3801MD.h"

extern TypeInfo t715_TI;
extern MethodInfo m21684_MI;
extern MethodInfo m27827_MI;
struct t107;
#define m27827(__this, p0, method) (t715 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Internal.ExcludeFromDocsAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3801_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3801_TI, offsetof(t3801, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3801_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3801_TI, offsetof(t3801, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3801_FIs[] =
{
	&t3801_f0_FieldInfo,
	&t3801_f1_FieldInfo,
	NULL
};
extern MethodInfo m21681_MI;
static PropertyInfo t3801____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3801_TI, "System.Collections.IEnumerator.Current", &m21681_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3801____Current_PropertyInfo = 
{
	&t3801_TI, "Current", &m21684_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3801_PIs[] =
{
	&t3801____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3801____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3801_m21680_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21680_GM;
MethodInfo m21680_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3801_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3801_m21680_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21680_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21681_GM;
MethodInfo m21681_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3801_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21681_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21682_GM;
MethodInfo m21682_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3801_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21682_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21683_GM;
MethodInfo m21683_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3801_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21683_GM};
extern Il2CppType t715_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21684_GM;
MethodInfo m21684_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3801_TI, &t715_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21684_GM};
static MethodInfo* t3801_MIs[] =
{
	&m21680_MI,
	&m21681_MI,
	&m21682_MI,
	&m21683_MI,
	&m21684_MI,
	NULL
};
extern MethodInfo m21683_MI;
extern MethodInfo m21682_MI;
static MethodInfo* t3801_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21681_MI,
	&m21683_MI,
	&m21682_MI,
	&m21684_MI,
};
static TypeInfo* t3801_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5270_TI,
};
static Il2CppInterfaceOffsetPair t3801_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5270_TI, 7},
};
extern TypeInfo t715_TI;
static Il2CppRGCTXData t3801_RGCTXData[3] = 
{
	&m21684_MI/* Method Usage */,
	&t715_TI/* Class Usage */,
	&m27827_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3801_0_0_0;
extern Il2CppType t3801_1_0_0;
extern Il2CppGenericClass t3801_GC;
TypeInfo t3801_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3801_MIs, t3801_PIs, t3801_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3801_TI, t3801_ITIs, t3801_VT, &EmptyCustomAttributesCache, &t3801_TI, &t3801_0_0_0, &t3801_1_0_0, t3801_IOs, &t3801_GC, NULL, NULL, NULL, t3801_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3801)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6645_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Internal.ExcludeFromDocsAttribute>
extern MethodInfo m35715_MI;
static PropertyInfo t6645____Count_PropertyInfo = 
{
	&t6645_TI, "Count", &m35715_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35716_MI;
static PropertyInfo t6645____IsReadOnly_PropertyInfo = 
{
	&t6645_TI, "IsReadOnly", &m35716_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6645_PIs[] =
{
	&t6645____Count_PropertyInfo,
	&t6645____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35715_GM;
MethodInfo m35715_MI = 
{
	"get_Count", NULL, &t6645_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35715_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35716_GM;
MethodInfo m35716_MI = 
{
	"get_IsReadOnly", NULL, &t6645_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35716_GM};
extern Il2CppType t715_0_0_0;
extern Il2CppType t715_0_0_0;
static ParameterInfo t6645_m35717_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t715_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35717_GM;
MethodInfo m35717_MI = 
{
	"Add", NULL, &t6645_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6645_m35717_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35717_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35718_GM;
MethodInfo m35718_MI = 
{
	"Clear", NULL, &t6645_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35718_GM};
extern Il2CppType t715_0_0_0;
static ParameterInfo t6645_m35719_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t715_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35719_GM;
MethodInfo m35719_MI = 
{
	"Contains", NULL, &t6645_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6645_m35719_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35719_GM};
extern Il2CppType t4467_0_0_0;
extern Il2CppType t4467_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6645_m35720_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4467_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35720_GM;
MethodInfo m35720_MI = 
{
	"CopyTo", NULL, &t6645_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6645_m35720_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35720_GM};
extern Il2CppType t715_0_0_0;
static ParameterInfo t6645_m35721_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t715_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35721_GM;
MethodInfo m35721_MI = 
{
	"Remove", NULL, &t6645_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6645_m35721_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35721_GM};
static MethodInfo* t6645_MIs[] =
{
	&m35715_MI,
	&m35716_MI,
	&m35717_MI,
	&m35718_MI,
	&m35719_MI,
	&m35720_MI,
	&m35721_MI,
	NULL
};
extern TypeInfo t6647_TI;
static TypeInfo* t6645_ITIs[] = 
{
	&t739_TI,
	&t6647_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6645_0_0_0;
extern Il2CppType t6645_1_0_0;
struct t6645;
extern Il2CppGenericClass t6645_GC;
TypeInfo t6645_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6645_MIs, t6645_PIs, NULL, NULL, NULL, NULL, NULL, &t6645_TI, t6645_ITIs, NULL, &EmptyCustomAttributesCache, &t6645_TI, &t6645_0_0_0, &t6645_1_0_0, NULL, &t6645_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Internal.ExcludeFromDocsAttribute>
extern Il2CppType t5270_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35722_GM;
MethodInfo m35722_MI = 
{
	"GetEnumerator", NULL, &t6647_TI, &t5270_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35722_GM};
static MethodInfo* t6647_MIs[] =
{
	&m35722_MI,
	NULL
};
static TypeInfo* t6647_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6647_0_0_0;
extern Il2CppType t6647_1_0_0;
struct t6647;
extern Il2CppGenericClass t6647_GC;
TypeInfo t6647_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6647_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6647_TI, t6647_ITIs, NULL, &EmptyCustomAttributesCache, &t6647_TI, &t6647_0_0_0, &t6647_1_0_0, NULL, &t6647_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6646_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Internal.ExcludeFromDocsAttribute>
extern MethodInfo m35723_MI;
extern MethodInfo m35724_MI;
static PropertyInfo t6646____Item_PropertyInfo = 
{
	&t6646_TI, "Item", &m35723_MI, &m35724_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6646_PIs[] =
{
	&t6646____Item_PropertyInfo,
	NULL
};
extern Il2CppType t715_0_0_0;
static ParameterInfo t6646_m35725_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t715_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35725_GM;
MethodInfo m35725_MI = 
{
	"IndexOf", NULL, &t6646_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6646_m35725_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35725_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t715_0_0_0;
static ParameterInfo t6646_m35726_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t715_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35726_GM;
MethodInfo m35726_MI = 
{
	"Insert", NULL, &t6646_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6646_m35726_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35726_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6646_m35727_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35727_GM;
MethodInfo m35727_MI = 
{
	"RemoveAt", NULL, &t6646_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6646_m35727_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35727_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6646_m35723_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t715_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35723_GM;
MethodInfo m35723_MI = 
{
	"get_Item", NULL, &t6646_TI, &t715_0_0_0, RuntimeInvoker_t5_t110, t6646_m35723_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35723_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t715_0_0_0;
static ParameterInfo t6646_m35724_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t715_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35724_GM;
MethodInfo m35724_MI = 
{
	"set_Item", NULL, &t6646_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6646_m35724_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35724_GM};
static MethodInfo* t6646_MIs[] =
{
	&m35725_MI,
	&m35726_MI,
	&m35727_MI,
	&m35723_MI,
	&m35724_MI,
	NULL
};
static TypeInfo* t6646_ITIs[] = 
{
	&t739_TI,
	&t6645_TI,
	&t6647_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6646_0_0_0;
extern Il2CppType t6646_1_0_0;
struct t6646;
extern Il2CppGenericClass t6646_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6646_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6646_MIs, t6646_PIs, NULL, NULL, NULL, NULL, NULL, &t6646_TI, t6646_ITIs, NULL, &t2240__CustomAttributeCache, &t6646_TI, &t6646_0_0_0, &t6646_1_0_0, NULL, &t6646_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5272_TI;

#include "t452.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Serialization.FormerlySerializedAsAttribute>
extern MethodInfo m35728_MI;
static PropertyInfo t5272____Current_PropertyInfo = 
{
	&t5272_TI, "Current", &m35728_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5272_PIs[] =
{
	&t5272____Current_PropertyInfo,
	NULL
};
extern Il2CppType t452_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35728_GM;
MethodInfo m35728_MI = 
{
	"get_Current", NULL, &t5272_TI, &t452_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35728_GM};
static MethodInfo* t5272_MIs[] =
{
	&m35728_MI,
	NULL
};
static TypeInfo* t5272_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5272_0_0_0;
extern Il2CppType t5272_1_0_0;
struct t5272;
extern Il2CppGenericClass t5272_GC;
TypeInfo t5272_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5272_MIs, t5272_PIs, NULL, NULL, NULL, NULL, NULL, &t5272_TI, t5272_ITIs, NULL, &EmptyCustomAttributesCache, &t5272_TI, &t5272_0_0_0, &t5272_1_0_0, NULL, &t5272_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3802.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3802_TI;
#include "t3802MD.h"

extern TypeInfo t452_TI;
extern MethodInfo m21689_MI;
extern MethodInfo m27838_MI;
struct t107;
#define m27838(__this, p0, method) (t452 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Serialization.FormerlySerializedAsAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3802_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3802_TI, offsetof(t3802, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3802_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3802_TI, offsetof(t3802, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3802_FIs[] =
{
	&t3802_f0_FieldInfo,
	&t3802_f1_FieldInfo,
	NULL
};
extern MethodInfo m21686_MI;
static PropertyInfo t3802____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3802_TI, "System.Collections.IEnumerator.Current", &m21686_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3802____Current_PropertyInfo = 
{
	&t3802_TI, "Current", &m21689_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3802_PIs[] =
{
	&t3802____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3802____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3802_m21685_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21685_GM;
MethodInfo m21685_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3802_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3802_m21685_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21685_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21686_GM;
MethodInfo m21686_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3802_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21686_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21687_GM;
MethodInfo m21687_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3802_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21687_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21688_GM;
MethodInfo m21688_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3802_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21688_GM};
extern Il2CppType t452_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21689_GM;
MethodInfo m21689_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3802_TI, &t452_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21689_GM};
static MethodInfo* t3802_MIs[] =
{
	&m21685_MI,
	&m21686_MI,
	&m21687_MI,
	&m21688_MI,
	&m21689_MI,
	NULL
};
extern MethodInfo m21688_MI;
extern MethodInfo m21687_MI;
static MethodInfo* t3802_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21686_MI,
	&m21688_MI,
	&m21687_MI,
	&m21689_MI,
};
static TypeInfo* t3802_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5272_TI,
};
static Il2CppInterfaceOffsetPair t3802_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5272_TI, 7},
};
extern TypeInfo t452_TI;
static Il2CppRGCTXData t3802_RGCTXData[3] = 
{
	&m21689_MI/* Method Usage */,
	&t452_TI/* Class Usage */,
	&m27838_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3802_0_0_0;
extern Il2CppType t3802_1_0_0;
extern Il2CppGenericClass t3802_GC;
TypeInfo t3802_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3802_MIs, t3802_PIs, t3802_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3802_TI, t3802_ITIs, t3802_VT, &EmptyCustomAttributesCache, &t3802_TI, &t3802_0_0_0, &t3802_1_0_0, t3802_IOs, &t3802_GC, NULL, NULL, NULL, t3802_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3802)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6648_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Serialization.FormerlySerializedAsAttribute>
extern MethodInfo m35729_MI;
static PropertyInfo t6648____Count_PropertyInfo = 
{
	&t6648_TI, "Count", &m35729_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35730_MI;
static PropertyInfo t6648____IsReadOnly_PropertyInfo = 
{
	&t6648_TI, "IsReadOnly", &m35730_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6648_PIs[] =
{
	&t6648____Count_PropertyInfo,
	&t6648____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35729_GM;
MethodInfo m35729_MI = 
{
	"get_Count", NULL, &t6648_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35729_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35730_GM;
MethodInfo m35730_MI = 
{
	"get_IsReadOnly", NULL, &t6648_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35730_GM};
extern Il2CppType t452_0_0_0;
extern Il2CppType t452_0_0_0;
static ParameterInfo t6648_m35731_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t452_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35731_GM;
MethodInfo m35731_MI = 
{
	"Add", NULL, &t6648_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6648_m35731_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35731_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35732_GM;
MethodInfo m35732_MI = 
{
	"Clear", NULL, &t6648_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35732_GM};
extern Il2CppType t452_0_0_0;
static ParameterInfo t6648_m35733_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t452_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35733_GM;
MethodInfo m35733_MI = 
{
	"Contains", NULL, &t6648_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6648_m35733_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35733_GM};
extern Il2CppType t4468_0_0_0;
extern Il2CppType t4468_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6648_m35734_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4468_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35734_GM;
MethodInfo m35734_MI = 
{
	"CopyTo", NULL, &t6648_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6648_m35734_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35734_GM};
extern Il2CppType t452_0_0_0;
static ParameterInfo t6648_m35735_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t452_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35735_GM;
MethodInfo m35735_MI = 
{
	"Remove", NULL, &t6648_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6648_m35735_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35735_GM};
static MethodInfo* t6648_MIs[] =
{
	&m35729_MI,
	&m35730_MI,
	&m35731_MI,
	&m35732_MI,
	&m35733_MI,
	&m35734_MI,
	&m35735_MI,
	NULL
};
extern TypeInfo t6650_TI;
static TypeInfo* t6648_ITIs[] = 
{
	&t739_TI,
	&t6650_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6648_0_0_0;
extern Il2CppType t6648_1_0_0;
struct t6648;
extern Il2CppGenericClass t6648_GC;
TypeInfo t6648_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6648_MIs, t6648_PIs, NULL, NULL, NULL, NULL, NULL, &t6648_TI, t6648_ITIs, NULL, &EmptyCustomAttributesCache, &t6648_TI, &t6648_0_0_0, &t6648_1_0_0, NULL, &t6648_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Serialization.FormerlySerializedAsAttribute>
extern Il2CppType t5272_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35736_GM;
MethodInfo m35736_MI = 
{
	"GetEnumerator", NULL, &t6650_TI, &t5272_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35736_GM};
static MethodInfo* t6650_MIs[] =
{
	&m35736_MI,
	NULL
};
static TypeInfo* t6650_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6650_0_0_0;
extern Il2CppType t6650_1_0_0;
struct t6650;
extern Il2CppGenericClass t6650_GC;
TypeInfo t6650_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6650_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6650_TI, t6650_ITIs, NULL, &EmptyCustomAttributesCache, &t6650_TI, &t6650_0_0_0, &t6650_1_0_0, NULL, &t6650_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6649_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Serialization.FormerlySerializedAsAttribute>
extern MethodInfo m35737_MI;
extern MethodInfo m35738_MI;
static PropertyInfo t6649____Item_PropertyInfo = 
{
	&t6649_TI, "Item", &m35737_MI, &m35738_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6649_PIs[] =
{
	&t6649____Item_PropertyInfo,
	NULL
};
extern Il2CppType t452_0_0_0;
static ParameterInfo t6649_m35739_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t452_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35739_GM;
MethodInfo m35739_MI = 
{
	"IndexOf", NULL, &t6649_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6649_m35739_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35739_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t452_0_0_0;
static ParameterInfo t6649_m35740_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t452_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35740_GM;
MethodInfo m35740_MI = 
{
	"Insert", NULL, &t6649_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6649_m35740_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35740_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6649_m35741_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35741_GM;
MethodInfo m35741_MI = 
{
	"RemoveAt", NULL, &t6649_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6649_m35741_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35741_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6649_m35737_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t452_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35737_GM;
MethodInfo m35737_MI = 
{
	"get_Item", NULL, &t6649_TI, &t452_0_0_0, RuntimeInvoker_t5_t110, t6649_m35737_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35737_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t452_0_0_0;
static ParameterInfo t6649_m35738_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t452_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35738_GM;
MethodInfo m35738_MI = 
{
	"set_Item", NULL, &t6649_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6649_m35738_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35738_GM};
static MethodInfo* t6649_MIs[] =
{
	&m35739_MI,
	&m35740_MI,
	&m35741_MI,
	&m35737_MI,
	&m35738_MI,
	NULL
};
static TypeInfo* t6649_ITIs[] = 
{
	&t739_TI,
	&t6648_TI,
	&t6650_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6649_0_0_0;
extern Il2CppType t6649_1_0_0;
struct t6649;
extern Il2CppGenericClass t6649_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6649_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6649_MIs, t6649_PIs, NULL, NULL, NULL, NULL, NULL, &t6649_TI, t6649_ITIs, NULL, &t2240__CustomAttributeCache, &t6649_TI, &t6649_0_0_0, &t6649_1_0_0, NULL, &t6649_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5274_TI;

#include "t716.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngineInternal.TypeInferenceRules>
extern MethodInfo m35742_MI;
static PropertyInfo t5274____Current_PropertyInfo = 
{
	&t5274_TI, "Current", &m35742_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5274_PIs[] =
{
	&t5274____Current_PropertyInfo,
	NULL
};
extern Il2CppType t716_0_0_0;
extern void* RuntimeInvoker_t716 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35742_GM;
MethodInfo m35742_MI = 
{
	"get_Current", NULL, &t5274_TI, &t716_0_0_0, RuntimeInvoker_t716, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35742_GM};
static MethodInfo* t5274_MIs[] =
{
	&m35742_MI,
	NULL
};
static TypeInfo* t5274_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5274_0_0_0;
extern Il2CppType t5274_1_0_0;
struct t5274;
extern Il2CppGenericClass t5274_GC;
TypeInfo t5274_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5274_MIs, t5274_PIs, NULL, NULL, NULL, NULL, NULL, &t5274_TI, t5274_ITIs, NULL, &EmptyCustomAttributesCache, &t5274_TI, &t5274_0_0_0, &t5274_1_0_0, NULL, &t5274_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3803.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3803_TI;
#include "t3803MD.h"

extern TypeInfo t716_TI;
extern MethodInfo m21694_MI;
extern MethodInfo m27849_MI;
struct t107;
 int32_t m27849 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21690_MI;
 void m21690 (t3803 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21691_MI;
 t5 * m21691 (t3803 * __this, MethodInfo* method){
	{
		int32_t L_0 = m21694(__this, &m21694_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t716_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m21692_MI;
 void m21692 (t3803 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21693_MI;
 bool m21693 (t3803 * __this, MethodInfo* method){
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
		t107 * L_1 = (__this->f0);
		int32_t L_2 = m4763(L_1, &m4763_MI);
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
 int32_t m21694 (t3803 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t133 * L_1 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4758(L_1, (t11*) &_stringLiteral1078, &m4758_MI);
		il2cpp_codegen_raise_exception(L_1);
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
		t133 * L_3 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4758(L_3, (t11*) &_stringLiteral1079, &m4758_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t107 * L_4 = (__this->f0);
		t107 * L_5 = (__this->f0);
		int32_t L_6 = m4763(L_5, &m4763_MI);
		int32_t L_7 = (__this->f1);
		int32_t L_8 = m27849(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m27849_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngineInternal.TypeInferenceRules>
extern Il2CppType t107_0_0_1;
FieldInfo t3803_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3803_TI, offsetof(t3803, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3803_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3803_TI, offsetof(t3803, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3803_FIs[] =
{
	&t3803_f0_FieldInfo,
	&t3803_f1_FieldInfo,
	NULL
};
static PropertyInfo t3803____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3803_TI, "System.Collections.IEnumerator.Current", &m21691_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3803____Current_PropertyInfo = 
{
	&t3803_TI, "Current", &m21694_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3803_PIs[] =
{
	&t3803____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3803____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3803_m21690_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21690_GM;
MethodInfo m21690_MI = 
{
	".ctor", (methodPointerType)&m21690, &t3803_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3803_m21690_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21690_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21691_GM;
MethodInfo m21691_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21691, &t3803_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21691_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21692_GM;
MethodInfo m21692_MI = 
{
	"Dispose", (methodPointerType)&m21692, &t3803_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21692_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21693_GM;
MethodInfo m21693_MI = 
{
	"MoveNext", (methodPointerType)&m21693, &t3803_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21693_GM};
extern Il2CppType t716_0_0_0;
extern void* RuntimeInvoker_t716 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21694_GM;
MethodInfo m21694_MI = 
{
	"get_Current", (methodPointerType)&m21694, &t3803_TI, &t716_0_0_0, RuntimeInvoker_t716, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21694_GM};
static MethodInfo* t3803_MIs[] =
{
	&m21690_MI,
	&m21691_MI,
	&m21692_MI,
	&m21693_MI,
	&m21694_MI,
	NULL
};
static MethodInfo* t3803_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21691_MI,
	&m21693_MI,
	&m21692_MI,
	&m21694_MI,
};
static TypeInfo* t3803_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5274_TI,
};
static Il2CppInterfaceOffsetPair t3803_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5274_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3803_0_0_0;
extern Il2CppType t3803_1_0_0;
extern Il2CppGenericClass t3803_GC;
TypeInfo t3803_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3803_MIs, t3803_PIs, t3803_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3803_TI, t3803_ITIs, t3803_VT, &EmptyCustomAttributesCache, &t3803_TI, &t3803_0_0_0, &t3803_1_0_0, t3803_IOs, &t3803_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3803)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6651_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngineInternal.TypeInferenceRules>
extern MethodInfo m35743_MI;
static PropertyInfo t6651____Count_PropertyInfo = 
{
	&t6651_TI, "Count", &m35743_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35744_MI;
static PropertyInfo t6651____IsReadOnly_PropertyInfo = 
{
	&t6651_TI, "IsReadOnly", &m35744_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6651_PIs[] =
{
	&t6651____Count_PropertyInfo,
	&t6651____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35743_GM;
MethodInfo m35743_MI = 
{
	"get_Count", NULL, &t6651_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35743_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35744_GM;
MethodInfo m35744_MI = 
{
	"get_IsReadOnly", NULL, &t6651_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35744_GM};
extern Il2CppType t716_0_0_0;
extern Il2CppType t716_0_0_0;
static ParameterInfo t6651_m35745_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t716_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35745_GM;
MethodInfo m35745_MI = 
{
	"Add", NULL, &t6651_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6651_m35745_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35745_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35746_GM;
MethodInfo m35746_MI = 
{
	"Clear", NULL, &t6651_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35746_GM};
extern Il2CppType t716_0_0_0;
static ParameterInfo t6651_m35747_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t716_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35747_GM;
MethodInfo m35747_MI = 
{
	"Contains", NULL, &t6651_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6651_m35747_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35747_GM};
extern Il2CppType t4469_0_0_0;
extern Il2CppType t4469_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6651_m35748_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4469_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35748_GM;
MethodInfo m35748_MI = 
{
	"CopyTo", NULL, &t6651_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6651_m35748_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35748_GM};
extern Il2CppType t716_0_0_0;
static ParameterInfo t6651_m35749_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t716_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35749_GM;
MethodInfo m35749_MI = 
{
	"Remove", NULL, &t6651_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6651_m35749_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35749_GM};
static MethodInfo* t6651_MIs[] =
{
	&m35743_MI,
	&m35744_MI,
	&m35745_MI,
	&m35746_MI,
	&m35747_MI,
	&m35748_MI,
	&m35749_MI,
	NULL
};
extern TypeInfo t6653_TI;
static TypeInfo* t6651_ITIs[] = 
{
	&t739_TI,
	&t6653_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6651_0_0_0;
extern Il2CppType t6651_1_0_0;
struct t6651;
extern Il2CppGenericClass t6651_GC;
TypeInfo t6651_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6651_MIs, t6651_PIs, NULL, NULL, NULL, NULL, NULL, &t6651_TI, t6651_ITIs, NULL, &EmptyCustomAttributesCache, &t6651_TI, &t6651_0_0_0, &t6651_1_0_0, NULL, &t6651_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngineInternal.TypeInferenceRules>
extern Il2CppType t5274_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35750_GM;
MethodInfo m35750_MI = 
{
	"GetEnumerator", NULL, &t6653_TI, &t5274_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35750_GM};
static MethodInfo* t6653_MIs[] =
{
	&m35750_MI,
	NULL
};
static TypeInfo* t6653_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6653_0_0_0;
extern Il2CppType t6653_1_0_0;
struct t6653;
extern Il2CppGenericClass t6653_GC;
TypeInfo t6653_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6653_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6653_TI, t6653_ITIs, NULL, &EmptyCustomAttributesCache, &t6653_TI, &t6653_0_0_0, &t6653_1_0_0, NULL, &t6653_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6652_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngineInternal.TypeInferenceRules>
extern MethodInfo m35751_MI;
extern MethodInfo m35752_MI;
static PropertyInfo t6652____Item_PropertyInfo = 
{
	&t6652_TI, "Item", &m35751_MI, &m35752_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6652_PIs[] =
{
	&t6652____Item_PropertyInfo,
	NULL
};
extern Il2CppType t716_0_0_0;
static ParameterInfo t6652_m35753_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t716_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35753_GM;
MethodInfo m35753_MI = 
{
	"IndexOf", NULL, &t6652_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6652_m35753_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35753_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t716_0_0_0;
static ParameterInfo t6652_m35754_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t716_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35754_GM;
MethodInfo m35754_MI = 
{
	"Insert", NULL, &t6652_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6652_m35754_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35754_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6652_m35755_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35755_GM;
MethodInfo m35755_MI = 
{
	"RemoveAt", NULL, &t6652_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6652_m35755_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35755_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6652_m35751_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t716_0_0_0;
extern void* RuntimeInvoker_t716_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35751_GM;
MethodInfo m35751_MI = 
{
	"get_Item", NULL, &t6652_TI, &t716_0_0_0, RuntimeInvoker_t716_t110, t6652_m35751_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35751_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t716_0_0_0;
static ParameterInfo t6652_m35752_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t716_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35752_GM;
MethodInfo m35752_MI = 
{
	"set_Item", NULL, &t6652_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6652_m35752_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35752_GM};
static MethodInfo* t6652_MIs[] =
{
	&m35753_MI,
	&m35754_MI,
	&m35755_MI,
	&m35751_MI,
	&m35752_MI,
	NULL
};
static TypeInfo* t6652_ITIs[] = 
{
	&t739_TI,
	&t6651_TI,
	&t6653_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6652_0_0_0;
extern Il2CppType t6652_1_0_0;
struct t6652;
extern Il2CppGenericClass t6652_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6652_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6652_MIs, t6652_PIs, NULL, NULL, NULL, NULL, NULL, &t6652_TI, t6652_ITIs, NULL, &t2240__CustomAttributeCache, &t6652_TI, &t6652_0_0_0, &t6652_1_0_0, NULL, &t6652_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5276_TI;

#include "t717.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngineInternal.TypeInferenceRuleAttribute>
extern MethodInfo m35756_MI;
static PropertyInfo t5276____Current_PropertyInfo = 
{
	&t5276_TI, "Current", &m35756_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5276_PIs[] =
{
	&t5276____Current_PropertyInfo,
	NULL
};
extern Il2CppType t717_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35756_GM;
MethodInfo m35756_MI = 
{
	"get_Current", NULL, &t5276_TI, &t717_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35756_GM};
static MethodInfo* t5276_MIs[] =
{
	&m35756_MI,
	NULL
};
static TypeInfo* t5276_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5276_0_0_0;
extern Il2CppType t5276_1_0_0;
struct t5276;
extern Il2CppGenericClass t5276_GC;
TypeInfo t5276_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5276_MIs, t5276_PIs, NULL, NULL, NULL, NULL, NULL, &t5276_TI, t5276_ITIs, NULL, &EmptyCustomAttributesCache, &t5276_TI, &t5276_0_0_0, &t5276_1_0_0, NULL, &t5276_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3804.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3804_TI;
#include "t3804MD.h"

extern TypeInfo t717_TI;
extern MethodInfo m21699_MI;
extern MethodInfo m27860_MI;
struct t107;
#define m27860(__this, p0, method) (t717 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngineInternal.TypeInferenceRuleAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3804_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3804_TI, offsetof(t3804, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3804_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3804_TI, offsetof(t3804, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3804_FIs[] =
{
	&t3804_f0_FieldInfo,
	&t3804_f1_FieldInfo,
	NULL
};
extern MethodInfo m21696_MI;
static PropertyInfo t3804____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3804_TI, "System.Collections.IEnumerator.Current", &m21696_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3804____Current_PropertyInfo = 
{
	&t3804_TI, "Current", &m21699_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3804_PIs[] =
{
	&t3804____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3804____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3804_m21695_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21695_GM;
MethodInfo m21695_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3804_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3804_m21695_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21695_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21696_GM;
MethodInfo m21696_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3804_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21696_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21697_GM;
MethodInfo m21697_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3804_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21697_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21698_GM;
MethodInfo m21698_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3804_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21698_GM};
extern Il2CppType t717_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21699_GM;
MethodInfo m21699_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3804_TI, &t717_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21699_GM};
static MethodInfo* t3804_MIs[] =
{
	&m21695_MI,
	&m21696_MI,
	&m21697_MI,
	&m21698_MI,
	&m21699_MI,
	NULL
};
extern MethodInfo m21698_MI;
extern MethodInfo m21697_MI;
static MethodInfo* t3804_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21696_MI,
	&m21698_MI,
	&m21697_MI,
	&m21699_MI,
};
static TypeInfo* t3804_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5276_TI,
};
static Il2CppInterfaceOffsetPair t3804_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5276_TI, 7},
};
extern TypeInfo t717_TI;
static Il2CppRGCTXData t3804_RGCTXData[3] = 
{
	&m21699_MI/* Method Usage */,
	&t717_TI/* Class Usage */,
	&m27860_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3804_0_0_0;
extern Il2CppType t3804_1_0_0;
extern Il2CppGenericClass t3804_GC;
TypeInfo t3804_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3804_MIs, t3804_PIs, t3804_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3804_TI, t3804_ITIs, t3804_VT, &EmptyCustomAttributesCache, &t3804_TI, &t3804_0_0_0, &t3804_1_0_0, t3804_IOs, &t3804_GC, NULL, NULL, NULL, t3804_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3804)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
