#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t4044.h"
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
extern TypeInfo t4044_TI;
#include "t4044MD.h"

#include "t5.h"
#include "t1689.h"
#include "t110.h"
#include "t11.h"
#include "t133.h"
#include "t109.h"
#include "t107.h"
#include "t108.h"
extern TypeInfo t1689_TI;
extern TypeInfo t133_TI;
#include "t133MD.h"
#include "t107MD.h"
extern MethodInfo m22944_MI;
extern MethodInfo m4758_MI;
extern MethodInfo m4763_MI;
extern MethodInfo m30236_MI;
struct t107;
#include "t1181.h"
 int32_t m30236 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22940_MI;
 void m22940 (t4044 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22941_MI;
 t5 * m22941 (t4044 * __this, MethodInfo* method){
	{
		int32_t L_0 = m22944(__this, &m22944_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1689_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22942_MI;
 void m22942 (t4044 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22943_MI;
 bool m22943 (t4044 * __this, MethodInfo* method){
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
 int32_t m22944 (t4044 * __this, MethodInfo* method){
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
		int32_t L_8 = m30236(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m30236_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>
extern Il2CppType t107_0_0_1;
FieldInfo t4044_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4044_TI, offsetof(t4044, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4044_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4044_TI, offsetof(t4044, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4044_FIs[] =
{
	&t4044_f0_FieldInfo,
	&t4044_f1_FieldInfo,
	NULL
};
static PropertyInfo t4044____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4044_TI, "System.Collections.IEnumerator.Current", &m22941_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4044____Current_PropertyInfo = 
{
	&t4044_TI, "Current", &m22944_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4044_PIs[] =
{
	&t4044____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4044____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
extern Il2CppType t107_0_0_0;
static ParameterInfo t4044_m22940_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22940_GM;
MethodInfo m22940_MI = 
{
	".ctor", (methodPointerType)&m22940, &t4044_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4044_m22940_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22940_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22941_GM;
MethodInfo m22941_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22941, &t4044_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22941_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22942_GM;
MethodInfo m22942_MI = 
{
	"Dispose", (methodPointerType)&m22942, &t4044_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22942_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22943_GM;
MethodInfo m22943_MI = 
{
	"MoveNext", (methodPointerType)&m22943, &t4044_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22943_GM};
extern Il2CppType t1689_0_0_0;
extern void* RuntimeInvoker_t1689 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22944_GM;
MethodInfo m22944_MI = 
{
	"get_Current", (methodPointerType)&m22944, &t4044_TI, &t1689_0_0_0, RuntimeInvoker_t1689, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22944_GM};
static MethodInfo* t4044_MIs[] =
{
	&m22940_MI,
	&m22941_MI,
	&m22942_MI,
	&m22943_MI,
	&m22944_MI,
	NULL
};
extern MethodInfo m2041_MI;
extern MethodInfo m465_MI;
extern MethodInfo m2042_MI;
extern MethodInfo m2147_MI;
static MethodInfo* t4044_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22941_MI,
	&m22943_MI,
	&m22942_MI,
	&m22944_MI,
};
extern TypeInfo t196_TI;
extern TypeInfo t132_TI;
extern TypeInfo t5686_TI;
static TypeInfo* t4044_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5686_TI,
};
static Il2CppInterfaceOffsetPair t4044_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5686_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4044_0_0_0;
extern Il2CppType t4044_1_0_0;
extern TypeInfo t267_TI;
extern Il2CppGenericClass t4044_GC;
extern TypeInfo t107_TI;
TypeInfo t4044_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4044_MIs, t4044_PIs, t4044_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4044_TI, t4044_ITIs, t4044_VT, &EmptyCustomAttributesCache, &t4044_TI, &t4044_0_0_0, &t4044_1_0_0, t4044_IOs, &t4044_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4044)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7290_TI;

#include "mscorlib_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>
extern MethodInfo m38748_MI;
static PropertyInfo t7290____Count_PropertyInfo = 
{
	&t7290_TI, "Count", &m38748_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m38749_MI;
static PropertyInfo t7290____IsReadOnly_PropertyInfo = 
{
	&t7290_TI, "IsReadOnly", &m38749_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7290_PIs[] =
{
	&t7290____Count_PropertyInfo,
	&t7290____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38748_GM;
MethodInfo m38748_MI = 
{
	"get_Count", NULL, &t7290_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38748_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38749_GM;
MethodInfo m38749_MI = 
{
	"get_IsReadOnly", NULL, &t7290_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38749_GM};
extern Il2CppType t1689_0_0_0;
extern Il2CppType t1689_0_0_0;
static ParameterInfo t7290_m38750_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1689_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38750_GM;
MethodInfo m38750_MI = 
{
	"Add", NULL, &t7290_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7290_m38750_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38750_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38751_GM;
MethodInfo m38751_MI = 
{
	"Clear", NULL, &t7290_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38751_GM};
extern Il2CppType t1689_0_0_0;
static ParameterInfo t7290_m38752_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1689_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38752_GM;
MethodInfo m38752_MI = 
{
	"Contains", NULL, &t7290_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7290_m38752_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38752_GM};
extern Il2CppType t4308_0_0_0;
extern Il2CppType t4308_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7290_m38753_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4308_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38753_GM;
MethodInfo m38753_MI = 
{
	"CopyTo", NULL, &t7290_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7290_m38753_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38753_GM};
extern Il2CppType t1689_0_0_0;
static ParameterInfo t7290_m38754_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1689_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38754_GM;
MethodInfo m38754_MI = 
{
	"Remove", NULL, &t7290_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7290_m38754_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38754_GM};
static MethodInfo* t7290_MIs[] =
{
	&m38748_MI,
	&m38749_MI,
	&m38750_MI,
	&m38751_MI,
	&m38752_MI,
	&m38753_MI,
	&m38754_MI,
	NULL
};
extern TypeInfo t739_TI;
extern TypeInfo t7292_TI;
static TypeInfo* t7290_ITIs[] = 
{
	&t739_TI,
	&t7292_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7290_0_0_0;
extern Il2CppType t7290_1_0_0;
struct t7290;
extern Il2CppGenericClass t7290_GC;
TypeInfo t7290_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7290_MIs, t7290_PIs, NULL, NULL, NULL, NULL, NULL, &t7290_TI, t7290_ITIs, NULL, &EmptyCustomAttributesCache, &t7290_TI, &t7290_0_0_0, &t7290_1_0_0, NULL, &t7290_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.LoadHint>
extern Il2CppType t5686_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38755_GM;
MethodInfo m38755_MI = 
{
	"GetEnumerator", NULL, &t7292_TI, &t5686_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38755_GM};
static MethodInfo* t7292_MIs[] =
{
	&m38755_MI,
	NULL
};
static TypeInfo* t7292_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7292_0_0_0;
extern Il2CppType t7292_1_0_0;
struct t7292;
extern Il2CppGenericClass t7292_GC;
TypeInfo t7292_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7292_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7292_TI, t7292_ITIs, NULL, &EmptyCustomAttributesCache, &t7292_TI, &t7292_0_0_0, &t7292_1_0_0, NULL, &t7292_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7291_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>
extern MethodInfo m38756_MI;
extern MethodInfo m38757_MI;
static PropertyInfo t7291____Item_PropertyInfo = 
{
	&t7291_TI, "Item", &m38756_MI, &m38757_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7291_PIs[] =
{
	&t7291____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1689_0_0_0;
static ParameterInfo t7291_m38758_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1689_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38758_GM;
MethodInfo m38758_MI = 
{
	"IndexOf", NULL, &t7291_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t7291_m38758_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38758_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1689_0_0_0;
static ParameterInfo t7291_m38759_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1689_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38759_GM;
MethodInfo m38759_MI = 
{
	"Insert", NULL, &t7291_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7291_m38759_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38759_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7291_m38760_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38760_GM;
MethodInfo m38760_MI = 
{
	"RemoveAt", NULL, &t7291_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7291_m38760_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38760_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7291_m38756_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1689_0_0_0;
extern void* RuntimeInvoker_t1689_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38756_GM;
MethodInfo m38756_MI = 
{
	"get_Item", NULL, &t7291_TI, &t1689_0_0_0, RuntimeInvoker_t1689_t110, t7291_m38756_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38756_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1689_0_0_0;
static ParameterInfo t7291_m38757_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1689_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38757_GM;
MethodInfo m38757_MI = 
{
	"set_Item", NULL, &t7291_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7291_m38757_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38757_GM};
static MethodInfo* t7291_MIs[] =
{
	&m38758_MI,
	&m38759_MI,
	&m38760_MI,
	&m38756_MI,
	&m38757_MI,
	NULL
};
static TypeInfo* t7291_ITIs[] = 
{
	&t739_TI,
	&t7290_TI,
	&t7292_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7291_0_0_0;
extern Il2CppType t7291_1_0_0;
struct t7291;
extern Il2CppGenericClass t7291_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7291_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7291_MIs, t7291_PIs, NULL, NULL, NULL, NULL, NULL, &t7291_TI, t7291_ITIs, NULL, &t2240__CustomAttributeCache, &t7291_TI, &t7291_0_0_0, &t7291_1_0_0, NULL, &t7291_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5688_TI;

#include "t1691.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern MethodInfo m38761_MI;
static PropertyInfo t5688____Current_PropertyInfo = 
{
	&t5688_TI, "Current", &m38761_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5688_PIs[] =
{
	&t5688____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1691_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38761_GM;
MethodInfo m38761_MI = 
{
	"get_Current", NULL, &t5688_TI, &t1691_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38761_GM};
static MethodInfo* t5688_MIs[] =
{
	&m38761_MI,
	NULL
};
static TypeInfo* t5688_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5688_0_0_0;
extern Il2CppType t5688_1_0_0;
struct t5688;
extern Il2CppGenericClass t5688_GC;
TypeInfo t5688_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5688_MIs, t5688_PIs, NULL, NULL, NULL, NULL, NULL, &t5688_TI, t5688_ITIs, NULL, &EmptyCustomAttributesCache, &t5688_TI, &t5688_0_0_0, &t5688_1_0_0, NULL, &t5688_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4045.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4045_TI;
#include "t4045MD.h"

extern TypeInfo t1691_TI;
extern MethodInfo m22949_MI;
extern MethodInfo m30247_MI;
struct t107;
struct t107;
 t5 * m23596_gshared (t107 * __this, int32_t p0, MethodInfo* method);
#define m23596(__this, p0, method) (t5 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
#define m30247(__this, p0, method) (t1691 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t4045_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4045_TI, offsetof(t4045, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4045_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4045_TI, offsetof(t4045, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4045_FIs[] =
{
	&t4045_f0_FieldInfo,
	&t4045_f1_FieldInfo,
	NULL
};
extern MethodInfo m22946_MI;
static PropertyInfo t4045____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4045_TI, "System.Collections.IEnumerator.Current", &m22946_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4045____Current_PropertyInfo = 
{
	&t4045_TI, "Current", &m22949_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4045_PIs[] =
{
	&t4045____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4045____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4045_m22945_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22945_GM;
MethodInfo m22945_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t4045_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4045_m22945_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22945_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22946_GM;
MethodInfo m22946_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t4045_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22946_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22947_GM;
MethodInfo m22947_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t4045_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22947_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22948_GM;
MethodInfo m22948_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t4045_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22948_GM};
extern Il2CppType t1691_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22949_GM;
MethodInfo m22949_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t4045_TI, &t1691_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22949_GM};
static MethodInfo* t4045_MIs[] =
{
	&m22945_MI,
	&m22946_MI,
	&m22947_MI,
	&m22948_MI,
	&m22949_MI,
	NULL
};
extern MethodInfo m22948_MI;
extern MethodInfo m22947_MI;
static MethodInfo* t4045_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22946_MI,
	&m22948_MI,
	&m22947_MI,
	&m22949_MI,
};
static TypeInfo* t4045_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5688_TI,
};
static Il2CppInterfaceOffsetPair t4045_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5688_TI, 7},
};
extern TypeInfo t1691_TI;
static Il2CppRGCTXData t4045_RGCTXData[3] = 
{
	&m22949_MI/* Method Usage */,
	&t1691_TI/* Class Usage */,
	&m30247_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4045_0_0_0;
extern Il2CppType t4045_1_0_0;
extern Il2CppGenericClass t4045_GC;
TypeInfo t4045_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4045_MIs, t4045_PIs, t4045_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4045_TI, t4045_ITIs, t4045_VT, &EmptyCustomAttributesCache, &t4045_TI, &t4045_0_0_0, &t4045_1_0_0, t4045_IOs, &t4045_GC, NULL, NULL, NULL, t4045_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4045)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7293_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern MethodInfo m38762_MI;
static PropertyInfo t7293____Count_PropertyInfo = 
{
	&t7293_TI, "Count", &m38762_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m38763_MI;
static PropertyInfo t7293____IsReadOnly_PropertyInfo = 
{
	&t7293_TI, "IsReadOnly", &m38763_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7293_PIs[] =
{
	&t7293____Count_PropertyInfo,
	&t7293____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38762_GM;
MethodInfo m38762_MI = 
{
	"get_Count", NULL, &t7293_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38762_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38763_GM;
MethodInfo m38763_MI = 
{
	"get_IsReadOnly", NULL, &t7293_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38763_GM};
extern Il2CppType t1691_0_0_0;
extern Il2CppType t1691_0_0_0;
static ParameterInfo t7293_m38764_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1691_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38764_GM;
MethodInfo m38764_MI = 
{
	"Add", NULL, &t7293_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t7293_m38764_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38764_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38765_GM;
MethodInfo m38765_MI = 
{
	"Clear", NULL, &t7293_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38765_GM};
extern Il2CppType t1691_0_0_0;
static ParameterInfo t7293_m38766_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1691_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38766_GM;
MethodInfo m38766_MI = 
{
	"Contains", NULL, &t7293_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7293_m38766_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38766_GM};
extern Il2CppType t4309_0_0_0;
extern Il2CppType t4309_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7293_m38767_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4309_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38767_GM;
MethodInfo m38767_MI = 
{
	"CopyTo", NULL, &t7293_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7293_m38767_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38767_GM};
extern Il2CppType t1691_0_0_0;
static ParameterInfo t7293_m38768_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1691_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38768_GM;
MethodInfo m38768_MI = 
{
	"Remove", NULL, &t7293_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7293_m38768_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38768_GM};
static MethodInfo* t7293_MIs[] =
{
	&m38762_MI,
	&m38763_MI,
	&m38764_MI,
	&m38765_MI,
	&m38766_MI,
	&m38767_MI,
	&m38768_MI,
	NULL
};
extern TypeInfo t7295_TI;
static TypeInfo* t7293_ITIs[] = 
{
	&t739_TI,
	&t7295_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7293_0_0_0;
extern Il2CppType t7293_1_0_0;
struct t7293;
extern Il2CppGenericClass t7293_GC;
TypeInfo t7293_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7293_MIs, t7293_PIs, NULL, NULL, NULL, NULL, NULL, &t7293_TI, t7293_ITIs, NULL, &EmptyCustomAttributesCache, &t7293_TI, &t7293_0_0_0, &t7293_1_0_0, NULL, &t7293_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern Il2CppType t5688_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38769_GM;
MethodInfo m38769_MI = 
{
	"GetEnumerator", NULL, &t7295_TI, &t5688_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38769_GM};
static MethodInfo* t7295_MIs[] =
{
	&m38769_MI,
	NULL
};
static TypeInfo* t7295_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7295_0_0_0;
extern Il2CppType t7295_1_0_0;
struct t7295;
extern Il2CppGenericClass t7295_GC;
TypeInfo t7295_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7295_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7295_TI, t7295_ITIs, NULL, &EmptyCustomAttributesCache, &t7295_TI, &t7295_0_0_0, &t7295_1_0_0, NULL, &t7295_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7294_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern MethodInfo m38770_MI;
extern MethodInfo m38771_MI;
static PropertyInfo t7294____Item_PropertyInfo = 
{
	&t7294_TI, "Item", &m38770_MI, &m38771_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7294_PIs[] =
{
	&t7294____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1691_0_0_0;
static ParameterInfo t7294_m38772_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1691_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38772_GM;
MethodInfo m38772_MI = 
{
	"IndexOf", NULL, &t7294_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7294_m38772_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38772_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1691_0_0_0;
static ParameterInfo t7294_m38773_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1691_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38773_GM;
MethodInfo m38773_MI = 
{
	"Insert", NULL, &t7294_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7294_m38773_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38773_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7294_m38774_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38774_GM;
MethodInfo m38774_MI = 
{
	"RemoveAt", NULL, &t7294_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7294_m38774_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38774_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7294_m38770_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1691_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38770_GM;
MethodInfo m38770_MI = 
{
	"get_Item", NULL, &t7294_TI, &t1691_0_0_0, RuntimeInvoker_t5_t110, t7294_m38770_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38770_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1691_0_0_0;
static ParameterInfo t7294_m38771_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1691_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38771_GM;
MethodInfo m38771_MI = 
{
	"set_Item", NULL, &t7294_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7294_m38771_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38771_GM};
static MethodInfo* t7294_MIs[] =
{
	&m38772_MI,
	&m38773_MI,
	&m38774_MI,
	&m38770_MI,
	&m38771_MI,
	NULL
};
static TypeInfo* t7294_ITIs[] = 
{
	&t739_TI,
	&t7293_TI,
	&t7295_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7294_0_0_0;
extern Il2CppType t7294_1_0_0;
struct t7294;
extern Il2CppGenericClass t7294_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7294_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7294_MIs, t7294_PIs, NULL, NULL, NULL, NULL, NULL, &t7294_TI, t7294_ITIs, NULL, &t2240__CustomAttributeCache, &t7294_TI, &t7294_0_0_0, &t7294_1_0_0, NULL, &t7294_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5690_TI;

#include "t1692.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.Cer>
extern MethodInfo m38775_MI;
static PropertyInfo t5690____Current_PropertyInfo = 
{
	&t5690_TI, "Current", &m38775_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5690_PIs[] =
{
	&t5690____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1692_0_0_0;
extern void* RuntimeInvoker_t1692 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38775_GM;
MethodInfo m38775_MI = 
{
	"get_Current", NULL, &t5690_TI, &t1692_0_0_0, RuntimeInvoker_t1692, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38775_GM};
static MethodInfo* t5690_MIs[] =
{
	&m38775_MI,
	NULL
};
static TypeInfo* t5690_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5690_0_0_0;
extern Il2CppType t5690_1_0_0;
struct t5690;
extern Il2CppGenericClass t5690_GC;
TypeInfo t5690_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5690_MIs, t5690_PIs, NULL, NULL, NULL, NULL, NULL, &t5690_TI, t5690_ITIs, NULL, &EmptyCustomAttributesCache, &t5690_TI, &t5690_0_0_0, &t5690_1_0_0, NULL, &t5690_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4046.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4046_TI;
#include "t4046MD.h"

extern TypeInfo t1692_TI;
extern MethodInfo m22954_MI;
extern MethodInfo m30258_MI;
struct t107;
 int32_t m30258 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22950_MI;
 void m22950 (t4046 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22951_MI;
 t5 * m22951 (t4046 * __this, MethodInfo* method){
	{
		int32_t L_0 = m22954(__this, &m22954_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1692_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22952_MI;
 void m22952 (t4046 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22953_MI;
 bool m22953 (t4046 * __this, MethodInfo* method){
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
 int32_t m22954 (t4046 * __this, MethodInfo* method){
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
		int32_t L_8 = m30258(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m30258_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>
extern Il2CppType t107_0_0_1;
FieldInfo t4046_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4046_TI, offsetof(t4046, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4046_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4046_TI, offsetof(t4046, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4046_FIs[] =
{
	&t4046_f0_FieldInfo,
	&t4046_f1_FieldInfo,
	NULL
};
static PropertyInfo t4046____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4046_TI, "System.Collections.IEnumerator.Current", &m22951_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4046____Current_PropertyInfo = 
{
	&t4046_TI, "Current", &m22954_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4046_PIs[] =
{
	&t4046____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4046____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4046_m22950_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22950_GM;
MethodInfo m22950_MI = 
{
	".ctor", (methodPointerType)&m22950, &t4046_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4046_m22950_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22950_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22951_GM;
MethodInfo m22951_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22951, &t4046_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22951_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22952_GM;
MethodInfo m22952_MI = 
{
	"Dispose", (methodPointerType)&m22952, &t4046_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22952_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22953_GM;
MethodInfo m22953_MI = 
{
	"MoveNext", (methodPointerType)&m22953, &t4046_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22953_GM};
extern Il2CppType t1692_0_0_0;
extern void* RuntimeInvoker_t1692 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22954_GM;
MethodInfo m22954_MI = 
{
	"get_Current", (methodPointerType)&m22954, &t4046_TI, &t1692_0_0_0, RuntimeInvoker_t1692, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22954_GM};
static MethodInfo* t4046_MIs[] =
{
	&m22950_MI,
	&m22951_MI,
	&m22952_MI,
	&m22953_MI,
	&m22954_MI,
	NULL
};
static MethodInfo* t4046_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22951_MI,
	&m22953_MI,
	&m22952_MI,
	&m22954_MI,
};
static TypeInfo* t4046_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5690_TI,
};
static Il2CppInterfaceOffsetPair t4046_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5690_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4046_0_0_0;
extern Il2CppType t4046_1_0_0;
extern Il2CppGenericClass t4046_GC;
TypeInfo t4046_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4046_MIs, t4046_PIs, t4046_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4046_TI, t4046_ITIs, t4046_VT, &EmptyCustomAttributesCache, &t4046_TI, &t4046_0_0_0, &t4046_1_0_0, t4046_IOs, &t4046_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4046)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7296_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>
extern MethodInfo m38776_MI;
static PropertyInfo t7296____Count_PropertyInfo = 
{
	&t7296_TI, "Count", &m38776_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m38777_MI;
static PropertyInfo t7296____IsReadOnly_PropertyInfo = 
{
	&t7296_TI, "IsReadOnly", &m38777_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7296_PIs[] =
{
	&t7296____Count_PropertyInfo,
	&t7296____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38776_GM;
MethodInfo m38776_MI = 
{
	"get_Count", NULL, &t7296_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38776_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38777_GM;
MethodInfo m38777_MI = 
{
	"get_IsReadOnly", NULL, &t7296_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38777_GM};
extern Il2CppType t1692_0_0_0;
extern Il2CppType t1692_0_0_0;
static ParameterInfo t7296_m38778_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1692_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38778_GM;
MethodInfo m38778_MI = 
{
	"Add", NULL, &t7296_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7296_m38778_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38778_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38779_GM;
MethodInfo m38779_MI = 
{
	"Clear", NULL, &t7296_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38779_GM};
extern Il2CppType t1692_0_0_0;
static ParameterInfo t7296_m38780_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1692_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38780_GM;
MethodInfo m38780_MI = 
{
	"Contains", NULL, &t7296_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7296_m38780_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38780_GM};
extern Il2CppType t4310_0_0_0;
extern Il2CppType t4310_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7296_m38781_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4310_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38781_GM;
MethodInfo m38781_MI = 
{
	"CopyTo", NULL, &t7296_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7296_m38781_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38781_GM};
extern Il2CppType t1692_0_0_0;
static ParameterInfo t7296_m38782_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1692_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38782_GM;
MethodInfo m38782_MI = 
{
	"Remove", NULL, &t7296_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7296_m38782_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38782_GM};
static MethodInfo* t7296_MIs[] =
{
	&m38776_MI,
	&m38777_MI,
	&m38778_MI,
	&m38779_MI,
	&m38780_MI,
	&m38781_MI,
	&m38782_MI,
	NULL
};
extern TypeInfo t7298_TI;
static TypeInfo* t7296_ITIs[] = 
{
	&t739_TI,
	&t7298_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7296_0_0_0;
extern Il2CppType t7296_1_0_0;
struct t7296;
extern Il2CppGenericClass t7296_GC;
TypeInfo t7296_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7296_MIs, t7296_PIs, NULL, NULL, NULL, NULL, NULL, &t7296_TI, t7296_ITIs, NULL, &EmptyCustomAttributesCache, &t7296_TI, &t7296_0_0_0, &t7296_1_0_0, NULL, &t7296_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.Cer>
extern Il2CppType t5690_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38783_GM;
MethodInfo m38783_MI = 
{
	"GetEnumerator", NULL, &t7298_TI, &t5690_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38783_GM};
static MethodInfo* t7298_MIs[] =
{
	&m38783_MI,
	NULL
};
static TypeInfo* t7298_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7298_0_0_0;
extern Il2CppType t7298_1_0_0;
struct t7298;
extern Il2CppGenericClass t7298_GC;
TypeInfo t7298_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7298_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7298_TI, t7298_ITIs, NULL, &EmptyCustomAttributesCache, &t7298_TI, &t7298_0_0_0, &t7298_1_0_0, NULL, &t7298_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7297_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>
extern MethodInfo m38784_MI;
extern MethodInfo m38785_MI;
static PropertyInfo t7297____Item_PropertyInfo = 
{
	&t7297_TI, "Item", &m38784_MI, &m38785_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7297_PIs[] =
{
	&t7297____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1692_0_0_0;
static ParameterInfo t7297_m38786_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1692_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38786_GM;
MethodInfo m38786_MI = 
{
	"IndexOf", NULL, &t7297_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t7297_m38786_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38786_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1692_0_0_0;
static ParameterInfo t7297_m38787_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1692_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38787_GM;
MethodInfo m38787_MI = 
{
	"Insert", NULL, &t7297_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7297_m38787_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38787_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7297_m38788_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38788_GM;
MethodInfo m38788_MI = 
{
	"RemoveAt", NULL, &t7297_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7297_m38788_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38788_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7297_m38784_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1692_0_0_0;
extern void* RuntimeInvoker_t1692_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38784_GM;
MethodInfo m38784_MI = 
{
	"get_Item", NULL, &t7297_TI, &t1692_0_0_0, RuntimeInvoker_t1692_t110, t7297_m38784_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38784_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1692_0_0_0;
static ParameterInfo t7297_m38785_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1692_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38785_GM;
MethodInfo m38785_MI = 
{
	"set_Item", NULL, &t7297_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7297_m38785_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38785_GM};
static MethodInfo* t7297_MIs[] =
{
	&m38786_MI,
	&m38787_MI,
	&m38788_MI,
	&m38784_MI,
	&m38785_MI,
	NULL
};
static TypeInfo* t7297_ITIs[] = 
{
	&t739_TI,
	&t7296_TI,
	&t7298_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7297_0_0_0;
extern Il2CppType t7297_1_0_0;
struct t7297;
extern Il2CppGenericClass t7297_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7297_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7297_MIs, t7297_PIs, NULL, NULL, NULL, NULL, NULL, &t7297_TI, t7297_ITIs, NULL, &t2240__CustomAttributeCache, &t7297_TI, &t7297_0_0_0, &t7297_1_0_0, NULL, &t7297_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5692_TI;

#include "t1693.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>
extern MethodInfo m38789_MI;
static PropertyInfo t5692____Current_PropertyInfo = 
{
	&t5692_TI, "Current", &m38789_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5692_PIs[] =
{
	&t5692____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1693_0_0_0;
extern void* RuntimeInvoker_t1693 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38789_GM;
MethodInfo m38789_MI = 
{
	"get_Current", NULL, &t5692_TI, &t1693_0_0_0, RuntimeInvoker_t1693, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38789_GM};
static MethodInfo* t5692_MIs[] =
{
	&m38789_MI,
	NULL
};
static TypeInfo* t5692_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5692_0_0_0;
extern Il2CppType t5692_1_0_0;
struct t5692;
extern Il2CppGenericClass t5692_GC;
TypeInfo t5692_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5692_MIs, t5692_PIs, NULL, NULL, NULL, NULL, NULL, &t5692_TI, t5692_ITIs, NULL, &EmptyCustomAttributesCache, &t5692_TI, &t5692_0_0_0, &t5692_1_0_0, NULL, &t5692_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4047.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4047_TI;
#include "t4047MD.h"

extern TypeInfo t1693_TI;
extern MethodInfo m22959_MI;
extern MethodInfo m30269_MI;
struct t107;
 int32_t m30269 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22955_MI;
 void m22955 (t4047 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22956_MI;
 t5 * m22956 (t4047 * __this, MethodInfo* method){
	{
		int32_t L_0 = m22959(__this, &m22959_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1693_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22957_MI;
 void m22957 (t4047 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22958_MI;
 bool m22958 (t4047 * __this, MethodInfo* method){
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
 int32_t m22959 (t4047 * __this, MethodInfo* method){
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
		int32_t L_8 = m30269(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m30269_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>
extern Il2CppType t107_0_0_1;
FieldInfo t4047_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4047_TI, offsetof(t4047, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4047_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4047_TI, offsetof(t4047, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4047_FIs[] =
{
	&t4047_f0_FieldInfo,
	&t4047_f1_FieldInfo,
	NULL
};
static PropertyInfo t4047____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4047_TI, "System.Collections.IEnumerator.Current", &m22956_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4047____Current_PropertyInfo = 
{
	&t4047_TI, "Current", &m22959_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4047_PIs[] =
{
	&t4047____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4047____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4047_m22955_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22955_GM;
MethodInfo m22955_MI = 
{
	".ctor", (methodPointerType)&m22955, &t4047_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4047_m22955_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22955_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22956_GM;
MethodInfo m22956_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22956, &t4047_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22956_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22957_GM;
MethodInfo m22957_MI = 
{
	"Dispose", (methodPointerType)&m22957, &t4047_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22957_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22958_GM;
MethodInfo m22958_MI = 
{
	"MoveNext", (methodPointerType)&m22958, &t4047_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22958_GM};
extern Il2CppType t1693_0_0_0;
extern void* RuntimeInvoker_t1693 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22959_GM;
MethodInfo m22959_MI = 
{
	"get_Current", (methodPointerType)&m22959, &t4047_TI, &t1693_0_0_0, RuntimeInvoker_t1693, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22959_GM};
static MethodInfo* t4047_MIs[] =
{
	&m22955_MI,
	&m22956_MI,
	&m22957_MI,
	&m22958_MI,
	&m22959_MI,
	NULL
};
static MethodInfo* t4047_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22956_MI,
	&m22958_MI,
	&m22957_MI,
	&m22959_MI,
};
static TypeInfo* t4047_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5692_TI,
};
static Il2CppInterfaceOffsetPair t4047_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5692_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4047_0_0_0;
extern Il2CppType t4047_1_0_0;
extern Il2CppGenericClass t4047_GC;
TypeInfo t4047_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4047_MIs, t4047_PIs, t4047_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4047_TI, t4047_ITIs, t4047_VT, &EmptyCustomAttributesCache, &t4047_TI, &t4047_0_0_0, &t4047_1_0_0, t4047_IOs, &t4047_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4047)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7299_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>
extern MethodInfo m38790_MI;
static PropertyInfo t7299____Count_PropertyInfo = 
{
	&t7299_TI, "Count", &m38790_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m38791_MI;
static PropertyInfo t7299____IsReadOnly_PropertyInfo = 
{
	&t7299_TI, "IsReadOnly", &m38791_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7299_PIs[] =
{
	&t7299____Count_PropertyInfo,
	&t7299____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38790_GM;
MethodInfo m38790_MI = 
{
	"get_Count", NULL, &t7299_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38790_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38791_GM;
MethodInfo m38791_MI = 
{
	"get_IsReadOnly", NULL, &t7299_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38791_GM};
extern Il2CppType t1693_0_0_0;
extern Il2CppType t1693_0_0_0;
static ParameterInfo t7299_m38792_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1693_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38792_GM;
MethodInfo m38792_MI = 
{
	"Add", NULL, &t7299_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7299_m38792_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38792_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38793_GM;
MethodInfo m38793_MI = 
{
	"Clear", NULL, &t7299_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38793_GM};
extern Il2CppType t1693_0_0_0;
static ParameterInfo t7299_m38794_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1693_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38794_GM;
MethodInfo m38794_MI = 
{
	"Contains", NULL, &t7299_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7299_m38794_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38794_GM};
extern Il2CppType t4311_0_0_0;
extern Il2CppType t4311_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7299_m38795_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4311_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38795_GM;
MethodInfo m38795_MI = 
{
	"CopyTo", NULL, &t7299_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7299_m38795_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38795_GM};
extern Il2CppType t1693_0_0_0;
static ParameterInfo t7299_m38796_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1693_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38796_GM;
MethodInfo m38796_MI = 
{
	"Remove", NULL, &t7299_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7299_m38796_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38796_GM};
static MethodInfo* t7299_MIs[] =
{
	&m38790_MI,
	&m38791_MI,
	&m38792_MI,
	&m38793_MI,
	&m38794_MI,
	&m38795_MI,
	&m38796_MI,
	NULL
};
extern TypeInfo t7301_TI;
static TypeInfo* t7299_ITIs[] = 
{
	&t739_TI,
	&t7301_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7299_0_0_0;
extern Il2CppType t7299_1_0_0;
struct t7299;
extern Il2CppGenericClass t7299_GC;
TypeInfo t7299_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7299_MIs, t7299_PIs, NULL, NULL, NULL, NULL, NULL, &t7299_TI, t7299_ITIs, NULL, &EmptyCustomAttributesCache, &t7299_TI, &t7299_0_0_0, &t7299_1_0_0, NULL, &t7299_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.Consistency>
extern Il2CppType t5692_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38797_GM;
MethodInfo m38797_MI = 
{
	"GetEnumerator", NULL, &t7301_TI, &t5692_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38797_GM};
static MethodInfo* t7301_MIs[] =
{
	&m38797_MI,
	NULL
};
static TypeInfo* t7301_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7301_0_0_0;
extern Il2CppType t7301_1_0_0;
struct t7301;
extern Il2CppGenericClass t7301_GC;
TypeInfo t7301_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7301_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7301_TI, t7301_ITIs, NULL, &EmptyCustomAttributesCache, &t7301_TI, &t7301_0_0_0, &t7301_1_0_0, NULL, &t7301_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7300_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>
extern MethodInfo m38798_MI;
extern MethodInfo m38799_MI;
static PropertyInfo t7300____Item_PropertyInfo = 
{
	&t7300_TI, "Item", &m38798_MI, &m38799_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7300_PIs[] =
{
	&t7300____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1693_0_0_0;
static ParameterInfo t7300_m38800_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1693_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38800_GM;
MethodInfo m38800_MI = 
{
	"IndexOf", NULL, &t7300_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t7300_m38800_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38800_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1693_0_0_0;
static ParameterInfo t7300_m38801_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1693_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38801_GM;
MethodInfo m38801_MI = 
{
	"Insert", NULL, &t7300_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7300_m38801_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38801_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7300_m38802_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38802_GM;
MethodInfo m38802_MI = 
{
	"RemoveAt", NULL, &t7300_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7300_m38802_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38802_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7300_m38798_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1693_0_0_0;
extern void* RuntimeInvoker_t1693_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38798_GM;
MethodInfo m38798_MI = 
{
	"get_Item", NULL, &t7300_TI, &t1693_0_0_0, RuntimeInvoker_t1693_t110, t7300_m38798_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38798_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1693_0_0_0;
static ParameterInfo t7300_m38799_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1693_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38799_GM;
MethodInfo m38799_MI = 
{
	"set_Item", NULL, &t7300_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7300_m38799_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38799_GM};
static MethodInfo* t7300_MIs[] =
{
	&m38800_MI,
	&m38801_MI,
	&m38802_MI,
	&m38798_MI,
	&m38799_MI,
	NULL
};
static TypeInfo* t7300_ITIs[] = 
{
	&t739_TI,
	&t7299_TI,
	&t7301_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7300_0_0_0;
extern Il2CppType t7300_1_0_0;
struct t7300;
extern Il2CppGenericClass t7300_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7300_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7300_MIs, t7300_PIs, NULL, NULL, NULL, NULL, NULL, &t7300_TI, t7300_ITIs, NULL, &t2240__CustomAttributeCache, &t7300_TI, &t7300_0_0_0, &t7300_1_0_0, NULL, &t7300_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5694_TI;

#include "t1695.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern MethodInfo m38803_MI;
static PropertyInfo t5694____Current_PropertyInfo = 
{
	&t5694_TI, "Current", &m38803_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5694_PIs[] =
{
	&t5694____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1695_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38803_GM;
MethodInfo m38803_MI = 
{
	"get_Current", NULL, &t5694_TI, &t1695_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38803_GM};
static MethodInfo* t5694_MIs[] =
{
	&m38803_MI,
	NULL
};
static TypeInfo* t5694_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5694_0_0_0;
extern Il2CppType t5694_1_0_0;
struct t5694;
extern Il2CppGenericClass t5694_GC;
TypeInfo t5694_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5694_MIs, t5694_PIs, NULL, NULL, NULL, NULL, NULL, &t5694_TI, t5694_ITIs, NULL, &EmptyCustomAttributesCache, &t5694_TI, &t5694_0_0_0, &t5694_1_0_0, NULL, &t5694_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4048.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4048_TI;
#include "t4048MD.h"

extern TypeInfo t1695_TI;
extern MethodInfo m22964_MI;
extern MethodInfo m30280_MI;
struct t107;
#define m30280(__this, p0, method) (t1695 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t4048_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4048_TI, offsetof(t4048, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4048_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4048_TI, offsetof(t4048, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4048_FIs[] =
{
	&t4048_f0_FieldInfo,
	&t4048_f1_FieldInfo,
	NULL
};
extern MethodInfo m22961_MI;
static PropertyInfo t4048____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4048_TI, "System.Collections.IEnumerator.Current", &m22961_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4048____Current_PropertyInfo = 
{
	&t4048_TI, "Current", &m22964_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4048_PIs[] =
{
	&t4048____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4048____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4048_m22960_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22960_GM;
MethodInfo m22960_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t4048_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4048_m22960_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22960_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22961_GM;
MethodInfo m22961_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t4048_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22961_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22962_GM;
MethodInfo m22962_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t4048_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22962_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22963_GM;
MethodInfo m22963_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t4048_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22963_GM};
extern Il2CppType t1695_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22964_GM;
MethodInfo m22964_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t4048_TI, &t1695_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22964_GM};
static MethodInfo* t4048_MIs[] =
{
	&m22960_MI,
	&m22961_MI,
	&m22962_MI,
	&m22963_MI,
	&m22964_MI,
	NULL
};
extern MethodInfo m22963_MI;
extern MethodInfo m22962_MI;
static MethodInfo* t4048_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22961_MI,
	&m22963_MI,
	&m22962_MI,
	&m22964_MI,
};
static TypeInfo* t4048_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5694_TI,
};
static Il2CppInterfaceOffsetPair t4048_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5694_TI, 7},
};
extern TypeInfo t1695_TI;
static Il2CppRGCTXData t4048_RGCTXData[3] = 
{
	&m22964_MI/* Method Usage */,
	&t1695_TI/* Class Usage */,
	&m30280_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4048_0_0_0;
extern Il2CppType t4048_1_0_0;
extern Il2CppGenericClass t4048_GC;
TypeInfo t4048_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4048_MIs, t4048_PIs, t4048_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4048_TI, t4048_ITIs, t4048_VT, &EmptyCustomAttributesCache, &t4048_TI, &t4048_0_0_0, &t4048_1_0_0, t4048_IOs, &t4048_GC, NULL, NULL, NULL, t4048_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4048)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7302_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern MethodInfo m38804_MI;
static PropertyInfo t7302____Count_PropertyInfo = 
{
	&t7302_TI, "Count", &m38804_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m38805_MI;
static PropertyInfo t7302____IsReadOnly_PropertyInfo = 
{
	&t7302_TI, "IsReadOnly", &m38805_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7302_PIs[] =
{
	&t7302____Count_PropertyInfo,
	&t7302____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38804_GM;
MethodInfo m38804_MI = 
{
	"get_Count", NULL, &t7302_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38804_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38805_GM;
MethodInfo m38805_MI = 
{
	"get_IsReadOnly", NULL, &t7302_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38805_GM};
extern Il2CppType t1695_0_0_0;
extern Il2CppType t1695_0_0_0;
static ParameterInfo t7302_m38806_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1695_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38806_GM;
MethodInfo m38806_MI = 
{
	"Add", NULL, &t7302_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t7302_m38806_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38806_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38807_GM;
MethodInfo m38807_MI = 
{
	"Clear", NULL, &t7302_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38807_GM};
extern Il2CppType t1695_0_0_0;
static ParameterInfo t7302_m38808_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1695_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38808_GM;
MethodInfo m38808_MI = 
{
	"Contains", NULL, &t7302_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7302_m38808_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38808_GM};
extern Il2CppType t4312_0_0_0;
extern Il2CppType t4312_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7302_m38809_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4312_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38809_GM;
MethodInfo m38809_MI = 
{
	"CopyTo", NULL, &t7302_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7302_m38809_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38809_GM};
extern Il2CppType t1695_0_0_0;
static ParameterInfo t7302_m38810_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1695_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38810_GM;
MethodInfo m38810_MI = 
{
	"Remove", NULL, &t7302_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7302_m38810_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38810_GM};
static MethodInfo* t7302_MIs[] =
{
	&m38804_MI,
	&m38805_MI,
	&m38806_MI,
	&m38807_MI,
	&m38808_MI,
	&m38809_MI,
	&m38810_MI,
	NULL
};
extern TypeInfo t7304_TI;
static TypeInfo* t7302_ITIs[] = 
{
	&t739_TI,
	&t7304_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7302_0_0_0;
extern Il2CppType t7302_1_0_0;
struct t7302;
extern Il2CppGenericClass t7302_GC;
TypeInfo t7302_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7302_MIs, t7302_PIs, NULL, NULL, NULL, NULL, NULL, &t7302_TI, t7302_ITIs, NULL, &EmptyCustomAttributesCache, &t7302_TI, &t7302_0_0_0, &t7302_1_0_0, NULL, &t7302_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern Il2CppType t5694_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38811_GM;
MethodInfo m38811_MI = 
{
	"GetEnumerator", NULL, &t7304_TI, &t5694_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38811_GM};
static MethodInfo* t7304_MIs[] =
{
	&m38811_MI,
	NULL
};
static TypeInfo* t7304_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7304_0_0_0;
extern Il2CppType t7304_1_0_0;
struct t7304;
extern Il2CppGenericClass t7304_GC;
TypeInfo t7304_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7304_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7304_TI, t7304_ITIs, NULL, &EmptyCustomAttributesCache, &t7304_TI, &t7304_0_0_0, &t7304_1_0_0, NULL, &t7304_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7303_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern MethodInfo m38812_MI;
extern MethodInfo m38813_MI;
static PropertyInfo t7303____Item_PropertyInfo = 
{
	&t7303_TI, "Item", &m38812_MI, &m38813_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7303_PIs[] =
{
	&t7303____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1695_0_0_0;
static ParameterInfo t7303_m38814_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1695_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38814_GM;
MethodInfo m38814_MI = 
{
	"IndexOf", NULL, &t7303_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7303_m38814_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38814_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1695_0_0_0;
static ParameterInfo t7303_m38815_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1695_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38815_GM;
MethodInfo m38815_MI = 
{
	"Insert", NULL, &t7303_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7303_m38815_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38815_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7303_m38816_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38816_GM;
MethodInfo m38816_MI = 
{
	"RemoveAt", NULL, &t7303_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7303_m38816_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38816_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7303_m38812_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1695_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38812_GM;
MethodInfo m38812_MI = 
{
	"get_Item", NULL, &t7303_TI, &t1695_0_0_0, RuntimeInvoker_t5_t110, t7303_m38812_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38812_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1695_0_0_0;
static ParameterInfo t7303_m38813_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1695_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38813_GM;
MethodInfo m38813_MI = 
{
	"set_Item", NULL, &t7303_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7303_m38813_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38813_GM};
static MethodInfo* t7303_MIs[] =
{
	&m38814_MI,
	&m38815_MI,
	&m38816_MI,
	&m38812_MI,
	&m38813_MI,
	NULL
};
static TypeInfo* t7303_ITIs[] = 
{
	&t739_TI,
	&t7302_TI,
	&t7304_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7303_0_0_0;
extern Il2CppType t7303_1_0_0;
struct t7303;
extern Il2CppGenericClass t7303_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7303_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7303_MIs, t7303_PIs, NULL, NULL, NULL, NULL, NULL, &t7303_TI, t7303_ITIs, NULL, &t2240__CustomAttributeCache, &t7303_TI, &t7303_0_0_0, &t7303_1_0_0, NULL, &t7303_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5696_TI;

#include "t1414.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.CallingConvention>
extern MethodInfo m38817_MI;
static PropertyInfo t5696____Current_PropertyInfo = 
{
	&t5696_TI, "Current", &m38817_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5696_PIs[] =
{
	&t5696____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1414_0_0_0;
extern void* RuntimeInvoker_t1414 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38817_GM;
MethodInfo m38817_MI = 
{
	"get_Current", NULL, &t5696_TI, &t1414_0_0_0, RuntimeInvoker_t1414, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38817_GM};
static MethodInfo* t5696_MIs[] =
{
	&m38817_MI,
	NULL
};
static TypeInfo* t5696_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5696_0_0_0;
extern Il2CppType t5696_1_0_0;
struct t5696;
extern Il2CppGenericClass t5696_GC;
TypeInfo t5696_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5696_MIs, t5696_PIs, NULL, NULL, NULL, NULL, NULL, &t5696_TI, t5696_ITIs, NULL, &EmptyCustomAttributesCache, &t5696_TI, &t5696_0_0_0, &t5696_1_0_0, NULL, &t5696_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4049.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4049_TI;
#include "t4049MD.h"

extern TypeInfo t1414_TI;
extern MethodInfo m22969_MI;
extern MethodInfo m30291_MI;
struct t107;
 int32_t m30291 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22965_MI;
 void m22965 (t4049 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22966_MI;
 t5 * m22966 (t4049 * __this, MethodInfo* method){
	{
		int32_t L_0 = m22969(__this, &m22969_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1414_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22967_MI;
 void m22967 (t4049 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22968_MI;
 bool m22968 (t4049 * __this, MethodInfo* method){
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
 int32_t m22969 (t4049 * __this, MethodInfo* method){
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
		int32_t L_8 = m30291(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m30291_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>
extern Il2CppType t107_0_0_1;
FieldInfo t4049_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4049_TI, offsetof(t4049, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4049_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4049_TI, offsetof(t4049, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4049_FIs[] =
{
	&t4049_f0_FieldInfo,
	&t4049_f1_FieldInfo,
	NULL
};
static PropertyInfo t4049____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4049_TI, "System.Collections.IEnumerator.Current", &m22966_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4049____Current_PropertyInfo = 
{
	&t4049_TI, "Current", &m22969_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4049_PIs[] =
{
	&t4049____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4049____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4049_m22965_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22965_GM;
MethodInfo m22965_MI = 
{
	".ctor", (methodPointerType)&m22965, &t4049_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4049_m22965_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22965_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22966_GM;
MethodInfo m22966_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22966, &t4049_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22966_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22967_GM;
MethodInfo m22967_MI = 
{
	"Dispose", (methodPointerType)&m22967, &t4049_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22967_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22968_GM;
MethodInfo m22968_MI = 
{
	"MoveNext", (methodPointerType)&m22968, &t4049_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22968_GM};
extern Il2CppType t1414_0_0_0;
extern void* RuntimeInvoker_t1414 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22969_GM;
MethodInfo m22969_MI = 
{
	"get_Current", (methodPointerType)&m22969, &t4049_TI, &t1414_0_0_0, RuntimeInvoker_t1414, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22969_GM};
static MethodInfo* t4049_MIs[] =
{
	&m22965_MI,
	&m22966_MI,
	&m22967_MI,
	&m22968_MI,
	&m22969_MI,
	NULL
};
static MethodInfo* t4049_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22966_MI,
	&m22968_MI,
	&m22967_MI,
	&m22969_MI,
};
static TypeInfo* t4049_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5696_TI,
};
static Il2CppInterfaceOffsetPair t4049_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5696_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4049_0_0_0;
extern Il2CppType t4049_1_0_0;
extern Il2CppGenericClass t4049_GC;
TypeInfo t4049_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4049_MIs, t4049_PIs, t4049_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4049_TI, t4049_ITIs, t4049_VT, &EmptyCustomAttributesCache, &t4049_TI, &t4049_0_0_0, &t4049_1_0_0, t4049_IOs, &t4049_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4049)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7305_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>
extern MethodInfo m38818_MI;
static PropertyInfo t7305____Count_PropertyInfo = 
{
	&t7305_TI, "Count", &m38818_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m38819_MI;
static PropertyInfo t7305____IsReadOnly_PropertyInfo = 
{
	&t7305_TI, "IsReadOnly", &m38819_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7305_PIs[] =
{
	&t7305____Count_PropertyInfo,
	&t7305____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38818_GM;
MethodInfo m38818_MI = 
{
	"get_Count", NULL, &t7305_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38818_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38819_GM;
MethodInfo m38819_MI = 
{
	"get_IsReadOnly", NULL, &t7305_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38819_GM};
extern Il2CppType t1414_0_0_0;
extern Il2CppType t1414_0_0_0;
static ParameterInfo t7305_m38820_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1414_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38820_GM;
MethodInfo m38820_MI = 
{
	"Add", NULL, &t7305_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7305_m38820_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38820_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38821_GM;
MethodInfo m38821_MI = 
{
	"Clear", NULL, &t7305_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38821_GM};
extern Il2CppType t1414_0_0_0;
static ParameterInfo t7305_m38822_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1414_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38822_GM;
MethodInfo m38822_MI = 
{
	"Contains", NULL, &t7305_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7305_m38822_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38822_GM};
extern Il2CppType t4313_0_0_0;
extern Il2CppType t4313_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7305_m38823_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4313_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38823_GM;
MethodInfo m38823_MI = 
{
	"CopyTo", NULL, &t7305_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7305_m38823_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38823_GM};
extern Il2CppType t1414_0_0_0;
static ParameterInfo t7305_m38824_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1414_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38824_GM;
MethodInfo m38824_MI = 
{
	"Remove", NULL, &t7305_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7305_m38824_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38824_GM};
static MethodInfo* t7305_MIs[] =
{
	&m38818_MI,
	&m38819_MI,
	&m38820_MI,
	&m38821_MI,
	&m38822_MI,
	&m38823_MI,
	&m38824_MI,
	NULL
};
extern TypeInfo t7307_TI;
static TypeInfo* t7305_ITIs[] = 
{
	&t739_TI,
	&t7307_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7305_0_0_0;
extern Il2CppType t7305_1_0_0;
struct t7305;
extern Il2CppGenericClass t7305_GC;
TypeInfo t7305_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7305_MIs, t7305_PIs, NULL, NULL, NULL, NULL, NULL, &t7305_TI, t7305_ITIs, NULL, &EmptyCustomAttributesCache, &t7305_TI, &t7305_0_0_0, &t7305_1_0_0, NULL, &t7305_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.CallingConvention>
extern Il2CppType t5696_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38825_GM;
MethodInfo m38825_MI = 
{
	"GetEnumerator", NULL, &t7307_TI, &t5696_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38825_GM};
static MethodInfo* t7307_MIs[] =
{
	&m38825_MI,
	NULL
};
static TypeInfo* t7307_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7307_0_0_0;
extern Il2CppType t7307_1_0_0;
struct t7307;
extern Il2CppGenericClass t7307_GC;
TypeInfo t7307_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7307_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7307_TI, t7307_ITIs, NULL, &EmptyCustomAttributesCache, &t7307_TI, &t7307_0_0_0, &t7307_1_0_0, NULL, &t7307_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7306_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>
extern MethodInfo m38826_MI;
extern MethodInfo m38827_MI;
static PropertyInfo t7306____Item_PropertyInfo = 
{
	&t7306_TI, "Item", &m38826_MI, &m38827_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7306_PIs[] =
{
	&t7306____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1414_0_0_0;
static ParameterInfo t7306_m38828_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1414_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38828_GM;
MethodInfo m38828_MI = 
{
	"IndexOf", NULL, &t7306_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t7306_m38828_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38828_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1414_0_0_0;
static ParameterInfo t7306_m38829_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1414_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38829_GM;
MethodInfo m38829_MI = 
{
	"Insert", NULL, &t7306_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7306_m38829_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38829_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7306_m38830_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38830_GM;
MethodInfo m38830_MI = 
{
	"RemoveAt", NULL, &t7306_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7306_m38830_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38830_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7306_m38826_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1414_0_0_0;
extern void* RuntimeInvoker_t1414_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38826_GM;
MethodInfo m38826_MI = 
{
	"get_Item", NULL, &t7306_TI, &t1414_0_0_0, RuntimeInvoker_t1414_t110, t7306_m38826_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38826_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1414_0_0_0;
static ParameterInfo t7306_m38827_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1414_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38827_GM;
MethodInfo m38827_MI = 
{
	"set_Item", NULL, &t7306_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7306_m38827_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38827_GM};
static MethodInfo* t7306_MIs[] =
{
	&m38828_MI,
	&m38829_MI,
	&m38830_MI,
	&m38826_MI,
	&m38827_MI,
	NULL
};
static TypeInfo* t7306_ITIs[] = 
{
	&t739_TI,
	&t7305_TI,
	&t7307_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7306_0_0_0;
extern Il2CppType t7306_1_0_0;
struct t7306;
extern Il2CppGenericClass t7306_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7306_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7306_MIs, t7306_PIs, NULL, NULL, NULL, NULL, NULL, &t7306_TI, t7306_ITIs, NULL, &t2240__CustomAttributeCache, &t7306_TI, &t7306_0_0_0, &t7306_1_0_0, NULL, &t7306_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5698_TI;

#include "t1415.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.CharSet>
extern MethodInfo m38831_MI;
static PropertyInfo t5698____Current_PropertyInfo = 
{
	&t5698_TI, "Current", &m38831_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5698_PIs[] =
{
	&t5698____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1415_0_0_0;
extern void* RuntimeInvoker_t1415 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38831_GM;
MethodInfo m38831_MI = 
{
	"get_Current", NULL, &t5698_TI, &t1415_0_0_0, RuntimeInvoker_t1415, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38831_GM};
static MethodInfo* t5698_MIs[] =
{
	&m38831_MI,
	NULL
};
static TypeInfo* t5698_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5698_0_0_0;
extern Il2CppType t5698_1_0_0;
struct t5698;
extern Il2CppGenericClass t5698_GC;
TypeInfo t5698_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5698_MIs, t5698_PIs, NULL, NULL, NULL, NULL, NULL, &t5698_TI, t5698_ITIs, NULL, &EmptyCustomAttributesCache, &t5698_TI, &t5698_0_0_0, &t5698_1_0_0, NULL, &t5698_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4050.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4050_TI;
#include "t4050MD.h"

extern TypeInfo t1415_TI;
extern MethodInfo m22974_MI;
extern MethodInfo m30302_MI;
struct t107;
 int32_t m30302 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22970_MI;
 void m22970 (t4050 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22971_MI;
 t5 * m22971 (t4050 * __this, MethodInfo* method){
	{
		int32_t L_0 = m22974(__this, &m22974_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1415_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22972_MI;
 void m22972 (t4050 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22973_MI;
 bool m22973 (t4050 * __this, MethodInfo* method){
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
 int32_t m22974 (t4050 * __this, MethodInfo* method){
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
		int32_t L_8 = m30302(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m30302_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>
extern Il2CppType t107_0_0_1;
FieldInfo t4050_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4050_TI, offsetof(t4050, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4050_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4050_TI, offsetof(t4050, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4050_FIs[] =
{
	&t4050_f0_FieldInfo,
	&t4050_f1_FieldInfo,
	NULL
};
static PropertyInfo t4050____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4050_TI, "System.Collections.IEnumerator.Current", &m22971_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4050____Current_PropertyInfo = 
{
	&t4050_TI, "Current", &m22974_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4050_PIs[] =
{
	&t4050____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4050____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4050_m22970_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22970_GM;
MethodInfo m22970_MI = 
{
	".ctor", (methodPointerType)&m22970, &t4050_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4050_m22970_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22970_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22971_GM;
MethodInfo m22971_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22971, &t4050_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22971_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22972_GM;
MethodInfo m22972_MI = 
{
	"Dispose", (methodPointerType)&m22972, &t4050_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22972_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22973_GM;
MethodInfo m22973_MI = 
{
	"MoveNext", (methodPointerType)&m22973, &t4050_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22973_GM};
extern Il2CppType t1415_0_0_0;
extern void* RuntimeInvoker_t1415 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22974_GM;
MethodInfo m22974_MI = 
{
	"get_Current", (methodPointerType)&m22974, &t4050_TI, &t1415_0_0_0, RuntimeInvoker_t1415, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22974_GM};
static MethodInfo* t4050_MIs[] =
{
	&m22970_MI,
	&m22971_MI,
	&m22972_MI,
	&m22973_MI,
	&m22974_MI,
	NULL
};
static MethodInfo* t4050_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22971_MI,
	&m22973_MI,
	&m22972_MI,
	&m22974_MI,
};
static TypeInfo* t4050_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5698_TI,
};
static Il2CppInterfaceOffsetPair t4050_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5698_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4050_0_0_0;
extern Il2CppType t4050_1_0_0;
extern Il2CppGenericClass t4050_GC;
TypeInfo t4050_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4050_MIs, t4050_PIs, t4050_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4050_TI, t4050_ITIs, t4050_VT, &EmptyCustomAttributesCache, &t4050_TI, &t4050_0_0_0, &t4050_1_0_0, t4050_IOs, &t4050_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4050)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7308_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>
extern MethodInfo m38832_MI;
static PropertyInfo t7308____Count_PropertyInfo = 
{
	&t7308_TI, "Count", &m38832_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m38833_MI;
static PropertyInfo t7308____IsReadOnly_PropertyInfo = 
{
	&t7308_TI, "IsReadOnly", &m38833_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7308_PIs[] =
{
	&t7308____Count_PropertyInfo,
	&t7308____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38832_GM;
MethodInfo m38832_MI = 
{
	"get_Count", NULL, &t7308_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38832_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38833_GM;
MethodInfo m38833_MI = 
{
	"get_IsReadOnly", NULL, &t7308_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38833_GM};
extern Il2CppType t1415_0_0_0;
extern Il2CppType t1415_0_0_0;
static ParameterInfo t7308_m38834_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1415_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38834_GM;
MethodInfo m38834_MI = 
{
	"Add", NULL, &t7308_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7308_m38834_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38834_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38835_GM;
MethodInfo m38835_MI = 
{
	"Clear", NULL, &t7308_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38835_GM};
extern Il2CppType t1415_0_0_0;
static ParameterInfo t7308_m38836_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1415_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38836_GM;
MethodInfo m38836_MI = 
{
	"Contains", NULL, &t7308_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7308_m38836_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38836_GM};
extern Il2CppType t4314_0_0_0;
extern Il2CppType t4314_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7308_m38837_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4314_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38837_GM;
MethodInfo m38837_MI = 
{
	"CopyTo", NULL, &t7308_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7308_m38837_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38837_GM};
extern Il2CppType t1415_0_0_0;
static ParameterInfo t7308_m38838_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1415_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38838_GM;
MethodInfo m38838_MI = 
{
	"Remove", NULL, &t7308_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7308_m38838_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38838_GM};
static MethodInfo* t7308_MIs[] =
{
	&m38832_MI,
	&m38833_MI,
	&m38834_MI,
	&m38835_MI,
	&m38836_MI,
	&m38837_MI,
	&m38838_MI,
	NULL
};
extern TypeInfo t7310_TI;
static TypeInfo* t7308_ITIs[] = 
{
	&t739_TI,
	&t7310_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7308_0_0_0;
extern Il2CppType t7308_1_0_0;
struct t7308;
extern Il2CppGenericClass t7308_GC;
TypeInfo t7308_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7308_MIs, t7308_PIs, NULL, NULL, NULL, NULL, NULL, &t7308_TI, t7308_ITIs, NULL, &EmptyCustomAttributesCache, &t7308_TI, &t7308_0_0_0, &t7308_1_0_0, NULL, &t7308_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.CharSet>
extern Il2CppType t5698_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38839_GM;
MethodInfo m38839_MI = 
{
	"GetEnumerator", NULL, &t7310_TI, &t5698_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38839_GM};
static MethodInfo* t7310_MIs[] =
{
	&m38839_MI,
	NULL
};
static TypeInfo* t7310_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7310_0_0_0;
extern Il2CppType t7310_1_0_0;
struct t7310;
extern Il2CppGenericClass t7310_GC;
TypeInfo t7310_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7310_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7310_TI, t7310_ITIs, NULL, &EmptyCustomAttributesCache, &t7310_TI, &t7310_0_0_0, &t7310_1_0_0, NULL, &t7310_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7309_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>
extern MethodInfo m38840_MI;
extern MethodInfo m38841_MI;
static PropertyInfo t7309____Item_PropertyInfo = 
{
	&t7309_TI, "Item", &m38840_MI, &m38841_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7309_PIs[] =
{
	&t7309____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1415_0_0_0;
static ParameterInfo t7309_m38842_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1415_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38842_GM;
MethodInfo m38842_MI = 
{
	"IndexOf", NULL, &t7309_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t7309_m38842_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38842_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1415_0_0_0;
static ParameterInfo t7309_m38843_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1415_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38843_GM;
MethodInfo m38843_MI = 
{
	"Insert", NULL, &t7309_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7309_m38843_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38843_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7309_m38844_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38844_GM;
MethodInfo m38844_MI = 
{
	"RemoveAt", NULL, &t7309_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7309_m38844_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38844_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7309_m38840_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1415_0_0_0;
extern void* RuntimeInvoker_t1415_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38840_GM;
MethodInfo m38840_MI = 
{
	"get_Item", NULL, &t7309_TI, &t1415_0_0_0, RuntimeInvoker_t1415_t110, t7309_m38840_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38840_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1415_0_0_0;
static ParameterInfo t7309_m38841_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1415_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38841_GM;
MethodInfo m38841_MI = 
{
	"set_Item", NULL, &t7309_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7309_m38841_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38841_GM};
static MethodInfo* t7309_MIs[] =
{
	&m38842_MI,
	&m38843_MI,
	&m38844_MI,
	&m38840_MI,
	&m38841_MI,
	NULL
};
static TypeInfo* t7309_ITIs[] = 
{
	&t739_TI,
	&t7308_TI,
	&t7310_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7309_0_0_0;
extern Il2CppType t7309_1_0_0;
struct t7309;
extern Il2CppGenericClass t7309_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7309_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7309_MIs, t7309_PIs, NULL, NULL, NULL, NULL, NULL, &t7309_TI, t7309_ITIs, NULL, &t2240__CustomAttributeCache, &t7309_TI, &t7309_0_0_0, &t7309_1_0_0, NULL, &t7309_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5700_TI;

#include "t1697.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern MethodInfo m38845_MI;
static PropertyInfo t5700____Current_PropertyInfo = 
{
	&t5700_TI, "Current", &m38845_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5700_PIs[] =
{
	&t5700____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1697_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38845_GM;
MethodInfo m38845_MI = 
{
	"get_Current", NULL, &t5700_TI, &t1697_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38845_GM};
static MethodInfo* t5700_MIs[] =
{
	&m38845_MI,
	NULL
};
static TypeInfo* t5700_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5700_0_0_0;
extern Il2CppType t5700_1_0_0;
struct t5700;
extern Il2CppGenericClass t5700_GC;
TypeInfo t5700_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5700_MIs, t5700_PIs, NULL, NULL, NULL, NULL, NULL, &t5700_TI, t5700_ITIs, NULL, &EmptyCustomAttributesCache, &t5700_TI, &t5700_0_0_0, &t5700_1_0_0, NULL, &t5700_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4051.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4051_TI;
#include "t4051MD.h"

extern TypeInfo t1697_TI;
extern MethodInfo m22979_MI;
extern MethodInfo m30313_MI;
struct t107;
#define m30313(__this, p0, method) (t1697 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t4051_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4051_TI, offsetof(t4051, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4051_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4051_TI, offsetof(t4051, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4051_FIs[] =
{
	&t4051_f0_FieldInfo,
	&t4051_f1_FieldInfo,
	NULL
};
extern MethodInfo m22976_MI;
static PropertyInfo t4051____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4051_TI, "System.Collections.IEnumerator.Current", &m22976_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4051____Current_PropertyInfo = 
{
	&t4051_TI, "Current", &m22979_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4051_PIs[] =
{
	&t4051____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4051____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4051_m22975_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22975_GM;
MethodInfo m22975_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t4051_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4051_m22975_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22975_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22976_GM;
MethodInfo m22976_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t4051_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22976_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22977_GM;
MethodInfo m22977_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t4051_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22977_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22978_GM;
MethodInfo m22978_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t4051_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22978_GM};
extern Il2CppType t1697_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22979_GM;
MethodInfo m22979_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t4051_TI, &t1697_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22979_GM};
static MethodInfo* t4051_MIs[] =
{
	&m22975_MI,
	&m22976_MI,
	&m22977_MI,
	&m22978_MI,
	&m22979_MI,
	NULL
};
extern MethodInfo m22978_MI;
extern MethodInfo m22977_MI;
static MethodInfo* t4051_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22976_MI,
	&m22978_MI,
	&m22977_MI,
	&m22979_MI,
};
static TypeInfo* t4051_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5700_TI,
};
static Il2CppInterfaceOffsetPair t4051_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5700_TI, 7},
};
extern TypeInfo t1697_TI;
static Il2CppRGCTXData t4051_RGCTXData[3] = 
{
	&m22979_MI/* Method Usage */,
	&t1697_TI/* Class Usage */,
	&m30313_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4051_0_0_0;
extern Il2CppType t4051_1_0_0;
extern Il2CppGenericClass t4051_GC;
TypeInfo t4051_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4051_MIs, t4051_PIs, t4051_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4051_TI, t4051_ITIs, t4051_VT, &EmptyCustomAttributesCache, &t4051_TI, &t4051_0_0_0, &t4051_1_0_0, t4051_IOs, &t4051_GC, NULL, NULL, NULL, t4051_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4051)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7311_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern MethodInfo m38846_MI;
static PropertyInfo t7311____Count_PropertyInfo = 
{
	&t7311_TI, "Count", &m38846_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m38847_MI;
static PropertyInfo t7311____IsReadOnly_PropertyInfo = 
{
	&t7311_TI, "IsReadOnly", &m38847_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7311_PIs[] =
{
	&t7311____Count_PropertyInfo,
	&t7311____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38846_GM;
MethodInfo m38846_MI = 
{
	"get_Count", NULL, &t7311_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38846_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38847_GM;
MethodInfo m38847_MI = 
{
	"get_IsReadOnly", NULL, &t7311_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38847_GM};
extern Il2CppType t1697_0_0_0;
extern Il2CppType t1697_0_0_0;
static ParameterInfo t7311_m38848_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1697_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38848_GM;
MethodInfo m38848_MI = 
{
	"Add", NULL, &t7311_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t7311_m38848_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38848_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38849_GM;
MethodInfo m38849_MI = 
{
	"Clear", NULL, &t7311_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38849_GM};
extern Il2CppType t1697_0_0_0;
static ParameterInfo t7311_m38850_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1697_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38850_GM;
MethodInfo m38850_MI = 
{
	"Contains", NULL, &t7311_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7311_m38850_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38850_GM};
extern Il2CppType t4315_0_0_0;
extern Il2CppType t4315_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7311_m38851_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4315_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38851_GM;
MethodInfo m38851_MI = 
{
	"CopyTo", NULL, &t7311_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7311_m38851_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38851_GM};
extern Il2CppType t1697_0_0_0;
static ParameterInfo t7311_m38852_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1697_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38852_GM;
MethodInfo m38852_MI = 
{
	"Remove", NULL, &t7311_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7311_m38852_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38852_GM};
static MethodInfo* t7311_MIs[] =
{
	&m38846_MI,
	&m38847_MI,
	&m38848_MI,
	&m38849_MI,
	&m38850_MI,
	&m38851_MI,
	&m38852_MI,
	NULL
};
extern TypeInfo t7313_TI;
static TypeInfo* t7311_ITIs[] = 
{
	&t739_TI,
	&t7313_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7311_0_0_0;
extern Il2CppType t7311_1_0_0;
struct t7311;
extern Il2CppGenericClass t7311_GC;
TypeInfo t7311_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7311_MIs, t7311_PIs, NULL, NULL, NULL, NULL, NULL, &t7311_TI, t7311_ITIs, NULL, &EmptyCustomAttributesCache, &t7311_TI, &t7311_0_0_0, &t7311_1_0_0, NULL, &t7311_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern Il2CppType t5700_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38853_GM;
MethodInfo m38853_MI = 
{
	"GetEnumerator", NULL, &t7313_TI, &t5700_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38853_GM};
static MethodInfo* t7313_MIs[] =
{
	&m38853_MI,
	NULL
};
static TypeInfo* t7313_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7313_0_0_0;
extern Il2CppType t7313_1_0_0;
struct t7313;
extern Il2CppGenericClass t7313_GC;
TypeInfo t7313_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7313_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7313_TI, t7313_ITIs, NULL, &EmptyCustomAttributesCache, &t7313_TI, &t7313_0_0_0, &t7313_1_0_0, NULL, &t7313_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7312_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern MethodInfo m38854_MI;
extern MethodInfo m38855_MI;
static PropertyInfo t7312____Item_PropertyInfo = 
{
	&t7312_TI, "Item", &m38854_MI, &m38855_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7312_PIs[] =
{
	&t7312____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1697_0_0_0;
static ParameterInfo t7312_m38856_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1697_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38856_GM;
MethodInfo m38856_MI = 
{
	"IndexOf", NULL, &t7312_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7312_m38856_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38856_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1697_0_0_0;
static ParameterInfo t7312_m38857_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1697_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38857_GM;
MethodInfo m38857_MI = 
{
	"Insert", NULL, &t7312_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7312_m38857_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38857_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7312_m38858_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38858_GM;
MethodInfo m38858_MI = 
{
	"RemoveAt", NULL, &t7312_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7312_m38858_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38858_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7312_m38854_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1697_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38854_GM;
MethodInfo m38854_MI = 
{
	"get_Item", NULL, &t7312_TI, &t1697_0_0_0, RuntimeInvoker_t5_t110, t7312_m38854_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38854_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1697_0_0_0;
static ParameterInfo t7312_m38855_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1697_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38855_GM;
MethodInfo m38855_MI = 
{
	"set_Item", NULL, &t7312_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7312_m38855_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38855_GM};
static MethodInfo* t7312_MIs[] =
{
	&m38856_MI,
	&m38857_MI,
	&m38858_MI,
	&m38854_MI,
	&m38855_MI,
	NULL
};
static TypeInfo* t7312_ITIs[] = 
{
	&t739_TI,
	&t7311_TI,
	&t7313_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7312_0_0_0;
extern Il2CppType t7312_1_0_0;
struct t7312;
extern Il2CppGenericClass t7312_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7312_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7312_MIs, t7312_PIs, NULL, NULL, NULL, NULL, NULL, &t7312_TI, t7312_ITIs, NULL, &t2240__CustomAttributeCache, &t7312_TI, &t7312_0_0_0, &t7312_1_0_0, NULL, &t7312_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5702_TI;

#include "t1698.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>
extern MethodInfo m38859_MI;
static PropertyInfo t5702____Current_PropertyInfo = 
{
	&t5702_TI, "Current", &m38859_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5702_PIs[] =
{
	&t5702____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1698_0_0_0;
extern void* RuntimeInvoker_t1698 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38859_GM;
MethodInfo m38859_MI = 
{
	"get_Current", NULL, &t5702_TI, &t1698_0_0_0, RuntimeInvoker_t1698, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38859_GM};
static MethodInfo* t5702_MIs[] =
{
	&m38859_MI,
	NULL
};
static TypeInfo* t5702_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5702_0_0_0;
extern Il2CppType t5702_1_0_0;
struct t5702;
extern Il2CppGenericClass t5702_GC;
TypeInfo t5702_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5702_MIs, t5702_PIs, NULL, NULL, NULL, NULL, NULL, &t5702_TI, t5702_ITIs, NULL, &EmptyCustomAttributesCache, &t5702_TI, &t5702_0_0_0, &t5702_1_0_0, NULL, &t5702_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4052.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4052_TI;
#include "t4052MD.h"

extern TypeInfo t1698_TI;
extern MethodInfo m22984_MI;
extern MethodInfo m30324_MI;
struct t107;
 int32_t m30324 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22980_MI;
 void m22980 (t4052 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22981_MI;
 t5 * m22981 (t4052 * __this, MethodInfo* method){
	{
		int32_t L_0 = m22984(__this, &m22984_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1698_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22982_MI;
 void m22982 (t4052 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22983_MI;
 bool m22983 (t4052 * __this, MethodInfo* method){
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
 int32_t m22984 (t4052 * __this, MethodInfo* method){
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
		int32_t L_8 = m30324(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m30324_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>
extern Il2CppType t107_0_0_1;
FieldInfo t4052_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4052_TI, offsetof(t4052, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4052_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4052_TI, offsetof(t4052, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4052_FIs[] =
{
	&t4052_f0_FieldInfo,
	&t4052_f1_FieldInfo,
	NULL
};
static PropertyInfo t4052____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4052_TI, "System.Collections.IEnumerator.Current", &m22981_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4052____Current_PropertyInfo = 
{
	&t4052_TI, "Current", &m22984_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4052_PIs[] =
{
	&t4052____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4052____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4052_m22980_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22980_GM;
MethodInfo m22980_MI = 
{
	".ctor", (methodPointerType)&m22980, &t4052_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4052_m22980_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22980_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22981_GM;
MethodInfo m22981_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22981, &t4052_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22981_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22982_GM;
MethodInfo m22982_MI = 
{
	"Dispose", (methodPointerType)&m22982, &t4052_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22982_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22983_GM;
MethodInfo m22983_MI = 
{
	"MoveNext", (methodPointerType)&m22983, &t4052_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22983_GM};
extern Il2CppType t1698_0_0_0;
extern void* RuntimeInvoker_t1698 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22984_GM;
MethodInfo m22984_MI = 
{
	"get_Current", (methodPointerType)&m22984, &t4052_TI, &t1698_0_0_0, RuntimeInvoker_t1698, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22984_GM};
static MethodInfo* t4052_MIs[] =
{
	&m22980_MI,
	&m22981_MI,
	&m22982_MI,
	&m22983_MI,
	&m22984_MI,
	NULL
};
static MethodInfo* t4052_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22981_MI,
	&m22983_MI,
	&m22982_MI,
	&m22984_MI,
};
static TypeInfo* t4052_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5702_TI,
};
static Il2CppInterfaceOffsetPair t4052_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5702_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4052_0_0_0;
extern Il2CppType t4052_1_0_0;
extern Il2CppGenericClass t4052_GC;
TypeInfo t4052_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4052_MIs, t4052_PIs, t4052_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4052_TI, t4052_ITIs, t4052_VT, &EmptyCustomAttributesCache, &t4052_TI, &t4052_0_0_0, &t4052_1_0_0, t4052_IOs, &t4052_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4052)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7314_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>
extern MethodInfo m38860_MI;
static PropertyInfo t7314____Count_PropertyInfo = 
{
	&t7314_TI, "Count", &m38860_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m38861_MI;
static PropertyInfo t7314____IsReadOnly_PropertyInfo = 
{
	&t7314_TI, "IsReadOnly", &m38861_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7314_PIs[] =
{
	&t7314____Count_PropertyInfo,
	&t7314____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38860_GM;
MethodInfo m38860_MI = 
{
	"get_Count", NULL, &t7314_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38860_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38861_GM;
MethodInfo m38861_MI = 
{
	"get_IsReadOnly", NULL, &t7314_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38861_GM};
extern Il2CppType t1698_0_0_0;
extern Il2CppType t1698_0_0_0;
static ParameterInfo t7314_m38862_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1698_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38862_GM;
MethodInfo m38862_MI = 
{
	"Add", NULL, &t7314_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7314_m38862_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38862_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38863_GM;
MethodInfo m38863_MI = 
{
	"Clear", NULL, &t7314_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38863_GM};
extern Il2CppType t1698_0_0_0;
static ParameterInfo t7314_m38864_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1698_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38864_GM;
MethodInfo m38864_MI = 
{
	"Contains", NULL, &t7314_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7314_m38864_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38864_GM};
extern Il2CppType t4316_0_0_0;
extern Il2CppType t4316_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7314_m38865_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4316_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38865_GM;
MethodInfo m38865_MI = 
{
	"CopyTo", NULL, &t7314_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7314_m38865_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38865_GM};
extern Il2CppType t1698_0_0_0;
static ParameterInfo t7314_m38866_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1698_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38866_GM;
MethodInfo m38866_MI = 
{
	"Remove", NULL, &t7314_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7314_m38866_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38866_GM};
static MethodInfo* t7314_MIs[] =
{
	&m38860_MI,
	&m38861_MI,
	&m38862_MI,
	&m38863_MI,
	&m38864_MI,
	&m38865_MI,
	&m38866_MI,
	NULL
};
extern TypeInfo t7316_TI;
static TypeInfo* t7314_ITIs[] = 
{
	&t739_TI,
	&t7316_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7314_0_0_0;
extern Il2CppType t7314_1_0_0;
struct t7314;
extern Il2CppGenericClass t7314_GC;
TypeInfo t7314_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7314_MIs, t7314_PIs, NULL, NULL, NULL, NULL, NULL, &t7314_TI, t7314_ITIs, NULL, &EmptyCustomAttributesCache, &t7314_TI, &t7314_0_0_0, &t7314_1_0_0, NULL, &t7314_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ClassInterfaceType>
extern Il2CppType t5702_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38867_GM;
MethodInfo m38867_MI = 
{
	"GetEnumerator", NULL, &t7316_TI, &t5702_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38867_GM};
static MethodInfo* t7316_MIs[] =
{
	&m38867_MI,
	NULL
};
static TypeInfo* t7316_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7316_0_0_0;
extern Il2CppType t7316_1_0_0;
struct t7316;
extern Il2CppGenericClass t7316_GC;
TypeInfo t7316_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7316_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7316_TI, t7316_ITIs, NULL, &EmptyCustomAttributesCache, &t7316_TI, &t7316_0_0_0, &t7316_1_0_0, NULL, &t7316_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7315_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>
extern MethodInfo m38868_MI;
extern MethodInfo m38869_MI;
static PropertyInfo t7315____Item_PropertyInfo = 
{
	&t7315_TI, "Item", &m38868_MI, &m38869_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7315_PIs[] =
{
	&t7315____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1698_0_0_0;
static ParameterInfo t7315_m38870_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1698_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38870_GM;
MethodInfo m38870_MI = 
{
	"IndexOf", NULL, &t7315_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t7315_m38870_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38870_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1698_0_0_0;
static ParameterInfo t7315_m38871_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1698_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38871_GM;
MethodInfo m38871_MI = 
{
	"Insert", NULL, &t7315_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7315_m38871_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38871_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7315_m38872_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38872_GM;
MethodInfo m38872_MI = 
{
	"RemoveAt", NULL, &t7315_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7315_m38872_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38872_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7315_m38868_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1698_0_0_0;
extern void* RuntimeInvoker_t1698_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38868_GM;
MethodInfo m38868_MI = 
{
	"get_Item", NULL, &t7315_TI, &t1698_0_0_0, RuntimeInvoker_t1698_t110, t7315_m38868_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38868_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1698_0_0_0;
static ParameterInfo t7315_m38869_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1698_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38869_GM;
MethodInfo m38869_MI = 
{
	"set_Item", NULL, &t7315_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7315_m38869_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38869_GM};
static MethodInfo* t7315_MIs[] =
{
	&m38870_MI,
	&m38871_MI,
	&m38872_MI,
	&m38868_MI,
	&m38869_MI,
	NULL
};
static TypeInfo* t7315_ITIs[] = 
{
	&t739_TI,
	&t7314_TI,
	&t7316_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7315_0_0_0;
extern Il2CppType t7315_1_0_0;
struct t7315;
extern Il2CppGenericClass t7315_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7315_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7315_MIs, t7315_PIs, NULL, NULL, NULL, NULL, NULL, &t7315_TI, t7315_ITIs, NULL, &t2240__CustomAttributeCache, &t7315_TI, &t7315_0_0_0, &t7315_1_0_0, NULL, &t7315_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5704_TI;

#include "t1699.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern MethodInfo m38873_MI;
static PropertyInfo t5704____Current_PropertyInfo = 
{
	&t5704_TI, "Current", &m38873_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5704_PIs[] =
{
	&t5704____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1699_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38873_GM;
MethodInfo m38873_MI = 
{
	"get_Current", NULL, &t5704_TI, &t1699_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38873_GM};
static MethodInfo* t5704_MIs[] =
{
	&m38873_MI,
	NULL
};
static TypeInfo* t5704_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5704_0_0_0;
extern Il2CppType t5704_1_0_0;
struct t5704;
extern Il2CppGenericClass t5704_GC;
TypeInfo t5704_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5704_MIs, t5704_PIs, NULL, NULL, NULL, NULL, NULL, &t5704_TI, t5704_ITIs, NULL, &EmptyCustomAttributesCache, &t5704_TI, &t5704_0_0_0, &t5704_1_0_0, NULL, &t5704_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4053.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4053_TI;
#include "t4053MD.h"

extern TypeInfo t1699_TI;
extern MethodInfo m22989_MI;
extern MethodInfo m30335_MI;
struct t107;
#define m30335(__this, p0, method) (t1699 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t4053_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4053_TI, offsetof(t4053, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4053_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4053_TI, offsetof(t4053, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4053_FIs[] =
{
	&t4053_f0_FieldInfo,
	&t4053_f1_FieldInfo,
	NULL
};
extern MethodInfo m22986_MI;
static PropertyInfo t4053____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4053_TI, "System.Collections.IEnumerator.Current", &m22986_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4053____Current_PropertyInfo = 
{
	&t4053_TI, "Current", &m22989_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4053_PIs[] =
{
	&t4053____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4053____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4053_m22985_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22985_GM;
MethodInfo m22985_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t4053_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4053_m22985_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22985_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22986_GM;
MethodInfo m22986_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t4053_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22986_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22987_GM;
MethodInfo m22987_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t4053_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22987_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22988_GM;
MethodInfo m22988_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t4053_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22988_GM};
extern Il2CppType t1699_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22989_GM;
MethodInfo m22989_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t4053_TI, &t1699_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22989_GM};
static MethodInfo* t4053_MIs[] =
{
	&m22985_MI,
	&m22986_MI,
	&m22987_MI,
	&m22988_MI,
	&m22989_MI,
	NULL
};
extern MethodInfo m22988_MI;
extern MethodInfo m22987_MI;
static MethodInfo* t4053_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22986_MI,
	&m22988_MI,
	&m22987_MI,
	&m22989_MI,
};
static TypeInfo* t4053_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5704_TI,
};
static Il2CppInterfaceOffsetPair t4053_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5704_TI, 7},
};
extern TypeInfo t1699_TI;
static Il2CppRGCTXData t4053_RGCTXData[3] = 
{
	&m22989_MI/* Method Usage */,
	&t1699_TI/* Class Usage */,
	&m30335_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4053_0_0_0;
extern Il2CppType t4053_1_0_0;
extern Il2CppGenericClass t4053_GC;
TypeInfo t4053_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4053_MIs, t4053_PIs, t4053_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4053_TI, t4053_ITIs, t4053_VT, &EmptyCustomAttributesCache, &t4053_TI, &t4053_0_0_0, &t4053_1_0_0, t4053_IOs, &t4053_GC, NULL, NULL, NULL, t4053_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4053)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7317_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern MethodInfo m38874_MI;
static PropertyInfo t7317____Count_PropertyInfo = 
{
	&t7317_TI, "Count", &m38874_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m38875_MI;
static PropertyInfo t7317____IsReadOnly_PropertyInfo = 
{
	&t7317_TI, "IsReadOnly", &m38875_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7317_PIs[] =
{
	&t7317____Count_PropertyInfo,
	&t7317____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38874_GM;
MethodInfo m38874_MI = 
{
	"get_Count", NULL, &t7317_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38874_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38875_GM;
MethodInfo m38875_MI = 
{
	"get_IsReadOnly", NULL, &t7317_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38875_GM};
extern Il2CppType t1699_0_0_0;
extern Il2CppType t1699_0_0_0;
static ParameterInfo t7317_m38876_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1699_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38876_GM;
MethodInfo m38876_MI = 
{
	"Add", NULL, &t7317_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t7317_m38876_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38876_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38877_GM;
MethodInfo m38877_MI = 
{
	"Clear", NULL, &t7317_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38877_GM};
extern Il2CppType t1699_0_0_0;
static ParameterInfo t7317_m38878_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1699_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38878_GM;
MethodInfo m38878_MI = 
{
	"Contains", NULL, &t7317_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7317_m38878_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38878_GM};
extern Il2CppType t4317_0_0_0;
extern Il2CppType t4317_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7317_m38879_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4317_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38879_GM;
MethodInfo m38879_MI = 
{
	"CopyTo", NULL, &t7317_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7317_m38879_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38879_GM};
extern Il2CppType t1699_0_0_0;
static ParameterInfo t7317_m38880_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1699_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38880_GM;
MethodInfo m38880_MI = 
{
	"Remove", NULL, &t7317_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7317_m38880_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38880_GM};
static MethodInfo* t7317_MIs[] =
{
	&m38874_MI,
	&m38875_MI,
	&m38876_MI,
	&m38877_MI,
	&m38878_MI,
	&m38879_MI,
	&m38880_MI,
	NULL
};
extern TypeInfo t7319_TI;
static TypeInfo* t7317_ITIs[] = 
{
	&t739_TI,
	&t7319_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7317_0_0_0;
extern Il2CppType t7317_1_0_0;
struct t7317;
extern Il2CppGenericClass t7317_GC;
TypeInfo t7317_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7317_MIs, t7317_PIs, NULL, NULL, NULL, NULL, NULL, &t7317_TI, t7317_ITIs, NULL, &EmptyCustomAttributesCache, &t7317_TI, &t7317_0_0_0, &t7317_1_0_0, NULL, &t7317_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern Il2CppType t5704_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38881_GM;
MethodInfo m38881_MI = 
{
	"GetEnumerator", NULL, &t7319_TI, &t5704_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38881_GM};
static MethodInfo* t7319_MIs[] =
{
	&m38881_MI,
	NULL
};
static TypeInfo* t7319_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7319_0_0_0;
extern Il2CppType t7319_1_0_0;
struct t7319;
extern Il2CppGenericClass t7319_GC;
TypeInfo t7319_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7319_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7319_TI, t7319_ITIs, NULL, &EmptyCustomAttributesCache, &t7319_TI, &t7319_0_0_0, &t7319_1_0_0, NULL, &t7319_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7318_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern MethodInfo m38882_MI;
extern MethodInfo m38883_MI;
static PropertyInfo t7318____Item_PropertyInfo = 
{
	&t7318_TI, "Item", &m38882_MI, &m38883_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7318_PIs[] =
{
	&t7318____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1699_0_0_0;
static ParameterInfo t7318_m38884_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1699_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38884_GM;
MethodInfo m38884_MI = 
{
	"IndexOf", NULL, &t7318_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7318_m38884_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38884_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1699_0_0_0;
static ParameterInfo t7318_m38885_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1699_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38885_GM;
MethodInfo m38885_MI = 
{
	"Insert", NULL, &t7318_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7318_m38885_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38885_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7318_m38886_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38886_GM;
MethodInfo m38886_MI = 
{
	"RemoveAt", NULL, &t7318_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7318_m38886_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38886_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7318_m38882_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1699_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38882_GM;
MethodInfo m38882_MI = 
{
	"get_Item", NULL, &t7318_TI, &t1699_0_0_0, RuntimeInvoker_t5_t110, t7318_m38882_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38882_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1699_0_0_0;
static ParameterInfo t7318_m38883_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1699_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38883_GM;
MethodInfo m38883_MI = 
{
	"set_Item", NULL, &t7318_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7318_m38883_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38883_GM};
static MethodInfo* t7318_MIs[] =
{
	&m38884_MI,
	&m38885_MI,
	&m38886_MI,
	&m38882_MI,
	&m38883_MI,
	NULL
};
static TypeInfo* t7318_ITIs[] = 
{
	&t739_TI,
	&t7317_TI,
	&t7319_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7318_0_0_0;
extern Il2CppType t7318_1_0_0;
struct t7318;
extern Il2CppGenericClass t7318_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7318_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7318_MIs, t7318_PIs, NULL, NULL, NULL, NULL, NULL, &t7318_TI, t7318_ITIs, NULL, &t2240__CustomAttributeCache, &t7318_TI, &t7318_0_0_0, &t7318_1_0_0, NULL, &t7318_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5706_TI;

#include "t1700.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>
extern MethodInfo m38887_MI;
static PropertyInfo t5706____Current_PropertyInfo = 
{
	&t5706_TI, "Current", &m38887_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5706_PIs[] =
{
	&t5706____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1700_0_0_0;
extern void* RuntimeInvoker_t1700 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38887_GM;
MethodInfo m38887_MI = 
{
	"get_Current", NULL, &t5706_TI, &t1700_0_0_0, RuntimeInvoker_t1700, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38887_GM};
static MethodInfo* t5706_MIs[] =
{
	&m38887_MI,
	NULL
};
static TypeInfo* t5706_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5706_0_0_0;
extern Il2CppType t5706_1_0_0;
struct t5706;
extern Il2CppGenericClass t5706_GC;
TypeInfo t5706_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5706_MIs, t5706_PIs, NULL, NULL, NULL, NULL, NULL, &t5706_TI, t5706_ITIs, NULL, &EmptyCustomAttributesCache, &t5706_TI, &t5706_0_0_0, &t5706_1_0_0, NULL, &t5706_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4054.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4054_TI;
#include "t4054MD.h"

extern TypeInfo t1700_TI;
extern MethodInfo m22994_MI;
extern MethodInfo m30346_MI;
struct t107;
 int32_t m30346 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22990_MI;
 void m22990 (t4054 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22991_MI;
 t5 * m22991 (t4054 * __this, MethodInfo* method){
	{
		int32_t L_0 = m22994(__this, &m22994_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1700_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22992_MI;
 void m22992 (t4054 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22993_MI;
 bool m22993 (t4054 * __this, MethodInfo* method){
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
 int32_t m22994 (t4054 * __this, MethodInfo* method){
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
		int32_t L_8 = m30346(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m30346_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>
extern Il2CppType t107_0_0_1;
FieldInfo t4054_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4054_TI, offsetof(t4054, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4054_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4054_TI, offsetof(t4054, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4054_FIs[] =
{
	&t4054_f0_FieldInfo,
	&t4054_f1_FieldInfo,
	NULL
};
static PropertyInfo t4054____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4054_TI, "System.Collections.IEnumerator.Current", &m22991_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4054____Current_PropertyInfo = 
{
	&t4054_TI, "Current", &m22994_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4054_PIs[] =
{
	&t4054____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4054____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4054_m22990_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22990_GM;
MethodInfo m22990_MI = 
{
	".ctor", (methodPointerType)&m22990, &t4054_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4054_m22990_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22990_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22991_GM;
MethodInfo m22991_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22991, &t4054_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22991_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22992_GM;
MethodInfo m22992_MI = 
{
	"Dispose", (methodPointerType)&m22992, &t4054_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22992_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22993_GM;
MethodInfo m22993_MI = 
{
	"MoveNext", (methodPointerType)&m22993, &t4054_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22993_GM};
extern Il2CppType t1700_0_0_0;
extern void* RuntimeInvoker_t1700 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22994_GM;
MethodInfo m22994_MI = 
{
	"get_Current", (methodPointerType)&m22994, &t4054_TI, &t1700_0_0_0, RuntimeInvoker_t1700, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22994_GM};
static MethodInfo* t4054_MIs[] =
{
	&m22990_MI,
	&m22991_MI,
	&m22992_MI,
	&m22993_MI,
	&m22994_MI,
	NULL
};
static MethodInfo* t4054_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22991_MI,
	&m22993_MI,
	&m22992_MI,
	&m22994_MI,
};
static TypeInfo* t4054_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5706_TI,
};
static Il2CppInterfaceOffsetPair t4054_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5706_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4054_0_0_0;
extern Il2CppType t4054_1_0_0;
extern Il2CppGenericClass t4054_GC;
TypeInfo t4054_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4054_MIs, t4054_PIs, t4054_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4054_TI, t4054_ITIs, t4054_VT, &EmptyCustomAttributesCache, &t4054_TI, &t4054_0_0_0, &t4054_1_0_0, t4054_IOs, &t4054_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4054)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7320_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>
extern MethodInfo m38888_MI;
static PropertyInfo t7320____Count_PropertyInfo = 
{
	&t7320_TI, "Count", &m38888_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m38889_MI;
static PropertyInfo t7320____IsReadOnly_PropertyInfo = 
{
	&t7320_TI, "IsReadOnly", &m38889_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7320_PIs[] =
{
	&t7320____Count_PropertyInfo,
	&t7320____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38888_GM;
MethodInfo m38888_MI = 
{
	"get_Count", NULL, &t7320_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38888_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38889_GM;
MethodInfo m38889_MI = 
{
	"get_IsReadOnly", NULL, &t7320_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38889_GM};
extern Il2CppType t1700_0_0_0;
extern Il2CppType t1700_0_0_0;
static ParameterInfo t7320_m38890_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1700_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38890_GM;
MethodInfo m38890_MI = 
{
	"Add", NULL, &t7320_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7320_m38890_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38890_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38891_GM;
MethodInfo m38891_MI = 
{
	"Clear", NULL, &t7320_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38891_GM};
extern Il2CppType t1700_0_0_0;
static ParameterInfo t7320_m38892_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1700_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38892_GM;
MethodInfo m38892_MI = 
{
	"Contains", NULL, &t7320_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7320_m38892_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38892_GM};
extern Il2CppType t4318_0_0_0;
extern Il2CppType t4318_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7320_m38893_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4318_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38893_GM;
MethodInfo m38893_MI = 
{
	"CopyTo", NULL, &t7320_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7320_m38893_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38893_GM};
extern Il2CppType t1700_0_0_0;
static ParameterInfo t7320_m38894_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1700_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38894_GM;
MethodInfo m38894_MI = 
{
	"Remove", NULL, &t7320_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7320_m38894_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38894_GM};
static MethodInfo* t7320_MIs[] =
{
	&m38888_MI,
	&m38889_MI,
	&m38890_MI,
	&m38891_MI,
	&m38892_MI,
	&m38893_MI,
	&m38894_MI,
	NULL
};
extern TypeInfo t7322_TI;
static TypeInfo* t7320_ITIs[] = 
{
	&t739_TI,
	&t7322_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7320_0_0_0;
extern Il2CppType t7320_1_0_0;
struct t7320;
extern Il2CppGenericClass t7320_GC;
TypeInfo t7320_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7320_MIs, t7320_PIs, NULL, NULL, NULL, NULL, NULL, &t7320_TI, t7320_ITIs, NULL, &EmptyCustomAttributesCache, &t7320_TI, &t7320_0_0_0, &t7320_1_0_0, NULL, &t7320_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComInterfaceType>
extern Il2CppType t5706_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38895_GM;
MethodInfo m38895_MI = 
{
	"GetEnumerator", NULL, &t7322_TI, &t5706_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38895_GM};
static MethodInfo* t7322_MIs[] =
{
	&m38895_MI,
	NULL
};
static TypeInfo* t7322_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7322_0_0_0;
extern Il2CppType t7322_1_0_0;
struct t7322;
extern Il2CppGenericClass t7322_GC;
TypeInfo t7322_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7322_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7322_TI, t7322_ITIs, NULL, &EmptyCustomAttributesCache, &t7322_TI, &t7322_0_0_0, &t7322_1_0_0, NULL, &t7322_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7321_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>
extern MethodInfo m38896_MI;
extern MethodInfo m38897_MI;
static PropertyInfo t7321____Item_PropertyInfo = 
{
	&t7321_TI, "Item", &m38896_MI, &m38897_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7321_PIs[] =
{
	&t7321____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1700_0_0_0;
static ParameterInfo t7321_m38898_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1700_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38898_GM;
MethodInfo m38898_MI = 
{
	"IndexOf", NULL, &t7321_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t7321_m38898_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38898_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1700_0_0_0;
static ParameterInfo t7321_m38899_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1700_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38899_GM;
MethodInfo m38899_MI = 
{
	"Insert", NULL, &t7321_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7321_m38899_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38899_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7321_m38900_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38900_GM;
MethodInfo m38900_MI = 
{
	"RemoveAt", NULL, &t7321_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7321_m38900_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38900_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7321_m38896_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1700_0_0_0;
extern void* RuntimeInvoker_t1700_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38896_GM;
MethodInfo m38896_MI = 
{
	"get_Item", NULL, &t7321_TI, &t1700_0_0_0, RuntimeInvoker_t1700_t110, t7321_m38896_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38896_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1700_0_0_0;
static ParameterInfo t7321_m38897_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1700_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38897_GM;
MethodInfo m38897_MI = 
{
	"set_Item", NULL, &t7321_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7321_m38897_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38897_GM};
static MethodInfo* t7321_MIs[] =
{
	&m38898_MI,
	&m38899_MI,
	&m38900_MI,
	&m38896_MI,
	&m38897_MI,
	NULL
};
static TypeInfo* t7321_ITIs[] = 
{
	&t739_TI,
	&t7320_TI,
	&t7322_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7321_0_0_0;
extern Il2CppType t7321_1_0_0;
struct t7321;
extern Il2CppGenericClass t7321_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7321_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7321_MIs, t7321_PIs, NULL, NULL, NULL, NULL, NULL, &t7321_TI, t7321_ITIs, NULL, &t2240__CustomAttributeCache, &t7321_TI, &t7321_0_0_0, &t7321_1_0_0, NULL, &t7321_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5708_TI;

#include "t1701.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>
extern MethodInfo m38901_MI;
static PropertyInfo t5708____Current_PropertyInfo = 
{
	&t5708_TI, "Current", &m38901_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5708_PIs[] =
{
	&t5708____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1701_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38901_GM;
MethodInfo m38901_MI = 
{
	"get_Current", NULL, &t5708_TI, &t1701_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38901_GM};
static MethodInfo* t5708_MIs[] =
{
	&m38901_MI,
	NULL
};
static TypeInfo* t5708_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5708_0_0_0;
extern Il2CppType t5708_1_0_0;
struct t5708;
extern Il2CppGenericClass t5708_GC;
TypeInfo t5708_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5708_MIs, t5708_PIs, NULL, NULL, NULL, NULL, NULL, &t5708_TI, t5708_ITIs, NULL, &EmptyCustomAttributesCache, &t5708_TI, &t5708_0_0_0, &t5708_1_0_0, NULL, &t5708_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4055.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4055_TI;
#include "t4055MD.h"

extern TypeInfo t1701_TI;
extern MethodInfo m22999_MI;
extern MethodInfo m30357_MI;
struct t107;
#define m30357(__this, p0, method) (t1701 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t4055_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4055_TI, offsetof(t4055, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4055_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4055_TI, offsetof(t4055, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4055_FIs[] =
{
	&t4055_f0_FieldInfo,
	&t4055_f1_FieldInfo,
	NULL
};
extern MethodInfo m22996_MI;
static PropertyInfo t4055____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4055_TI, "System.Collections.IEnumerator.Current", &m22996_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4055____Current_PropertyInfo = 
{
	&t4055_TI, "Current", &m22999_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4055_PIs[] =
{
	&t4055____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4055____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4055_m22995_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22995_GM;
MethodInfo m22995_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t4055_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4055_m22995_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22995_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22996_GM;
MethodInfo m22996_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t4055_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22996_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22997_GM;
MethodInfo m22997_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t4055_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22997_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22998_GM;
MethodInfo m22998_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t4055_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22998_GM};
extern Il2CppType t1701_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22999_GM;
MethodInfo m22999_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t4055_TI, &t1701_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22999_GM};
static MethodInfo* t4055_MIs[] =
{
	&m22995_MI,
	&m22996_MI,
	&m22997_MI,
	&m22998_MI,
	&m22999_MI,
	NULL
};
extern MethodInfo m22998_MI;
extern MethodInfo m22997_MI;
static MethodInfo* t4055_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22996_MI,
	&m22998_MI,
	&m22997_MI,
	&m22999_MI,
};
static TypeInfo* t4055_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5708_TI,
};
static Il2CppInterfaceOffsetPair t4055_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5708_TI, 7},
};
extern TypeInfo t1701_TI;
static Il2CppRGCTXData t4055_RGCTXData[3] = 
{
	&m22999_MI/* Method Usage */,
	&t1701_TI/* Class Usage */,
	&m30357_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4055_0_0_0;
extern Il2CppType t4055_1_0_0;
extern Il2CppGenericClass t4055_GC;
TypeInfo t4055_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4055_MIs, t4055_PIs, t4055_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4055_TI, t4055_ITIs, t4055_VT, &EmptyCustomAttributesCache, &t4055_TI, &t4055_0_0_0, &t4055_1_0_0, t4055_IOs, &t4055_GC, NULL, NULL, NULL, t4055_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4055)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7323_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>
extern MethodInfo m38902_MI;
static PropertyInfo t7323____Count_PropertyInfo = 
{
	&t7323_TI, "Count", &m38902_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m38903_MI;
static PropertyInfo t7323____IsReadOnly_PropertyInfo = 
{
	&t7323_TI, "IsReadOnly", &m38903_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7323_PIs[] =
{
	&t7323____Count_PropertyInfo,
	&t7323____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38902_GM;
MethodInfo m38902_MI = 
{
	"get_Count", NULL, &t7323_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38902_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38903_GM;
MethodInfo m38903_MI = 
{
	"get_IsReadOnly", NULL, &t7323_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38903_GM};
extern Il2CppType t1701_0_0_0;
extern Il2CppType t1701_0_0_0;
static ParameterInfo t7323_m38904_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1701_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38904_GM;
MethodInfo m38904_MI = 
{
	"Add", NULL, &t7323_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t7323_m38904_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38904_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38905_GM;
MethodInfo m38905_MI = 
{
	"Clear", NULL, &t7323_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38905_GM};
extern Il2CppType t1701_0_0_0;
static ParameterInfo t7323_m38906_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1701_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38906_GM;
MethodInfo m38906_MI = 
{
	"Contains", NULL, &t7323_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7323_m38906_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38906_GM};
extern Il2CppType t4319_0_0_0;
extern Il2CppType t4319_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7323_m38907_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4319_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38907_GM;
MethodInfo m38907_MI = 
{
	"CopyTo", NULL, &t7323_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7323_m38907_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38907_GM};
extern Il2CppType t1701_0_0_0;
static ParameterInfo t7323_m38908_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1701_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38908_GM;
MethodInfo m38908_MI = 
{
	"Remove", NULL, &t7323_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7323_m38908_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38908_GM};
static MethodInfo* t7323_MIs[] =
{
	&m38902_MI,
	&m38903_MI,
	&m38904_MI,
	&m38905_MI,
	&m38906_MI,
	&m38907_MI,
	&m38908_MI,
	NULL
};
extern TypeInfo t7325_TI;
static TypeInfo* t7323_ITIs[] = 
{
	&t739_TI,
	&t7325_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7323_0_0_0;
extern Il2CppType t7323_1_0_0;
struct t7323;
extern Il2CppGenericClass t7323_GC;
TypeInfo t7323_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7323_MIs, t7323_PIs, NULL, NULL, NULL, NULL, NULL, &t7323_TI, t7323_ITIs, NULL, &EmptyCustomAttributesCache, &t7323_TI, &t7323_0_0_0, &t7323_1_0_0, NULL, &t7323_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.DispIdAttribute>
extern Il2CppType t5708_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38909_GM;
MethodInfo m38909_MI = 
{
	"GetEnumerator", NULL, &t7325_TI, &t5708_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38909_GM};
static MethodInfo* t7325_MIs[] =
{
	&m38909_MI,
	NULL
};
static TypeInfo* t7325_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7325_0_0_0;
extern Il2CppType t7325_1_0_0;
struct t7325;
extern Il2CppGenericClass t7325_GC;
TypeInfo t7325_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7325_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7325_TI, t7325_ITIs, NULL, &EmptyCustomAttributesCache, &t7325_TI, &t7325_0_0_0, &t7325_1_0_0, NULL, &t7325_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7324_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.DispIdAttribute>
extern MethodInfo m38910_MI;
extern MethodInfo m38911_MI;
static PropertyInfo t7324____Item_PropertyInfo = 
{
	&t7324_TI, "Item", &m38910_MI, &m38911_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7324_PIs[] =
{
	&t7324____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1701_0_0_0;
static ParameterInfo t7324_m38912_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1701_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38912_GM;
MethodInfo m38912_MI = 
{
	"IndexOf", NULL, &t7324_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7324_m38912_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38912_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1701_0_0_0;
static ParameterInfo t7324_m38913_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1701_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38913_GM;
MethodInfo m38913_MI = 
{
	"Insert", NULL, &t7324_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7324_m38913_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38913_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7324_m38914_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38914_GM;
MethodInfo m38914_MI = 
{
	"RemoveAt", NULL, &t7324_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7324_m38914_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38914_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7324_m38910_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1701_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38910_GM;
MethodInfo m38910_MI = 
{
	"get_Item", NULL, &t7324_TI, &t1701_0_0_0, RuntimeInvoker_t5_t110, t7324_m38910_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38910_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1701_0_0_0;
static ParameterInfo t7324_m38911_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1701_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38911_GM;
MethodInfo m38911_MI = 
{
	"set_Item", NULL, &t7324_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7324_m38911_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38911_GM};
static MethodInfo* t7324_MIs[] =
{
	&m38912_MI,
	&m38913_MI,
	&m38914_MI,
	&m38910_MI,
	&m38911_MI,
	NULL
};
static TypeInfo* t7324_ITIs[] = 
{
	&t739_TI,
	&t7323_TI,
	&t7325_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7324_0_0_0;
extern Il2CppType t7324_1_0_0;
struct t7324;
extern Il2CppGenericClass t7324_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7324_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7324_MIs, t7324_PIs, NULL, NULL, NULL, NULL, NULL, &t7324_TI, t7324_ITIs, NULL, &t2240__CustomAttributeCache, &t7324_TI, &t7324_0_0_0, &t7324_1_0_0, NULL, &t7324_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5710_TI;

#include "t1703.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.GCHandleType>
extern MethodInfo m38915_MI;
static PropertyInfo t5710____Current_PropertyInfo = 
{
	&t5710_TI, "Current", &m38915_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5710_PIs[] =
{
	&t5710____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1703_0_0_0;
extern void* RuntimeInvoker_t1703 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38915_GM;
MethodInfo m38915_MI = 
{
	"get_Current", NULL, &t5710_TI, &t1703_0_0_0, RuntimeInvoker_t1703, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38915_GM};
static MethodInfo* t5710_MIs[] =
{
	&m38915_MI,
	NULL
};
static TypeInfo* t5710_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5710_0_0_0;
extern Il2CppType t5710_1_0_0;
struct t5710;
extern Il2CppGenericClass t5710_GC;
TypeInfo t5710_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5710_MIs, t5710_PIs, NULL, NULL, NULL, NULL, NULL, &t5710_TI, t5710_ITIs, NULL, &EmptyCustomAttributesCache, &t5710_TI, &t5710_0_0_0, &t5710_1_0_0, NULL, &t5710_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4056.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4056_TI;
#include "t4056MD.h"

extern TypeInfo t1703_TI;
extern MethodInfo m23004_MI;
extern MethodInfo m30368_MI;
struct t107;
 int32_t m30368 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m23000_MI;
 void m23000 (t4056 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23001_MI;
 t5 * m23001 (t4056 * __this, MethodInfo* method){
	{
		int32_t L_0 = m23004(__this, &m23004_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1703_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m23002_MI;
 void m23002 (t4056 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23003_MI;
 bool m23003 (t4056 * __this, MethodInfo* method){
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
 int32_t m23004 (t4056 * __this, MethodInfo* method){
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
		int32_t L_8 = m30368(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m30368_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>
extern Il2CppType t107_0_0_1;
FieldInfo t4056_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4056_TI, offsetof(t4056, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4056_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4056_TI, offsetof(t4056, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4056_FIs[] =
{
	&t4056_f0_FieldInfo,
	&t4056_f1_FieldInfo,
	NULL
};
static PropertyInfo t4056____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4056_TI, "System.Collections.IEnumerator.Current", &m23001_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4056____Current_PropertyInfo = 
{
	&t4056_TI, "Current", &m23004_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4056_PIs[] =
{
	&t4056____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4056____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4056_m23000_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23000_GM;
MethodInfo m23000_MI = 
{
	".ctor", (methodPointerType)&m23000, &t4056_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4056_m23000_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23000_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23001_GM;
MethodInfo m23001_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m23001, &t4056_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23001_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23002_GM;
MethodInfo m23002_MI = 
{
	"Dispose", (methodPointerType)&m23002, &t4056_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23002_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23003_GM;
MethodInfo m23003_MI = 
{
	"MoveNext", (methodPointerType)&m23003, &t4056_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23003_GM};
extern Il2CppType t1703_0_0_0;
extern void* RuntimeInvoker_t1703 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23004_GM;
MethodInfo m23004_MI = 
{
	"get_Current", (methodPointerType)&m23004, &t4056_TI, &t1703_0_0_0, RuntimeInvoker_t1703, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23004_GM};
static MethodInfo* t4056_MIs[] =
{
	&m23000_MI,
	&m23001_MI,
	&m23002_MI,
	&m23003_MI,
	&m23004_MI,
	NULL
};
static MethodInfo* t4056_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m23001_MI,
	&m23003_MI,
	&m23002_MI,
	&m23004_MI,
};
static TypeInfo* t4056_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5710_TI,
};
static Il2CppInterfaceOffsetPair t4056_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5710_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4056_0_0_0;
extern Il2CppType t4056_1_0_0;
extern Il2CppGenericClass t4056_GC;
TypeInfo t4056_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4056_MIs, t4056_PIs, t4056_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4056_TI, t4056_ITIs, t4056_VT, &EmptyCustomAttributesCache, &t4056_TI, &t4056_0_0_0, &t4056_1_0_0, t4056_IOs, &t4056_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4056)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7326_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>
extern MethodInfo m38916_MI;
static PropertyInfo t7326____Count_PropertyInfo = 
{
	&t7326_TI, "Count", &m38916_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m38917_MI;
static PropertyInfo t7326____IsReadOnly_PropertyInfo = 
{
	&t7326_TI, "IsReadOnly", &m38917_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7326_PIs[] =
{
	&t7326____Count_PropertyInfo,
	&t7326____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38916_GM;
MethodInfo m38916_MI = 
{
	"get_Count", NULL, &t7326_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38916_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38917_GM;
MethodInfo m38917_MI = 
{
	"get_IsReadOnly", NULL, &t7326_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38917_GM};
extern Il2CppType t1703_0_0_0;
extern Il2CppType t1703_0_0_0;
static ParameterInfo t7326_m38918_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1703_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38918_GM;
MethodInfo m38918_MI = 
{
	"Add", NULL, &t7326_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7326_m38918_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38918_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38919_GM;
MethodInfo m38919_MI = 
{
	"Clear", NULL, &t7326_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38919_GM};
extern Il2CppType t1703_0_0_0;
static ParameterInfo t7326_m38920_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1703_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38920_GM;
MethodInfo m38920_MI = 
{
	"Contains", NULL, &t7326_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7326_m38920_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38920_GM};
extern Il2CppType t4320_0_0_0;
extern Il2CppType t4320_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7326_m38921_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4320_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38921_GM;
MethodInfo m38921_MI = 
{
	"CopyTo", NULL, &t7326_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7326_m38921_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38921_GM};
extern Il2CppType t1703_0_0_0;
static ParameterInfo t7326_m38922_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1703_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38922_GM;
MethodInfo m38922_MI = 
{
	"Remove", NULL, &t7326_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7326_m38922_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38922_GM};
static MethodInfo* t7326_MIs[] =
{
	&m38916_MI,
	&m38917_MI,
	&m38918_MI,
	&m38919_MI,
	&m38920_MI,
	&m38921_MI,
	&m38922_MI,
	NULL
};
extern TypeInfo t7328_TI;
static TypeInfo* t7326_ITIs[] = 
{
	&t739_TI,
	&t7328_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7326_0_0_0;
extern Il2CppType t7326_1_0_0;
struct t7326;
extern Il2CppGenericClass t7326_GC;
TypeInfo t7326_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7326_MIs, t7326_PIs, NULL, NULL, NULL, NULL, NULL, &t7326_TI, t7326_ITIs, NULL, &EmptyCustomAttributesCache, &t7326_TI, &t7326_0_0_0, &t7326_1_0_0, NULL, &t7326_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.GCHandleType>
extern Il2CppType t5710_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38923_GM;
MethodInfo m38923_MI = 
{
	"GetEnumerator", NULL, &t7328_TI, &t5710_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38923_GM};
static MethodInfo* t7328_MIs[] =
{
	&m38923_MI,
	NULL
};
static TypeInfo* t7328_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7328_0_0_0;
extern Il2CppType t7328_1_0_0;
struct t7328;
extern Il2CppGenericClass t7328_GC;
TypeInfo t7328_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7328_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7328_TI, t7328_ITIs, NULL, &EmptyCustomAttributesCache, &t7328_TI, &t7328_0_0_0, &t7328_1_0_0, NULL, &t7328_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7327_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.GCHandleType>
extern MethodInfo m38924_MI;
extern MethodInfo m38925_MI;
static PropertyInfo t7327____Item_PropertyInfo = 
{
	&t7327_TI, "Item", &m38924_MI, &m38925_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7327_PIs[] =
{
	&t7327____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1703_0_0_0;
static ParameterInfo t7327_m38926_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1703_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38926_GM;
MethodInfo m38926_MI = 
{
	"IndexOf", NULL, &t7327_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t7327_m38926_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38926_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1703_0_0_0;
static ParameterInfo t7327_m38927_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1703_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38927_GM;
MethodInfo m38927_MI = 
{
	"Insert", NULL, &t7327_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7327_m38927_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38927_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7327_m38928_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38928_GM;
MethodInfo m38928_MI = 
{
	"RemoveAt", NULL, &t7327_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7327_m38928_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38928_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7327_m38924_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1703_0_0_0;
extern void* RuntimeInvoker_t1703_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38924_GM;
MethodInfo m38924_MI = 
{
	"get_Item", NULL, &t7327_TI, &t1703_0_0_0, RuntimeInvoker_t1703_t110, t7327_m38924_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38924_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1703_0_0_0;
static ParameterInfo t7327_m38925_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1703_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38925_GM;
MethodInfo m38925_MI = 
{
	"set_Item", NULL, &t7327_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7327_m38925_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38925_GM};
static MethodInfo* t7327_MIs[] =
{
	&m38926_MI,
	&m38927_MI,
	&m38928_MI,
	&m38924_MI,
	&m38925_MI,
	NULL
};
static TypeInfo* t7327_ITIs[] = 
{
	&t739_TI,
	&t7326_TI,
	&t7328_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7327_0_0_0;
extern Il2CppType t7327_1_0_0;
struct t7327;
extern Il2CppGenericClass t7327_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7327_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7327_MIs, t7327_PIs, NULL, NULL, NULL, NULL, NULL, &t7327_TI, t7327_ITIs, NULL, &t2240__CustomAttributeCache, &t7327_TI, &t7327_0_0_0, &t7327_1_0_0, NULL, &t7327_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5712_TI;

#include "t1704.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
extern MethodInfo m38929_MI;
static PropertyInfo t5712____Current_PropertyInfo = 
{
	&t5712_TI, "Current", &m38929_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5712_PIs[] =
{
	&t5712____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1704_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38929_GM;
MethodInfo m38929_MI = 
{
	"get_Current", NULL, &t5712_TI, &t1704_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38929_GM};
static MethodInfo* t5712_MIs[] =
{
	&m38929_MI,
	NULL
};
static TypeInfo* t5712_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5712_0_0_0;
extern Il2CppType t5712_1_0_0;
struct t5712;
extern Il2CppGenericClass t5712_GC;
TypeInfo t5712_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5712_MIs, t5712_PIs, NULL, NULL, NULL, NULL, NULL, &t5712_TI, t5712_ITIs, NULL, &EmptyCustomAttributesCache, &t5712_TI, &t5712_0_0_0, &t5712_1_0_0, NULL, &t5712_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4057.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4057_TI;
#include "t4057MD.h"

extern TypeInfo t1704_TI;
extern MethodInfo m23009_MI;
extern MethodInfo m30379_MI;
struct t107;
#define m30379(__this, p0, method) (t1704 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t4057_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4057_TI, offsetof(t4057, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4057_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4057_TI, offsetof(t4057, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4057_FIs[] =
{
	&t4057_f0_FieldInfo,
	&t4057_f1_FieldInfo,
	NULL
};
extern MethodInfo m23006_MI;
static PropertyInfo t4057____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4057_TI, "System.Collections.IEnumerator.Current", &m23006_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4057____Current_PropertyInfo = 
{
	&t4057_TI, "Current", &m23009_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4057_PIs[] =
{
	&t4057____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4057____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4057_m23005_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23005_GM;
MethodInfo m23005_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t4057_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4057_m23005_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23005_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23006_GM;
MethodInfo m23006_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t4057_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23006_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23007_GM;
MethodInfo m23007_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t4057_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23007_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23008_GM;
MethodInfo m23008_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t4057_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23008_GM};
extern Il2CppType t1704_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23009_GM;
MethodInfo m23009_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t4057_TI, &t1704_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23009_GM};
static MethodInfo* t4057_MIs[] =
{
	&m23005_MI,
	&m23006_MI,
	&m23007_MI,
	&m23008_MI,
	&m23009_MI,
	NULL
};
extern MethodInfo m23008_MI;
extern MethodInfo m23007_MI;
static MethodInfo* t4057_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m23006_MI,
	&m23008_MI,
	&m23007_MI,
	&m23009_MI,
};
static TypeInfo* t4057_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5712_TI,
};
static Il2CppInterfaceOffsetPair t4057_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5712_TI, 7},
};
extern TypeInfo t1704_TI;
static Il2CppRGCTXData t4057_RGCTXData[3] = 
{
	&m23009_MI/* Method Usage */,
	&t1704_TI/* Class Usage */,
	&m30379_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4057_0_0_0;
extern Il2CppType t4057_1_0_0;
extern Il2CppGenericClass t4057_GC;
TypeInfo t4057_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4057_MIs, t4057_PIs, t4057_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4057_TI, t4057_ITIs, t4057_VT, &EmptyCustomAttributesCache, &t4057_TI, &t4057_0_0_0, &t4057_1_0_0, t4057_IOs, &t4057_GC, NULL, NULL, NULL, t4057_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4057)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7329_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
extern MethodInfo m38930_MI;
static PropertyInfo t7329____Count_PropertyInfo = 
{
	&t7329_TI, "Count", &m38930_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m38931_MI;
static PropertyInfo t7329____IsReadOnly_PropertyInfo = 
{
	&t7329_TI, "IsReadOnly", &m38931_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7329_PIs[] =
{
	&t7329____Count_PropertyInfo,
	&t7329____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38930_GM;
MethodInfo m38930_MI = 
{
	"get_Count", NULL, &t7329_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38930_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38931_GM;
MethodInfo m38931_MI = 
{
	"get_IsReadOnly", NULL, &t7329_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38931_GM};
extern Il2CppType t1704_0_0_0;
extern Il2CppType t1704_0_0_0;
static ParameterInfo t7329_m38932_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1704_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38932_GM;
MethodInfo m38932_MI = 
{
	"Add", NULL, &t7329_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t7329_m38932_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38932_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38933_GM;
MethodInfo m38933_MI = 
{
	"Clear", NULL, &t7329_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38933_GM};
extern Il2CppType t1704_0_0_0;
static ParameterInfo t7329_m38934_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1704_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38934_GM;
MethodInfo m38934_MI = 
{
	"Contains", NULL, &t7329_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7329_m38934_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38934_GM};
extern Il2CppType t4321_0_0_0;
extern Il2CppType t4321_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7329_m38935_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4321_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38935_GM;
MethodInfo m38935_MI = 
{
	"CopyTo", NULL, &t7329_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7329_m38935_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38935_GM};
extern Il2CppType t1704_0_0_0;
static ParameterInfo t7329_m38936_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1704_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38936_GM;
MethodInfo m38936_MI = 
{
	"Remove", NULL, &t7329_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7329_m38936_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38936_GM};
static MethodInfo* t7329_MIs[] =
{
	&m38930_MI,
	&m38931_MI,
	&m38932_MI,
	&m38933_MI,
	&m38934_MI,
	&m38935_MI,
	&m38936_MI,
	NULL
};
extern TypeInfo t7331_TI;
static TypeInfo* t7329_ITIs[] = 
{
	&t739_TI,
	&t7331_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7329_0_0_0;
extern Il2CppType t7329_1_0_0;
struct t7329;
extern Il2CppGenericClass t7329_GC;
TypeInfo t7329_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7329_MIs, t7329_PIs, NULL, NULL, NULL, NULL, NULL, &t7329_TI, t7329_ITIs, NULL, &EmptyCustomAttributesCache, &t7329_TI, &t7329_0_0_0, &t7329_1_0_0, NULL, &t7329_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
extern Il2CppType t5712_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38937_GM;
MethodInfo m38937_MI = 
{
	"GetEnumerator", NULL, &t7331_TI, &t5712_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38937_GM};
static MethodInfo* t7331_MIs[] =
{
	&m38937_MI,
	NULL
};
static TypeInfo* t7331_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7331_0_0_0;
extern Il2CppType t7331_1_0_0;
struct t7331;
extern Il2CppGenericClass t7331_GC;
TypeInfo t7331_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7331_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7331_TI, t7331_ITIs, NULL, &EmptyCustomAttributesCache, &t7331_TI, &t7331_0_0_0, &t7331_1_0_0, NULL, &t7331_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7330_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
extern MethodInfo m38938_MI;
extern MethodInfo m38939_MI;
static PropertyInfo t7330____Item_PropertyInfo = 
{
	&t7330_TI, "Item", &m38938_MI, &m38939_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7330_PIs[] =
{
	&t7330____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1704_0_0_0;
static ParameterInfo t7330_m38940_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1704_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38940_GM;
MethodInfo m38940_MI = 
{
	"IndexOf", NULL, &t7330_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7330_m38940_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38940_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1704_0_0_0;
static ParameterInfo t7330_m38941_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1704_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38941_GM;
MethodInfo m38941_MI = 
{
	"Insert", NULL, &t7330_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7330_m38941_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38941_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7330_m38942_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38942_GM;
MethodInfo m38942_MI = 
{
	"RemoveAt", NULL, &t7330_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7330_m38942_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38942_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7330_m38938_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1704_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38938_GM;
MethodInfo m38938_MI = 
{
	"get_Item", NULL, &t7330_TI, &t1704_0_0_0, RuntimeInvoker_t5_t110, t7330_m38938_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38938_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1704_0_0_0;
static ParameterInfo t7330_m38939_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1704_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38939_GM;
MethodInfo m38939_MI = 
{
	"set_Item", NULL, &t7330_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7330_m38939_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38939_GM};
static MethodInfo* t7330_MIs[] =
{
	&m38940_MI,
	&m38941_MI,
	&m38942_MI,
	&m38938_MI,
	&m38939_MI,
	NULL
};
static TypeInfo* t7330_ITIs[] = 
{
	&t739_TI,
	&t7329_TI,
	&t7331_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7330_0_0_0;
extern Il2CppType t7330_1_0_0;
struct t7330;
extern Il2CppGenericClass t7330_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7330_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7330_MIs, t7330_PIs, NULL, NULL, NULL, NULL, NULL, &t7330_TI, t7330_ITIs, NULL, &t2240__CustomAttributeCache, &t7330_TI, &t7330_0_0_0, &t7330_1_0_0, NULL, &t7330_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5714_TI;

#include "t1707.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>
extern MethodInfo m38943_MI;
static PropertyInfo t5714____Current_PropertyInfo = 
{
	&t5714_TI, "Current", &m38943_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5714_PIs[] =
{
	&t5714____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1707_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38943_GM;
MethodInfo m38943_MI = 
{
	"get_Current", NULL, &t5714_TI, &t1707_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38943_GM};
static MethodInfo* t5714_MIs[] =
{
	&m38943_MI,
	NULL
};
static TypeInfo* t5714_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5714_0_0_0;
extern Il2CppType t5714_1_0_0;
struct t5714;
extern Il2CppGenericClass t5714_GC;
TypeInfo t5714_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5714_MIs, t5714_PIs, NULL, NULL, NULL, NULL, NULL, &t5714_TI, t5714_ITIs, NULL, &EmptyCustomAttributesCache, &t5714_TI, &t5714_0_0_0, &t5714_1_0_0, NULL, &t5714_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4058.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4058_TI;
#include "t4058MD.h"

extern TypeInfo t1707_TI;
extern MethodInfo m23014_MI;
extern MethodInfo m30390_MI;
struct t107;
#define m30390(__this, p0, method) (t1707 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t4058_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4058_TI, offsetof(t4058, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4058_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4058_TI, offsetof(t4058, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4058_FIs[] =
{
	&t4058_f0_FieldInfo,
	&t4058_f1_FieldInfo,
	NULL
};
extern MethodInfo m23011_MI;
static PropertyInfo t4058____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4058_TI, "System.Collections.IEnumerator.Current", &m23011_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4058____Current_PropertyInfo = 
{
	&t4058_TI, "Current", &m23014_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4058_PIs[] =
{
	&t4058____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4058____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4058_m23010_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23010_GM;
MethodInfo m23010_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t4058_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4058_m23010_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23010_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23011_GM;
MethodInfo m23011_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t4058_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23011_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23012_GM;
MethodInfo m23012_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t4058_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23012_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23013_GM;
MethodInfo m23013_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t4058_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23013_GM};
extern Il2CppType t1707_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23014_GM;
MethodInfo m23014_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t4058_TI, &t1707_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23014_GM};
static MethodInfo* t4058_MIs[] =
{
	&m23010_MI,
	&m23011_MI,
	&m23012_MI,
	&m23013_MI,
	&m23014_MI,
	NULL
};
extern MethodInfo m23013_MI;
extern MethodInfo m23012_MI;
static MethodInfo* t4058_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m23011_MI,
	&m23013_MI,
	&m23012_MI,
	&m23014_MI,
};
static TypeInfo* t4058_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5714_TI,
};
static Il2CppInterfaceOffsetPair t4058_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5714_TI, 7},
};
extern TypeInfo t1707_TI;
static Il2CppRGCTXData t4058_RGCTXData[3] = 
{
	&m23014_MI/* Method Usage */,
	&t1707_TI/* Class Usage */,
	&m30390_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4058_0_0_0;
extern Il2CppType t4058_1_0_0;
extern Il2CppGenericClass t4058_GC;
TypeInfo t4058_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4058_MIs, t4058_PIs, t4058_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4058_TI, t4058_ITIs, t4058_VT, &EmptyCustomAttributesCache, &t4058_TI, &t4058_0_0_0, &t4058_1_0_0, t4058_IOs, &t4058_GC, NULL, NULL, NULL, t4058_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4058)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7332_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>
extern MethodInfo m38944_MI;
static PropertyInfo t7332____Count_PropertyInfo = 
{
	&t7332_TI, "Count", &m38944_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m38945_MI;
static PropertyInfo t7332____IsReadOnly_PropertyInfo = 
{
	&t7332_TI, "IsReadOnly", &m38945_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7332_PIs[] =
{
	&t7332____Count_PropertyInfo,
	&t7332____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38944_GM;
MethodInfo m38944_MI = 
{
	"get_Count", NULL, &t7332_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38944_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38945_GM;
MethodInfo m38945_MI = 
{
	"get_IsReadOnly", NULL, &t7332_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38945_GM};
extern Il2CppType t1707_0_0_0;
extern Il2CppType t1707_0_0_0;
static ParameterInfo t7332_m38946_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1707_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38946_GM;
MethodInfo m38946_MI = 
{
	"Add", NULL, &t7332_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t7332_m38946_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38946_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38947_GM;
MethodInfo m38947_MI = 
{
	"Clear", NULL, &t7332_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38947_GM};
extern Il2CppType t1707_0_0_0;
static ParameterInfo t7332_m38948_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1707_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38948_GM;
MethodInfo m38948_MI = 
{
	"Contains", NULL, &t7332_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7332_m38948_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38948_GM};
extern Il2CppType t4322_0_0_0;
extern Il2CppType t4322_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7332_m38949_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4322_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38949_GM;
MethodInfo m38949_MI = 
{
	"CopyTo", NULL, &t7332_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7332_m38949_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38949_GM};
extern Il2CppType t1707_0_0_0;
static ParameterInfo t7332_m38950_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1707_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38950_GM;
MethodInfo m38950_MI = 
{
	"Remove", NULL, &t7332_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7332_m38950_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38950_GM};
static MethodInfo* t7332_MIs[] =
{
	&m38944_MI,
	&m38945_MI,
	&m38946_MI,
	&m38947_MI,
	&m38948_MI,
	&m38949_MI,
	&m38950_MI,
	NULL
};
extern TypeInfo t7334_TI;
static TypeInfo* t7332_ITIs[] = 
{
	&t739_TI,
	&t7334_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7332_0_0_0;
extern Il2CppType t7332_1_0_0;
struct t7332;
extern Il2CppGenericClass t7332_GC;
TypeInfo t7332_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7332_MIs, t7332_PIs, NULL, NULL, NULL, NULL, NULL, &t7332_TI, t7332_ITIs, NULL, &EmptyCustomAttributesCache, &t7332_TI, &t7332_0_0_0, &t7332_1_0_0, NULL, &t7332_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.PreserveSigAttribute>
extern Il2CppType t5714_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38951_GM;
MethodInfo m38951_MI = 
{
	"GetEnumerator", NULL, &t7334_TI, &t5714_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38951_GM};
static MethodInfo* t7334_MIs[] =
{
	&m38951_MI,
	NULL
};
static TypeInfo* t7334_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7334_0_0_0;
extern Il2CppType t7334_1_0_0;
struct t7334;
extern Il2CppGenericClass t7334_GC;
TypeInfo t7334_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7334_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7334_TI, t7334_ITIs, NULL, &EmptyCustomAttributesCache, &t7334_TI, &t7334_0_0_0, &t7334_1_0_0, NULL, &t7334_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7333_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.PreserveSigAttribute>
extern MethodInfo m38952_MI;
extern MethodInfo m38953_MI;
static PropertyInfo t7333____Item_PropertyInfo = 
{
	&t7333_TI, "Item", &m38952_MI, &m38953_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7333_PIs[] =
{
	&t7333____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1707_0_0_0;
static ParameterInfo t7333_m38954_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1707_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38954_GM;
MethodInfo m38954_MI = 
{
	"IndexOf", NULL, &t7333_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7333_m38954_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38954_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1707_0_0_0;
static ParameterInfo t7333_m38955_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1707_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38955_GM;
MethodInfo m38955_MI = 
{
	"Insert", NULL, &t7333_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7333_m38955_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38955_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7333_m38956_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38956_GM;
MethodInfo m38956_MI = 
{
	"RemoveAt", NULL, &t7333_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7333_m38956_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38956_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7333_m38952_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1707_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38952_GM;
MethodInfo m38952_MI = 
{
	"get_Item", NULL, &t7333_TI, &t1707_0_0_0, RuntimeInvoker_t5_t110, t7333_m38952_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38952_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1707_0_0_0;
static ParameterInfo t7333_m38953_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1707_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38953_GM;
MethodInfo m38953_MI = 
{
	"set_Item", NULL, &t7333_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7333_m38953_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38953_GM};
static MethodInfo* t7333_MIs[] =
{
	&m38954_MI,
	&m38955_MI,
	&m38956_MI,
	&m38952_MI,
	&m38953_MI,
	NULL
};
static TypeInfo* t7333_ITIs[] = 
{
	&t739_TI,
	&t7332_TI,
	&t7334_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7333_0_0_0;
extern Il2CppType t7333_1_0_0;
struct t7333;
extern Il2CppGenericClass t7333_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7333_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7333_MIs, t7333_PIs, NULL, NULL, NULL, NULL, NULL, &t7333_TI, t7333_ITIs, NULL, &t2240__CustomAttributeCache, &t7333_TI, &t7333_0_0_0, &t7333_1_0_0, NULL, &t7333_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5716_TI;

#include "t1708.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
extern MethodInfo m38957_MI;
static PropertyInfo t5716____Current_PropertyInfo = 
{
	&t5716_TI, "Current", &m38957_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5716_PIs[] =
{
	&t5716____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1708_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38957_GM;
MethodInfo m38957_MI = 
{
	"get_Current", NULL, &t5716_TI, &t1708_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38957_GM};
static MethodInfo* t5716_MIs[] =
{
	&m38957_MI,
	NULL
};
static TypeInfo* t5716_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5716_0_0_0;
extern Il2CppType t5716_1_0_0;
struct t5716;
extern Il2CppGenericClass t5716_GC;
TypeInfo t5716_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5716_MIs, t5716_PIs, NULL, NULL, NULL, NULL, NULL, &t5716_TI, t5716_ITIs, NULL, &EmptyCustomAttributesCache, &t5716_TI, &t5716_0_0_0, &t5716_1_0_0, NULL, &t5716_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4059.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4059_TI;
#include "t4059MD.h"

extern TypeInfo t1708_TI;
extern MethodInfo m23019_MI;
extern MethodInfo m30401_MI;
struct t107;
#define m30401(__this, p0, method) (t1708 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t4059_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4059_TI, offsetof(t4059, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4059_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4059_TI, offsetof(t4059, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4059_FIs[] =
{
	&t4059_f0_FieldInfo,
	&t4059_f1_FieldInfo,
	NULL
};
extern MethodInfo m23016_MI;
static PropertyInfo t4059____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4059_TI, "System.Collections.IEnumerator.Current", &m23016_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4059____Current_PropertyInfo = 
{
	&t4059_TI, "Current", &m23019_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4059_PIs[] =
{
	&t4059____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4059____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4059_m23015_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23015_GM;
MethodInfo m23015_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t4059_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4059_m23015_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23015_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23016_GM;
MethodInfo m23016_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t4059_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23016_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23017_GM;
MethodInfo m23017_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t4059_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23017_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23018_GM;
MethodInfo m23018_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t4059_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23018_GM};
extern Il2CppType t1708_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23019_GM;
MethodInfo m23019_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t4059_TI, &t1708_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23019_GM};
static MethodInfo* t4059_MIs[] =
{
	&m23015_MI,
	&m23016_MI,
	&m23017_MI,
	&m23018_MI,
	&m23019_MI,
	NULL
};
extern MethodInfo m23018_MI;
extern MethodInfo m23017_MI;
static MethodInfo* t4059_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m23016_MI,
	&m23018_MI,
	&m23017_MI,
	&m23019_MI,
};
static TypeInfo* t4059_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5716_TI,
};
static Il2CppInterfaceOffsetPair t4059_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5716_TI, 7},
};
extern TypeInfo t1708_TI;
static Il2CppRGCTXData t4059_RGCTXData[3] = 
{
	&m23019_MI/* Method Usage */,
	&t1708_TI/* Class Usage */,
	&m30401_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4059_0_0_0;
extern Il2CppType t4059_1_0_0;
extern Il2CppGenericClass t4059_GC;
TypeInfo t4059_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4059_MIs, t4059_PIs, t4059_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4059_TI, t4059_ITIs, t4059_VT, &EmptyCustomAttributesCache, &t4059_TI, &t4059_0_0_0, &t4059_1_0_0, t4059_IOs, &t4059_GC, NULL, NULL, NULL, t4059_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4059)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7335_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
extern MethodInfo m38958_MI;
static PropertyInfo t7335____Count_PropertyInfo = 
{
	&t7335_TI, "Count", &m38958_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m38959_MI;
static PropertyInfo t7335____IsReadOnly_PropertyInfo = 
{
	&t7335_TI, "IsReadOnly", &m38959_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7335_PIs[] =
{
	&t7335____Count_PropertyInfo,
	&t7335____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38958_GM;
MethodInfo m38958_MI = 
{
	"get_Count", NULL, &t7335_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38958_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38959_GM;
MethodInfo m38959_MI = 
{
	"get_IsReadOnly", NULL, &t7335_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38959_GM};
extern Il2CppType t1708_0_0_0;
extern Il2CppType t1708_0_0_0;
static ParameterInfo t7335_m38960_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1708_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38960_GM;
MethodInfo m38960_MI = 
{
	"Add", NULL, &t7335_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t7335_m38960_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38960_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38961_GM;
MethodInfo m38961_MI = 
{
	"Clear", NULL, &t7335_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38961_GM};
extern Il2CppType t1708_0_0_0;
static ParameterInfo t7335_m38962_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1708_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38962_GM;
MethodInfo m38962_MI = 
{
	"Contains", NULL, &t7335_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7335_m38962_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38962_GM};
extern Il2CppType t4323_0_0_0;
extern Il2CppType t4323_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7335_m38963_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4323_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38963_GM;
MethodInfo m38963_MI = 
{
	"CopyTo", NULL, &t7335_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7335_m38963_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38963_GM};
extern Il2CppType t1708_0_0_0;
static ParameterInfo t7335_m38964_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1708_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38964_GM;
MethodInfo m38964_MI = 
{
	"Remove", NULL, &t7335_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7335_m38964_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38964_GM};
static MethodInfo* t7335_MIs[] =
{
	&m38958_MI,
	&m38959_MI,
	&m38960_MI,
	&m38961_MI,
	&m38962_MI,
	&m38963_MI,
	&m38964_MI,
	NULL
};
extern TypeInfo t7337_TI;
static TypeInfo* t7335_ITIs[] = 
{
	&t739_TI,
	&t7337_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7335_0_0_0;
extern Il2CppType t7335_1_0_0;
struct t7335;
extern Il2CppGenericClass t7335_GC;
TypeInfo t7335_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7335_MIs, t7335_PIs, NULL, NULL, NULL, NULL, NULL, &t7335_TI, t7335_ITIs, NULL, &EmptyCustomAttributesCache, &t7335_TI, &t7335_0_0_0, &t7335_1_0_0, NULL, &t7335_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
extern Il2CppType t5716_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38965_GM;
MethodInfo m38965_MI = 
{
	"GetEnumerator", NULL, &t7337_TI, &t5716_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38965_GM};
static MethodInfo* t7337_MIs[] =
{
	&m38965_MI,
	NULL
};
static TypeInfo* t7337_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7337_0_0_0;
extern Il2CppType t7337_1_0_0;
struct t7337;
extern Il2CppGenericClass t7337_GC;
TypeInfo t7337_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7337_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7337_TI, t7337_ITIs, NULL, &EmptyCustomAttributesCache, &t7337_TI, &t7337_0_0_0, &t7337_1_0_0, NULL, &t7337_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7336_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
extern MethodInfo m38966_MI;
extern MethodInfo m38967_MI;
static PropertyInfo t7336____Item_PropertyInfo = 
{
	&t7336_TI, "Item", &m38966_MI, &m38967_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7336_PIs[] =
{
	&t7336____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1708_0_0_0;
static ParameterInfo t7336_m38968_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1708_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38968_GM;
MethodInfo m38968_MI = 
{
	"IndexOf", NULL, &t7336_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7336_m38968_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38968_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1708_0_0_0;
static ParameterInfo t7336_m38969_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1708_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38969_GM;
MethodInfo m38969_MI = 
{
	"Insert", NULL, &t7336_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7336_m38969_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38969_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7336_m38970_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38970_GM;
MethodInfo m38970_MI = 
{
	"RemoveAt", NULL, &t7336_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7336_m38970_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38970_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7336_m38966_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1708_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38966_GM;
MethodInfo m38966_MI = 
{
	"get_Item", NULL, &t7336_TI, &t1708_0_0_0, RuntimeInvoker_t5_t110, t7336_m38966_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38966_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1708_0_0_0;
static ParameterInfo t7336_m38967_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1708_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38967_GM;
MethodInfo m38967_MI = 
{
	"set_Item", NULL, &t7336_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7336_m38967_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38967_GM};
static MethodInfo* t7336_MIs[] =
{
	&m38968_MI,
	&m38969_MI,
	&m38970_MI,
	&m38966_MI,
	&m38967_MI,
	NULL
};
static TypeInfo* t7336_ITIs[] = 
{
	&t739_TI,
	&t7335_TI,
	&t7337_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7336_0_0_0;
extern Il2CppType t7336_1_0_0;
struct t7336;
extern Il2CppGenericClass t7336_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7336_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7336_MIs, t7336_PIs, NULL, NULL, NULL, NULL, NULL, &t7336_TI, t7336_ITIs, NULL, &t2240__CustomAttributeCache, &t7336_TI, &t7336_0_0_0, &t7336_1_0_0, NULL, &t7336_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5718_TI;

#include "t1709.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
extern MethodInfo m38971_MI;
static PropertyInfo t5718____Current_PropertyInfo = 
{
	&t5718_TI, "Current", &m38971_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5718_PIs[] =
{
	&t5718____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1709_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38971_GM;
MethodInfo m38971_MI = 
{
	"get_Current", NULL, &t5718_TI, &t1709_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38971_GM};
static MethodInfo* t5718_MIs[] =
{
	&m38971_MI,
	NULL
};
static TypeInfo* t5718_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5718_0_0_0;
extern Il2CppType t5718_1_0_0;
struct t5718;
extern Il2CppGenericClass t5718_GC;
TypeInfo t5718_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5718_MIs, t5718_PIs, NULL, NULL, NULL, NULL, NULL, &t5718_TI, t5718_ITIs, NULL, &EmptyCustomAttributesCache, &t5718_TI, &t5718_0_0_0, &t5718_1_0_0, NULL, &t5718_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4060.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4060_TI;
#include "t4060MD.h"

extern TypeInfo t1709_TI;
extern MethodInfo m23024_MI;
extern MethodInfo m30412_MI;
struct t107;
#define m30412(__this, p0, method) (t1709 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t4060_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4060_TI, offsetof(t4060, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4060_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4060_TI, offsetof(t4060, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4060_FIs[] =
{
	&t4060_f0_FieldInfo,
	&t4060_f1_FieldInfo,
	NULL
};
extern MethodInfo m23021_MI;
static PropertyInfo t4060____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4060_TI, "System.Collections.IEnumerator.Current", &m23021_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4060____Current_PropertyInfo = 
{
	&t4060_TI, "Current", &m23024_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4060_PIs[] =
{
	&t4060____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4060____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4060_m23020_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23020_GM;
MethodInfo m23020_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t4060_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4060_m23020_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23020_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23021_GM;
MethodInfo m23021_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t4060_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23021_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23022_GM;
MethodInfo m23022_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t4060_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23022_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23023_GM;
MethodInfo m23023_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t4060_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23023_GM};
extern Il2CppType t1709_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23024_GM;
MethodInfo m23024_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t4060_TI, &t1709_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23024_GM};
static MethodInfo* t4060_MIs[] =
{
	&m23020_MI,
	&m23021_MI,
	&m23022_MI,
	&m23023_MI,
	&m23024_MI,
	NULL
};
extern MethodInfo m23023_MI;
extern MethodInfo m23022_MI;
static MethodInfo* t4060_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m23021_MI,
	&m23023_MI,
	&m23022_MI,
	&m23024_MI,
};
static TypeInfo* t4060_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5718_TI,
};
static Il2CppInterfaceOffsetPair t4060_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5718_TI, 7},
};
extern TypeInfo t1709_TI;
static Il2CppRGCTXData t4060_RGCTXData[3] = 
{
	&m23024_MI/* Method Usage */,
	&t1709_TI/* Class Usage */,
	&m30412_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4060_0_0_0;
extern Il2CppType t4060_1_0_0;
extern Il2CppGenericClass t4060_GC;
TypeInfo t4060_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4060_MIs, t4060_PIs, t4060_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4060_TI, t4060_ITIs, t4060_VT, &EmptyCustomAttributesCache, &t4060_TI, &t4060_0_0_0, &t4060_1_0_0, t4060_IOs, &t4060_GC, NULL, NULL, NULL, t4060_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4060)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7338_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
extern MethodInfo m38972_MI;
static PropertyInfo t7338____Count_PropertyInfo = 
{
	&t7338_TI, "Count", &m38972_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m38973_MI;
static PropertyInfo t7338____IsReadOnly_PropertyInfo = 
{
	&t7338_TI, "IsReadOnly", &m38973_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7338_PIs[] =
{
	&t7338____Count_PropertyInfo,
	&t7338____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38972_GM;
MethodInfo m38972_MI = 
{
	"get_Count", NULL, &t7338_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38972_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38973_GM;
MethodInfo m38973_MI = 
{
	"get_IsReadOnly", NULL, &t7338_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38973_GM};
extern Il2CppType t1709_0_0_0;
extern Il2CppType t1709_0_0_0;
static ParameterInfo t7338_m38974_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1709_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38974_GM;
MethodInfo m38974_MI = 
{
	"Add", NULL, &t7338_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t7338_m38974_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38974_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38975_GM;
MethodInfo m38975_MI = 
{
	"Clear", NULL, &t7338_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38975_GM};
extern Il2CppType t1709_0_0_0;
static ParameterInfo t7338_m38976_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1709_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38976_GM;
MethodInfo m38976_MI = 
{
	"Contains", NULL, &t7338_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7338_m38976_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38976_GM};
extern Il2CppType t4324_0_0_0;
extern Il2CppType t4324_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7338_m38977_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4324_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38977_GM;
MethodInfo m38977_MI = 
{
	"CopyTo", NULL, &t7338_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7338_m38977_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38977_GM};
extern Il2CppType t1709_0_0_0;
static ParameterInfo t7338_m38978_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1709_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38978_GM;
MethodInfo m38978_MI = 
{
	"Remove", NULL, &t7338_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7338_m38978_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38978_GM};
static MethodInfo* t7338_MIs[] =
{
	&m38972_MI,
	&m38973_MI,
	&m38974_MI,
	&m38975_MI,
	&m38976_MI,
	&m38977_MI,
	&m38978_MI,
	NULL
};
extern TypeInfo t7340_TI;
static TypeInfo* t7338_ITIs[] = 
{
	&t739_TI,
	&t7340_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7338_0_0_0;
extern Il2CppType t7338_1_0_0;
struct t7338;
extern Il2CppGenericClass t7338_GC;
TypeInfo t7338_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7338_MIs, t7338_PIs, NULL, NULL, NULL, NULL, NULL, &t7338_TI, t7338_ITIs, NULL, &EmptyCustomAttributesCache, &t7338_TI, &t7338_0_0_0, &t7338_1_0_0, NULL, &t7338_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
extern Il2CppType t5718_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38979_GM;
MethodInfo m38979_MI = 
{
	"GetEnumerator", NULL, &t7340_TI, &t5718_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38979_GM};
static MethodInfo* t7340_MIs[] =
{
	&m38979_MI,
	NULL
};
static TypeInfo* t7340_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7340_0_0_0;
extern Il2CppType t7340_1_0_0;
struct t7340;
extern Il2CppGenericClass t7340_GC;
TypeInfo t7340_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7340_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7340_TI, t7340_ITIs, NULL, &EmptyCustomAttributesCache, &t7340_TI, &t7340_0_0_0, &t7340_1_0_0, NULL, &t7340_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7339_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
extern MethodInfo m38980_MI;
extern MethodInfo m38981_MI;
static PropertyInfo t7339____Item_PropertyInfo = 
{
	&t7339_TI, "Item", &m38980_MI, &m38981_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7339_PIs[] =
{
	&t7339____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1709_0_0_0;
static ParameterInfo t7339_m38982_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1709_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38982_GM;
MethodInfo m38982_MI = 
{
	"IndexOf", NULL, &t7339_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7339_m38982_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38982_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1709_0_0_0;
static ParameterInfo t7339_m38983_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1709_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38983_GM;
MethodInfo m38983_MI = 
{
	"Insert", NULL, &t7339_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7339_m38983_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38983_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7339_m38984_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38984_GM;
MethodInfo m38984_MI = 
{
	"RemoveAt", NULL, &t7339_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7339_m38984_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38984_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7339_m38980_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1709_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38980_GM;
MethodInfo m38980_MI = 
{
	"get_Item", NULL, &t7339_TI, &t1709_0_0_0, RuntimeInvoker_t5_t110, t7339_m38980_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38980_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1709_0_0_0;
static ParameterInfo t7339_m38981_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1709_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38981_GM;
MethodInfo m38981_MI = 
{
	"set_Item", NULL, &t7339_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7339_m38981_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38981_GM};
static MethodInfo* t7339_MIs[] =
{
	&m38982_MI,
	&m38983_MI,
	&m38984_MI,
	&m38980_MI,
	&m38981_MI,
	NULL
};
static TypeInfo* t7339_ITIs[] = 
{
	&t739_TI,
	&t7338_TI,
	&t7340_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7339_0_0_0;
extern Il2CppType t7339_1_0_0;
struct t7339;
extern Il2CppGenericClass t7339_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7339_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7339_MIs, t7339_PIs, NULL, NULL, NULL, NULL, NULL, &t7339_TI, t7339_ITIs, NULL, &t2240__CustomAttributeCache, &t7339_TI, &t7339_0_0_0, &t7339_1_0_0, NULL, &t7339_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5720_TI;

#include "t1417.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.UnmanagedType>
extern MethodInfo m38985_MI;
static PropertyInfo t5720____Current_PropertyInfo = 
{
	&t5720_TI, "Current", &m38985_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5720_PIs[] =
{
	&t5720____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1417_0_0_0;
extern void* RuntimeInvoker_t1417 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38985_GM;
MethodInfo m38985_MI = 
{
	"get_Current", NULL, &t5720_TI, &t1417_0_0_0, RuntimeInvoker_t1417, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38985_GM};
static MethodInfo* t5720_MIs[] =
{
	&m38985_MI,
	NULL
};
static TypeInfo* t5720_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5720_0_0_0;
extern Il2CppType t5720_1_0_0;
struct t5720;
extern Il2CppGenericClass t5720_GC;
TypeInfo t5720_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5720_MIs, t5720_PIs, NULL, NULL, NULL, NULL, NULL, &t5720_TI, t5720_ITIs, NULL, &EmptyCustomAttributesCache, &t5720_TI, &t5720_0_0_0, &t5720_1_0_0, NULL, &t5720_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4061.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4061_TI;
#include "t4061MD.h"

extern TypeInfo t1417_TI;
extern MethodInfo m23029_MI;
extern MethodInfo m30423_MI;
struct t107;
 int32_t m30423 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m23025_MI;
 void m23025 (t4061 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23026_MI;
 t5 * m23026 (t4061 * __this, MethodInfo* method){
	{
		int32_t L_0 = m23029(__this, &m23029_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1417_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m23027_MI;
 void m23027 (t4061 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23028_MI;
 bool m23028 (t4061 * __this, MethodInfo* method){
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
 int32_t m23029 (t4061 * __this, MethodInfo* method){
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
		int32_t L_8 = m30423(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m30423_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>
extern Il2CppType t107_0_0_1;
FieldInfo t4061_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4061_TI, offsetof(t4061, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4061_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4061_TI, offsetof(t4061, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4061_FIs[] =
{
	&t4061_f0_FieldInfo,
	&t4061_f1_FieldInfo,
	NULL
};
static PropertyInfo t4061____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4061_TI, "System.Collections.IEnumerator.Current", &m23026_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4061____Current_PropertyInfo = 
{
	&t4061_TI, "Current", &m23029_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4061_PIs[] =
{
	&t4061____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4061____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4061_m23025_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23025_GM;
MethodInfo m23025_MI = 
{
	".ctor", (methodPointerType)&m23025, &t4061_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4061_m23025_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23025_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23026_GM;
MethodInfo m23026_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m23026, &t4061_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23026_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23027_GM;
MethodInfo m23027_MI = 
{
	"Dispose", (methodPointerType)&m23027, &t4061_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23027_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23028_GM;
MethodInfo m23028_MI = 
{
	"MoveNext", (methodPointerType)&m23028, &t4061_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23028_GM};
extern Il2CppType t1417_0_0_0;
extern void* RuntimeInvoker_t1417 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23029_GM;
MethodInfo m23029_MI = 
{
	"get_Current", (methodPointerType)&m23029, &t4061_TI, &t1417_0_0_0, RuntimeInvoker_t1417, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23029_GM};
static MethodInfo* t4061_MIs[] =
{
	&m23025_MI,
	&m23026_MI,
	&m23027_MI,
	&m23028_MI,
	&m23029_MI,
	NULL
};
static MethodInfo* t4061_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m23026_MI,
	&m23028_MI,
	&m23027_MI,
	&m23029_MI,
};
static TypeInfo* t4061_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5720_TI,
};
static Il2CppInterfaceOffsetPair t4061_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5720_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4061_0_0_0;
extern Il2CppType t4061_1_0_0;
extern Il2CppGenericClass t4061_GC;
TypeInfo t4061_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4061_MIs, t4061_PIs, t4061_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4061_TI, t4061_ITIs, t4061_VT, &EmptyCustomAttributesCache, &t4061_TI, &t4061_0_0_0, &t4061_1_0_0, t4061_IOs, &t4061_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4061)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7341_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>
extern MethodInfo m38986_MI;
static PropertyInfo t7341____Count_PropertyInfo = 
{
	&t7341_TI, "Count", &m38986_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m38987_MI;
static PropertyInfo t7341____IsReadOnly_PropertyInfo = 
{
	&t7341_TI, "IsReadOnly", &m38987_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7341_PIs[] =
{
	&t7341____Count_PropertyInfo,
	&t7341____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38986_GM;
MethodInfo m38986_MI = 
{
	"get_Count", NULL, &t7341_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38986_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38987_GM;
MethodInfo m38987_MI = 
{
	"get_IsReadOnly", NULL, &t7341_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38987_GM};
extern Il2CppType t1417_0_0_0;
extern Il2CppType t1417_0_0_0;
static ParameterInfo t7341_m38988_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1417_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38988_GM;
MethodInfo m38988_MI = 
{
	"Add", NULL, &t7341_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7341_m38988_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38988_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38989_GM;
MethodInfo m38989_MI = 
{
	"Clear", NULL, &t7341_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38989_GM};
extern Il2CppType t1417_0_0_0;
static ParameterInfo t7341_m38990_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1417_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38990_GM;
MethodInfo m38990_MI = 
{
	"Contains", NULL, &t7341_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7341_m38990_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38990_GM};
extern Il2CppType t4325_0_0_0;
extern Il2CppType t4325_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7341_m38991_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4325_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38991_GM;
MethodInfo m38991_MI = 
{
	"CopyTo", NULL, &t7341_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7341_m38991_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38991_GM};
extern Il2CppType t1417_0_0_0;
static ParameterInfo t7341_m38992_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1417_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38992_GM;
MethodInfo m38992_MI = 
{
	"Remove", NULL, &t7341_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7341_m38992_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38992_GM};
static MethodInfo* t7341_MIs[] =
{
	&m38986_MI,
	&m38987_MI,
	&m38988_MI,
	&m38989_MI,
	&m38990_MI,
	&m38991_MI,
	&m38992_MI,
	NULL
};
extern TypeInfo t7343_TI;
static TypeInfo* t7341_ITIs[] = 
{
	&t739_TI,
	&t7343_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7341_0_0_0;
extern Il2CppType t7341_1_0_0;
struct t7341;
extern Il2CppGenericClass t7341_GC;
TypeInfo t7341_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7341_MIs, t7341_PIs, NULL, NULL, NULL, NULL, NULL, &t7341_TI, t7341_ITIs, NULL, &EmptyCustomAttributesCache, &t7341_TI, &t7341_0_0_0, &t7341_1_0_0, NULL, &t7341_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.UnmanagedType>
extern Il2CppType t5720_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38993_GM;
MethodInfo m38993_MI = 
{
	"GetEnumerator", NULL, &t7343_TI, &t5720_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38993_GM};
static MethodInfo* t7343_MIs[] =
{
	&m38993_MI,
	NULL
};
static TypeInfo* t7343_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7343_0_0_0;
extern Il2CppType t7343_1_0_0;
struct t7343;
extern Il2CppGenericClass t7343_GC;
TypeInfo t7343_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7343_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7343_TI, t7343_ITIs, NULL, &EmptyCustomAttributesCache, &t7343_TI, &t7343_0_0_0, &t7343_1_0_0, NULL, &t7343_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7342_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedType>
extern MethodInfo m38994_MI;
extern MethodInfo m38995_MI;
static PropertyInfo t7342____Item_PropertyInfo = 
{
	&t7342_TI, "Item", &m38994_MI, &m38995_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7342_PIs[] =
{
	&t7342____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1417_0_0_0;
static ParameterInfo t7342_m38996_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1417_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38996_GM;
MethodInfo m38996_MI = 
{
	"IndexOf", NULL, &t7342_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t7342_m38996_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38996_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1417_0_0_0;
static ParameterInfo t7342_m38997_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1417_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38997_GM;
MethodInfo m38997_MI = 
{
	"Insert", NULL, &t7342_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7342_m38997_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38997_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7342_m38998_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38998_GM;
MethodInfo m38998_MI = 
{
	"RemoveAt", NULL, &t7342_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7342_m38998_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38998_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7342_m38994_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1417_0_0_0;
extern void* RuntimeInvoker_t1417_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38994_GM;
MethodInfo m38994_MI = 
{
	"get_Item", NULL, &t7342_TI, &t1417_0_0_0, RuntimeInvoker_t1417_t110, t7342_m38994_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m38994_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1417_0_0_0;
static ParameterInfo t7342_m38995_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1417_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38995_GM;
MethodInfo m38995_MI = 
{
	"set_Item", NULL, &t7342_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7342_m38995_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m38995_GM};
static MethodInfo* t7342_MIs[] =
{
	&m38996_MI,
	&m38997_MI,
	&m38998_MI,
	&m38994_MI,
	&m38995_MI,
	NULL
};
static TypeInfo* t7342_ITIs[] = 
{
	&t739_TI,
	&t7341_TI,
	&t7343_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7342_0_0_0;
extern Il2CppType t7342_1_0_0;
struct t7342;
extern Il2CppGenericClass t7342_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7342_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7342_MIs, t7342_PIs, NULL, NULL, NULL, NULL, NULL, &t7342_TI, t7342_ITIs, NULL, &t2240__CustomAttributeCache, &t7342_TI, &t7342_0_0_0, &t7342_1_0_0, NULL, &t7342_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5722_TI;

#include "t1717.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>
extern MethodInfo m38999_MI;
static PropertyInfo t5722____Current_PropertyInfo = 
{
	&t5722_TI, "Current", &m38999_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5722_PIs[] =
{
	&t5722____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1717_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m38999_GM;
MethodInfo m38999_MI = 
{
	"get_Current", NULL, &t5722_TI, &t1717_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m38999_GM};
static MethodInfo* t5722_MIs[] =
{
	&m38999_MI,
	NULL
};
static TypeInfo* t5722_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5722_0_0_0;
extern Il2CppType t5722_1_0_0;
struct t5722;
extern Il2CppGenericClass t5722_GC;
TypeInfo t5722_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5722_MIs, t5722_PIs, NULL, NULL, NULL, NULL, NULL, &t5722_TI, t5722_ITIs, NULL, &EmptyCustomAttributesCache, &t5722_TI, &t5722_0_0_0, &t5722_1_0_0, NULL, &t5722_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4062.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4062_TI;
#include "t4062MD.h"

extern TypeInfo t1717_TI;
extern MethodInfo m23034_MI;
extern MethodInfo m30434_MI;
struct t107;
#define m30434(__this, p0, method) (t1717 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t4062_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4062_TI, offsetof(t4062, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4062_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4062_TI, offsetof(t4062, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4062_FIs[] =
{
	&t4062_f0_FieldInfo,
	&t4062_f1_FieldInfo,
	NULL
};
extern MethodInfo m23031_MI;
static PropertyInfo t4062____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4062_TI, "System.Collections.IEnumerator.Current", &m23031_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4062____Current_PropertyInfo = 
{
	&t4062_TI, "Current", &m23034_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4062_PIs[] =
{
	&t4062____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4062____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4062_m23030_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23030_GM;
MethodInfo m23030_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t4062_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4062_m23030_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23030_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23031_GM;
MethodInfo m23031_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t4062_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23031_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23032_GM;
MethodInfo m23032_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t4062_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23032_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23033_GM;
MethodInfo m23033_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t4062_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23033_GM};
extern Il2CppType t1717_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23034_GM;
MethodInfo m23034_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t4062_TI, &t1717_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23034_GM};
static MethodInfo* t4062_MIs[] =
{
	&m23030_MI,
	&m23031_MI,
	&m23032_MI,
	&m23033_MI,
	&m23034_MI,
	NULL
};
extern MethodInfo m23033_MI;
extern MethodInfo m23032_MI;
static MethodInfo* t4062_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m23031_MI,
	&m23033_MI,
	&m23032_MI,
	&m23034_MI,
};
static TypeInfo* t4062_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5722_TI,
};
static Il2CppInterfaceOffsetPair t4062_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5722_TI, 7},
};
extern TypeInfo t1717_TI;
static Il2CppRGCTXData t4062_RGCTXData[3] = 
{
	&m23034_MI/* Method Usage */,
	&t1717_TI/* Class Usage */,
	&m30434_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4062_0_0_0;
extern Il2CppType t4062_1_0_0;
extern Il2CppGenericClass t4062_GC;
TypeInfo t4062_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4062_MIs, t4062_PIs, t4062_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4062_TI, t4062_ITIs, t4062_VT, &EmptyCustomAttributesCache, &t4062_TI, &t4062_0_0_0, &t4062_1_0_0, t4062_IOs, &t4062_GC, NULL, NULL, NULL, t4062_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4062)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7344_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>
extern MethodInfo m39000_MI;
static PropertyInfo t7344____Count_PropertyInfo = 
{
	&t7344_TI, "Count", &m39000_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39001_MI;
static PropertyInfo t7344____IsReadOnly_PropertyInfo = 
{
	&t7344_TI, "IsReadOnly", &m39001_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7344_PIs[] =
{
	&t7344____Count_PropertyInfo,
	&t7344____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39000_GM;
MethodInfo m39000_MI = 
{
	"get_Count", NULL, &t7344_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39000_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39001_GM;
MethodInfo m39001_MI = 
{
	"get_IsReadOnly", NULL, &t7344_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39001_GM};
extern Il2CppType t1717_0_0_0;
extern Il2CppType t1717_0_0_0;
static ParameterInfo t7344_m39002_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1717_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39002_GM;
MethodInfo m39002_MI = 
{
	"Add", NULL, &t7344_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t7344_m39002_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39002_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39003_GM;
MethodInfo m39003_MI = 
{
	"Clear", NULL, &t7344_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39003_GM};
extern Il2CppType t1717_0_0_0;
static ParameterInfo t7344_m39004_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1717_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39004_GM;
MethodInfo m39004_MI = 
{
	"Contains", NULL, &t7344_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7344_m39004_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39004_GM};
extern Il2CppType t4326_0_0_0;
extern Il2CppType t4326_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7344_m39005_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4326_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39005_GM;
MethodInfo m39005_MI = 
{
	"CopyTo", NULL, &t7344_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7344_m39005_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39005_GM};
extern Il2CppType t1717_0_0_0;
static ParameterInfo t7344_m39006_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1717_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39006_GM;
MethodInfo m39006_MI = 
{
	"Remove", NULL, &t7344_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7344_m39006_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39006_GM};
static MethodInfo* t7344_MIs[] =
{
	&m39000_MI,
	&m39001_MI,
	&m39002_MI,
	&m39003_MI,
	&m39004_MI,
	&m39005_MI,
	&m39006_MI,
	NULL
};
extern TypeInfo t7346_TI;
static TypeInfo* t7344_ITIs[] = 
{
	&t739_TI,
	&t7346_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7344_0_0_0;
extern Il2CppType t7344_1_0_0;
struct t7344;
extern Il2CppGenericClass t7344_GC;
TypeInfo t7344_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7344_MIs, t7344_PIs, NULL, NULL, NULL, NULL, NULL, &t7344_TI, t7344_ITIs, NULL, &EmptyCustomAttributesCache, &t7344_TI, &t7344_0_0_0, &t7344_1_0_0, NULL, &t7344_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Activation.UrlAttribute>
extern Il2CppType t5722_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39007_GM;
MethodInfo m39007_MI = 
{
	"GetEnumerator", NULL, &t7346_TI, &t5722_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39007_GM};
static MethodInfo* t7346_MIs[] =
{
	&m39007_MI,
	NULL
};
static TypeInfo* t7346_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7346_0_0_0;
extern Il2CppType t7346_1_0_0;
struct t7346;
extern Il2CppGenericClass t7346_GC;
TypeInfo t7346_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7346_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7346_TI, t7346_ITIs, NULL, &EmptyCustomAttributesCache, &t7346_TI, &t7346_0_0_0, &t7346_1_0_0, NULL, &t7346_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7345_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Activation.UrlAttribute>
extern MethodInfo m39008_MI;
extern MethodInfo m39009_MI;
static PropertyInfo t7345____Item_PropertyInfo = 
{
	&t7345_TI, "Item", &m39008_MI, &m39009_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7345_PIs[] =
{
	&t7345____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1717_0_0_0;
static ParameterInfo t7345_m39010_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1717_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39010_GM;
MethodInfo m39010_MI = 
{
	"IndexOf", NULL, &t7345_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7345_m39010_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39010_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1717_0_0_0;
static ParameterInfo t7345_m39011_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1717_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39011_GM;
MethodInfo m39011_MI = 
{
	"Insert", NULL, &t7345_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7345_m39011_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39011_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7345_m39012_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39012_GM;
MethodInfo m39012_MI = 
{
	"RemoveAt", NULL, &t7345_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7345_m39012_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39012_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7345_m39008_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1717_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39008_GM;
MethodInfo m39008_MI = 
{
	"get_Item", NULL, &t7345_TI, &t1717_0_0_0, RuntimeInvoker_t5_t110, t7345_m39008_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39008_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1717_0_0_0;
static ParameterInfo t7345_m39009_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1717_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39009_GM;
MethodInfo m39009_MI = 
{
	"set_Item", NULL, &t7345_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7345_m39009_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39009_GM};
static MethodInfo* t7345_MIs[] =
{
	&m39010_MI,
	&m39011_MI,
	&m39012_MI,
	&m39008_MI,
	&m39009_MI,
	NULL
};
static TypeInfo* t7345_ITIs[] = 
{
	&t739_TI,
	&t7344_TI,
	&t7346_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7345_0_0_0;
extern Il2CppType t7345_1_0_0;
struct t7345;
extern Il2CppGenericClass t7345_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7345_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7345_MIs, t7345_PIs, NULL, NULL, NULL, NULL, NULL, &t7345_TI, t7345_ITIs, NULL, &t2240__CustomAttributeCache, &t7345_TI, &t7345_0_0_0, &t7345_1_0_0, NULL, &t7345_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7347_TI;

#include "t1718.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>
extern MethodInfo m39013_MI;
static PropertyInfo t7347____Count_PropertyInfo = 
{
	&t7347_TI, "Count", &m39013_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39014_MI;
static PropertyInfo t7347____IsReadOnly_PropertyInfo = 
{
	&t7347_TI, "IsReadOnly", &m39014_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7347_PIs[] =
{
	&t7347____Count_PropertyInfo,
	&t7347____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39013_GM;
MethodInfo m39013_MI = 
{
	"get_Count", NULL, &t7347_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39013_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39014_GM;
MethodInfo m39014_MI = 
{
	"get_IsReadOnly", NULL, &t7347_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39014_GM};
extern Il2CppType t1718_0_0_0;
extern Il2CppType t1718_0_0_0;
static ParameterInfo t7347_m39015_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1718_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39015_GM;
MethodInfo m39015_MI = 
{
	"Add", NULL, &t7347_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t7347_m39015_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39015_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39016_GM;
MethodInfo m39016_MI = 
{
	"Clear", NULL, &t7347_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39016_GM};
extern Il2CppType t1718_0_0_0;
static ParameterInfo t7347_m39017_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1718_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39017_GM;
MethodInfo m39017_MI = 
{
	"Contains", NULL, &t7347_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7347_m39017_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39017_GM};
extern Il2CppType t4327_0_0_0;
extern Il2CppType t4327_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7347_m39018_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4327_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39018_GM;
MethodInfo m39018_MI = 
{
	"CopyTo", NULL, &t7347_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7347_m39018_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39018_GM};
extern Il2CppType t1718_0_0_0;
static ParameterInfo t7347_m39019_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1718_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39019_GM;
MethodInfo m39019_MI = 
{
	"Remove", NULL, &t7347_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7347_m39019_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39019_GM};
static MethodInfo* t7347_MIs[] =
{
	&m39013_MI,
	&m39014_MI,
	&m39015_MI,
	&m39016_MI,
	&m39017_MI,
	&m39018_MI,
	&m39019_MI,
	NULL
};
extern TypeInfo t7349_TI;
static TypeInfo* t7347_ITIs[] = 
{
	&t739_TI,
	&t7349_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7347_0_0_0;
extern Il2CppType t7347_1_0_0;
struct t7347;
extern Il2CppGenericClass t7347_GC;
TypeInfo t7347_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7347_MIs, t7347_PIs, NULL, NULL, NULL, NULL, NULL, &t7347_TI, t7347_ITIs, NULL, &EmptyCustomAttributesCache, &t7347_TI, &t7347_0_0_0, &t7347_1_0_0, NULL, &t7347_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.ContextAttribute>
extern Il2CppType t5724_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39020_GM;
MethodInfo m39020_MI = 
{
	"GetEnumerator", NULL, &t7349_TI, &t5724_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39020_GM};
static MethodInfo* t7349_MIs[] =
{
	&m39020_MI,
	NULL
};
static TypeInfo* t7349_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7349_0_0_0;
extern Il2CppType t7349_1_0_0;
struct t7349;
extern Il2CppGenericClass t7349_GC;
TypeInfo t7349_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7349_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7349_TI, t7349_ITIs, NULL, &EmptyCustomAttributesCache, &t7349_TI, &t7349_0_0_0, &t7349_1_0_0, NULL, &t7349_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5724_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>
extern MethodInfo m39021_MI;
static PropertyInfo t5724____Current_PropertyInfo = 
{
	&t5724_TI, "Current", &m39021_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5724_PIs[] =
{
	&t5724____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1718_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39021_GM;
MethodInfo m39021_MI = 
{
	"get_Current", NULL, &t5724_TI, &t1718_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39021_GM};
static MethodInfo* t5724_MIs[] =
{
	&m39021_MI,
	NULL
};
static TypeInfo* t5724_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5724_0_0_0;
extern Il2CppType t5724_1_0_0;
struct t5724;
extern Il2CppGenericClass t5724_GC;
TypeInfo t5724_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5724_MIs, t5724_PIs, NULL, NULL, NULL, NULL, NULL, &t5724_TI, t5724_ITIs, NULL, &EmptyCustomAttributesCache, &t5724_TI, &t5724_0_0_0, &t5724_1_0_0, NULL, &t5724_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4063.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4063_TI;
#include "t4063MD.h"

extern TypeInfo t1718_TI;
extern MethodInfo m23039_MI;
extern MethodInfo m30445_MI;
struct t107;
#define m30445(__this, p0, method) (t1718 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t4063_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4063_TI, offsetof(t4063, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4063_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4063_TI, offsetof(t4063, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4063_FIs[] =
{
	&t4063_f0_FieldInfo,
	&t4063_f1_FieldInfo,
	NULL
};
extern MethodInfo m23036_MI;
static PropertyInfo t4063____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4063_TI, "System.Collections.IEnumerator.Current", &m23036_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4063____Current_PropertyInfo = 
{
	&t4063_TI, "Current", &m23039_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4063_PIs[] =
{
	&t4063____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4063____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4063_m23035_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23035_GM;
MethodInfo m23035_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t4063_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4063_m23035_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23035_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23036_GM;
MethodInfo m23036_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t4063_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23036_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23037_GM;
MethodInfo m23037_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t4063_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23037_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23038_GM;
MethodInfo m23038_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t4063_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23038_GM};
extern Il2CppType t1718_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23039_GM;
MethodInfo m23039_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t4063_TI, &t1718_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23039_GM};
static MethodInfo* t4063_MIs[] =
{
	&m23035_MI,
	&m23036_MI,
	&m23037_MI,
	&m23038_MI,
	&m23039_MI,
	NULL
};
extern MethodInfo m23038_MI;
extern MethodInfo m23037_MI;
static MethodInfo* t4063_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m23036_MI,
	&m23038_MI,
	&m23037_MI,
	&m23039_MI,
};
static TypeInfo* t4063_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5724_TI,
};
static Il2CppInterfaceOffsetPair t4063_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5724_TI, 7},
};
extern TypeInfo t1718_TI;
static Il2CppRGCTXData t4063_RGCTXData[3] = 
{
	&m23039_MI/* Method Usage */,
	&t1718_TI/* Class Usage */,
	&m30445_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4063_0_0_0;
extern Il2CppType t4063_1_0_0;
extern Il2CppGenericClass t4063_GC;
TypeInfo t4063_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4063_MIs, t4063_PIs, t4063_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4063_TI, t4063_ITIs, t4063_VT, &EmptyCustomAttributesCache, &t4063_TI, &t4063_0_0_0, &t4063_1_0_0, t4063_IOs, &t4063_GC, NULL, NULL, NULL, t4063_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4063)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7348_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.ContextAttribute>
extern MethodInfo m39022_MI;
extern MethodInfo m39023_MI;
static PropertyInfo t7348____Item_PropertyInfo = 
{
	&t7348_TI, "Item", &m39022_MI, &m39023_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7348_PIs[] =
{
	&t7348____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1718_0_0_0;
static ParameterInfo t7348_m39024_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1718_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39024_GM;
MethodInfo m39024_MI = 
{
	"IndexOf", NULL, &t7348_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7348_m39024_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39024_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1718_0_0_0;
static ParameterInfo t7348_m39025_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1718_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39025_GM;
MethodInfo m39025_MI = 
{
	"Insert", NULL, &t7348_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7348_m39025_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39025_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7348_m39026_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39026_GM;
MethodInfo m39026_MI = 
{
	"RemoveAt", NULL, &t7348_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7348_m39026_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39026_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7348_m39022_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1718_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39022_GM;
MethodInfo m39022_MI = 
{
	"get_Item", NULL, &t7348_TI, &t1718_0_0_0, RuntimeInvoker_t5_t110, t7348_m39022_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39022_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1718_0_0_0;
static ParameterInfo t7348_m39023_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1718_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39023_GM;
MethodInfo m39023_MI = 
{
	"set_Item", NULL, &t7348_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7348_m39023_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39023_GM};
static MethodInfo* t7348_MIs[] =
{
	&m39024_MI,
	&m39025_MI,
	&m39026_MI,
	&m39022_MI,
	&m39023_MI,
	NULL
};
static TypeInfo* t7348_ITIs[] = 
{
	&t739_TI,
	&t7347_TI,
	&t7349_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7348_0_0_0;
extern Il2CppType t7348_1_0_0;
struct t7348;
extern Il2CppGenericClass t7348_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7348_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7348_MIs, t7348_PIs, NULL, NULL, NULL, NULL, NULL, &t7348_TI, t7348_ITIs, NULL, &t2240__CustomAttributeCache, &t7348_TI, &t7348_0_0_0, &t7348_1_0_0, NULL, &t7348_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7350_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>
extern MethodInfo m39027_MI;
static PropertyInfo t7350____Count_PropertyInfo = 
{
	&t7350_TI, "Count", &m39027_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39028_MI;
static PropertyInfo t7350____IsReadOnly_PropertyInfo = 
{
	&t7350_TI, "IsReadOnly", &m39028_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7350_PIs[] =
{
	&t7350____Count_PropertyInfo,
	&t7350____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39027_GM;
MethodInfo m39027_MI = 
{
	"get_Count", NULL, &t7350_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39027_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39028_GM;
MethodInfo m39028_MI = 
{
	"get_IsReadOnly", NULL, &t7350_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39028_GM};
extern Il2CppType t2375_0_0_0;
extern Il2CppType t2375_0_0_0;
static ParameterInfo t7350_m39029_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2375_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39029_GM;
MethodInfo m39029_MI = 
{
	"Add", NULL, &t7350_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t7350_m39029_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39029_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39030_GM;
MethodInfo m39030_MI = 
{
	"Clear", NULL, &t7350_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39030_GM};
extern Il2CppType t2375_0_0_0;
static ParameterInfo t7350_m39031_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2375_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39031_GM;
MethodInfo m39031_MI = 
{
	"Contains", NULL, &t7350_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7350_m39031_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39031_GM};
extern Il2CppType t1778_0_0_0;
extern Il2CppType t1778_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7350_m39032_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1778_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39032_GM;
MethodInfo m39032_MI = 
{
	"CopyTo", NULL, &t7350_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7350_m39032_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39032_GM};
extern Il2CppType t2375_0_0_0;
static ParameterInfo t7350_m39033_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2375_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39033_GM;
MethodInfo m39033_MI = 
{
	"Remove", NULL, &t7350_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7350_m39033_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39033_GM};
static MethodInfo* t7350_MIs[] =
{
	&m39027_MI,
	&m39028_MI,
	&m39029_MI,
	&m39030_MI,
	&m39031_MI,
	&m39032_MI,
	&m39033_MI,
	NULL
};
extern TypeInfo t7352_TI;
static TypeInfo* t7350_ITIs[] = 
{
	&t739_TI,
	&t7352_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7350_0_0_0;
extern Il2CppType t7350_1_0_0;
struct t7350;
extern Il2CppGenericClass t7350_GC;
TypeInfo t7350_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7350_MIs, t7350_PIs, NULL, NULL, NULL, NULL, NULL, &t7350_TI, t7350_ITIs, NULL, &EmptyCustomAttributesCache, &t7350_TI, &t7350_0_0_0, &t7350_1_0_0, NULL, &t7350_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
