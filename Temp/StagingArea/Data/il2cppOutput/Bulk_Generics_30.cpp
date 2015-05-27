#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t3880.h"
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
extern TypeInfo t3880_TI;
#include "t3880MD.h"

#include "t5.h"
#include "t1235.h"
#include "t110.h"
#include "t11.h"
#include "t133.h"
#include "t109.h"
#include "t107.h"
#include "t108.h"
extern TypeInfo t1235_TI;
extern TypeInfo t133_TI;
#include "t133MD.h"
#include "t107MD.h"
extern MethodInfo m22126_MI;
extern MethodInfo m4758_MI;
extern MethodInfo m4763_MI;
extern MethodInfo m28479_MI;
struct t107;
#include "t1181.h"
 int32_t m28479 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22122_MI;
 void m22122 (t3880 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22123_MI;
 t5 * m22123 (t3880 * __this, MethodInfo* method){
	{
		int32_t L_0 = m22126(__this, &m22126_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1235_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22124_MI;
 void m22124 (t3880 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22125_MI;
 bool m22125 (t3880 * __this, MethodInfo* method){
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
 int32_t m22126 (t3880 * __this, MethodInfo* method){
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
		int32_t L_8 = m28479(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28479_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>
extern Il2CppType t107_0_0_1;
FieldInfo t3880_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3880_TI, offsetof(t3880, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3880_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3880_TI, offsetof(t3880, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3880_FIs[] =
{
	&t3880_f0_FieldInfo,
	&t3880_f1_FieldInfo,
	NULL
};
static PropertyInfo t3880____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3880_TI, "System.Collections.IEnumerator.Current", &m22123_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3880____Current_PropertyInfo = 
{
	&t3880_TI, "Current", &m22126_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3880_PIs[] =
{
	&t3880____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3880____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
extern Il2CppType t107_0_0_0;
static ParameterInfo t3880_m22122_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22122_GM;
MethodInfo m22122_MI = 
{
	".ctor", (methodPointerType)&m22122, &t3880_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3880_m22122_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22122_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22123_GM;
MethodInfo m22123_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22123, &t3880_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22123_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22124_GM;
MethodInfo m22124_MI = 
{
	"Dispose", (methodPointerType)&m22124, &t3880_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22124_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22125_GM;
MethodInfo m22125_MI = 
{
	"MoveNext", (methodPointerType)&m22125, &t3880_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22125_GM};
extern Il2CppType t1235_0_0_0;
extern void* RuntimeInvoker_t1235 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22126_GM;
MethodInfo m22126_MI = 
{
	"get_Current", (methodPointerType)&m22126, &t3880_TI, &t1235_0_0_0, RuntimeInvoker_t1235, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22126_GM};
static MethodInfo* t3880_MIs[] =
{
	&m22122_MI,
	&m22123_MI,
	&m22124_MI,
	&m22125_MI,
	&m22126_MI,
	NULL
};
extern MethodInfo m2041_MI;
extern MethodInfo m465_MI;
extern MethodInfo m2042_MI;
extern MethodInfo m2147_MI;
static MethodInfo* t3880_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22123_MI,
	&m22125_MI,
	&m22124_MI,
	&m22126_MI,
};
extern TypeInfo t196_TI;
extern TypeInfo t132_TI;
extern TypeInfo t5381_TI;
static TypeInfo* t3880_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5381_TI,
};
static Il2CppInterfaceOffsetPair t3880_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5381_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3880_0_0_0;
extern Il2CppType t3880_1_0_0;
extern TypeInfo t267_TI;
extern Il2CppGenericClass t3880_GC;
extern TypeInfo t107_TI;
TypeInfo t3880_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3880_MIs, t3880_PIs, t3880_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3880_TI, t3880_ITIs, t3880_VT, &EmptyCustomAttributesCache, &t3880_TI, &t3880_0_0_0, &t3880_1_0_0, t3880_IOs, &t3880_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3880)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6819_TI;

#include "Mono.Security_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>
extern MethodInfo m36542_MI;
static PropertyInfo t6819____Count_PropertyInfo = 
{
	&t6819_TI, "Count", &m36542_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36543_MI;
static PropertyInfo t6819____IsReadOnly_PropertyInfo = 
{
	&t6819_TI, "IsReadOnly", &m36543_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6819_PIs[] =
{
	&t6819____Count_PropertyInfo,
	&t6819____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36542_GM;
MethodInfo m36542_MI = 
{
	"get_Count", NULL, &t6819_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36542_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36543_GM;
MethodInfo m36543_MI = 
{
	"get_IsReadOnly", NULL, &t6819_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36543_GM};
extern Il2CppType t1235_0_0_0;
extern Il2CppType t1235_0_0_0;
static ParameterInfo t6819_m36544_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1235_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36544_GM;
MethodInfo m36544_MI = 
{
	"Add", NULL, &t6819_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6819_m36544_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36544_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36545_GM;
MethodInfo m36545_MI = 
{
	"Clear", NULL, &t6819_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36545_GM};
extern Il2CppType t1235_0_0_0;
static ParameterInfo t6819_m36546_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1235_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36546_GM;
MethodInfo m36546_MI = 
{
	"Contains", NULL, &t6819_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6819_m36546_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36546_GM};
extern Il2CppType t4602_0_0_0;
extern Il2CppType t4602_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6819_m36547_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4602_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36547_GM;
MethodInfo m36547_MI = 
{
	"CopyTo", NULL, &t6819_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6819_m36547_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36547_GM};
extern Il2CppType t1235_0_0_0;
static ParameterInfo t6819_m36548_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1235_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36548_GM;
MethodInfo m36548_MI = 
{
	"Remove", NULL, &t6819_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6819_m36548_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36548_GM};
static MethodInfo* t6819_MIs[] =
{
	&m36542_MI,
	&m36543_MI,
	&m36544_MI,
	&m36545_MI,
	&m36546_MI,
	&m36547_MI,
	&m36548_MI,
	NULL
};
extern TypeInfo t739_TI;
extern TypeInfo t6821_TI;
static TypeInfo* t6819_ITIs[] = 
{
	&t739_TI,
	&t6821_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6819_0_0_0;
extern Il2CppType t6819_1_0_0;
struct t6819;
extern Il2CppGenericClass t6819_GC;
TypeInfo t6819_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6819_MIs, t6819_PIs, NULL, NULL, NULL, NULL, NULL, &t6819_TI, t6819_ITIs, NULL, &EmptyCustomAttributesCache, &t6819_TI, &t6819_0_0_0, &t6819_1_0_0, NULL, &t6819_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger/Sign>
extern Il2CppType t5381_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36549_GM;
MethodInfo m36549_MI = 
{
	"GetEnumerator", NULL, &t6821_TI, &t5381_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36549_GM};
static MethodInfo* t6821_MIs[] =
{
	&m36549_MI,
	NULL
};
static TypeInfo* t6821_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6821_0_0_0;
extern Il2CppType t6821_1_0_0;
struct t6821;
extern Il2CppGenericClass t6821_GC;
TypeInfo t6821_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6821_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6821_TI, t6821_ITIs, NULL, &EmptyCustomAttributesCache, &t6821_TI, &t6821_0_0_0, &t6821_1_0_0, NULL, &t6821_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6820_TI;



// Metadata Definition System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>
extern MethodInfo m36550_MI;
extern MethodInfo m36551_MI;
static PropertyInfo t6820____Item_PropertyInfo = 
{
	&t6820_TI, "Item", &m36550_MI, &m36551_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6820_PIs[] =
{
	&t6820____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1235_0_0_0;
static ParameterInfo t6820_m36552_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1235_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36552_GM;
MethodInfo m36552_MI = 
{
	"IndexOf", NULL, &t6820_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6820_m36552_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36552_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1235_0_0_0;
static ParameterInfo t6820_m36553_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1235_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36553_GM;
MethodInfo m36553_MI = 
{
	"Insert", NULL, &t6820_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6820_m36553_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36553_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6820_m36554_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36554_GM;
MethodInfo m36554_MI = 
{
	"RemoveAt", NULL, &t6820_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6820_m36554_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36554_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6820_m36550_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1235_0_0_0;
extern void* RuntimeInvoker_t1235_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36550_GM;
MethodInfo m36550_MI = 
{
	"get_Item", NULL, &t6820_TI, &t1235_0_0_0, RuntimeInvoker_t1235_t110, t6820_m36550_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36550_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1235_0_0_0;
static ParameterInfo t6820_m36551_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1235_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36551_GM;
MethodInfo m36551_MI = 
{
	"set_Item", NULL, &t6820_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6820_m36551_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36551_GM};
static MethodInfo* t6820_MIs[] =
{
	&m36552_MI,
	&m36553_MI,
	&m36554_MI,
	&m36550_MI,
	&m36551_MI,
	NULL
};
static TypeInfo* t6820_ITIs[] = 
{
	&t739_TI,
	&t6819_TI,
	&t6821_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6820_0_0_0;
extern Il2CppType t6820_1_0_0;
struct t6820;
extern Il2CppGenericClass t6820_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6820_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6820_MIs, t6820_PIs, NULL, NULL, NULL, NULL, NULL, &t6820_TI, t6820_ITIs, NULL, &t2240__CustomAttributeCache, &t6820_TI, &t6820_0_0_0, &t6820_1_0_0, NULL, &t6820_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5383_TI;

#include "t1242.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Math.Prime.ConfidenceFactor>
extern MethodInfo m36555_MI;
static PropertyInfo t5383____Current_PropertyInfo = 
{
	&t5383_TI, "Current", &m36555_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5383_PIs[] =
{
	&t5383____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1242_0_0_0;
extern void* RuntimeInvoker_t1242 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36555_GM;
MethodInfo m36555_MI = 
{
	"get_Current", NULL, &t5383_TI, &t1242_0_0_0, RuntimeInvoker_t1242, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36555_GM};
static MethodInfo* t5383_MIs[] =
{
	&m36555_MI,
	NULL
};
static TypeInfo* t5383_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5383_0_0_0;
extern Il2CppType t5383_1_0_0;
struct t5383;
extern Il2CppGenericClass t5383_GC;
TypeInfo t5383_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5383_MIs, t5383_PIs, NULL, NULL, NULL, NULL, NULL, &t5383_TI, t5383_ITIs, NULL, &EmptyCustomAttributesCache, &t5383_TI, &t5383_0_0_0, &t5383_1_0_0, NULL, &t5383_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3881.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3881_TI;
#include "t3881MD.h"

extern TypeInfo t1242_TI;
extern MethodInfo m22131_MI;
extern MethodInfo m28490_MI;
struct t107;
 int32_t m28490 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22127_MI;
 void m22127 (t3881 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22128_MI;
 t5 * m22128 (t3881 * __this, MethodInfo* method){
	{
		int32_t L_0 = m22131(__this, &m22131_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1242_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22129_MI;
 void m22129 (t3881 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22130_MI;
 bool m22130 (t3881 * __this, MethodInfo* method){
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
 int32_t m22131 (t3881 * __this, MethodInfo* method){
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
		int32_t L_8 = m28490(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28490_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>
extern Il2CppType t107_0_0_1;
FieldInfo t3881_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3881_TI, offsetof(t3881, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3881_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3881_TI, offsetof(t3881, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3881_FIs[] =
{
	&t3881_f0_FieldInfo,
	&t3881_f1_FieldInfo,
	NULL
};
static PropertyInfo t3881____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3881_TI, "System.Collections.IEnumerator.Current", &m22128_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3881____Current_PropertyInfo = 
{
	&t3881_TI, "Current", &m22131_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3881_PIs[] =
{
	&t3881____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3881____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3881_m22127_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22127_GM;
MethodInfo m22127_MI = 
{
	".ctor", (methodPointerType)&m22127, &t3881_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3881_m22127_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22127_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22128_GM;
MethodInfo m22128_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22128, &t3881_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22128_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22129_GM;
MethodInfo m22129_MI = 
{
	"Dispose", (methodPointerType)&m22129, &t3881_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22129_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22130_GM;
MethodInfo m22130_MI = 
{
	"MoveNext", (methodPointerType)&m22130, &t3881_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22130_GM};
extern Il2CppType t1242_0_0_0;
extern void* RuntimeInvoker_t1242 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22131_GM;
MethodInfo m22131_MI = 
{
	"get_Current", (methodPointerType)&m22131, &t3881_TI, &t1242_0_0_0, RuntimeInvoker_t1242, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22131_GM};
static MethodInfo* t3881_MIs[] =
{
	&m22127_MI,
	&m22128_MI,
	&m22129_MI,
	&m22130_MI,
	&m22131_MI,
	NULL
};
static MethodInfo* t3881_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22128_MI,
	&m22130_MI,
	&m22129_MI,
	&m22131_MI,
};
static TypeInfo* t3881_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5383_TI,
};
static Il2CppInterfaceOffsetPair t3881_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5383_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3881_0_0_0;
extern Il2CppType t3881_1_0_0;
extern Il2CppGenericClass t3881_GC;
TypeInfo t3881_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3881_MIs, t3881_PIs, t3881_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3881_TI, t3881_ITIs, t3881_VT, &EmptyCustomAttributesCache, &t3881_TI, &t3881_0_0_0, &t3881_1_0_0, t3881_IOs, &t3881_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3881)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6822_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>
extern MethodInfo m36556_MI;
static PropertyInfo t6822____Count_PropertyInfo = 
{
	&t6822_TI, "Count", &m36556_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36557_MI;
static PropertyInfo t6822____IsReadOnly_PropertyInfo = 
{
	&t6822_TI, "IsReadOnly", &m36557_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6822_PIs[] =
{
	&t6822____Count_PropertyInfo,
	&t6822____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36556_GM;
MethodInfo m36556_MI = 
{
	"get_Count", NULL, &t6822_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36556_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36557_GM;
MethodInfo m36557_MI = 
{
	"get_IsReadOnly", NULL, &t6822_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36557_GM};
extern Il2CppType t1242_0_0_0;
extern Il2CppType t1242_0_0_0;
static ParameterInfo t6822_m36558_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1242_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36558_GM;
MethodInfo m36558_MI = 
{
	"Add", NULL, &t6822_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6822_m36558_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36558_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36559_GM;
MethodInfo m36559_MI = 
{
	"Clear", NULL, &t6822_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36559_GM};
extern Il2CppType t1242_0_0_0;
static ParameterInfo t6822_m36560_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1242_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36560_GM;
MethodInfo m36560_MI = 
{
	"Contains", NULL, &t6822_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6822_m36560_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36560_GM};
extern Il2CppType t4603_0_0_0;
extern Il2CppType t4603_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6822_m36561_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4603_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36561_GM;
MethodInfo m36561_MI = 
{
	"CopyTo", NULL, &t6822_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6822_m36561_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36561_GM};
extern Il2CppType t1242_0_0_0;
static ParameterInfo t6822_m36562_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1242_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36562_GM;
MethodInfo m36562_MI = 
{
	"Remove", NULL, &t6822_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6822_m36562_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36562_GM};
static MethodInfo* t6822_MIs[] =
{
	&m36556_MI,
	&m36557_MI,
	&m36558_MI,
	&m36559_MI,
	&m36560_MI,
	&m36561_MI,
	&m36562_MI,
	NULL
};
extern TypeInfo t6824_TI;
static TypeInfo* t6822_ITIs[] = 
{
	&t739_TI,
	&t6824_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6822_0_0_0;
extern Il2CppType t6822_1_0_0;
struct t6822;
extern Il2CppGenericClass t6822_GC;
TypeInfo t6822_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6822_MIs, t6822_PIs, NULL, NULL, NULL, NULL, NULL, &t6822_TI, t6822_ITIs, NULL, &EmptyCustomAttributesCache, &t6822_TI, &t6822_0_0_0, &t6822_1_0_0, NULL, &t6822_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Math.Prime.ConfidenceFactor>
extern Il2CppType t5383_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36563_GM;
MethodInfo m36563_MI = 
{
	"GetEnumerator", NULL, &t6824_TI, &t5383_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36563_GM};
static MethodInfo* t6824_MIs[] =
{
	&m36563_MI,
	NULL
};
static TypeInfo* t6824_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6824_0_0_0;
extern Il2CppType t6824_1_0_0;
struct t6824;
extern Il2CppGenericClass t6824_GC;
TypeInfo t6824_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6824_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6824_TI, t6824_ITIs, NULL, &EmptyCustomAttributesCache, &t6824_TI, &t6824_0_0_0, &t6824_1_0_0, NULL, &t6824_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6823_TI;



// Metadata Definition System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>
extern MethodInfo m36564_MI;
extern MethodInfo m36565_MI;
static PropertyInfo t6823____Item_PropertyInfo = 
{
	&t6823_TI, "Item", &m36564_MI, &m36565_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6823_PIs[] =
{
	&t6823____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1242_0_0_0;
static ParameterInfo t6823_m36566_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1242_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36566_GM;
MethodInfo m36566_MI = 
{
	"IndexOf", NULL, &t6823_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6823_m36566_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36566_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1242_0_0_0;
static ParameterInfo t6823_m36567_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1242_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36567_GM;
MethodInfo m36567_MI = 
{
	"Insert", NULL, &t6823_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6823_m36567_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36567_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6823_m36568_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36568_GM;
MethodInfo m36568_MI = 
{
	"RemoveAt", NULL, &t6823_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6823_m36568_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36568_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6823_m36564_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1242_0_0_0;
extern void* RuntimeInvoker_t1242_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36564_GM;
MethodInfo m36564_MI = 
{
	"get_Item", NULL, &t6823_TI, &t1242_0_0_0, RuntimeInvoker_t1242_t110, t6823_m36564_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36564_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1242_0_0_0;
static ParameterInfo t6823_m36565_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1242_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36565_GM;
MethodInfo m36565_MI = 
{
	"set_Item", NULL, &t6823_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6823_m36565_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36565_GM};
static MethodInfo* t6823_MIs[] =
{
	&m36566_MI,
	&m36567_MI,
	&m36568_MI,
	&m36564_MI,
	&m36565_MI,
	NULL
};
static TypeInfo* t6823_ITIs[] = 
{
	&t739_TI,
	&t6822_TI,
	&t6824_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6823_0_0_0;
extern Il2CppType t6823_1_0_0;
struct t6823;
extern Il2CppGenericClass t6823_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6823_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6823_MIs, t6823_PIs, NULL, NULL, NULL, NULL, NULL, &t6823_TI, t6823_ITIs, NULL, &t2240__CustomAttributeCache, &t6823_TI, &t6823_0_0_0, &t6823_1_0_0, NULL, &t6823_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5385_TI;

#include "t1362.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.KeySizes>
extern MethodInfo m36569_MI;
static PropertyInfo t5385____Current_PropertyInfo = 
{
	&t5385_TI, "Current", &m36569_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5385_PIs[] =
{
	&t5385____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1362_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36569_GM;
MethodInfo m36569_MI = 
{
	"get_Current", NULL, &t5385_TI, &t1362_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36569_GM};
static MethodInfo* t5385_MIs[] =
{
	&m36569_MI,
	NULL
};
static TypeInfo* t5385_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5385_0_0_0;
extern Il2CppType t5385_1_0_0;
struct t5385;
extern Il2CppGenericClass t5385_GC;
TypeInfo t5385_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5385_MIs, t5385_PIs, NULL, NULL, NULL, NULL, NULL, &t5385_TI, t5385_ITIs, NULL, &EmptyCustomAttributesCache, &t5385_TI, &t5385_0_0_0, &t5385_1_0_0, NULL, &t5385_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3882.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3882_TI;
#include "t3882MD.h"

extern TypeInfo t1362_TI;
extern MethodInfo m22136_MI;
extern MethodInfo m28501_MI;
struct t107;
struct t107;
 t5 * m23596_gshared (t107 * __this, int32_t p0, MethodInfo* method);
#define m23596(__this, p0, method) (t5 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
#define m28501(__this, p0, method) (t1362 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>
extern Il2CppType t107_0_0_1;
FieldInfo t3882_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3882_TI, offsetof(t3882, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3882_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3882_TI, offsetof(t3882, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3882_FIs[] =
{
	&t3882_f0_FieldInfo,
	&t3882_f1_FieldInfo,
	NULL
};
extern MethodInfo m22133_MI;
static PropertyInfo t3882____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3882_TI, "System.Collections.IEnumerator.Current", &m22133_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3882____Current_PropertyInfo = 
{
	&t3882_TI, "Current", &m22136_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3882_PIs[] =
{
	&t3882____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3882____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3882_m22132_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22132_GM;
MethodInfo m22132_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3882_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3882_m22132_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22132_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22133_GM;
MethodInfo m22133_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3882_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22133_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22134_GM;
MethodInfo m22134_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3882_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22134_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22135_GM;
MethodInfo m22135_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3882_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22135_GM};
extern Il2CppType t1362_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22136_GM;
MethodInfo m22136_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3882_TI, &t1362_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22136_GM};
static MethodInfo* t3882_MIs[] =
{
	&m22132_MI,
	&m22133_MI,
	&m22134_MI,
	&m22135_MI,
	&m22136_MI,
	NULL
};
extern MethodInfo m22135_MI;
extern MethodInfo m22134_MI;
static MethodInfo* t3882_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22133_MI,
	&m22135_MI,
	&m22134_MI,
	&m22136_MI,
};
static TypeInfo* t3882_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5385_TI,
};
static Il2CppInterfaceOffsetPair t3882_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5385_TI, 7},
};
extern TypeInfo t1362_TI;
static Il2CppRGCTXData t3882_RGCTXData[3] = 
{
	&m22136_MI/* Method Usage */,
	&t1362_TI/* Class Usage */,
	&m28501_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3882_0_0_0;
extern Il2CppType t3882_1_0_0;
extern Il2CppGenericClass t3882_GC;
TypeInfo t3882_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3882_MIs, t3882_PIs, t3882_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3882_TI, t3882_ITIs, t3882_VT, &EmptyCustomAttributesCache, &t3882_TI, &t3882_0_0_0, &t3882_1_0_0, t3882_IOs, &t3882_GC, NULL, NULL, NULL, t3882_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3882)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6825_TI;

#include "mscorlib_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>
extern MethodInfo m36570_MI;
static PropertyInfo t6825____Count_PropertyInfo = 
{
	&t6825_TI, "Count", &m36570_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36571_MI;
static PropertyInfo t6825____IsReadOnly_PropertyInfo = 
{
	&t6825_TI, "IsReadOnly", &m36571_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6825_PIs[] =
{
	&t6825____Count_PropertyInfo,
	&t6825____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36570_GM;
MethodInfo m36570_MI = 
{
	"get_Count", NULL, &t6825_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36570_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36571_GM;
MethodInfo m36571_MI = 
{
	"get_IsReadOnly", NULL, &t6825_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36571_GM};
extern Il2CppType t1362_0_0_0;
extern Il2CppType t1362_0_0_0;
static ParameterInfo t6825_m36572_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1362_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36572_GM;
MethodInfo m36572_MI = 
{
	"Add", NULL, &t6825_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6825_m36572_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36572_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36573_GM;
MethodInfo m36573_MI = 
{
	"Clear", NULL, &t6825_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36573_GM};
extern Il2CppType t1362_0_0_0;
static ParameterInfo t6825_m36574_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1362_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36574_GM;
MethodInfo m36574_MI = 
{
	"Contains", NULL, &t6825_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6825_m36574_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36574_GM};
extern Il2CppType t1261_0_0_0;
extern Il2CppType t1261_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6825_m36575_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1261_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36575_GM;
MethodInfo m36575_MI = 
{
	"CopyTo", NULL, &t6825_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6825_m36575_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36575_GM};
extern Il2CppType t1362_0_0_0;
static ParameterInfo t6825_m36576_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1362_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36576_GM;
MethodInfo m36576_MI = 
{
	"Remove", NULL, &t6825_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6825_m36576_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36576_GM};
static MethodInfo* t6825_MIs[] =
{
	&m36570_MI,
	&m36571_MI,
	&m36572_MI,
	&m36573_MI,
	&m36574_MI,
	&m36575_MI,
	&m36576_MI,
	NULL
};
extern TypeInfo t6827_TI;
static TypeInfo* t6825_ITIs[] = 
{
	&t739_TI,
	&t6827_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6825_0_0_0;
extern Il2CppType t6825_1_0_0;
struct t6825;
extern Il2CppGenericClass t6825_GC;
TypeInfo t6825_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6825_MIs, t6825_PIs, NULL, NULL, NULL, NULL, NULL, &t6825_TI, t6825_ITIs, NULL, &EmptyCustomAttributesCache, &t6825_TI, &t6825_0_0_0, &t6825_1_0_0, NULL, &t6825_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.KeySizes>
extern Il2CppType t5385_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36577_GM;
MethodInfo m36577_MI = 
{
	"GetEnumerator", NULL, &t6827_TI, &t5385_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36577_GM};
static MethodInfo* t6827_MIs[] =
{
	&m36577_MI,
	NULL
};
static TypeInfo* t6827_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6827_0_0_0;
extern Il2CppType t6827_1_0_0;
struct t6827;
extern Il2CppGenericClass t6827_GC;
TypeInfo t6827_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6827_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6827_TI, t6827_ITIs, NULL, &EmptyCustomAttributesCache, &t6827_TI, &t6827_0_0_0, &t6827_1_0_0, NULL, &t6827_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6826_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.KeySizes>
extern MethodInfo m36578_MI;
extern MethodInfo m36579_MI;
static PropertyInfo t6826____Item_PropertyInfo = 
{
	&t6826_TI, "Item", &m36578_MI, &m36579_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6826_PIs[] =
{
	&t6826____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1362_0_0_0;
static ParameterInfo t6826_m36580_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1362_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36580_GM;
MethodInfo m36580_MI = 
{
	"IndexOf", NULL, &t6826_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6826_m36580_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36580_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1362_0_0_0;
static ParameterInfo t6826_m36581_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1362_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36581_GM;
MethodInfo m36581_MI = 
{
	"Insert", NULL, &t6826_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6826_m36581_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36581_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6826_m36582_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36582_GM;
MethodInfo m36582_MI = 
{
	"RemoveAt", NULL, &t6826_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6826_m36582_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36582_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6826_m36578_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1362_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36578_GM;
MethodInfo m36578_MI = 
{
	"get_Item", NULL, &t6826_TI, &t1362_0_0_0, RuntimeInvoker_t5_t110, t6826_m36578_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36578_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1362_0_0_0;
static ParameterInfo t6826_m36579_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1362_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36579_GM;
MethodInfo m36579_MI = 
{
	"set_Item", NULL, &t6826_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6826_m36579_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36579_GM};
static MethodInfo* t6826_MIs[] =
{
	&m36580_MI,
	&m36581_MI,
	&m36582_MI,
	&m36578_MI,
	&m36579_MI,
	NULL
};
static TypeInfo* t6826_ITIs[] = 
{
	&t739_TI,
	&t6825_TI,
	&t6827_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6826_0_0_0;
extern Il2CppType t6826_1_0_0;
struct t6826;
extern Il2CppGenericClass t6826_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6826_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6826_MIs, t6826_PIs, NULL, NULL, NULL, NULL, NULL, &t6826_TI, t6826_ITIs, NULL, &t2240__CustomAttributeCache, &t6826_TI, &t6826_0_0_0, &t6826_1_0_0, NULL, &t6826_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5387_TI;

#include "t1268.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.X509.X509ChainStatusFlags>
extern MethodInfo m36583_MI;
static PropertyInfo t5387____Current_PropertyInfo = 
{
	&t5387_TI, "Current", &m36583_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5387_PIs[] =
{
	&t5387____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1268_0_0_0;
extern void* RuntimeInvoker_t1268 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36583_GM;
MethodInfo m36583_MI = 
{
	"get_Current", NULL, &t5387_TI, &t1268_0_0_0, RuntimeInvoker_t1268, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36583_GM};
static MethodInfo* t5387_MIs[] =
{
	&m36583_MI,
	NULL
};
static TypeInfo* t5387_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5387_0_0_0;
extern Il2CppType t5387_1_0_0;
struct t5387;
extern Il2CppGenericClass t5387_GC;
TypeInfo t5387_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5387_MIs, t5387_PIs, NULL, NULL, NULL, NULL, NULL, &t5387_TI, t5387_ITIs, NULL, &EmptyCustomAttributesCache, &t5387_TI, &t5387_0_0_0, &t5387_1_0_0, NULL, &t5387_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3883.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3883_TI;
#include "t3883MD.h"

extern TypeInfo t1268_TI;
extern MethodInfo m22141_MI;
extern MethodInfo m28512_MI;
struct t107;
 int32_t m28512 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22137_MI;
 void m22137 (t3883 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22138_MI;
 t5 * m22138 (t3883 * __this, MethodInfo* method){
	{
		int32_t L_0 = m22141(__this, &m22141_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1268_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22139_MI;
 void m22139 (t3883 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22140_MI;
 bool m22140 (t3883 * __this, MethodInfo* method){
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
 int32_t m22141 (t3883 * __this, MethodInfo* method){
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
		int32_t L_8 = m28512(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28512_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.X509.X509ChainStatusFlags>
extern Il2CppType t107_0_0_1;
FieldInfo t3883_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3883_TI, offsetof(t3883, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3883_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3883_TI, offsetof(t3883, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3883_FIs[] =
{
	&t3883_f0_FieldInfo,
	&t3883_f1_FieldInfo,
	NULL
};
static PropertyInfo t3883____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3883_TI, "System.Collections.IEnumerator.Current", &m22138_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3883____Current_PropertyInfo = 
{
	&t3883_TI, "Current", &m22141_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3883_PIs[] =
{
	&t3883____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3883____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3883_m22137_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22137_GM;
MethodInfo m22137_MI = 
{
	".ctor", (methodPointerType)&m22137, &t3883_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3883_m22137_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22137_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22138_GM;
MethodInfo m22138_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22138, &t3883_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22138_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22139_GM;
MethodInfo m22139_MI = 
{
	"Dispose", (methodPointerType)&m22139, &t3883_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22139_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22140_GM;
MethodInfo m22140_MI = 
{
	"MoveNext", (methodPointerType)&m22140, &t3883_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22140_GM};
extern Il2CppType t1268_0_0_0;
extern void* RuntimeInvoker_t1268 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22141_GM;
MethodInfo m22141_MI = 
{
	"get_Current", (methodPointerType)&m22141, &t3883_TI, &t1268_0_0_0, RuntimeInvoker_t1268, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22141_GM};
static MethodInfo* t3883_MIs[] =
{
	&m22137_MI,
	&m22138_MI,
	&m22139_MI,
	&m22140_MI,
	&m22141_MI,
	NULL
};
static MethodInfo* t3883_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22138_MI,
	&m22140_MI,
	&m22139_MI,
	&m22141_MI,
};
static TypeInfo* t3883_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5387_TI,
};
static Il2CppInterfaceOffsetPair t3883_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5387_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3883_0_0_0;
extern Il2CppType t3883_1_0_0;
extern Il2CppGenericClass t3883_GC;
TypeInfo t3883_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3883_MIs, t3883_PIs, t3883_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3883_TI, t3883_ITIs, t3883_VT, &EmptyCustomAttributesCache, &t3883_TI, &t3883_0_0_0, &t3883_1_0_0, t3883_IOs, &t3883_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3883)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6828_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.X509.X509ChainStatusFlags>
extern MethodInfo m36584_MI;
static PropertyInfo t6828____Count_PropertyInfo = 
{
	&t6828_TI, "Count", &m36584_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36585_MI;
static PropertyInfo t6828____IsReadOnly_PropertyInfo = 
{
	&t6828_TI, "IsReadOnly", &m36585_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6828_PIs[] =
{
	&t6828____Count_PropertyInfo,
	&t6828____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36584_GM;
MethodInfo m36584_MI = 
{
	"get_Count", NULL, &t6828_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36584_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36585_GM;
MethodInfo m36585_MI = 
{
	"get_IsReadOnly", NULL, &t6828_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36585_GM};
extern Il2CppType t1268_0_0_0;
extern Il2CppType t1268_0_0_0;
static ParameterInfo t6828_m36586_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36586_GM;
MethodInfo m36586_MI = 
{
	"Add", NULL, &t6828_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6828_m36586_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36586_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36587_GM;
MethodInfo m36587_MI = 
{
	"Clear", NULL, &t6828_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36587_GM};
extern Il2CppType t1268_0_0_0;
static ParameterInfo t6828_m36588_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36588_GM;
MethodInfo m36588_MI = 
{
	"Contains", NULL, &t6828_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6828_m36588_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36588_GM};
extern Il2CppType t4604_0_0_0;
extern Il2CppType t4604_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6828_m36589_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4604_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36589_GM;
MethodInfo m36589_MI = 
{
	"CopyTo", NULL, &t6828_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6828_m36589_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36589_GM};
extern Il2CppType t1268_0_0_0;
static ParameterInfo t6828_m36590_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36590_GM;
MethodInfo m36590_MI = 
{
	"Remove", NULL, &t6828_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6828_m36590_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36590_GM};
static MethodInfo* t6828_MIs[] =
{
	&m36584_MI,
	&m36585_MI,
	&m36586_MI,
	&m36587_MI,
	&m36588_MI,
	&m36589_MI,
	&m36590_MI,
	NULL
};
extern TypeInfo t6830_TI;
static TypeInfo* t6828_ITIs[] = 
{
	&t739_TI,
	&t6830_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6828_0_0_0;
extern Il2CppType t6828_1_0_0;
struct t6828;
extern Il2CppGenericClass t6828_GC;
TypeInfo t6828_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6828_MIs, t6828_PIs, NULL, NULL, NULL, NULL, NULL, &t6828_TI, t6828_ITIs, NULL, &EmptyCustomAttributesCache, &t6828_TI, &t6828_0_0_0, &t6828_1_0_0, NULL, &t6828_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.X509.X509ChainStatusFlags>
extern Il2CppType t5387_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36591_GM;
MethodInfo m36591_MI = 
{
	"GetEnumerator", NULL, &t6830_TI, &t5387_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36591_GM};
static MethodInfo* t6830_MIs[] =
{
	&m36591_MI,
	NULL
};
static TypeInfo* t6830_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6830_0_0_0;
extern Il2CppType t6830_1_0_0;
struct t6830;
extern Il2CppGenericClass t6830_GC;
TypeInfo t6830_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6830_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6830_TI, t6830_ITIs, NULL, &EmptyCustomAttributesCache, &t6830_TI, &t6830_0_0_0, &t6830_1_0_0, NULL, &t6830_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6829_TI;



// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.X509.X509ChainStatusFlags>
extern MethodInfo m36592_MI;
extern MethodInfo m36593_MI;
static PropertyInfo t6829____Item_PropertyInfo = 
{
	&t6829_TI, "Item", &m36592_MI, &m36593_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6829_PIs[] =
{
	&t6829____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1268_0_0_0;
static ParameterInfo t6829_m36594_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36594_GM;
MethodInfo m36594_MI = 
{
	"IndexOf", NULL, &t6829_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6829_m36594_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36594_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1268_0_0_0;
static ParameterInfo t6829_m36595_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36595_GM;
MethodInfo m36595_MI = 
{
	"Insert", NULL, &t6829_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6829_m36595_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36595_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6829_m36596_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36596_GM;
MethodInfo m36596_MI = 
{
	"RemoveAt", NULL, &t6829_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6829_m36596_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36596_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6829_m36592_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1268_0_0_0;
extern void* RuntimeInvoker_t1268_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36592_GM;
MethodInfo m36592_MI = 
{
	"get_Item", NULL, &t6829_TI, &t1268_0_0_0, RuntimeInvoker_t1268_t110, t6829_m36592_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36592_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1268_0_0_0;
static ParameterInfo t6829_m36593_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1268_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36593_GM;
MethodInfo m36593_MI = 
{
	"set_Item", NULL, &t6829_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6829_m36593_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36593_GM};
static MethodInfo* t6829_MIs[] =
{
	&m36594_MI,
	&m36595_MI,
	&m36596_MI,
	&m36592_MI,
	&m36593_MI,
	NULL
};
static TypeInfo* t6829_ITIs[] = 
{
	&t739_TI,
	&t6828_TI,
	&t6830_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6829_0_0_0;
extern Il2CppType t6829_1_0_0;
struct t6829;
extern Il2CppGenericClass t6829_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6829_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6829_MIs, t6829_PIs, NULL, NULL, NULL, NULL, NULL, &t6829_TI, t6829_ITIs, NULL, &t2240__CustomAttributeCache, &t6829_TI, &t6829_0_0_0, &t6829_1_0_0, NULL, &t6829_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5389_TI;

#include "t1272.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.X509.Extensions.KeyUsages>
extern MethodInfo m36597_MI;
static PropertyInfo t5389____Current_PropertyInfo = 
{
	&t5389_TI, "Current", &m36597_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5389_PIs[] =
{
	&t5389____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1272_0_0_0;
extern void* RuntimeInvoker_t1272 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36597_GM;
MethodInfo m36597_MI = 
{
	"get_Current", NULL, &t5389_TI, &t1272_0_0_0, RuntimeInvoker_t1272, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36597_GM};
static MethodInfo* t5389_MIs[] =
{
	&m36597_MI,
	NULL
};
static TypeInfo* t5389_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5389_0_0_0;
extern Il2CppType t5389_1_0_0;
struct t5389;
extern Il2CppGenericClass t5389_GC;
TypeInfo t5389_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5389_MIs, t5389_PIs, NULL, NULL, NULL, NULL, NULL, &t5389_TI, t5389_ITIs, NULL, &EmptyCustomAttributesCache, &t5389_TI, &t5389_0_0_0, &t5389_1_0_0, NULL, &t5389_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3884.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3884_TI;
#include "t3884MD.h"

extern TypeInfo t1272_TI;
extern MethodInfo m22146_MI;
extern MethodInfo m28523_MI;
struct t107;
 int32_t m28523 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22142_MI;
 void m22142 (t3884 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22143_MI;
 t5 * m22143 (t3884 * __this, MethodInfo* method){
	{
		int32_t L_0 = m22146(__this, &m22146_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1272_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22144_MI;
 void m22144 (t3884 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22145_MI;
 bool m22145 (t3884 * __this, MethodInfo* method){
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
 int32_t m22146 (t3884 * __this, MethodInfo* method){
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
		int32_t L_8 = m28523(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28523_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.KeyUsages>
extern Il2CppType t107_0_0_1;
FieldInfo t3884_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3884_TI, offsetof(t3884, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3884_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3884_TI, offsetof(t3884, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3884_FIs[] =
{
	&t3884_f0_FieldInfo,
	&t3884_f1_FieldInfo,
	NULL
};
static PropertyInfo t3884____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3884_TI, "System.Collections.IEnumerator.Current", &m22143_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3884____Current_PropertyInfo = 
{
	&t3884_TI, "Current", &m22146_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3884_PIs[] =
{
	&t3884____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3884____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3884_m22142_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22142_GM;
MethodInfo m22142_MI = 
{
	".ctor", (methodPointerType)&m22142, &t3884_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3884_m22142_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22142_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22143_GM;
MethodInfo m22143_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22143, &t3884_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22143_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22144_GM;
MethodInfo m22144_MI = 
{
	"Dispose", (methodPointerType)&m22144, &t3884_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22144_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22145_GM;
MethodInfo m22145_MI = 
{
	"MoveNext", (methodPointerType)&m22145, &t3884_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22145_GM};
extern Il2CppType t1272_0_0_0;
extern void* RuntimeInvoker_t1272 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22146_GM;
MethodInfo m22146_MI = 
{
	"get_Current", (methodPointerType)&m22146, &t3884_TI, &t1272_0_0_0, RuntimeInvoker_t1272, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22146_GM};
static MethodInfo* t3884_MIs[] =
{
	&m22142_MI,
	&m22143_MI,
	&m22144_MI,
	&m22145_MI,
	&m22146_MI,
	NULL
};
static MethodInfo* t3884_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22143_MI,
	&m22145_MI,
	&m22144_MI,
	&m22146_MI,
};
static TypeInfo* t3884_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5389_TI,
};
static Il2CppInterfaceOffsetPair t3884_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5389_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3884_0_0_0;
extern Il2CppType t3884_1_0_0;
extern Il2CppGenericClass t3884_GC;
TypeInfo t3884_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3884_MIs, t3884_PIs, t3884_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3884_TI, t3884_ITIs, t3884_VT, &EmptyCustomAttributesCache, &t3884_TI, &t3884_0_0_0, &t3884_1_0_0, t3884_IOs, &t3884_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3884)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6831_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.KeyUsages>
extern MethodInfo m36598_MI;
static PropertyInfo t6831____Count_PropertyInfo = 
{
	&t6831_TI, "Count", &m36598_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36599_MI;
static PropertyInfo t6831____IsReadOnly_PropertyInfo = 
{
	&t6831_TI, "IsReadOnly", &m36599_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6831_PIs[] =
{
	&t6831____Count_PropertyInfo,
	&t6831____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36598_GM;
MethodInfo m36598_MI = 
{
	"get_Count", NULL, &t6831_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36598_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36599_GM;
MethodInfo m36599_MI = 
{
	"get_IsReadOnly", NULL, &t6831_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36599_GM};
extern Il2CppType t1272_0_0_0;
extern Il2CppType t1272_0_0_0;
static ParameterInfo t6831_m36600_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1272_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36600_GM;
MethodInfo m36600_MI = 
{
	"Add", NULL, &t6831_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6831_m36600_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36600_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36601_GM;
MethodInfo m36601_MI = 
{
	"Clear", NULL, &t6831_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36601_GM};
extern Il2CppType t1272_0_0_0;
static ParameterInfo t6831_m36602_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1272_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36602_GM;
MethodInfo m36602_MI = 
{
	"Contains", NULL, &t6831_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6831_m36602_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36602_GM};
extern Il2CppType t4605_0_0_0;
extern Il2CppType t4605_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6831_m36603_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4605_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36603_GM;
MethodInfo m36603_MI = 
{
	"CopyTo", NULL, &t6831_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6831_m36603_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36603_GM};
extern Il2CppType t1272_0_0_0;
static ParameterInfo t6831_m36604_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1272_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36604_GM;
MethodInfo m36604_MI = 
{
	"Remove", NULL, &t6831_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6831_m36604_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36604_GM};
static MethodInfo* t6831_MIs[] =
{
	&m36598_MI,
	&m36599_MI,
	&m36600_MI,
	&m36601_MI,
	&m36602_MI,
	&m36603_MI,
	&m36604_MI,
	NULL
};
extern TypeInfo t6833_TI;
static TypeInfo* t6831_ITIs[] = 
{
	&t739_TI,
	&t6833_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6831_0_0_0;
extern Il2CppType t6831_1_0_0;
struct t6831;
extern Il2CppGenericClass t6831_GC;
TypeInfo t6831_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6831_MIs, t6831_PIs, NULL, NULL, NULL, NULL, NULL, &t6831_TI, t6831_ITIs, NULL, &EmptyCustomAttributesCache, &t6831_TI, &t6831_0_0_0, &t6831_1_0_0, NULL, &t6831_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.X509.Extensions.KeyUsages>
extern Il2CppType t5389_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36605_GM;
MethodInfo m36605_MI = 
{
	"GetEnumerator", NULL, &t6833_TI, &t5389_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36605_GM};
static MethodInfo* t6833_MIs[] =
{
	&m36605_MI,
	NULL
};
static TypeInfo* t6833_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6833_0_0_0;
extern Il2CppType t6833_1_0_0;
struct t6833;
extern Il2CppGenericClass t6833_GC;
TypeInfo t6833_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6833_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6833_TI, t6833_ITIs, NULL, &EmptyCustomAttributesCache, &t6833_TI, &t6833_0_0_0, &t6833_1_0_0, NULL, &t6833_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6832_TI;



// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.X509.Extensions.KeyUsages>
extern MethodInfo m36606_MI;
extern MethodInfo m36607_MI;
static PropertyInfo t6832____Item_PropertyInfo = 
{
	&t6832_TI, "Item", &m36606_MI, &m36607_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6832_PIs[] =
{
	&t6832____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1272_0_0_0;
static ParameterInfo t6832_m36608_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1272_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36608_GM;
MethodInfo m36608_MI = 
{
	"IndexOf", NULL, &t6832_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6832_m36608_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36608_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1272_0_0_0;
static ParameterInfo t6832_m36609_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1272_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36609_GM;
MethodInfo m36609_MI = 
{
	"Insert", NULL, &t6832_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6832_m36609_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36609_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6832_m36610_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36610_GM;
MethodInfo m36610_MI = 
{
	"RemoveAt", NULL, &t6832_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6832_m36610_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36610_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6832_m36606_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1272_0_0_0;
extern void* RuntimeInvoker_t1272_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36606_GM;
MethodInfo m36606_MI = 
{
	"get_Item", NULL, &t6832_TI, &t1272_0_0_0, RuntimeInvoker_t1272_t110, t6832_m36606_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36606_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1272_0_0_0;
static ParameterInfo t6832_m36607_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1272_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36607_GM;
MethodInfo m36607_MI = 
{
	"set_Item", NULL, &t6832_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6832_m36607_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36607_GM};
static MethodInfo* t6832_MIs[] =
{
	&m36608_MI,
	&m36609_MI,
	&m36610_MI,
	&m36606_MI,
	&m36607_MI,
	NULL
};
static TypeInfo* t6832_ITIs[] = 
{
	&t739_TI,
	&t6831_TI,
	&t6833_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6832_0_0_0;
extern Il2CppType t6832_1_0_0;
struct t6832;
extern Il2CppGenericClass t6832_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6832_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6832_MIs, t6832_PIs, NULL, NULL, NULL, NULL, NULL, &t6832_TI, t6832_ITIs, NULL, &t2240__CustomAttributeCache, &t6832_TI, &t6832_0_0_0, &t6832_1_0_0, NULL, &t6832_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5391_TI;

#include "t1274.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>
extern MethodInfo m36611_MI;
static PropertyInfo t5391____Current_PropertyInfo = 
{
	&t5391_TI, "Current", &m36611_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5391_PIs[] =
{
	&t5391____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1274_0_0_0;
extern void* RuntimeInvoker_t1274 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36611_GM;
MethodInfo m36611_MI = 
{
	"get_Current", NULL, &t5391_TI, &t1274_0_0_0, RuntimeInvoker_t1274, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36611_GM};
static MethodInfo* t5391_MIs[] =
{
	&m36611_MI,
	NULL
};
static TypeInfo* t5391_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5391_0_0_0;
extern Il2CppType t5391_1_0_0;
struct t5391;
extern Il2CppGenericClass t5391_GC;
TypeInfo t5391_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5391_MIs, t5391_PIs, NULL, NULL, NULL, NULL, NULL, &t5391_TI, t5391_ITIs, NULL, &EmptyCustomAttributesCache, &t5391_TI, &t5391_0_0_0, &t5391_1_0_0, NULL, &t5391_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3885.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3885_TI;
#include "t3885MD.h"

extern TypeInfo t1274_TI;
extern MethodInfo m22151_MI;
extern MethodInfo m28534_MI;
struct t107;
 int32_t m28534 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22147_MI;
 void m22147 (t3885 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22148_MI;
 t5 * m22148 (t3885 * __this, MethodInfo* method){
	{
		int32_t L_0 = m22151(__this, &m22151_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1274_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22149_MI;
 void m22149 (t3885 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22150_MI;
 bool m22150 (t3885 * __this, MethodInfo* method){
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
 int32_t m22151 (t3885 * __this, MethodInfo* method){
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
		int32_t L_8 = m28534(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28534_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>
extern Il2CppType t107_0_0_1;
FieldInfo t3885_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3885_TI, offsetof(t3885, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3885_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3885_TI, offsetof(t3885, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3885_FIs[] =
{
	&t3885_f0_FieldInfo,
	&t3885_f1_FieldInfo,
	NULL
};
static PropertyInfo t3885____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3885_TI, "System.Collections.IEnumerator.Current", &m22148_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3885____Current_PropertyInfo = 
{
	&t3885_TI, "Current", &m22151_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3885_PIs[] =
{
	&t3885____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3885____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3885_m22147_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22147_GM;
MethodInfo m22147_MI = 
{
	".ctor", (methodPointerType)&m22147, &t3885_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3885_m22147_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22147_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22148_GM;
MethodInfo m22148_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22148, &t3885_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22148_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22149_GM;
MethodInfo m22149_MI = 
{
	"Dispose", (methodPointerType)&m22149, &t3885_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22149_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22150_GM;
MethodInfo m22150_MI = 
{
	"MoveNext", (methodPointerType)&m22150, &t3885_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22150_GM};
extern Il2CppType t1274_0_0_0;
extern void* RuntimeInvoker_t1274 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22151_GM;
MethodInfo m22151_MI = 
{
	"get_Current", (methodPointerType)&m22151, &t3885_TI, &t1274_0_0_0, RuntimeInvoker_t1274, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22151_GM};
static MethodInfo* t3885_MIs[] =
{
	&m22147_MI,
	&m22148_MI,
	&m22149_MI,
	&m22150_MI,
	&m22151_MI,
	NULL
};
static MethodInfo* t3885_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22148_MI,
	&m22150_MI,
	&m22149_MI,
	&m22151_MI,
};
static TypeInfo* t3885_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5391_TI,
};
static Il2CppInterfaceOffsetPair t3885_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5391_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3885_0_0_0;
extern Il2CppType t3885_1_0_0;
extern Il2CppGenericClass t3885_GC;
TypeInfo t3885_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3885_MIs, t3885_PIs, t3885_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3885_TI, t3885_ITIs, t3885_VT, &EmptyCustomAttributesCache, &t3885_TI, &t3885_0_0_0, &t3885_1_0_0, t3885_IOs, &t3885_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3885)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6834_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>
extern MethodInfo m36612_MI;
static PropertyInfo t6834____Count_PropertyInfo = 
{
	&t6834_TI, "Count", &m36612_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36613_MI;
static PropertyInfo t6834____IsReadOnly_PropertyInfo = 
{
	&t6834_TI, "IsReadOnly", &m36613_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6834_PIs[] =
{
	&t6834____Count_PropertyInfo,
	&t6834____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36612_GM;
MethodInfo m36612_MI = 
{
	"get_Count", NULL, &t6834_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36612_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36613_GM;
MethodInfo m36613_MI = 
{
	"get_IsReadOnly", NULL, &t6834_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36613_GM};
extern Il2CppType t1274_0_0_0;
extern Il2CppType t1274_0_0_0;
static ParameterInfo t6834_m36614_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1274_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36614_GM;
MethodInfo m36614_MI = 
{
	"Add", NULL, &t6834_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6834_m36614_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36614_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36615_GM;
MethodInfo m36615_MI = 
{
	"Clear", NULL, &t6834_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36615_GM};
extern Il2CppType t1274_0_0_0;
static ParameterInfo t6834_m36616_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1274_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36616_GM;
MethodInfo m36616_MI = 
{
	"Contains", NULL, &t6834_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6834_m36616_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36616_GM};
extern Il2CppType t4606_0_0_0;
extern Il2CppType t4606_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6834_m36617_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4606_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36617_GM;
MethodInfo m36617_MI = 
{
	"CopyTo", NULL, &t6834_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6834_m36617_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36617_GM};
extern Il2CppType t1274_0_0_0;
static ParameterInfo t6834_m36618_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1274_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36618_GM;
MethodInfo m36618_MI = 
{
	"Remove", NULL, &t6834_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6834_m36618_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36618_GM};
static MethodInfo* t6834_MIs[] =
{
	&m36612_MI,
	&m36613_MI,
	&m36614_MI,
	&m36615_MI,
	&m36616_MI,
	&m36617_MI,
	&m36618_MI,
	NULL
};
extern TypeInfo t6836_TI;
static TypeInfo* t6834_ITIs[] = 
{
	&t739_TI,
	&t6836_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6834_0_0_0;
extern Il2CppType t6834_1_0_0;
struct t6834;
extern Il2CppGenericClass t6834_GC;
TypeInfo t6834_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6834_MIs, t6834_PIs, NULL, NULL, NULL, NULL, NULL, &t6834_TI, t6834_ITIs, NULL, &EmptyCustomAttributesCache, &t6834_TI, &t6834_0_0_0, &t6834_1_0_0, NULL, &t6834_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>
extern Il2CppType t5391_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36619_GM;
MethodInfo m36619_MI = 
{
	"GetEnumerator", NULL, &t6836_TI, &t5391_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36619_GM};
static MethodInfo* t6836_MIs[] =
{
	&m36619_MI,
	NULL
};
static TypeInfo* t6836_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6836_0_0_0;
extern Il2CppType t6836_1_0_0;
struct t6836;
extern Il2CppGenericClass t6836_GC;
TypeInfo t6836_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6836_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6836_TI, t6836_ITIs, NULL, &EmptyCustomAttributesCache, &t6836_TI, &t6836_0_0_0, &t6836_1_0_0, NULL, &t6836_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6835_TI;



// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>
extern MethodInfo m36620_MI;
extern MethodInfo m36621_MI;
static PropertyInfo t6835____Item_PropertyInfo = 
{
	&t6835_TI, "Item", &m36620_MI, &m36621_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6835_PIs[] =
{
	&t6835____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1274_0_0_0;
static ParameterInfo t6835_m36622_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1274_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36622_GM;
MethodInfo m36622_MI = 
{
	"IndexOf", NULL, &t6835_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6835_m36622_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36622_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1274_0_0_0;
static ParameterInfo t6835_m36623_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1274_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36623_GM;
MethodInfo m36623_MI = 
{
	"Insert", NULL, &t6835_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6835_m36623_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36623_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6835_m36624_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36624_GM;
MethodInfo m36624_MI = 
{
	"RemoveAt", NULL, &t6835_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6835_m36624_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36624_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6835_m36620_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1274_0_0_0;
extern void* RuntimeInvoker_t1274_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36620_GM;
MethodInfo m36620_MI = 
{
	"get_Item", NULL, &t6835_TI, &t1274_0_0_0, RuntimeInvoker_t1274_t110, t6835_m36620_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36620_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1274_0_0_0;
static ParameterInfo t6835_m36621_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1274_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36621_GM;
MethodInfo m36621_MI = 
{
	"set_Item", NULL, &t6835_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6835_m36621_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36621_GM};
static MethodInfo* t6835_MIs[] =
{
	&m36622_MI,
	&m36623_MI,
	&m36624_MI,
	&m36620_MI,
	&m36621_MI,
	NULL
};
static TypeInfo* t6835_ITIs[] = 
{
	&t739_TI,
	&t6834_TI,
	&t6836_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6835_0_0_0;
extern Il2CppType t6835_1_0_0;
struct t6835;
extern Il2CppGenericClass t6835_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6835_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6835_MIs, t6835_PIs, NULL, NULL, NULL, NULL, NULL, &t6835_TI, t6835_ITIs, NULL, &t2240__CustomAttributeCache, &t6835_TI, &t6835_0_0_0, &t6835_1_0_0, NULL, &t6835_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5393_TI;

#include "t1280.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.AlertLevel>
extern MethodInfo m36625_MI;
static PropertyInfo t5393____Current_PropertyInfo = 
{
	&t5393_TI, "Current", &m36625_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5393_PIs[] =
{
	&t5393____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1280_0_0_0;
extern void* RuntimeInvoker_t1280 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36625_GM;
MethodInfo m36625_MI = 
{
	"get_Current", NULL, &t5393_TI, &t1280_0_0_0, RuntimeInvoker_t1280, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36625_GM};
static MethodInfo* t5393_MIs[] =
{
	&m36625_MI,
	NULL
};
static TypeInfo* t5393_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5393_0_0_0;
extern Il2CppType t5393_1_0_0;
struct t5393;
extern Il2CppGenericClass t5393_GC;
TypeInfo t5393_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5393_MIs, t5393_PIs, NULL, NULL, NULL, NULL, NULL, &t5393_TI, t5393_ITIs, NULL, &EmptyCustomAttributesCache, &t5393_TI, &t5393_0_0_0, &t5393_1_0_0, NULL, &t5393_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3886.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3886_TI;
#include "t3886MD.h"

extern TypeInfo t1280_TI;
extern MethodInfo m22156_MI;
extern MethodInfo m28545_MI;
struct t107;
 uint8_t m28545 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22152_MI;
 void m22152 (t3886 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22153_MI;
 t5 * m22153 (t3886 * __this, MethodInfo* method){
	{
		uint8_t L_0 = m22156(__this, &m22156_MI);
		uint8_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1280_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22154_MI;
 void m22154 (t3886 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22155_MI;
 bool m22155 (t3886 * __this, MethodInfo* method){
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
 uint8_t m22156 (t3886 * __this, MethodInfo* method){
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
		uint8_t L_8 = m28545(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28545_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertLevel>
extern Il2CppType t107_0_0_1;
FieldInfo t3886_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3886_TI, offsetof(t3886, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3886_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3886_TI, offsetof(t3886, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3886_FIs[] =
{
	&t3886_f0_FieldInfo,
	&t3886_f1_FieldInfo,
	NULL
};
static PropertyInfo t3886____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3886_TI, "System.Collections.IEnumerator.Current", &m22153_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3886____Current_PropertyInfo = 
{
	&t3886_TI, "Current", &m22156_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3886_PIs[] =
{
	&t3886____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3886____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3886_m22152_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22152_GM;
MethodInfo m22152_MI = 
{
	".ctor", (methodPointerType)&m22152, &t3886_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3886_m22152_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22152_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22153_GM;
MethodInfo m22153_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22153, &t3886_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22153_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22154_GM;
MethodInfo m22154_MI = 
{
	"Dispose", (methodPointerType)&m22154, &t3886_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22154_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22155_GM;
MethodInfo m22155_MI = 
{
	"MoveNext", (methodPointerType)&m22155, &t3886_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22155_GM};
extern Il2CppType t1280_0_0_0;
extern void* RuntimeInvoker_t1280 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22156_GM;
MethodInfo m22156_MI = 
{
	"get_Current", (methodPointerType)&m22156, &t3886_TI, &t1280_0_0_0, RuntimeInvoker_t1280, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22156_GM};
static MethodInfo* t3886_MIs[] =
{
	&m22152_MI,
	&m22153_MI,
	&m22154_MI,
	&m22155_MI,
	&m22156_MI,
	NULL
};
static MethodInfo* t3886_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22153_MI,
	&m22155_MI,
	&m22154_MI,
	&m22156_MI,
};
static TypeInfo* t3886_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5393_TI,
};
static Il2CppInterfaceOffsetPair t3886_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5393_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3886_0_0_0;
extern Il2CppType t3886_1_0_0;
extern Il2CppGenericClass t3886_GC;
TypeInfo t3886_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3886_MIs, t3886_PIs, t3886_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3886_TI, t3886_ITIs, t3886_VT, &EmptyCustomAttributesCache, &t3886_TI, &t3886_0_0_0, &t3886_1_0_0, t3886_IOs, &t3886_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3886)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6837_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertLevel>
extern MethodInfo m36626_MI;
static PropertyInfo t6837____Count_PropertyInfo = 
{
	&t6837_TI, "Count", &m36626_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36627_MI;
static PropertyInfo t6837____IsReadOnly_PropertyInfo = 
{
	&t6837_TI, "IsReadOnly", &m36627_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6837_PIs[] =
{
	&t6837____Count_PropertyInfo,
	&t6837____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36626_GM;
MethodInfo m36626_MI = 
{
	"get_Count", NULL, &t6837_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36626_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36627_GM;
MethodInfo m36627_MI = 
{
	"get_IsReadOnly", NULL, &t6837_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36627_GM};
extern Il2CppType t1280_0_0_0;
extern Il2CppType t1280_0_0_0;
static ParameterInfo t6837_m36628_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1280_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36628_GM;
MethodInfo m36628_MI = 
{
	"Add", NULL, &t6837_TI, &t109_0_0_0, RuntimeInvoker_t109_t494, t6837_m36628_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36628_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36629_GM;
MethodInfo m36629_MI = 
{
	"Clear", NULL, &t6837_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36629_GM};
extern Il2CppType t1280_0_0_0;
static ParameterInfo t6837_m36630_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1280_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36630_GM;
MethodInfo m36630_MI = 
{
	"Contains", NULL, &t6837_TI, &t108_0_0_0, RuntimeInvoker_t108_t494, t6837_m36630_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36630_GM};
extern Il2CppType t4607_0_0_0;
extern Il2CppType t4607_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6837_m36631_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4607_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36631_GM;
MethodInfo m36631_MI = 
{
	"CopyTo", NULL, &t6837_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6837_m36631_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36631_GM};
extern Il2CppType t1280_0_0_0;
static ParameterInfo t6837_m36632_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1280_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36632_GM;
MethodInfo m36632_MI = 
{
	"Remove", NULL, &t6837_TI, &t108_0_0_0, RuntimeInvoker_t108_t494, t6837_m36632_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36632_GM};
static MethodInfo* t6837_MIs[] =
{
	&m36626_MI,
	&m36627_MI,
	&m36628_MI,
	&m36629_MI,
	&m36630_MI,
	&m36631_MI,
	&m36632_MI,
	NULL
};
extern TypeInfo t6839_TI;
static TypeInfo* t6837_ITIs[] = 
{
	&t739_TI,
	&t6839_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6837_0_0_0;
extern Il2CppType t6837_1_0_0;
struct t6837;
extern Il2CppGenericClass t6837_GC;
TypeInfo t6837_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6837_MIs, t6837_PIs, NULL, NULL, NULL, NULL, NULL, &t6837_TI, t6837_ITIs, NULL, &EmptyCustomAttributesCache, &t6837_TI, &t6837_0_0_0, &t6837_1_0_0, NULL, &t6837_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.AlertLevel>
extern Il2CppType t5393_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36633_GM;
MethodInfo m36633_MI = 
{
	"GetEnumerator", NULL, &t6839_TI, &t5393_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36633_GM};
static MethodInfo* t6839_MIs[] =
{
	&m36633_MI,
	NULL
};
static TypeInfo* t6839_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6839_0_0_0;
extern Il2CppType t6839_1_0_0;
struct t6839;
extern Il2CppGenericClass t6839_GC;
TypeInfo t6839_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6839_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6839_TI, t6839_ITIs, NULL, &EmptyCustomAttributesCache, &t6839_TI, &t6839_0_0_0, &t6839_1_0_0, NULL, &t6839_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6838_TI;



// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertLevel>
extern MethodInfo m36634_MI;
extern MethodInfo m36635_MI;
static PropertyInfo t6838____Item_PropertyInfo = 
{
	&t6838_TI, "Item", &m36634_MI, &m36635_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6838_PIs[] =
{
	&t6838____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1280_0_0_0;
static ParameterInfo t6838_m36636_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1280_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36636_GM;
MethodInfo m36636_MI = 
{
	"IndexOf", NULL, &t6838_TI, &t110_0_0_0, RuntimeInvoker_t110_t494, t6838_m36636_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36636_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1280_0_0_0;
static ParameterInfo t6838_m36637_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1280_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36637_GM;
MethodInfo m36637_MI = 
{
	"Insert", NULL, &t6838_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t494, t6838_m36637_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36637_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6838_m36638_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36638_GM;
MethodInfo m36638_MI = 
{
	"RemoveAt", NULL, &t6838_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6838_m36638_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36638_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6838_m36634_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1280_0_0_0;
extern void* RuntimeInvoker_t1280_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36634_GM;
MethodInfo m36634_MI = 
{
	"get_Item", NULL, &t6838_TI, &t1280_0_0_0, RuntimeInvoker_t1280_t110, t6838_m36634_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36634_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1280_0_0_0;
static ParameterInfo t6838_m36635_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1280_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36635_GM;
MethodInfo m36635_MI = 
{
	"set_Item", NULL, &t6838_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t494, t6838_m36635_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36635_GM};
static MethodInfo* t6838_MIs[] =
{
	&m36636_MI,
	&m36637_MI,
	&m36638_MI,
	&m36634_MI,
	&m36635_MI,
	NULL
};
static TypeInfo* t6838_ITIs[] = 
{
	&t739_TI,
	&t6837_TI,
	&t6839_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6838_0_0_0;
extern Il2CppType t6838_1_0_0;
struct t6838;
extern Il2CppGenericClass t6838_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6838_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6838_MIs, t6838_PIs, NULL, NULL, NULL, NULL, NULL, &t6838_TI, t6838_ITIs, NULL, &t2240__CustomAttributeCache, &t6838_TI, &t6838_0_0_0, &t6838_1_0_0, NULL, &t6838_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5395_TI;

#include "t1281.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>
extern MethodInfo m36639_MI;
static PropertyInfo t5395____Current_PropertyInfo = 
{
	&t5395_TI, "Current", &m36639_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5395_PIs[] =
{
	&t5395____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1281_0_0_0;
extern void* RuntimeInvoker_t1281 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36639_GM;
MethodInfo m36639_MI = 
{
	"get_Current", NULL, &t5395_TI, &t1281_0_0_0, RuntimeInvoker_t1281, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36639_GM};
static MethodInfo* t5395_MIs[] =
{
	&m36639_MI,
	NULL
};
static TypeInfo* t5395_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5395_0_0_0;
extern Il2CppType t5395_1_0_0;
struct t5395;
extern Il2CppGenericClass t5395_GC;
TypeInfo t5395_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5395_MIs, t5395_PIs, NULL, NULL, NULL, NULL, NULL, &t5395_TI, t5395_ITIs, NULL, &EmptyCustomAttributesCache, &t5395_TI, &t5395_0_0_0, &t5395_1_0_0, NULL, &t5395_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3887.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3887_TI;
#include "t3887MD.h"

extern TypeInfo t1281_TI;
extern MethodInfo m22161_MI;
extern MethodInfo m28556_MI;
struct t107;
 uint8_t m28556 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22157_MI;
 void m22157 (t3887 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22158_MI;
 t5 * m22158 (t3887 * __this, MethodInfo* method){
	{
		uint8_t L_0 = m22161(__this, &m22161_MI);
		uint8_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1281_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22159_MI;
 void m22159 (t3887 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22160_MI;
 bool m22160 (t3887 * __this, MethodInfo* method){
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
 uint8_t m22161 (t3887 * __this, MethodInfo* method){
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
		uint8_t L_8 = m28556(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28556_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>
extern Il2CppType t107_0_0_1;
FieldInfo t3887_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3887_TI, offsetof(t3887, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3887_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3887_TI, offsetof(t3887, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3887_FIs[] =
{
	&t3887_f0_FieldInfo,
	&t3887_f1_FieldInfo,
	NULL
};
static PropertyInfo t3887____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3887_TI, "System.Collections.IEnumerator.Current", &m22158_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3887____Current_PropertyInfo = 
{
	&t3887_TI, "Current", &m22161_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3887_PIs[] =
{
	&t3887____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3887____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3887_m22157_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22157_GM;
MethodInfo m22157_MI = 
{
	".ctor", (methodPointerType)&m22157, &t3887_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3887_m22157_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22157_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22158_GM;
MethodInfo m22158_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22158, &t3887_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22158_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22159_GM;
MethodInfo m22159_MI = 
{
	"Dispose", (methodPointerType)&m22159, &t3887_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22159_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22160_GM;
MethodInfo m22160_MI = 
{
	"MoveNext", (methodPointerType)&m22160, &t3887_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22160_GM};
extern Il2CppType t1281_0_0_0;
extern void* RuntimeInvoker_t1281 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22161_GM;
MethodInfo m22161_MI = 
{
	"get_Current", (methodPointerType)&m22161, &t3887_TI, &t1281_0_0_0, RuntimeInvoker_t1281, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22161_GM};
static MethodInfo* t3887_MIs[] =
{
	&m22157_MI,
	&m22158_MI,
	&m22159_MI,
	&m22160_MI,
	&m22161_MI,
	NULL
};
static MethodInfo* t3887_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22158_MI,
	&m22160_MI,
	&m22159_MI,
	&m22161_MI,
};
static TypeInfo* t3887_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5395_TI,
};
static Il2CppInterfaceOffsetPair t3887_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5395_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3887_0_0_0;
extern Il2CppType t3887_1_0_0;
extern Il2CppGenericClass t3887_GC;
TypeInfo t3887_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3887_MIs, t3887_PIs, t3887_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3887_TI, t3887_ITIs, t3887_VT, &EmptyCustomAttributesCache, &t3887_TI, &t3887_0_0_0, &t3887_1_0_0, t3887_IOs, &t3887_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3887)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6840_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>
extern MethodInfo m36640_MI;
static PropertyInfo t6840____Count_PropertyInfo = 
{
	&t6840_TI, "Count", &m36640_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36641_MI;
static PropertyInfo t6840____IsReadOnly_PropertyInfo = 
{
	&t6840_TI, "IsReadOnly", &m36641_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6840_PIs[] =
{
	&t6840____Count_PropertyInfo,
	&t6840____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36640_GM;
MethodInfo m36640_MI = 
{
	"get_Count", NULL, &t6840_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36640_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36641_GM;
MethodInfo m36641_MI = 
{
	"get_IsReadOnly", NULL, &t6840_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36641_GM};
extern Il2CppType t1281_0_0_0;
extern Il2CppType t1281_0_0_0;
static ParameterInfo t6840_m36642_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1281_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36642_GM;
MethodInfo m36642_MI = 
{
	"Add", NULL, &t6840_TI, &t109_0_0_0, RuntimeInvoker_t109_t494, t6840_m36642_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36642_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36643_GM;
MethodInfo m36643_MI = 
{
	"Clear", NULL, &t6840_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36643_GM};
extern Il2CppType t1281_0_0_0;
static ParameterInfo t6840_m36644_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1281_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36644_GM;
MethodInfo m36644_MI = 
{
	"Contains", NULL, &t6840_TI, &t108_0_0_0, RuntimeInvoker_t108_t494, t6840_m36644_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36644_GM};
extern Il2CppType t4608_0_0_0;
extern Il2CppType t4608_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6840_m36645_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4608_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36645_GM;
MethodInfo m36645_MI = 
{
	"CopyTo", NULL, &t6840_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6840_m36645_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36645_GM};
extern Il2CppType t1281_0_0_0;
static ParameterInfo t6840_m36646_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1281_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36646_GM;
MethodInfo m36646_MI = 
{
	"Remove", NULL, &t6840_TI, &t108_0_0_0, RuntimeInvoker_t108_t494, t6840_m36646_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36646_GM};
static MethodInfo* t6840_MIs[] =
{
	&m36640_MI,
	&m36641_MI,
	&m36642_MI,
	&m36643_MI,
	&m36644_MI,
	&m36645_MI,
	&m36646_MI,
	NULL
};
extern TypeInfo t6842_TI;
static TypeInfo* t6840_ITIs[] = 
{
	&t739_TI,
	&t6842_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6840_0_0_0;
extern Il2CppType t6840_1_0_0;
struct t6840;
extern Il2CppGenericClass t6840_GC;
TypeInfo t6840_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6840_MIs, t6840_PIs, NULL, NULL, NULL, NULL, NULL, &t6840_TI, t6840_ITIs, NULL, &EmptyCustomAttributesCache, &t6840_TI, &t6840_0_0_0, &t6840_1_0_0, NULL, &t6840_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.AlertDescription>
extern Il2CppType t5395_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36647_GM;
MethodInfo m36647_MI = 
{
	"GetEnumerator", NULL, &t6842_TI, &t5395_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36647_GM};
static MethodInfo* t6842_MIs[] =
{
	&m36647_MI,
	NULL
};
static TypeInfo* t6842_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6842_0_0_0;
extern Il2CppType t6842_1_0_0;
struct t6842;
extern Il2CppGenericClass t6842_GC;
TypeInfo t6842_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6842_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6842_TI, t6842_ITIs, NULL, &EmptyCustomAttributesCache, &t6842_TI, &t6842_0_0_0, &t6842_1_0_0, NULL, &t6842_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6841_TI;



// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertDescription>
extern MethodInfo m36648_MI;
extern MethodInfo m36649_MI;
static PropertyInfo t6841____Item_PropertyInfo = 
{
	&t6841_TI, "Item", &m36648_MI, &m36649_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6841_PIs[] =
{
	&t6841____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1281_0_0_0;
static ParameterInfo t6841_m36650_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1281_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36650_GM;
MethodInfo m36650_MI = 
{
	"IndexOf", NULL, &t6841_TI, &t110_0_0_0, RuntimeInvoker_t110_t494, t6841_m36650_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36650_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1281_0_0_0;
static ParameterInfo t6841_m36651_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1281_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36651_GM;
MethodInfo m36651_MI = 
{
	"Insert", NULL, &t6841_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t494, t6841_m36651_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36651_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6841_m36652_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36652_GM;
MethodInfo m36652_MI = 
{
	"RemoveAt", NULL, &t6841_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6841_m36652_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36652_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6841_m36648_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1281_0_0_0;
extern void* RuntimeInvoker_t1281_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36648_GM;
MethodInfo m36648_MI = 
{
	"get_Item", NULL, &t6841_TI, &t1281_0_0_0, RuntimeInvoker_t1281_t110, t6841_m36648_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36648_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1281_0_0_0;
static ParameterInfo t6841_m36649_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1281_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36649_GM;
MethodInfo m36649_MI = 
{
	"set_Item", NULL, &t6841_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t494, t6841_m36649_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36649_GM};
static MethodInfo* t6841_MIs[] =
{
	&m36650_MI,
	&m36651_MI,
	&m36652_MI,
	&m36648_MI,
	&m36649_MI,
	NULL
};
static TypeInfo* t6841_ITIs[] = 
{
	&t739_TI,
	&t6840_TI,
	&t6842_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6841_0_0_0;
extern Il2CppType t6841_1_0_0;
struct t6841;
extern Il2CppGenericClass t6841_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6841_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6841_MIs, t6841_PIs, NULL, NULL, NULL, NULL, NULL, &t6841_TI, t6841_ITIs, NULL, &t2240__CustomAttributeCache, &t6841_TI, &t6841_0_0_0, &t6841_1_0_0, NULL, &t6841_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5397_TI;

#include "t1283.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>
extern MethodInfo m36653_MI;
static PropertyInfo t5397____Current_PropertyInfo = 
{
	&t5397_TI, "Current", &m36653_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5397_PIs[] =
{
	&t5397____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1283_0_0_0;
extern void* RuntimeInvoker_t1283 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36653_GM;
MethodInfo m36653_MI = 
{
	"get_Current", NULL, &t5397_TI, &t1283_0_0_0, RuntimeInvoker_t1283, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36653_GM};
static MethodInfo* t5397_MIs[] =
{
	&m36653_MI,
	NULL
};
static TypeInfo* t5397_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5397_0_0_0;
extern Il2CppType t5397_1_0_0;
struct t5397;
extern Il2CppGenericClass t5397_GC;
TypeInfo t5397_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5397_MIs, t5397_PIs, NULL, NULL, NULL, NULL, NULL, &t5397_TI, t5397_ITIs, NULL, &EmptyCustomAttributesCache, &t5397_TI, &t5397_0_0_0, &t5397_1_0_0, NULL, &t5397_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3888.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3888_TI;
#include "t3888MD.h"

extern TypeInfo t1283_TI;
extern MethodInfo m22166_MI;
extern MethodInfo m28567_MI;
struct t107;
 int32_t m28567 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22162_MI;
 void m22162 (t3888 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22163_MI;
 t5 * m22163 (t3888 * __this, MethodInfo* method){
	{
		int32_t L_0 = m22166(__this, &m22166_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1283_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22164_MI;
 void m22164 (t3888 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22165_MI;
 bool m22165 (t3888 * __this, MethodInfo* method){
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
 int32_t m22166 (t3888 * __this, MethodInfo* method){
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
		int32_t L_8 = m28567(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28567_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>
extern Il2CppType t107_0_0_1;
FieldInfo t3888_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3888_TI, offsetof(t3888, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3888_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3888_TI, offsetof(t3888, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3888_FIs[] =
{
	&t3888_f0_FieldInfo,
	&t3888_f1_FieldInfo,
	NULL
};
static PropertyInfo t3888____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3888_TI, "System.Collections.IEnumerator.Current", &m22163_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3888____Current_PropertyInfo = 
{
	&t3888_TI, "Current", &m22166_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3888_PIs[] =
{
	&t3888____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3888____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3888_m22162_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22162_GM;
MethodInfo m22162_MI = 
{
	".ctor", (methodPointerType)&m22162, &t3888_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3888_m22162_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22162_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22163_GM;
MethodInfo m22163_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22163, &t3888_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22163_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22164_GM;
MethodInfo m22164_MI = 
{
	"Dispose", (methodPointerType)&m22164, &t3888_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22164_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22165_GM;
MethodInfo m22165_MI = 
{
	"MoveNext", (methodPointerType)&m22165, &t3888_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22165_GM};
extern Il2CppType t1283_0_0_0;
extern void* RuntimeInvoker_t1283 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22166_GM;
MethodInfo m22166_MI = 
{
	"get_Current", (methodPointerType)&m22166, &t3888_TI, &t1283_0_0_0, RuntimeInvoker_t1283, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22166_GM};
static MethodInfo* t3888_MIs[] =
{
	&m22162_MI,
	&m22163_MI,
	&m22164_MI,
	&m22165_MI,
	&m22166_MI,
	NULL
};
static MethodInfo* t3888_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22163_MI,
	&m22165_MI,
	&m22164_MI,
	&m22166_MI,
};
static TypeInfo* t3888_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5397_TI,
};
static Il2CppInterfaceOffsetPair t3888_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5397_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3888_0_0_0;
extern Il2CppType t3888_1_0_0;
extern Il2CppGenericClass t3888_GC;
TypeInfo t3888_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3888_MIs, t3888_PIs, t3888_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3888_TI, t3888_ITIs, t3888_VT, &EmptyCustomAttributesCache, &t3888_TI, &t3888_0_0_0, &t3888_1_0_0, t3888_IOs, &t3888_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3888)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6843_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>
extern MethodInfo m36654_MI;
static PropertyInfo t6843____Count_PropertyInfo = 
{
	&t6843_TI, "Count", &m36654_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36655_MI;
static PropertyInfo t6843____IsReadOnly_PropertyInfo = 
{
	&t6843_TI, "IsReadOnly", &m36655_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6843_PIs[] =
{
	&t6843____Count_PropertyInfo,
	&t6843____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36654_GM;
MethodInfo m36654_MI = 
{
	"get_Count", NULL, &t6843_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36654_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36655_GM;
MethodInfo m36655_MI = 
{
	"get_IsReadOnly", NULL, &t6843_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36655_GM};
extern Il2CppType t1283_0_0_0;
extern Il2CppType t1283_0_0_0;
static ParameterInfo t6843_m36656_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1283_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36656_GM;
MethodInfo m36656_MI = 
{
	"Add", NULL, &t6843_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6843_m36656_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36656_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36657_GM;
MethodInfo m36657_MI = 
{
	"Clear", NULL, &t6843_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36657_GM};
extern Il2CppType t1283_0_0_0;
static ParameterInfo t6843_m36658_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1283_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36658_GM;
MethodInfo m36658_MI = 
{
	"Contains", NULL, &t6843_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6843_m36658_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36658_GM};
extern Il2CppType t4609_0_0_0;
extern Il2CppType t4609_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6843_m36659_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4609_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36659_GM;
MethodInfo m36659_MI = 
{
	"CopyTo", NULL, &t6843_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6843_m36659_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36659_GM};
extern Il2CppType t1283_0_0_0;
static ParameterInfo t6843_m36660_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1283_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36660_GM;
MethodInfo m36660_MI = 
{
	"Remove", NULL, &t6843_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6843_m36660_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36660_GM};
static MethodInfo* t6843_MIs[] =
{
	&m36654_MI,
	&m36655_MI,
	&m36656_MI,
	&m36657_MI,
	&m36658_MI,
	&m36659_MI,
	&m36660_MI,
	NULL
};
extern TypeInfo t6845_TI;
static TypeInfo* t6843_ITIs[] = 
{
	&t739_TI,
	&t6845_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6843_0_0_0;
extern Il2CppType t6843_1_0_0;
struct t6843;
extern Il2CppGenericClass t6843_GC;
TypeInfo t6843_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6843_MIs, t6843_PIs, NULL, NULL, NULL, NULL, NULL, &t6843_TI, t6843_ITIs, NULL, &EmptyCustomAttributesCache, &t6843_TI, &t6843_0_0_0, &t6843_1_0_0, NULL, &t6843_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>
extern Il2CppType t5397_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36661_GM;
MethodInfo m36661_MI = 
{
	"GetEnumerator", NULL, &t6845_TI, &t5397_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36661_GM};
static MethodInfo* t6845_MIs[] =
{
	&m36661_MI,
	NULL
};
static TypeInfo* t6845_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6845_0_0_0;
extern Il2CppType t6845_1_0_0;
struct t6845;
extern Il2CppGenericClass t6845_GC;
TypeInfo t6845_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6845_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6845_TI, t6845_ITIs, NULL, &EmptyCustomAttributesCache, &t6845_TI, &t6845_0_0_0, &t6845_1_0_0, NULL, &t6845_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6844_TI;



// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>
extern MethodInfo m36662_MI;
extern MethodInfo m36663_MI;
static PropertyInfo t6844____Item_PropertyInfo = 
{
	&t6844_TI, "Item", &m36662_MI, &m36663_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6844_PIs[] =
{
	&t6844____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1283_0_0_0;
static ParameterInfo t6844_m36664_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1283_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36664_GM;
MethodInfo m36664_MI = 
{
	"IndexOf", NULL, &t6844_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6844_m36664_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36664_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1283_0_0_0;
static ParameterInfo t6844_m36665_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1283_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36665_GM;
MethodInfo m36665_MI = 
{
	"Insert", NULL, &t6844_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6844_m36665_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36665_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6844_m36666_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36666_GM;
MethodInfo m36666_MI = 
{
	"RemoveAt", NULL, &t6844_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6844_m36666_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36666_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6844_m36662_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1283_0_0_0;
extern void* RuntimeInvoker_t1283_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36662_GM;
MethodInfo m36662_MI = 
{
	"get_Item", NULL, &t6844_TI, &t1283_0_0_0, RuntimeInvoker_t1283_t110, t6844_m36662_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36662_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1283_0_0_0;
static ParameterInfo t6844_m36663_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1283_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36663_GM;
MethodInfo m36663_MI = 
{
	"set_Item", NULL, &t6844_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6844_m36663_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36663_GM};
static MethodInfo* t6844_MIs[] =
{
	&m36664_MI,
	&m36665_MI,
	&m36666_MI,
	&m36662_MI,
	&m36663_MI,
	NULL
};
static TypeInfo* t6844_ITIs[] = 
{
	&t739_TI,
	&t6843_TI,
	&t6845_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6844_0_0_0;
extern Il2CppType t6844_1_0_0;
struct t6844;
extern Il2CppGenericClass t6844_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6844_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6844_MIs, t6844_PIs, NULL, NULL, NULL, NULL, NULL, &t6844_TI, t6844_ITIs, NULL, &t2240__CustomAttributeCache, &t6844_TI, &t6844_0_0_0, &t6844_1_0_0, NULL, &t6844_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5398_TI;

#include "t494.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Byte[]>
extern MethodInfo m36667_MI;
static PropertyInfo t5398____Current_PropertyInfo = 
{
	&t5398_TI, "Current", &m36667_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5398_PIs[] =
{
	&t5398____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1044_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36667_GM;
MethodInfo m36667_MI = 
{
	"get_Current", NULL, &t5398_TI, &t1044_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36667_GM};
static MethodInfo* t5398_MIs[] =
{
	&m36667_MI,
	NULL
};
static TypeInfo* t5398_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5398_0_0_0;
extern Il2CppType t5398_1_0_0;
struct t5398;
extern Il2CppGenericClass t5398_GC;
TypeInfo t5398_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5398_MIs, t5398_PIs, NULL, NULL, NULL, NULL, NULL, &t5398_TI, t5398_ITIs, NULL, &EmptyCustomAttributesCache, &t5398_TI, &t5398_0_0_0, &t5398_1_0_0, NULL, &t5398_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3889.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3889_TI;
#include "t3889MD.h"

extern TypeInfo t1044_TI;
extern TypeInfo t494_TI;
extern MethodInfo m22171_MI;
extern MethodInfo m28578_MI;
struct t107;
#define m28578(__this, p0, method) (t1044*)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Byte[]>
extern Il2CppType t107_0_0_1;
FieldInfo t3889_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3889_TI, offsetof(t3889, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3889_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3889_TI, offsetof(t3889, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3889_FIs[] =
{
	&t3889_f0_FieldInfo,
	&t3889_f1_FieldInfo,
	NULL
};
extern MethodInfo m22168_MI;
static PropertyInfo t3889____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3889_TI, "System.Collections.IEnumerator.Current", &m22168_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3889____Current_PropertyInfo = 
{
	&t3889_TI, "Current", &m22171_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3889_PIs[] =
{
	&t3889____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3889____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3889_m22167_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22167_GM;
MethodInfo m22167_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3889_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3889_m22167_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22167_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22168_GM;
MethodInfo m22168_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3889_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22168_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22169_GM;
MethodInfo m22169_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3889_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22169_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22170_GM;
MethodInfo m22170_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3889_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22170_GM};
extern Il2CppType t1044_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22171_GM;
MethodInfo m22171_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3889_TI, &t1044_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22171_GM};
static MethodInfo* t3889_MIs[] =
{
	&m22167_MI,
	&m22168_MI,
	&m22169_MI,
	&m22170_MI,
	&m22171_MI,
	NULL
};
extern MethodInfo m22170_MI;
extern MethodInfo m22169_MI;
static MethodInfo* t3889_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22168_MI,
	&m22170_MI,
	&m22169_MI,
	&m22171_MI,
};
static TypeInfo* t3889_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5398_TI,
};
static Il2CppInterfaceOffsetPair t3889_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5398_TI, 7},
};
extern TypeInfo t1044_TI;
static Il2CppRGCTXData t3889_RGCTXData[3] = 
{
	&m22171_MI/* Method Usage */,
	&t1044_TI/* Class Usage */,
	&m28578_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3889_0_0_0;
extern Il2CppType t3889_1_0_0;
extern Il2CppGenericClass t3889_GC;
TypeInfo t3889_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3889_MIs, t3889_PIs, t3889_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3889_TI, t3889_ITIs, t3889_VT, &EmptyCustomAttributesCache, &t3889_TI, &t3889_0_0_0, &t3889_1_0_0, t3889_IOs, &t3889_GC, NULL, NULL, NULL, t3889_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3889)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6846_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Byte[]>
extern MethodInfo m36668_MI;
static PropertyInfo t6846____Count_PropertyInfo = 
{
	&t6846_TI, "Count", &m36668_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36669_MI;
static PropertyInfo t6846____IsReadOnly_PropertyInfo = 
{
	&t6846_TI, "IsReadOnly", &m36669_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6846_PIs[] =
{
	&t6846____Count_PropertyInfo,
	&t6846____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36668_GM;
MethodInfo m36668_MI = 
{
	"get_Count", NULL, &t6846_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36668_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36669_GM;
MethodInfo m36669_MI = 
{
	"get_IsReadOnly", NULL, &t6846_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36669_GM};
extern Il2CppType t1044_0_0_0;
extern Il2CppType t1044_0_0_0;
static ParameterInfo t6846_m36670_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1044_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36670_GM;
MethodInfo m36670_MI = 
{
	"Add", NULL, &t6846_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6846_m36670_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36670_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36671_GM;
MethodInfo m36671_MI = 
{
	"Clear", NULL, &t6846_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36671_GM};
extern Il2CppType t1044_0_0_0;
static ParameterInfo t6846_m36672_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1044_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36672_GM;
MethodInfo m36672_MI = 
{
	"Contains", NULL, &t6846_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6846_m36672_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36672_GM};
extern Il2CppType t1378_0_0_0;
extern Il2CppType t1378_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6846_m36673_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1378_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36673_GM;
MethodInfo m36673_MI = 
{
	"CopyTo", NULL, &t6846_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6846_m36673_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36673_GM};
extern Il2CppType t1044_0_0_0;
static ParameterInfo t6846_m36674_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1044_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36674_GM;
MethodInfo m36674_MI = 
{
	"Remove", NULL, &t6846_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6846_m36674_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36674_GM};
static MethodInfo* t6846_MIs[] =
{
	&m36668_MI,
	&m36669_MI,
	&m36670_MI,
	&m36671_MI,
	&m36672_MI,
	&m36673_MI,
	&m36674_MI,
	NULL
};
extern TypeInfo t6848_TI;
static TypeInfo* t6846_ITIs[] = 
{
	&t739_TI,
	&t6848_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6846_0_0_0;
extern Il2CppType t6846_1_0_0;
struct t6846;
extern Il2CppGenericClass t6846_GC;
TypeInfo t6846_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6846_MIs, t6846_PIs, NULL, NULL, NULL, NULL, NULL, &t6846_TI, t6846_ITIs, NULL, &EmptyCustomAttributesCache, &t6846_TI, &t6846_0_0_0, &t6846_1_0_0, NULL, &t6846_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Byte[]>
extern Il2CppType t5398_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36675_GM;
MethodInfo m36675_MI = 
{
	"GetEnumerator", NULL, &t6848_TI, &t5398_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36675_GM};
static MethodInfo* t6848_MIs[] =
{
	&m36675_MI,
	NULL
};
static TypeInfo* t6848_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6848_0_0_0;
extern Il2CppType t6848_1_0_0;
struct t6848;
extern Il2CppGenericClass t6848_GC;
TypeInfo t6848_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6848_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6848_TI, t6848_ITIs, NULL, &EmptyCustomAttributesCache, &t6848_TI, &t6848_0_0_0, &t6848_1_0_0, NULL, &t6848_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6847_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Byte[]>
extern MethodInfo m36676_MI;
extern MethodInfo m36677_MI;
static PropertyInfo t6847____Item_PropertyInfo = 
{
	&t6847_TI, "Item", &m36676_MI, &m36677_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6847_PIs[] =
{
	&t6847____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1044_0_0_0;
static ParameterInfo t6847_m36678_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1044_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36678_GM;
MethodInfo m36678_MI = 
{
	"IndexOf", NULL, &t6847_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6847_m36678_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36678_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1044_0_0_0;
static ParameterInfo t6847_m36679_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1044_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36679_GM;
MethodInfo m36679_MI = 
{
	"Insert", NULL, &t6847_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6847_m36679_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36679_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6847_m36680_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36680_GM;
MethodInfo m36680_MI = 
{
	"RemoveAt", NULL, &t6847_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6847_m36680_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36680_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6847_m36676_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1044_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36676_GM;
MethodInfo m36676_MI = 
{
	"get_Item", NULL, &t6847_TI, &t1044_0_0_0, RuntimeInvoker_t5_t110, t6847_m36676_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36676_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1044_0_0_0;
static ParameterInfo t6847_m36677_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1044_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36677_GM;
MethodInfo m36677_MI = 
{
	"set_Item", NULL, &t6847_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6847_m36677_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36677_GM};
static MethodInfo* t6847_MIs[] =
{
	&m36678_MI,
	&m36679_MI,
	&m36680_MI,
	&m36676_MI,
	&m36677_MI,
	NULL
};
static TypeInfo* t6847_ITIs[] = 
{
	&t739_TI,
	&t6846_TI,
	&t6848_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6847_0_0_0;
extern Il2CppType t6847_1_0_0;
struct t6847;
extern Il2CppGenericClass t6847_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6847_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6847_MIs, t6847_PIs, NULL, NULL, NULL, NULL, NULL, &t6847_TI, t6847_ITIs, NULL, &t2240__CustomAttributeCache, &t6847_TI, &t6847_0_0_0, &t6847_1_0_0, NULL, &t6847_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5400_TI;

#include "t1289.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.ContentType>
extern MethodInfo m36681_MI;
static PropertyInfo t5400____Current_PropertyInfo = 
{
	&t5400_TI, "Current", &m36681_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5400_PIs[] =
{
	&t5400____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1289_0_0_0;
extern void* RuntimeInvoker_t1289 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36681_GM;
MethodInfo m36681_MI = 
{
	"get_Current", NULL, &t5400_TI, &t1289_0_0_0, RuntimeInvoker_t1289, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36681_GM};
static MethodInfo* t5400_MIs[] =
{
	&m36681_MI,
	NULL
};
static TypeInfo* t5400_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5400_0_0_0;
extern Il2CppType t5400_1_0_0;
struct t5400;
extern Il2CppGenericClass t5400_GC;
TypeInfo t5400_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5400_MIs, t5400_PIs, NULL, NULL, NULL, NULL, NULL, &t5400_TI, t5400_ITIs, NULL, &EmptyCustomAttributesCache, &t5400_TI, &t5400_0_0_0, &t5400_1_0_0, NULL, &t5400_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3890.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3890_TI;
#include "t3890MD.h"

extern TypeInfo t1289_TI;
extern MethodInfo m22176_MI;
extern MethodInfo m28589_MI;
struct t107;
 uint8_t m28589 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22172_MI;
 void m22172 (t3890 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22173_MI;
 t5 * m22173 (t3890 * __this, MethodInfo* method){
	{
		uint8_t L_0 = m22176(__this, &m22176_MI);
		uint8_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1289_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22174_MI;
 void m22174 (t3890 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22175_MI;
 bool m22175 (t3890 * __this, MethodInfo* method){
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
 uint8_t m22176 (t3890 * __this, MethodInfo* method){
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
		uint8_t L_8 = m28589(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28589_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>
extern Il2CppType t107_0_0_1;
FieldInfo t3890_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3890_TI, offsetof(t3890, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3890_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3890_TI, offsetof(t3890, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3890_FIs[] =
{
	&t3890_f0_FieldInfo,
	&t3890_f1_FieldInfo,
	NULL
};
static PropertyInfo t3890____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3890_TI, "System.Collections.IEnumerator.Current", &m22173_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3890____Current_PropertyInfo = 
{
	&t3890_TI, "Current", &m22176_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3890_PIs[] =
{
	&t3890____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3890____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3890_m22172_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22172_GM;
MethodInfo m22172_MI = 
{
	".ctor", (methodPointerType)&m22172, &t3890_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3890_m22172_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22172_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22173_GM;
MethodInfo m22173_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22173, &t3890_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22173_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22174_GM;
MethodInfo m22174_MI = 
{
	"Dispose", (methodPointerType)&m22174, &t3890_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22174_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22175_GM;
MethodInfo m22175_MI = 
{
	"MoveNext", (methodPointerType)&m22175, &t3890_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22175_GM};
extern Il2CppType t1289_0_0_0;
extern void* RuntimeInvoker_t1289 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22176_GM;
MethodInfo m22176_MI = 
{
	"get_Current", (methodPointerType)&m22176, &t3890_TI, &t1289_0_0_0, RuntimeInvoker_t1289, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22176_GM};
static MethodInfo* t3890_MIs[] =
{
	&m22172_MI,
	&m22173_MI,
	&m22174_MI,
	&m22175_MI,
	&m22176_MI,
	NULL
};
static MethodInfo* t3890_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22173_MI,
	&m22175_MI,
	&m22174_MI,
	&m22176_MI,
};
static TypeInfo* t3890_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5400_TI,
};
static Il2CppInterfaceOffsetPair t3890_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5400_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3890_0_0_0;
extern Il2CppType t3890_1_0_0;
extern Il2CppGenericClass t3890_GC;
TypeInfo t3890_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3890_MIs, t3890_PIs, t3890_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3890_TI, t3890_ITIs, t3890_VT, &EmptyCustomAttributesCache, &t3890_TI, &t3890_0_0_0, &t3890_1_0_0, t3890_IOs, &t3890_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3890)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6849_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>
extern MethodInfo m36682_MI;
static PropertyInfo t6849____Count_PropertyInfo = 
{
	&t6849_TI, "Count", &m36682_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36683_MI;
static PropertyInfo t6849____IsReadOnly_PropertyInfo = 
{
	&t6849_TI, "IsReadOnly", &m36683_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6849_PIs[] =
{
	&t6849____Count_PropertyInfo,
	&t6849____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36682_GM;
MethodInfo m36682_MI = 
{
	"get_Count", NULL, &t6849_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36682_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36683_GM;
MethodInfo m36683_MI = 
{
	"get_IsReadOnly", NULL, &t6849_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36683_GM};
extern Il2CppType t1289_0_0_0;
extern Il2CppType t1289_0_0_0;
static ParameterInfo t6849_m36684_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1289_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36684_GM;
MethodInfo m36684_MI = 
{
	"Add", NULL, &t6849_TI, &t109_0_0_0, RuntimeInvoker_t109_t494, t6849_m36684_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36684_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36685_GM;
MethodInfo m36685_MI = 
{
	"Clear", NULL, &t6849_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36685_GM};
extern Il2CppType t1289_0_0_0;
static ParameterInfo t6849_m36686_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1289_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36686_GM;
MethodInfo m36686_MI = 
{
	"Contains", NULL, &t6849_TI, &t108_0_0_0, RuntimeInvoker_t108_t494, t6849_m36686_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36686_GM};
extern Il2CppType t4610_0_0_0;
extern Il2CppType t4610_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6849_m36687_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4610_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36687_GM;
MethodInfo m36687_MI = 
{
	"CopyTo", NULL, &t6849_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6849_m36687_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36687_GM};
extern Il2CppType t1289_0_0_0;
static ParameterInfo t6849_m36688_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1289_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36688_GM;
MethodInfo m36688_MI = 
{
	"Remove", NULL, &t6849_TI, &t108_0_0_0, RuntimeInvoker_t108_t494, t6849_m36688_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36688_GM};
static MethodInfo* t6849_MIs[] =
{
	&m36682_MI,
	&m36683_MI,
	&m36684_MI,
	&m36685_MI,
	&m36686_MI,
	&m36687_MI,
	&m36688_MI,
	NULL
};
extern TypeInfo t6851_TI;
static TypeInfo* t6849_ITIs[] = 
{
	&t739_TI,
	&t6851_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6849_0_0_0;
extern Il2CppType t6849_1_0_0;
struct t6849;
extern Il2CppGenericClass t6849_GC;
TypeInfo t6849_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6849_MIs, t6849_PIs, NULL, NULL, NULL, NULL, NULL, &t6849_TI, t6849_ITIs, NULL, &EmptyCustomAttributesCache, &t6849_TI, &t6849_0_0_0, &t6849_1_0_0, NULL, &t6849_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.ContentType>
extern Il2CppType t5400_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36689_GM;
MethodInfo m36689_MI = 
{
	"GetEnumerator", NULL, &t6851_TI, &t5400_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36689_GM};
static MethodInfo* t6851_MIs[] =
{
	&m36689_MI,
	NULL
};
static TypeInfo* t6851_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6851_0_0_0;
extern Il2CppType t6851_1_0_0;
struct t6851;
extern Il2CppGenericClass t6851_GC;
TypeInfo t6851_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6851_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6851_TI, t6851_ITIs, NULL, &EmptyCustomAttributesCache, &t6851_TI, &t6851_0_0_0, &t6851_1_0_0, NULL, &t6851_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6850_TI;



// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ContentType>
extern MethodInfo m36690_MI;
extern MethodInfo m36691_MI;
static PropertyInfo t6850____Item_PropertyInfo = 
{
	&t6850_TI, "Item", &m36690_MI, &m36691_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6850_PIs[] =
{
	&t6850____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1289_0_0_0;
static ParameterInfo t6850_m36692_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1289_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36692_GM;
MethodInfo m36692_MI = 
{
	"IndexOf", NULL, &t6850_TI, &t110_0_0_0, RuntimeInvoker_t110_t494, t6850_m36692_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36692_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1289_0_0_0;
static ParameterInfo t6850_m36693_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1289_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36693_GM;
MethodInfo m36693_MI = 
{
	"Insert", NULL, &t6850_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t494, t6850_m36693_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36693_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6850_m36694_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36694_GM;
MethodInfo m36694_MI = 
{
	"RemoveAt", NULL, &t6850_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6850_m36694_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36694_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6850_m36690_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1289_0_0_0;
extern void* RuntimeInvoker_t1289_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36690_GM;
MethodInfo m36690_MI = 
{
	"get_Item", NULL, &t6850_TI, &t1289_0_0_0, RuntimeInvoker_t1289_t110, t6850_m36690_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36690_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1289_0_0_0;
static ParameterInfo t6850_m36691_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1289_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36691_GM;
MethodInfo m36691_MI = 
{
	"set_Item", NULL, &t6850_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t494, t6850_m36691_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36691_GM};
static MethodInfo* t6850_MIs[] =
{
	&m36692_MI,
	&m36693_MI,
	&m36694_MI,
	&m36690_MI,
	&m36691_MI,
	NULL
};
static TypeInfo* t6850_ITIs[] = 
{
	&t739_TI,
	&t6849_TI,
	&t6851_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6850_0_0_0;
extern Il2CppType t6850_1_0_0;
struct t6850;
extern Il2CppGenericClass t6850_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6850_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6850_MIs, t6850_PIs, NULL, NULL, NULL, NULL, NULL, &t6850_TI, t6850_ITIs, NULL, &t2240__CustomAttributeCache, &t6850_TI, &t6850_0_0_0, &t6850_1_0_0, NULL, &t6850_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5402_TI;

#include "t1287.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>
extern MethodInfo m36695_MI;
static PropertyInfo t5402____Current_PropertyInfo = 
{
	&t5402_TI, "Current", &m36695_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5402_PIs[] =
{
	&t5402____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1287_0_0_0;
extern void* RuntimeInvoker_t1287 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36695_GM;
MethodInfo m36695_MI = 
{
	"get_Current", NULL, &t5402_TI, &t1287_0_0_0, RuntimeInvoker_t1287, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36695_GM};
static MethodInfo* t5402_MIs[] =
{
	&m36695_MI,
	NULL
};
static TypeInfo* t5402_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5402_0_0_0;
extern Il2CppType t5402_1_0_0;
struct t5402;
extern Il2CppGenericClass t5402_GC;
TypeInfo t5402_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5402_MIs, t5402_PIs, NULL, NULL, NULL, NULL, NULL, &t5402_TI, t5402_ITIs, NULL, &EmptyCustomAttributesCache, &t5402_TI, &t5402_0_0_0, &t5402_1_0_0, NULL, &t5402_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3891.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3891_TI;
#include "t3891MD.h"

extern TypeInfo t1287_TI;
extern MethodInfo m22181_MI;
extern MethodInfo m28600_MI;
struct t107;
 int32_t m28600 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22177_MI;
 void m22177 (t3891 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22178_MI;
 t5 * m22178 (t3891 * __this, MethodInfo* method){
	{
		int32_t L_0 = m22181(__this, &m22181_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1287_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22179_MI;
 void m22179 (t3891 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22180_MI;
 bool m22180 (t3891 * __this, MethodInfo* method){
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
 int32_t m22181 (t3891 * __this, MethodInfo* method){
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
		int32_t L_8 = m28600(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28600_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>
extern Il2CppType t107_0_0_1;
FieldInfo t3891_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3891_TI, offsetof(t3891, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3891_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3891_TI, offsetof(t3891, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3891_FIs[] =
{
	&t3891_f0_FieldInfo,
	&t3891_f1_FieldInfo,
	NULL
};
static PropertyInfo t3891____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3891_TI, "System.Collections.IEnumerator.Current", &m22178_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3891____Current_PropertyInfo = 
{
	&t3891_TI, "Current", &m22181_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3891_PIs[] =
{
	&t3891____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3891____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3891_m22177_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22177_GM;
MethodInfo m22177_MI = 
{
	".ctor", (methodPointerType)&m22177, &t3891_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3891_m22177_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22177_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22178_GM;
MethodInfo m22178_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22178, &t3891_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22178_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22179_GM;
MethodInfo m22179_MI = 
{
	"Dispose", (methodPointerType)&m22179, &t3891_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22179_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22180_GM;
MethodInfo m22180_MI = 
{
	"MoveNext", (methodPointerType)&m22180, &t3891_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22180_GM};
extern Il2CppType t1287_0_0_0;
extern void* RuntimeInvoker_t1287 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22181_GM;
MethodInfo m22181_MI = 
{
	"get_Current", (methodPointerType)&m22181, &t3891_TI, &t1287_0_0_0, RuntimeInvoker_t1287, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22181_GM};
static MethodInfo* t3891_MIs[] =
{
	&m22177_MI,
	&m22178_MI,
	&m22179_MI,
	&m22180_MI,
	&m22181_MI,
	NULL
};
static MethodInfo* t3891_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22178_MI,
	&m22180_MI,
	&m22179_MI,
	&m22181_MI,
};
static TypeInfo* t3891_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5402_TI,
};
static Il2CppInterfaceOffsetPair t3891_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5402_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3891_0_0_0;
extern Il2CppType t3891_1_0_0;
extern Il2CppGenericClass t3891_GC;
TypeInfo t3891_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3891_MIs, t3891_PIs, t3891_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3891_TI, t3891_ITIs, t3891_VT, &EmptyCustomAttributesCache, &t3891_TI, &t3891_0_0_0, &t3891_1_0_0, t3891_IOs, &t3891_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3891)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6852_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>
extern MethodInfo m36696_MI;
static PropertyInfo t6852____Count_PropertyInfo = 
{
	&t6852_TI, "Count", &m36696_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36697_MI;
static PropertyInfo t6852____IsReadOnly_PropertyInfo = 
{
	&t6852_TI, "IsReadOnly", &m36697_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6852_PIs[] =
{
	&t6852____Count_PropertyInfo,
	&t6852____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36696_GM;
MethodInfo m36696_MI = 
{
	"get_Count", NULL, &t6852_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36696_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36697_GM;
MethodInfo m36697_MI = 
{
	"get_IsReadOnly", NULL, &t6852_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36697_GM};
extern Il2CppType t1287_0_0_0;
extern Il2CppType t1287_0_0_0;
static ParameterInfo t6852_m36698_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1287_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36698_GM;
MethodInfo m36698_MI = 
{
	"Add", NULL, &t6852_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6852_m36698_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36698_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36699_GM;
MethodInfo m36699_MI = 
{
	"Clear", NULL, &t6852_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36699_GM};
extern Il2CppType t1287_0_0_0;
static ParameterInfo t6852_m36700_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1287_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36700_GM;
MethodInfo m36700_MI = 
{
	"Contains", NULL, &t6852_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6852_m36700_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36700_GM};
extern Il2CppType t4611_0_0_0;
extern Il2CppType t4611_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6852_m36701_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4611_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36701_GM;
MethodInfo m36701_MI = 
{
	"CopyTo", NULL, &t6852_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6852_m36701_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36701_GM};
extern Il2CppType t1287_0_0_0;
static ParameterInfo t6852_m36702_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1287_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36702_GM;
MethodInfo m36702_MI = 
{
	"Remove", NULL, &t6852_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6852_m36702_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36702_GM};
static MethodInfo* t6852_MIs[] =
{
	&m36696_MI,
	&m36697_MI,
	&m36698_MI,
	&m36699_MI,
	&m36700_MI,
	&m36701_MI,
	&m36702_MI,
	NULL
};
extern TypeInfo t6854_TI;
static TypeInfo* t6852_ITIs[] = 
{
	&t739_TI,
	&t6854_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6852_0_0_0;
extern Il2CppType t6852_1_0_0;
struct t6852;
extern Il2CppGenericClass t6852_GC;
TypeInfo t6852_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6852_MIs, t6852_PIs, NULL, NULL, NULL, NULL, NULL, &t6852_TI, t6852_ITIs, NULL, &EmptyCustomAttributesCache, &t6852_TI, &t6852_0_0_0, &t6852_1_0_0, NULL, &t6852_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>
extern Il2CppType t5402_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36703_GM;
MethodInfo m36703_MI = 
{
	"GetEnumerator", NULL, &t6854_TI, &t5402_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36703_GM};
static MethodInfo* t6854_MIs[] =
{
	&m36703_MI,
	NULL
};
static TypeInfo* t6854_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6854_0_0_0;
extern Il2CppType t6854_1_0_0;
struct t6854;
extern Il2CppGenericClass t6854_GC;
TypeInfo t6854_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6854_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6854_TI, t6854_ITIs, NULL, &EmptyCustomAttributesCache, &t6854_TI, &t6854_0_0_0, &t6854_1_0_0, NULL, &t6854_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6853_TI;



// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>
extern MethodInfo m36704_MI;
extern MethodInfo m36705_MI;
static PropertyInfo t6853____Item_PropertyInfo = 
{
	&t6853_TI, "Item", &m36704_MI, &m36705_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6853_PIs[] =
{
	&t6853____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1287_0_0_0;
static ParameterInfo t6853_m36706_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1287_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36706_GM;
MethodInfo m36706_MI = 
{
	"IndexOf", NULL, &t6853_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6853_m36706_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36706_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1287_0_0_0;
static ParameterInfo t6853_m36707_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1287_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36707_GM;
MethodInfo m36707_MI = 
{
	"Insert", NULL, &t6853_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6853_m36707_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36707_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6853_m36708_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36708_GM;
MethodInfo m36708_MI = 
{
	"RemoveAt", NULL, &t6853_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6853_m36708_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36708_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6853_m36704_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1287_0_0_0;
extern void* RuntimeInvoker_t1287_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36704_GM;
MethodInfo m36704_MI = 
{
	"get_Item", NULL, &t6853_TI, &t1287_0_0_0, RuntimeInvoker_t1287_t110, t6853_m36704_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36704_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1287_0_0_0;
static ParameterInfo t6853_m36705_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1287_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36705_GM;
MethodInfo m36705_MI = 
{
	"set_Item", NULL, &t6853_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6853_m36705_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36705_GM};
static MethodInfo* t6853_MIs[] =
{
	&m36706_MI,
	&m36707_MI,
	&m36708_MI,
	&m36704_MI,
	&m36705_MI,
	NULL
};
static TypeInfo* t6853_ITIs[] = 
{
	&t739_TI,
	&t6852_TI,
	&t6854_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6853_0_0_0;
extern Il2CppType t6853_1_0_0;
struct t6853;
extern Il2CppGenericClass t6853_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6853_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6853_MIs, t6853_PIs, NULL, NULL, NULL, NULL, NULL, &t6853_TI, t6853_ITIs, NULL, &t2240__CustomAttributeCache, &t6853_TI, &t6853_0_0_0, &t6853_1_0_0, NULL, &t6853_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5404_TI;

#include "t1308.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>
extern MethodInfo m36709_MI;
static PropertyInfo t5404____Current_PropertyInfo = 
{
	&t5404_TI, "Current", &m36709_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5404_PIs[] =
{
	&t5404____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1308_0_0_0;
extern void* RuntimeInvoker_t1308 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36709_GM;
MethodInfo m36709_MI = 
{
	"get_Current", NULL, &t5404_TI, &t1308_0_0_0, RuntimeInvoker_t1308, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36709_GM};
static MethodInfo* t5404_MIs[] =
{
	&m36709_MI,
	NULL
};
static TypeInfo* t5404_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5404_0_0_0;
extern Il2CppType t5404_1_0_0;
struct t5404;
extern Il2CppGenericClass t5404_GC;
TypeInfo t5404_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5404_MIs, t5404_PIs, NULL, NULL, NULL, NULL, NULL, &t5404_TI, t5404_ITIs, NULL, &EmptyCustomAttributesCache, &t5404_TI, &t5404_0_0_0, &t5404_1_0_0, NULL, &t5404_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3892.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3892_TI;
#include "t3892MD.h"

extern TypeInfo t1308_TI;
extern MethodInfo m22186_MI;
extern MethodInfo m28611_MI;
struct t107;
 int32_t m28611 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22182_MI;
 void m22182 (t3892 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22183_MI;
 t5 * m22183 (t3892 * __this, MethodInfo* method){
	{
		int32_t L_0 = m22186(__this, &m22186_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1308_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22184_MI;
 void m22184 (t3892 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22185_MI;
 bool m22185 (t3892 * __this, MethodInfo* method){
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
 int32_t m22186 (t3892 * __this, MethodInfo* method){
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
		int32_t L_8 = m28611(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28611_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>
extern Il2CppType t107_0_0_1;
FieldInfo t3892_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3892_TI, offsetof(t3892, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3892_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3892_TI, offsetof(t3892, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3892_FIs[] =
{
	&t3892_f0_FieldInfo,
	&t3892_f1_FieldInfo,
	NULL
};
static PropertyInfo t3892____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3892_TI, "System.Collections.IEnumerator.Current", &m22183_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3892____Current_PropertyInfo = 
{
	&t3892_TI, "Current", &m22186_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3892_PIs[] =
{
	&t3892____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3892____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3892_m22182_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22182_GM;
MethodInfo m22182_MI = 
{
	".ctor", (methodPointerType)&m22182, &t3892_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3892_m22182_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22182_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22183_GM;
MethodInfo m22183_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22183, &t3892_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22183_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22184_GM;
MethodInfo m22184_MI = 
{
	"Dispose", (methodPointerType)&m22184, &t3892_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22184_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22185_GM;
MethodInfo m22185_MI = 
{
	"MoveNext", (methodPointerType)&m22185, &t3892_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22185_GM};
extern Il2CppType t1308_0_0_0;
extern void* RuntimeInvoker_t1308 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22186_GM;
MethodInfo m22186_MI = 
{
	"get_Current", (methodPointerType)&m22186, &t3892_TI, &t1308_0_0_0, RuntimeInvoker_t1308, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22186_GM};
static MethodInfo* t3892_MIs[] =
{
	&m22182_MI,
	&m22183_MI,
	&m22184_MI,
	&m22185_MI,
	&m22186_MI,
	NULL
};
static MethodInfo* t3892_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22183_MI,
	&m22185_MI,
	&m22184_MI,
	&m22186_MI,
};
static TypeInfo* t3892_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5404_TI,
};
static Il2CppInterfaceOffsetPair t3892_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5404_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3892_0_0_0;
extern Il2CppType t3892_1_0_0;
extern Il2CppGenericClass t3892_GC;
TypeInfo t3892_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3892_MIs, t3892_PIs, t3892_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3892_TI, t3892_ITIs, t3892_VT, &EmptyCustomAttributesCache, &t3892_TI, &t3892_0_0_0, &t3892_1_0_0, t3892_IOs, &t3892_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3892)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6855_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>
extern MethodInfo m36710_MI;
static PropertyInfo t6855____Count_PropertyInfo = 
{
	&t6855_TI, "Count", &m36710_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36711_MI;
static PropertyInfo t6855____IsReadOnly_PropertyInfo = 
{
	&t6855_TI, "IsReadOnly", &m36711_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6855_PIs[] =
{
	&t6855____Count_PropertyInfo,
	&t6855____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36710_GM;
MethodInfo m36710_MI = 
{
	"get_Count", NULL, &t6855_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36710_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36711_GM;
MethodInfo m36711_MI = 
{
	"get_IsReadOnly", NULL, &t6855_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36711_GM};
extern Il2CppType t1308_0_0_0;
extern Il2CppType t1308_0_0_0;
static ParameterInfo t6855_m36712_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1308_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36712_GM;
MethodInfo m36712_MI = 
{
	"Add", NULL, &t6855_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6855_m36712_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36712_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36713_GM;
MethodInfo m36713_MI = 
{
	"Clear", NULL, &t6855_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36713_GM};
extern Il2CppType t1308_0_0_0;
static ParameterInfo t6855_m36714_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1308_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36714_GM;
MethodInfo m36714_MI = 
{
	"Contains", NULL, &t6855_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6855_m36714_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36714_GM};
extern Il2CppType t4612_0_0_0;
extern Il2CppType t4612_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6855_m36715_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4612_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36715_GM;
MethodInfo m36715_MI = 
{
	"CopyTo", NULL, &t6855_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6855_m36715_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36715_GM};
extern Il2CppType t1308_0_0_0;
static ParameterInfo t6855_m36716_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1308_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36716_GM;
MethodInfo m36716_MI = 
{
	"Remove", NULL, &t6855_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6855_m36716_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36716_GM};
static MethodInfo* t6855_MIs[] =
{
	&m36710_MI,
	&m36711_MI,
	&m36712_MI,
	&m36713_MI,
	&m36714_MI,
	&m36715_MI,
	&m36716_MI,
	NULL
};
extern TypeInfo t6857_TI;
static TypeInfo* t6855_ITIs[] = 
{
	&t739_TI,
	&t6857_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6855_0_0_0;
extern Il2CppType t6855_1_0_0;
struct t6855;
extern Il2CppGenericClass t6855_GC;
TypeInfo t6855_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6855_MIs, t6855_PIs, NULL, NULL, NULL, NULL, NULL, &t6855_TI, t6855_ITIs, NULL, &EmptyCustomAttributesCache, &t6855_TI, &t6855_0_0_0, &t6855_1_0_0, NULL, &t6855_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.HandshakeState>
extern Il2CppType t5404_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36717_GM;
MethodInfo m36717_MI = 
{
	"GetEnumerator", NULL, &t6857_TI, &t5404_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36717_GM};
static MethodInfo* t6857_MIs[] =
{
	&m36717_MI,
	NULL
};
static TypeInfo* t6857_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6857_0_0_0;
extern Il2CppType t6857_1_0_0;
struct t6857;
extern Il2CppGenericClass t6857_GC;
TypeInfo t6857_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6857_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6857_TI, t6857_ITIs, NULL, &EmptyCustomAttributesCache, &t6857_TI, &t6857_0_0_0, &t6857_1_0_0, NULL, &t6857_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6856_TI;



// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HandshakeState>
extern MethodInfo m36718_MI;
extern MethodInfo m36719_MI;
static PropertyInfo t6856____Item_PropertyInfo = 
{
	&t6856_TI, "Item", &m36718_MI, &m36719_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6856_PIs[] =
{
	&t6856____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1308_0_0_0;
static ParameterInfo t6856_m36720_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1308_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36720_GM;
MethodInfo m36720_MI = 
{
	"IndexOf", NULL, &t6856_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6856_m36720_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36720_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1308_0_0_0;
static ParameterInfo t6856_m36721_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1308_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36721_GM;
MethodInfo m36721_MI = 
{
	"Insert", NULL, &t6856_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6856_m36721_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36721_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6856_m36722_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36722_GM;
MethodInfo m36722_MI = 
{
	"RemoveAt", NULL, &t6856_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6856_m36722_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36722_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6856_m36718_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1308_0_0_0;
extern void* RuntimeInvoker_t1308_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36718_GM;
MethodInfo m36718_MI = 
{
	"get_Item", NULL, &t6856_TI, &t1308_0_0_0, RuntimeInvoker_t1308_t110, t6856_m36718_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36718_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1308_0_0_0;
static ParameterInfo t6856_m36719_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1308_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36719_GM;
MethodInfo m36719_MI = 
{
	"set_Item", NULL, &t6856_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6856_m36719_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36719_GM};
static MethodInfo* t6856_MIs[] =
{
	&m36720_MI,
	&m36721_MI,
	&m36722_MI,
	&m36718_MI,
	&m36719_MI,
	NULL
};
static TypeInfo* t6856_ITIs[] = 
{
	&t739_TI,
	&t6855_TI,
	&t6857_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6856_0_0_0;
extern Il2CppType t6856_1_0_0;
struct t6856;
extern Il2CppGenericClass t6856_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6856_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6856_MIs, t6856_PIs, NULL, NULL, NULL, NULL, NULL, &t6856_TI, t6856_ITIs, NULL, &t2240__CustomAttributeCache, &t6856_TI, &t6856_0_0_0, &t6856_1_0_0, NULL, &t6856_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5406_TI;

#include "t1286.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>
extern MethodInfo m36723_MI;
static PropertyInfo t5406____Current_PropertyInfo = 
{
	&t5406_TI, "Current", &m36723_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5406_PIs[] =
{
	&t5406____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1286_0_0_0;
extern void* RuntimeInvoker_t1286 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36723_GM;
MethodInfo m36723_MI = 
{
	"get_Current", NULL, &t5406_TI, &t1286_0_0_0, RuntimeInvoker_t1286, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36723_GM};
static MethodInfo* t5406_MIs[] =
{
	&m36723_MI,
	NULL
};
static TypeInfo* t5406_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5406_0_0_0;
extern Il2CppType t5406_1_0_0;
struct t5406;
extern Il2CppGenericClass t5406_GC;
TypeInfo t5406_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5406_MIs, t5406_PIs, NULL, NULL, NULL, NULL, NULL, &t5406_TI, t5406_ITIs, NULL, &EmptyCustomAttributesCache, &t5406_TI, &t5406_0_0_0, &t5406_1_0_0, NULL, &t5406_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3893.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3893_TI;
#include "t3893MD.h"

extern TypeInfo t1286_TI;
extern MethodInfo m22191_MI;
extern MethodInfo m28622_MI;
struct t107;
 int32_t m28622 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22187_MI;
 void m22187 (t3893 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22188_MI;
 t5 * m22188 (t3893 * __this, MethodInfo* method){
	{
		int32_t L_0 = m22191(__this, &m22191_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1286_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22189_MI;
 void m22189 (t3893 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22190_MI;
 bool m22190 (t3893 * __this, MethodInfo* method){
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
 int32_t m22191 (t3893 * __this, MethodInfo* method){
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
		int32_t L_8 = m28622(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28622_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>
extern Il2CppType t107_0_0_1;
FieldInfo t3893_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3893_TI, offsetof(t3893, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3893_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3893_TI, offsetof(t3893, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3893_FIs[] =
{
	&t3893_f0_FieldInfo,
	&t3893_f1_FieldInfo,
	NULL
};
static PropertyInfo t3893____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3893_TI, "System.Collections.IEnumerator.Current", &m22188_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3893____Current_PropertyInfo = 
{
	&t3893_TI, "Current", &m22191_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3893_PIs[] =
{
	&t3893____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3893____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3893_m22187_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22187_GM;
MethodInfo m22187_MI = 
{
	".ctor", (methodPointerType)&m22187, &t3893_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3893_m22187_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22187_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22188_GM;
MethodInfo m22188_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22188, &t3893_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22188_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22189_GM;
MethodInfo m22189_MI = 
{
	"Dispose", (methodPointerType)&m22189, &t3893_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22189_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22190_GM;
MethodInfo m22190_MI = 
{
	"MoveNext", (methodPointerType)&m22190, &t3893_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22190_GM};
extern Il2CppType t1286_0_0_0;
extern void* RuntimeInvoker_t1286 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22191_GM;
MethodInfo m22191_MI = 
{
	"get_Current", (methodPointerType)&m22191, &t3893_TI, &t1286_0_0_0, RuntimeInvoker_t1286, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22191_GM};
static MethodInfo* t3893_MIs[] =
{
	&m22187_MI,
	&m22188_MI,
	&m22189_MI,
	&m22190_MI,
	&m22191_MI,
	NULL
};
static MethodInfo* t3893_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22188_MI,
	&m22190_MI,
	&m22189_MI,
	&m22191_MI,
};
static TypeInfo* t3893_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5406_TI,
};
static Il2CppInterfaceOffsetPair t3893_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5406_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3893_0_0_0;
extern Il2CppType t3893_1_0_0;
extern Il2CppGenericClass t3893_GC;
TypeInfo t3893_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3893_MIs, t3893_PIs, t3893_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3893_TI, t3893_ITIs, t3893_VT, &EmptyCustomAttributesCache, &t3893_TI, &t3893_0_0_0, &t3893_1_0_0, t3893_IOs, &t3893_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3893)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6858_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>
extern MethodInfo m36724_MI;
static PropertyInfo t6858____Count_PropertyInfo = 
{
	&t6858_TI, "Count", &m36724_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36725_MI;
static PropertyInfo t6858____IsReadOnly_PropertyInfo = 
{
	&t6858_TI, "IsReadOnly", &m36725_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6858_PIs[] =
{
	&t6858____Count_PropertyInfo,
	&t6858____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36724_GM;
MethodInfo m36724_MI = 
{
	"get_Count", NULL, &t6858_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36724_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36725_GM;
MethodInfo m36725_MI = 
{
	"get_IsReadOnly", NULL, &t6858_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36725_GM};
extern Il2CppType t1286_0_0_0;
extern Il2CppType t1286_0_0_0;
static ParameterInfo t6858_m36726_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1286_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36726_GM;
MethodInfo m36726_MI = 
{
	"Add", NULL, &t6858_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6858_m36726_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36726_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36727_GM;
MethodInfo m36727_MI = 
{
	"Clear", NULL, &t6858_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36727_GM};
extern Il2CppType t1286_0_0_0;
static ParameterInfo t6858_m36728_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1286_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36728_GM;
MethodInfo m36728_MI = 
{
	"Contains", NULL, &t6858_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6858_m36728_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36728_GM};
extern Il2CppType t4613_0_0_0;
extern Il2CppType t4613_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6858_m36729_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4613_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36729_GM;
MethodInfo m36729_MI = 
{
	"CopyTo", NULL, &t6858_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6858_m36729_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36729_GM};
extern Il2CppType t1286_0_0_0;
static ParameterInfo t6858_m36730_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1286_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36730_GM;
MethodInfo m36730_MI = 
{
	"Remove", NULL, &t6858_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6858_m36730_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36730_GM};
static MethodInfo* t6858_MIs[] =
{
	&m36724_MI,
	&m36725_MI,
	&m36726_MI,
	&m36727_MI,
	&m36728_MI,
	&m36729_MI,
	&m36730_MI,
	NULL
};
extern TypeInfo t6860_TI;
static TypeInfo* t6858_ITIs[] = 
{
	&t739_TI,
	&t6860_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6858_0_0_0;
extern Il2CppType t6858_1_0_0;
struct t6858;
extern Il2CppGenericClass t6858_GC;
TypeInfo t6858_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6858_MIs, t6858_PIs, NULL, NULL, NULL, NULL, NULL, &t6858_TI, t6858_ITIs, NULL, &EmptyCustomAttributesCache, &t6858_TI, &t6858_0_0_0, &t6858_1_0_0, NULL, &t6858_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.HashAlgorithmType>
extern Il2CppType t5406_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36731_GM;
MethodInfo m36731_MI = 
{
	"GetEnumerator", NULL, &t6860_TI, &t5406_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36731_GM};
static MethodInfo* t6860_MIs[] =
{
	&m36731_MI,
	NULL
};
static TypeInfo* t6860_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6860_0_0_0;
extern Il2CppType t6860_1_0_0;
struct t6860;
extern Il2CppGenericClass t6860_GC;
TypeInfo t6860_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6860_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6860_TI, t6860_ITIs, NULL, &EmptyCustomAttributesCache, &t6860_TI, &t6860_0_0_0, &t6860_1_0_0, NULL, &t6860_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6859_TI;



// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HashAlgorithmType>
extern MethodInfo m36732_MI;
extern MethodInfo m36733_MI;
static PropertyInfo t6859____Item_PropertyInfo = 
{
	&t6859_TI, "Item", &m36732_MI, &m36733_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6859_PIs[] =
{
	&t6859____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1286_0_0_0;
static ParameterInfo t6859_m36734_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1286_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36734_GM;
MethodInfo m36734_MI = 
{
	"IndexOf", NULL, &t6859_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6859_m36734_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36734_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1286_0_0_0;
static ParameterInfo t6859_m36735_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1286_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36735_GM;
MethodInfo m36735_MI = 
{
	"Insert", NULL, &t6859_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6859_m36735_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36735_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6859_m36736_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36736_GM;
MethodInfo m36736_MI = 
{
	"RemoveAt", NULL, &t6859_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6859_m36736_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36736_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6859_m36732_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1286_0_0_0;
extern void* RuntimeInvoker_t1286_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36732_GM;
MethodInfo m36732_MI = 
{
	"get_Item", NULL, &t6859_TI, &t1286_0_0_0, RuntimeInvoker_t1286_t110, t6859_m36732_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36732_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1286_0_0_0;
static ParameterInfo t6859_m36733_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1286_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36733_GM;
MethodInfo m36733_MI = 
{
	"set_Item", NULL, &t6859_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6859_m36733_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36733_GM};
static MethodInfo* t6859_MIs[] =
{
	&m36734_MI,
	&m36735_MI,
	&m36736_MI,
	&m36732_MI,
	&m36733_MI,
	NULL
};
static TypeInfo* t6859_ITIs[] = 
{
	&t739_TI,
	&t6858_TI,
	&t6860_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6859_0_0_0;
extern Il2CppType t6859_1_0_0;
struct t6859;
extern Il2CppGenericClass t6859_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6859_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6859_MIs, t6859_PIs, NULL, NULL, NULL, NULL, NULL, &t6859_TI, t6859_ITIs, NULL, &t2240__CustomAttributeCache, &t6859_TI, &t6859_0_0_0, &t6859_1_0_0, NULL, &t6859_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5408_TI;

#include "t1307.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>
extern MethodInfo m36737_MI;
static PropertyInfo t5408____Current_PropertyInfo = 
{
	&t5408_TI, "Current", &m36737_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5408_PIs[] =
{
	&t5408____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1307_0_0_0;
extern void* RuntimeInvoker_t1307 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36737_GM;
MethodInfo m36737_MI = 
{
	"get_Current", NULL, &t5408_TI, &t1307_0_0_0, RuntimeInvoker_t1307, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36737_GM};
static MethodInfo* t5408_MIs[] =
{
	&m36737_MI,
	NULL
};
static TypeInfo* t5408_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5408_0_0_0;
extern Il2CppType t5408_1_0_0;
struct t5408;
extern Il2CppGenericClass t5408_GC;
TypeInfo t5408_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5408_MIs, t5408_PIs, NULL, NULL, NULL, NULL, NULL, &t5408_TI, t5408_ITIs, NULL, &EmptyCustomAttributesCache, &t5408_TI, &t5408_0_0_0, &t5408_1_0_0, NULL, &t5408_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3894.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3894_TI;
#include "t3894MD.h"

extern TypeInfo t1307_TI;
extern MethodInfo m22196_MI;
extern MethodInfo m28633_MI;
struct t107;
 int32_t m28633 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22192_MI;
 void m22192 (t3894 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22193_MI;
 t5 * m22193 (t3894 * __this, MethodInfo* method){
	{
		int32_t L_0 = m22196(__this, &m22196_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1307_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22194_MI;
 void m22194 (t3894 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22195_MI;
 bool m22195 (t3894 * __this, MethodInfo* method){
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
 int32_t m22196 (t3894 * __this, MethodInfo* method){
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
		int32_t L_8 = m28633(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28633_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>
extern Il2CppType t107_0_0_1;
FieldInfo t3894_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3894_TI, offsetof(t3894, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3894_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3894_TI, offsetof(t3894, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3894_FIs[] =
{
	&t3894_f0_FieldInfo,
	&t3894_f1_FieldInfo,
	NULL
};
static PropertyInfo t3894____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3894_TI, "System.Collections.IEnumerator.Current", &m22193_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3894____Current_PropertyInfo = 
{
	&t3894_TI, "Current", &m22196_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3894_PIs[] =
{
	&t3894____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3894____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3894_m22192_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22192_GM;
MethodInfo m22192_MI = 
{
	".ctor", (methodPointerType)&m22192, &t3894_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3894_m22192_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22192_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22193_GM;
MethodInfo m22193_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22193, &t3894_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22193_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22194_GM;
MethodInfo m22194_MI = 
{
	"Dispose", (methodPointerType)&m22194, &t3894_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22194_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22195_GM;
MethodInfo m22195_MI = 
{
	"MoveNext", (methodPointerType)&m22195, &t3894_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22195_GM};
extern Il2CppType t1307_0_0_0;
extern void* RuntimeInvoker_t1307 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22196_GM;
MethodInfo m22196_MI = 
{
	"get_Current", (methodPointerType)&m22196, &t3894_TI, &t1307_0_0_0, RuntimeInvoker_t1307, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22196_GM};
static MethodInfo* t3894_MIs[] =
{
	&m22192_MI,
	&m22193_MI,
	&m22194_MI,
	&m22195_MI,
	&m22196_MI,
	NULL
};
static MethodInfo* t3894_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22193_MI,
	&m22195_MI,
	&m22194_MI,
	&m22196_MI,
};
static TypeInfo* t3894_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5408_TI,
};
static Il2CppInterfaceOffsetPair t3894_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5408_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3894_0_0_0;
extern Il2CppType t3894_1_0_0;
extern Il2CppGenericClass t3894_GC;
TypeInfo t3894_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3894_MIs, t3894_PIs, t3894_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3894_TI, t3894_ITIs, t3894_VT, &EmptyCustomAttributesCache, &t3894_TI, &t3894_0_0_0, &t3894_1_0_0, t3894_IOs, &t3894_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3894)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6861_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>
extern MethodInfo m36738_MI;
static PropertyInfo t6861____Count_PropertyInfo = 
{
	&t6861_TI, "Count", &m36738_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36739_MI;
static PropertyInfo t6861____IsReadOnly_PropertyInfo = 
{
	&t6861_TI, "IsReadOnly", &m36739_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6861_PIs[] =
{
	&t6861____Count_PropertyInfo,
	&t6861____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36738_GM;
MethodInfo m36738_MI = 
{
	"get_Count", NULL, &t6861_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36738_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36739_GM;
MethodInfo m36739_MI = 
{
	"get_IsReadOnly", NULL, &t6861_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36739_GM};
extern Il2CppType t1307_0_0_0;
extern Il2CppType t1307_0_0_0;
static ParameterInfo t6861_m36740_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1307_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36740_GM;
MethodInfo m36740_MI = 
{
	"Add", NULL, &t6861_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6861_m36740_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36740_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36741_GM;
MethodInfo m36741_MI = 
{
	"Clear", NULL, &t6861_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36741_GM};
extern Il2CppType t1307_0_0_0;
static ParameterInfo t6861_m36742_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1307_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36742_GM;
MethodInfo m36742_MI = 
{
	"Contains", NULL, &t6861_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6861_m36742_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36742_GM};
extern Il2CppType t4614_0_0_0;
extern Il2CppType t4614_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6861_m36743_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4614_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36743_GM;
MethodInfo m36743_MI = 
{
	"CopyTo", NULL, &t6861_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6861_m36743_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36743_GM};
extern Il2CppType t1307_0_0_0;
static ParameterInfo t6861_m36744_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1307_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36744_GM;
MethodInfo m36744_MI = 
{
	"Remove", NULL, &t6861_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6861_m36744_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36744_GM};
static MethodInfo* t6861_MIs[] =
{
	&m36738_MI,
	&m36739_MI,
	&m36740_MI,
	&m36741_MI,
	&m36742_MI,
	&m36743_MI,
	&m36744_MI,
	NULL
};
extern TypeInfo t6863_TI;
static TypeInfo* t6861_ITIs[] = 
{
	&t739_TI,
	&t6863_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6861_0_0_0;
extern Il2CppType t6861_1_0_0;
struct t6861;
extern Il2CppGenericClass t6861_GC;
TypeInfo t6861_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6861_MIs, t6861_PIs, NULL, NULL, NULL, NULL, NULL, &t6861_TI, t6861_ITIs, NULL, &EmptyCustomAttributesCache, &t6861_TI, &t6861_0_0_0, &t6861_1_0_0, NULL, &t6861_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.SecurityCompressionType>
extern Il2CppType t5408_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36745_GM;
MethodInfo m36745_MI = 
{
	"GetEnumerator", NULL, &t6863_TI, &t5408_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36745_GM};
static MethodInfo* t6863_MIs[] =
{
	&m36745_MI,
	NULL
};
static TypeInfo* t6863_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6863_0_0_0;
extern Il2CppType t6863_1_0_0;
struct t6863;
extern Il2CppGenericClass t6863_GC;
TypeInfo t6863_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6863_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6863_TI, t6863_ITIs, NULL, &EmptyCustomAttributesCache, &t6863_TI, &t6863_0_0_0, &t6863_1_0_0, NULL, &t6863_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6862_TI;



// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityCompressionType>
extern MethodInfo m36746_MI;
extern MethodInfo m36747_MI;
static PropertyInfo t6862____Item_PropertyInfo = 
{
	&t6862_TI, "Item", &m36746_MI, &m36747_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6862_PIs[] =
{
	&t6862____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1307_0_0_0;
static ParameterInfo t6862_m36748_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1307_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36748_GM;
MethodInfo m36748_MI = 
{
	"IndexOf", NULL, &t6862_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6862_m36748_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36748_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1307_0_0_0;
static ParameterInfo t6862_m36749_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1307_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36749_GM;
MethodInfo m36749_MI = 
{
	"Insert", NULL, &t6862_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6862_m36749_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36749_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6862_m36750_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36750_GM;
MethodInfo m36750_MI = 
{
	"RemoveAt", NULL, &t6862_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6862_m36750_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36750_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6862_m36746_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1307_0_0_0;
extern void* RuntimeInvoker_t1307_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36746_GM;
MethodInfo m36746_MI = 
{
	"get_Item", NULL, &t6862_TI, &t1307_0_0_0, RuntimeInvoker_t1307_t110, t6862_m36746_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36746_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1307_0_0_0;
static ParameterInfo t6862_m36747_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1307_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36747_GM;
MethodInfo m36747_MI = 
{
	"set_Item", NULL, &t6862_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6862_m36747_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36747_GM};
static MethodInfo* t6862_MIs[] =
{
	&m36748_MI,
	&m36749_MI,
	&m36750_MI,
	&m36746_MI,
	&m36747_MI,
	NULL
};
static TypeInfo* t6862_ITIs[] = 
{
	&t739_TI,
	&t6861_TI,
	&t6863_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6862_0_0_0;
extern Il2CppType t6862_1_0_0;
struct t6862;
extern Il2CppGenericClass t6862_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6862_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6862_MIs, t6862_PIs, NULL, NULL, NULL, NULL, NULL, &t6862_TI, t6862_ITIs, NULL, &t2240__CustomAttributeCache, &t6862_TI, &t6862_0_0_0, &t6862_1_0_0, NULL, &t6862_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5410_TI;

#include "t1291.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>
extern MethodInfo m36751_MI;
static PropertyInfo t5410____Current_PropertyInfo = 
{
	&t5410_TI, "Current", &m36751_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5410_PIs[] =
{
	&t5410____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1291_0_0_0;
extern void* RuntimeInvoker_t1291 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36751_GM;
MethodInfo m36751_MI = 
{
	"get_Current", NULL, &t5410_TI, &t1291_0_0_0, RuntimeInvoker_t1291, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36751_GM};
static MethodInfo* t5410_MIs[] =
{
	&m36751_MI,
	NULL
};
static TypeInfo* t5410_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5410_0_0_0;
extern Il2CppType t5410_1_0_0;
struct t5410;
extern Il2CppGenericClass t5410_GC;
TypeInfo t5410_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5410_MIs, t5410_PIs, NULL, NULL, NULL, NULL, NULL, &t5410_TI, t5410_ITIs, NULL, &EmptyCustomAttributesCache, &t5410_TI, &t5410_0_0_0, &t5410_1_0_0, NULL, &t5410_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3895.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3895_TI;
#include "t3895MD.h"

extern TypeInfo t1291_TI;
extern MethodInfo m22201_MI;
extern MethodInfo m28644_MI;
struct t107;
 int32_t m28644 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22197_MI;
 void m22197 (t3895 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22198_MI;
 t5 * m22198 (t3895 * __this, MethodInfo* method){
	{
		int32_t L_0 = m22201(__this, &m22201_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1291_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22199_MI;
 void m22199 (t3895 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22200_MI;
 bool m22200 (t3895 * __this, MethodInfo* method){
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
 int32_t m22201 (t3895 * __this, MethodInfo* method){
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
		int32_t L_8 = m28644(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28644_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>
extern Il2CppType t107_0_0_1;
FieldInfo t3895_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3895_TI, offsetof(t3895, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3895_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3895_TI, offsetof(t3895, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3895_FIs[] =
{
	&t3895_f0_FieldInfo,
	&t3895_f1_FieldInfo,
	NULL
};
static PropertyInfo t3895____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3895_TI, "System.Collections.IEnumerator.Current", &m22198_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3895____Current_PropertyInfo = 
{
	&t3895_TI, "Current", &m22201_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3895_PIs[] =
{
	&t3895____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3895____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3895_m22197_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22197_GM;
MethodInfo m22197_MI = 
{
	".ctor", (methodPointerType)&m22197, &t3895_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3895_m22197_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22197_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22198_GM;
MethodInfo m22198_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22198, &t3895_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22198_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22199_GM;
MethodInfo m22199_MI = 
{
	"Dispose", (methodPointerType)&m22199, &t3895_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22199_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22200_GM;
MethodInfo m22200_MI = 
{
	"MoveNext", (methodPointerType)&m22200, &t3895_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22200_GM};
extern Il2CppType t1291_0_0_0;
extern void* RuntimeInvoker_t1291 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22201_GM;
MethodInfo m22201_MI = 
{
	"get_Current", (methodPointerType)&m22201, &t3895_TI, &t1291_0_0_0, RuntimeInvoker_t1291, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22201_GM};
static MethodInfo* t3895_MIs[] =
{
	&m22197_MI,
	&m22198_MI,
	&m22199_MI,
	&m22200_MI,
	&m22201_MI,
	NULL
};
static MethodInfo* t3895_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22198_MI,
	&m22200_MI,
	&m22199_MI,
	&m22201_MI,
};
static TypeInfo* t3895_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5410_TI,
};
static Il2CppInterfaceOffsetPair t3895_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5410_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3895_0_0_0;
extern Il2CppType t3895_1_0_0;
extern Il2CppGenericClass t3895_GC;
TypeInfo t3895_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3895_MIs, t3895_PIs, t3895_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3895_TI, t3895_ITIs, t3895_VT, &EmptyCustomAttributesCache, &t3895_TI, &t3895_0_0_0, &t3895_1_0_0, t3895_IOs, &t3895_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3895)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6864_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>
extern MethodInfo m36752_MI;
static PropertyInfo t6864____Count_PropertyInfo = 
{
	&t6864_TI, "Count", &m36752_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36753_MI;
static PropertyInfo t6864____IsReadOnly_PropertyInfo = 
{
	&t6864_TI, "IsReadOnly", &m36753_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6864_PIs[] =
{
	&t6864____Count_PropertyInfo,
	&t6864____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36752_GM;
MethodInfo m36752_MI = 
{
	"get_Count", NULL, &t6864_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36752_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36753_GM;
MethodInfo m36753_MI = 
{
	"get_IsReadOnly", NULL, &t6864_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36753_GM};
extern Il2CppType t1291_0_0_0;
extern Il2CppType t1291_0_0_0;
static ParameterInfo t6864_m36754_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1291_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36754_GM;
MethodInfo m36754_MI = 
{
	"Add", NULL, &t6864_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6864_m36754_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36754_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36755_GM;
MethodInfo m36755_MI = 
{
	"Clear", NULL, &t6864_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36755_GM};
extern Il2CppType t1291_0_0_0;
static ParameterInfo t6864_m36756_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1291_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36756_GM;
MethodInfo m36756_MI = 
{
	"Contains", NULL, &t6864_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6864_m36756_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36756_GM};
extern Il2CppType t4615_0_0_0;
extern Il2CppType t4615_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6864_m36757_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4615_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36757_GM;
MethodInfo m36757_MI = 
{
	"CopyTo", NULL, &t6864_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6864_m36757_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36757_GM};
extern Il2CppType t1291_0_0_0;
static ParameterInfo t6864_m36758_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1291_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36758_GM;
MethodInfo m36758_MI = 
{
	"Remove", NULL, &t6864_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6864_m36758_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36758_GM};
static MethodInfo* t6864_MIs[] =
{
	&m36752_MI,
	&m36753_MI,
	&m36754_MI,
	&m36755_MI,
	&m36756_MI,
	&m36757_MI,
	&m36758_MI,
	NULL
};
extern TypeInfo t6866_TI;
static TypeInfo* t6864_ITIs[] = 
{
	&t739_TI,
	&t6866_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6864_0_0_0;
extern Il2CppType t6864_1_0_0;
struct t6864;
extern Il2CppGenericClass t6864_GC;
TypeInfo t6864_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6864_MIs, t6864_PIs, NULL, NULL, NULL, NULL, NULL, &t6864_TI, t6864_ITIs, NULL, &EmptyCustomAttributesCache, &t6864_TI, &t6864_0_0_0, &t6864_1_0_0, NULL, &t6864_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.SecurityProtocolType>
extern Il2CppType t5410_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36759_GM;
MethodInfo m36759_MI = 
{
	"GetEnumerator", NULL, &t6866_TI, &t5410_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36759_GM};
static MethodInfo* t6866_MIs[] =
{
	&m36759_MI,
	NULL
};
static TypeInfo* t6866_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6866_0_0_0;
extern Il2CppType t6866_1_0_0;
struct t6866;
extern Il2CppGenericClass t6866_GC;
TypeInfo t6866_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6866_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6866_TI, t6866_ITIs, NULL, &EmptyCustomAttributesCache, &t6866_TI, &t6866_0_0_0, &t6866_1_0_0, NULL, &t6866_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6865_TI;



// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityProtocolType>
extern MethodInfo m36760_MI;
extern MethodInfo m36761_MI;
static PropertyInfo t6865____Item_PropertyInfo = 
{
	&t6865_TI, "Item", &m36760_MI, &m36761_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6865_PIs[] =
{
	&t6865____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1291_0_0_0;
static ParameterInfo t6865_m36762_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1291_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36762_GM;
MethodInfo m36762_MI = 
{
	"IndexOf", NULL, &t6865_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6865_m36762_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36762_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1291_0_0_0;
static ParameterInfo t6865_m36763_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1291_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36763_GM;
MethodInfo m36763_MI = 
{
	"Insert", NULL, &t6865_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6865_m36763_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36763_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6865_m36764_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36764_GM;
MethodInfo m36764_MI = 
{
	"RemoveAt", NULL, &t6865_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6865_m36764_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36764_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6865_m36760_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1291_0_0_0;
extern void* RuntimeInvoker_t1291_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36760_GM;
MethodInfo m36760_MI = 
{
	"get_Item", NULL, &t6865_TI, &t1291_0_0_0, RuntimeInvoker_t1291_t110, t6865_m36760_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36760_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1291_0_0_0;
static ParameterInfo t6865_m36761_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1291_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36761_GM;
MethodInfo m36761_MI = 
{
	"set_Item", NULL, &t6865_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6865_m36761_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36761_GM};
static MethodInfo* t6865_MIs[] =
{
	&m36762_MI,
	&m36763_MI,
	&m36764_MI,
	&m36760_MI,
	&m36761_MI,
	NULL
};
static TypeInfo* t6865_ITIs[] = 
{
	&t739_TI,
	&t6864_TI,
	&t6866_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6865_0_0_0;
extern Il2CppType t6865_1_0_0;
struct t6865;
extern Il2CppGenericClass t6865_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6865_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6865_MIs, t6865_PIs, NULL, NULL, NULL, NULL, NULL, &t6865_TI, t6865_ITIs, NULL, &t2240__CustomAttributeCache, &t6865_TI, &t6865_0_0_0, &t6865_1_0_0, NULL, &t6865_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5412_TI;

#include "t1331.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
extern MethodInfo m36765_MI;
static PropertyInfo t5412____Current_PropertyInfo = 
{
	&t5412_TI, "Current", &m36765_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5412_PIs[] =
{
	&t5412____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1331_0_0_0;
extern void* RuntimeInvoker_t1331 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36765_GM;
MethodInfo m36765_MI = 
{
	"get_Current", NULL, &t5412_TI, &t1331_0_0_0, RuntimeInvoker_t1331, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36765_GM};
static MethodInfo* t5412_MIs[] =
{
	&m36765_MI,
	NULL
};
static TypeInfo* t5412_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5412_0_0_0;
extern Il2CppType t5412_1_0_0;
struct t5412;
extern Il2CppGenericClass t5412_GC;
TypeInfo t5412_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5412_MIs, t5412_PIs, NULL, NULL, NULL, NULL, NULL, &t5412_TI, t5412_ITIs, NULL, &EmptyCustomAttributesCache, &t5412_TI, &t5412_0_0_0, &t5412_1_0_0, NULL, &t5412_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3896.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3896_TI;
#include "t3896MD.h"

extern TypeInfo t1331_TI;
extern MethodInfo m22206_MI;
extern MethodInfo m28655_MI;
struct t107;
 int32_t m28655 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22202_MI;
 void m22202 (t3896 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22203_MI;
 t5 * m22203 (t3896 * __this, MethodInfo* method){
	{
		int32_t L_0 = m22206(__this, &m22206_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1331_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22204_MI;
 void m22204 (t3896 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22205_MI;
 bool m22205 (t3896 * __this, MethodInfo* method){
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
 int32_t m22206 (t3896 * __this, MethodInfo* method){
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
		int32_t L_8 = m28655(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28655_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
extern Il2CppType t107_0_0_1;
FieldInfo t3896_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3896_TI, offsetof(t3896, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3896_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3896_TI, offsetof(t3896, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3896_FIs[] =
{
	&t3896_f0_FieldInfo,
	&t3896_f1_FieldInfo,
	NULL
};
static PropertyInfo t3896____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3896_TI, "System.Collections.IEnumerator.Current", &m22203_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3896____Current_PropertyInfo = 
{
	&t3896_TI, "Current", &m22206_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3896_PIs[] =
{
	&t3896____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3896____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3896_m22202_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22202_GM;
MethodInfo m22202_MI = 
{
	".ctor", (methodPointerType)&m22202, &t3896_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3896_m22202_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22202_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22203_GM;
MethodInfo m22203_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22203, &t3896_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22203_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22204_GM;
MethodInfo m22204_MI = 
{
	"Dispose", (methodPointerType)&m22204, &t3896_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22204_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22205_GM;
MethodInfo m22205_MI = 
{
	"MoveNext", (methodPointerType)&m22205, &t3896_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22205_GM};
extern Il2CppType t1331_0_0_0;
extern void* RuntimeInvoker_t1331 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22206_GM;
MethodInfo m22206_MI = 
{
	"get_Current", (methodPointerType)&m22206, &t3896_TI, &t1331_0_0_0, RuntimeInvoker_t1331, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22206_GM};
static MethodInfo* t3896_MIs[] =
{
	&m22202_MI,
	&m22203_MI,
	&m22204_MI,
	&m22205_MI,
	&m22206_MI,
	NULL
};
static MethodInfo* t3896_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22203_MI,
	&m22205_MI,
	&m22204_MI,
	&m22206_MI,
};
static TypeInfo* t3896_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5412_TI,
};
static Il2CppInterfaceOffsetPair t3896_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5412_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3896_0_0_0;
extern Il2CppType t3896_1_0_0;
extern Il2CppGenericClass t3896_GC;
TypeInfo t3896_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3896_MIs, t3896_PIs, t3896_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3896_TI, t3896_ITIs, t3896_VT, &EmptyCustomAttributesCache, &t3896_TI, &t3896_0_0_0, &t3896_1_0_0, t3896_IOs, &t3896_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3896)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6867_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
extern MethodInfo m36766_MI;
static PropertyInfo t6867____Count_PropertyInfo = 
{
	&t6867_TI, "Count", &m36766_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36767_MI;
static PropertyInfo t6867____IsReadOnly_PropertyInfo = 
{
	&t6867_TI, "IsReadOnly", &m36767_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6867_PIs[] =
{
	&t6867____Count_PropertyInfo,
	&t6867____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36766_GM;
MethodInfo m36766_MI = 
{
	"get_Count", NULL, &t6867_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36766_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36767_GM;
MethodInfo m36767_MI = 
{
	"get_IsReadOnly", NULL, &t6867_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36767_GM};
extern Il2CppType t1331_0_0_0;
extern Il2CppType t1331_0_0_0;
static ParameterInfo t6867_m36768_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1331_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36768_GM;
MethodInfo m36768_MI = 
{
	"Add", NULL, &t6867_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6867_m36768_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36768_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36769_GM;
MethodInfo m36769_MI = 
{
	"Clear", NULL, &t6867_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36769_GM};
extern Il2CppType t1331_0_0_0;
static ParameterInfo t6867_m36770_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1331_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36770_GM;
MethodInfo m36770_MI = 
{
	"Contains", NULL, &t6867_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6867_m36770_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36770_GM};
extern Il2CppType t1330_0_0_0;
extern Il2CppType t1330_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6867_m36771_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1330_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36771_GM;
MethodInfo m36771_MI = 
{
	"CopyTo", NULL, &t6867_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6867_m36771_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36771_GM};
extern Il2CppType t1331_0_0_0;
static ParameterInfo t6867_m36772_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1331_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36772_GM;
MethodInfo m36772_MI = 
{
	"Remove", NULL, &t6867_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6867_m36772_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36772_GM};
static MethodInfo* t6867_MIs[] =
{
	&m36766_MI,
	&m36767_MI,
	&m36768_MI,
	&m36769_MI,
	&m36770_MI,
	&m36771_MI,
	&m36772_MI,
	NULL
};
extern TypeInfo t6869_TI;
static TypeInfo* t6867_ITIs[] = 
{
	&t739_TI,
	&t6869_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6867_0_0_0;
extern Il2CppType t6867_1_0_0;
struct t6867;
extern Il2CppGenericClass t6867_GC;
TypeInfo t6867_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6867_MIs, t6867_PIs, NULL, NULL, NULL, NULL, NULL, &t6867_TI, t6867_ITIs, NULL, &EmptyCustomAttributesCache, &t6867_TI, &t6867_0_0_0, &t6867_1_0_0, NULL, &t6867_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
extern Il2CppType t5412_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36773_GM;
MethodInfo m36773_MI = 
{
	"GetEnumerator", NULL, &t6869_TI, &t5412_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36773_GM};
static MethodInfo* t6869_MIs[] =
{
	&m36773_MI,
	NULL
};
static TypeInfo* t6869_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6869_0_0_0;
extern Il2CppType t6869_1_0_0;
struct t6869;
extern Il2CppGenericClass t6869_GC;
TypeInfo t6869_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6869_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6869_TI, t6869_ITIs, NULL, &EmptyCustomAttributesCache, &t6869_TI, &t6869_0_0_0, &t6869_1_0_0, NULL, &t6869_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6868_TI;



// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
extern MethodInfo m36774_MI;
extern MethodInfo m36775_MI;
static PropertyInfo t6868____Item_PropertyInfo = 
{
	&t6868_TI, "Item", &m36774_MI, &m36775_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6868_PIs[] =
{
	&t6868____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1331_0_0_0;
static ParameterInfo t6868_m36776_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1331_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36776_GM;
MethodInfo m36776_MI = 
{
	"IndexOf", NULL, &t6868_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6868_m36776_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36776_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1331_0_0_0;
static ParameterInfo t6868_m36777_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1331_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36777_GM;
MethodInfo m36777_MI = 
{
	"Insert", NULL, &t6868_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6868_m36777_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36777_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6868_m36778_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36778_GM;
MethodInfo m36778_MI = 
{
	"RemoveAt", NULL, &t6868_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6868_m36778_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36778_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6868_m36774_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1331_0_0_0;
extern void* RuntimeInvoker_t1331_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36774_GM;
MethodInfo m36774_MI = 
{
	"get_Item", NULL, &t6868_TI, &t1331_0_0_0, RuntimeInvoker_t1331_t110, t6868_m36774_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36774_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1331_0_0_0;
static ParameterInfo t6868_m36775_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1331_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36775_GM;
MethodInfo m36775_MI = 
{
	"set_Item", NULL, &t6868_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6868_m36775_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36775_GM};
static MethodInfo* t6868_MIs[] =
{
	&m36776_MI,
	&m36777_MI,
	&m36778_MI,
	&m36774_MI,
	&m36775_MI,
	NULL
};
static TypeInfo* t6868_ITIs[] = 
{
	&t739_TI,
	&t6867_TI,
	&t6869_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6868_0_0_0;
extern Il2CppType t6868_1_0_0;
struct t6868;
extern Il2CppGenericClass t6868_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6868_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6868_MIs, t6868_PIs, NULL, NULL, NULL, NULL, NULL, &t6868_TI, t6868_ITIs, NULL, &t2240__CustomAttributeCache, &t6868_TI, &t6868_0_0_0, &t6868_1_0_0, NULL, &t6868_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5414_TI;

#include "t1301.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>
extern MethodInfo m36779_MI;
static PropertyInfo t5414____Current_PropertyInfo = 
{
	&t5414_TI, "Current", &m36779_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5414_PIs[] =
{
	&t5414____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1301_0_0_0;
extern void* RuntimeInvoker_t1301 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36779_GM;
MethodInfo m36779_MI = 
{
	"get_Current", NULL, &t5414_TI, &t1301_0_0_0, RuntimeInvoker_t1301, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36779_GM};
static MethodInfo* t5414_MIs[] =
{
	&m36779_MI,
	NULL
};
static TypeInfo* t5414_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5414_0_0_0;
extern Il2CppType t5414_1_0_0;
struct t5414;
extern Il2CppGenericClass t5414_GC;
TypeInfo t5414_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5414_MIs, t5414_PIs, NULL, NULL, NULL, NULL, NULL, &t5414_TI, t5414_ITIs, NULL, &EmptyCustomAttributesCache, &t5414_TI, &t5414_0_0_0, &t5414_1_0_0, NULL, &t5414_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3897.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3897_TI;
#include "t3897MD.h"

extern TypeInfo t1301_TI;
extern MethodInfo m22211_MI;
extern MethodInfo m28666_MI;
struct t107;
 uint8_t m28666 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22207_MI;
 void m22207 (t3897 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22208_MI;
 t5 * m22208 (t3897 * __this, MethodInfo* method){
	{
		uint8_t L_0 = m22211(__this, &m22211_MI);
		uint8_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1301_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22209_MI;
 void m22209 (t3897 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22210_MI;
 bool m22210 (t3897 * __this, MethodInfo* method){
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
 uint8_t m22211 (t3897 * __this, MethodInfo* method){
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
		uint8_t L_8 = m28666(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28666_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>
extern Il2CppType t107_0_0_1;
FieldInfo t3897_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3897_TI, offsetof(t3897, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3897_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3897_TI, offsetof(t3897, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3897_FIs[] =
{
	&t3897_f0_FieldInfo,
	&t3897_f1_FieldInfo,
	NULL
};
static PropertyInfo t3897____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3897_TI, "System.Collections.IEnumerator.Current", &m22208_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3897____Current_PropertyInfo = 
{
	&t3897_TI, "Current", &m22211_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3897_PIs[] =
{
	&t3897____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3897____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3897_m22207_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22207_GM;
MethodInfo m22207_MI = 
{
	".ctor", (methodPointerType)&m22207, &t3897_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3897_m22207_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22207_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22208_GM;
MethodInfo m22208_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22208, &t3897_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22208_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22209_GM;
MethodInfo m22209_MI = 
{
	"Dispose", (methodPointerType)&m22209, &t3897_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22209_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22210_GM;
MethodInfo m22210_MI = 
{
	"MoveNext", (methodPointerType)&m22210, &t3897_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22210_GM};
extern Il2CppType t1301_0_0_0;
extern void* RuntimeInvoker_t1301 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22211_GM;
MethodInfo m22211_MI = 
{
	"get_Current", (methodPointerType)&m22211, &t3897_TI, &t1301_0_0_0, RuntimeInvoker_t1301, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22211_GM};
static MethodInfo* t3897_MIs[] =
{
	&m22207_MI,
	&m22208_MI,
	&m22209_MI,
	&m22210_MI,
	&m22211_MI,
	NULL
};
static MethodInfo* t3897_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22208_MI,
	&m22210_MI,
	&m22209_MI,
	&m22211_MI,
};
static TypeInfo* t3897_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5414_TI,
};
static Il2CppInterfaceOffsetPair t3897_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5414_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3897_0_0_0;
extern Il2CppType t3897_1_0_0;
extern Il2CppGenericClass t3897_GC;
TypeInfo t3897_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3897_MIs, t3897_PIs, t3897_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3897_TI, t3897_ITIs, t3897_VT, &EmptyCustomAttributesCache, &t3897_TI, &t3897_0_0_0, &t3897_1_0_0, t3897_IOs, &t3897_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3897)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6870_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>
extern MethodInfo m36780_MI;
static PropertyInfo t6870____Count_PropertyInfo = 
{
	&t6870_TI, "Count", &m36780_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36781_MI;
static PropertyInfo t6870____IsReadOnly_PropertyInfo = 
{
	&t6870_TI, "IsReadOnly", &m36781_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6870_PIs[] =
{
	&t6870____Count_PropertyInfo,
	&t6870____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36780_GM;
MethodInfo m36780_MI = 
{
	"get_Count", NULL, &t6870_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36780_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36781_GM;
MethodInfo m36781_MI = 
{
	"get_IsReadOnly", NULL, &t6870_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36781_GM};
extern Il2CppType t1301_0_0_0;
extern Il2CppType t1301_0_0_0;
static ParameterInfo t6870_m36782_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1301_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36782_GM;
MethodInfo m36782_MI = 
{
	"Add", NULL, &t6870_TI, &t109_0_0_0, RuntimeInvoker_t109_t494, t6870_m36782_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36782_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36783_GM;
MethodInfo m36783_MI = 
{
	"Clear", NULL, &t6870_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36783_GM};
extern Il2CppType t1301_0_0_0;
static ParameterInfo t6870_m36784_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1301_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36784_GM;
MethodInfo m36784_MI = 
{
	"Contains", NULL, &t6870_TI, &t108_0_0_0, RuntimeInvoker_t108_t494, t6870_m36784_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36784_GM};
extern Il2CppType t4616_0_0_0;
extern Il2CppType t4616_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6870_m36785_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4616_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36785_GM;
MethodInfo m36785_MI = 
{
	"CopyTo", NULL, &t6870_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6870_m36785_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36785_GM};
extern Il2CppType t1301_0_0_0;
static ParameterInfo t6870_m36786_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1301_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36786_GM;
MethodInfo m36786_MI = 
{
	"Remove", NULL, &t6870_TI, &t108_0_0_0, RuntimeInvoker_t108_t494, t6870_m36786_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36786_GM};
static MethodInfo* t6870_MIs[] =
{
	&m36780_MI,
	&m36781_MI,
	&m36782_MI,
	&m36783_MI,
	&m36784_MI,
	&m36785_MI,
	&m36786_MI,
	NULL
};
extern TypeInfo t6872_TI;
static TypeInfo* t6870_ITIs[] = 
{
	&t739_TI,
	&t6872_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6870_0_0_0;
extern Il2CppType t6870_1_0_0;
struct t6870;
extern Il2CppGenericClass t6870_GC;
TypeInfo t6870_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6870_MIs, t6870_PIs, NULL, NULL, NULL, NULL, NULL, &t6870_TI, t6870_ITIs, NULL, &EmptyCustomAttributesCache, &t6870_TI, &t6870_0_0_0, &t6870_1_0_0, NULL, &t6870_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>
extern Il2CppType t5414_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36787_GM;
MethodInfo m36787_MI = 
{
	"GetEnumerator", NULL, &t6872_TI, &t5414_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36787_GM};
static MethodInfo* t6872_MIs[] =
{
	&m36787_MI,
	NULL
};
static TypeInfo* t6872_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6872_0_0_0;
extern Il2CppType t6872_1_0_0;
struct t6872;
extern Il2CppGenericClass t6872_GC;
TypeInfo t6872_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6872_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6872_TI, t6872_ITIs, NULL, &EmptyCustomAttributesCache, &t6872_TI, &t6872_0_0_0, &t6872_1_0_0, NULL, &t6872_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6871_TI;



// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>
extern MethodInfo m36788_MI;
extern MethodInfo m36789_MI;
static PropertyInfo t6871____Item_PropertyInfo = 
{
	&t6871_TI, "Item", &m36788_MI, &m36789_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6871_PIs[] =
{
	&t6871____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1301_0_0_0;
static ParameterInfo t6871_m36790_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1301_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36790_GM;
MethodInfo m36790_MI = 
{
	"IndexOf", NULL, &t6871_TI, &t110_0_0_0, RuntimeInvoker_t110_t494, t6871_m36790_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36790_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1301_0_0_0;
static ParameterInfo t6871_m36791_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1301_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36791_GM;
MethodInfo m36791_MI = 
{
	"Insert", NULL, &t6871_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t494, t6871_m36791_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36791_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6871_m36792_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36792_GM;
MethodInfo m36792_MI = 
{
	"RemoveAt", NULL, &t6871_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6871_m36792_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36792_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6871_m36788_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1301_0_0_0;
extern void* RuntimeInvoker_t1301_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36788_GM;
MethodInfo m36788_MI = 
{
	"get_Item", NULL, &t6871_TI, &t1301_0_0_0, RuntimeInvoker_t1301_t110, t6871_m36788_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36788_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1301_0_0_0;
static ParameterInfo t6871_m36789_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1301_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36789_GM;
MethodInfo m36789_MI = 
{
	"set_Item", NULL, &t6871_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t494, t6871_m36789_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36789_GM};
static MethodInfo* t6871_MIs[] =
{
	&m36790_MI,
	&m36791_MI,
	&m36792_MI,
	&m36788_MI,
	&m36789_MI,
	NULL
};
static TypeInfo* t6871_ITIs[] = 
{
	&t739_TI,
	&t6870_TI,
	&t6872_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6871_0_0_0;
extern Il2CppType t6871_1_0_0;
struct t6871;
extern Il2CppGenericClass t6871_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6871_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6871_MIs, t6871_PIs, NULL, NULL, NULL, NULL, NULL, &t6871_TI, t6871_ITIs, NULL, &t2240__CustomAttributeCache, &t6871_TI, &t6871_0_0_0, &t6871_1_0_0, NULL, &t6871_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5416_TI;

#include "t1388.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.SerializableAttribute>
extern MethodInfo m36793_MI;
static PropertyInfo t5416____Current_PropertyInfo = 
{
	&t5416_TI, "Current", &m36793_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5416_PIs[] =
{
	&t5416____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1388_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36793_GM;
MethodInfo m36793_MI = 
{
	"get_Current", NULL, &t5416_TI, &t1388_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36793_GM};
static MethodInfo* t5416_MIs[] =
{
	&m36793_MI,
	NULL
};
static TypeInfo* t5416_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5416_0_0_0;
extern Il2CppType t5416_1_0_0;
struct t5416;
extern Il2CppGenericClass t5416_GC;
TypeInfo t5416_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5416_MIs, t5416_PIs, NULL, NULL, NULL, NULL, NULL, &t5416_TI, t5416_ITIs, NULL, &EmptyCustomAttributesCache, &t5416_TI, &t5416_0_0_0, &t5416_1_0_0, NULL, &t5416_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3898.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3898_TI;
#include "t3898MD.h"

extern TypeInfo t1388_TI;
extern MethodInfo m22216_MI;
extern MethodInfo m28677_MI;
struct t107;
#define m28677(__this, p0, method) (t1388 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.SerializableAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3898_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3898_TI, offsetof(t3898, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3898_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3898_TI, offsetof(t3898, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3898_FIs[] =
{
	&t3898_f0_FieldInfo,
	&t3898_f1_FieldInfo,
	NULL
};
extern MethodInfo m22213_MI;
static PropertyInfo t3898____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3898_TI, "System.Collections.IEnumerator.Current", &m22213_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3898____Current_PropertyInfo = 
{
	&t3898_TI, "Current", &m22216_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3898_PIs[] =
{
	&t3898____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3898____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3898_m22212_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22212_GM;
MethodInfo m22212_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3898_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3898_m22212_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22212_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22213_GM;
MethodInfo m22213_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3898_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22213_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22214_GM;
MethodInfo m22214_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3898_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22214_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22215_GM;
MethodInfo m22215_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3898_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22215_GM};
extern Il2CppType t1388_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22216_GM;
MethodInfo m22216_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3898_TI, &t1388_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22216_GM};
static MethodInfo* t3898_MIs[] =
{
	&m22212_MI,
	&m22213_MI,
	&m22214_MI,
	&m22215_MI,
	&m22216_MI,
	NULL
};
extern MethodInfo m22215_MI;
extern MethodInfo m22214_MI;
static MethodInfo* t3898_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22213_MI,
	&m22215_MI,
	&m22214_MI,
	&m22216_MI,
};
static TypeInfo* t3898_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5416_TI,
};
static Il2CppInterfaceOffsetPair t3898_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5416_TI, 7},
};
extern TypeInfo t1388_TI;
static Il2CppRGCTXData t3898_RGCTXData[3] = 
{
	&m22216_MI/* Method Usage */,
	&t1388_TI/* Class Usage */,
	&m28677_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3898_0_0_0;
extern Il2CppType t3898_1_0_0;
extern Il2CppGenericClass t3898_GC;
TypeInfo t3898_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3898_MIs, t3898_PIs, t3898_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3898_TI, t3898_ITIs, t3898_VT, &EmptyCustomAttributesCache, &t3898_TI, &t3898_0_0_0, &t3898_1_0_0, t3898_IOs, &t3898_GC, NULL, NULL, NULL, t3898_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3898)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6873_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.SerializableAttribute>
extern MethodInfo m36794_MI;
static PropertyInfo t6873____Count_PropertyInfo = 
{
	&t6873_TI, "Count", &m36794_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36795_MI;
static PropertyInfo t6873____IsReadOnly_PropertyInfo = 
{
	&t6873_TI, "IsReadOnly", &m36795_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6873_PIs[] =
{
	&t6873____Count_PropertyInfo,
	&t6873____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36794_GM;
MethodInfo m36794_MI = 
{
	"get_Count", NULL, &t6873_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36794_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36795_GM;
MethodInfo m36795_MI = 
{
	"get_IsReadOnly", NULL, &t6873_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36795_GM};
extern Il2CppType t1388_0_0_0;
extern Il2CppType t1388_0_0_0;
static ParameterInfo t6873_m36796_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1388_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36796_GM;
MethodInfo m36796_MI = 
{
	"Add", NULL, &t6873_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6873_m36796_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36796_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36797_GM;
MethodInfo m36797_MI = 
{
	"Clear", NULL, &t6873_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36797_GM};
extern Il2CppType t1388_0_0_0;
static ParameterInfo t6873_m36798_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1388_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36798_GM;
MethodInfo m36798_MI = 
{
	"Contains", NULL, &t6873_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6873_m36798_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36798_GM};
extern Il2CppType t4201_0_0_0;
extern Il2CppType t4201_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6873_m36799_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4201_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36799_GM;
MethodInfo m36799_MI = 
{
	"CopyTo", NULL, &t6873_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6873_m36799_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36799_GM};
extern Il2CppType t1388_0_0_0;
static ParameterInfo t6873_m36800_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1388_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36800_GM;
MethodInfo m36800_MI = 
{
	"Remove", NULL, &t6873_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6873_m36800_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36800_GM};
static MethodInfo* t6873_MIs[] =
{
	&m36794_MI,
	&m36795_MI,
	&m36796_MI,
	&m36797_MI,
	&m36798_MI,
	&m36799_MI,
	&m36800_MI,
	NULL
};
extern TypeInfo t6875_TI;
static TypeInfo* t6873_ITIs[] = 
{
	&t739_TI,
	&t6875_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6873_0_0_0;
extern Il2CppType t6873_1_0_0;
struct t6873;
extern Il2CppGenericClass t6873_GC;
TypeInfo t6873_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6873_MIs, t6873_PIs, NULL, NULL, NULL, NULL, NULL, &t6873_TI, t6873_ITIs, NULL, &EmptyCustomAttributesCache, &t6873_TI, &t6873_0_0_0, &t6873_1_0_0, NULL, &t6873_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.SerializableAttribute>
extern Il2CppType t5416_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36801_GM;
MethodInfo m36801_MI = 
{
	"GetEnumerator", NULL, &t6875_TI, &t5416_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36801_GM};
static MethodInfo* t6875_MIs[] =
{
	&m36801_MI,
	NULL
};
static TypeInfo* t6875_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6875_0_0_0;
extern Il2CppType t6875_1_0_0;
struct t6875;
extern Il2CppGenericClass t6875_GC;
TypeInfo t6875_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6875_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6875_TI, t6875_ITIs, NULL, &EmptyCustomAttributesCache, &t6875_TI, &t6875_0_0_0, &t6875_1_0_0, NULL, &t6875_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6874_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.SerializableAttribute>
extern MethodInfo m36802_MI;
extern MethodInfo m36803_MI;
static PropertyInfo t6874____Item_PropertyInfo = 
{
	&t6874_TI, "Item", &m36802_MI, &m36803_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6874_PIs[] =
{
	&t6874____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1388_0_0_0;
static ParameterInfo t6874_m36804_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1388_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36804_GM;
MethodInfo m36804_MI = 
{
	"IndexOf", NULL, &t6874_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6874_m36804_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36804_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1388_0_0_0;
static ParameterInfo t6874_m36805_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1388_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36805_GM;
MethodInfo m36805_MI = 
{
	"Insert", NULL, &t6874_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6874_m36805_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36805_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6874_m36806_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36806_GM;
MethodInfo m36806_MI = 
{
	"RemoveAt", NULL, &t6874_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6874_m36806_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36806_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6874_m36802_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1388_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36802_GM;
MethodInfo m36802_MI = 
{
	"get_Item", NULL, &t6874_TI, &t1388_0_0_0, RuntimeInvoker_t5_t110, t6874_m36802_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36802_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1388_0_0_0;
static ParameterInfo t6874_m36803_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1388_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36803_GM;
MethodInfo m36803_MI = 
{
	"set_Item", NULL, &t6874_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6874_m36803_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36803_GM};
static MethodInfo* t6874_MIs[] =
{
	&m36804_MI,
	&m36805_MI,
	&m36806_MI,
	&m36802_MI,
	&m36803_MI,
	NULL
};
static TypeInfo* t6874_ITIs[] = 
{
	&t739_TI,
	&t6873_TI,
	&t6875_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6874_0_0_0;
extern Il2CppType t6874_1_0_0;
struct t6874;
extern Il2CppGenericClass t6874_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6874_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6874_MIs, t6874_PIs, NULL, NULL, NULL, NULL, NULL, &t6874_TI, t6874_ITIs, NULL, &t2240__CustomAttributeCache, &t6874_TI, &t6874_0_0_0, &t6874_1_0_0, NULL, &t6874_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5418_TI;

#include "t767.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.AttributeUsageAttribute>
extern MethodInfo m36807_MI;
static PropertyInfo t5418____Current_PropertyInfo = 
{
	&t5418_TI, "Current", &m36807_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5418_PIs[] =
{
	&t5418____Current_PropertyInfo,
	NULL
};
extern Il2CppType t767_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36807_GM;
MethodInfo m36807_MI = 
{
	"get_Current", NULL, &t5418_TI, &t767_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36807_GM};
static MethodInfo* t5418_MIs[] =
{
	&m36807_MI,
	NULL
};
static TypeInfo* t5418_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5418_0_0_0;
extern Il2CppType t5418_1_0_0;
struct t5418;
extern Il2CppGenericClass t5418_GC;
TypeInfo t5418_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5418_MIs, t5418_PIs, NULL, NULL, NULL, NULL, NULL, &t5418_TI, t5418_ITIs, NULL, &EmptyCustomAttributesCache, &t5418_TI, &t5418_0_0_0, &t5418_1_0_0, NULL, &t5418_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3899.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3899_TI;
#include "t3899MD.h"

extern TypeInfo t767_TI;
extern MethodInfo m22221_MI;
extern MethodInfo m28688_MI;
struct t107;
#define m28688(__this, p0, method) (t767 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3899_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3899_TI, offsetof(t3899, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3899_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3899_TI, offsetof(t3899, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3899_FIs[] =
{
	&t3899_f0_FieldInfo,
	&t3899_f1_FieldInfo,
	NULL
};
extern MethodInfo m22218_MI;
static PropertyInfo t3899____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3899_TI, "System.Collections.IEnumerator.Current", &m22218_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3899____Current_PropertyInfo = 
{
	&t3899_TI, "Current", &m22221_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3899_PIs[] =
{
	&t3899____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3899____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3899_m22217_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22217_GM;
MethodInfo m22217_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3899_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3899_m22217_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22217_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22218_GM;
MethodInfo m22218_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3899_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22218_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22219_GM;
MethodInfo m22219_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3899_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22219_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22220_GM;
MethodInfo m22220_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3899_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22220_GM};
extern Il2CppType t767_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22221_GM;
MethodInfo m22221_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3899_TI, &t767_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22221_GM};
static MethodInfo* t3899_MIs[] =
{
	&m22217_MI,
	&m22218_MI,
	&m22219_MI,
	&m22220_MI,
	&m22221_MI,
	NULL
};
extern MethodInfo m22220_MI;
extern MethodInfo m22219_MI;
static MethodInfo* t3899_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22218_MI,
	&m22220_MI,
	&m22219_MI,
	&m22221_MI,
};
static TypeInfo* t3899_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5418_TI,
};
static Il2CppInterfaceOffsetPair t3899_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5418_TI, 7},
};
extern TypeInfo t767_TI;
static Il2CppRGCTXData t3899_RGCTXData[3] = 
{
	&m22221_MI/* Method Usage */,
	&t767_TI/* Class Usage */,
	&m28688_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3899_0_0_0;
extern Il2CppType t3899_1_0_0;
extern Il2CppGenericClass t3899_GC;
TypeInfo t3899_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3899_MIs, t3899_PIs, t3899_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3899_TI, t3899_ITIs, t3899_VT, &EmptyCustomAttributesCache, &t3899_TI, &t3899_0_0_0, &t3899_1_0_0, t3899_IOs, &t3899_GC, NULL, NULL, NULL, t3899_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3899)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6876_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>
extern MethodInfo m36808_MI;
static PropertyInfo t6876____Count_PropertyInfo = 
{
	&t6876_TI, "Count", &m36808_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36809_MI;
static PropertyInfo t6876____IsReadOnly_PropertyInfo = 
{
	&t6876_TI, "IsReadOnly", &m36809_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6876_PIs[] =
{
	&t6876____Count_PropertyInfo,
	&t6876____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36808_GM;
MethodInfo m36808_MI = 
{
	"get_Count", NULL, &t6876_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36808_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36809_GM;
MethodInfo m36809_MI = 
{
	"get_IsReadOnly", NULL, &t6876_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36809_GM};
extern Il2CppType t767_0_0_0;
extern Il2CppType t767_0_0_0;
static ParameterInfo t6876_m36810_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t767_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36810_GM;
MethodInfo m36810_MI = 
{
	"Add", NULL, &t6876_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6876_m36810_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36810_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36811_GM;
MethodInfo m36811_MI = 
{
	"Clear", NULL, &t6876_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36811_GM};
extern Il2CppType t767_0_0_0;
static ParameterInfo t6876_m36812_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t767_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36812_GM;
MethodInfo m36812_MI = 
{
	"Contains", NULL, &t6876_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6876_m36812_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36812_GM};
extern Il2CppType t4202_0_0_0;
extern Il2CppType t4202_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6876_m36813_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4202_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36813_GM;
MethodInfo m36813_MI = 
{
	"CopyTo", NULL, &t6876_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6876_m36813_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36813_GM};
extern Il2CppType t767_0_0_0;
static ParameterInfo t6876_m36814_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t767_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36814_GM;
MethodInfo m36814_MI = 
{
	"Remove", NULL, &t6876_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6876_m36814_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36814_GM};
static MethodInfo* t6876_MIs[] =
{
	&m36808_MI,
	&m36809_MI,
	&m36810_MI,
	&m36811_MI,
	&m36812_MI,
	&m36813_MI,
	&m36814_MI,
	NULL
};
extern TypeInfo t6878_TI;
static TypeInfo* t6876_ITIs[] = 
{
	&t739_TI,
	&t6878_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6876_0_0_0;
extern Il2CppType t6876_1_0_0;
struct t6876;
extern Il2CppGenericClass t6876_GC;
TypeInfo t6876_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6876_MIs, t6876_PIs, NULL, NULL, NULL, NULL, NULL, &t6876_TI, t6876_ITIs, NULL, &EmptyCustomAttributesCache, &t6876_TI, &t6876_0_0_0, &t6876_1_0_0, NULL, &t6876_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.AttributeUsageAttribute>
extern Il2CppType t5418_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36815_GM;
MethodInfo m36815_MI = 
{
	"GetEnumerator", NULL, &t6878_TI, &t5418_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36815_GM};
static MethodInfo* t6878_MIs[] =
{
	&m36815_MI,
	NULL
};
static TypeInfo* t6878_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6878_0_0_0;
extern Il2CppType t6878_1_0_0;
struct t6878;
extern Il2CppGenericClass t6878_GC;
TypeInfo t6878_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6878_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6878_TI, t6878_ITIs, NULL, &EmptyCustomAttributesCache, &t6878_TI, &t6878_0_0_0, &t6878_1_0_0, NULL, &t6878_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6877_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.AttributeUsageAttribute>
extern MethodInfo m36816_MI;
extern MethodInfo m36817_MI;
static PropertyInfo t6877____Item_PropertyInfo = 
{
	&t6877_TI, "Item", &m36816_MI, &m36817_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6877_PIs[] =
{
	&t6877____Item_PropertyInfo,
	NULL
};
extern Il2CppType t767_0_0_0;
static ParameterInfo t6877_m36818_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t767_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36818_GM;
MethodInfo m36818_MI = 
{
	"IndexOf", NULL, &t6877_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6877_m36818_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36818_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t767_0_0_0;
static ParameterInfo t6877_m36819_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t767_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36819_GM;
MethodInfo m36819_MI = 
{
	"Insert", NULL, &t6877_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6877_m36819_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36819_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6877_m36820_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36820_GM;
MethodInfo m36820_MI = 
{
	"RemoveAt", NULL, &t6877_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6877_m36820_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36820_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6877_m36816_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t767_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36816_GM;
MethodInfo m36816_MI = 
{
	"get_Item", NULL, &t6877_TI, &t767_0_0_0, RuntimeInvoker_t5_t110, t6877_m36816_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36816_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t767_0_0_0;
static ParameterInfo t6877_m36817_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t767_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36817_GM;
MethodInfo m36817_MI = 
{
	"set_Item", NULL, &t6877_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6877_m36817_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36817_GM};
static MethodInfo* t6877_MIs[] =
{
	&m36818_MI,
	&m36819_MI,
	&m36820_MI,
	&m36816_MI,
	&m36817_MI,
	NULL
};
static TypeInfo* t6877_ITIs[] = 
{
	&t739_TI,
	&t6876_TI,
	&t6878_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6877_0_0_0;
extern Il2CppType t6877_1_0_0;
struct t6877;
extern Il2CppGenericClass t6877_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6877_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6877_MIs, t6877_PIs, NULL, NULL, NULL, NULL, NULL, &t6877_TI, t6877_ITIs, NULL, &t2240__CustomAttributeCache, &t6877_TI, &t6877_0_0_0, &t6877_1_0_0, NULL, &t6877_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5420_TI;

#include "t576.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>
extern MethodInfo m36821_MI;
static PropertyInfo t5420____Current_PropertyInfo = 
{
	&t5420_TI, "Current", &m36821_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5420_PIs[] =
{
	&t5420____Current_PropertyInfo,
	NULL
};
extern Il2CppType t576_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36821_GM;
MethodInfo m36821_MI = 
{
	"get_Current", NULL, &t5420_TI, &t576_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36821_GM};
static MethodInfo* t5420_MIs[] =
{
	&m36821_MI,
	NULL
};
static TypeInfo* t5420_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5420_0_0_0;
extern Il2CppType t5420_1_0_0;
struct t5420;
extern Il2CppGenericClass t5420_GC;
TypeInfo t5420_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5420_MIs, t5420_PIs, NULL, NULL, NULL, NULL, NULL, &t5420_TI, t5420_ITIs, NULL, &EmptyCustomAttributesCache, &t5420_TI, &t5420_0_0_0, &t5420_1_0_0, NULL, &t5420_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
