#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t4136.h"
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
extern TypeInfo t4136_TI;
#include "t4136MD.h"

#include "t109.h"
#include "t110.h"
#include "t76.h"
#include "t5.h"
#include "t108.h"
extern TypeInfo t76_TI;
extern TypeInfo t5_TI;
extern TypeInfo t110_TI;
extern TypeInfo t108_TI;
#include "t4135MD.h"
#include "t5MD.h"
extern MethodInfo m23472_MI;
extern MethodInfo m466_MI;
extern MethodInfo m464_MI;

#include "t107.h"

extern MethodInfo m23477_MI;
 void m23477 (t4136 * __this, MethodInfo* method){
	{
		m23472(__this, &m23472_MI);
		return;
	}
}
extern MethodInfo m23478_MI;
 int32_t m23478 (t4136 * __this, t76  p0, MethodInfo* method){
	{
		t76  L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t76_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m466_MI, Box(InitializedTypeInfo(&t76_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m23479_MI;
 bool m23479 (t4136 * __this, t76  p0, t76  p1, MethodInfo* method){
	{
		t76  L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t76_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t76  L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t76_TI), &L_2);
		return ((((t5 *)L_3) == ((t5 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t76  L_4 = p1;
		t5 * L_5 = Box(InitializedTypeInfo(&t76_TI), &L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t76_TI), &(*(&p0))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23477_GM;
MethodInfo m23477_MI = 
{
	".ctor", (methodPointerType)&m23477, &t4136_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23477_GM};
extern Il2CppType t76_0_0_0;
extern Il2CppType t76_0_0_0;
static ParameterInfo t4136_m23478_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t76 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23478_GM;
MethodInfo m23478_MI = 
{
	"GetHashCode", (methodPointerType)&m23478, &t4136_TI, &t110_0_0_0, RuntimeInvoker_t110_t76, t4136_m23478_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23478_GM};
extern Il2CppType t76_0_0_0;
extern Il2CppType t76_0_0_0;
static ParameterInfo t4136_m23479_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t76_t76 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23479_GM;
MethodInfo m23479_MI = 
{
	"Equals", (methodPointerType)&m23479, &t4136_TI, &t108_0_0_0, RuntimeInvoker_t108_t76_t76, t4136_m23479_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23479_GM};
static MethodInfo* t4136_MIs[] =
{
	&m23477_MI,
	&m23478_MI,
	&m23479_MI,
	NULL
};
extern MethodInfo m465_MI;
extern MethodInfo m467_MI;
extern MethodInfo m23475_MI;
extern MethodInfo m23474_MI;
static MethodInfo* t4136_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m23479_MI,
	&m23478_MI,
	&m23475_MI,
	&m23474_MI,
	&m23478_MI,
	&m23479_MI,
};
extern TypeInfo t7722_TI;
extern TypeInfo t998_TI;
static Il2CppInterfaceOffsetPair t4136_IOs[] = 
{
	{ &t7722_TI, 4},
	{ &t998_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4136_0_0_0;
extern Il2CppType t4136_1_0_0;
extern TypeInfo t4135_TI;
struct t4136;
extern Il2CppGenericClass t4136_GC;
extern TypeInfo t1519_TI;
TypeInfo t4136_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t4136_MIs, NULL, NULL, NULL, &t4135_TI, NULL, &t1519_TI, &t4136_TI, NULL, t4136_VT, &EmptyCustomAttributesCache, &t4136_TI, &t4136_0_0_0, &t4136_1_0_0, t4136_IOs, &t4136_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4136), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5836_TI;

#include "t1961.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.DateTime/Which>
extern MethodInfo m39812_MI;
static PropertyInfo t5836____Current_PropertyInfo = 
{
	&t5836_TI, "Current", &m39812_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5836_PIs[] =
{
	&t5836____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1961_0_0_0;
extern void* RuntimeInvoker_t1961 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39812_GM;
MethodInfo m39812_MI = 
{
	"get_Current", NULL, &t5836_TI, &t1961_0_0_0, RuntimeInvoker_t1961, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39812_GM};
static MethodInfo* t5836_MIs[] =
{
	&m39812_MI,
	NULL
};
extern TypeInfo t196_TI;
extern TypeInfo t132_TI;
static TypeInfo* t5836_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5836_0_0_0;
extern Il2CppType t5836_1_0_0;
struct t5836;
extern Il2CppGenericClass t5836_GC;
TypeInfo t5836_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5836_MIs, t5836_PIs, NULL, NULL, NULL, NULL, NULL, &t5836_TI, t5836_ITIs, NULL, &EmptyCustomAttributesCache, &t5836_TI, &t5836_0_0_0, &t5836_1_0_0, NULL, &t5836_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4137.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4137_TI;
#include "t4137MD.h"

#include "t11.h"
#include "t133.h"
extern TypeInfo t1961_TI;
extern TypeInfo t133_TI;
#include "t133MD.h"
#include "t107MD.h"
extern MethodInfo m23484_MI;
extern MethodInfo m4759_MI;
extern MethodInfo m4764_MI;
extern MethodInfo m31076_MI;
struct t107;
#include "t1181.h"
 int32_t m31076 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m23480_MI;
 void m23480 (t4137 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23481_MI;
 t5 * m23481 (t4137 * __this, MethodInfo* method){
	{
		int32_t L_0 = m23484(__this, &m23484_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1961_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m23482_MI;
 void m23482 (t4137 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23483_MI;
 bool m23483 (t4137 * __this, MethodInfo* method){
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
		int32_t L_2 = m4764(L_1, &m4764_MI);
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
 int32_t m23484 (t4137 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t133 * L_1 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4759(L_1, (t11*) &_stringLiteral1079, &m4759_MI);
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
		m4759(L_3, (t11*) &_stringLiteral1080, &m4759_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t107 * L_4 = (__this->f0);
		t107 * L_5 = (__this->f0);
		int32_t L_6 = m4764(L_5, &m4764_MI);
		int32_t L_7 = (__this->f1);
		int32_t L_8 = m31076(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m31076_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.DateTime/Which>
extern Il2CppType t107_0_0_1;
FieldInfo t4137_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4137_TI, offsetof(t4137, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4137_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4137_TI, offsetof(t4137, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4137_FIs[] =
{
	&t4137_f0_FieldInfo,
	&t4137_f1_FieldInfo,
	NULL
};
static PropertyInfo t4137____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4137_TI, "System.Collections.IEnumerator.Current", &m23481_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4137____Current_PropertyInfo = 
{
	&t4137_TI, "Current", &m23484_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4137_PIs[] =
{
	&t4137____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4137____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
extern Il2CppType t107_0_0_0;
static ParameterInfo t4137_m23480_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23480_GM;
MethodInfo m23480_MI = 
{
	".ctor", (methodPointerType)&m23480, &t4137_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4137_m23480_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23480_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23481_GM;
MethodInfo m23481_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m23481, &t4137_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23481_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23482_GM;
MethodInfo m23482_MI = 
{
	"Dispose", (methodPointerType)&m23482, &t4137_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23482_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23483_GM;
MethodInfo m23483_MI = 
{
	"MoveNext", (methodPointerType)&m23483, &t4137_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23483_GM};
extern Il2CppType t1961_0_0_0;
extern void* RuntimeInvoker_t1961 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23484_GM;
MethodInfo m23484_MI = 
{
	"get_Current", (methodPointerType)&m23484, &t4137_TI, &t1961_0_0_0, RuntimeInvoker_t1961, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23484_GM};
static MethodInfo* t4137_MIs[] =
{
	&m23480_MI,
	&m23481_MI,
	&m23482_MI,
	&m23483_MI,
	&m23484_MI,
	NULL
};
extern MethodInfo m2042_MI;
extern MethodInfo m2043_MI;
extern MethodInfo m2148_MI;
static MethodInfo* t4137_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m23481_MI,
	&m23483_MI,
	&m23482_MI,
	&m23484_MI,
};
static TypeInfo* t4137_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5836_TI,
};
static Il2CppInterfaceOffsetPair t4137_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5836_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4137_0_0_0;
extern Il2CppType t4137_1_0_0;
extern TypeInfo t267_TI;
extern Il2CppGenericClass t4137_GC;
extern TypeInfo t107_TI;
TypeInfo t4137_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4137_MIs, t4137_PIs, t4137_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4137_TI, t4137_ITIs, t4137_VT, &EmptyCustomAttributesCache, &t4137_TI, &t4137_0_0_0, &t4137_1_0_0, t4137_IOs, &t4137_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4137)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7512_TI;

#include "mscorlib_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.DateTime/Which>
extern MethodInfo m39813_MI;
static PropertyInfo t7512____Count_PropertyInfo = 
{
	&t7512_TI, "Count", &m39813_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39814_MI;
static PropertyInfo t7512____IsReadOnly_PropertyInfo = 
{
	&t7512_TI, "IsReadOnly", &m39814_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7512_PIs[] =
{
	&t7512____Count_PropertyInfo,
	&t7512____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39813_GM;
MethodInfo m39813_MI = 
{
	"get_Count", NULL, &t7512_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39813_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39814_GM;
MethodInfo m39814_MI = 
{
	"get_IsReadOnly", NULL, &t7512_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39814_GM};
extern Il2CppType t1961_0_0_0;
extern Il2CppType t1961_0_0_0;
static ParameterInfo t7512_m39815_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1961_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39815_GM;
MethodInfo m39815_MI = 
{
	"Add", NULL, &t7512_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7512_m39815_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39815_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39816_GM;
MethodInfo m39816_MI = 
{
	"Clear", NULL, &t7512_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39816_GM};
extern Il2CppType t1961_0_0_0;
static ParameterInfo t7512_m39817_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1961_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39817_GM;
MethodInfo m39817_MI = 
{
	"Contains", NULL, &t7512_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7512_m39817_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39817_GM};
extern Il2CppType t4374_0_0_0;
extern Il2CppType t4374_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7512_m39818_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4374_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39818_GM;
MethodInfo m39818_MI = 
{
	"CopyTo", NULL, &t7512_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7512_m39818_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39818_GM};
extern Il2CppType t1961_0_0_0;
static ParameterInfo t7512_m39819_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1961_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39819_GM;
MethodInfo m39819_MI = 
{
	"Remove", NULL, &t7512_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7512_m39819_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39819_GM};
static MethodInfo* t7512_MIs[] =
{
	&m39813_MI,
	&m39814_MI,
	&m39815_MI,
	&m39816_MI,
	&m39817_MI,
	&m39818_MI,
	&m39819_MI,
	NULL
};
extern TypeInfo t739_TI;
extern TypeInfo t7514_TI;
static TypeInfo* t7512_ITIs[] = 
{
	&t739_TI,
	&t7514_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7512_0_0_0;
extern Il2CppType t7512_1_0_0;
struct t7512;
extern Il2CppGenericClass t7512_GC;
TypeInfo t7512_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7512_MIs, t7512_PIs, NULL, NULL, NULL, NULL, NULL, &t7512_TI, t7512_ITIs, NULL, &EmptyCustomAttributesCache, &t7512_TI, &t7512_0_0_0, &t7512_1_0_0, NULL, &t7512_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.DateTime/Which>
extern Il2CppType t5836_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39820_GM;
MethodInfo m39820_MI = 
{
	"GetEnumerator", NULL, &t7514_TI, &t5836_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39820_GM};
static MethodInfo* t7514_MIs[] =
{
	&m39820_MI,
	NULL
};
static TypeInfo* t7514_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7514_0_0_0;
extern Il2CppType t7514_1_0_0;
struct t7514;
extern Il2CppGenericClass t7514_GC;
TypeInfo t7514_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7514_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7514_TI, t7514_ITIs, NULL, &EmptyCustomAttributesCache, &t7514_TI, &t7514_0_0_0, &t7514_1_0_0, NULL, &t7514_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7513_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.DateTime/Which>
extern MethodInfo m39821_MI;
extern MethodInfo m39822_MI;
static PropertyInfo t7513____Item_PropertyInfo = 
{
	&t7513_TI, "Item", &m39821_MI, &m39822_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7513_PIs[] =
{
	&t7513____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1961_0_0_0;
static ParameterInfo t7513_m39823_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1961_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39823_GM;
MethodInfo m39823_MI = 
{
	"IndexOf", NULL, &t7513_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t7513_m39823_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39823_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1961_0_0_0;
static ParameterInfo t7513_m39824_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1961_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39824_GM;
MethodInfo m39824_MI = 
{
	"Insert", NULL, &t7513_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7513_m39824_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39824_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7513_m39825_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39825_GM;
MethodInfo m39825_MI = 
{
	"RemoveAt", NULL, &t7513_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7513_m39825_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39825_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7513_m39821_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1961_0_0_0;
extern void* RuntimeInvoker_t1961_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39821_GM;
MethodInfo m39821_MI = 
{
	"get_Item", NULL, &t7513_TI, &t1961_0_0_0, RuntimeInvoker_t1961_t110, t7513_m39821_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39821_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1961_0_0_0;
static ParameterInfo t7513_m39822_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1961_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39822_GM;
MethodInfo m39822_MI = 
{
	"set_Item", NULL, &t7513_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7513_m39822_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39822_GM};
static MethodInfo* t7513_MIs[] =
{
	&m39823_MI,
	&m39824_MI,
	&m39825_MI,
	&m39821_MI,
	&m39822_MI,
	NULL
};
static TypeInfo* t7513_ITIs[] = 
{
	&t739_TI,
	&t7512_TI,
	&t7514_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7513_0_0_0;
extern Il2CppType t7513_1_0_0;
struct t7513;
extern Il2CppGenericClass t7513_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7513_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7513_MIs, t7513_PIs, NULL, NULL, NULL, NULL, NULL, &t7513_TI, t7513_ITIs, NULL, &t2240__CustomAttributeCache, &t7513_TI, &t7513_0_0_0, &t7513_1_0_0, NULL, &t7513_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5838_TI;

#include "t1962.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.DateTimeKind>
extern MethodInfo m39826_MI;
static PropertyInfo t5838____Current_PropertyInfo = 
{
	&t5838_TI, "Current", &m39826_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5838_PIs[] =
{
	&t5838____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1962_0_0_0;
extern void* RuntimeInvoker_t1962 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39826_GM;
MethodInfo m39826_MI = 
{
	"get_Current", NULL, &t5838_TI, &t1962_0_0_0, RuntimeInvoker_t1962, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39826_GM};
static MethodInfo* t5838_MIs[] =
{
	&m39826_MI,
	NULL
};
static TypeInfo* t5838_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5838_0_0_0;
extern Il2CppType t5838_1_0_0;
struct t5838;
extern Il2CppGenericClass t5838_GC;
TypeInfo t5838_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5838_MIs, t5838_PIs, NULL, NULL, NULL, NULL, NULL, &t5838_TI, t5838_ITIs, NULL, &EmptyCustomAttributesCache, &t5838_TI, &t5838_0_0_0, &t5838_1_0_0, NULL, &t5838_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4138.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4138_TI;
#include "t4138MD.h"

extern TypeInfo t1962_TI;
extern MethodInfo m23489_MI;
extern MethodInfo m31087_MI;
struct t107;
 int32_t m31087 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m23485_MI;
 void m23485 (t4138 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23486_MI;
 t5 * m23486 (t4138 * __this, MethodInfo* method){
	{
		int32_t L_0 = m23489(__this, &m23489_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1962_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m23487_MI;
 void m23487 (t4138 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23488_MI;
 bool m23488 (t4138 * __this, MethodInfo* method){
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
		int32_t L_2 = m4764(L_1, &m4764_MI);
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
 int32_t m23489 (t4138 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t133 * L_1 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4759(L_1, (t11*) &_stringLiteral1079, &m4759_MI);
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
		m4759(L_3, (t11*) &_stringLiteral1080, &m4759_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t107 * L_4 = (__this->f0);
		t107 * L_5 = (__this->f0);
		int32_t L_6 = m4764(L_5, &m4764_MI);
		int32_t L_7 = (__this->f1);
		int32_t L_8 = m31087(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m31087_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.DateTimeKind>
extern Il2CppType t107_0_0_1;
FieldInfo t4138_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4138_TI, offsetof(t4138, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4138_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4138_TI, offsetof(t4138, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4138_FIs[] =
{
	&t4138_f0_FieldInfo,
	&t4138_f1_FieldInfo,
	NULL
};
static PropertyInfo t4138____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4138_TI, "System.Collections.IEnumerator.Current", &m23486_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4138____Current_PropertyInfo = 
{
	&t4138_TI, "Current", &m23489_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4138_PIs[] =
{
	&t4138____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4138____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4138_m23485_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23485_GM;
MethodInfo m23485_MI = 
{
	".ctor", (methodPointerType)&m23485, &t4138_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4138_m23485_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23485_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23486_GM;
MethodInfo m23486_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m23486, &t4138_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23486_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23487_GM;
MethodInfo m23487_MI = 
{
	"Dispose", (methodPointerType)&m23487, &t4138_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23487_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23488_GM;
MethodInfo m23488_MI = 
{
	"MoveNext", (methodPointerType)&m23488, &t4138_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23488_GM};
extern Il2CppType t1962_0_0_0;
extern void* RuntimeInvoker_t1962 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23489_GM;
MethodInfo m23489_MI = 
{
	"get_Current", (methodPointerType)&m23489, &t4138_TI, &t1962_0_0_0, RuntimeInvoker_t1962, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23489_GM};
static MethodInfo* t4138_MIs[] =
{
	&m23485_MI,
	&m23486_MI,
	&m23487_MI,
	&m23488_MI,
	&m23489_MI,
	NULL
};
static MethodInfo* t4138_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m23486_MI,
	&m23488_MI,
	&m23487_MI,
	&m23489_MI,
};
static TypeInfo* t4138_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5838_TI,
};
static Il2CppInterfaceOffsetPair t4138_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5838_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4138_0_0_0;
extern Il2CppType t4138_1_0_0;
extern Il2CppGenericClass t4138_GC;
TypeInfo t4138_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4138_MIs, t4138_PIs, t4138_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4138_TI, t4138_ITIs, t4138_VT, &EmptyCustomAttributesCache, &t4138_TI, &t4138_0_0_0, &t4138_1_0_0, t4138_IOs, &t4138_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4138)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7515_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.DateTimeKind>
extern MethodInfo m39827_MI;
static PropertyInfo t7515____Count_PropertyInfo = 
{
	&t7515_TI, "Count", &m39827_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39828_MI;
static PropertyInfo t7515____IsReadOnly_PropertyInfo = 
{
	&t7515_TI, "IsReadOnly", &m39828_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7515_PIs[] =
{
	&t7515____Count_PropertyInfo,
	&t7515____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39827_GM;
MethodInfo m39827_MI = 
{
	"get_Count", NULL, &t7515_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39827_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39828_GM;
MethodInfo m39828_MI = 
{
	"get_IsReadOnly", NULL, &t7515_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39828_GM};
extern Il2CppType t1962_0_0_0;
extern Il2CppType t1962_0_0_0;
static ParameterInfo t7515_m39829_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1962_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39829_GM;
MethodInfo m39829_MI = 
{
	"Add", NULL, &t7515_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7515_m39829_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39829_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39830_GM;
MethodInfo m39830_MI = 
{
	"Clear", NULL, &t7515_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39830_GM};
extern Il2CppType t1962_0_0_0;
static ParameterInfo t7515_m39831_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1962_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39831_GM;
MethodInfo m39831_MI = 
{
	"Contains", NULL, &t7515_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7515_m39831_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39831_GM};
extern Il2CppType t4375_0_0_0;
extern Il2CppType t4375_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7515_m39832_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4375_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39832_GM;
MethodInfo m39832_MI = 
{
	"CopyTo", NULL, &t7515_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7515_m39832_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39832_GM};
extern Il2CppType t1962_0_0_0;
static ParameterInfo t7515_m39833_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1962_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39833_GM;
MethodInfo m39833_MI = 
{
	"Remove", NULL, &t7515_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7515_m39833_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39833_GM};
static MethodInfo* t7515_MIs[] =
{
	&m39827_MI,
	&m39828_MI,
	&m39829_MI,
	&m39830_MI,
	&m39831_MI,
	&m39832_MI,
	&m39833_MI,
	NULL
};
extern TypeInfo t7517_TI;
static TypeInfo* t7515_ITIs[] = 
{
	&t739_TI,
	&t7517_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7515_0_0_0;
extern Il2CppType t7515_1_0_0;
struct t7515;
extern Il2CppGenericClass t7515_GC;
TypeInfo t7515_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7515_MIs, t7515_PIs, NULL, NULL, NULL, NULL, NULL, &t7515_TI, t7515_ITIs, NULL, &EmptyCustomAttributesCache, &t7515_TI, &t7515_0_0_0, &t7515_1_0_0, NULL, &t7515_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.DateTimeKind>
extern Il2CppType t5838_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39834_GM;
MethodInfo m39834_MI = 
{
	"GetEnumerator", NULL, &t7517_TI, &t5838_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39834_GM};
static MethodInfo* t7517_MIs[] =
{
	&m39834_MI,
	NULL
};
static TypeInfo* t7517_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7517_0_0_0;
extern Il2CppType t7517_1_0_0;
struct t7517;
extern Il2CppGenericClass t7517_GC;
TypeInfo t7517_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7517_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7517_TI, t7517_ITIs, NULL, &EmptyCustomAttributesCache, &t7517_TI, &t7517_0_0_0, &t7517_1_0_0, NULL, &t7517_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7516_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.DateTimeKind>
extern MethodInfo m39835_MI;
extern MethodInfo m39836_MI;
static PropertyInfo t7516____Item_PropertyInfo = 
{
	&t7516_TI, "Item", &m39835_MI, &m39836_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7516_PIs[] =
{
	&t7516____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1962_0_0_0;
static ParameterInfo t7516_m39837_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1962_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39837_GM;
MethodInfo m39837_MI = 
{
	"IndexOf", NULL, &t7516_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t7516_m39837_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39837_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1962_0_0_0;
static ParameterInfo t7516_m39838_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1962_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39838_GM;
MethodInfo m39838_MI = 
{
	"Insert", NULL, &t7516_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7516_m39838_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39838_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7516_m39839_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39839_GM;
MethodInfo m39839_MI = 
{
	"RemoveAt", NULL, &t7516_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7516_m39839_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39839_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7516_m39835_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1962_0_0_0;
extern void* RuntimeInvoker_t1962_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39835_GM;
MethodInfo m39835_MI = 
{
	"get_Item", NULL, &t7516_TI, &t1962_0_0_0, RuntimeInvoker_t1962_t110, t7516_m39835_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39835_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1962_0_0_0;
static ParameterInfo t7516_m39836_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1962_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39836_GM;
MethodInfo m39836_MI = 
{
	"set_Item", NULL, &t7516_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7516_m39836_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39836_GM};
static MethodInfo* t7516_MIs[] =
{
	&m39837_MI,
	&m39838_MI,
	&m39839_MI,
	&m39835_MI,
	&m39836_MI,
	NULL
};
static TypeInfo* t7516_ITIs[] = 
{
	&t739_TI,
	&t7515_TI,
	&t7517_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7516_0_0_0;
extern Il2CppType t7516_1_0_0;
struct t7516;
extern Il2CppGenericClass t7516_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7516_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7516_MIs, t7516_PIs, NULL, NULL, NULL, NULL, NULL, &t7516_TI, t7516_ITIs, NULL, &t2240__CustomAttributeCache, &t7516_TI, &t7516_0_0_0, &t7516_1_0_0, NULL, &t7516_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2419_TI;

#include "t1963.h"


// Metadata Definition System.IComparable`1<System.DateTimeOffset>
extern Il2CppType t1963_0_0_0;
extern Il2CppType t1963_0_0_0;
static ParameterInfo t2419_m39840_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t1963 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39840_GM;
MethodInfo m39840_MI = 
{
	"CompareTo", NULL, &t2419_TI, &t110_0_0_0, RuntimeInvoker_t110_t1963, t2419_m39840_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39840_GM};
static MethodInfo* t2419_MIs[] =
{
	&m39840_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2419_0_0_0;
extern Il2CppType t2419_1_0_0;
struct t2419;
extern Il2CppGenericClass t2419_GC;
TypeInfo t2419_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t2419_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2419_TI, NULL, NULL, &EmptyCustomAttributesCache, &t2419_TI, &t2419_0_0_0, &t2419_1_0_0, NULL, &t2419_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2420_TI;



// Metadata Definition System.IEquatable`1<System.DateTimeOffset>
extern Il2CppType t1963_0_0_0;
static ParameterInfo t2420_m39841_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t1963 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39841_GM;
MethodInfo m39841_MI = 
{
	"Equals", NULL, &t2420_TI, &t108_0_0_0, RuntimeInvoker_t108_t1963, t2420_m39841_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39841_GM};
static MethodInfo* t2420_MIs[] =
{
	&m39841_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2420_0_0_0;
extern Il2CppType t2420_1_0_0;
struct t2420;
extern Il2CppGenericClass t2420_GC;
TypeInfo t2420_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t2420_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2420_TI, NULL, NULL, &EmptyCustomAttributesCache, &t2420_TI, &t2420_0_0_0, &t2420_1_0_0, NULL, &t2420_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2417.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2417_TI;
#include "t2417MD.h"

extern TypeInfo t1963_TI;
#include "t4139MD.h"
extern MethodInfo m23491_MI;
extern MethodInfo m39840_MI;


extern MethodInfo m11619_MI;
 void m11619 (t2417 * __this, MethodInfo* method){
	{
		m23491(__this, &m23491_MI);
		return;
	}
}
extern MethodInfo m23490_MI;
 int32_t m23490 (t2417 * __this, t1963  p0, t1963  p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t1963  L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t1963_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t1963  L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1963_TI), &L_2);
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
		t1963  L_4 = p1;
		t5 * L_5 = Box(InitializedTypeInfo(&t1963_TI), &L_4);
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
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, t1963  >::Invoke(&m39840_MI, Box(InitializedTypeInfo(&t1963_TI), &(*(&p0))), p1);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m11619_GM;
MethodInfo m11619_MI = 
{
	".ctor", (methodPointerType)&m11619, &t2417_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m11619_GM};
extern Il2CppType t1963_0_0_0;
extern Il2CppType t1963_0_0_0;
static ParameterInfo t2417_m23490_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t1963_t1963 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23490_GM;
MethodInfo m23490_MI = 
{
	"Compare", (methodPointerType)&m23490, &t2417_TI, &t110_0_0_0, RuntimeInvoker_t110_t1963_t1963, t2417_m23490_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23490_GM};
static MethodInfo* t2417_MIs[] =
{
	&m11619_MI,
	&m23490_MI,
	NULL
};
extern MethodInfo m23493_MI;
static MethodInfo* t2417_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m23490_MI,
	&m23493_MI,
	&m23490_MI,
};
extern TypeInfo t7723_TI;
extern TypeInfo t991_TI;
static Il2CppInterfaceOffsetPair t2417_IOs[] = 
{
	{ &t7723_TI, 4},
	{ &t991_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2417_0_0_0;
extern Il2CppType t2417_1_0_0;
extern TypeInfo t4139_TI;
struct t2417;
extern Il2CppGenericClass t2417_GC;
TypeInfo t2417_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericComparer`1", "System.Collections.Generic", t2417_MIs, NULL, NULL, NULL, &t4139_TI, NULL, NULL, &t2417_TI, NULL, t2417_VT, &EmptyCustomAttributesCache, &t2417_TI, &t2417_0_0_0, &t2417_1_0_0, t2417_IOs, &t2417_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2417), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t4139.h"
#ifndef _MSC_VER
#else
#endif

#include "t114.h"
#include "t115.h"
#include "t1510.h"
#include "t4140.h"
#include "t160.h"
extern TypeInfo t114_TI;
extern TypeInfo t1510_TI;
extern TypeInfo t675_TI;
extern TypeInfo t4140_TI;
extern TypeInfo t160_TI;
#include "t114MD.h"
#include "t1196MD.h"
#include "t4140MD.h"
#include "t160MD.h"
extern Il2CppType t1510_0_0_0;
extern MethodInfo m460_MI;
extern MethodInfo m532_MI;
extern MethodInfo m3627_MI;
extern MethodInfo m3625_MI;
extern MethodInfo m10126_MI;
extern MethodInfo m23495_MI;
extern MethodInfo m39842_MI;
extern MethodInfo m10152_MI;


 void m23491 (t4139 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m23492_MI;
 void m23492 (t5 * __this, MethodInfo* method){
	t4140 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t4140 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t4140_TI));
	m23495(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m23495_MI);
	((t4139_SFs*)InitializedTypeInfo(&t4139_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
 int32_t m23493 (t4139 * __this, t5 * p0, t5 * p1, MethodInfo* method){
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
		if (!((t5 *)IsInst(p0, InitializedTypeInfo(&t1963_TI))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((t5 *)IsInst(p1, InitializedTypeInfo(&t1963_TI))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, t1963 , t1963  >::Invoke(&m39842_MI, __this, ((*(t1963 *)((t1963 *)UnBox (p0, InitializedTypeInfo(&t1963_TI))))), ((*(t1963 *)((t1963 *)UnBox (p1, InitializedTypeInfo(&t1963_TI))))));
		return L_0;
	}

IL_0033:
	{
		t160 * L_1 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m10152(L_1, &m10152_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m23494_MI;
 t4139 * m23494 (t5 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t4139_TI));
		return (((t4139_SFs*)InitializedTypeInfo(&t4139_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<System.DateTimeOffset>
extern Il2CppType t4139_0_0_49;
FieldInfo t4139_f0_FieldInfo = 
{
	"_default", &t4139_0_0_49, &t4139_TI, offsetof(t4139_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t4139_FIs[] =
{
	&t4139_f0_FieldInfo,
	NULL
};
static PropertyInfo t4139____Default_PropertyInfo = 
{
	&t4139_TI, "Default", &m23494_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4139_PIs[] =
{
	&t4139____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23491_GM;
MethodInfo m23491_MI = 
{
	".ctor", (methodPointerType)&m23491, &t4139_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23491_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23492_GM;
MethodInfo m23492_MI = 
{
	".cctor", (methodPointerType)&m23492, &t4139_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23492_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t4139_m23493_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23493_GM;
MethodInfo m23493_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m23493, &t4139_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t4139_m23493_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23493_GM};
extern Il2CppType t1963_0_0_0;
extern Il2CppType t1963_0_0_0;
static ParameterInfo t4139_m39842_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t1963_t1963 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39842_GM;
MethodInfo m39842_MI = 
{
	"Compare", NULL, &t4139_TI, &t110_0_0_0, RuntimeInvoker_t110_t1963_t1963, t4139_m39842_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39842_GM};
extern Il2CppType t4139_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23494_GM;
MethodInfo m23494_MI = 
{
	"get_Default", (methodPointerType)&m23494, &t4139_TI, &t4139_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23494_GM};
static MethodInfo* t4139_MIs[] =
{
	&m23491_MI,
	&m23492_MI,
	&m23493_MI,
	&m39842_MI,
	&m23494_MI,
	NULL
};
static MethodInfo* t4139_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m39842_MI,
	&m23493_MI,
	NULL,
};
static TypeInfo* t4139_ITIs[] = 
{
	&t7723_TI,
	&t991_TI,
};
static Il2CppInterfaceOffsetPair t4139_IOs[] = 
{
	{ &t7723_TI, 4},
	{ &t991_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4139_0_0_0;
extern Il2CppType t4139_1_0_0;
struct t4139;
extern Il2CppGenericClass t4139_GC;
TypeInfo t4139_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t4139_MIs, t4139_PIs, t4139_FIs, NULL, &t5_TI, NULL, NULL, &t4139_TI, t4139_ITIs, t4139_VT, &EmptyCustomAttributesCache, &t4139_TI, &t4139_0_0_0, &t4139_1_0_0, t4139_IOs, &t4139_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4139), 0, -1, sizeof(t4139_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IComparer`1<System.DateTimeOffset>
extern Il2CppType t1963_0_0_0;
extern Il2CppType t1963_0_0_0;
static ParameterInfo t7723_m39843_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t1963_t1963 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39843_GM;
MethodInfo m39843_MI = 
{
	"Compare", NULL, &t7723_TI, &t110_0_0_0, RuntimeInvoker_t110_t1963_t1963, t7723_m39843_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39843_GM};
static MethodInfo* t7723_MIs[] =
{
	&m39843_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7723_0_0_0;
extern Il2CppType t7723_1_0_0;
struct t7723;
extern Il2CppGenericClass t7723_GC;
TypeInfo t7723_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t7723_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7723_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7723_TI, &t7723_0_0_0, &t7723_1_0_0, NULL, &t7723_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t122_TI;
extern MethodInfo m11009_MI;
extern MethodInfo m2582_MI;


 void m23495 (t4140 * __this, MethodInfo* method){
	{
		m23491(__this, &m23491_MI);
		return;
	}
}
extern MethodInfo m23496_MI;
 int32_t m23496 (t4140 * __this, t1963  p0, t1963  p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t1963  L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t1963_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t1963  L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1963_TI), &L_2);
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
		t1963  L_4 = p1;
		t5 * L_5 = Box(InitializedTypeInfo(&t1963_TI), &L_4);
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
		t1963  L_6 = p0;
		t5 * L_7 = Box(InitializedTypeInfo(&t1963_TI), &L_6);
		if (!((t5*)IsInst(L_7, InitializedTypeInfo(&t2419_TI))))
		{
			goto IL_003e;
		}
	}
	{
		t1963  L_8 = p0;
		t5 * L_9 = Box(InitializedTypeInfo(&t1963_TI), &L_8);
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, t1963  >::Invoke(&m39840_MI, ((t5*)Castclass(L_9, InitializedTypeInfo(&t2419_TI))), p1);
		return L_10;
	}

IL_003e:
	{
		t1963  L_11 = p0;
		t5 * L_12 = Box(InitializedTypeInfo(&t1963_TI), &L_11);
		if (!((t5 *)IsInst(L_12, InitializedTypeInfo(&t122_TI))))
		{
			goto IL_0062;
		}
	}
	{
		t1963  L_13 = p0;
		t5 * L_14 = Box(InitializedTypeInfo(&t1963_TI), &L_13);
		t1963  L_15 = p1;
		t5 * L_16 = Box(InitializedTypeInfo(&t1963_TI), &L_15);
		int32_t L_17 = (int32_t)InterfaceFuncInvoker1< int32_t, t5 * >::Invoke(&m11009_MI, ((t5 *)Castclass(L_14, InitializedTypeInfo(&t122_TI))), L_16);
		return L_17;
	}

IL_0062:
	{
		t160 * L_18 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2582(L_18, (t11*) &_stringLiteral1209, &m2582_MI);
		il2cpp_codegen_raise_exception(L_18);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23495_GM;
MethodInfo m23495_MI = 
{
	".ctor", (methodPointerType)&m23495, &t4140_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23495_GM};
extern Il2CppType t1963_0_0_0;
extern Il2CppType t1963_0_0_0;
static ParameterInfo t4140_m23496_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t1963_t1963 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23496_GM;
MethodInfo m23496_MI = 
{
	"Compare", (methodPointerType)&m23496, &t4140_TI, &t110_0_0_0, RuntimeInvoker_t110_t1963_t1963, t4140_m23496_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23496_GM};
static MethodInfo* t4140_MIs[] =
{
	&m23495_MI,
	&m23496_MI,
	NULL
};
static MethodInfo* t4140_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m23496_MI,
	&m23493_MI,
	&m23496_MI,
};
static Il2CppInterfaceOffsetPair t4140_IOs[] = 
{
	{ &t7723_TI, 4},
	{ &t991_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4140_0_0_0;
extern Il2CppType t4140_1_0_0;
struct t4140;
extern Il2CppGenericClass t4140_GC;
extern TypeInfo t1509_TI;
TypeInfo t4140_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t4140_MIs, NULL, NULL, NULL, &t4139_TI, NULL, &t1509_TI, &t4140_TI, NULL, t4140_VT, &EmptyCustomAttributesCache, &t4140_TI, &t4140_0_0_0, &t4140_1_0_0, t4140_IOs, &t4140_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4140), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t2418.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2418_TI;
#include "t2418MD.h"

#include "t4141MD.h"
extern MethodInfo m23499_MI;
extern MethodInfo m39841_MI;


extern MethodInfo m11620_MI;
 void m11620 (t2418 * __this, MethodInfo* method){
	{
		m23499(__this, &m23499_MI);
		return;
	}
}
extern MethodInfo m23497_MI;
 int32_t m23497 (t2418 * __this, t1963  p0, MethodInfo* method){
	{
		t1963  L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t1963_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m466_MI, Box(InitializedTypeInfo(&t1963_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m23498_MI;
 bool m23498 (t2418 * __this, t1963  p0, t1963  p1, MethodInfo* method){
	{
		t1963  L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t1963_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t1963  L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1963_TI), &L_2);
		return ((((t5 *)L_3) == ((t5 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, t1963  >::Invoke(&m39841_MI, Box(InitializedTypeInfo(&t1963_TI), &(*(&p0))), p1);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m11620_GM;
MethodInfo m11620_MI = 
{
	".ctor", (methodPointerType)&m11620, &t2418_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m11620_GM};
extern Il2CppType t1963_0_0_0;
static ParameterInfo t2418_m23497_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t1963 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23497_GM;
MethodInfo m23497_MI = 
{
	"GetHashCode", (methodPointerType)&m23497, &t2418_TI, &t110_0_0_0, RuntimeInvoker_t110_t1963, t2418_m23497_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23497_GM};
extern Il2CppType t1963_0_0_0;
extern Il2CppType t1963_0_0_0;
static ParameterInfo t2418_m23498_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t1963_t1963 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23498_GM;
MethodInfo m23498_MI = 
{
	"Equals", (methodPointerType)&m23498, &t2418_TI, &t108_0_0_0, RuntimeInvoker_t108_t1963_t1963, t2418_m23498_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23498_GM};
static MethodInfo* t2418_MIs[] =
{
	&m11620_MI,
	&m23497_MI,
	&m23498_MI,
	NULL
};
extern MethodInfo m23502_MI;
extern MethodInfo m23501_MI;
static MethodInfo* t2418_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m23498_MI,
	&m23497_MI,
	&m23502_MI,
	&m23501_MI,
	&m23497_MI,
	&m23498_MI,
};
extern TypeInfo t7724_TI;
static Il2CppInterfaceOffsetPair t2418_IOs[] = 
{
	{ &t7724_TI, 4},
	{ &t998_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2418_0_0_0;
extern Il2CppType t2418_1_0_0;
extern TypeInfo t4141_TI;
struct t2418;
extern Il2CppGenericClass t2418_GC;
TypeInfo t2418_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericEqualityComparer`1", "System.Collections.Generic", t2418_MIs, NULL, NULL, NULL, &t4141_TI, NULL, NULL, &t2418_TI, NULL, t2418_VT, &EmptyCustomAttributesCache, &t2418_TI, &t2418_0_0_0, &t2418_1_0_0, t2418_IOs, &t2418_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2418), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t4141.h"
#ifndef _MSC_VER
#else
#endif

#include "t1520.h"
#include "t4142.h"
extern TypeInfo t1520_TI;
extern TypeInfo t4142_TI;
#include "t4142MD.h"
extern Il2CppType t1520_0_0_0;
extern MethodInfo m23504_MI;
extern MethodInfo m39844_MI;
extern MethodInfo m39845_MI;


 void m23499 (t4141 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m23500_MI;
 void m23500 (t5 * __this, MethodInfo* method){
	t4142 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t4142 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t4142_TI));
	m23504(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m23504_MI);
	((t4141_SFs*)InitializedTypeInfo(&t4141_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
 int32_t m23501 (t4141 * __this, t5 * p0, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t1963  >::Invoke(&m39844_MI, __this, ((*(t1963 *)((t1963 *)UnBox (p0, InitializedTypeInfo(&t1963_TI))))));
		return L_0;
	}
}
 bool m23502 (t4141 * __this, t5 * p0, t5 * p1, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, t1963 , t1963  >::Invoke(&m39845_MI, __this, ((*(t1963 *)((t1963 *)UnBox (p0, InitializedTypeInfo(&t1963_TI))))), ((*(t1963 *)((t1963 *)UnBox (p1, InitializedTypeInfo(&t1963_TI))))));
		return L_0;
	}
}
extern MethodInfo m23503_MI;
 t4141 * m23503 (t5 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t4141_TI));
		return (((t4141_SFs*)InitializedTypeInfo(&t4141_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>
extern Il2CppType t4141_0_0_49;
FieldInfo t4141_f0_FieldInfo = 
{
	"_default", &t4141_0_0_49, &t4141_TI, offsetof(t4141_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t4141_FIs[] =
{
	&t4141_f0_FieldInfo,
	NULL
};
static PropertyInfo t4141____Default_PropertyInfo = 
{
	&t4141_TI, "Default", &m23503_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4141_PIs[] =
{
	&t4141____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23499_GM;
MethodInfo m23499_MI = 
{
	".ctor", (methodPointerType)&m23499, &t4141_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23499_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23500_GM;
MethodInfo m23500_MI = 
{
	".cctor", (methodPointerType)&m23500, &t4141_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23500_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t4141_m23501_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23501_GM;
MethodInfo m23501_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m23501, &t4141_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t4141_m23501_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23501_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t4141_m23502_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23502_GM;
MethodInfo m23502_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m23502, &t4141_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t4141_m23502_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23502_GM};
extern Il2CppType t1963_0_0_0;
static ParameterInfo t4141_m39844_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t1963 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39844_GM;
MethodInfo m39844_MI = 
{
	"GetHashCode", NULL, &t4141_TI, &t110_0_0_0, RuntimeInvoker_t110_t1963, t4141_m39844_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39844_GM};
extern Il2CppType t1963_0_0_0;
extern Il2CppType t1963_0_0_0;
static ParameterInfo t4141_m39845_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t1963_t1963 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39845_GM;
MethodInfo m39845_MI = 
{
	"Equals", NULL, &t4141_TI, &t108_0_0_0, RuntimeInvoker_t108_t1963_t1963, t4141_m39845_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39845_GM};
extern Il2CppType t4141_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23503_GM;
MethodInfo m23503_MI = 
{
	"get_Default", (methodPointerType)&m23503, &t4141_TI, &t4141_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23503_GM};
static MethodInfo* t4141_MIs[] =
{
	&m23499_MI,
	&m23500_MI,
	&m23501_MI,
	&m23502_MI,
	&m39844_MI,
	&m39845_MI,
	&m23503_MI,
	NULL
};
static MethodInfo* t4141_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m39845_MI,
	&m39844_MI,
	&m23502_MI,
	&m23501_MI,
	NULL,
	NULL,
};
static TypeInfo* t4141_ITIs[] = 
{
	&t7724_TI,
	&t998_TI,
};
static Il2CppInterfaceOffsetPair t4141_IOs[] = 
{
	{ &t7724_TI, 4},
	{ &t998_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4141_0_0_0;
extern Il2CppType t4141_1_0_0;
struct t4141;
extern Il2CppGenericClass t4141_GC;
TypeInfo t4141_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t4141_MIs, t4141_PIs, t4141_FIs, NULL, &t5_TI, NULL, NULL, &t4141_TI, t4141_ITIs, t4141_VT, &EmptyCustomAttributesCache, &t4141_TI, &t4141_0_0_0, &t4141_1_0_0, t4141_IOs, &t4141_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4141), 0, -1, sizeof(t4141_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.DateTimeOffset>
extern Il2CppType t1963_0_0_0;
extern Il2CppType t1963_0_0_0;
static ParameterInfo t7724_m39846_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t1963_t1963 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39846_GM;
MethodInfo m39846_MI = 
{
	"Equals", NULL, &t7724_TI, &t108_0_0_0, RuntimeInvoker_t108_t1963_t1963, t7724_m39846_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39846_GM};
extern Il2CppType t1963_0_0_0;
static ParameterInfo t7724_m39847_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t1963 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39847_GM;
MethodInfo m39847_MI = 
{
	"GetHashCode", NULL, &t7724_TI, &t110_0_0_0, RuntimeInvoker_t110_t1963, t7724_m39847_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39847_GM};
static MethodInfo* t7724_MIs[] =
{
	&m39846_MI,
	&m39847_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7724_0_0_0;
extern Il2CppType t7724_1_0_0;
struct t7724;
extern Il2CppGenericClass t7724_GC;
TypeInfo t7724_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t7724_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7724_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7724_TI, &t7724_0_0_0, &t7724_1_0_0, NULL, &t7724_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



 void m23504 (t4142 * __this, MethodInfo* method){
	{
		m23499(__this, &m23499_MI);
		return;
	}
}
extern MethodInfo m23505_MI;
 int32_t m23505 (t4142 * __this, t1963  p0, MethodInfo* method){
	{
		t1963  L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t1963_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m466_MI, Box(InitializedTypeInfo(&t1963_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m23506_MI;
 bool m23506 (t4142 * __this, t1963  p0, t1963  p1, MethodInfo* method){
	{
		t1963  L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t1963_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t1963  L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1963_TI), &L_2);
		return ((((t5 *)L_3) == ((t5 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t1963  L_4 = p1;
		t5 * L_5 = Box(InitializedTypeInfo(&t1963_TI), &L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1963_TI), &(*(&p0))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23504_GM;
MethodInfo m23504_MI = 
{
	".ctor", (methodPointerType)&m23504, &t4142_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23504_GM};
extern Il2CppType t1963_0_0_0;
static ParameterInfo t4142_m23505_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t1963 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23505_GM;
MethodInfo m23505_MI = 
{
	"GetHashCode", (methodPointerType)&m23505, &t4142_TI, &t110_0_0_0, RuntimeInvoker_t110_t1963, t4142_m23505_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23505_GM};
extern Il2CppType t1963_0_0_0;
extern Il2CppType t1963_0_0_0;
static ParameterInfo t4142_m23506_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t1963_t1963 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23506_GM;
MethodInfo m23506_MI = 
{
	"Equals", (methodPointerType)&m23506, &t4142_TI, &t108_0_0_0, RuntimeInvoker_t108_t1963_t1963, t4142_m23506_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23506_GM};
static MethodInfo* t4142_MIs[] =
{
	&m23504_MI,
	&m23505_MI,
	&m23506_MI,
	NULL
};
static MethodInfo* t4142_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m23506_MI,
	&m23505_MI,
	&m23502_MI,
	&m23501_MI,
	&m23505_MI,
	&m23506_MI,
};
static Il2CppInterfaceOffsetPair t4142_IOs[] = 
{
	{ &t7724_TI, 4},
	{ &t998_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4142_0_0_0;
extern Il2CppType t4142_1_0_0;
struct t4142;
extern Il2CppGenericClass t4142_GC;
TypeInfo t4142_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t4142_MIs, NULL, NULL, NULL, &t4141_TI, NULL, &t1519_TI, &t4142_TI, NULL, t4142_VT, &EmptyCustomAttributesCache, &t4142_TI, &t4142_0_0_0, &t4142_1_0_0, t4142_IOs, &t4142_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4142), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t1965.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1965_TI;
#include "t1965MD.h"

#include "t61.h"
#include "t267.h"
extern TypeInfo t61_TI;
extern TypeInfo t11_TI;
#include "t267MD.h"
#include "t11MD.h"
extern MethodInfo m23508_MI;


extern MethodInfo m11621_MI;
 void m11621 (t1965 * __this, t61  p0, MethodInfo* method){
	{
		__this->f1 = 1;
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m11622_MI;
 bool m11622 (t1965 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m11623_MI;
 t61  m11623 (t1965 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t133 * L_1 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4759(L_1, (t11*) &_stringLiteral1121, &m4759_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t61  L_2 = (__this->f0);
		return L_2;
	}
}
extern MethodInfo m23507_MI;
 bool m23507 (t1965 * __this, t5 * p0, MethodInfo* method){
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
		if (((t5 *)IsInst(p0, InitializedTypeInfo(&t1965_TI))))
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		void* L_1 = alloca(sizeof(t1965 ));
		UnBoxNullable(p0, InitializedTypeInfo(&t1965_TI), L_1);
		bool L_2 = m23508(__this, ((*(t1965 *)((t1965 *)L_1))), &m23508_MI);
		return L_2;
	}
}
 bool m23508 (t1965 * __this, t1965  p0, MethodInfo* method){
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
		t61 * L_3 = &((&p0)->f0);
		t61  L_4 = (__this->f0);
		t61  L_5 = L_4;
		t5 * L_6 = Box(InitializedTypeInfo(&t61_TI), &L_5);
		bool L_7 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m2042_MI, Box(InitializedTypeInfo(&t61_TI), &(*L_3)), L_6);
		return L_7;
	}
}
extern MethodInfo m23509_MI;
 int32_t m23509 (t1965 * __this, MethodInfo* method){
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
		t61 * L_1 = &(__this->f0);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m2043_MI, Box(InitializedTypeInfo(&t61_TI), &(*L_1)));
		return L_2;
	}
}
extern MethodInfo m23510_MI;
 t11* m23510 (t1965 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f1);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t61 * L_1 = &(__this->f0);
		t11* L_2 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m2148_MI, Box(InitializedTypeInfo(&t61_TI), &(*L_1)));
		return L_2;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		return (((t11_SFs*)(&t11_TI)->static_fields)->f2);
	}
}
// Metadata Definition System.Nullable`1<System.TimeSpan>
extern Il2CppType t61_0_0_3;
FieldInfo t1965_f0_FieldInfo = 
{
	"value", &t61_0_0_3, &t1965_TI, offsetof(t1965, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_3;
FieldInfo t1965_f1_FieldInfo = 
{
	"has_value", &t108_0_0_3, &t1965_TI, offsetof(t1965, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t1965_FIs[] =
{
	&t1965_f0_FieldInfo,
	&t1965_f1_FieldInfo,
	NULL
};
static PropertyInfo t1965____HasValue_PropertyInfo = 
{
	&t1965_TI, "HasValue", &m11622_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1965____Value_PropertyInfo = 
{
	&t1965_TI, "Value", &m11623_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1965_PIs[] =
{
	&t1965____HasValue_PropertyInfo,
	&t1965____Value_PropertyInfo,
	NULL
};
extern Il2CppType t61_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t1965_m11621_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t61 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m11621_GM;
MethodInfo m11621_MI = 
{
	".ctor", (methodPointerType)&m11621, &t1965_TI, &t109_0_0_0, RuntimeInvoker_t109_t61, t1965_m11621_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m11621_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m11622_GM;
MethodInfo m11622_MI = 
{
	"get_HasValue", (methodPointerType)&m11622, &t1965_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m11622_GM};
extern Il2CppType t61_0_0_0;
extern void* RuntimeInvoker_t61 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m11623_GM;
MethodInfo m11623_MI = 
{
	"get_Value", (methodPointerType)&m11623, &t1965_TI, &t61_0_0_0, RuntimeInvoker_t61, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m11623_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1965_m23507_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23507_GM;
MethodInfo m23507_MI = 
{
	"Equals", (methodPointerType)&m23507, &t1965_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t1965_m23507_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23507_GM};
extern Il2CppType t1965_0_0_0;
extern Il2CppType t1965_0_0_0;
static ParameterInfo t1965_m23508_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t1965_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t1965 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23508_GM;
MethodInfo m23508_MI = 
{
	"Equals", (methodPointerType)&m23508, &t1965_TI, &t108_0_0_0, RuntimeInvoker_t108_t1965, t1965_m23508_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23508_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23509_GM;
MethodInfo m23509_MI = 
{
	"GetHashCode", (methodPointerType)&m23509, &t1965_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23509_GM};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23510_GM;
MethodInfo m23510_MI = 
{
	"ToString", (methodPointerType)&m23510, &t1965_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23510_GM};
static MethodInfo* t1965_MIs[] =
{
	&m11621_MI,
	&m11622_MI,
	&m11623_MI,
	&m23507_MI,
	&m23508_MI,
	&m23509_MI,
	&m23510_MI,
	NULL
};
static MethodInfo* t1965_VT[] =
{
	&m23507_MI,
	&m465_MI,
	&m23509_MI,
	&m23510_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1965_1_0_0;
extern Il2CppGenericClass t1965_GC;
TypeInfo t1965_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Nullable`1", "System", t1965_MIs, t1965_PIs, t1965_FIs, NULL, &t267_TI, NULL, NULL, &t1965_TI, NULL, t1965_VT, &EmptyCustomAttributesCache, &t1965_TI, &t1965_0_0_0, &t1965_1_0_0, NULL, &t1965_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1965)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 2, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5840_TI;

#include "t1557.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.DayOfWeek>
extern MethodInfo m39848_MI;
static PropertyInfo t5840____Current_PropertyInfo = 
{
	&t5840_TI, "Current", &m39848_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5840_PIs[] =
{
	&t5840____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1557_0_0_0;
extern void* RuntimeInvoker_t1557 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39848_GM;
MethodInfo m39848_MI = 
{
	"get_Current", NULL, &t5840_TI, &t1557_0_0_0, RuntimeInvoker_t1557, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39848_GM};
static MethodInfo* t5840_MIs[] =
{
	&m39848_MI,
	NULL
};
static TypeInfo* t5840_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5840_0_0_0;
extern Il2CppType t5840_1_0_0;
struct t5840;
extern Il2CppGenericClass t5840_GC;
TypeInfo t5840_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5840_MIs, t5840_PIs, NULL, NULL, NULL, NULL, NULL, &t5840_TI, t5840_ITIs, NULL, &EmptyCustomAttributesCache, &t5840_TI, &t5840_0_0_0, &t5840_1_0_0, NULL, &t5840_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4143.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4143_TI;
#include "t4143MD.h"

extern TypeInfo t1557_TI;
extern MethodInfo m23515_MI;
extern MethodInfo m31098_MI;
struct t107;
 int32_t m31098 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m23511_MI;
 void m23511 (t4143 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23512_MI;
 t5 * m23512 (t4143 * __this, MethodInfo* method){
	{
		int32_t L_0 = m23515(__this, &m23515_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1557_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m23513_MI;
 void m23513 (t4143 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23514_MI;
 bool m23514 (t4143 * __this, MethodInfo* method){
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
		int32_t L_2 = m4764(L_1, &m4764_MI);
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
 int32_t m23515 (t4143 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t133 * L_1 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4759(L_1, (t11*) &_stringLiteral1079, &m4759_MI);
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
		m4759(L_3, (t11*) &_stringLiteral1080, &m4759_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t107 * L_4 = (__this->f0);
		t107 * L_5 = (__this->f0);
		int32_t L_6 = m4764(L_5, &m4764_MI);
		int32_t L_7 = (__this->f1);
		int32_t L_8 = m31098(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m31098_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.DayOfWeek>
extern Il2CppType t107_0_0_1;
FieldInfo t4143_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4143_TI, offsetof(t4143, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4143_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4143_TI, offsetof(t4143, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4143_FIs[] =
{
	&t4143_f0_FieldInfo,
	&t4143_f1_FieldInfo,
	NULL
};
static PropertyInfo t4143____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4143_TI, "System.Collections.IEnumerator.Current", &m23512_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4143____Current_PropertyInfo = 
{
	&t4143_TI, "Current", &m23515_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4143_PIs[] =
{
	&t4143____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4143____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4143_m23511_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23511_GM;
MethodInfo m23511_MI = 
{
	".ctor", (methodPointerType)&m23511, &t4143_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4143_m23511_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23511_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23512_GM;
MethodInfo m23512_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m23512, &t4143_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23512_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23513_GM;
MethodInfo m23513_MI = 
{
	"Dispose", (methodPointerType)&m23513, &t4143_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23513_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23514_GM;
MethodInfo m23514_MI = 
{
	"MoveNext", (methodPointerType)&m23514, &t4143_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23514_GM};
extern Il2CppType t1557_0_0_0;
extern void* RuntimeInvoker_t1557 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23515_GM;
MethodInfo m23515_MI = 
{
	"get_Current", (methodPointerType)&m23515, &t4143_TI, &t1557_0_0_0, RuntimeInvoker_t1557, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23515_GM};
static MethodInfo* t4143_MIs[] =
{
	&m23511_MI,
	&m23512_MI,
	&m23513_MI,
	&m23514_MI,
	&m23515_MI,
	NULL
};
static MethodInfo* t4143_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m23512_MI,
	&m23514_MI,
	&m23513_MI,
	&m23515_MI,
};
static TypeInfo* t4143_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5840_TI,
};
static Il2CppInterfaceOffsetPair t4143_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5840_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4143_0_0_0;
extern Il2CppType t4143_1_0_0;
extern Il2CppGenericClass t4143_GC;
TypeInfo t4143_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4143_MIs, t4143_PIs, t4143_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4143_TI, t4143_ITIs, t4143_VT, &EmptyCustomAttributesCache, &t4143_TI, &t4143_0_0_0, &t4143_1_0_0, t4143_IOs, &t4143_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4143)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7518_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.DayOfWeek>
extern MethodInfo m39849_MI;
static PropertyInfo t7518____Count_PropertyInfo = 
{
	&t7518_TI, "Count", &m39849_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39850_MI;
static PropertyInfo t7518____IsReadOnly_PropertyInfo = 
{
	&t7518_TI, "IsReadOnly", &m39850_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7518_PIs[] =
{
	&t7518____Count_PropertyInfo,
	&t7518____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39849_GM;
MethodInfo m39849_MI = 
{
	"get_Count", NULL, &t7518_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39849_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39850_GM;
MethodInfo m39850_MI = 
{
	"get_IsReadOnly", NULL, &t7518_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39850_GM};
extern Il2CppType t1557_0_0_0;
extern Il2CppType t1557_0_0_0;
static ParameterInfo t7518_m39851_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1557_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39851_GM;
MethodInfo m39851_MI = 
{
	"Add", NULL, &t7518_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7518_m39851_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39851_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39852_GM;
MethodInfo m39852_MI = 
{
	"Clear", NULL, &t7518_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39852_GM};
extern Il2CppType t1557_0_0_0;
static ParameterInfo t7518_m39853_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1557_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39853_GM;
MethodInfo m39853_MI = 
{
	"Contains", NULL, &t7518_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7518_m39853_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39853_GM};
extern Il2CppType t4376_0_0_0;
extern Il2CppType t4376_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7518_m39854_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4376_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39854_GM;
MethodInfo m39854_MI = 
{
	"CopyTo", NULL, &t7518_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7518_m39854_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39854_GM};
extern Il2CppType t1557_0_0_0;
static ParameterInfo t7518_m39855_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1557_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39855_GM;
MethodInfo m39855_MI = 
{
	"Remove", NULL, &t7518_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7518_m39855_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39855_GM};
static MethodInfo* t7518_MIs[] =
{
	&m39849_MI,
	&m39850_MI,
	&m39851_MI,
	&m39852_MI,
	&m39853_MI,
	&m39854_MI,
	&m39855_MI,
	NULL
};
extern TypeInfo t7520_TI;
static TypeInfo* t7518_ITIs[] = 
{
	&t739_TI,
	&t7520_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7518_0_0_0;
extern Il2CppType t7518_1_0_0;
struct t7518;
extern Il2CppGenericClass t7518_GC;
TypeInfo t7518_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7518_MIs, t7518_PIs, NULL, NULL, NULL, NULL, NULL, &t7518_TI, t7518_ITIs, NULL, &EmptyCustomAttributesCache, &t7518_TI, &t7518_0_0_0, &t7518_1_0_0, NULL, &t7518_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.DayOfWeek>
extern Il2CppType t5840_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39856_GM;
MethodInfo m39856_MI = 
{
	"GetEnumerator", NULL, &t7520_TI, &t5840_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39856_GM};
static MethodInfo* t7520_MIs[] =
{
	&m39856_MI,
	NULL
};
static TypeInfo* t7520_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7520_0_0_0;
extern Il2CppType t7520_1_0_0;
struct t7520;
extern Il2CppGenericClass t7520_GC;
TypeInfo t7520_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7520_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7520_TI, t7520_ITIs, NULL, &EmptyCustomAttributesCache, &t7520_TI, &t7520_0_0_0, &t7520_1_0_0, NULL, &t7520_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7519_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.DayOfWeek>
extern MethodInfo m39857_MI;
extern MethodInfo m39858_MI;
static PropertyInfo t7519____Item_PropertyInfo = 
{
	&t7519_TI, "Item", &m39857_MI, &m39858_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7519_PIs[] =
{
	&t7519____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1557_0_0_0;
static ParameterInfo t7519_m39859_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1557_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39859_GM;
MethodInfo m39859_MI = 
{
	"IndexOf", NULL, &t7519_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t7519_m39859_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39859_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1557_0_0_0;
static ParameterInfo t7519_m39860_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1557_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39860_GM;
MethodInfo m39860_MI = 
{
	"Insert", NULL, &t7519_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7519_m39860_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39860_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7519_m39861_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39861_GM;
MethodInfo m39861_MI = 
{
	"RemoveAt", NULL, &t7519_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7519_m39861_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39861_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7519_m39857_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1557_0_0_0;
extern void* RuntimeInvoker_t1557_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39857_GM;
MethodInfo m39857_MI = 
{
	"get_Item", NULL, &t7519_TI, &t1557_0_0_0, RuntimeInvoker_t1557_t110, t7519_m39857_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39857_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1557_0_0_0;
static ParameterInfo t7519_m39858_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1557_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39858_GM;
MethodInfo m39858_MI = 
{
	"set_Item", NULL, &t7519_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7519_m39858_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39858_GM};
static MethodInfo* t7519_MIs[] =
{
	&m39859_MI,
	&m39860_MI,
	&m39861_MI,
	&m39857_MI,
	&m39858_MI,
	NULL
};
static TypeInfo* t7519_ITIs[] = 
{
	&t739_TI,
	&t7518_TI,
	&t7520_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7519_0_0_0;
extern Il2CppType t7519_1_0_0;
struct t7519;
extern Il2CppGenericClass t7519_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7519_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7519_MIs, t7519_PIs, NULL, NULL, NULL, NULL, NULL, &t7519_TI, t7519_ITIs, NULL, &t2240__CustomAttributeCache, &t7519_TI, &t7519_0_0_0, &t7519_1_0_0, NULL, &t7519_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2421_TI;

#include "t111.h"


// Metadata Definition System.Collections.Generic.IComparer`1<System.SByte>
extern Il2CppType t111_0_0_0;
extern Il2CppType t111_0_0_0;
extern Il2CppType t111_0_0_0;
static ParameterInfo t2421_m39862_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t111_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t111_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t111_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39862_GM;
MethodInfo m39862_MI = 
{
	"Compare", NULL, &t2421_TI, &t110_0_0_0, RuntimeInvoker_t110_t111_t111, t2421_m39862_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39862_GM};
static MethodInfo* t2421_MIs[] =
{
	&m39862_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2421_0_0_0;
extern Il2CppType t2421_1_0_0;
struct t2421;
extern Il2CppGenericClass t2421_GC;
TypeInfo t2421_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t2421_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2421_TI, NULL, NULL, &EmptyCustomAttributesCache, &t2421_TI, &t2421_0_0_0, &t2421_1_0_0, NULL, &t2421_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2422_TI;

#include "t150.h"


// Metadata Definition System.Collections.Generic.IComparer`1<System.Int16>
extern Il2CppType t150_0_0_0;
extern Il2CppType t150_0_0_0;
extern Il2CppType t150_0_0_0;
static ParameterInfo t2422_m39863_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t150_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t150_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t150_t150 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39863_GM;
MethodInfo m39863_MI = 
{
	"Compare", NULL, &t2422_TI, &t110_0_0_0, RuntimeInvoker_t110_t150_t150, t2422_m39863_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39863_GM};
static MethodInfo* t2422_MIs[] =
{
	&m39863_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2422_0_0_0;
extern Il2CppType t2422_1_0_0;
struct t2422;
extern Il2CppGenericClass t2422_GC;
TypeInfo t2422_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t2422_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2422_TI, NULL, NULL, &EmptyCustomAttributesCache, &t2422_TI, &t2422_0_0_0, &t2422_1_0_0, NULL, &t2422_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2424_TI;

#include "t152.h"


// Metadata Definition System.Collections.Generic.IComparer`1<System.Int64>
extern Il2CppType t152_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t152_0_0_0;
static ParameterInfo t2424_m39864_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t152_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39864_GM;
MethodInfo m39864_MI = 
{
	"Compare", NULL, &t2424_TI, &t110_0_0_0, RuntimeInvoker_t110_t152_t152, t2424_m39864_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39864_GM};
static MethodInfo* t2424_MIs[] =
{
	&m39864_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2424_0_0_0;
extern Il2CppType t2424_1_0_0;
struct t2424;
extern Il2CppGenericClass t2424_GC;
TypeInfo t2424_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t2424_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2424_TI, NULL, NULL, &EmptyCustomAttributesCache, &t2424_TI, &t2424_0_0_0, &t2424_1_0_0, NULL, &t2424_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5842_TI;

#include "t1372.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Environment/SpecialFolder>
extern MethodInfo m39865_MI;
static PropertyInfo t5842____Current_PropertyInfo = 
{
	&t5842_TI, "Current", &m39865_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5842_PIs[] =
{
	&t5842____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1372_0_0_0;
extern void* RuntimeInvoker_t1372 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39865_GM;
MethodInfo m39865_MI = 
{
	"get_Current", NULL, &t5842_TI, &t1372_0_0_0, RuntimeInvoker_t1372, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39865_GM};
static MethodInfo* t5842_MIs[] =
{
	&m39865_MI,
	NULL
};
static TypeInfo* t5842_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5842_0_0_0;
extern Il2CppType t5842_1_0_0;
struct t5842;
extern Il2CppGenericClass t5842_GC;
TypeInfo t5842_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5842_MIs, t5842_PIs, NULL, NULL, NULL, NULL, NULL, &t5842_TI, t5842_ITIs, NULL, &EmptyCustomAttributesCache, &t5842_TI, &t5842_0_0_0, &t5842_1_0_0, NULL, &t5842_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4144.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4144_TI;
#include "t4144MD.h"

extern TypeInfo t1372_TI;
extern MethodInfo m23520_MI;
extern MethodInfo m31109_MI;
struct t107;
 int32_t m31109 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m23516_MI;
 void m23516 (t4144 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23517_MI;
 t5 * m23517 (t4144 * __this, MethodInfo* method){
	{
		int32_t L_0 = m23520(__this, &m23520_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1372_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m23518_MI;
 void m23518 (t4144 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23519_MI;
 bool m23519 (t4144 * __this, MethodInfo* method){
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
		int32_t L_2 = m4764(L_1, &m4764_MI);
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
 int32_t m23520 (t4144 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t133 * L_1 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4759(L_1, (t11*) &_stringLiteral1079, &m4759_MI);
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
		m4759(L_3, (t11*) &_stringLiteral1080, &m4759_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t107 * L_4 = (__this->f0);
		t107 * L_5 = (__this->f0);
		int32_t L_6 = m4764(L_5, &m4764_MI);
		int32_t L_7 = (__this->f1);
		int32_t L_8 = m31109(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m31109_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>
extern Il2CppType t107_0_0_1;
FieldInfo t4144_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4144_TI, offsetof(t4144, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4144_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4144_TI, offsetof(t4144, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4144_FIs[] =
{
	&t4144_f0_FieldInfo,
	&t4144_f1_FieldInfo,
	NULL
};
static PropertyInfo t4144____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4144_TI, "System.Collections.IEnumerator.Current", &m23517_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4144____Current_PropertyInfo = 
{
	&t4144_TI, "Current", &m23520_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4144_PIs[] =
{
	&t4144____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4144____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4144_m23516_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23516_GM;
MethodInfo m23516_MI = 
{
	".ctor", (methodPointerType)&m23516, &t4144_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4144_m23516_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23516_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23517_GM;
MethodInfo m23517_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m23517, &t4144_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23517_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23518_GM;
MethodInfo m23518_MI = 
{
	"Dispose", (methodPointerType)&m23518, &t4144_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23518_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23519_GM;
MethodInfo m23519_MI = 
{
	"MoveNext", (methodPointerType)&m23519, &t4144_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23519_GM};
extern Il2CppType t1372_0_0_0;
extern void* RuntimeInvoker_t1372 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23520_GM;
MethodInfo m23520_MI = 
{
	"get_Current", (methodPointerType)&m23520, &t4144_TI, &t1372_0_0_0, RuntimeInvoker_t1372, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23520_GM};
static MethodInfo* t4144_MIs[] =
{
	&m23516_MI,
	&m23517_MI,
	&m23518_MI,
	&m23519_MI,
	&m23520_MI,
	NULL
};
static MethodInfo* t4144_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m23517_MI,
	&m23519_MI,
	&m23518_MI,
	&m23520_MI,
};
static TypeInfo* t4144_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5842_TI,
};
static Il2CppInterfaceOffsetPair t4144_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5842_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4144_0_0_0;
extern Il2CppType t4144_1_0_0;
extern Il2CppGenericClass t4144_GC;
TypeInfo t4144_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4144_MIs, t4144_PIs, t4144_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4144_TI, t4144_ITIs, t4144_VT, &EmptyCustomAttributesCache, &t4144_TI, &t4144_0_0_0, &t4144_1_0_0, t4144_IOs, &t4144_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4144)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7521_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>
extern MethodInfo m39866_MI;
static PropertyInfo t7521____Count_PropertyInfo = 
{
	&t7521_TI, "Count", &m39866_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39867_MI;
static PropertyInfo t7521____IsReadOnly_PropertyInfo = 
{
	&t7521_TI, "IsReadOnly", &m39867_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7521_PIs[] =
{
	&t7521____Count_PropertyInfo,
	&t7521____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39866_GM;
MethodInfo m39866_MI = 
{
	"get_Count", NULL, &t7521_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39866_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39867_GM;
MethodInfo m39867_MI = 
{
	"get_IsReadOnly", NULL, &t7521_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39867_GM};
extern Il2CppType t1372_0_0_0;
extern Il2CppType t1372_0_0_0;
static ParameterInfo t7521_m39868_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1372_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39868_GM;
MethodInfo m39868_MI = 
{
	"Add", NULL, &t7521_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7521_m39868_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39868_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39869_GM;
MethodInfo m39869_MI = 
{
	"Clear", NULL, &t7521_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39869_GM};
extern Il2CppType t1372_0_0_0;
static ParameterInfo t7521_m39870_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1372_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39870_GM;
MethodInfo m39870_MI = 
{
	"Contains", NULL, &t7521_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7521_m39870_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39870_GM};
extern Il2CppType t4377_0_0_0;
extern Il2CppType t4377_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7521_m39871_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4377_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39871_GM;
MethodInfo m39871_MI = 
{
	"CopyTo", NULL, &t7521_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7521_m39871_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39871_GM};
extern Il2CppType t1372_0_0_0;
static ParameterInfo t7521_m39872_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1372_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39872_GM;
MethodInfo m39872_MI = 
{
	"Remove", NULL, &t7521_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7521_m39872_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39872_GM};
static MethodInfo* t7521_MIs[] =
{
	&m39866_MI,
	&m39867_MI,
	&m39868_MI,
	&m39869_MI,
	&m39870_MI,
	&m39871_MI,
	&m39872_MI,
	NULL
};
extern TypeInfo t7523_TI;
static TypeInfo* t7521_ITIs[] = 
{
	&t739_TI,
	&t7523_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7521_0_0_0;
extern Il2CppType t7521_1_0_0;
struct t7521;
extern Il2CppGenericClass t7521_GC;
TypeInfo t7521_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7521_MIs, t7521_PIs, NULL, NULL, NULL, NULL, NULL, &t7521_TI, t7521_ITIs, NULL, &EmptyCustomAttributesCache, &t7521_TI, &t7521_0_0_0, &t7521_1_0_0, NULL, &t7521_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Environment/SpecialFolder>
extern Il2CppType t5842_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39873_GM;
MethodInfo m39873_MI = 
{
	"GetEnumerator", NULL, &t7523_TI, &t5842_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39873_GM};
static MethodInfo* t7523_MIs[] =
{
	&m39873_MI,
	NULL
};
static TypeInfo* t7523_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7523_0_0_0;
extern Il2CppType t7523_1_0_0;
struct t7523;
extern Il2CppGenericClass t7523_GC;
TypeInfo t7523_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7523_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7523_TI, t7523_ITIs, NULL, &EmptyCustomAttributesCache, &t7523_TI, &t7523_0_0_0, &t7523_1_0_0, NULL, &t7523_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7522_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Environment/SpecialFolder>
extern MethodInfo m39874_MI;
extern MethodInfo m39875_MI;
static PropertyInfo t7522____Item_PropertyInfo = 
{
	&t7522_TI, "Item", &m39874_MI, &m39875_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7522_PIs[] =
{
	&t7522____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1372_0_0_0;
static ParameterInfo t7522_m39876_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1372_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39876_GM;
MethodInfo m39876_MI = 
{
	"IndexOf", NULL, &t7522_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t7522_m39876_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39876_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1372_0_0_0;
static ParameterInfo t7522_m39877_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1372_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39877_GM;
MethodInfo m39877_MI = 
{
	"Insert", NULL, &t7522_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7522_m39877_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39877_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7522_m39878_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39878_GM;
MethodInfo m39878_MI = 
{
	"RemoveAt", NULL, &t7522_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7522_m39878_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39878_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7522_m39874_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1372_0_0_0;
extern void* RuntimeInvoker_t1372_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39874_GM;
MethodInfo m39874_MI = 
{
	"get_Item", NULL, &t7522_TI, &t1372_0_0_0, RuntimeInvoker_t1372_t110, t7522_m39874_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39874_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1372_0_0_0;
static ParameterInfo t7522_m39875_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1372_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39875_GM;
MethodInfo m39875_MI = 
{
	"set_Item", NULL, &t7522_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7522_m39875_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39875_GM};
static MethodInfo* t7522_MIs[] =
{
	&m39876_MI,
	&m39877_MI,
	&m39878_MI,
	&m39874_MI,
	&m39875_MI,
	NULL
};
static TypeInfo* t7522_ITIs[] = 
{
	&t739_TI,
	&t7521_TI,
	&t7523_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7522_0_0_0;
extern Il2CppType t7522_1_0_0;
struct t7522;
extern Il2CppGenericClass t7522_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7522_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7522_MIs, t7522_PIs, NULL, NULL, NULL, NULL, NULL, &t7522_TI, t7522_ITIs, NULL, &t2240__CustomAttributeCache, &t7522_TI, &t7522_0_0_0, &t7522_1_0_0, NULL, &t7522_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2428_TI;

#include "t71.h"


// Metadata Definition System.IComparable`1<System.Guid>
extern Il2CppType t71_0_0_0;
extern Il2CppType t71_0_0_0;
static ParameterInfo t2428_m39879_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t71_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t71 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39879_GM;
MethodInfo m39879_MI = 
{
	"CompareTo", NULL, &t2428_TI, &t110_0_0_0, RuntimeInvoker_t110_t71, t2428_m39879_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39879_GM};
static MethodInfo* t2428_MIs[] =
{
	&m39879_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2428_0_0_0;
extern Il2CppType t2428_1_0_0;
struct t2428;
extern Il2CppGenericClass t2428_GC;
TypeInfo t2428_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t2428_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2428_TI, NULL, NULL, &EmptyCustomAttributesCache, &t2428_TI, &t2428_0_0_0, &t2428_1_0_0, NULL, &t2428_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2429_TI;



// Metadata Definition System.IEquatable`1<System.Guid>
extern Il2CppType t71_0_0_0;
static ParameterInfo t2429_m39880_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t71_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t71 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39880_GM;
MethodInfo m39880_MI = 
{
	"Equals", NULL, &t2429_TI, &t108_0_0_0, RuntimeInvoker_t108_t71, t2429_m39880_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39880_GM};
static MethodInfo* t2429_MIs[] =
{
	&m39880_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2429_0_0_0;
extern Il2CppType t2429_1_0_0;
struct t2429;
extern Il2CppGenericClass t2429_GC;
TypeInfo t2429_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t2429_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2429_TI, NULL, NULL, &EmptyCustomAttributesCache, &t2429_TI, &t2429_0_0_0, &t2429_1_0_0, NULL, &t2429_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2426.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2426_TI;
#include "t2426MD.h"

extern TypeInfo t71_TI;
#include "t4145MD.h"
extern MethodInfo m23522_MI;
extern MethodInfo m39879_MI;


extern MethodInfo m11624_MI;
 void m11624 (t2426 * __this, MethodInfo* method){
	{
		m23522(__this, &m23522_MI);
		return;
	}
}
extern MethodInfo m23521_MI;
 int32_t m23521 (t2426 * __this, t71  p0, t71  p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t71  L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t71_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t71  L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t71_TI), &L_2);
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
		t71  L_4 = p1;
		t5 * L_5 = Box(InitializedTypeInfo(&t71_TI), &L_4);
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
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, t71  >::Invoke(&m39879_MI, Box(InitializedTypeInfo(&t71_TI), &(*(&p0))), p1);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.GenericComparer`1<System.Guid>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m11624_GM;
MethodInfo m11624_MI = 
{
	".ctor", (methodPointerType)&m11624, &t2426_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m11624_GM};
extern Il2CppType t71_0_0_0;
extern Il2CppType t71_0_0_0;
static ParameterInfo t2426_m23521_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t71_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t71_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t71_t71 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23521_GM;
MethodInfo m23521_MI = 
{
	"Compare", (methodPointerType)&m23521, &t2426_TI, &t110_0_0_0, RuntimeInvoker_t110_t71_t71, t2426_m23521_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23521_GM};
static MethodInfo* t2426_MIs[] =
{
	&m11624_MI,
	&m23521_MI,
	NULL
};
extern MethodInfo m23524_MI;
static MethodInfo* t2426_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m23521_MI,
	&m23524_MI,
	&m23521_MI,
};
extern TypeInfo t7725_TI;
static Il2CppInterfaceOffsetPair t2426_IOs[] = 
{
	{ &t7725_TI, 4},
	{ &t991_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2426_0_0_0;
extern Il2CppType t2426_1_0_0;
extern TypeInfo t4145_TI;
struct t2426;
extern Il2CppGenericClass t2426_GC;
TypeInfo t2426_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericComparer`1", "System.Collections.Generic", t2426_MIs, NULL, NULL, NULL, &t4145_TI, NULL, NULL, &t2426_TI, NULL, t2426_VT, &EmptyCustomAttributesCache, &t2426_TI, &t2426_0_0_0, &t2426_1_0_0, t2426_IOs, &t2426_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2426), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t4145.h"
#ifndef _MSC_VER
#else
#endif

#include "t4146.h"
extern TypeInfo t4146_TI;
#include "t4146MD.h"
extern MethodInfo m23526_MI;
extern MethodInfo m39881_MI;


 void m23522 (t4145 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m23523_MI;
 void m23523 (t5 * __this, MethodInfo* method){
	t4146 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t4146 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t4146_TI));
	m23526(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m23526_MI);
	((t4145_SFs*)InitializedTypeInfo(&t4145_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
 int32_t m23524 (t4145 * __this, t5 * p0, t5 * p1, MethodInfo* method){
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
		if (!((t5 *)IsInst(p0, InitializedTypeInfo(&t71_TI))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((t5 *)IsInst(p1, InitializedTypeInfo(&t71_TI))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, t71 , t71  >::Invoke(&m39881_MI, __this, ((*(t71 *)((t71 *)UnBox (p0, InitializedTypeInfo(&t71_TI))))), ((*(t71 *)((t71 *)UnBox (p1, InitializedTypeInfo(&t71_TI))))));
		return L_0;
	}

IL_0033:
	{
		t160 * L_1 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m10152(L_1, &m10152_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m23525_MI;
 t4145 * m23525 (t5 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t4145_TI));
		return (((t4145_SFs*)InitializedTypeInfo(&t4145_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<System.Guid>
extern Il2CppType t4145_0_0_49;
FieldInfo t4145_f0_FieldInfo = 
{
	"_default", &t4145_0_0_49, &t4145_TI, offsetof(t4145_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t4145_FIs[] =
{
	&t4145_f0_FieldInfo,
	NULL
};
static PropertyInfo t4145____Default_PropertyInfo = 
{
	&t4145_TI, "Default", &m23525_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4145_PIs[] =
{
	&t4145____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23522_GM;
MethodInfo m23522_MI = 
{
	".ctor", (methodPointerType)&m23522, &t4145_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23522_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23523_GM;
MethodInfo m23523_MI = 
{
	".cctor", (methodPointerType)&m23523, &t4145_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23523_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t4145_m23524_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23524_GM;
MethodInfo m23524_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m23524, &t4145_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t4145_m23524_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23524_GM};
extern Il2CppType t71_0_0_0;
extern Il2CppType t71_0_0_0;
static ParameterInfo t4145_m39881_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t71_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t71_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t71_t71 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39881_GM;
MethodInfo m39881_MI = 
{
	"Compare", NULL, &t4145_TI, &t110_0_0_0, RuntimeInvoker_t110_t71_t71, t4145_m39881_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39881_GM};
extern Il2CppType t4145_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23525_GM;
MethodInfo m23525_MI = 
{
	"get_Default", (methodPointerType)&m23525, &t4145_TI, &t4145_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23525_GM};
static MethodInfo* t4145_MIs[] =
{
	&m23522_MI,
	&m23523_MI,
	&m23524_MI,
	&m39881_MI,
	&m23525_MI,
	NULL
};
static MethodInfo* t4145_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m39881_MI,
	&m23524_MI,
	NULL,
};
static TypeInfo* t4145_ITIs[] = 
{
	&t7725_TI,
	&t991_TI,
};
static Il2CppInterfaceOffsetPair t4145_IOs[] = 
{
	{ &t7725_TI, 4},
	{ &t991_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4145_0_0_0;
extern Il2CppType t4145_1_0_0;
struct t4145;
extern Il2CppGenericClass t4145_GC;
TypeInfo t4145_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t4145_MIs, t4145_PIs, t4145_FIs, NULL, &t5_TI, NULL, NULL, &t4145_TI, t4145_ITIs, t4145_VT, &EmptyCustomAttributesCache, &t4145_TI, &t4145_0_0_0, &t4145_1_0_0, t4145_IOs, &t4145_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4145), 0, -1, sizeof(t4145_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IComparer`1<System.Guid>
extern Il2CppType t71_0_0_0;
extern Il2CppType t71_0_0_0;
static ParameterInfo t7725_m39882_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t71_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t71_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t71_t71 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39882_GM;
MethodInfo m39882_MI = 
{
	"Compare", NULL, &t7725_TI, &t110_0_0_0, RuntimeInvoker_t110_t71_t71, t7725_m39882_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39882_GM};
static MethodInfo* t7725_MIs[] =
{
	&m39882_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7725_0_0_0;
extern Il2CppType t7725_1_0_0;
struct t7725;
extern Il2CppGenericClass t7725_GC;
TypeInfo t7725_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t7725_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7725_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7725_TI, &t7725_0_0_0, &t7725_1_0_0, NULL, &t7725_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



 void m23526 (t4146 * __this, MethodInfo* method){
	{
		m23522(__this, &m23522_MI);
		return;
	}
}
extern MethodInfo m23527_MI;
 int32_t m23527 (t4146 * __this, t71  p0, t71  p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t71  L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t71_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t71  L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t71_TI), &L_2);
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
		t71  L_4 = p1;
		t5 * L_5 = Box(InitializedTypeInfo(&t71_TI), &L_4);
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
		t71  L_6 = p0;
		t5 * L_7 = Box(InitializedTypeInfo(&t71_TI), &L_6);
		if (!((t5*)IsInst(L_7, InitializedTypeInfo(&t2428_TI))))
		{
			goto IL_003e;
		}
	}
	{
		t71  L_8 = p0;
		t5 * L_9 = Box(InitializedTypeInfo(&t71_TI), &L_8);
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, t71  >::Invoke(&m39879_MI, ((t5*)Castclass(L_9, InitializedTypeInfo(&t2428_TI))), p1);
		return L_10;
	}

IL_003e:
	{
		t71  L_11 = p0;
		t5 * L_12 = Box(InitializedTypeInfo(&t71_TI), &L_11);
		if (!((t5 *)IsInst(L_12, InitializedTypeInfo(&t122_TI))))
		{
			goto IL_0062;
		}
	}
	{
		t71  L_13 = p0;
		t5 * L_14 = Box(InitializedTypeInfo(&t71_TI), &L_13);
		t71  L_15 = p1;
		t5 * L_16 = Box(InitializedTypeInfo(&t71_TI), &L_15);
		int32_t L_17 = (int32_t)InterfaceFuncInvoker1< int32_t, t5 * >::Invoke(&m11009_MI, ((t5 *)Castclass(L_14, InitializedTypeInfo(&t122_TI))), L_16);
		return L_17;
	}

IL_0062:
	{
		t160 * L_18 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2582(L_18, (t11*) &_stringLiteral1209, &m2582_MI);
		il2cpp_codegen_raise_exception(L_18);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23526_GM;
MethodInfo m23526_MI = 
{
	".ctor", (methodPointerType)&m23526, &t4146_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23526_GM};
extern Il2CppType t71_0_0_0;
extern Il2CppType t71_0_0_0;
static ParameterInfo t4146_m23527_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t71_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t71_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t71_t71 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23527_GM;
MethodInfo m23527_MI = 
{
	"Compare", (methodPointerType)&m23527, &t4146_TI, &t110_0_0_0, RuntimeInvoker_t110_t71_t71, t4146_m23527_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23527_GM};
static MethodInfo* t4146_MIs[] =
{
	&m23526_MI,
	&m23527_MI,
	NULL
};
static MethodInfo* t4146_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m23527_MI,
	&m23524_MI,
	&m23527_MI,
};
static Il2CppInterfaceOffsetPair t4146_IOs[] = 
{
	{ &t7725_TI, 4},
	{ &t991_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4146_0_0_0;
extern Il2CppType t4146_1_0_0;
struct t4146;
extern Il2CppGenericClass t4146_GC;
TypeInfo t4146_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t4146_MIs, NULL, NULL, NULL, &t4145_TI, NULL, &t1509_TI, &t4146_TI, NULL, t4146_VT, &EmptyCustomAttributesCache, &t4146_TI, &t4146_0_0_0, &t4146_1_0_0, t4146_IOs, &t4146_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4146), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t2427.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2427_TI;
#include "t2427MD.h"

#include "t4147MD.h"
extern MethodInfo m23530_MI;
extern MethodInfo m39880_MI;


extern MethodInfo m11625_MI;
 void m11625 (t2427 * __this, MethodInfo* method){
	{
		m23530(__this, &m23530_MI);
		return;
	}
}
extern MethodInfo m23528_MI;
 int32_t m23528 (t2427 * __this, t71  p0, MethodInfo* method){
	{
		t71  L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t71_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m466_MI, Box(InitializedTypeInfo(&t71_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m23529_MI;
 bool m23529 (t2427 * __this, t71  p0, t71  p1, MethodInfo* method){
	{
		t71  L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t71_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t71  L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t71_TI), &L_2);
		return ((((t5 *)L_3) == ((t5 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, t71  >::Invoke(&m39880_MI, Box(InitializedTypeInfo(&t71_TI), &(*(&p0))), p1);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m11625_GM;
MethodInfo m11625_MI = 
{
	".ctor", (methodPointerType)&m11625, &t2427_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m11625_GM};
extern Il2CppType t71_0_0_0;
static ParameterInfo t2427_m23528_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t71_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t71 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23528_GM;
MethodInfo m23528_MI = 
{
	"GetHashCode", (methodPointerType)&m23528, &t2427_TI, &t110_0_0_0, RuntimeInvoker_t110_t71, t2427_m23528_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23528_GM};
extern Il2CppType t71_0_0_0;
extern Il2CppType t71_0_0_0;
static ParameterInfo t2427_m23529_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t71_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t71_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t71_t71 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23529_GM;
MethodInfo m23529_MI = 
{
	"Equals", (methodPointerType)&m23529, &t2427_TI, &t108_0_0_0, RuntimeInvoker_t108_t71_t71, t2427_m23529_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23529_GM};
static MethodInfo* t2427_MIs[] =
{
	&m11625_MI,
	&m23528_MI,
	&m23529_MI,
	NULL
};
extern MethodInfo m23533_MI;
extern MethodInfo m23532_MI;
static MethodInfo* t2427_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m23529_MI,
	&m23528_MI,
	&m23533_MI,
	&m23532_MI,
	&m23528_MI,
	&m23529_MI,
};
extern TypeInfo t7726_TI;
static Il2CppInterfaceOffsetPair t2427_IOs[] = 
{
	{ &t7726_TI, 4},
	{ &t998_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2427_0_0_0;
extern Il2CppType t2427_1_0_0;
extern TypeInfo t4147_TI;
struct t2427;
extern Il2CppGenericClass t2427_GC;
TypeInfo t2427_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericEqualityComparer`1", "System.Collections.Generic", t2427_MIs, NULL, NULL, NULL, &t4147_TI, NULL, NULL, &t2427_TI, NULL, t2427_VT, &EmptyCustomAttributesCache, &t2427_TI, &t2427_0_0_0, &t2427_1_0_0, t2427_IOs, &t2427_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2427), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t4147.h"
#ifndef _MSC_VER
#else
#endif

#include "t4148.h"
extern TypeInfo t4148_TI;
#include "t4148MD.h"
extern MethodInfo m23535_MI;
extern MethodInfo m39883_MI;
extern MethodInfo m39884_MI;


 void m23530 (t4147 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m23531_MI;
 void m23531 (t5 * __this, MethodInfo* method){
	t4148 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t4148 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t4148_TI));
	m23535(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m23535_MI);
	((t4147_SFs*)InitializedTypeInfo(&t4147_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
 int32_t m23532 (t4147 * __this, t5 * p0, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t71  >::Invoke(&m39883_MI, __this, ((*(t71 *)((t71 *)UnBox (p0, InitializedTypeInfo(&t71_TI))))));
		return L_0;
	}
}
 bool m23533 (t4147 * __this, t5 * p0, t5 * p1, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, t71 , t71  >::Invoke(&m39884_MI, __this, ((*(t71 *)((t71 *)UnBox (p0, InitializedTypeInfo(&t71_TI))))), ((*(t71 *)((t71 *)UnBox (p1, InitializedTypeInfo(&t71_TI))))));
		return L_0;
	}
}
extern MethodInfo m23534_MI;
 t4147 * m23534 (t5 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t4147_TI));
		return (((t4147_SFs*)InitializedTypeInfo(&t4147_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.Guid>
extern Il2CppType t4147_0_0_49;
FieldInfo t4147_f0_FieldInfo = 
{
	"_default", &t4147_0_0_49, &t4147_TI, offsetof(t4147_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t4147_FIs[] =
{
	&t4147_f0_FieldInfo,
	NULL
};
static PropertyInfo t4147____Default_PropertyInfo = 
{
	&t4147_TI, "Default", &m23534_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4147_PIs[] =
{
	&t4147____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23530_GM;
MethodInfo m23530_MI = 
{
	".ctor", (methodPointerType)&m23530, &t4147_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23530_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23531_GM;
MethodInfo m23531_MI = 
{
	".cctor", (methodPointerType)&m23531, &t4147_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23531_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t4147_m23532_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23532_GM;
MethodInfo m23532_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m23532, &t4147_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t4147_m23532_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23532_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t4147_m23533_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23533_GM;
MethodInfo m23533_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m23533, &t4147_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t4147_m23533_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23533_GM};
extern Il2CppType t71_0_0_0;
static ParameterInfo t4147_m39883_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t71_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t71 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39883_GM;
MethodInfo m39883_MI = 
{
	"GetHashCode", NULL, &t4147_TI, &t110_0_0_0, RuntimeInvoker_t110_t71, t4147_m39883_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39883_GM};
extern Il2CppType t71_0_0_0;
extern Il2CppType t71_0_0_0;
static ParameterInfo t4147_m39884_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t71_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t71_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t71_t71 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39884_GM;
MethodInfo m39884_MI = 
{
	"Equals", NULL, &t4147_TI, &t108_0_0_0, RuntimeInvoker_t108_t71_t71, t4147_m39884_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39884_GM};
extern Il2CppType t4147_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23534_GM;
MethodInfo m23534_MI = 
{
	"get_Default", (methodPointerType)&m23534, &t4147_TI, &t4147_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23534_GM};
static MethodInfo* t4147_MIs[] =
{
	&m23530_MI,
	&m23531_MI,
	&m23532_MI,
	&m23533_MI,
	&m39883_MI,
	&m39884_MI,
	&m23534_MI,
	NULL
};
static MethodInfo* t4147_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m39884_MI,
	&m39883_MI,
	&m23533_MI,
	&m23532_MI,
	NULL,
	NULL,
};
static TypeInfo* t4147_ITIs[] = 
{
	&t7726_TI,
	&t998_TI,
};
static Il2CppInterfaceOffsetPair t4147_IOs[] = 
{
	{ &t7726_TI, 4},
	{ &t998_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4147_0_0_0;
extern Il2CppType t4147_1_0_0;
struct t4147;
extern Il2CppGenericClass t4147_GC;
TypeInfo t4147_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t4147_MIs, t4147_PIs, t4147_FIs, NULL, &t5_TI, NULL, NULL, &t4147_TI, t4147_ITIs, t4147_VT, &EmptyCustomAttributesCache, &t4147_TI, &t4147_0_0_0, &t4147_1_0_0, t4147_IOs, &t4147_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4147), 0, -1, sizeof(t4147_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.Guid>
extern Il2CppType t71_0_0_0;
extern Il2CppType t71_0_0_0;
static ParameterInfo t7726_m39885_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t71_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t71_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t71_t71 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39885_GM;
MethodInfo m39885_MI = 
{
	"Equals", NULL, &t7726_TI, &t108_0_0_0, RuntimeInvoker_t108_t71_t71, t7726_m39885_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39885_GM};
extern Il2CppType t71_0_0_0;
static ParameterInfo t7726_m39886_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t71_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t71 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39886_GM;
MethodInfo m39886_MI = 
{
	"GetHashCode", NULL, &t7726_TI, &t110_0_0_0, RuntimeInvoker_t110_t71, t7726_m39886_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39886_GM};
static MethodInfo* t7726_MIs[] =
{
	&m39885_MI,
	&m39886_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7726_0_0_0;
extern Il2CppType t7726_1_0_0;
struct t7726;
extern Il2CppGenericClass t7726_GC;
TypeInfo t7726_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t7726_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7726_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7726_TI, &t7726_0_0_0, &t7726_1_0_0, NULL, &t7726_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



 void m23535 (t4148 * __this, MethodInfo* method){
	{
		m23530(__this, &m23530_MI);
		return;
	}
}
extern MethodInfo m23536_MI;
 int32_t m23536 (t4148 * __this, t71  p0, MethodInfo* method){
	{
		t71  L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t71_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m466_MI, Box(InitializedTypeInfo(&t71_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m23537_MI;
 bool m23537 (t4148 * __this, t71  p0, t71  p1, MethodInfo* method){
	{
		t71  L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t71_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t71  L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t71_TI), &L_2);
		return ((((t5 *)L_3) == ((t5 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t71  L_4 = p1;
		t5 * L_5 = Box(InitializedTypeInfo(&t71_TI), &L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t71_TI), &(*(&p0))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23535_GM;
MethodInfo m23535_MI = 
{
	".ctor", (methodPointerType)&m23535, &t4148_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23535_GM};
extern Il2CppType t71_0_0_0;
static ParameterInfo t4148_m23536_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t71_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t71 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23536_GM;
MethodInfo m23536_MI = 
{
	"GetHashCode", (methodPointerType)&m23536, &t4148_TI, &t110_0_0_0, RuntimeInvoker_t110_t71, t4148_m23536_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23536_GM};
extern Il2CppType t71_0_0_0;
extern Il2CppType t71_0_0_0;
static ParameterInfo t4148_m23537_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t71_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t71_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t71_t71 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23537_GM;
MethodInfo m23537_MI = 
{
	"Equals", (methodPointerType)&m23537, &t4148_TI, &t108_0_0_0, RuntimeInvoker_t108_t71_t71, t4148_m23537_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23537_GM};
static MethodInfo* t4148_MIs[] =
{
	&m23535_MI,
	&m23536_MI,
	&m23537_MI,
	NULL
};
static MethodInfo* t4148_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m23537_MI,
	&m23536_MI,
	&m23533_MI,
	&m23532_MI,
	&m23536_MI,
	&m23537_MI,
};
static Il2CppInterfaceOffsetPair t4148_IOs[] = 
{
	{ &t7726_TI, 4},
	{ &t998_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4148_0_0_0;
extern Il2CppType t4148_1_0_0;
struct t4148;
extern Il2CppGenericClass t4148_GC;
TypeInfo t4148_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t4148_MIs, NULL, NULL, NULL, &t4147_TI, NULL, &t1519_TI, &t4148_TI, NULL, t4148_VT, &EmptyCustomAttributesCache, &t4148_TI, &t4148_0_0_0, &t4148_1_0_0, t4148_IOs, &t4148_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4148), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5844_TI;

#include "t1954.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.LoaderOptimization>
extern MethodInfo m39887_MI;
static PropertyInfo t5844____Current_PropertyInfo = 
{
	&t5844_TI, "Current", &m39887_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5844_PIs[] =
{
	&t5844____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1954_0_0_0;
extern void* RuntimeInvoker_t1954 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39887_GM;
MethodInfo m39887_MI = 
{
	"get_Current", NULL, &t5844_TI, &t1954_0_0_0, RuntimeInvoker_t1954, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39887_GM};
static MethodInfo* t5844_MIs[] =
{
	&m39887_MI,
	NULL
};
static TypeInfo* t5844_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5844_0_0_0;
extern Il2CppType t5844_1_0_0;
struct t5844;
extern Il2CppGenericClass t5844_GC;
TypeInfo t5844_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5844_MIs, t5844_PIs, NULL, NULL, NULL, NULL, NULL, &t5844_TI, t5844_ITIs, NULL, &EmptyCustomAttributesCache, &t5844_TI, &t5844_0_0_0, &t5844_1_0_0, NULL, &t5844_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4149.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4149_TI;
#include "t4149MD.h"

extern TypeInfo t1954_TI;
extern MethodInfo m23542_MI;
extern MethodInfo m31120_MI;
struct t107;
 int32_t m31120 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m23538_MI;
 void m23538 (t4149 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23539_MI;
 t5 * m23539 (t4149 * __this, MethodInfo* method){
	{
		int32_t L_0 = m23542(__this, &m23542_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1954_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m23540_MI;
 void m23540 (t4149 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23541_MI;
 bool m23541 (t4149 * __this, MethodInfo* method){
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
		int32_t L_2 = m4764(L_1, &m4764_MI);
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
 int32_t m23542 (t4149 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t133 * L_1 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4759(L_1, (t11*) &_stringLiteral1079, &m4759_MI);
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
		m4759(L_3, (t11*) &_stringLiteral1080, &m4759_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t107 * L_4 = (__this->f0);
		t107 * L_5 = (__this->f0);
		int32_t L_6 = m4764(L_5, &m4764_MI);
		int32_t L_7 = (__this->f1);
		int32_t L_8 = m31120(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m31120_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.LoaderOptimization>
extern Il2CppType t107_0_0_1;
FieldInfo t4149_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4149_TI, offsetof(t4149, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4149_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4149_TI, offsetof(t4149, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4149_FIs[] =
{
	&t4149_f0_FieldInfo,
	&t4149_f1_FieldInfo,
	NULL
};
static PropertyInfo t4149____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4149_TI, "System.Collections.IEnumerator.Current", &m23539_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4149____Current_PropertyInfo = 
{
	&t4149_TI, "Current", &m23542_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4149_PIs[] =
{
	&t4149____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4149____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4149_m23538_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23538_GM;
MethodInfo m23538_MI = 
{
	".ctor", (methodPointerType)&m23538, &t4149_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4149_m23538_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23538_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23539_GM;
MethodInfo m23539_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m23539, &t4149_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23539_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23540_GM;
MethodInfo m23540_MI = 
{
	"Dispose", (methodPointerType)&m23540, &t4149_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23540_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23541_GM;
MethodInfo m23541_MI = 
{
	"MoveNext", (methodPointerType)&m23541, &t4149_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23541_GM};
extern Il2CppType t1954_0_0_0;
extern void* RuntimeInvoker_t1954 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23542_GM;
MethodInfo m23542_MI = 
{
	"get_Current", (methodPointerType)&m23542, &t4149_TI, &t1954_0_0_0, RuntimeInvoker_t1954, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23542_GM};
static MethodInfo* t4149_MIs[] =
{
	&m23538_MI,
	&m23539_MI,
	&m23540_MI,
	&m23541_MI,
	&m23542_MI,
	NULL
};
static MethodInfo* t4149_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m23539_MI,
	&m23541_MI,
	&m23540_MI,
	&m23542_MI,
};
static TypeInfo* t4149_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5844_TI,
};
static Il2CppInterfaceOffsetPair t4149_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5844_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4149_0_0_0;
extern Il2CppType t4149_1_0_0;
extern Il2CppGenericClass t4149_GC;
TypeInfo t4149_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4149_MIs, t4149_PIs, t4149_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4149_TI, t4149_ITIs, t4149_VT, &EmptyCustomAttributesCache, &t4149_TI, &t4149_0_0_0, &t4149_1_0_0, t4149_IOs, &t4149_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4149)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7524_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.LoaderOptimization>
extern MethodInfo m39888_MI;
static PropertyInfo t7524____Count_PropertyInfo = 
{
	&t7524_TI, "Count", &m39888_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39889_MI;
static PropertyInfo t7524____IsReadOnly_PropertyInfo = 
{
	&t7524_TI, "IsReadOnly", &m39889_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7524_PIs[] =
{
	&t7524____Count_PropertyInfo,
	&t7524____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39888_GM;
MethodInfo m39888_MI = 
{
	"get_Count", NULL, &t7524_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39888_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39889_GM;
MethodInfo m39889_MI = 
{
	"get_IsReadOnly", NULL, &t7524_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39889_GM};
extern Il2CppType t1954_0_0_0;
extern Il2CppType t1954_0_0_0;
static ParameterInfo t7524_m39890_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1954_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39890_GM;
MethodInfo m39890_MI = 
{
	"Add", NULL, &t7524_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7524_m39890_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39890_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39891_GM;
MethodInfo m39891_MI = 
{
	"Clear", NULL, &t7524_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39891_GM};
extern Il2CppType t1954_0_0_0;
static ParameterInfo t7524_m39892_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1954_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39892_GM;
MethodInfo m39892_MI = 
{
	"Contains", NULL, &t7524_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7524_m39892_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39892_GM};
extern Il2CppType t4378_0_0_0;
extern Il2CppType t4378_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7524_m39893_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4378_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39893_GM;
MethodInfo m39893_MI = 
{
	"CopyTo", NULL, &t7524_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7524_m39893_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39893_GM};
extern Il2CppType t1954_0_0_0;
static ParameterInfo t7524_m39894_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1954_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39894_GM;
MethodInfo m39894_MI = 
{
	"Remove", NULL, &t7524_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7524_m39894_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39894_GM};
static MethodInfo* t7524_MIs[] =
{
	&m39888_MI,
	&m39889_MI,
	&m39890_MI,
	&m39891_MI,
	&m39892_MI,
	&m39893_MI,
	&m39894_MI,
	NULL
};
extern TypeInfo t7526_TI;
static TypeInfo* t7524_ITIs[] = 
{
	&t739_TI,
	&t7526_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7524_0_0_0;
extern Il2CppType t7524_1_0_0;
struct t7524;
extern Il2CppGenericClass t7524_GC;
TypeInfo t7524_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7524_MIs, t7524_PIs, NULL, NULL, NULL, NULL, NULL, &t7524_TI, t7524_ITIs, NULL, &EmptyCustomAttributesCache, &t7524_TI, &t7524_0_0_0, &t7524_1_0_0, NULL, &t7524_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.LoaderOptimization>
extern Il2CppType t5844_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39895_GM;
MethodInfo m39895_MI = 
{
	"GetEnumerator", NULL, &t7526_TI, &t5844_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39895_GM};
static MethodInfo* t7526_MIs[] =
{
	&m39895_MI,
	NULL
};
static TypeInfo* t7526_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7526_0_0_0;
extern Il2CppType t7526_1_0_0;
struct t7526;
extern Il2CppGenericClass t7526_GC;
TypeInfo t7526_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7526_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7526_TI, t7526_ITIs, NULL, &EmptyCustomAttributesCache, &t7526_TI, &t7526_0_0_0, &t7526_1_0_0, NULL, &t7526_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7525_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.LoaderOptimization>
extern MethodInfo m39896_MI;
extern MethodInfo m39897_MI;
static PropertyInfo t7525____Item_PropertyInfo = 
{
	&t7525_TI, "Item", &m39896_MI, &m39897_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7525_PIs[] =
{
	&t7525____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1954_0_0_0;
static ParameterInfo t7525_m39898_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1954_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39898_GM;
MethodInfo m39898_MI = 
{
	"IndexOf", NULL, &t7525_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t7525_m39898_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39898_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1954_0_0_0;
static ParameterInfo t7525_m39899_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1954_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39899_GM;
MethodInfo m39899_MI = 
{
	"Insert", NULL, &t7525_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7525_m39899_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39899_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7525_m39900_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39900_GM;
MethodInfo m39900_MI = 
{
	"RemoveAt", NULL, &t7525_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7525_m39900_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39900_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7525_m39896_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1954_0_0_0;
extern void* RuntimeInvoker_t1954_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39896_GM;
MethodInfo m39896_MI = 
{
	"get_Item", NULL, &t7525_TI, &t1954_0_0_0, RuntimeInvoker_t1954_t110, t7525_m39896_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39896_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1954_0_0_0;
static ParameterInfo t7525_m39897_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1954_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39897_GM;
MethodInfo m39897_MI = 
{
	"set_Item", NULL, &t7525_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7525_m39897_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39897_GM};
static MethodInfo* t7525_MIs[] =
{
	&m39898_MI,
	&m39899_MI,
	&m39900_MI,
	&m39896_MI,
	&m39897_MI,
	NULL
};
static TypeInfo* t7525_ITIs[] = 
{
	&t739_TI,
	&t7524_TI,
	&t7526_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7525_0_0_0;
extern Il2CppType t7525_1_0_0;
struct t7525;
extern Il2CppGenericClass t7525_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7525_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7525_MIs, t7525_PIs, NULL, NULL, NULL, NULL, NULL, &t7525_TI, t7525_ITIs, NULL, &t2240__CustomAttributeCache, &t7525_TI, &t7525_0_0_0, &t7525_1_0_0, NULL, &t7525_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5846_TI;

#include "t1995.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.NonSerializedAttribute>
extern MethodInfo m39901_MI;
static PropertyInfo t5846____Current_PropertyInfo = 
{
	&t5846_TI, "Current", &m39901_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5846_PIs[] =
{
	&t5846____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1995_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39901_GM;
MethodInfo m39901_MI = 
{
	"get_Current", NULL, &t5846_TI, &t1995_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39901_GM};
static MethodInfo* t5846_MIs[] =
{
	&m39901_MI,
	NULL
};
static TypeInfo* t5846_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5846_0_0_0;
extern Il2CppType t5846_1_0_0;
struct t5846;
extern Il2CppGenericClass t5846_GC;
TypeInfo t5846_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5846_MIs, t5846_PIs, NULL, NULL, NULL, NULL, NULL, &t5846_TI, t5846_ITIs, NULL, &EmptyCustomAttributesCache, &t5846_TI, &t5846_0_0_0, &t5846_1_0_0, NULL, &t5846_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4150.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4150_TI;
#include "t4150MD.h"

extern TypeInfo t1995_TI;
extern MethodInfo m23547_MI;
extern MethodInfo m31131_MI;
struct t107;
struct t107;
 t5 * m23596_gshared (t107 * __this, int32_t p0, MethodInfo* method);
#define m23596(__this, p0, method) (t5 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
#define m31131(__this, p0, method) (t1995 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.NonSerializedAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t4150_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4150_TI, offsetof(t4150, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4150_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4150_TI, offsetof(t4150, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4150_FIs[] =
{
	&t4150_f0_FieldInfo,
	&t4150_f1_FieldInfo,
	NULL
};
extern MethodInfo m23544_MI;
static PropertyInfo t4150____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4150_TI, "System.Collections.IEnumerator.Current", &m23544_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4150____Current_PropertyInfo = 
{
	&t4150_TI, "Current", &m23547_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4150_PIs[] =
{
	&t4150____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4150____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4150_m23543_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23543_GM;
MethodInfo m23543_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t4150_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4150_m23543_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23543_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23544_GM;
MethodInfo m23544_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t4150_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23544_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23545_GM;
MethodInfo m23545_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t4150_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23545_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23546_GM;
MethodInfo m23546_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t4150_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23546_GM};
extern Il2CppType t1995_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23547_GM;
MethodInfo m23547_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t4150_TI, &t1995_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23547_GM};
static MethodInfo* t4150_MIs[] =
{
	&m23543_MI,
	&m23544_MI,
	&m23545_MI,
	&m23546_MI,
	&m23547_MI,
	NULL
};
extern MethodInfo m23546_MI;
extern MethodInfo m23545_MI;
static MethodInfo* t4150_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m23544_MI,
	&m23546_MI,
	&m23545_MI,
	&m23547_MI,
};
static TypeInfo* t4150_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5846_TI,
};
static Il2CppInterfaceOffsetPair t4150_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5846_TI, 7},
};
extern TypeInfo t1995_TI;
static Il2CppRGCTXData t4150_RGCTXData[3] = 
{
	&m23547_MI/* Method Usage */,
	&t1995_TI/* Class Usage */,
	&m31131_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4150_0_0_0;
extern Il2CppType t4150_1_0_0;
extern Il2CppGenericClass t4150_GC;
TypeInfo t4150_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4150_MIs, t4150_PIs, t4150_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4150_TI, t4150_ITIs, t4150_VT, &EmptyCustomAttributesCache, &t4150_TI, &t4150_0_0_0, &t4150_1_0_0, t4150_IOs, &t4150_GC, NULL, NULL, NULL, t4150_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4150)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7527_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>
extern MethodInfo m39902_MI;
static PropertyInfo t7527____Count_PropertyInfo = 
{
	&t7527_TI, "Count", &m39902_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39903_MI;
static PropertyInfo t7527____IsReadOnly_PropertyInfo = 
{
	&t7527_TI, "IsReadOnly", &m39903_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7527_PIs[] =
{
	&t7527____Count_PropertyInfo,
	&t7527____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39902_GM;
MethodInfo m39902_MI = 
{
	"get_Count", NULL, &t7527_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39902_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39903_GM;
MethodInfo m39903_MI = 
{
	"get_IsReadOnly", NULL, &t7527_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39903_GM};
extern Il2CppType t1995_0_0_0;
extern Il2CppType t1995_0_0_0;
static ParameterInfo t7527_m39904_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1995_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39904_GM;
MethodInfo m39904_MI = 
{
	"Add", NULL, &t7527_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t7527_m39904_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39904_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39905_GM;
MethodInfo m39905_MI = 
{
	"Clear", NULL, &t7527_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39905_GM};
extern Il2CppType t1995_0_0_0;
static ParameterInfo t7527_m39906_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1995_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39906_GM;
MethodInfo m39906_MI = 
{
	"Contains", NULL, &t7527_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7527_m39906_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39906_GM};
extern Il2CppType t4379_0_0_0;
extern Il2CppType t4379_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7527_m39907_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4379_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39907_GM;
MethodInfo m39907_MI = 
{
	"CopyTo", NULL, &t7527_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7527_m39907_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39907_GM};
extern Il2CppType t1995_0_0_0;
static ParameterInfo t7527_m39908_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1995_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39908_GM;
MethodInfo m39908_MI = 
{
	"Remove", NULL, &t7527_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7527_m39908_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39908_GM};
static MethodInfo* t7527_MIs[] =
{
	&m39902_MI,
	&m39903_MI,
	&m39904_MI,
	&m39905_MI,
	&m39906_MI,
	&m39907_MI,
	&m39908_MI,
	NULL
};
extern TypeInfo t7529_TI;
static TypeInfo* t7527_ITIs[] = 
{
	&t739_TI,
	&t7529_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7527_0_0_0;
extern Il2CppType t7527_1_0_0;
struct t7527;
extern Il2CppGenericClass t7527_GC;
TypeInfo t7527_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7527_MIs, t7527_PIs, NULL, NULL, NULL, NULL, NULL, &t7527_TI, t7527_ITIs, NULL, &EmptyCustomAttributesCache, &t7527_TI, &t7527_0_0_0, &t7527_1_0_0, NULL, &t7527_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.NonSerializedAttribute>
extern Il2CppType t5846_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39909_GM;
MethodInfo m39909_MI = 
{
	"GetEnumerator", NULL, &t7529_TI, &t5846_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39909_GM};
static MethodInfo* t7529_MIs[] =
{
	&m39909_MI,
	NULL
};
static TypeInfo* t7529_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7529_0_0_0;
extern Il2CppType t7529_1_0_0;
struct t7529;
extern Il2CppGenericClass t7529_GC;
TypeInfo t7529_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7529_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7529_TI, t7529_ITIs, NULL, &EmptyCustomAttributesCache, &t7529_TI, &t7529_0_0_0, &t7529_1_0_0, NULL, &t7529_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7528_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.NonSerializedAttribute>
extern MethodInfo m39910_MI;
extern MethodInfo m39911_MI;
static PropertyInfo t7528____Item_PropertyInfo = 
{
	&t7528_TI, "Item", &m39910_MI, &m39911_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7528_PIs[] =
{
	&t7528____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1995_0_0_0;
static ParameterInfo t7528_m39912_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1995_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39912_GM;
MethodInfo m39912_MI = 
{
	"IndexOf", NULL, &t7528_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7528_m39912_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39912_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1995_0_0_0;
static ParameterInfo t7528_m39913_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1995_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39913_GM;
MethodInfo m39913_MI = 
{
	"Insert", NULL, &t7528_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7528_m39913_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39913_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7528_m39914_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39914_GM;
MethodInfo m39914_MI = 
{
	"RemoveAt", NULL, &t7528_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7528_m39914_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39914_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7528_m39910_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1995_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39910_GM;
MethodInfo m39910_MI = 
{
	"get_Item", NULL, &t7528_TI, &t1995_0_0_0, RuntimeInvoker_t5_t110, t7528_m39910_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39910_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1995_0_0_0;
static ParameterInfo t7528_m39911_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1995_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39911_GM;
MethodInfo m39911_MI = 
{
	"set_Item", NULL, &t7528_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7528_m39911_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39911_GM};
static MethodInfo* t7528_MIs[] =
{
	&m39912_MI,
	&m39913_MI,
	&m39914_MI,
	&m39910_MI,
	&m39911_MI,
	NULL
};
static TypeInfo* t7528_ITIs[] = 
{
	&t739_TI,
	&t7527_TI,
	&t7529_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7528_0_0_0;
extern Il2CppType t7528_1_0_0;
struct t7528;
extern Il2CppGenericClass t7528_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7528_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7528_MIs, t7528_PIs, NULL, NULL, NULL, NULL, NULL, &t7528_TI, t7528_ITIs, NULL, &t2240__CustomAttributeCache, &t7528_TI, &t7528_0_0_0, &t7528_1_0_0, NULL, &t7528_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5848_TI;

#include "t1978.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.PlatformID>
extern MethodInfo m39915_MI;
static PropertyInfo t5848____Current_PropertyInfo = 
{
	&t5848_TI, "Current", &m39915_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5848_PIs[] =
{
	&t5848____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1978_0_0_0;
extern void* RuntimeInvoker_t1978 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39915_GM;
MethodInfo m39915_MI = 
{
	"get_Current", NULL, &t5848_TI, &t1978_0_0_0, RuntimeInvoker_t1978, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39915_GM};
static MethodInfo* t5848_MIs[] =
{
	&m39915_MI,
	NULL
};
static TypeInfo* t5848_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5848_0_0_0;
extern Il2CppType t5848_1_0_0;
struct t5848;
extern Il2CppGenericClass t5848_GC;
TypeInfo t5848_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5848_MIs, t5848_PIs, NULL, NULL, NULL, NULL, NULL, &t5848_TI, t5848_ITIs, NULL, &EmptyCustomAttributesCache, &t5848_TI, &t5848_0_0_0, &t5848_1_0_0, NULL, &t5848_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4151.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4151_TI;
#include "t4151MD.h"

extern TypeInfo t1978_TI;
extern MethodInfo m23552_MI;
extern MethodInfo m31142_MI;
struct t107;
 int32_t m31142 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m23548_MI;
 void m23548 (t4151 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23549_MI;
 t5 * m23549 (t4151 * __this, MethodInfo* method){
	{
		int32_t L_0 = m23552(__this, &m23552_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1978_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m23550_MI;
 void m23550 (t4151 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23551_MI;
 bool m23551 (t4151 * __this, MethodInfo* method){
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
		int32_t L_2 = m4764(L_1, &m4764_MI);
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
 int32_t m23552 (t4151 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t133 * L_1 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4759(L_1, (t11*) &_stringLiteral1079, &m4759_MI);
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
		m4759(L_3, (t11*) &_stringLiteral1080, &m4759_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t107 * L_4 = (__this->f0);
		t107 * L_5 = (__this->f0);
		int32_t L_6 = m4764(L_5, &m4764_MI);
		int32_t L_7 = (__this->f1);
		int32_t L_8 = m31142(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m31142_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.PlatformID>
extern Il2CppType t107_0_0_1;
FieldInfo t4151_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4151_TI, offsetof(t4151, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4151_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4151_TI, offsetof(t4151, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4151_FIs[] =
{
	&t4151_f0_FieldInfo,
	&t4151_f1_FieldInfo,
	NULL
};
static PropertyInfo t4151____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4151_TI, "System.Collections.IEnumerator.Current", &m23549_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4151____Current_PropertyInfo = 
{
	&t4151_TI, "Current", &m23552_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4151_PIs[] =
{
	&t4151____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4151____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4151_m23548_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23548_GM;
MethodInfo m23548_MI = 
{
	".ctor", (methodPointerType)&m23548, &t4151_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4151_m23548_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23548_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23549_GM;
MethodInfo m23549_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m23549, &t4151_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23549_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23550_GM;
MethodInfo m23550_MI = 
{
	"Dispose", (methodPointerType)&m23550, &t4151_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23550_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23551_GM;
MethodInfo m23551_MI = 
{
	"MoveNext", (methodPointerType)&m23551, &t4151_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23551_GM};
extern Il2CppType t1978_0_0_0;
extern void* RuntimeInvoker_t1978 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23552_GM;
MethodInfo m23552_MI = 
{
	"get_Current", (methodPointerType)&m23552, &t4151_TI, &t1978_0_0_0, RuntimeInvoker_t1978, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23552_GM};
static MethodInfo* t4151_MIs[] =
{
	&m23548_MI,
	&m23549_MI,
	&m23550_MI,
	&m23551_MI,
	&m23552_MI,
	NULL
};
static MethodInfo* t4151_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m23549_MI,
	&m23551_MI,
	&m23550_MI,
	&m23552_MI,
};
static TypeInfo* t4151_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5848_TI,
};
static Il2CppInterfaceOffsetPair t4151_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5848_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4151_0_0_0;
extern Il2CppType t4151_1_0_0;
extern Il2CppGenericClass t4151_GC;
TypeInfo t4151_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4151_MIs, t4151_PIs, t4151_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4151_TI, t4151_ITIs, t4151_VT, &EmptyCustomAttributesCache, &t4151_TI, &t4151_0_0_0, &t4151_1_0_0, t4151_IOs, &t4151_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4151)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7530_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.PlatformID>
extern MethodInfo m39916_MI;
static PropertyInfo t7530____Count_PropertyInfo = 
{
	&t7530_TI, "Count", &m39916_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39917_MI;
static PropertyInfo t7530____IsReadOnly_PropertyInfo = 
{
	&t7530_TI, "IsReadOnly", &m39917_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7530_PIs[] =
{
	&t7530____Count_PropertyInfo,
	&t7530____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39916_GM;
MethodInfo m39916_MI = 
{
	"get_Count", NULL, &t7530_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39916_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39917_GM;
MethodInfo m39917_MI = 
{
	"get_IsReadOnly", NULL, &t7530_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39917_GM};
extern Il2CppType t1978_0_0_0;
extern Il2CppType t1978_0_0_0;
static ParameterInfo t7530_m39918_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1978_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39918_GM;
MethodInfo m39918_MI = 
{
	"Add", NULL, &t7530_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7530_m39918_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39918_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39919_GM;
MethodInfo m39919_MI = 
{
	"Clear", NULL, &t7530_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39919_GM};
extern Il2CppType t1978_0_0_0;
static ParameterInfo t7530_m39920_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1978_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39920_GM;
MethodInfo m39920_MI = 
{
	"Contains", NULL, &t7530_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7530_m39920_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39920_GM};
extern Il2CppType t4380_0_0_0;
extern Il2CppType t4380_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7530_m39921_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4380_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39921_GM;
MethodInfo m39921_MI = 
{
	"CopyTo", NULL, &t7530_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7530_m39921_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39921_GM};
extern Il2CppType t1978_0_0_0;
static ParameterInfo t7530_m39922_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1978_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39922_GM;
MethodInfo m39922_MI = 
{
	"Remove", NULL, &t7530_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7530_m39922_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39922_GM};
static MethodInfo* t7530_MIs[] =
{
	&m39916_MI,
	&m39917_MI,
	&m39918_MI,
	&m39919_MI,
	&m39920_MI,
	&m39921_MI,
	&m39922_MI,
	NULL
};
extern TypeInfo t7532_TI;
static TypeInfo* t7530_ITIs[] = 
{
	&t739_TI,
	&t7532_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7530_0_0_0;
extern Il2CppType t7530_1_0_0;
struct t7530;
extern Il2CppGenericClass t7530_GC;
TypeInfo t7530_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7530_MIs, t7530_PIs, NULL, NULL, NULL, NULL, NULL, &t7530_TI, t7530_ITIs, NULL, &EmptyCustomAttributesCache, &t7530_TI, &t7530_0_0_0, &t7530_1_0_0, NULL, &t7530_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.PlatformID>
extern Il2CppType t5848_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39923_GM;
MethodInfo m39923_MI = 
{
	"GetEnumerator", NULL, &t7532_TI, &t5848_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39923_GM};
static MethodInfo* t7532_MIs[] =
{
	&m39923_MI,
	NULL
};
static TypeInfo* t7532_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7532_0_0_0;
extern Il2CppType t7532_1_0_0;
struct t7532;
extern Il2CppGenericClass t7532_GC;
TypeInfo t7532_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7532_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7532_TI, t7532_ITIs, NULL, &EmptyCustomAttributesCache, &t7532_TI, &t7532_0_0_0, &t7532_1_0_0, NULL, &t7532_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7531_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.PlatformID>
extern MethodInfo m39924_MI;
extern MethodInfo m39925_MI;
static PropertyInfo t7531____Item_PropertyInfo = 
{
	&t7531_TI, "Item", &m39924_MI, &m39925_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7531_PIs[] =
{
	&t7531____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1978_0_0_0;
static ParameterInfo t7531_m39926_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1978_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39926_GM;
MethodInfo m39926_MI = 
{
	"IndexOf", NULL, &t7531_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t7531_m39926_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39926_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1978_0_0_0;
static ParameterInfo t7531_m39927_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1978_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39927_GM;
MethodInfo m39927_MI = 
{
	"Insert", NULL, &t7531_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7531_m39927_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39927_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7531_m39928_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39928_GM;
MethodInfo m39928_MI = 
{
	"RemoveAt", NULL, &t7531_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7531_m39928_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39928_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7531_m39924_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1978_0_0_0;
extern void* RuntimeInvoker_t1978_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39924_GM;
MethodInfo m39924_MI = 
{
	"get_Item", NULL, &t7531_TI, &t1978_0_0_0, RuntimeInvoker_t1978_t110, t7531_m39924_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39924_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1978_0_0_0;
static ParameterInfo t7531_m39925_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1978_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39925_GM;
MethodInfo m39925_MI = 
{
	"set_Item", NULL, &t7531_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7531_m39925_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39925_GM};
static MethodInfo* t7531_MIs[] =
{
	&m39926_MI,
	&m39927_MI,
	&m39928_MI,
	&m39924_MI,
	&m39925_MI,
	NULL
};
static TypeInfo* t7531_ITIs[] = 
{
	&t739_TI,
	&t7530_TI,
	&t7532_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7531_0_0_0;
extern Il2CppType t7531_1_0_0;
struct t7531;
extern Il2CppGenericClass t7531_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7531_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7531_MIs, t7531_PIs, NULL, NULL, NULL, NULL, NULL, &t7531_TI, t7531_ITIs, NULL, &t2240__CustomAttributeCache, &t7531_TI, &t7531_0_0_0, &t7531_1_0_0, NULL, &t7531_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5850_TI;

#include "t1212.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.StringComparison>
extern MethodInfo m39929_MI;
static PropertyInfo t5850____Current_PropertyInfo = 
{
	&t5850_TI, "Current", &m39929_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5850_PIs[] =
{
	&t5850____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1212_0_0_0;
extern void* RuntimeInvoker_t1212 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39929_GM;
MethodInfo m39929_MI = 
{
	"get_Current", NULL, &t5850_TI, &t1212_0_0_0, RuntimeInvoker_t1212, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39929_GM};
static MethodInfo* t5850_MIs[] =
{
	&m39929_MI,
	NULL
};
static TypeInfo* t5850_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5850_0_0_0;
extern Il2CppType t5850_1_0_0;
struct t5850;
extern Il2CppGenericClass t5850_GC;
TypeInfo t5850_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5850_MIs, t5850_PIs, NULL, NULL, NULL, NULL, NULL, &t5850_TI, t5850_ITIs, NULL, &EmptyCustomAttributesCache, &t5850_TI, &t5850_0_0_0, &t5850_1_0_0, NULL, &t5850_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4152.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4152_TI;
#include "t4152MD.h"

extern TypeInfo t1212_TI;
extern MethodInfo m23557_MI;
extern MethodInfo m31153_MI;
struct t107;
 int32_t m31153 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m23553_MI;
 void m23553 (t4152 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23554_MI;
 t5 * m23554 (t4152 * __this, MethodInfo* method){
	{
		int32_t L_0 = m23557(__this, &m23557_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1212_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m23555_MI;
 void m23555 (t4152 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23556_MI;
 bool m23556 (t4152 * __this, MethodInfo* method){
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
		int32_t L_2 = m4764(L_1, &m4764_MI);
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
 int32_t m23557 (t4152 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t133 * L_1 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4759(L_1, (t11*) &_stringLiteral1079, &m4759_MI);
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
		m4759(L_3, (t11*) &_stringLiteral1080, &m4759_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t107 * L_4 = (__this->f0);
		t107 * L_5 = (__this->f0);
		int32_t L_6 = m4764(L_5, &m4764_MI);
		int32_t L_7 = (__this->f1);
		int32_t L_8 = m31153(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m31153_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.StringComparison>
extern Il2CppType t107_0_0_1;
FieldInfo t4152_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4152_TI, offsetof(t4152, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4152_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4152_TI, offsetof(t4152, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4152_FIs[] =
{
	&t4152_f0_FieldInfo,
	&t4152_f1_FieldInfo,
	NULL
};
static PropertyInfo t4152____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4152_TI, "System.Collections.IEnumerator.Current", &m23554_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4152____Current_PropertyInfo = 
{
	&t4152_TI, "Current", &m23557_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4152_PIs[] =
{
	&t4152____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4152____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4152_m23553_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23553_GM;
MethodInfo m23553_MI = 
{
	".ctor", (methodPointerType)&m23553, &t4152_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4152_m23553_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23553_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23554_GM;
MethodInfo m23554_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m23554, &t4152_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23554_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23555_GM;
MethodInfo m23555_MI = 
{
	"Dispose", (methodPointerType)&m23555, &t4152_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23555_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23556_GM;
MethodInfo m23556_MI = 
{
	"MoveNext", (methodPointerType)&m23556, &t4152_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23556_GM};
extern Il2CppType t1212_0_0_0;
extern void* RuntimeInvoker_t1212 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23557_GM;
MethodInfo m23557_MI = 
{
	"get_Current", (methodPointerType)&m23557, &t4152_TI, &t1212_0_0_0, RuntimeInvoker_t1212, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23557_GM};
static MethodInfo* t4152_MIs[] =
{
	&m23553_MI,
	&m23554_MI,
	&m23555_MI,
	&m23556_MI,
	&m23557_MI,
	NULL
};
static MethodInfo* t4152_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m23554_MI,
	&m23556_MI,
	&m23555_MI,
	&m23557_MI,
};
static TypeInfo* t4152_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5850_TI,
};
static Il2CppInterfaceOffsetPair t4152_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5850_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4152_0_0_0;
extern Il2CppType t4152_1_0_0;
extern Il2CppGenericClass t4152_GC;
TypeInfo t4152_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4152_MIs, t4152_PIs, t4152_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4152_TI, t4152_ITIs, t4152_VT, &EmptyCustomAttributesCache, &t4152_TI, &t4152_0_0_0, &t4152_1_0_0, t4152_IOs, &t4152_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4152)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7533_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.StringComparison>
extern MethodInfo m39930_MI;
static PropertyInfo t7533____Count_PropertyInfo = 
{
	&t7533_TI, "Count", &m39930_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39931_MI;
static PropertyInfo t7533____IsReadOnly_PropertyInfo = 
{
	&t7533_TI, "IsReadOnly", &m39931_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7533_PIs[] =
{
	&t7533____Count_PropertyInfo,
	&t7533____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39930_GM;
MethodInfo m39930_MI = 
{
	"get_Count", NULL, &t7533_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39930_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39931_GM;
MethodInfo m39931_MI = 
{
	"get_IsReadOnly", NULL, &t7533_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39931_GM};
extern Il2CppType t1212_0_0_0;
extern Il2CppType t1212_0_0_0;
static ParameterInfo t7533_m39932_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1212_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39932_GM;
MethodInfo m39932_MI = 
{
	"Add", NULL, &t7533_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7533_m39932_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39932_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39933_GM;
MethodInfo m39933_MI = 
{
	"Clear", NULL, &t7533_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39933_GM};
extern Il2CppType t1212_0_0_0;
static ParameterInfo t7533_m39934_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1212_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39934_GM;
MethodInfo m39934_MI = 
{
	"Contains", NULL, &t7533_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7533_m39934_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39934_GM};
extern Il2CppType t4381_0_0_0;
extern Il2CppType t4381_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7533_m39935_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4381_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39935_GM;
MethodInfo m39935_MI = 
{
	"CopyTo", NULL, &t7533_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7533_m39935_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39935_GM};
extern Il2CppType t1212_0_0_0;
static ParameterInfo t7533_m39936_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1212_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39936_GM;
MethodInfo m39936_MI = 
{
	"Remove", NULL, &t7533_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7533_m39936_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39936_GM};
static MethodInfo* t7533_MIs[] =
{
	&m39930_MI,
	&m39931_MI,
	&m39932_MI,
	&m39933_MI,
	&m39934_MI,
	&m39935_MI,
	&m39936_MI,
	NULL
};
extern TypeInfo t7535_TI;
static TypeInfo* t7533_ITIs[] = 
{
	&t739_TI,
	&t7535_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7533_0_0_0;
extern Il2CppType t7533_1_0_0;
struct t7533;
extern Il2CppGenericClass t7533_GC;
TypeInfo t7533_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7533_MIs, t7533_PIs, NULL, NULL, NULL, NULL, NULL, &t7533_TI, t7533_ITIs, NULL, &EmptyCustomAttributesCache, &t7533_TI, &t7533_0_0_0, &t7533_1_0_0, NULL, &t7533_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.StringComparison>
extern Il2CppType t5850_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39937_GM;
MethodInfo m39937_MI = 
{
	"GetEnumerator", NULL, &t7535_TI, &t5850_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39937_GM};
static MethodInfo* t7535_MIs[] =
{
	&m39937_MI,
	NULL
};
static TypeInfo* t7535_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7535_0_0_0;
extern Il2CppType t7535_1_0_0;
struct t7535;
extern Il2CppGenericClass t7535_GC;
TypeInfo t7535_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7535_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7535_TI, t7535_ITIs, NULL, &EmptyCustomAttributesCache, &t7535_TI, &t7535_0_0_0, &t7535_1_0_0, NULL, &t7535_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7534_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.StringComparison>
extern MethodInfo m39938_MI;
extern MethodInfo m39939_MI;
static PropertyInfo t7534____Item_PropertyInfo = 
{
	&t7534_TI, "Item", &m39938_MI, &m39939_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7534_PIs[] =
{
	&t7534____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1212_0_0_0;
static ParameterInfo t7534_m39940_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1212_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39940_GM;
MethodInfo m39940_MI = 
{
	"IndexOf", NULL, &t7534_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t7534_m39940_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39940_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1212_0_0_0;
static ParameterInfo t7534_m39941_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1212_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39941_GM;
MethodInfo m39941_MI = 
{
	"Insert", NULL, &t7534_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7534_m39941_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39941_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7534_m39942_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39942_GM;
MethodInfo m39942_MI = 
{
	"RemoveAt", NULL, &t7534_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7534_m39942_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39942_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7534_m39938_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1212_0_0_0;
extern void* RuntimeInvoker_t1212_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39938_GM;
MethodInfo m39938_MI = 
{
	"get_Item", NULL, &t7534_TI, &t1212_0_0_0, RuntimeInvoker_t1212_t110, t7534_m39938_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39938_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1212_0_0_0;
static ParameterInfo t7534_m39939_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1212_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39939_GM;
MethodInfo m39939_MI = 
{
	"set_Item", NULL, &t7534_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7534_m39939_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39939_GM};
static MethodInfo* t7534_MIs[] =
{
	&m39940_MI,
	&m39941_MI,
	&m39942_MI,
	&m39938_MI,
	&m39939_MI,
	NULL
};
static TypeInfo* t7534_ITIs[] = 
{
	&t739_TI,
	&t7533_TI,
	&t7535_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7534_0_0_0;
extern Il2CppType t7534_1_0_0;
struct t7534;
extern Il2CppGenericClass t7534_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7534_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7534_MIs, t7534_PIs, NULL, NULL, NULL, NULL, NULL, &t7534_TI, t7534_ITIs, NULL, &t2240__CustomAttributeCache, &t7534_TI, &t7534_0_0_0, &t7534_1_0_0, NULL, &t7534_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5852_TI;

#include "t1204.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.StringSplitOptions>
extern MethodInfo m39943_MI;
static PropertyInfo t5852____Current_PropertyInfo = 
{
	&t5852_TI, "Current", &m39943_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5852_PIs[] =
{
	&t5852____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1204_0_0_0;
extern void* RuntimeInvoker_t1204 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39943_GM;
MethodInfo m39943_MI = 
{
	"get_Current", NULL, &t5852_TI, &t1204_0_0_0, RuntimeInvoker_t1204, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39943_GM};
static MethodInfo* t5852_MIs[] =
{
	&m39943_MI,
	NULL
};
static TypeInfo* t5852_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5852_0_0_0;
extern Il2CppType t5852_1_0_0;
struct t5852;
extern Il2CppGenericClass t5852_GC;
TypeInfo t5852_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5852_MIs, t5852_PIs, NULL, NULL, NULL, NULL, NULL, &t5852_TI, t5852_ITIs, NULL, &EmptyCustomAttributesCache, &t5852_TI, &t5852_0_0_0, &t5852_1_0_0, NULL, &t5852_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4153.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4153_TI;
#include "t4153MD.h"

extern TypeInfo t1204_TI;
extern MethodInfo m23562_MI;
extern MethodInfo m31164_MI;
struct t107;
 int32_t m31164 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m23558_MI;
 void m23558 (t4153 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23559_MI;
 t5 * m23559 (t4153 * __this, MethodInfo* method){
	{
		int32_t L_0 = m23562(__this, &m23562_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1204_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m23560_MI;
 void m23560 (t4153 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23561_MI;
 bool m23561 (t4153 * __this, MethodInfo* method){
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
		int32_t L_2 = m4764(L_1, &m4764_MI);
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
 int32_t m23562 (t4153 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t133 * L_1 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4759(L_1, (t11*) &_stringLiteral1079, &m4759_MI);
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
		m4759(L_3, (t11*) &_stringLiteral1080, &m4759_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t107 * L_4 = (__this->f0);
		t107 * L_5 = (__this->f0);
		int32_t L_6 = m4764(L_5, &m4764_MI);
		int32_t L_7 = (__this->f1);
		int32_t L_8 = m31164(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m31164_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.StringSplitOptions>
extern Il2CppType t107_0_0_1;
FieldInfo t4153_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4153_TI, offsetof(t4153, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4153_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4153_TI, offsetof(t4153, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4153_FIs[] =
{
	&t4153_f0_FieldInfo,
	&t4153_f1_FieldInfo,
	NULL
};
static PropertyInfo t4153____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4153_TI, "System.Collections.IEnumerator.Current", &m23559_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4153____Current_PropertyInfo = 
{
	&t4153_TI, "Current", &m23562_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4153_PIs[] =
{
	&t4153____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4153____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4153_m23558_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23558_GM;
MethodInfo m23558_MI = 
{
	".ctor", (methodPointerType)&m23558, &t4153_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4153_m23558_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23558_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23559_GM;
MethodInfo m23559_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m23559, &t4153_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23559_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23560_GM;
MethodInfo m23560_MI = 
{
	"Dispose", (methodPointerType)&m23560, &t4153_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23560_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23561_GM;
MethodInfo m23561_MI = 
{
	"MoveNext", (methodPointerType)&m23561, &t4153_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23561_GM};
extern Il2CppType t1204_0_0_0;
extern void* RuntimeInvoker_t1204 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23562_GM;
MethodInfo m23562_MI = 
{
	"get_Current", (methodPointerType)&m23562, &t4153_TI, &t1204_0_0_0, RuntimeInvoker_t1204, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23562_GM};
static MethodInfo* t4153_MIs[] =
{
	&m23558_MI,
	&m23559_MI,
	&m23560_MI,
	&m23561_MI,
	&m23562_MI,
	NULL
};
static MethodInfo* t4153_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m23559_MI,
	&m23561_MI,
	&m23560_MI,
	&m23562_MI,
};
static TypeInfo* t4153_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5852_TI,
};
static Il2CppInterfaceOffsetPair t4153_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5852_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4153_0_0_0;
extern Il2CppType t4153_1_0_0;
extern Il2CppGenericClass t4153_GC;
TypeInfo t4153_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4153_MIs, t4153_PIs, t4153_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4153_TI, t4153_ITIs, t4153_VT, &EmptyCustomAttributesCache, &t4153_TI, &t4153_0_0_0, &t4153_1_0_0, t4153_IOs, &t4153_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4153)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7536_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.StringSplitOptions>
extern MethodInfo m39944_MI;
static PropertyInfo t7536____Count_PropertyInfo = 
{
	&t7536_TI, "Count", &m39944_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39945_MI;
static PropertyInfo t7536____IsReadOnly_PropertyInfo = 
{
	&t7536_TI, "IsReadOnly", &m39945_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7536_PIs[] =
{
	&t7536____Count_PropertyInfo,
	&t7536____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39944_GM;
MethodInfo m39944_MI = 
{
	"get_Count", NULL, &t7536_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39944_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39945_GM;
MethodInfo m39945_MI = 
{
	"get_IsReadOnly", NULL, &t7536_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39945_GM};
extern Il2CppType t1204_0_0_0;
extern Il2CppType t1204_0_0_0;
static ParameterInfo t7536_m39946_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1204_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39946_GM;
MethodInfo m39946_MI = 
{
	"Add", NULL, &t7536_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7536_m39946_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39946_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39947_GM;
MethodInfo m39947_MI = 
{
	"Clear", NULL, &t7536_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39947_GM};
extern Il2CppType t1204_0_0_0;
static ParameterInfo t7536_m39948_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1204_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39948_GM;
MethodInfo m39948_MI = 
{
	"Contains", NULL, &t7536_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7536_m39948_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39948_GM};
extern Il2CppType t4382_0_0_0;
extern Il2CppType t4382_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7536_m39949_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4382_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39949_GM;
MethodInfo m39949_MI = 
{
	"CopyTo", NULL, &t7536_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7536_m39949_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39949_GM};
extern Il2CppType t1204_0_0_0;
static ParameterInfo t7536_m39950_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1204_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39950_GM;
MethodInfo m39950_MI = 
{
	"Remove", NULL, &t7536_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7536_m39950_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39950_GM};
static MethodInfo* t7536_MIs[] =
{
	&m39944_MI,
	&m39945_MI,
	&m39946_MI,
	&m39947_MI,
	&m39948_MI,
	&m39949_MI,
	&m39950_MI,
	NULL
};
extern TypeInfo t7538_TI;
static TypeInfo* t7536_ITIs[] = 
{
	&t739_TI,
	&t7538_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7536_0_0_0;
extern Il2CppType t7536_1_0_0;
struct t7536;
extern Il2CppGenericClass t7536_GC;
TypeInfo t7536_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7536_MIs, t7536_PIs, NULL, NULL, NULL, NULL, NULL, &t7536_TI, t7536_ITIs, NULL, &EmptyCustomAttributesCache, &t7536_TI, &t7536_0_0_0, &t7536_1_0_0, NULL, &t7536_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.StringSplitOptions>
extern Il2CppType t5852_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39951_GM;
MethodInfo m39951_MI = 
{
	"GetEnumerator", NULL, &t7538_TI, &t5852_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39951_GM};
static MethodInfo* t7538_MIs[] =
{
	&m39951_MI,
	NULL
};
static TypeInfo* t7538_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7538_0_0_0;
extern Il2CppType t7538_1_0_0;
struct t7538;
extern Il2CppGenericClass t7538_GC;
TypeInfo t7538_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7538_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7538_TI, t7538_ITIs, NULL, &EmptyCustomAttributesCache, &t7538_TI, &t7538_0_0_0, &t7538_1_0_0, NULL, &t7538_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7537_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.StringSplitOptions>
extern MethodInfo m39952_MI;
extern MethodInfo m39953_MI;
static PropertyInfo t7537____Item_PropertyInfo = 
{
	&t7537_TI, "Item", &m39952_MI, &m39953_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7537_PIs[] =
{
	&t7537____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1204_0_0_0;
static ParameterInfo t7537_m39954_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1204_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39954_GM;
MethodInfo m39954_MI = 
{
	"IndexOf", NULL, &t7537_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t7537_m39954_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39954_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1204_0_0_0;
static ParameterInfo t7537_m39955_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1204_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39955_GM;
MethodInfo m39955_MI = 
{
	"Insert", NULL, &t7537_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7537_m39955_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39955_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7537_m39956_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39956_GM;
MethodInfo m39956_MI = 
{
	"RemoveAt", NULL, &t7537_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7537_m39956_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39956_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7537_m39952_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1204_0_0_0;
extern void* RuntimeInvoker_t1204_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39952_GM;
MethodInfo m39952_MI = 
{
	"get_Item", NULL, &t7537_TI, &t1204_0_0_0, RuntimeInvoker_t1204_t110, t7537_m39952_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39952_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1204_0_0_0;
static ParameterInfo t7537_m39953_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1204_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39953_GM;
MethodInfo m39953_MI = 
{
	"set_Item", NULL, &t7537_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7537_m39953_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39953_GM};
static MethodInfo* t7537_MIs[] =
{
	&m39954_MI,
	&m39955_MI,
	&m39956_MI,
	&m39952_MI,
	&m39953_MI,
	NULL
};
static TypeInfo* t7537_ITIs[] = 
{
	&t739_TI,
	&t7536_TI,
	&t7538_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7537_0_0_0;
extern Il2CppType t7537_1_0_0;
struct t7537;
extern Il2CppGenericClass t7537_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7537_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7537_MIs, t7537_PIs, NULL, NULL, NULL, NULL, NULL, &t7537_TI, t7537_ITIs, NULL, &t2240__CustomAttributeCache, &t7537_TI, &t7537_0_0_0, &t7537_1_0_0, NULL, &t7537_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5854_TI;

#include "t2004.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ThreadStaticAttribute>
extern MethodInfo m39957_MI;
static PropertyInfo t5854____Current_PropertyInfo = 
{
	&t5854_TI, "Current", &m39957_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5854_PIs[] =
{
	&t5854____Current_PropertyInfo,
	NULL
};
extern Il2CppType t2004_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39957_GM;
MethodInfo m39957_MI = 
{
	"get_Current", NULL, &t5854_TI, &t2004_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39957_GM};
static MethodInfo* t5854_MIs[] =
{
	&m39957_MI,
	NULL
};
static TypeInfo* t5854_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5854_0_0_0;
extern Il2CppType t5854_1_0_0;
struct t5854;
extern Il2CppGenericClass t5854_GC;
TypeInfo t5854_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5854_MIs, t5854_PIs, NULL, NULL, NULL, NULL, NULL, &t5854_TI, t5854_ITIs, NULL, &EmptyCustomAttributesCache, &t5854_TI, &t5854_0_0_0, &t5854_1_0_0, NULL, &t5854_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4154.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4154_TI;
#include "t4154MD.h"

extern TypeInfo t2004_TI;
extern MethodInfo m23567_MI;
extern MethodInfo m31175_MI;
struct t107;
#define m31175(__this, p0, method) (t2004 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t4154_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4154_TI, offsetof(t4154, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4154_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4154_TI, offsetof(t4154, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4154_FIs[] =
{
	&t4154_f0_FieldInfo,
	&t4154_f1_FieldInfo,
	NULL
};
extern MethodInfo m23564_MI;
static PropertyInfo t4154____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4154_TI, "System.Collections.IEnumerator.Current", &m23564_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4154____Current_PropertyInfo = 
{
	&t4154_TI, "Current", &m23567_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4154_PIs[] =
{
	&t4154____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4154____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4154_m23563_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23563_GM;
MethodInfo m23563_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t4154_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4154_m23563_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23563_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23564_GM;
MethodInfo m23564_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t4154_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23564_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23565_GM;
MethodInfo m23565_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t4154_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23565_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23566_GM;
MethodInfo m23566_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t4154_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23566_GM};
extern Il2CppType t2004_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23567_GM;
MethodInfo m23567_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t4154_TI, &t2004_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23567_GM};
static MethodInfo* t4154_MIs[] =
{
	&m23563_MI,
	&m23564_MI,
	&m23565_MI,
	&m23566_MI,
	&m23567_MI,
	NULL
};
extern MethodInfo m23566_MI;
extern MethodInfo m23565_MI;
static MethodInfo* t4154_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m23564_MI,
	&m23566_MI,
	&m23565_MI,
	&m23567_MI,
};
static TypeInfo* t4154_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5854_TI,
};
static Il2CppInterfaceOffsetPair t4154_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5854_TI, 7},
};
extern TypeInfo t2004_TI;
static Il2CppRGCTXData t4154_RGCTXData[3] = 
{
	&m23567_MI/* Method Usage */,
	&t2004_TI/* Class Usage */,
	&m31175_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4154_0_0_0;
extern Il2CppType t4154_1_0_0;
extern Il2CppGenericClass t4154_GC;
TypeInfo t4154_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4154_MIs, t4154_PIs, t4154_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4154_TI, t4154_ITIs, t4154_VT, &EmptyCustomAttributesCache, &t4154_TI, &t4154_0_0_0, &t4154_1_0_0, t4154_IOs, &t4154_GC, NULL, NULL, NULL, t4154_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4154)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7539_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>
extern MethodInfo m39958_MI;
static PropertyInfo t7539____Count_PropertyInfo = 
{
	&t7539_TI, "Count", &m39958_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39959_MI;
static PropertyInfo t7539____IsReadOnly_PropertyInfo = 
{
	&t7539_TI, "IsReadOnly", &m39959_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7539_PIs[] =
{
	&t7539____Count_PropertyInfo,
	&t7539____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39958_GM;
MethodInfo m39958_MI = 
{
	"get_Count", NULL, &t7539_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39958_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39959_GM;
MethodInfo m39959_MI = 
{
	"get_IsReadOnly", NULL, &t7539_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39959_GM};
extern Il2CppType t2004_0_0_0;
extern Il2CppType t2004_0_0_0;
static ParameterInfo t7539_m39960_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2004_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39960_GM;
MethodInfo m39960_MI = 
{
	"Add", NULL, &t7539_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t7539_m39960_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39960_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39961_GM;
MethodInfo m39961_MI = 
{
	"Clear", NULL, &t7539_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39961_GM};
extern Il2CppType t2004_0_0_0;
static ParameterInfo t7539_m39962_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2004_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39962_GM;
MethodInfo m39962_MI = 
{
	"Contains", NULL, &t7539_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7539_m39962_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39962_GM};
extern Il2CppType t4383_0_0_0;
extern Il2CppType t4383_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7539_m39963_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4383_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39963_GM;
MethodInfo m39963_MI = 
{
	"CopyTo", NULL, &t7539_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7539_m39963_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39963_GM};
extern Il2CppType t2004_0_0_0;
static ParameterInfo t7539_m39964_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2004_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39964_GM;
MethodInfo m39964_MI = 
{
	"Remove", NULL, &t7539_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7539_m39964_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39964_GM};
static MethodInfo* t7539_MIs[] =
{
	&m39958_MI,
	&m39959_MI,
	&m39960_MI,
	&m39961_MI,
	&m39962_MI,
	&m39963_MI,
	&m39964_MI,
	NULL
};
extern TypeInfo t7541_TI;
static TypeInfo* t7539_ITIs[] = 
{
	&t739_TI,
	&t7541_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7539_0_0_0;
extern Il2CppType t7539_1_0_0;
struct t7539;
extern Il2CppGenericClass t7539_GC;
TypeInfo t7539_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7539_MIs, t7539_PIs, NULL, NULL, NULL, NULL, NULL, &t7539_TI, t7539_ITIs, NULL, &EmptyCustomAttributesCache, &t7539_TI, &t7539_0_0_0, &t7539_1_0_0, NULL, &t7539_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ThreadStaticAttribute>
extern Il2CppType t5854_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39965_GM;
MethodInfo m39965_MI = 
{
	"GetEnumerator", NULL, &t7541_TI, &t5854_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39965_GM};
static MethodInfo* t7541_MIs[] =
{
	&m39965_MI,
	NULL
};
static TypeInfo* t7541_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7541_0_0_0;
extern Il2CppType t7541_1_0_0;
struct t7541;
extern Il2CppGenericClass t7541_GC;
TypeInfo t7541_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7541_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7541_TI, t7541_ITIs, NULL, &EmptyCustomAttributesCache, &t7541_TI, &t7541_0_0_0, &t7541_1_0_0, NULL, &t7541_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7540_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.ThreadStaticAttribute>
extern MethodInfo m39966_MI;
extern MethodInfo m39967_MI;
static PropertyInfo t7540____Item_PropertyInfo = 
{
	&t7540_TI, "Item", &m39966_MI, &m39967_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7540_PIs[] =
{
	&t7540____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2004_0_0_0;
static ParameterInfo t7540_m39968_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2004_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39968_GM;
MethodInfo m39968_MI = 
{
	"IndexOf", NULL, &t7540_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7540_m39968_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39968_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2004_0_0_0;
static ParameterInfo t7540_m39969_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2004_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39969_GM;
MethodInfo m39969_MI = 
{
	"Insert", NULL, &t7540_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7540_m39969_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39969_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7540_m39970_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39970_GM;
MethodInfo m39970_MI = 
{
	"RemoveAt", NULL, &t7540_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7540_m39970_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39970_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7540_m39966_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t2004_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39966_GM;
MethodInfo m39966_MI = 
{
	"get_Item", NULL, &t7540_TI, &t2004_0_0_0, RuntimeInvoker_t5_t110, t7540_m39966_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39966_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2004_0_0_0;
static ParameterInfo t7540_m39967_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2004_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39967_GM;
MethodInfo m39967_MI = 
{
	"set_Item", NULL, &t7540_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7540_m39967_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39967_GM};
static MethodInfo* t7540_MIs[] =
{
	&m39968_MI,
	&m39969_MI,
	&m39970_MI,
	&m39966_MI,
	&m39967_MI,
	NULL
};
static TypeInfo* t7540_ITIs[] = 
{
	&t739_TI,
	&t7539_TI,
	&t7541_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7540_0_0_0;
extern Il2CppType t7540_1_0_0;
struct t7540;
extern Il2CppGenericClass t7540_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7540_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7540_MIs, t7540_PIs, NULL, NULL, NULL, NULL, NULL, &t7540_TI, t7540_ITIs, NULL, &t2240__CustomAttributeCache, &t7540_TI, &t7540_0_0_0, &t7540_1_0_0, NULL, &t7540_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2438.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2438_TI;
#include "t2438MD.h"

extern TypeInfo t2440_TI;
#include "t4155MD.h"
extern MethodInfo m23569_MI;
extern MethodInfo m39374_MI;


extern MethodInfo m11629_MI;
 void m11629 (t2438 * __this, MethodInfo* method){
	{
		m23569(__this, &m23569_MI);
		return;
	}
}
extern MethodInfo m23568_MI;
 int32_t m23568 (t2438 * __this, t61  p0, t61  p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t61  L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t61_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t61  L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t61_TI), &L_2);
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
		t61  L_4 = p1;
		t5 * L_5 = Box(InitializedTypeInfo(&t61_TI), &L_4);
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
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, t61  >::Invoke(&m39374_MI, Box(InitializedTypeInfo(&t61_TI), &(*(&p0))), p1);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.GenericComparer`1<System.TimeSpan>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m11629_GM;
MethodInfo m11629_MI = 
{
	".ctor", (methodPointerType)&m11629, &t2438_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m11629_GM};
extern Il2CppType t61_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2438_m23568_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t61_t61 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23568_GM;
MethodInfo m23568_MI = 
{
	"Compare", (methodPointerType)&m23568, &t2438_TI, &t110_0_0_0, RuntimeInvoker_t110_t61_t61, t2438_m23568_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23568_GM};
static MethodInfo* t2438_MIs[] =
{
	&m11629_MI,
	&m23568_MI,
	NULL
};
extern MethodInfo m23571_MI;
static MethodInfo* t2438_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m23568_MI,
	&m23571_MI,
	&m23568_MI,
};
extern TypeInfo t7727_TI;
static Il2CppInterfaceOffsetPair t2438_IOs[] = 
{
	{ &t7727_TI, 4},
	{ &t991_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2438_0_0_0;
extern Il2CppType t2438_1_0_0;
extern TypeInfo t4155_TI;
struct t2438;
extern Il2CppGenericClass t2438_GC;
TypeInfo t2438_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericComparer`1", "System.Collections.Generic", t2438_MIs, NULL, NULL, NULL, &t4155_TI, NULL, NULL, &t2438_TI, NULL, t2438_VT, &EmptyCustomAttributesCache, &t2438_TI, &t2438_0_0_0, &t2438_1_0_0, t2438_IOs, &t2438_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2438), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t4155.h"
#ifndef _MSC_VER
#else
#endif

#include "t4156.h"
extern TypeInfo t4156_TI;
#include "t4156MD.h"
extern Il2CppType t2440_0_0_0;
extern MethodInfo m23573_MI;
extern MethodInfo m39971_MI;


 void m23569 (t4155 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m23570_MI;
 void m23570 (t5 * __this, MethodInfo* method){
	t4156 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t4156 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t4156_TI));
	m23573(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m23573_MI);
	((t4155_SFs*)InitializedTypeInfo(&t4155_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
 int32_t m23571 (t4155 * __this, t5 * p0, t5 * p1, MethodInfo* method){
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
		if (!((t5 *)IsInst(p0, InitializedTypeInfo(&t61_TI))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((t5 *)IsInst(p1, InitializedTypeInfo(&t61_TI))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, t61 , t61  >::Invoke(&m39971_MI, __this, ((*(t61 *)((t61 *)UnBox (p0, InitializedTypeInfo(&t61_TI))))), ((*(t61 *)((t61 *)UnBox (p1, InitializedTypeInfo(&t61_TI))))));
		return L_0;
	}

IL_0033:
	{
		t160 * L_1 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m10152(L_1, &m10152_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m23572_MI;
 t4155 * m23572 (t5 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t4155_TI));
		return (((t4155_SFs*)InitializedTypeInfo(&t4155_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<System.TimeSpan>
extern Il2CppType t4155_0_0_49;
FieldInfo t4155_f0_FieldInfo = 
{
	"_default", &t4155_0_0_49, &t4155_TI, offsetof(t4155_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t4155_FIs[] =
{
	&t4155_f0_FieldInfo,
	NULL
};
static PropertyInfo t4155____Default_PropertyInfo = 
{
	&t4155_TI, "Default", &m23572_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4155_PIs[] =
{
	&t4155____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23569_GM;
MethodInfo m23569_MI = 
{
	".ctor", (methodPointerType)&m23569, &t4155_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23569_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23570_GM;
MethodInfo m23570_MI = 
{
	".cctor", (methodPointerType)&m23570, &t4155_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23570_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t4155_m23571_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23571_GM;
MethodInfo m23571_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m23571, &t4155_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t4155_m23571_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23571_GM};
extern Il2CppType t61_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t4155_m39971_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t61_t61 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39971_GM;
MethodInfo m39971_MI = 
{
	"Compare", NULL, &t4155_TI, &t110_0_0_0, RuntimeInvoker_t110_t61_t61, t4155_m39971_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39971_GM};
extern Il2CppType t4155_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23572_GM;
MethodInfo m23572_MI = 
{
	"get_Default", (methodPointerType)&m23572, &t4155_TI, &t4155_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23572_GM};
static MethodInfo* t4155_MIs[] =
{
	&m23569_MI,
	&m23570_MI,
	&m23571_MI,
	&m39971_MI,
	&m23572_MI,
	NULL
};
static MethodInfo* t4155_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m39971_MI,
	&m23571_MI,
	NULL,
};
static TypeInfo* t4155_ITIs[] = 
{
	&t7727_TI,
	&t991_TI,
};
static Il2CppInterfaceOffsetPair t4155_IOs[] = 
{
	{ &t7727_TI, 4},
	{ &t991_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4155_0_0_0;
extern Il2CppType t4155_1_0_0;
struct t4155;
extern Il2CppGenericClass t4155_GC;
TypeInfo t4155_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t4155_MIs, t4155_PIs, t4155_FIs, NULL, &t5_TI, NULL, NULL, &t4155_TI, t4155_ITIs, t4155_VT, &EmptyCustomAttributesCache, &t4155_TI, &t4155_0_0_0, &t4155_1_0_0, t4155_IOs, &t4155_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4155), 0, -1, sizeof(t4155_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IComparer`1<System.TimeSpan>
extern Il2CppType t61_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t7727_m39972_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t61_t61 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39972_GM;
MethodInfo m39972_MI = 
{
	"Compare", NULL, &t7727_TI, &t110_0_0_0, RuntimeInvoker_t110_t61_t61, t7727_m39972_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39972_GM};
static MethodInfo* t7727_MIs[] =
{
	&m39972_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7727_0_0_0;
extern Il2CppType t7727_1_0_0;
struct t7727;
extern Il2CppGenericClass t7727_GC;
TypeInfo t7727_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t7727_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7727_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7727_TI, &t7727_0_0_0, &t7727_1_0_0, NULL, &t7727_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



 void m23573 (t4156 * __this, MethodInfo* method){
	{
		m23569(__this, &m23569_MI);
		return;
	}
}
extern MethodInfo m23574_MI;
 int32_t m23574 (t4156 * __this, t61  p0, t61  p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t61  L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t61_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t61  L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t61_TI), &L_2);
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
		t61  L_4 = p1;
		t5 * L_5 = Box(InitializedTypeInfo(&t61_TI), &L_4);
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
		t61  L_6 = p0;
		t5 * L_7 = Box(InitializedTypeInfo(&t61_TI), &L_6);
		if (!((t5*)IsInst(L_7, InitializedTypeInfo(&t2440_TI))))
		{
			goto IL_003e;
		}
	}
	{
		t61  L_8 = p0;
		t5 * L_9 = Box(InitializedTypeInfo(&t61_TI), &L_8);
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, t61  >::Invoke(&m39374_MI, ((t5*)Castclass(L_9, InitializedTypeInfo(&t2440_TI))), p1);
		return L_10;
	}

IL_003e:
	{
		t61  L_11 = p0;
		t5 * L_12 = Box(InitializedTypeInfo(&t61_TI), &L_11);
		if (!((t5 *)IsInst(L_12, InitializedTypeInfo(&t122_TI))))
		{
			goto IL_0062;
		}
	}
	{
		t61  L_13 = p0;
		t5 * L_14 = Box(InitializedTypeInfo(&t61_TI), &L_13);
		t61  L_15 = p1;
		t5 * L_16 = Box(InitializedTypeInfo(&t61_TI), &L_15);
		int32_t L_17 = (int32_t)InterfaceFuncInvoker1< int32_t, t5 * >::Invoke(&m11009_MI, ((t5 *)Castclass(L_14, InitializedTypeInfo(&t122_TI))), L_16);
		return L_17;
	}

IL_0062:
	{
		t160 * L_18 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2582(L_18, (t11*) &_stringLiteral1209, &m2582_MI);
		il2cpp_codegen_raise_exception(L_18);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23573_GM;
MethodInfo m23573_MI = 
{
	".ctor", (methodPointerType)&m23573, &t4156_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23573_GM};
extern Il2CppType t61_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t4156_m23574_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t61_t61 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23574_GM;
MethodInfo m23574_MI = 
{
	"Compare", (methodPointerType)&m23574, &t4156_TI, &t110_0_0_0, RuntimeInvoker_t110_t61_t61, t4156_m23574_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23574_GM};
static MethodInfo* t4156_MIs[] =
{
	&m23573_MI,
	&m23574_MI,
	NULL
};
static MethodInfo* t4156_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m23574_MI,
	&m23571_MI,
	&m23574_MI,
};
static Il2CppInterfaceOffsetPair t4156_IOs[] = 
{
	{ &t7727_TI, 4},
	{ &t991_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4156_0_0_0;
extern Il2CppType t4156_1_0_0;
struct t4156;
extern Il2CppGenericClass t4156_GC;
TypeInfo t4156_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t4156_MIs, NULL, NULL, NULL, &t4155_TI, NULL, &t1509_TI, &t4156_TI, NULL, t4156_VT, &EmptyCustomAttributesCache, &t4156_TI, &t4156_0_0_0, &t4156_1_0_0, t4156_IOs, &t4156_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4156), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t2439.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2439_TI;
#include "t2439MD.h"

extern TypeInfo t2441_TI;
#include "t4157MD.h"
extern MethodInfo m23577_MI;
extern MethodInfo m39389_MI;


extern MethodInfo m11630_MI;
 void m11630 (t2439 * __this, MethodInfo* method){
	{
		m23577(__this, &m23577_MI);
		return;
	}
}
extern MethodInfo m23575_MI;
 int32_t m23575 (t2439 * __this, t61  p0, MethodInfo* method){
	{
		t61  L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t61_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m466_MI, Box(InitializedTypeInfo(&t61_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m23576_MI;
 bool m23576 (t2439 * __this, t61  p0, t61  p1, MethodInfo* method){
	{
		t61  L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t61_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t61  L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t61_TI), &L_2);
		return ((((t5 *)L_3) == ((t5 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, t61  >::Invoke(&m39389_MI, Box(InitializedTypeInfo(&t61_TI), &(*(&p0))), p1);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m11630_GM;
MethodInfo m11630_MI = 
{
	".ctor", (methodPointerType)&m11630, &t2439_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m11630_GM};
extern Il2CppType t61_0_0_0;
static ParameterInfo t2439_m23575_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t61 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23575_GM;
MethodInfo m23575_MI = 
{
	"GetHashCode", (methodPointerType)&m23575, &t2439_TI, &t110_0_0_0, RuntimeInvoker_t110_t61, t2439_m23575_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23575_GM};
extern Il2CppType t61_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t2439_m23576_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t61_t61 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23576_GM;
MethodInfo m23576_MI = 
{
	"Equals", (methodPointerType)&m23576, &t2439_TI, &t108_0_0_0, RuntimeInvoker_t108_t61_t61, t2439_m23576_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23576_GM};
static MethodInfo* t2439_MIs[] =
{
	&m11630_MI,
	&m23575_MI,
	&m23576_MI,
	NULL
};
extern MethodInfo m23580_MI;
extern MethodInfo m23579_MI;
static MethodInfo* t2439_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m23576_MI,
	&m23575_MI,
	&m23580_MI,
	&m23579_MI,
	&m23575_MI,
	&m23576_MI,
};
extern TypeInfo t7728_TI;
static Il2CppInterfaceOffsetPair t2439_IOs[] = 
{
	{ &t7728_TI, 4},
	{ &t998_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2439_0_0_0;
extern Il2CppType t2439_1_0_0;
extern TypeInfo t4157_TI;
struct t2439;
extern Il2CppGenericClass t2439_GC;
TypeInfo t2439_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericEqualityComparer`1", "System.Collections.Generic", t2439_MIs, NULL, NULL, NULL, &t4157_TI, NULL, NULL, &t2439_TI, NULL, t2439_VT, &EmptyCustomAttributesCache, &t2439_TI, &t2439_0_0_0, &t2439_1_0_0, t2439_IOs, &t2439_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2439), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t4157.h"
#ifndef _MSC_VER
#else
#endif

#include "t4158.h"
extern TypeInfo t4158_TI;
#include "t4158MD.h"
extern Il2CppType t2441_0_0_0;
extern MethodInfo m23582_MI;
extern MethodInfo m39973_MI;
extern MethodInfo m39974_MI;


 void m23577 (t4157 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m23578_MI;
 void m23578 (t5 * __this, MethodInfo* method){
	t4158 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t4158 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t4158_TI));
	m23582(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m23582_MI);
	((t4157_SFs*)InitializedTypeInfo(&t4157_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
 int32_t m23579 (t4157 * __this, t5 * p0, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t61  >::Invoke(&m39973_MI, __this, ((*(t61 *)((t61 *)UnBox (p0, InitializedTypeInfo(&t61_TI))))));
		return L_0;
	}
}
 bool m23580 (t4157 * __this, t5 * p0, t5 * p1, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, t61 , t61  >::Invoke(&m39974_MI, __this, ((*(t61 *)((t61 *)UnBox (p0, InitializedTypeInfo(&t61_TI))))), ((*(t61 *)((t61 *)UnBox (p1, InitializedTypeInfo(&t61_TI))))));
		return L_0;
	}
}
extern MethodInfo m23581_MI;
 t4157 * m23581 (t5 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t4157_TI));
		return (((t4157_SFs*)InitializedTypeInfo(&t4157_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
extern Il2CppType t4157_0_0_49;
FieldInfo t4157_f0_FieldInfo = 
{
	"_default", &t4157_0_0_49, &t4157_TI, offsetof(t4157_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t4157_FIs[] =
{
	&t4157_f0_FieldInfo,
	NULL
};
static PropertyInfo t4157____Default_PropertyInfo = 
{
	&t4157_TI, "Default", &m23581_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4157_PIs[] =
{
	&t4157____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23577_GM;
MethodInfo m23577_MI = 
{
	".ctor", (methodPointerType)&m23577, &t4157_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23577_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23578_GM;
MethodInfo m23578_MI = 
{
	".cctor", (methodPointerType)&m23578, &t4157_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23578_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t4157_m23579_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23579_GM;
MethodInfo m23579_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m23579, &t4157_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t4157_m23579_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23579_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t4157_m23580_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23580_GM;
MethodInfo m23580_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m23580, &t4157_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t4157_m23580_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23580_GM};
extern Il2CppType t61_0_0_0;
static ParameterInfo t4157_m39973_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t61 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39973_GM;
MethodInfo m39973_MI = 
{
	"GetHashCode", NULL, &t4157_TI, &t110_0_0_0, RuntimeInvoker_t110_t61, t4157_m39973_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39973_GM};
extern Il2CppType t61_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t4157_m39974_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t61_t61 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39974_GM;
MethodInfo m39974_MI = 
{
	"Equals", NULL, &t4157_TI, &t108_0_0_0, RuntimeInvoker_t108_t61_t61, t4157_m39974_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39974_GM};
extern Il2CppType t4157_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23581_GM;
MethodInfo m23581_MI = 
{
	"get_Default", (methodPointerType)&m23581, &t4157_TI, &t4157_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23581_GM};
static MethodInfo* t4157_MIs[] =
{
	&m23577_MI,
	&m23578_MI,
	&m23579_MI,
	&m23580_MI,
	&m39973_MI,
	&m39974_MI,
	&m23581_MI,
	NULL
};
static MethodInfo* t4157_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m39974_MI,
	&m39973_MI,
	&m23580_MI,
	&m23579_MI,
	NULL,
	NULL,
};
static TypeInfo* t4157_ITIs[] = 
{
	&t7728_TI,
	&t998_TI,
};
static Il2CppInterfaceOffsetPair t4157_IOs[] = 
{
	{ &t7728_TI, 4},
	{ &t998_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4157_0_0_0;
extern Il2CppType t4157_1_0_0;
struct t4157;
extern Il2CppGenericClass t4157_GC;
TypeInfo t4157_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t4157_MIs, t4157_PIs, t4157_FIs, NULL, &t5_TI, NULL, NULL, &t4157_TI, t4157_ITIs, t4157_VT, &EmptyCustomAttributesCache, &t4157_TI, &t4157_0_0_0, &t4157_1_0_0, t4157_IOs, &t4157_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4157), 0, -1, sizeof(t4157_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>
extern Il2CppType t61_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t7728_m39975_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t61_t61 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39975_GM;
MethodInfo m39975_MI = 
{
	"Equals", NULL, &t7728_TI, &t108_0_0_0, RuntimeInvoker_t108_t61_t61, t7728_m39975_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39975_GM};
extern Il2CppType t61_0_0_0;
static ParameterInfo t7728_m39976_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t61 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39976_GM;
MethodInfo m39976_MI = 
{
	"GetHashCode", NULL, &t7728_TI, &t110_0_0_0, RuntimeInvoker_t110_t61, t7728_m39976_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39976_GM};
static MethodInfo* t7728_MIs[] =
{
	&m39975_MI,
	&m39976_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7728_0_0_0;
extern Il2CppType t7728_1_0_0;
struct t7728;
extern Il2CppGenericClass t7728_GC;
TypeInfo t7728_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t7728_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7728_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7728_TI, &t7728_0_0_0, &t7728_1_0_0, NULL, &t7728_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



 void m23582 (t4158 * __this, MethodInfo* method){
	{
		m23577(__this, &m23577_MI);
		return;
	}
}
extern MethodInfo m23583_MI;
 int32_t m23583 (t4158 * __this, t61  p0, MethodInfo* method){
	{
		t61  L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t61_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m466_MI, Box(InitializedTypeInfo(&t61_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m23584_MI;
 bool m23584 (t4158 * __this, t61  p0, t61  p1, MethodInfo* method){
	{
		t61  L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t61_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t61  L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t61_TI), &L_2);
		return ((((t5 *)L_3) == ((t5 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t61  L_4 = p1;
		t5 * L_5 = Box(InitializedTypeInfo(&t61_TI), &L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t61_TI), &(*(&p0))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23582_GM;
MethodInfo m23582_MI = 
{
	".ctor", (methodPointerType)&m23582, &t4158_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23582_GM};
extern Il2CppType t61_0_0_0;
static ParameterInfo t4158_m23583_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t61 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23583_GM;
MethodInfo m23583_MI = 
{
	"GetHashCode", (methodPointerType)&m23583, &t4158_TI, &t110_0_0_0, RuntimeInvoker_t110_t61, t4158_m23583_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23583_GM};
extern Il2CppType t61_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t4158_m23584_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t61_t61 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23584_GM;
MethodInfo m23584_MI = 
{
	"Equals", (methodPointerType)&m23584, &t4158_TI, &t108_0_0_0, RuntimeInvoker_t108_t61_t61, t4158_m23584_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23584_GM};
static MethodInfo* t4158_MIs[] =
{
	&m23582_MI,
	&m23583_MI,
	&m23584_MI,
	NULL
};
static MethodInfo* t4158_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m23584_MI,
	&m23583_MI,
	&m23580_MI,
	&m23579_MI,
	&m23583_MI,
	&m23584_MI,
};
static Il2CppInterfaceOffsetPair t4158_IOs[] = 
{
	{ &t7728_TI, 4},
	{ &t998_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4158_0_0_0;
extern Il2CppType t4158_1_0_0;
struct t4158;
extern Il2CppGenericClass t4158_GC;
TypeInfo t4158_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t4158_MIs, NULL, NULL, NULL, &t4157_TI, NULL, &t1519_TI, &t4158_TI, NULL, t4158_VT, &EmptyCustomAttributesCache, &t4158_TI, &t4158_0_0_0, &t4158_1_0_0, t4158_IOs, &t4158_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4158), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5856_TI;

#include "t1387.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.TypeCode>
extern MethodInfo m39977_MI;
static PropertyInfo t5856____Current_PropertyInfo = 
{
	&t5856_TI, "Current", &m39977_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5856_PIs[] =
{
	&t5856____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1387_0_0_0;
extern void* RuntimeInvoker_t1387 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39977_GM;
MethodInfo m39977_MI = 
{
	"get_Current", NULL, &t5856_TI, &t1387_0_0_0, RuntimeInvoker_t1387, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39977_GM};
static MethodInfo* t5856_MIs[] =
{
	&m39977_MI,
	NULL
};
static TypeInfo* t5856_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5856_0_0_0;
extern Il2CppType t5856_1_0_0;
struct t5856;
extern Il2CppGenericClass t5856_GC;
TypeInfo t5856_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5856_MIs, t5856_PIs, NULL, NULL, NULL, NULL, NULL, &t5856_TI, t5856_ITIs, NULL, &EmptyCustomAttributesCache, &t5856_TI, &t5856_0_0_0, &t5856_1_0_0, NULL, &t5856_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4159.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4159_TI;
#include "t4159MD.h"

extern TypeInfo t1387_TI;
extern MethodInfo m23589_MI;
extern MethodInfo m31186_MI;
struct t107;
 int32_t m31186 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m23585_MI;
 void m23585 (t4159 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23586_MI;
 t5 * m23586 (t4159 * __this, MethodInfo* method){
	{
		int32_t L_0 = m23589(__this, &m23589_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1387_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m23587_MI;
 void m23587 (t4159 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23588_MI;
 bool m23588 (t4159 * __this, MethodInfo* method){
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
		int32_t L_2 = m4764(L_1, &m4764_MI);
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
 int32_t m23589 (t4159 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t133 * L_1 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4759(L_1, (t11*) &_stringLiteral1079, &m4759_MI);
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
		m4759(L_3, (t11*) &_stringLiteral1080, &m4759_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t107 * L_4 = (__this->f0);
		t107 * L_5 = (__this->f0);
		int32_t L_6 = m4764(L_5, &m4764_MI);
		int32_t L_7 = (__this->f1);
		int32_t L_8 = m31186(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m31186_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.TypeCode>
extern Il2CppType t107_0_0_1;
FieldInfo t4159_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4159_TI, offsetof(t4159, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4159_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4159_TI, offsetof(t4159, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4159_FIs[] =
{
	&t4159_f0_FieldInfo,
	&t4159_f1_FieldInfo,
	NULL
};
static PropertyInfo t4159____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4159_TI, "System.Collections.IEnumerator.Current", &m23586_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4159____Current_PropertyInfo = 
{
	&t4159_TI, "Current", &m23589_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4159_PIs[] =
{
	&t4159____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4159____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4159_m23585_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23585_GM;
MethodInfo m23585_MI = 
{
	".ctor", (methodPointerType)&m23585, &t4159_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4159_m23585_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23585_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23586_GM;
MethodInfo m23586_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m23586, &t4159_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23586_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23587_GM;
MethodInfo m23587_MI = 
{
	"Dispose", (methodPointerType)&m23587, &t4159_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23587_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23588_GM;
MethodInfo m23588_MI = 
{
	"MoveNext", (methodPointerType)&m23588, &t4159_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23588_GM};
extern Il2CppType t1387_0_0_0;
extern void* RuntimeInvoker_t1387 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23589_GM;
MethodInfo m23589_MI = 
{
	"get_Current", (methodPointerType)&m23589, &t4159_TI, &t1387_0_0_0, RuntimeInvoker_t1387, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23589_GM};
static MethodInfo* t4159_MIs[] =
{
	&m23585_MI,
	&m23586_MI,
	&m23587_MI,
	&m23588_MI,
	&m23589_MI,
	NULL
};
static MethodInfo* t4159_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m23586_MI,
	&m23588_MI,
	&m23587_MI,
	&m23589_MI,
};
static TypeInfo* t4159_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5856_TI,
};
static Il2CppInterfaceOffsetPair t4159_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5856_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4159_0_0_0;
extern Il2CppType t4159_1_0_0;
extern Il2CppGenericClass t4159_GC;
TypeInfo t4159_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4159_MIs, t4159_PIs, t4159_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4159_TI, t4159_ITIs, t4159_VT, &EmptyCustomAttributesCache, &t4159_TI, &t4159_0_0_0, &t4159_1_0_0, t4159_IOs, &t4159_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4159)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7542_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.TypeCode>
extern MethodInfo m39978_MI;
static PropertyInfo t7542____Count_PropertyInfo = 
{
	&t7542_TI, "Count", &m39978_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39979_MI;
static PropertyInfo t7542____IsReadOnly_PropertyInfo = 
{
	&t7542_TI, "IsReadOnly", &m39979_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7542_PIs[] =
{
	&t7542____Count_PropertyInfo,
	&t7542____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39978_GM;
MethodInfo m39978_MI = 
{
	"get_Count", NULL, &t7542_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39978_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39979_GM;
MethodInfo m39979_MI = 
{
	"get_IsReadOnly", NULL, &t7542_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39979_GM};
extern Il2CppType t1387_0_0_0;
extern Il2CppType t1387_0_0_0;
static ParameterInfo t7542_m39980_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1387_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39980_GM;
MethodInfo m39980_MI = 
{
	"Add", NULL, &t7542_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7542_m39980_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39980_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39981_GM;
MethodInfo m39981_MI = 
{
	"Clear", NULL, &t7542_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39981_GM};
extern Il2CppType t1387_0_0_0;
static ParameterInfo t7542_m39982_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1387_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39982_GM;
MethodInfo m39982_MI = 
{
	"Contains", NULL, &t7542_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7542_m39982_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39982_GM};
extern Il2CppType t4384_0_0_0;
extern Il2CppType t4384_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7542_m39983_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4384_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39983_GM;
MethodInfo m39983_MI = 
{
	"CopyTo", NULL, &t7542_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7542_m39983_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39983_GM};
extern Il2CppType t1387_0_0_0;
static ParameterInfo t7542_m39984_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1387_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39984_GM;
MethodInfo m39984_MI = 
{
	"Remove", NULL, &t7542_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7542_m39984_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39984_GM};
static MethodInfo* t7542_MIs[] =
{
	&m39978_MI,
	&m39979_MI,
	&m39980_MI,
	&m39981_MI,
	&m39982_MI,
	&m39983_MI,
	&m39984_MI,
	NULL
};
extern TypeInfo t7544_TI;
static TypeInfo* t7542_ITIs[] = 
{
	&t739_TI,
	&t7544_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7542_0_0_0;
extern Il2CppType t7542_1_0_0;
struct t7542;
extern Il2CppGenericClass t7542_GC;
TypeInfo t7542_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7542_MIs, t7542_PIs, NULL, NULL, NULL, NULL, NULL, &t7542_TI, t7542_ITIs, NULL, &EmptyCustomAttributesCache, &t7542_TI, &t7542_0_0_0, &t7542_1_0_0, NULL, &t7542_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.TypeCode>
extern Il2CppType t5856_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39985_GM;
MethodInfo m39985_MI = 
{
	"GetEnumerator", NULL, &t7544_TI, &t5856_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39985_GM};
static MethodInfo* t7544_MIs[] =
{
	&m39985_MI,
	NULL
};
static TypeInfo* t7544_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7544_0_0_0;
extern Il2CppType t7544_1_0_0;
struct t7544;
extern Il2CppGenericClass t7544_GC;
TypeInfo t7544_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7544_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7544_TI, t7544_ITIs, NULL, &EmptyCustomAttributesCache, &t7544_TI, &t7544_0_0_0, &t7544_1_0_0, NULL, &t7544_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7543_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.TypeCode>
extern MethodInfo m39986_MI;
extern MethodInfo m39987_MI;
static PropertyInfo t7543____Item_PropertyInfo = 
{
	&t7543_TI, "Item", &m39986_MI, &m39987_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7543_PIs[] =
{
	&t7543____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1387_0_0_0;
static ParameterInfo t7543_m39988_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1387_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39988_GM;
MethodInfo m39988_MI = 
{
	"IndexOf", NULL, &t7543_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t7543_m39988_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39988_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1387_0_0_0;
static ParameterInfo t7543_m39989_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1387_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39989_GM;
MethodInfo m39989_MI = 
{
	"Insert", NULL, &t7543_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7543_m39989_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39989_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7543_m39990_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39990_GM;
MethodInfo m39990_MI = 
{
	"RemoveAt", NULL, &t7543_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7543_m39990_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39990_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7543_m39986_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1387_0_0_0;
extern void* RuntimeInvoker_t1387_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39986_GM;
MethodInfo m39986_MI = 
{
	"get_Item", NULL, &t7543_TI, &t1387_0_0_0, RuntimeInvoker_t1387_t110, t7543_m39986_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39986_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1387_0_0_0;
static ParameterInfo t7543_m39987_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1387_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39987_GM;
MethodInfo m39987_MI = 
{
	"set_Item", NULL, &t7543_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7543_m39987_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39987_GM};
static MethodInfo* t7543_MIs[] =
{
	&m39988_MI,
	&m39989_MI,
	&m39990_MI,
	&m39986_MI,
	&m39987_MI,
	NULL
};
static TypeInfo* t7543_ITIs[] = 
{
	&t739_TI,
	&t7542_TI,
	&t7544_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7543_0_0_0;
extern Il2CppType t7543_1_0_0;
struct t7543;
extern Il2CppGenericClass t7543_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7543_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7543_MIs, t7543_PIs, NULL, NULL, NULL, NULL, NULL, &t7543_TI, t7543_ITIs, NULL, &t2240__CustomAttributeCache, &t7543_TI, &t7543_0_0_0, &t7543_1_0_0, NULL, &t7543_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5858_TI;

#include "t2010.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.UnitySerializationHolder/UnityType>
extern MethodInfo m39991_MI;
static PropertyInfo t5858____Current_PropertyInfo = 
{
	&t5858_TI, "Current", &m39991_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5858_PIs[] =
{
	&t5858____Current_PropertyInfo,
	NULL
};
extern Il2CppType t2010_0_0_0;
extern void* RuntimeInvoker_t2010 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39991_GM;
MethodInfo m39991_MI = 
{
	"get_Current", NULL, &t5858_TI, &t2010_0_0_0, RuntimeInvoker_t2010, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39991_GM};
static MethodInfo* t5858_MIs[] =
{
	&m39991_MI,
	NULL
};
static TypeInfo* t5858_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5858_0_0_0;
extern Il2CppType t5858_1_0_0;
struct t5858;
extern Il2CppGenericClass t5858_GC;
TypeInfo t5858_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5858_MIs, t5858_PIs, NULL, NULL, NULL, NULL, NULL, &t5858_TI, t5858_ITIs, NULL, &EmptyCustomAttributesCache, &t5858_TI, &t5858_0_0_0, &t5858_1_0_0, NULL, &t5858_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4160.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4160_TI;
#include "t4160MD.h"

extern TypeInfo t2010_TI;
extern MethodInfo m23594_MI;
extern MethodInfo m31197_MI;
struct t107;
 uint8_t m31197 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m23590_MI;
 void m23590 (t4160 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23591_MI;
 t5 * m23591 (t4160 * __this, MethodInfo* method){
	{
		uint8_t L_0 = m23594(__this, &m23594_MI);
		uint8_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t2010_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m23592_MI;
 void m23592 (t4160 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23593_MI;
 bool m23593 (t4160 * __this, MethodInfo* method){
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
		int32_t L_2 = m4764(L_1, &m4764_MI);
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
 uint8_t m23594 (t4160 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t133 * L_1 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4759(L_1, (t11*) &_stringLiteral1079, &m4759_MI);
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
		m4759(L_3, (t11*) &_stringLiteral1080, &m4759_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t107 * L_4 = (__this->f0);
		t107 * L_5 = (__this->f0);
		int32_t L_6 = m4764(L_5, &m4764_MI);
		int32_t L_7 = (__this->f1);
		uint8_t L_8 = m31197(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m31197_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>
extern Il2CppType t107_0_0_1;
FieldInfo t4160_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4160_TI, offsetof(t4160, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4160_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4160_TI, offsetof(t4160, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4160_FIs[] =
{
	&t4160_f0_FieldInfo,
	&t4160_f1_FieldInfo,
	NULL
};
static PropertyInfo t4160____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4160_TI, "System.Collections.IEnumerator.Current", &m23591_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4160____Current_PropertyInfo = 
{
	&t4160_TI, "Current", &m23594_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4160_PIs[] =
{
	&t4160____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4160____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4160_m23590_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23590_GM;
MethodInfo m23590_MI = 
{
	".ctor", (methodPointerType)&m23590, &t4160_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4160_m23590_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23590_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23591_GM;
MethodInfo m23591_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m23591, &t4160_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23591_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23592_GM;
MethodInfo m23592_MI = 
{
	"Dispose", (methodPointerType)&m23592, &t4160_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23592_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23593_GM;
MethodInfo m23593_MI = 
{
	"MoveNext", (methodPointerType)&m23593, &t4160_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23593_GM};
extern Il2CppType t2010_0_0_0;
extern void* RuntimeInvoker_t2010 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23594_GM;
MethodInfo m23594_MI = 
{
	"get_Current", (methodPointerType)&m23594, &t4160_TI, &t2010_0_0_0, RuntimeInvoker_t2010, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23594_GM};
static MethodInfo* t4160_MIs[] =
{
	&m23590_MI,
	&m23591_MI,
	&m23592_MI,
	&m23593_MI,
	&m23594_MI,
	NULL
};
static MethodInfo* t4160_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m23591_MI,
	&m23593_MI,
	&m23592_MI,
	&m23594_MI,
};
static TypeInfo* t4160_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5858_TI,
};
static Il2CppInterfaceOffsetPair t4160_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5858_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4160_0_0_0;
extern Il2CppType t4160_1_0_0;
extern Il2CppGenericClass t4160_GC;
TypeInfo t4160_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4160_MIs, t4160_PIs, t4160_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4160_TI, t4160_ITIs, t4160_VT, &EmptyCustomAttributesCache, &t4160_TI, &t4160_0_0_0, &t4160_1_0_0, t4160_IOs, &t4160_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4160)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7545_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>
extern MethodInfo m39992_MI;
static PropertyInfo t7545____Count_PropertyInfo = 
{
	&t7545_TI, "Count", &m39992_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39993_MI;
static PropertyInfo t7545____IsReadOnly_PropertyInfo = 
{
	&t7545_TI, "IsReadOnly", &m39993_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7545_PIs[] =
{
	&t7545____Count_PropertyInfo,
	&t7545____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39992_GM;
MethodInfo m39992_MI = 
{
	"get_Count", NULL, &t7545_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39992_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39993_GM;
MethodInfo m39993_MI = 
{
	"get_IsReadOnly", NULL, &t7545_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39993_GM};
extern Il2CppType t2010_0_0_0;
extern Il2CppType t2010_0_0_0;
static ParameterInfo t7545_m39994_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2010_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39994_GM;
MethodInfo m39994_MI = 
{
	"Add", NULL, &t7545_TI, &t109_0_0_0, RuntimeInvoker_t109_t494, t7545_m39994_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39994_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39995_GM;
MethodInfo m39995_MI = 
{
	"Clear", NULL, &t7545_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39995_GM};
extern Il2CppType t2010_0_0_0;
static ParameterInfo t7545_m39996_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2010_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39996_GM;
MethodInfo m39996_MI = 
{
	"Contains", NULL, &t7545_TI, &t108_0_0_0, RuntimeInvoker_t108_t494, t7545_m39996_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39996_GM};
extern Il2CppType t4385_0_0_0;
extern Il2CppType t4385_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7545_m39997_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4385_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39997_GM;
MethodInfo m39997_MI = 
{
	"CopyTo", NULL, &t7545_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7545_m39997_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39997_GM};
extern Il2CppType t2010_0_0_0;
static ParameterInfo t7545_m39998_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2010_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39998_GM;
MethodInfo m39998_MI = 
{
	"Remove", NULL, &t7545_TI, &t108_0_0_0, RuntimeInvoker_t108_t494, t7545_m39998_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39998_GM};
static MethodInfo* t7545_MIs[] =
{
	&m39992_MI,
	&m39993_MI,
	&m39994_MI,
	&m39995_MI,
	&m39996_MI,
	&m39997_MI,
	&m39998_MI,
	NULL
};
extern TypeInfo t7547_TI;
static TypeInfo* t7545_ITIs[] = 
{
	&t739_TI,
	&t7547_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7545_0_0_0;
extern Il2CppType t7545_1_0_0;
struct t7545;
extern Il2CppGenericClass t7545_GC;
TypeInfo t7545_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7545_MIs, t7545_PIs, NULL, NULL, NULL, NULL, NULL, &t7545_TI, t7545_ITIs, NULL, &EmptyCustomAttributesCache, &t7545_TI, &t7545_0_0_0, &t7545_1_0_0, NULL, &t7545_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.UnitySerializationHolder/UnityType>
extern Il2CppType t5858_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39999_GM;
MethodInfo m39999_MI = 
{
	"GetEnumerator", NULL, &t7547_TI, &t5858_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39999_GM};
static MethodInfo* t7547_MIs[] =
{
	&m39999_MI,
	NULL
};
static TypeInfo* t7547_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7547_0_0_0;
extern Il2CppType t7547_1_0_0;
struct t7547;
extern Il2CppGenericClass t7547_GC;
TypeInfo t7547_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7547_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7547_TI, t7547_ITIs, NULL, &EmptyCustomAttributesCache, &t7547_TI, &t7547_0_0_0, &t7547_1_0_0, NULL, &t7547_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7546_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>
extern MethodInfo m40000_MI;
extern MethodInfo m40001_MI;
static PropertyInfo t7546____Item_PropertyInfo = 
{
	&t7546_TI, "Item", &m40000_MI, &m40001_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7546_PIs[] =
{
	&t7546____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2010_0_0_0;
static ParameterInfo t7546_m40002_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2010_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m40002_GM;
MethodInfo m40002_MI = 
{
	"IndexOf", NULL, &t7546_TI, &t110_0_0_0, RuntimeInvoker_t110_t494, t7546_m40002_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m40002_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2010_0_0_0;
static ParameterInfo t7546_m40003_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2010_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m40003_GM;
MethodInfo m40003_MI = 
{
	"Insert", NULL, &t7546_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t494, t7546_m40003_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m40003_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7546_m40004_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m40004_GM;
MethodInfo m40004_MI = 
{
	"RemoveAt", NULL, &t7546_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7546_m40004_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m40004_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7546_m40000_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t2010_0_0_0;
extern void* RuntimeInvoker_t2010_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m40000_GM;
MethodInfo m40000_MI = 
{
	"get_Item", NULL, &t7546_TI, &t2010_0_0_0, RuntimeInvoker_t2010_t110, t7546_m40000_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m40000_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2010_0_0_0;
static ParameterInfo t7546_m40001_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2010_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m40001_GM;
MethodInfo m40001_MI = 
{
	"set_Item", NULL, &t7546_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t494, t7546_m40001_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m40001_GM};
static MethodInfo* t7546_MIs[] =
{
	&m40002_MI,
	&m40003_MI,
	&m40004_MI,
	&m40000_MI,
	&m40001_MI,
	NULL
};
static TypeInfo* t7546_ITIs[] = 
{
	&t739_TI,
	&t7545_TI,
	&t7547_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7546_0_0_0;
extern Il2CppType t7546_1_0_0;
struct t7546;
extern Il2CppGenericClass t7546_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7546_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7546_MIs, t7546_PIs, NULL, NULL, NULL, NULL, NULL, &t7546_TI, t7546_ITIs, NULL, &t2240__CustomAttributeCache, &t7546_TI, &t7546_0_0_0, &t7546_1_0_0, NULL, &t7546_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2444_TI;

#include "t1023.h"


// Metadata Definition System.IComparable`1<System.Version>
extern Il2CppType t1023_0_0_0;
extern Il2CppType t1023_0_0_0;
static ParameterInfo t2444_m40005_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t1023_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m40005_GM;
MethodInfo m40005_MI = 
{
	"CompareTo", NULL, &t2444_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2444_m40005_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m40005_GM};
static MethodInfo* t2444_MIs[] =
{
	&m40005_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2444_0_0_0;
extern Il2CppType t2444_1_0_0;
struct t2444;
extern Il2CppGenericClass t2444_GC;
TypeInfo t2444_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t2444_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2444_TI, NULL, NULL, &EmptyCustomAttributesCache, &t2444_TI, &t2444_0_0_0, &t2444_1_0_0, NULL, &t2444_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2445_TI;



// Metadata Definition System.IEquatable`1<System.Version>
extern Il2CppType t1023_0_0_0;
static ParameterInfo t2445_m40006_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t1023_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m40006_GM;
MethodInfo m40006_MI = 
{
	"Equals", NULL, &t2445_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2445_m40006_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m40006_GM};
static MethodInfo* t2445_MIs[] =
{
	&m40006_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2445_0_0_0;
extern Il2CppType t2445_1_0_0;
struct t2445;
extern Il2CppGenericClass t2445_GC;
TypeInfo t2445_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t2445_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2445_TI, NULL, NULL, &EmptyCustomAttributesCache, &t2445_TI, &t2445_0_0_0, &t2445_1_0_0, NULL, &t2445_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
