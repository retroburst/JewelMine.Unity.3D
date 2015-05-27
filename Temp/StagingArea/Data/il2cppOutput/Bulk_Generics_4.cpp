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
extern TypeInfo t2628_TI;

#include "t44.h"

#include "t107.h"

// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<JewelMine.Engine.Models.MarkedCollisionGroup,System.Int64>>
extern MethodInfo m24317_MI;
static PropertyInfo t2628____Current_PropertyInfo = 
{
	&t2628_TI, "Current", &m24317_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2628_PIs[] =
{
	&t2628____Current_PropertyInfo,
	NULL
};
extern Il2CppType t44_0_0_0;
extern void* RuntimeInvoker_t44 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m24317_GM;
MethodInfo m24317_MI = 
{
	"get_Current", NULL, &t2628_TI, &t44_0_0_0, RuntimeInvoker_t44, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m24317_GM};
static MethodInfo* t2628_MIs[] =
{
	&m24317_MI,
	NULL
};
extern TypeInfo t196_TI;
extern TypeInfo t132_TI;
static TypeInfo* t2628_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2628_0_0_0;
extern Il2CppType t2628_1_0_0;
struct t2628;
extern Il2CppGenericClass t2628_GC;
TypeInfo t2628_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2628_MIs, t2628_PIs, NULL, NULL, NULL, NULL, NULL, &t2628_TI, t2628_ITIs, NULL, &EmptyCustomAttributesCache, &t2628_TI, &t2628_0_0_0, &t2628_1_0_0, NULL, &t2628_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2630.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2630_TI;
#include "t2630MD.h"

#include "t5.h"
#include "t110.h"
#include "t11.h"
#include "t133.h"
#include "t109.h"
#include "t108.h"
extern TypeInfo t44_TI;
extern TypeInfo t133_TI;
#include "t133MD.h"
#include "t107MD.h"
extern MethodInfo m13156_MI;
extern MethodInfo m4758_MI;
extern MethodInfo m4763_MI;
extern MethodInfo m24237_MI;
struct t107;
#include "t1181.h"
 t44  m24237 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m13152_MI;
 void m13152 (t2630 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13153_MI;
 t5 * m13153 (t2630 * __this, MethodInfo* method){
	{
		t44  L_0 = m13156(__this, &m13156_MI);
		t44  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t44_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m13154_MI;
 void m13154 (t2630 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13155_MI;
 bool m13155 (t2630 * __this, MethodInfo* method){
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
 t44  m13156 (t2630 * __this, MethodInfo* method){
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
		t44  L_8 = m24237(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m24237_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<JewelMine.Engine.Models.MarkedCollisionGroup,System.Int64>>
extern Il2CppType t107_0_0_1;
FieldInfo t2630_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t2630_TI, offsetof(t2630, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2630_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2630_TI, offsetof(t2630, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2630_FIs[] =
{
	&t2630_f0_FieldInfo,
	&t2630_f1_FieldInfo,
	NULL
};
static PropertyInfo t2630____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2630_TI, "System.Collections.IEnumerator.Current", &m13153_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2630____Current_PropertyInfo = 
{
	&t2630_TI, "Current", &m13156_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2630_PIs[] =
{
	&t2630____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2630____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
extern Il2CppType t107_0_0_0;
static ParameterInfo t2630_m13152_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13152_GM;
MethodInfo m13152_MI = 
{
	".ctor", (methodPointerType)&m13152, &t2630_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2630_m13152_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13152_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13153_GM;
MethodInfo m13153_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13153, &t2630_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13153_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13154_GM;
MethodInfo m13154_MI = 
{
	"Dispose", (methodPointerType)&m13154, &t2630_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13154_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13155_GM;
MethodInfo m13155_MI = 
{
	"MoveNext", (methodPointerType)&m13155, &t2630_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13155_GM};
extern Il2CppType t44_0_0_0;
extern void* RuntimeInvoker_t44 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13156_GM;
MethodInfo m13156_MI = 
{
	"get_Current", (methodPointerType)&m13156, &t2630_TI, &t44_0_0_0, RuntimeInvoker_t44, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13156_GM};
static MethodInfo* t2630_MIs[] =
{
	&m13152_MI,
	&m13153_MI,
	&m13154_MI,
	&m13155_MI,
	&m13156_MI,
	NULL
};
extern MethodInfo m2041_MI;
extern MethodInfo m465_MI;
extern MethodInfo m2042_MI;
extern MethodInfo m2147_MI;
static MethodInfo* t2630_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m13153_MI,
	&m13155_MI,
	&m13154_MI,
	&m13156_MI,
};
static TypeInfo* t2630_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t2628_TI,
};
static Il2CppInterfaceOffsetPair t2630_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t2628_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2630_0_0_0;
extern Il2CppType t2630_1_0_0;
extern TypeInfo t267_TI;
extern Il2CppGenericClass t2630_GC;
extern TypeInfo t107_TI;
TypeInfo t2630_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2630_MIs, t2630_PIs, t2630_FIs, NULL, &t267_TI, NULL, &t107_TI, &t2630_TI, t2630_ITIs, t2630_VT, &EmptyCustomAttributesCache, &t2630_TI, &t2630_0_0_0, &t2630_1_0_0, t2630_IOs, &t2630_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2630)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4719_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<JewelMine.Engine.Models.MarkedCollisionGroup,System.Int64>>
extern MethodInfo m24315_MI;
extern MethodInfo m31870_MI;
static PropertyInfo t4719____Item_PropertyInfo = 
{
	&t4719_TI, "Item", &m24315_MI, &m31870_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4719_PIs[] =
{
	&t4719____Item_PropertyInfo,
	NULL
};
extern Il2CppType t44_0_0_0;
extern Il2CppType t44_0_0_0;
static ParameterInfo t4719_m31871_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t44_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t44 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31871_GM;
MethodInfo m31871_MI = 
{
	"IndexOf", NULL, &t4719_TI, &t110_0_0_0, RuntimeInvoker_t110_t44, t4719_m31871_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31871_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t44_0_0_0;
static ParameterInfo t4719_m31872_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t44_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t44 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31872_GM;
MethodInfo m31872_MI = 
{
	"Insert", NULL, &t4719_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t44, t4719_m31872_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31872_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t4719_m31873_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31873_GM;
MethodInfo m31873_MI = 
{
	"RemoveAt", NULL, &t4719_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t4719_m31873_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31873_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t4719_m24315_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t44_0_0_0;
extern void* RuntimeInvoker_t44_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m24315_GM;
MethodInfo m24315_MI = 
{
	"get_Item", NULL, &t4719_TI, &t44_0_0_0, RuntimeInvoker_t44_t110, t4719_m24315_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m24315_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t44_0_0_0;
static ParameterInfo t4719_m31870_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t44_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t44 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31870_GM;
MethodInfo m31870_MI = 
{
	"set_Item", NULL, &t4719_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t44, t4719_m31870_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31870_GM};
static MethodInfo* t4719_MIs[] =
{
	&m31871_MI,
	&m31872_MI,
	&m31873_MI,
	&m24315_MI,
	&m31870_MI,
	NULL
};
extern TypeInfo t739_TI;
extern TypeInfo t4718_TI;
extern TypeInfo t4717_TI;
static TypeInfo* t4719_ITIs[] = 
{
	&t739_TI,
	&t4718_TI,
	&t4717_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4719_0_0_0;
extern Il2CppType t4719_1_0_0;
struct t4719;
extern Il2CppGenericClass t4719_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t4719_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4719_MIs, t4719_PIs, NULL, NULL, NULL, NULL, NULL, &t4719_TI, t4719_ITIs, NULL, &t2240__CustomAttributeCache, &t4719_TI, &t4719_0_0_0, &t4719_1_0_0, NULL, &t4719_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7560_TI;

#include "t15.h"


// Metadata Definition System.Collections.Generic.IDictionary`2<JewelMine.Engine.Models.MarkedCollisionGroup,System.Int64>
extern Il2CppType t15_0_0_0;
extern Il2CppType t15_0_0_0;
static ParameterInfo t7560_m31874_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t15_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31874_GM;
MethodInfo m31874_MI = 
{
	"Remove", NULL, &t7560_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7560_m31874_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31874_GM};
static MethodInfo* t7560_MIs[] =
{
	&m31874_MI,
	NULL
};
static TypeInfo* t7560_ITIs[] = 
{
	&t739_TI,
	&t4718_TI,
	&t4717_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7560_0_0_0;
extern Il2CppType t7560_1_0_0;
struct t7560;
extern Il2CppGenericClass t7560_GC;
extern CustomAttributesCache t2307__CustomAttributeCache;
TypeInfo t7560_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionary`2", "System.Collections.Generic", t7560_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7560_TI, t7560_ITIs, NULL, &t2307__CustomAttributeCache, &t7560_TI, &t7560_0_0_0, &t7560_1_0_0, NULL, &t7560_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4710_TI;

#include "t1511.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.Link>
extern MethodInfo m31875_MI;
static PropertyInfo t4710____Current_PropertyInfo = 
{
	&t4710_TI, "Current", &m31875_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4710_PIs[] =
{
	&t4710____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1511_0_0_0;
extern void* RuntimeInvoker_t1511 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31875_GM;
MethodInfo m31875_MI = 
{
	"get_Current", NULL, &t4710_TI, &t1511_0_0_0, RuntimeInvoker_t1511, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31875_GM};
static MethodInfo* t4710_MIs[] =
{
	&m31875_MI,
	NULL
};
static TypeInfo* t4710_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4710_0_0_0;
extern Il2CppType t4710_1_0_0;
struct t4710;
extern Il2CppGenericClass t4710_GC;
TypeInfo t4710_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4710_MIs, t4710_PIs, NULL, NULL, NULL, NULL, NULL, &t4710_TI, t4710_ITIs, NULL, &EmptyCustomAttributesCache, &t4710_TI, &t4710_0_0_0, &t4710_1_0_0, NULL, &t4710_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2631.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2631_TI;
#include "t2631MD.h"

extern TypeInfo t1511_TI;
extern MethodInfo m13161_MI;
extern MethodInfo m24248_MI;
struct t107;
 t1511  m24248 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m13157_MI;
 void m13157 (t2631 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13158_MI;
 t5 * m13158 (t2631 * __this, MethodInfo* method){
	{
		t1511  L_0 = m13161(__this, &m13161_MI);
		t1511  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1511_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m13159_MI;
 void m13159 (t2631 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13160_MI;
 bool m13160 (t2631 * __this, MethodInfo* method){
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
 t1511  m13161 (t2631 * __this, MethodInfo* method){
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
		t1511  L_8 = m24248(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m24248_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.Link>
extern Il2CppType t107_0_0_1;
FieldInfo t2631_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t2631_TI, offsetof(t2631, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2631_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2631_TI, offsetof(t2631, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2631_FIs[] =
{
	&t2631_f0_FieldInfo,
	&t2631_f1_FieldInfo,
	NULL
};
static PropertyInfo t2631____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2631_TI, "System.Collections.IEnumerator.Current", &m13158_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2631____Current_PropertyInfo = 
{
	&t2631_TI, "Current", &m13161_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2631_PIs[] =
{
	&t2631____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2631____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t2631_m13157_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13157_GM;
MethodInfo m13157_MI = 
{
	".ctor", (methodPointerType)&m13157, &t2631_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2631_m13157_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13157_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13158_GM;
MethodInfo m13158_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13158, &t2631_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13158_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13159_GM;
MethodInfo m13159_MI = 
{
	"Dispose", (methodPointerType)&m13159, &t2631_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13159_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13160_GM;
MethodInfo m13160_MI = 
{
	"MoveNext", (methodPointerType)&m13160, &t2631_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13160_GM};
extern Il2CppType t1511_0_0_0;
extern void* RuntimeInvoker_t1511 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13161_GM;
MethodInfo m13161_MI = 
{
	"get_Current", (methodPointerType)&m13161, &t2631_TI, &t1511_0_0_0, RuntimeInvoker_t1511, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13161_GM};
static MethodInfo* t2631_MIs[] =
{
	&m13157_MI,
	&m13158_MI,
	&m13159_MI,
	&m13160_MI,
	&m13161_MI,
	NULL
};
static MethodInfo* t2631_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m13158_MI,
	&m13160_MI,
	&m13159_MI,
	&m13161_MI,
};
static TypeInfo* t2631_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t4710_TI,
};
static Il2CppInterfaceOffsetPair t2631_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t4710_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2631_0_0_0;
extern Il2CppType t2631_1_0_0;
extern Il2CppGenericClass t2631_GC;
TypeInfo t2631_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2631_MIs, t2631_PIs, t2631_FIs, NULL, &t267_TI, NULL, &t107_TI, &t2631_TI, t2631_ITIs, t2631_VT, &EmptyCustomAttributesCache, &t2631_TI, &t2631_0_0_0, &t2631_1_0_0, t2631_IOs, &t2631_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2631)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5961_TI;

#include "mscorlib_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.Link>
extern MethodInfo m31876_MI;
static PropertyInfo t5961____Count_PropertyInfo = 
{
	&t5961_TI, "Count", &m31876_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m31877_MI;
static PropertyInfo t5961____IsReadOnly_PropertyInfo = 
{
	&t5961_TI, "IsReadOnly", &m31877_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5961_PIs[] =
{
	&t5961____Count_PropertyInfo,
	&t5961____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31876_GM;
MethodInfo m31876_MI = 
{
	"get_Count", NULL, &t5961_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31876_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31877_GM;
MethodInfo m31877_MI = 
{
	"get_IsReadOnly", NULL, &t5961_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31877_GM};
extern Il2CppType t1511_0_0_0;
extern Il2CppType t1511_0_0_0;
static ParameterInfo t5961_m31878_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1511_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t1511 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31878_GM;
MethodInfo m31878_MI = 
{
	"Add", NULL, &t5961_TI, &t109_0_0_0, RuntimeInvoker_t109_t1511, t5961_m31878_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31878_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31879_GM;
MethodInfo m31879_MI = 
{
	"Clear", NULL, &t5961_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31879_GM};
extern Il2CppType t1511_0_0_0;
static ParameterInfo t5961_m31880_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1511_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t1511 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31880_GM;
MethodInfo m31880_MI = 
{
	"Contains", NULL, &t5961_TI, &t108_0_0_0, RuntimeInvoker_t108_t1511, t5961_m31880_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31880_GM};
extern Il2CppType t2297_0_0_0;
extern Il2CppType t2297_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t5961_m31881_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2297_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31881_GM;
MethodInfo m31881_MI = 
{
	"CopyTo", NULL, &t5961_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t5961_m31881_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31881_GM};
extern Il2CppType t1511_0_0_0;
static ParameterInfo t5961_m31882_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1511_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t1511 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31882_GM;
MethodInfo m31882_MI = 
{
	"Remove", NULL, &t5961_TI, &t108_0_0_0, RuntimeInvoker_t108_t1511, t5961_m31882_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31882_GM};
static MethodInfo* t5961_MIs[] =
{
	&m31876_MI,
	&m31877_MI,
	&m31878_MI,
	&m31879_MI,
	&m31880_MI,
	&m31881_MI,
	&m31882_MI,
	NULL
};
extern TypeInfo t5963_TI;
static TypeInfo* t5961_ITIs[] = 
{
	&t739_TI,
	&t5963_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5961_0_0_0;
extern Il2CppType t5961_1_0_0;
struct t5961;
extern Il2CppGenericClass t5961_GC;
TypeInfo t5961_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5961_MIs, t5961_PIs, NULL, NULL, NULL, NULL, NULL, &t5961_TI, t5961_ITIs, NULL, &EmptyCustomAttributesCache, &t5961_TI, &t5961_0_0_0, &t5961_1_0_0, NULL, &t5961_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.Link>
extern Il2CppType t4710_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31883_GM;
MethodInfo m31883_MI = 
{
	"GetEnumerator", NULL, &t5963_TI, &t4710_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31883_GM};
static MethodInfo* t5963_MIs[] =
{
	&m31883_MI,
	NULL
};
static TypeInfo* t5963_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5963_0_0_0;
extern Il2CppType t5963_1_0_0;
struct t5963;
extern Il2CppGenericClass t5963_GC;
TypeInfo t5963_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5963_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5963_TI, t5963_ITIs, NULL, &EmptyCustomAttributesCache, &t5963_TI, &t5963_0_0_0, &t5963_1_0_0, NULL, &t5963_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5962_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.Link>
extern MethodInfo m31884_MI;
extern MethodInfo m31885_MI;
static PropertyInfo t5962____Item_PropertyInfo = 
{
	&t5962_TI, "Item", &m31884_MI, &m31885_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5962_PIs[] =
{
	&t5962____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1511_0_0_0;
static ParameterInfo t5962_m31886_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1511_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t1511 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31886_GM;
MethodInfo m31886_MI = 
{
	"IndexOf", NULL, &t5962_TI, &t110_0_0_0, RuntimeInvoker_t110_t1511, t5962_m31886_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31886_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1511_0_0_0;
static ParameterInfo t5962_m31887_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1511_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t1511 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31887_GM;
MethodInfo m31887_MI = 
{
	"Insert", NULL, &t5962_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t1511, t5962_m31887_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31887_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t5962_m31888_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31888_GM;
MethodInfo m31888_MI = 
{
	"RemoveAt", NULL, &t5962_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t5962_m31888_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31888_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t5962_m31884_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1511_0_0_0;
extern void* RuntimeInvoker_t1511_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31884_GM;
MethodInfo m31884_MI = 
{
	"get_Item", NULL, &t5962_TI, &t1511_0_0_0, RuntimeInvoker_t1511_t110, t5962_m31884_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31884_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1511_0_0_0;
static ParameterInfo t5962_m31885_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1511_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t1511 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31885_GM;
MethodInfo m31885_MI = 
{
	"set_Item", NULL, &t5962_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t1511, t5962_m31885_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31885_GM};
static MethodInfo* t5962_MIs[] =
{
	&m31886_MI,
	&m31887_MI,
	&m31888_MI,
	&m31884_MI,
	&m31885_MI,
	NULL
};
static TypeInfo* t5962_ITIs[] = 
{
	&t739_TI,
	&t5961_TI,
	&t5963_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5962_0_0_0;
extern Il2CppType t5962_1_0_0;
struct t5962;
extern Il2CppGenericClass t5962_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t5962_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5962_MIs, t5962_PIs, NULL, NULL, NULL, NULL, NULL, &t5962_TI, t5962_ITIs, NULL, &t2240__CustomAttributeCache, &t5962_TI, &t5962_0_0_0, &t5962_1_0_0, NULL, &t5962_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2635_TI;

#include "t152.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Int64>
extern MethodInfo m31889_MI;
static PropertyInfo t2635____Current_PropertyInfo = 
{
	&t2635_TI, "Current", &m31889_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2635_PIs[] =
{
	&t2635____Current_PropertyInfo,
	NULL
};
extern Il2CppType t152_0_0_0;
extern void* RuntimeInvoker_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31889_GM;
MethodInfo m31889_MI = 
{
	"get_Current", NULL, &t2635_TI, &t152_0_0_0, RuntimeInvoker_t152, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31889_GM};
static MethodInfo* t2635_MIs[] =
{
	&m31889_MI,
	NULL
};
static TypeInfo* t2635_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2635_0_0_0;
extern Il2CppType t2635_1_0_0;
struct t2635;
extern Il2CppGenericClass t2635_GC;
TypeInfo t2635_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2635_MIs, t2635_PIs, NULL, NULL, NULL, NULL, NULL, &t2635_TI, t2635_ITIs, NULL, &EmptyCustomAttributesCache, &t2635_TI, &t2635_0_0_0, &t2635_1_0_0, NULL, &t2635_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2632.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2632_TI;
#include "t2632MD.h"

extern TypeInfo t152_TI;
extern MethodInfo m13166_MI;
extern MethodInfo m24259_MI;
struct t107;
 int64_t m24259 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m13162_MI;
 void m13162 (t2632 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13163_MI;
 t5 * m13163 (t2632 * __this, MethodInfo* method){
	{
		int64_t L_0 = m13166(__this, &m13166_MI);
		int64_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t152_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m13164_MI;
 void m13164 (t2632 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13165_MI;
 bool m13165 (t2632 * __this, MethodInfo* method){
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
 int64_t m13166 (t2632 * __this, MethodInfo* method){
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
		int64_t L_8 = m24259(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m24259_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Int64>
extern Il2CppType t107_0_0_1;
FieldInfo t2632_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t2632_TI, offsetof(t2632, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2632_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2632_TI, offsetof(t2632, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2632_FIs[] =
{
	&t2632_f0_FieldInfo,
	&t2632_f1_FieldInfo,
	NULL
};
static PropertyInfo t2632____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2632_TI, "System.Collections.IEnumerator.Current", &m13163_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2632____Current_PropertyInfo = 
{
	&t2632_TI, "Current", &m13166_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2632_PIs[] =
{
	&t2632____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2632____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t2632_m13162_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13162_GM;
MethodInfo m13162_MI = 
{
	".ctor", (methodPointerType)&m13162, &t2632_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2632_m13162_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13162_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13163_GM;
MethodInfo m13163_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13163, &t2632_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13163_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13164_GM;
MethodInfo m13164_MI = 
{
	"Dispose", (methodPointerType)&m13164, &t2632_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13164_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13165_GM;
MethodInfo m13165_MI = 
{
	"MoveNext", (methodPointerType)&m13165, &t2632_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13165_GM};
extern Il2CppType t152_0_0_0;
extern void* RuntimeInvoker_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13166_GM;
MethodInfo m13166_MI = 
{
	"get_Current", (methodPointerType)&m13166, &t2632_TI, &t152_0_0_0, RuntimeInvoker_t152, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13166_GM};
static MethodInfo* t2632_MIs[] =
{
	&m13162_MI,
	&m13163_MI,
	&m13164_MI,
	&m13165_MI,
	&m13166_MI,
	NULL
};
static MethodInfo* t2632_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m13163_MI,
	&m13165_MI,
	&m13164_MI,
	&m13166_MI,
};
static TypeInfo* t2632_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t2635_TI,
};
static Il2CppInterfaceOffsetPair t2632_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t2635_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2632_0_0_0;
extern Il2CppType t2632_1_0_0;
extern Il2CppGenericClass t2632_GC;
TypeInfo t2632_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2632_MIs, t2632_PIs, t2632_FIs, NULL, &t267_TI, NULL, &t107_TI, &t2632_TI, t2632_ITIs, t2632_VT, &EmptyCustomAttributesCache, &t2632_TI, &t2632_0_0_0, &t2632_1_0_0, t2632_IOs, &t2632_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2632)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5964_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Int64>
extern MethodInfo m31890_MI;
static PropertyInfo t5964____Count_PropertyInfo = 
{
	&t5964_TI, "Count", &m31890_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m31891_MI;
static PropertyInfo t5964____IsReadOnly_PropertyInfo = 
{
	&t5964_TI, "IsReadOnly", &m31891_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5964_PIs[] =
{
	&t5964____Count_PropertyInfo,
	&t5964____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31890_GM;
MethodInfo m31890_MI = 
{
	"get_Count", NULL, &t5964_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31890_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31891_GM;
MethodInfo m31891_MI = 
{
	"get_IsReadOnly", NULL, &t5964_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31891_GM};
extern Il2CppType t152_0_0_0;
extern Il2CppType t152_0_0_0;
static ParameterInfo t5964_m31892_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31892_GM;
MethodInfo m31892_MI = 
{
	"Add", NULL, &t5964_TI, &t109_0_0_0, RuntimeInvoker_t109_t152, t5964_m31892_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31892_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31893_GM;
MethodInfo m31893_MI = 
{
	"Clear", NULL, &t5964_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31893_GM};
extern Il2CppType t152_0_0_0;
static ParameterInfo t5964_m31894_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31894_GM;
MethodInfo m31894_MI = 
{
	"Contains", NULL, &t5964_TI, &t108_0_0_0, RuntimeInvoker_t108_t152, t5964_m31894_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31894_GM};
extern Il2CppType t1399_0_0_0;
extern Il2CppType t1399_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t5964_m31895_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1399_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31895_GM;
MethodInfo m31895_MI = 
{
	"CopyTo", NULL, &t5964_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t5964_m31895_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31895_GM};
extern Il2CppType t152_0_0_0;
static ParameterInfo t5964_m31896_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31896_GM;
MethodInfo m31896_MI = 
{
	"Remove", NULL, &t5964_TI, &t108_0_0_0, RuntimeInvoker_t108_t152, t5964_m31896_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31896_GM};
static MethodInfo* t5964_MIs[] =
{
	&m31890_MI,
	&m31891_MI,
	&m31892_MI,
	&m31893_MI,
	&m31894_MI,
	&m31895_MI,
	&m31896_MI,
	NULL
};
extern TypeInfo t5966_TI;
static TypeInfo* t5964_ITIs[] = 
{
	&t739_TI,
	&t5966_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5964_0_0_0;
extern Il2CppType t5964_1_0_0;
struct t5964;
extern Il2CppGenericClass t5964_GC;
TypeInfo t5964_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5964_MIs, t5964_PIs, NULL, NULL, NULL, NULL, NULL, &t5964_TI, t5964_ITIs, NULL, &EmptyCustomAttributesCache, &t5964_TI, &t5964_0_0_0, &t5964_1_0_0, NULL, &t5964_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Int64>
extern Il2CppType t2635_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31897_GM;
MethodInfo m31897_MI = 
{
	"GetEnumerator", NULL, &t5966_TI, &t2635_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31897_GM};
static MethodInfo* t5966_MIs[] =
{
	&m31897_MI,
	NULL
};
static TypeInfo* t5966_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5966_0_0_0;
extern Il2CppType t5966_1_0_0;
struct t5966;
extern Il2CppGenericClass t5966_GC;
TypeInfo t5966_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5966_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5966_TI, t5966_ITIs, NULL, &EmptyCustomAttributesCache, &t5966_TI, &t5966_0_0_0, &t5966_1_0_0, NULL, &t5966_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5965_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Int64>
extern MethodInfo m31898_MI;
extern MethodInfo m31899_MI;
static PropertyInfo t5965____Item_PropertyInfo = 
{
	&t5965_TI, "Item", &m31898_MI, &m31899_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5965_PIs[] =
{
	&t5965____Item_PropertyInfo,
	NULL
};
extern Il2CppType t152_0_0_0;
static ParameterInfo t5965_m31900_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31900_GM;
MethodInfo m31900_MI = 
{
	"IndexOf", NULL, &t5965_TI, &t110_0_0_0, RuntimeInvoker_t110_t152, t5965_m31900_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31900_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t152_0_0_0;
static ParameterInfo t5965_m31901_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31901_GM;
MethodInfo m31901_MI = 
{
	"Insert", NULL, &t5965_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t152, t5965_m31901_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31901_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t5965_m31902_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31902_GM;
MethodInfo m31902_MI = 
{
	"RemoveAt", NULL, &t5965_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t5965_m31902_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31902_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t5965_m31898_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t152_0_0_0;
extern void* RuntimeInvoker_t152_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31898_GM;
MethodInfo m31898_MI = 
{
	"get_Item", NULL, &t5965_TI, &t152_0_0_0, RuntimeInvoker_t152_t110, t5965_m31898_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31898_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t152_0_0_0;
static ParameterInfo t5965_m31899_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31899_GM;
MethodInfo m31899_MI = 
{
	"set_Item", NULL, &t5965_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t152, t5965_m31899_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31899_GM};
static MethodInfo* t5965_MIs[] =
{
	&m31900_MI,
	&m31901_MI,
	&m31902_MI,
	&m31898_MI,
	&m31899_MI,
	NULL
};
static TypeInfo* t5965_ITIs[] = 
{
	&t739_TI,
	&t5964_TI,
	&t5966_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5965_0_0_0;
extern Il2CppType t5965_1_0_0;
struct t5965;
extern Il2CppGenericClass t5965_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t5965_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5965_MIs, t5965_PIs, NULL, NULL, NULL, NULL, NULL, &t5965_TI, t5965_ITIs, NULL, &t2240__CustomAttributeCache, &t5965_TI, &t5965_0_0_0, &t5965_1_0_0, NULL, &t5965_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5967_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>
extern MethodInfo m31903_MI;
static PropertyInfo t5967____Count_PropertyInfo = 
{
	&t5967_TI, "Count", &m31903_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m31904_MI;
static PropertyInfo t5967____IsReadOnly_PropertyInfo = 
{
	&t5967_TI, "IsReadOnly", &m31904_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5967_PIs[] =
{
	&t5967____Count_PropertyInfo,
	&t5967____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31903_GM;
MethodInfo m31903_MI = 
{
	"get_Count", NULL, &t5967_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31903_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31904_GM;
MethodInfo m31904_MI = 
{
	"get_IsReadOnly", NULL, &t5967_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31904_GM};
extern Il2CppType t2046_0_0_0;
extern Il2CppType t2046_0_0_0;
static ParameterInfo t5967_m31905_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2046_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31905_GM;
MethodInfo m31905_MI = 
{
	"Add", NULL, &t5967_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t5967_m31905_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31905_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31906_GM;
MethodInfo m31906_MI = 
{
	"Clear", NULL, &t5967_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31906_GM};
extern Il2CppType t2046_0_0_0;
static ParameterInfo t5967_m31907_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2046_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31907_GM;
MethodInfo m31907_MI = 
{
	"Contains", NULL, &t5967_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t5967_m31907_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31907_GM};
extern Il2CppType t4180_0_0_0;
extern Il2CppType t4180_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t5967_m31908_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4180_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31908_GM;
MethodInfo m31908_MI = 
{
	"CopyTo", NULL, &t5967_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t5967_m31908_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31908_GM};
extern Il2CppType t2046_0_0_0;
static ParameterInfo t5967_m31909_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2046_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31909_GM;
MethodInfo m31909_MI = 
{
	"Remove", NULL, &t5967_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t5967_m31909_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31909_GM};
static MethodInfo* t5967_MIs[] =
{
	&m31903_MI,
	&m31904_MI,
	&m31905_MI,
	&m31906_MI,
	&m31907_MI,
	&m31908_MI,
	&m31909_MI,
	NULL
};
extern TypeInfo t5969_TI;
static TypeInfo* t5967_ITIs[] = 
{
	&t739_TI,
	&t5969_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5967_0_0_0;
extern Il2CppType t5967_1_0_0;
struct t5967;
extern Il2CppGenericClass t5967_GC;
TypeInfo t5967_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5967_MIs, t5967_PIs, NULL, NULL, NULL, NULL, NULL, &t5967_TI, t5967_ITIs, NULL, &EmptyCustomAttributesCache, &t5967_TI, &t5967_0_0_0, &t5967_1_0_0, NULL, &t5967_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Int64>>
extern Il2CppType t4712_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31910_GM;
MethodInfo m31910_MI = 
{
	"GetEnumerator", NULL, &t5969_TI, &t4712_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31910_GM};
static MethodInfo* t5969_MIs[] =
{
	&m31910_MI,
	NULL
};
static TypeInfo* t5969_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5969_0_0_0;
extern Il2CppType t5969_1_0_0;
struct t5969;
extern Il2CppGenericClass t5969_GC;
TypeInfo t5969_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5969_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5969_TI, t5969_ITIs, NULL, &EmptyCustomAttributesCache, &t5969_TI, &t5969_0_0_0, &t5969_1_0_0, NULL, &t5969_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4712_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Int64>>
extern MethodInfo m31911_MI;
static PropertyInfo t4712____Current_PropertyInfo = 
{
	&t4712_TI, "Current", &m31911_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4712_PIs[] =
{
	&t4712____Current_PropertyInfo,
	NULL
};
extern Il2CppType t2046_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31911_GM;
MethodInfo m31911_MI = 
{
	"get_Current", NULL, &t4712_TI, &t2046_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31911_GM};
static MethodInfo* t4712_MIs[] =
{
	&m31911_MI,
	NULL
};
static TypeInfo* t4712_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4712_0_0_0;
extern Il2CppType t4712_1_0_0;
struct t4712;
extern Il2CppGenericClass t4712_GC;
TypeInfo t4712_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4712_MIs, t4712_PIs, NULL, NULL, NULL, NULL, NULL, &t4712_TI, t4712_ITIs, NULL, &EmptyCustomAttributesCache, &t4712_TI, &t4712_0_0_0, &t4712_1_0_0, NULL, &t4712_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2046_TI;



// Metadata Definition System.IComparable`1<System.Int64>
extern Il2CppType t152_0_0_0;
static ParameterInfo t2046_m31912_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31912_GM;
MethodInfo m31912_MI = 
{
	"CompareTo", NULL, &t2046_TI, &t110_0_0_0, RuntimeInvoker_t110_t152, t2046_m31912_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31912_GM};
static MethodInfo* t2046_MIs[] =
{
	&m31912_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2046_1_0_0;
struct t2046;
extern Il2CppGenericClass t2046_GC;
TypeInfo t2046_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t2046_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2046_TI, NULL, NULL, &EmptyCustomAttributesCache, &t2046_TI, &t2046_0_0_0, &t2046_1_0_0, NULL, &t2046_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2633.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2633_TI;
#include "t2633MD.h"

extern MethodInfo m13171_MI;
extern MethodInfo m24270_MI;
struct t107;
struct t107;
 t5 * m23596_gshared (t107 * __this, int32_t p0, MethodInfo* method);
#define m23596(__this, p0, method) (t5 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
#define m24270(__this, p0, method) (t5*)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>
extern Il2CppType t107_0_0_1;
FieldInfo t2633_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t2633_TI, offsetof(t2633, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2633_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2633_TI, offsetof(t2633, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2633_FIs[] =
{
	&t2633_f0_FieldInfo,
	&t2633_f1_FieldInfo,
	NULL
};
extern MethodInfo m13168_MI;
static PropertyInfo t2633____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2633_TI, "System.Collections.IEnumerator.Current", &m13168_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2633____Current_PropertyInfo = 
{
	&t2633_TI, "Current", &m13171_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2633_PIs[] =
{
	&t2633____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2633____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t2633_m13167_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13167_GM;
MethodInfo m13167_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t2633_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2633_m13167_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13167_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13168_GM;
MethodInfo m13168_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t2633_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13168_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13169_GM;
MethodInfo m13169_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t2633_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13169_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13170_GM;
MethodInfo m13170_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t2633_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13170_GM};
extern Il2CppType t2046_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13171_GM;
MethodInfo m13171_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t2633_TI, &t2046_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13171_GM};
static MethodInfo* t2633_MIs[] =
{
	&m13167_MI,
	&m13168_MI,
	&m13169_MI,
	&m13170_MI,
	&m13171_MI,
	NULL
};
extern MethodInfo m13170_MI;
extern MethodInfo m13169_MI;
static MethodInfo* t2633_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m13168_MI,
	&m13170_MI,
	&m13169_MI,
	&m13171_MI,
};
static TypeInfo* t2633_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t4712_TI,
};
static Il2CppInterfaceOffsetPair t2633_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t4712_TI, 7},
};
extern TypeInfo t2046_TI;
static Il2CppRGCTXData t2633_RGCTXData[3] = 
{
	&m13171_MI/* Method Usage */,
	&t2046_TI/* Class Usage */,
	&m24270_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2633_0_0_0;
extern Il2CppType t2633_1_0_0;
extern Il2CppGenericClass t2633_GC;
TypeInfo t2633_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2633_MIs, t2633_PIs, t2633_FIs, NULL, &t267_TI, NULL, &t107_TI, &t2633_TI, t2633_ITIs, t2633_VT, &EmptyCustomAttributesCache, &t2633_TI, &t2633_0_0_0, &t2633_1_0_0, t2633_IOs, &t2633_GC, NULL, NULL, NULL, t2633_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2633)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5968_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>
extern MethodInfo m31913_MI;
extern MethodInfo m31914_MI;
static PropertyInfo t5968____Item_PropertyInfo = 
{
	&t5968_TI, "Item", &m31913_MI, &m31914_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5968_PIs[] =
{
	&t5968____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2046_0_0_0;
static ParameterInfo t5968_m31915_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2046_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31915_GM;
MethodInfo m31915_MI = 
{
	"IndexOf", NULL, &t5968_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t5968_m31915_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31915_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2046_0_0_0;
static ParameterInfo t5968_m31916_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2046_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31916_GM;
MethodInfo m31916_MI = 
{
	"Insert", NULL, &t5968_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t5968_m31916_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31916_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t5968_m31917_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31917_GM;
MethodInfo m31917_MI = 
{
	"RemoveAt", NULL, &t5968_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t5968_m31917_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31917_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t5968_m31913_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t2046_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31913_GM;
MethodInfo m31913_MI = 
{
	"get_Item", NULL, &t5968_TI, &t2046_0_0_0, RuntimeInvoker_t5_t110, t5968_m31913_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31913_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2046_0_0_0;
static ParameterInfo t5968_m31914_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2046_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31914_GM;
MethodInfo m31914_MI = 
{
	"set_Item", NULL, &t5968_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t5968_m31914_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31914_GM};
static MethodInfo* t5968_MIs[] =
{
	&m31915_MI,
	&m31916_MI,
	&m31917_MI,
	&m31913_MI,
	&m31914_MI,
	NULL
};
static TypeInfo* t5968_ITIs[] = 
{
	&t739_TI,
	&t5967_TI,
	&t5969_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5968_0_0_0;
extern Il2CppType t5968_1_0_0;
struct t5968;
extern Il2CppGenericClass t5968_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t5968_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5968_MIs, t5968_PIs, NULL, NULL, NULL, NULL, NULL, &t5968_TI, t5968_ITIs, NULL, &t2240__CustomAttributeCache, &t5968_TI, &t5968_0_0_0, &t5968_1_0_0, NULL, &t5968_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5970_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>
extern MethodInfo m31918_MI;
static PropertyInfo t5970____Count_PropertyInfo = 
{
	&t5970_TI, "Count", &m31918_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m31919_MI;
static PropertyInfo t5970____IsReadOnly_PropertyInfo = 
{
	&t5970_TI, "IsReadOnly", &m31919_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5970_PIs[] =
{
	&t5970____Count_PropertyInfo,
	&t5970____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31918_GM;
MethodInfo m31918_MI = 
{
	"get_Count", NULL, &t5970_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31918_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31919_GM;
MethodInfo m31919_MI = 
{
	"get_IsReadOnly", NULL, &t5970_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31919_GM};
extern Il2CppType t2047_0_0_0;
extern Il2CppType t2047_0_0_0;
static ParameterInfo t5970_m31920_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2047_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31920_GM;
MethodInfo m31920_MI = 
{
	"Add", NULL, &t5970_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t5970_m31920_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31920_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31921_GM;
MethodInfo m31921_MI = 
{
	"Clear", NULL, &t5970_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31921_GM};
extern Il2CppType t2047_0_0_0;
static ParameterInfo t5970_m31922_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2047_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31922_GM;
MethodInfo m31922_MI = 
{
	"Contains", NULL, &t5970_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t5970_m31922_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31922_GM};
extern Il2CppType t4181_0_0_0;
extern Il2CppType t4181_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t5970_m31923_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4181_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31923_GM;
MethodInfo m31923_MI = 
{
	"CopyTo", NULL, &t5970_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t5970_m31923_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31923_GM};
extern Il2CppType t2047_0_0_0;
static ParameterInfo t5970_m31924_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2047_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31924_GM;
MethodInfo m31924_MI = 
{
	"Remove", NULL, &t5970_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t5970_m31924_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31924_GM};
static MethodInfo* t5970_MIs[] =
{
	&m31918_MI,
	&m31919_MI,
	&m31920_MI,
	&m31921_MI,
	&m31922_MI,
	&m31923_MI,
	&m31924_MI,
	NULL
};
extern TypeInfo t5972_TI;
static TypeInfo* t5970_ITIs[] = 
{
	&t739_TI,
	&t5972_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5970_0_0_0;
extern Il2CppType t5970_1_0_0;
struct t5970;
extern Il2CppGenericClass t5970_GC;
TypeInfo t5970_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5970_MIs, t5970_PIs, NULL, NULL, NULL, NULL, NULL, &t5970_TI, t5970_ITIs, NULL, &EmptyCustomAttributesCache, &t5970_TI, &t5970_0_0_0, &t5970_1_0_0, NULL, &t5970_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Int64>>
extern Il2CppType t4714_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31925_GM;
MethodInfo m31925_MI = 
{
	"GetEnumerator", NULL, &t5972_TI, &t4714_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31925_GM};
static MethodInfo* t5972_MIs[] =
{
	&m31925_MI,
	NULL
};
static TypeInfo* t5972_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5972_0_0_0;
extern Il2CppType t5972_1_0_0;
struct t5972;
extern Il2CppGenericClass t5972_GC;
TypeInfo t5972_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5972_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5972_TI, t5972_ITIs, NULL, &EmptyCustomAttributesCache, &t5972_TI, &t5972_0_0_0, &t5972_1_0_0, NULL, &t5972_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4714_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Int64>>
extern MethodInfo m31926_MI;
static PropertyInfo t4714____Current_PropertyInfo = 
{
	&t4714_TI, "Current", &m31926_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4714_PIs[] =
{
	&t4714____Current_PropertyInfo,
	NULL
};
extern Il2CppType t2047_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31926_GM;
MethodInfo m31926_MI = 
{
	"get_Current", NULL, &t4714_TI, &t2047_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31926_GM};
static MethodInfo* t4714_MIs[] =
{
	&m31926_MI,
	NULL
};
static TypeInfo* t4714_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4714_0_0_0;
extern Il2CppType t4714_1_0_0;
struct t4714;
extern Il2CppGenericClass t4714_GC;
TypeInfo t4714_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4714_MIs, t4714_PIs, NULL, NULL, NULL, NULL, NULL, &t4714_TI, t4714_ITIs, NULL, &EmptyCustomAttributesCache, &t4714_TI, &t4714_0_0_0, &t4714_1_0_0, NULL, &t4714_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2047_TI;



// Metadata Definition System.IEquatable`1<System.Int64>
extern Il2CppType t152_0_0_0;
static ParameterInfo t2047_m31927_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31927_GM;
MethodInfo m31927_MI = 
{
	"Equals", NULL, &t2047_TI, &t108_0_0_0, RuntimeInvoker_t108_t152, t2047_m31927_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31927_GM};
static MethodInfo* t2047_MIs[] =
{
	&m31927_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2047_1_0_0;
struct t2047;
extern Il2CppGenericClass t2047_GC;
TypeInfo t2047_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t2047_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2047_TI, NULL, NULL, &EmptyCustomAttributesCache, &t2047_TI, &t2047_0_0_0, &t2047_1_0_0, NULL, &t2047_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2634.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2634_TI;
#include "t2634MD.h"

extern MethodInfo m13176_MI;
extern MethodInfo m24281_MI;
struct t107;
#define m24281(__this, p0, method) (t5*)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>
extern Il2CppType t107_0_0_1;
FieldInfo t2634_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t2634_TI, offsetof(t2634, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2634_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2634_TI, offsetof(t2634, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2634_FIs[] =
{
	&t2634_f0_FieldInfo,
	&t2634_f1_FieldInfo,
	NULL
};
extern MethodInfo m13173_MI;
static PropertyInfo t2634____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2634_TI, "System.Collections.IEnumerator.Current", &m13173_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2634____Current_PropertyInfo = 
{
	&t2634_TI, "Current", &m13176_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2634_PIs[] =
{
	&t2634____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2634____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t2634_m13172_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13172_GM;
MethodInfo m13172_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t2634_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2634_m13172_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13172_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13173_GM;
MethodInfo m13173_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t2634_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13173_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13174_GM;
MethodInfo m13174_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t2634_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13174_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13175_GM;
MethodInfo m13175_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t2634_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13175_GM};
extern Il2CppType t2047_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13176_GM;
MethodInfo m13176_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t2634_TI, &t2047_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13176_GM};
static MethodInfo* t2634_MIs[] =
{
	&m13172_MI,
	&m13173_MI,
	&m13174_MI,
	&m13175_MI,
	&m13176_MI,
	NULL
};
extern MethodInfo m13175_MI;
extern MethodInfo m13174_MI;
static MethodInfo* t2634_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m13173_MI,
	&m13175_MI,
	&m13174_MI,
	&m13176_MI,
};
static TypeInfo* t2634_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t4714_TI,
};
static Il2CppInterfaceOffsetPair t2634_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t4714_TI, 7},
};
extern TypeInfo t2047_TI;
static Il2CppRGCTXData t2634_RGCTXData[3] = 
{
	&m13176_MI/* Method Usage */,
	&t2047_TI/* Class Usage */,
	&m24281_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2634_0_0_0;
extern Il2CppType t2634_1_0_0;
extern Il2CppGenericClass t2634_GC;
TypeInfo t2634_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2634_MIs, t2634_PIs, t2634_FIs, NULL, &t267_TI, NULL, &t107_TI, &t2634_TI, t2634_ITIs, t2634_VT, &EmptyCustomAttributesCache, &t2634_TI, &t2634_0_0_0, &t2634_1_0_0, t2634_IOs, &t2634_GC, NULL, NULL, NULL, t2634_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2634)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5971_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>
extern MethodInfo m31928_MI;
extern MethodInfo m31929_MI;
static PropertyInfo t5971____Item_PropertyInfo = 
{
	&t5971_TI, "Item", &m31928_MI, &m31929_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5971_PIs[] =
{
	&t5971____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2047_0_0_0;
static ParameterInfo t5971_m31930_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2047_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31930_GM;
MethodInfo m31930_MI = 
{
	"IndexOf", NULL, &t5971_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t5971_m31930_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31930_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2047_0_0_0;
static ParameterInfo t5971_m31931_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2047_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31931_GM;
MethodInfo m31931_MI = 
{
	"Insert", NULL, &t5971_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t5971_m31931_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31931_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t5971_m31932_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31932_GM;
MethodInfo m31932_MI = 
{
	"RemoveAt", NULL, &t5971_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t5971_m31932_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31932_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t5971_m31928_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t2047_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31928_GM;
MethodInfo m31928_MI = 
{
	"get_Item", NULL, &t5971_TI, &t2047_0_0_0, RuntimeInvoker_t5_t110, t5971_m31928_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31928_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2047_0_0_0;
static ParameterInfo t5971_m31929_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2047_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31929_GM;
MethodInfo m31929_MI = 
{
	"set_Item", NULL, &t5971_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t5971_m31929_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31929_GM};
static MethodInfo* t5971_MIs[] =
{
	&m31930_MI,
	&m31931_MI,
	&m31932_MI,
	&m31928_MI,
	&m31929_MI,
	NULL
};
static TypeInfo* t5971_ITIs[] = 
{
	&t739_TI,
	&t5970_TI,
	&t5972_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5971_0_0_0;
extern Il2CppType t5971_1_0_0;
struct t5971;
extern Il2CppGenericClass t5971_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t5971_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5971_MIs, t5971_PIs, NULL, NULL, NULL, NULL, NULL, &t5971_TI, t5971_ITIs, NULL, &t2240__CustomAttributeCache, &t5971_TI, &t5971_0_0_0, &t5971_1_0_0, NULL, &t5971_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2626.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2626_TI;
#include "t2626MD.h"

#include "t53.h"
#include "t484.h"
#include "t491.h"
#include "t2636.h"
#include "t2637.h"
#include "t124.h"
extern TypeInfo t811_TI;
extern TypeInfo t5_TI;
extern TypeInfo t53_TI;
extern TypeInfo t110_TI;
extern TypeInfo t484_TI;
extern TypeInfo t491_TI;
extern TypeInfo t2636_TI;
extern TypeInfo t1399_TI;
extern TypeInfo t109_TI;
extern TypeInfo t2637_TI;
#include "t53MD.h"
#include "t5MD.h"
#include "t484MD.h"
#include "t491MD.h"
#include "t2637MD.h"
#include "t2636MD.h"
extern MethodInfo m11151_MI;
extern MethodInfo m13129_MI;
extern MethodInfo m460_MI;
extern MethodInfo m3595_MI;
extern MethodInfo m4780_MI;
extern MethodInfo m13141_MI;
extern MethodInfo m13189_MI;
extern MethodInfo m13188_MI;
extern MethodInfo m13134_MI;
extern MethodInfo m13136_MI;
extern MethodInfo m13208_MI;
extern MethodInfo m24292_MI;
extern MethodInfo m24293_MI;
extern MethodInfo m13191_MI;
struct t53;
#include "t114.h"
#include "t142.h"
#include "t115.h"
#include "t160.h"
 void m24292 (t53 * __this, t107 * p0, int32_t p1, t2637 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t53;
#include "Assembly-CSharp_ArrayTypes.h"
 void m24293 (t53 * __this, t1399* p0, int32_t p1, t2637 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m13177_MI;
 void m13177 (t2626 * __this, t53 * p0, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		if (p0)
		{
			goto IL_0014;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3595(L_0, (t11*) &_stringLiteral1215, &m3595_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0014:
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m13178_MI;
 void m13178 (t2626 * __this, int64_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral1216, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m13179_MI;
 void m13179 (t2626 * __this, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral1216, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m13180_MI;
 bool m13180 (t2626 * __this, int64_t p0, MethodInfo* method){
	{
		t53 * L_0 = (__this->f0);
		bool L_1 = m13141(L_0, p0, &m13141_MI);
		return L_1;
	}
}
extern MethodInfo m13181_MI;
 bool m13181 (t2626 * __this, int64_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral1216, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m13182_MI;
 t5* m13182 (t2626 * __this, MethodInfo* method){
	{
		t2636  L_0 = m13189(__this, &m13189_MI);
		t2636  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t2636_TI), &L_1);
		return (t5*)L_2;
	}
}
extern MethodInfo m13183_MI;
 void m13183 (t2626 * __this, t107 * p0, int32_t p1, MethodInfo* method){
	t1399* V_0 = {0};
	{
		V_0 = ((t1399*)IsInst(p0, InitializedTypeInfo(&t1399_TI)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker2< t1399*, int32_t >::Invoke(&m13188_MI, __this, V_0, p1);
		return;
	}

IL_0013:
	{
		t53 * L_0 = (__this->f0);
		m13134(L_0, p0, p1, &m13134_MI);
		t53 * L_1 = (__this->f0);
		t124 L_2 = { &m13136_MI };
		t2637 * L_3 = (t2637 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2637_TI));
		m13208(L_3, NULL, L_2, &m13208_MI);
		m24292(L_1, p0, p1, L_3, &m24292_MI);
		return;
	}
}
extern MethodInfo m13184_MI;
 t5 * m13184 (t2626 * __this, MethodInfo* method){
	{
		t2636  L_0 = m13189(__this, &m13189_MI);
		t2636  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t2636_TI), &L_1);
		return (t5 *)L_2;
	}
}
extern MethodInfo m13185_MI;
 bool m13185 (t2626 * __this, MethodInfo* method){
	{
		return 1;
	}
}
extern MethodInfo m13186_MI;
 bool m13186 (t2626 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m13187_MI;
 t5 * m13187 (t2626 * __this, MethodInfo* method){
	{
		t53 * L_0 = (__this->f0);
		t5 * L_1 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m11151_MI, L_0);
		return L_1;
	}
}
 void m13188 (t2626 * __this, t1399* p0, int32_t p1, MethodInfo* method){
	{
		t53 * L_0 = (__this->f0);
		m13134(L_0, (t107 *)(t107 *)p0, p1, &m13134_MI);
		t53 * L_1 = (__this->f0);
		t124 L_2 = { &m13136_MI };
		t2637 * L_3 = (t2637 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2637_TI));
		m13208(L_3, NULL, L_2, &m13208_MI);
		m24293(L_1, p0, p1, L_3, &m24293_MI);
		return;
	}
}
 t2636  m13189 (t2626 * __this, MethodInfo* method){
	{
		t53 * L_0 = (__this->f0);
		t2636  L_1 = {0};
		m13191(&L_1, L_0, &m13191_MI);
		return L_1;
	}
}
extern MethodInfo m13190_MI;
 int32_t m13190 (t2626 * __this, MethodInfo* method){
	{
		t53 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m13129_MI, L_0);
		return L_1;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection<JewelMine.Engine.Models.MarkedCollisionGroup,System.Int64>
extern Il2CppType t53_0_0_1;
FieldInfo t2626_f0_FieldInfo = 
{
	"dictionary", &t53_0_0_1, &t2626_TI, offsetof(t2626, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2626_FIs[] =
{
	&t2626_f0_FieldInfo,
	NULL
};
static PropertyInfo t2626____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo = 
{
	&t2626_TI, "System.Collections.Generic.ICollection<TValue>.IsReadOnly", &m13185_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2626____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2626_TI, "System.Collections.ICollection.IsSynchronized", &m13186_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2626____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2626_TI, "System.Collections.ICollection.SyncRoot", &m13187_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2626____Count_PropertyInfo = 
{
	&t2626_TI, "Count", &m13190_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2626_PIs[] =
{
	&t2626____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo,
	&t2626____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2626____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2626____Count_PropertyInfo,
	NULL
};
extern Il2CppType t53_0_0_0;
extern Il2CppType t53_0_0_0;
static ParameterInfo t2626_m13177_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t53_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13177_GM;
MethodInfo m13177_MI = 
{
	".ctor", (methodPointerType)&m13177, &t2626_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2626_m13177_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13177_GM};
extern Il2CppType t152_0_0_0;
static ParameterInfo t2626_m13178_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13178_GM;
MethodInfo m13178_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Add", (methodPointerType)&m13178, &t2626_TI, &t109_0_0_0, RuntimeInvoker_t109_t152, t2626_m13178_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13178_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13179_GM;
MethodInfo m13179_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Clear", (methodPointerType)&m13179, &t2626_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 481, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13179_GM};
extern Il2CppType t152_0_0_0;
static ParameterInfo t2626_m13180_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13180_GM;
MethodInfo m13180_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Contains", (methodPointerType)&m13180, &t2626_TI, &t108_0_0_0, RuntimeInvoker_t108_t152, t2626_m13180_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13180_GM};
extern Il2CppType t152_0_0_0;
static ParameterInfo t2626_m13181_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13181_GM;
MethodInfo m13181_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Remove", (methodPointerType)&m13181, &t2626_TI, &t108_0_0_0, RuntimeInvoker_t108_t152, t2626_m13181_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13181_GM};
extern Il2CppType t2635_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13182_GM;
MethodInfo m13182_MI = 
{
	"System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", (methodPointerType)&m13182, &t2626_TI, &t2635_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13182_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2626_m13183_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13183_GM;
MethodInfo m13183_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m13183, &t2626_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2626_m13183_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13183_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13184_GM;
MethodInfo m13184_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m13184, &t2626_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13184_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13185_GM;
MethodInfo m13185_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.get_IsReadOnly", (methodPointerType)&m13185, &t2626_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13185_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13186_GM;
MethodInfo m13186_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m13186, &t2626_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13186_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13187_GM;
MethodInfo m13187_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m13187, &t2626_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13187_GM};
extern Il2CppType t1399_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2626_m13188_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1399_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13188_GM;
MethodInfo m13188_MI = 
{
	"CopyTo", (methodPointerType)&m13188, &t2626_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2626_m13188_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13188_GM};
extern Il2CppType t2636_0_0_0;
extern void* RuntimeInvoker_t2636 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13189_GM;
MethodInfo m13189_MI = 
{
	"GetEnumerator", (methodPointerType)&m13189, &t2626_TI, &t2636_0_0_0, RuntimeInvoker_t2636, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13189_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13190_GM;
MethodInfo m13190_MI = 
{
	"get_Count", (methodPointerType)&m13190, &t2626_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13190_GM};
static MethodInfo* t2626_MIs[] =
{
	&m13177_MI,
	&m13178_MI,
	&m13179_MI,
	&m13180_MI,
	&m13181_MI,
	&m13182_MI,
	&m13183_MI,
	&m13184_MI,
	&m13185_MI,
	&m13186_MI,
	&m13187_MI,
	&m13188_MI,
	&m13189_MI,
	&m13190_MI,
	NULL
};
extern MethodInfo m464_MI;
extern MethodInfo m466_MI;
extern MethodInfo m467_MI;
static MethodInfo* t2626_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m13184_MI,
	&m13190_MI,
	&m13186_MI,
	&m13187_MI,
	&m13183_MI,
	&m13190_MI,
	&m13185_MI,
	&m13178_MI,
	&m13179_MI,
	&m13180_MI,
	&m13188_MI,
	&m13181_MI,
	&m13182_MI,
};
static TypeInfo* t2626_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t5964_TI,
	&t5966_TI,
};
static Il2CppInterfaceOffsetPair t2626_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t5964_TI, 9},
	{ &t5966_TI, 16},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2626_0_0_0;
extern Il2CppType t2626_1_0_0;
struct t2626;
extern Il2CppGenericClass t2626_GC;
extern TypeInfo t1517_TI;
extern CustomAttributesCache t1515__CustomAttributeCache;
TypeInfo t2626_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ValueCollection", "", t2626_MIs, t2626_PIs, t2626_FIs, NULL, &t5_TI, NULL, &t1517_TI, &t2626_TI, t2626_ITIs, t2626_VT, &t1515__CustomAttributeCache, &t2626_TI, &t2626_0_0_0, &t2626_1_0_0, t2626_IOs, &t2626_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2626), 0, -1, 0, 0, -1, 1057026, 0, false, false, false, false, true, false, false, false, false, false, false, false, 14, 4, 1, 0, 0, 17, 4, 4};
#ifndef _MSC_VER
#else
#endif

#include "t2629.h"
extern TypeInfo t2629_TI;
extern TypeInfo t108_TI;
#include "t2629MD.h"
#include "t44MD.h"
extern MethodInfo m13204_MI;
extern MethodInfo m567_MI;
extern MethodInfo m13150_MI;
extern MethodInfo m13207_MI;
extern MethodInfo m13201_MI;


 void m13191 (t2636 * __this, t53 * p0, MethodInfo* method){
	{
		t2629  L_0 = m13150(p0, &m13150_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m13192_MI;
 t5 * m13192 (t2636 * __this, MethodInfo* method){
	{
		t2629 * L_0 = &(__this->f0);
		int64_t L_1 = m13204(L_0, &m13204_MI);
		int64_t L_2 = L_1;
		t5 * L_3 = Box(InitializedTypeInfo(&t152_TI), &L_2);
		return L_3;
	}
}
extern MethodInfo m13193_MI;
 void m13193 (t2636 * __this, MethodInfo* method){
	{
		t2629 * L_0 = &(__this->f0);
		m13207(L_0, &m13207_MI);
		return;
	}
}
extern MethodInfo m13194_MI;
 bool m13194 (t2636 * __this, MethodInfo* method){
	{
		t2629 * L_0 = &(__this->f0);
		bool L_1 = m13201(L_0, &m13201_MI);
		return L_1;
	}
}
extern MethodInfo m13195_MI;
 int64_t m13195 (t2636 * __this, MethodInfo* method){
	{
		t2629 * L_0 = &(__this->f0);
		t44 * L_1 = &(L_0->f3);
		int64_t L_2 = m567(L_1, &m567_MI);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<JewelMine.Engine.Models.MarkedCollisionGroup,System.Int64>
extern Il2CppType t2629_0_0_1;
FieldInfo t2636_f0_FieldInfo = 
{
	"host_enumerator", &t2629_0_0_1, &t2636_TI, offsetof(t2636, f0) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2636_FIs[] =
{
	&t2636_f0_FieldInfo,
	NULL
};
static PropertyInfo t2636____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2636_TI, "System.Collections.IEnumerator.Current", &m13192_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2636____Current_PropertyInfo = 
{
	&t2636_TI, "Current", &m13195_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2636_PIs[] =
{
	&t2636____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2636____Current_PropertyInfo,
	NULL
};
extern Il2CppType t53_0_0_0;
static ParameterInfo t2636_m13191_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t53_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13191_GM;
MethodInfo m13191_MI = 
{
	".ctor", (methodPointerType)&m13191, &t2636_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2636_m13191_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13191_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13192_GM;
MethodInfo m13192_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13192, &t2636_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13192_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13193_GM;
MethodInfo m13193_MI = 
{
	"Dispose", (methodPointerType)&m13193, &t2636_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13193_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13194_GM;
MethodInfo m13194_MI = 
{
	"MoveNext", (methodPointerType)&m13194, &t2636_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13194_GM};
extern Il2CppType t152_0_0_0;
extern void* RuntimeInvoker_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13195_GM;
MethodInfo m13195_MI = 
{
	"get_Current", (methodPointerType)&m13195, &t2636_TI, &t152_0_0_0, RuntimeInvoker_t152, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13195_GM};
static MethodInfo* t2636_MIs[] =
{
	&m13191_MI,
	&m13192_MI,
	&m13193_MI,
	&m13194_MI,
	&m13195_MI,
	NULL
};
static MethodInfo* t2636_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m13192_MI,
	&m13194_MI,
	&m13193_MI,
	&m13195_MI,
};
static TypeInfo* t2636_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t2635_TI,
};
static Il2CppInterfaceOffsetPair t2636_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t2635_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2636_0_0_0;
extern Il2CppType t2636_1_0_0;
extern Il2CppGenericClass t2636_GC;
extern TypeInfo t1515_TI;
TypeInfo t2636_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2636_MIs, t2636_PIs, t2636_FIs, NULL, &t267_TI, NULL, &t1515_TI, &t2636_TI, t2636_ITIs, t2636_VT, &EmptyCustomAttributesCache, &t2636_TI, &t2636_0_0_0, &t2636_1_0_0, t2636_IOs, &t2636_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2636)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif

#include "t990.h"
#include "t1363.h"
extern TypeInfo t15_TI;
extern TypeInfo t990_TI;
extern TypeInfo t1363_TI;
#include "t990MD.h"
#include "t1363MD.h"
extern MethodInfo m13206_MI;
extern MethodInfo m12775_MI;
extern MethodInfo m4759_MI;
extern MethodInfo m13203_MI;
extern MethodInfo m13205_MI;
extern MethodInfo m12774_MI;
extern MethodInfo m5942_MI;


extern MethodInfo m13196_MI;
 void m13196 (t2629 * __this, t53 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		int32_t L_0 = (p0->f14);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m13197_MI;
 t5 * m13197 (t2629 * __this, MethodInfo* method){
	{
		m13206(__this, &m13206_MI);
		t44  L_0 = (__this->f3);
		t44  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t44_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m13198_MI;
 t990  m13198 (t2629 * __this, MethodInfo* method){
	{
		m13206(__this, &m13206_MI);
		t44 * L_0 = &(__this->f3);
		t15 * L_1 = m12775(L_0, &m12775_MI);
		t15 * L_2 = L_1;
		t44 * L_3 = &(__this->f3);
		int64_t L_4 = m567(L_3, &m567_MI);
		int64_t L_5 = L_4;
		t5 * L_6 = Box(InitializedTypeInfo(&t152_TI), &L_5);
		t990  L_7 = {0};
		m4759(&L_7, ((t15 *)L_2), L_6, &m4759_MI);
		return L_7;
	}
}
extern MethodInfo m13199_MI;
 t5 * m13199 (t2629 * __this, MethodInfo* method){
	{
		t15 * L_0 = m13203(__this, &m13203_MI);
		t15 * L_1 = L_0;
		return ((t15 *)L_1);
	}
}
extern MethodInfo m13200_MI;
 t5 * m13200 (t2629 * __this, MethodInfo* method){
	{
		int64_t L_0 = m13204(__this, &m13204_MI);
		int64_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t152_TI), &L_1);
		return L_2;
	}
}
 bool m13201 (t2629 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		m13205(__this, &m13205_MI);
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
		t53 * L_3 = (__this->f0);
		t2297* L_4 = (L_3->f5);
		int32_t L_5 = (((t1511 *)(t1511 *)SZArrayLdElema(L_4, V_0))->f0);
		if (!((int32_t)((int32_t)L_5&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		t53 * L_6 = (__this->f0);
		t54* L_7 = (L_6->f6);
		int32_t L_8 = V_0;
		t53 * L_9 = (__this->f0);
		t1399* L_10 = (L_9->f7);
		int32_t L_11 = V_0;
		t44  L_12 = {0};
		m12774(&L_12, (*(t15 **)(t15 **)SZArrayLdElema(L_7, L_8)), (*(int64_t*)(int64_t*)SZArrayLdElema(L_10, L_11)), &m12774_MI);
		__this->f3 = L_12;
		return 1;
	}

IL_0072:
	{
		int32_t L_13 = (__this->f1);
		t53 * L_14 = (__this->f0);
		int32_t L_15 = (L_14->f8);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		__this->f1 = (-1);
		return 0;
	}
}
extern MethodInfo m13202_MI;
 t44  m13202 (t2629 * __this, MethodInfo* method){
	{
		t44  L_0 = (__this->f3);
		return L_0;
	}
}
 t15 * m13203 (t2629 * __this, MethodInfo* method){
	{
		m13206(__this, &m13206_MI);
		t44 * L_0 = &(__this->f3);
		t15 * L_1 = m12775(L_0, &m12775_MI);
		return L_1;
	}
}
 int64_t m13204 (t2629 * __this, MethodInfo* method){
	{
		m13206(__this, &m13206_MI);
		t44 * L_0 = &(__this->f3);
		int64_t L_1 = m567(L_0, &m567_MI);
		return L_1;
	}
}
 void m13205 (t2629 * __this, MethodInfo* method){
	{
		t53 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1363 * L_1 = (t1363 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1363_TI));
		m5942(L_1, (t11*)NULL, &m5942_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		t53 * L_2 = (__this->f0);
		int32_t L_3 = (L_2->f14);
		int32_t L_4 = (__this->f2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		t133 * L_5 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4758(L_5, (t11*) &_stringLiteral1214, &m4758_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
 void m13206 (t2629 * __this, MethodInfo* method){
	{
		m13205(__this, &m13205_MI);
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t133 * L_1 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4758(L_1, (t11*) &_stringLiteral231, &m4758_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
 void m13207 (t2629 * __this, MethodInfo* method){
	{
		__this->f0 = (t53 *)NULL;
		return;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Enumerator<JewelMine.Engine.Models.MarkedCollisionGroup,System.Int64>
extern Il2CppType t53_0_0_1;
FieldInfo t2629_f0_FieldInfo = 
{
	"dictionary", &t53_0_0_1, &t2629_TI, offsetof(t2629, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2629_f1_FieldInfo = 
{
	"next", &t110_0_0_1, &t2629_TI, offsetof(t2629, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2629_f2_FieldInfo = 
{
	"stamp", &t110_0_0_1, &t2629_TI, offsetof(t2629, f2) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t44_0_0_3;
FieldInfo t2629_f3_FieldInfo = 
{
	"current", &t44_0_0_3, &t2629_TI, offsetof(t2629, f3) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2629_FIs[] =
{
	&t2629_f0_FieldInfo,
	&t2629_f1_FieldInfo,
	&t2629_f2_FieldInfo,
	&t2629_f3_FieldInfo,
	NULL
};
static PropertyInfo t2629____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2629_TI, "System.Collections.IEnumerator.Current", &m13197_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2629____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo = 
{
	&t2629_TI, "System.Collections.IDictionaryEnumerator.Entry", &m13198_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2629____System_Collections_IDictionaryEnumerator_Key_PropertyInfo = 
{
	&t2629_TI, "System.Collections.IDictionaryEnumerator.Key", &m13199_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2629____System_Collections_IDictionaryEnumerator_Value_PropertyInfo = 
{
	&t2629_TI, "System.Collections.IDictionaryEnumerator.Value", &m13200_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2629____Current_PropertyInfo = 
{
	&t2629_TI, "Current", &m13202_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2629____CurrentKey_PropertyInfo = 
{
	&t2629_TI, "CurrentKey", &m13203_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2629____CurrentValue_PropertyInfo = 
{
	&t2629_TI, "CurrentValue", &m13204_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2629_PIs[] =
{
	&t2629____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2629____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo,
	&t2629____System_Collections_IDictionaryEnumerator_Key_PropertyInfo,
	&t2629____System_Collections_IDictionaryEnumerator_Value_PropertyInfo,
	&t2629____Current_PropertyInfo,
	&t2629____CurrentKey_PropertyInfo,
	&t2629____CurrentValue_PropertyInfo,
	NULL
};
extern Il2CppType t53_0_0_0;
static ParameterInfo t2629_m13196_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t53_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13196_GM;
MethodInfo m13196_MI = 
{
	".ctor", (methodPointerType)&m13196, &t2629_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2629_m13196_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13196_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13197_GM;
MethodInfo m13197_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13197, &t2629_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13197_GM};
extern Il2CppType t990_0_0_0;
extern void* RuntimeInvoker_t990 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13198_GM;
MethodInfo m13198_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Entry", (methodPointerType)&m13198, &t2629_TI, &t990_0_0_0, RuntimeInvoker_t990, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13198_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13199_GM;
MethodInfo m13199_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Key", (methodPointerType)&m13199, &t2629_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13199_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13200_GM;
MethodInfo m13200_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Value", (methodPointerType)&m13200, &t2629_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13200_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13201_GM;
MethodInfo m13201_MI = 
{
	"MoveNext", (methodPointerType)&m13201, &t2629_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13201_GM};
extern Il2CppType t44_0_0_0;
extern void* RuntimeInvoker_t44 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13202_GM;
MethodInfo m13202_MI = 
{
	"get_Current", (methodPointerType)&m13202, &t2629_TI, &t44_0_0_0, RuntimeInvoker_t44, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13202_GM};
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13203_GM;
MethodInfo m13203_MI = 
{
	"get_CurrentKey", (methodPointerType)&m13203, &t2629_TI, &t15_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13203_GM};
extern Il2CppType t152_0_0_0;
extern void* RuntimeInvoker_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13204_GM;
MethodInfo m13204_MI = 
{
	"get_CurrentValue", (methodPointerType)&m13204, &t2629_TI, &t152_0_0_0, RuntimeInvoker_t152, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13204_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13205_GM;
MethodInfo m13205_MI = 
{
	"VerifyState", (methodPointerType)&m13205, &t2629_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13205_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13206_GM;
MethodInfo m13206_MI = 
{
	"VerifyCurrent", (methodPointerType)&m13206, &t2629_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13206_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13207_GM;
MethodInfo m13207_MI = 
{
	"Dispose", (methodPointerType)&m13207, &t2629_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13207_GM};
static MethodInfo* t2629_MIs[] =
{
	&m13196_MI,
	&m13197_MI,
	&m13198_MI,
	&m13199_MI,
	&m13200_MI,
	&m13201_MI,
	&m13202_MI,
	&m13203_MI,
	&m13204_MI,
	&m13205_MI,
	&m13206_MI,
	&m13207_MI,
	NULL
};
static MethodInfo* t2629_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m13197_MI,
	&m13201_MI,
	&m13207_MI,
	&m13202_MI,
	&m13198_MI,
	&m13199_MI,
	&m13200_MI,
};
extern TypeInfo t987_TI;
static TypeInfo* t2629_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t2628_TI,
	&t987_TI,
};
static Il2CppInterfaceOffsetPair t2629_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t2628_TI, 7},
	{ &t987_TI, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2629_0_0_0;
extern Il2CppType t2629_1_0_0;
extern Il2CppGenericClass t2629_GC;
TypeInfo t2629_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2629_MIs, t2629_PIs, t2629_FIs, NULL, &t267_TI, NULL, &t1517_TI, &t2629_TI, t2629_ITIs, t2629_VT, &EmptyCustomAttributesCache, &t2629_TI, &t2629_0_0_0, &t2629_1_0_0, t2629_IOs, &t2629_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2629)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, true, false, false, false, false, false, false, false, 12, 7, 4, 0, 0, 11, 4, 4};
#ifndef _MSC_VER
#else
#endif

#include "t222.h"


 void m13208 (t2637 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m13209_MI;
 int64_t m13209 (t2637 * __this, t15 * p0, int64_t p1, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m13209((t2637 *)__this->f9,p0, p1, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef int64_t (*FunctionPointerType) (t5 *, t5 * __this, t15 * p0, int64_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef int64_t (*FunctionPointerType) (t5 * __this, t15 * p0, int64_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef int64_t (*FunctionPointerType) (t5 * __this, int64_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern MethodInfo m13210_MI;
 t5 * m13210 (t2637 * __this, t15 * p0, int64_t p1, t222 * p2, t5 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t152_TI), &p1);
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m13211_MI;
 int64_t m13211 (t2637 * __this, t5 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int64_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<JewelMine.Engine.Models.MarkedCollisionGroup,System.Int64,System.Int64>
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2637_m13208_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13208_GM;
MethodInfo m13208_MI = 
{
	".ctor", (methodPointerType)&m13208, &t2637_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2637_m13208_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13208_GM};
extern Il2CppType t15_0_0_0;
extern Il2CppType t152_0_0_0;
static ParameterInfo t2637_m13209_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t15_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t152_0_0_0;
extern void* RuntimeInvoker_t152_t5_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13209_GM;
MethodInfo m13209_MI = 
{
	"Invoke", (methodPointerType)&m13209, &t2637_TI, &t152_0_0_0, RuntimeInvoker_t152_t5_t152, t2637_m13209_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13209_GM};
extern Il2CppType t15_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2637_m13210_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t15_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t152_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13210_GM;
MethodInfo m13210_MI = 
{
	"BeginInvoke", (methodPointerType)&m13210, &t2637_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t152_t5_t5, t2637_m13210_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL, &m13210_GM};
extern Il2CppType t221_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t2637_m13211_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t152_0_0_0;
extern void* RuntimeInvoker_t152_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13211_GM;
MethodInfo m13211_MI = 
{
	"EndInvoke", (methodPointerType)&m13211, &t2637_TI, &t152_0_0_0, RuntimeInvoker_t152_t5, t2637_m13211_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13211_GM};
static MethodInfo* t2637_MIs[] =
{
	&m13208_MI,
	&m13209_MI,
	&m13210_MI,
	&m13211_MI,
	NULL
};
extern MethodInfo m2341_MI;
extern MethodInfo m2342_MI;
extern MethodInfo m2343_MI;
extern MethodInfo m2344_MI;
extern MethodInfo m2345_MI;
extern MethodInfo m2346_MI;
extern MethodInfo m2347_MI;
static MethodInfo* t2637_VT[] =
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
	&m13209_MI,
	&m13210_MI,
	&m13211_MI,
};
extern TypeInfo t516_TI;
extern TypeInfo t517_TI;
static Il2CppInterfaceOffsetPair t2637_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2637_0_0_0;
extern Il2CppType t2637_1_0_0;
extern TypeInfo t353_TI;
struct t2637;
extern Il2CppGenericClass t2637_GC;
TypeInfo t2637_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2637_MIs, NULL, NULL, NULL, &t353_TI, NULL, &t1517_TI, &t2637_TI, NULL, t2637_VT, &EmptyCustomAttributesCache, &t2637_TI, &t2637_0_0_0, &t2637_1_0_0, t2637_IOs, &t2637_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2637), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2625.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2625_TI;
#include "t2625MD.h"



extern MethodInfo m13212_MI;
 void m13212 (t2625 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m13213_MI;
 t990  m13213 (t2625 * __this, t15 * p0, int64_t p1, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m13213((t2625 *)__this->f9,p0, p1, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t990  (*FunctionPointerType) (t5 *, t5 * __this, t15 * p0, int64_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t990  (*FunctionPointerType) (t5 * __this, t15 * p0, int64_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t990  (*FunctionPointerType) (t5 * __this, int64_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern MethodInfo m13214_MI;
 t5 * m13214 (t2625 * __this, t15 * p0, int64_t p1, t222 * p2, t5 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t152_TI), &p1);
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m13215_MI;
 t990  m13215 (t2625 * __this, t5 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t990 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<JewelMine.Engine.Models.MarkedCollisionGroup,System.Int64,System.Collections.DictionaryEntry>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2625_m13212_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13212_GM;
MethodInfo m13212_MI = 
{
	".ctor", (methodPointerType)&m13212, &t2625_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2625_m13212_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13212_GM};
extern Il2CppType t15_0_0_0;
extern Il2CppType t152_0_0_0;
static ParameterInfo t2625_m13213_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t15_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t990_0_0_0;
extern void* RuntimeInvoker_t990_t5_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13213_GM;
MethodInfo m13213_MI = 
{
	"Invoke", (methodPointerType)&m13213, &t2625_TI, &t990_0_0_0, RuntimeInvoker_t990_t5_t152, t2625_m13213_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13213_GM};
extern Il2CppType t15_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2625_m13214_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t15_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t152_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13214_GM;
MethodInfo m13214_MI = 
{
	"BeginInvoke", (methodPointerType)&m13214, &t2625_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t152_t5_t5, t2625_m13214_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL, &m13214_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2625_m13215_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t990_0_0_0;
extern void* RuntimeInvoker_t990_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13215_GM;
MethodInfo m13215_MI = 
{
	"EndInvoke", (methodPointerType)&m13215, &t2625_TI, &t990_0_0_0, RuntimeInvoker_t990_t5, t2625_m13215_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13215_GM};
static MethodInfo* t2625_MIs[] =
{
	&m13212_MI,
	&m13213_MI,
	&m13214_MI,
	&m13215_MI,
	NULL
};
static MethodInfo* t2625_VT[] =
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
	&m13213_MI,
	&m13214_MI,
	&m13215_MI,
};
static Il2CppInterfaceOffsetPair t2625_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2625_0_0_0;
extern Il2CppType t2625_1_0_0;
struct t2625;
extern Il2CppGenericClass t2625_GC;
TypeInfo t2625_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2625_MIs, NULL, NULL, NULL, &t353_TI, NULL, &t1517_TI, &t2625_TI, NULL, t2625_VT, &EmptyCustomAttributesCache, &t2625_TI, &t2625_0_0_0, &t2625_1_0_0, t2625_IOs, &t2625_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2625), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4716_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.DictionaryEntry>
extern MethodInfo m31933_MI;
static PropertyInfo t4716____Current_PropertyInfo = 
{
	&t4716_TI, "Current", &m31933_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4716_PIs[] =
{
	&t4716____Current_PropertyInfo,
	NULL
};
extern Il2CppType t990_0_0_0;
extern void* RuntimeInvoker_t990 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31933_GM;
MethodInfo m31933_MI = 
{
	"get_Current", NULL, &t4716_TI, &t990_0_0_0, RuntimeInvoker_t990, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31933_GM};
static MethodInfo* t4716_MIs[] =
{
	&m31933_MI,
	NULL
};
static TypeInfo* t4716_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4716_0_0_0;
extern Il2CppType t4716_1_0_0;
struct t4716;
extern Il2CppGenericClass t4716_GC;
TypeInfo t4716_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4716_MIs, t4716_PIs, NULL, NULL, NULL, NULL, NULL, &t4716_TI, t4716_ITIs, NULL, &EmptyCustomAttributesCache, &t4716_TI, &t4716_0_0_0, &t4716_1_0_0, NULL, &t4716_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2638.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2638_TI;
#include "t2638MD.h"

extern MethodInfo m13220_MI;
extern MethodInfo m24295_MI;
struct t107;
 t990  m24295 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m13216_MI;
 void m13216 (t2638 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13217_MI;
 t5 * m13217 (t2638 * __this, MethodInfo* method){
	{
		t990  L_0 = m13220(__this, &m13220_MI);
		t990  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t990_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m13218_MI;
 void m13218 (t2638 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13219_MI;
 bool m13219 (t2638 * __this, MethodInfo* method){
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
 t990  m13220 (t2638 * __this, MethodInfo* method){
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
		t990  L_8 = m24295(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m24295_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>
extern Il2CppType t107_0_0_1;
FieldInfo t2638_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t2638_TI, offsetof(t2638, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2638_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2638_TI, offsetof(t2638, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2638_FIs[] =
{
	&t2638_f0_FieldInfo,
	&t2638_f1_FieldInfo,
	NULL
};
static PropertyInfo t2638____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2638_TI, "System.Collections.IEnumerator.Current", &m13217_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2638____Current_PropertyInfo = 
{
	&t2638_TI, "Current", &m13220_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2638_PIs[] =
{
	&t2638____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2638____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t2638_m13216_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13216_GM;
MethodInfo m13216_MI = 
{
	".ctor", (methodPointerType)&m13216, &t2638_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2638_m13216_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13216_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13217_GM;
MethodInfo m13217_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13217, &t2638_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13217_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13218_GM;
MethodInfo m13218_MI = 
{
	"Dispose", (methodPointerType)&m13218, &t2638_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13218_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13219_GM;
MethodInfo m13219_MI = 
{
	"MoveNext", (methodPointerType)&m13219, &t2638_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13219_GM};
extern Il2CppType t990_0_0_0;
extern void* RuntimeInvoker_t990 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13220_GM;
MethodInfo m13220_MI = 
{
	"get_Current", (methodPointerType)&m13220, &t2638_TI, &t990_0_0_0, RuntimeInvoker_t990, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13220_GM};
static MethodInfo* t2638_MIs[] =
{
	&m13216_MI,
	&m13217_MI,
	&m13218_MI,
	&m13219_MI,
	&m13220_MI,
	NULL
};
static MethodInfo* t2638_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m13217_MI,
	&m13219_MI,
	&m13218_MI,
	&m13220_MI,
};
static TypeInfo* t2638_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t4716_TI,
};
static Il2CppInterfaceOffsetPair t2638_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t4716_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2638_0_0_0;
extern Il2CppType t2638_1_0_0;
extern Il2CppGenericClass t2638_GC;
TypeInfo t2638_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2638_MIs, t2638_PIs, t2638_FIs, NULL, &t267_TI, NULL, &t107_TI, &t2638_TI, t2638_ITIs, t2638_VT, &EmptyCustomAttributesCache, &t2638_TI, &t2638_0_0_0, &t2638_1_0_0, t2638_IOs, &t2638_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2638)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5973_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>
extern MethodInfo m31934_MI;
static PropertyInfo t5973____Count_PropertyInfo = 
{
	&t5973_TI, "Count", &m31934_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m31935_MI;
static PropertyInfo t5973____IsReadOnly_PropertyInfo = 
{
	&t5973_TI, "IsReadOnly", &m31935_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5973_PIs[] =
{
	&t5973____Count_PropertyInfo,
	&t5973____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31934_GM;
MethodInfo m31934_MI = 
{
	"get_Count", NULL, &t5973_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31934_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31935_GM;
MethodInfo m31935_MI = 
{
	"get_IsReadOnly", NULL, &t5973_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31935_GM};
extern Il2CppType t990_0_0_0;
extern Il2CppType t990_0_0_0;
static ParameterInfo t5973_m31936_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t990_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t990 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31936_GM;
MethodInfo m31936_MI = 
{
	"Add", NULL, &t5973_TI, &t109_0_0_0, RuntimeInvoker_t109_t990, t5973_m31936_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31936_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31937_GM;
MethodInfo m31937_MI = 
{
	"Clear", NULL, &t5973_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31937_GM};
extern Il2CppType t990_0_0_0;
static ParameterInfo t5973_m31938_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t990_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t990 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31938_GM;
MethodInfo m31938_MI = 
{
	"Contains", NULL, &t5973_TI, &t108_0_0_0, RuntimeInvoker_t108_t990, t5973_m31938_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31938_GM};
extern Il2CppType t4182_0_0_0;
extern Il2CppType t4182_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t5973_m31939_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4182_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31939_GM;
MethodInfo m31939_MI = 
{
	"CopyTo", NULL, &t5973_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t5973_m31939_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31939_GM};
extern Il2CppType t990_0_0_0;
static ParameterInfo t5973_m31940_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t990_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t990 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31940_GM;
MethodInfo m31940_MI = 
{
	"Remove", NULL, &t5973_TI, &t108_0_0_0, RuntimeInvoker_t108_t990, t5973_m31940_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31940_GM};
static MethodInfo* t5973_MIs[] =
{
	&m31934_MI,
	&m31935_MI,
	&m31936_MI,
	&m31937_MI,
	&m31938_MI,
	&m31939_MI,
	&m31940_MI,
	NULL
};
extern TypeInfo t5975_TI;
static TypeInfo* t5973_ITIs[] = 
{
	&t739_TI,
	&t5975_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5973_0_0_0;
extern Il2CppType t5973_1_0_0;
struct t5973;
extern Il2CppGenericClass t5973_GC;
TypeInfo t5973_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5973_MIs, t5973_PIs, NULL, NULL, NULL, NULL, NULL, &t5973_TI, t5973_ITIs, NULL, &EmptyCustomAttributesCache, &t5973_TI, &t5973_0_0_0, &t5973_1_0_0, NULL, &t5973_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.DictionaryEntry>
extern Il2CppType t4716_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31941_GM;
MethodInfo m31941_MI = 
{
	"GetEnumerator", NULL, &t5975_TI, &t4716_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31941_GM};
static MethodInfo* t5975_MIs[] =
{
	&m31941_MI,
	NULL
};
static TypeInfo* t5975_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5975_0_0_0;
extern Il2CppType t5975_1_0_0;
struct t5975;
extern Il2CppGenericClass t5975_GC;
TypeInfo t5975_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5975_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5975_TI, t5975_ITIs, NULL, &EmptyCustomAttributesCache, &t5975_TI, &t5975_0_0_0, &t5975_1_0_0, NULL, &t5975_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5974_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.DictionaryEntry>
extern MethodInfo m31942_MI;
extern MethodInfo m31943_MI;
static PropertyInfo t5974____Item_PropertyInfo = 
{
	&t5974_TI, "Item", &m31942_MI, &m31943_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5974_PIs[] =
{
	&t5974____Item_PropertyInfo,
	NULL
};
extern Il2CppType t990_0_0_0;
static ParameterInfo t5974_m31944_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t990_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t990 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31944_GM;
MethodInfo m31944_MI = 
{
	"IndexOf", NULL, &t5974_TI, &t110_0_0_0, RuntimeInvoker_t110_t990, t5974_m31944_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31944_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t990_0_0_0;
static ParameterInfo t5974_m31945_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t990_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t990 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31945_GM;
MethodInfo m31945_MI = 
{
	"Insert", NULL, &t5974_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t990, t5974_m31945_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31945_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t5974_m31946_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31946_GM;
MethodInfo m31946_MI = 
{
	"RemoveAt", NULL, &t5974_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t5974_m31946_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31946_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t5974_m31942_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t990_0_0_0;
extern void* RuntimeInvoker_t990_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31942_GM;
MethodInfo m31942_MI = 
{
	"get_Item", NULL, &t5974_TI, &t990_0_0_0, RuntimeInvoker_t990_t110, t5974_m31942_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31942_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t990_0_0_0;
static ParameterInfo t5974_m31943_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t990_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t990 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31943_GM;
MethodInfo m31943_MI = 
{
	"set_Item", NULL, &t5974_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t990, t5974_m31943_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31943_GM};
static MethodInfo* t5974_MIs[] =
{
	&m31944_MI,
	&m31945_MI,
	&m31946_MI,
	&m31942_MI,
	&m31943_MI,
	NULL
};
static TypeInfo* t5974_ITIs[] = 
{
	&t739_TI,
	&t5973_TI,
	&t5975_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5974_0_0_0;
extern Il2CppType t5974_1_0_0;
struct t5974;
extern Il2CppGenericClass t5974_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t5974_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5974_MIs, t5974_PIs, NULL, NULL, NULL, NULL, NULL, &t5974_TI, t5974_ITIs, NULL, &t2240__CustomAttributeCache, &t5974_TI, &t5974_0_0_0, &t5974_1_0_0, NULL, &t5974_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2639.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2639_TI;
#include "t2639MD.h"



extern MethodInfo m13221_MI;
 void m13221 (t2639 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m13222_MI;
 t44  m13222 (t2639 * __this, t15 * p0, int64_t p1, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m13222((t2639 *)__this->f9,p0, p1, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t44  (*FunctionPointerType) (t5 *, t5 * __this, t15 * p0, int64_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t44  (*FunctionPointerType) (t5 * __this, t15 * p0, int64_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t44  (*FunctionPointerType) (t5 * __this, int64_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern MethodInfo m13223_MI;
 t5 * m13223 (t2639 * __this, t15 * p0, int64_t p1, t222 * p2, t5 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t152_TI), &p1);
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m13224_MI;
 t44  m13224 (t2639 * __this, t5 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t44 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<JewelMine.Engine.Models.MarkedCollisionGroup,System.Int64,System.Collections.Generic.KeyValuePair`2<JewelMine.Engine.Models.MarkedCollisionGroup,System.Int64>>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2639_m13221_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13221_GM;
MethodInfo m13221_MI = 
{
	".ctor", (methodPointerType)&m13221, &t2639_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2639_m13221_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13221_GM};
extern Il2CppType t15_0_0_0;
extern Il2CppType t152_0_0_0;
static ParameterInfo t2639_m13222_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t15_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t44_0_0_0;
extern void* RuntimeInvoker_t44_t5_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13222_GM;
MethodInfo m13222_MI = 
{
	"Invoke", (methodPointerType)&m13222, &t2639_TI, &t44_0_0_0, RuntimeInvoker_t44_t5_t152, t2639_m13222_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13222_GM};
extern Il2CppType t15_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2639_m13223_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t15_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t152_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13223_GM;
MethodInfo m13223_MI = 
{
	"BeginInvoke", (methodPointerType)&m13223, &t2639_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t152_t5_t5, t2639_m13223_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL, &m13223_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2639_m13224_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t44_0_0_0;
extern void* RuntimeInvoker_t44_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13224_GM;
MethodInfo m13224_MI = 
{
	"EndInvoke", (methodPointerType)&m13224, &t2639_TI, &t44_0_0_0, RuntimeInvoker_t44_t5, t2639_m13224_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13224_GM};
static MethodInfo* t2639_MIs[] =
{
	&m13221_MI,
	&m13222_MI,
	&m13223_MI,
	&m13224_MI,
	NULL
};
static MethodInfo* t2639_VT[] =
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
	&m13222_MI,
	&m13223_MI,
	&m13224_MI,
};
static Il2CppInterfaceOffsetPair t2639_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2639_0_0_0;
extern Il2CppType t2639_1_0_0;
struct t2639;
extern Il2CppGenericClass t2639_GC;
TypeInfo t2639_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2639_MIs, NULL, NULL, NULL, &t353_TI, NULL, &t1517_TI, &t2639_TI, NULL, t2639_VT, &EmptyCustomAttributesCache, &t2639_TI, &t2639_0_0_0, &t2639_1_0_0, t2639_IOs, &t2639_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2639), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2640.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2640_TI;
#include "t2640MD.h"

extern MethodInfo m11460_MI;
extern MethodInfo m13227_MI;


extern MethodInfo m13225_MI;
 void m13225 (t2640 * __this, t53 * p0, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		t2629  L_0 = m13150(p0, &m13150_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m13226_MI;
 bool m13226 (t2640 * __this, MethodInfo* method){
	{
		t2629 * L_0 = &(__this->f0);
		bool L_1 = m13201(L_0, &m13201_MI);
		return L_1;
	}
}
 t990  m13227 (t2640 * __this, MethodInfo* method){
	{
		t2629  L_0 = (__this->f0);
		t2629  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t2629_TI), &L_1);
		t990  L_3 = (t990 )InterfaceFuncInvoker0< t990  >::Invoke(&m11460_MI, L_2);
		return L_3;
	}
}
extern MethodInfo m13228_MI;
 t5 * m13228 (t2640 * __this, MethodInfo* method){
	t44  V_0 = {0};
	{
		t2629 * L_0 = &(__this->f0);
		t44  L_1 = m13202(L_0, &m13202_MI);
		V_0 = L_1;
		t15 * L_2 = m12775((&V_0), &m12775_MI);
		t15 * L_3 = L_2;
		return ((t15 *)L_3);
	}
}
extern MethodInfo m13229_MI;
 t5 * m13229 (t2640 * __this, MethodInfo* method){
	t44  V_0 = {0};
	{
		t2629 * L_0 = &(__this->f0);
		t44  L_1 = m13202(L_0, &m13202_MI);
		V_0 = L_1;
		int64_t L_2 = m567((&V_0), &m567_MI);
		int64_t L_3 = L_2;
		t5 * L_4 = Box(InitializedTypeInfo(&t152_TI), &L_3);
		return L_4;
	}
}
extern MethodInfo m13230_MI;
 t5 * m13230 (t2640 * __this, MethodInfo* method){
	{
		t990  L_0 = (t990 )VirtFuncInvoker0< t990  >::Invoke(&m13227_MI, __this);
		t990  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t990_TI), &L_1);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ShimEnumerator<JewelMine.Engine.Models.MarkedCollisionGroup,System.Int64>
extern Il2CppType t2629_0_0_1;
FieldInfo t2640_f0_FieldInfo = 
{
	"host_enumerator", &t2629_0_0_1, &t2640_TI, offsetof(t2640, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2640_FIs[] =
{
	&t2640_f0_FieldInfo,
	NULL
};
static PropertyInfo t2640____Entry_PropertyInfo = 
{
	&t2640_TI, "Entry", &m13227_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2640____Key_PropertyInfo = 
{
	&t2640_TI, "Key", &m13228_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2640____Value_PropertyInfo = 
{
	&t2640_TI, "Value", &m13229_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2640____Current_PropertyInfo = 
{
	&t2640_TI, "Current", &m13230_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2640_PIs[] =
{
	&t2640____Entry_PropertyInfo,
	&t2640____Key_PropertyInfo,
	&t2640____Value_PropertyInfo,
	&t2640____Current_PropertyInfo,
	NULL
};
extern Il2CppType t53_0_0_0;
static ParameterInfo t2640_m13225_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t53_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13225_GM;
MethodInfo m13225_MI = 
{
	".ctor", (methodPointerType)&m13225, &t2640_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2640_m13225_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13225_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13226_GM;
MethodInfo m13226_MI = 
{
	"MoveNext", (methodPointerType)&m13226, &t2640_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13226_GM};
extern Il2CppType t990_0_0_0;
extern void* RuntimeInvoker_t990 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13227_GM;
MethodInfo m13227_MI = 
{
	"get_Entry", (methodPointerType)&m13227, &t2640_TI, &t990_0_0_0, RuntimeInvoker_t990, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13227_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13228_GM;
MethodInfo m13228_MI = 
{
	"get_Key", (methodPointerType)&m13228, &t2640_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13228_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13229_GM;
MethodInfo m13229_MI = 
{
	"get_Value", (methodPointerType)&m13229, &t2640_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13229_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13230_GM;
MethodInfo m13230_MI = 
{
	"get_Current", (methodPointerType)&m13230, &t2640_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13230_GM};
static MethodInfo* t2640_MIs[] =
{
	&m13225_MI,
	&m13226_MI,
	&m13227_MI,
	&m13228_MI,
	&m13229_MI,
	&m13230_MI,
	NULL
};
static MethodInfo* t2640_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m13230_MI,
	&m13226_MI,
	&m13227_MI,
	&m13228_MI,
	&m13229_MI,
};
static TypeInfo* t2640_ITIs[] = 
{
	&t196_TI,
	&t987_TI,
};
static Il2CppInterfaceOffsetPair t2640_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t987_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2640_0_0_0;
extern Il2CppType t2640_1_0_0;
struct t2640;
extern Il2CppGenericClass t2640_GC;
TypeInfo t2640_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ShimEnumerator", "", t2640_MIs, t2640_PIs, t2640_FIs, NULL, &t5_TI, NULL, &t1517_TI, &t2640_TI, t2640_ITIs, t2640_VT, &EmptyCustomAttributesCache, &t2640_TI, &t2640_0_0_0, &t2640_1_0_0, t2640_IOs, &t2640_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2640), 0, -1, 0, 0, -1, 1056771, 0, false, false, false, false, true, false, false, false, false, false, false, false, 6, 4, 1, 0, 0, 9, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7554_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.Int64>
extern Il2CppType t152_0_0_0;
extern Il2CppType t152_0_0_0;
static ParameterInfo t7554_m31858_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t152_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31858_GM;
MethodInfo m31858_MI = 
{
	"Equals", NULL, &t7554_TI, &t108_0_0_0, RuntimeInvoker_t108_t152_t152, t7554_m31858_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31858_GM};
extern Il2CppType t152_0_0_0;
static ParameterInfo t7554_m31947_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31947_GM;
MethodInfo m31947_MI = 
{
	"GetHashCode", NULL, &t7554_TI, &t110_0_0_0, RuntimeInvoker_t110_t152, t7554_m31947_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31947_GM};
static MethodInfo* t7554_MIs[] =
{
	&m31858_MI,
	&m31947_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7554_0_0_0;
extern Il2CppType t7554_1_0_0;
struct t7554;
extern Il2CppGenericClass t7554_GC;
TypeInfo t7554_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t7554_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7554_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7554_TI, &t7554_0_0_0, &t7554_1_0_0, NULL, &t7554_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#include "t2641.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2641_TI;
#include "t2641MD.h"

#include "t1520.h"
#include "t2643.h"
extern TypeInfo t114_TI;
extern TypeInfo t1520_TI;
extern TypeInfo t675_TI;
extern TypeInfo t2643_TI;
#include "t114MD.h"
#include "t1196MD.h"
#include "t2643MD.h"
extern Il2CppType t1520_0_0_0;
extern MethodInfo m532_MI;
extern MethodInfo m3626_MI;
extern MethodInfo m3624_MI;
extern MethodInfo m10126_MI;
extern MethodInfo m13239_MI;
extern MethodInfo m31948_MI;
extern MethodInfo m31859_MI;


extern MethodInfo m13231_MI;
 void m13231 (t2641 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m13232_MI;
 void m13232 (t5 * __this, MethodInfo* method){
	t2643 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2643 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t2643_TI));
	m13239(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m13239_MI);
	((t2641_SFs*)InitializedTypeInfo(&t2641_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m13233_MI;
 int32_t m13233 (t2641 * __this, t5 * p0, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, int64_t >::Invoke(&m31948_MI, __this, ((*(int64_t*)((int64_t*)UnBox (p0, InitializedTypeInfo(&t152_TI))))));
		return L_0;
	}
}
extern MethodInfo m13234_MI;
 bool m13234 (t2641 * __this, t5 * p0, t5 * p1, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, int64_t, int64_t >::Invoke(&m31859_MI, __this, ((*(int64_t*)((int64_t*)UnBox (p0, InitializedTypeInfo(&t152_TI))))), ((*(int64_t*)((int64_t*)UnBox (p1, InitializedTypeInfo(&t152_TI))))));
		return L_0;
	}
}
extern MethodInfo m13235_MI;
 t2641 * m13235 (t5 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2641_TI));
		return (((t2641_SFs*)InitializedTypeInfo(&t2641_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.Int64>
extern Il2CppType t2641_0_0_49;
FieldInfo t2641_f0_FieldInfo = 
{
	"_default", &t2641_0_0_49, &t2641_TI, offsetof(t2641_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2641_FIs[] =
{
	&t2641_f0_FieldInfo,
	NULL
};
static PropertyInfo t2641____Default_PropertyInfo = 
{
	&t2641_TI, "Default", &m13235_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2641_PIs[] =
{
	&t2641____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13231_GM;
MethodInfo m13231_MI = 
{
	".ctor", (methodPointerType)&m13231, &t2641_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13231_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13232_GM;
MethodInfo m13232_MI = 
{
	".cctor", (methodPointerType)&m13232, &t2641_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13232_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2641_m13233_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13233_GM;
MethodInfo m13233_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m13233, &t2641_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2641_m13233_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13233_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2641_m13234_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13234_GM;
MethodInfo m13234_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m13234, &t2641_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2641_m13234_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13234_GM};
extern Il2CppType t152_0_0_0;
static ParameterInfo t2641_m31948_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31948_GM;
MethodInfo m31948_MI = 
{
	"GetHashCode", NULL, &t2641_TI, &t110_0_0_0, RuntimeInvoker_t110_t152, t2641_m31948_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31948_GM};
extern Il2CppType t152_0_0_0;
extern Il2CppType t152_0_0_0;
static ParameterInfo t2641_m31859_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t152_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31859_GM;
MethodInfo m31859_MI = 
{
	"Equals", NULL, &t2641_TI, &t108_0_0_0, RuntimeInvoker_t108_t152_t152, t2641_m31859_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31859_GM};
extern Il2CppType t2641_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13235_GM;
MethodInfo m13235_MI = 
{
	"get_Default", (methodPointerType)&m13235, &t2641_TI, &t2641_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13235_GM};
static MethodInfo* t2641_MIs[] =
{
	&m13231_MI,
	&m13232_MI,
	&m13233_MI,
	&m13234_MI,
	&m31948_MI,
	&m31859_MI,
	&m13235_MI,
	NULL
};
static MethodInfo* t2641_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m31859_MI,
	&m31948_MI,
	&m13234_MI,
	&m13233_MI,
	NULL,
	NULL,
};
extern TypeInfo t998_TI;
static TypeInfo* t2641_ITIs[] = 
{
	&t7554_TI,
	&t998_TI,
};
static Il2CppInterfaceOffsetPair t2641_IOs[] = 
{
	{ &t7554_TI, 4},
	{ &t998_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2641_0_0_0;
extern Il2CppType t2641_1_0_0;
struct t2641;
extern Il2CppGenericClass t2641_GC;
TypeInfo t2641_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2641_MIs, t2641_PIs, t2641_FIs, NULL, &t5_TI, NULL, NULL, &t2641_TI, t2641_ITIs, t2641_VT, &EmptyCustomAttributesCache, &t2641_TI, &t2641_0_0_0, &t2641_1_0_0, t2641_IOs, &t2641_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2641), 0, -1, sizeof(t2641_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#include "t2642.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2642_TI;
#include "t2642MD.h"

extern MethodInfo m31927_MI;


extern MethodInfo m13236_MI;
 void m13236 (t2642 * __this, MethodInfo* method){
	{
		m13231(__this, &m13231_MI);
		return;
	}
}
extern MethodInfo m13237_MI;
 int32_t m13237 (t2642 * __this, int64_t p0, MethodInfo* method){
	{
		int64_t L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t152_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m466_MI, Box(InitializedTypeInfo(&t152_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m13238_MI;
 bool m13238 (t2642 * __this, int64_t p0, int64_t p1, MethodInfo* method){
	{
		int64_t L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t152_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		int64_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t152_TI), &L_2);
		return ((((t5 *)L_3) == ((t5 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, int64_t >::Invoke(&m31927_MI, Box(InitializedTypeInfo(&t152_TI), &(*(&p0))), p1);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.Int64>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13236_GM;
MethodInfo m13236_MI = 
{
	".ctor", (methodPointerType)&m13236, &t2642_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13236_GM};
extern Il2CppType t152_0_0_0;
static ParameterInfo t2642_m13237_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13237_GM;
MethodInfo m13237_MI = 
{
	"GetHashCode", (methodPointerType)&m13237, &t2642_TI, &t110_0_0_0, RuntimeInvoker_t110_t152, t2642_m13237_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13237_GM};
extern Il2CppType t152_0_0_0;
extern Il2CppType t152_0_0_0;
static ParameterInfo t2642_m13238_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t152_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13238_GM;
MethodInfo m13238_MI = 
{
	"Equals", (methodPointerType)&m13238, &t2642_TI, &t108_0_0_0, RuntimeInvoker_t108_t152_t152, t2642_m13238_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13238_GM};
static MethodInfo* t2642_MIs[] =
{
	&m13236_MI,
	&m13237_MI,
	&m13238_MI,
	NULL
};
static MethodInfo* t2642_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m13238_MI,
	&m13237_MI,
	&m13234_MI,
	&m13233_MI,
	&m13237_MI,
	&m13238_MI,
};
static Il2CppInterfaceOffsetPair t2642_IOs[] = 
{
	{ &t7554_TI, 4},
	{ &t998_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2642_0_0_0;
extern Il2CppType t2642_1_0_0;
struct t2642;
extern Il2CppGenericClass t2642_GC;
TypeInfo t2642_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericEqualityComparer`1", "System.Collections.Generic", t2642_MIs, NULL, NULL, NULL, &t2641_TI, NULL, NULL, &t2642_TI, NULL, t2642_VT, &EmptyCustomAttributesCache, &t2642_TI, &t2642_0_0_0, &t2642_1_0_0, t2642_IOs, &t2642_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2642), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif



 void m13239 (t2643 * __this, MethodInfo* method){
	{
		m13231(__this, &m13231_MI);
		return;
	}
}
extern MethodInfo m13240_MI;
 int32_t m13240 (t2643 * __this, int64_t p0, MethodInfo* method){
	{
		int64_t L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t152_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m466_MI, Box(InitializedTypeInfo(&t152_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m13241_MI;
 bool m13241 (t2643 * __this, int64_t p0, int64_t p1, MethodInfo* method){
	{
		int64_t L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t152_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		int64_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t152_TI), &L_2);
		return ((((t5 *)L_3) == ((t5 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		int64_t L_4 = p1;
		t5 * L_5 = Box(InitializedTypeInfo(&t152_TI), &L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t152_TI), &(*(&p0))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13239_GM;
MethodInfo m13239_MI = 
{
	".ctor", (methodPointerType)&m13239, &t2643_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13239_GM};
extern Il2CppType t152_0_0_0;
static ParameterInfo t2643_m13240_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13240_GM;
MethodInfo m13240_MI = 
{
	"GetHashCode", (methodPointerType)&m13240, &t2643_TI, &t110_0_0_0, RuntimeInvoker_t110_t152, t2643_m13240_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13240_GM};
extern Il2CppType t152_0_0_0;
extern Il2CppType t152_0_0_0;
static ParameterInfo t2643_m13241_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t152_t152 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13241_GM;
MethodInfo m13241_MI = 
{
	"Equals", (methodPointerType)&m13241, &t2643_TI, &t108_0_0_0, RuntimeInvoker_t108_t152_t152, t2643_m13241_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13241_GM};
static MethodInfo* t2643_MIs[] =
{
	&m13239_MI,
	&m13240_MI,
	&m13241_MI,
	NULL
};
static MethodInfo* t2643_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m13241_MI,
	&m13240_MI,
	&m13234_MI,
	&m13233_MI,
	&m13240_MI,
	&m13241_MI,
};
static Il2CppInterfaceOffsetPair t2643_IOs[] = 
{
	{ &t7554_TI, 4},
	{ &t998_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2643_0_0_0;
extern Il2CppType t2643_1_0_0;
struct t2643;
extern Il2CppGenericClass t2643_GC;
extern TypeInfo t1519_TI;
TypeInfo t2643_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2643_MIs, NULL, NULL, NULL, &t2641_TI, NULL, &t1519_TI, &t2643_TI, NULL, t2643_VT, &EmptyCustomAttributesCache, &t2643_TI, &t2643_0_0_0, &t2643_1_0_0, t2643_IOs, &t2643_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2643), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t2644.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2644_TI;
#include "t2644MD.h"

#include "t141.h"
#include "t490.h"
extern TypeInfo t492_TI;
extern TypeInfo t2459_TI;
extern TypeInfo t141_TI;
#include "t1927MD.h"
#include "t141MD.h"
extern MethodInfo m13246_MI;
extern MethodInfo m10031_MI;
extern MethodInfo m13242_MI;
extern MethodInfo m24087_MI;
extern MethodInfo m24088_MI;
extern MethodInfo m12558_MI;
extern MethodInfo m746_MI;
extern MethodInfo m516_MI;


 void m13242_gshared (t2644 * __this, MethodInfo* method)
{
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m13243_MI;
 t5 * m13243_gshared (t2644 * __this, MethodInfo* method)
{
	{
		t5 * L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m13244_MI;
 t5 * m13244_gshared (t2644 * __this, MethodInfo* method)
{
	{
		t5 * L_0 = (__this->f5);
		t5 * L_1 = L_0;
		return ((t5 *)L_1);
	}
}
extern MethodInfo m13245_MI;
 t5 * m13245_gshared (t2644 * __this, MethodInfo* method)
{
	{
		t5* L_0 = (t5*)VirtFuncInvoker0< t5* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), __this);
		return L_0;
	}
}
 t5* m13246_gshared (t2644 * __this, MethodInfo* method)
{
	t2644 * V_0 = {0};
	{
		int32_t* L_0 = &(__this->f4);
		int32_t L_1 = m10031(NULL, L_0, 0, ((int32_t)-2), &m10031_MI);
		if ((((uint32_t)L_1) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		t2644 * L_2 = (t2644 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (t2644 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_2;
		t5* L_3 = (__this->f6);
		V_0->f0 = L_3;
		t141 * L_4 = (__this->f7);
		V_0->f3 = L_4;
		return V_0;
	}
}
extern MethodInfo m13247_MI;
 bool m13247_gshared (t2644 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		int32_t L_0 = (__this->f4);
		V_0 = L_0;
		__this->f4 = (-1);
		V_1 = 0;
		if (V_0 == 0)
		{
			goto IL_0023;
		}
		if (V_0 == 1)
		{
			goto IL_0037;
		}
	}
	{
		goto IL_00be;
	}

IL_0023:
	{
		t5* L_1 = (__this->f0);
		t5* L_2 = (t5*)InterfaceFuncInvoker0< t5* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_1);
		__this->f1 = L_2;
		V_0 = ((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			if (((uint32_t)(V_0-1)) == 0)
			{
				goto IL_0089;
			}
		}

IL_0043:
		{
			goto IL_0089;
		}

IL_0048:
		{
			t5* L_3 = (__this->f1);
			t5 * L_4 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_3);
			__this->f2 = L_4;
			t141 * L_5 = (__this->f3);
			t5 * L_6 = (__this->f2);
			bool L_7 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), L_5, L_6);
			if (!L_7)
			{
				goto IL_0089;
			}
		}

IL_006f:
		{
			t5 * L_8 = (__this->f2);
			__this->f5 = L_8;
			__this->f4 = 1;
			V_1 = 1;
			// IL_0084: leave IL_00c0
			leaveInstructions[0] = 0xC0; // 1
			THROW_SENTINEL(IL_00c0);
			// finally target depth: 1
		}

IL_0089:
		{
			t5* L_9 = (__this->f1);
			bool L_10 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m746_MI, L_9);
			if (L_10)
			{
				goto IL_0048;
			}
		}

IL_0099:
		{
			// IL_0099: leave IL_00b7
			leaveInstructions[0] = 0xB7; // 1
			THROW_SENTINEL(IL_00b7);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_009e;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_009e;
	}

IL_009e:
	{ // begin finally (depth: 1)
		{
			if (!V_1)
			{
				goto IL_00a2;
			}
		}

IL_00a1:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xC0:
					goto IL_00c0;
				case 0xB7:
					goto IL_00b7;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					t142 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}

IL_00a2:
		{
			t5* L_11 = (__this->f1);
			if (L_11)
			{
				goto IL_00ab;
			}
		}

IL_00aa:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xC0:
					goto IL_00c0;
				case 0xB7:
					goto IL_00b7;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					t142 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}

IL_00ab:
		{
			t5* L_12 = (__this->f1);
			InterfaceActionInvoker0::Invoke(&m516_MI, L_12);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xC0:
					goto IL_00c0;
				case 0xB7:
					goto IL_00b7;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					t142 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}
	} // end finally (depth: 1)

IL_00b7:
	{
		__this->f4 = (-1);
	}

IL_00be:
	{
		return 0;
	}

IL_00c0:
	{
		return 1;
	}
	// Dead block : IL_00c2: ldloc.2
}
extern MethodInfo m13248_MI;
 void m13248_gshared (t2644 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		int32_t L_0 = (__this->f4);
		V_0 = L_0;
		__this->f4 = (-1);
		if (V_0 == 0)
		{
			goto IL_003b;
		}
		if (V_0 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_003b;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		// IL_0021: leave IL_003b
		leaveInstructions[0] = 0x3B; // 1
		THROW_SENTINEL(IL_003b);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0026;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_0026;
	}

IL_0026:
	{ // begin finally (depth: 1)
		{
			t5* L_1 = (__this->f1);
			if (L_1)
			{
				goto IL_002f;
			}
		}

IL_002e:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x3B:
					goto IL_003b;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					t142 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}

IL_002f:
		{
			t5* L_2 = (__this->f1);
			InterfaceActionInvoker0::Invoke(&m516_MI, L_2);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x3B:
					goto IL_003b;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					t142 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}
	} // end finally (depth: 1)

IL_003b:
	{
		return;
	}
}
// Metadata Definition System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>
extern Il2CppType t2459_0_0_3;
FieldInfo t2644_f0_FieldInfo = 
{
	"source", &t2459_0_0_3, &t2644_TI, offsetof(t2644, f0), &EmptyCustomAttributesCache};
extern Il2CppType t492_0_0_3;
FieldInfo t2644_f1_FieldInfo = 
{
	"<$s_97>__0", &t492_0_0_3, &t2644_TI, offsetof(t2644, f1), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_3;
FieldInfo t2644_f2_FieldInfo = 
{
	"<element>__1", &t5_0_0_3, &t2644_TI, offsetof(t2644, f2), &EmptyCustomAttributesCache};
extern Il2CppType t141_0_0_3;
FieldInfo t2644_f3_FieldInfo = 
{
	"predicate", &t141_0_0_3, &t2644_TI, offsetof(t2644, f3), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_3;
FieldInfo t2644_f4_FieldInfo = 
{
	"$PC", &t110_0_0_3, &t2644_TI, offsetof(t2644, f4), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_3;
FieldInfo t2644_f5_FieldInfo = 
{
	"$current", &t5_0_0_3, &t2644_TI, offsetof(t2644, f5), &EmptyCustomAttributesCache};
extern Il2CppType t2459_0_0_3;
FieldInfo t2644_f6_FieldInfo = 
{
	"<$>source", &t2459_0_0_3, &t2644_TI, offsetof(t2644, f6), &EmptyCustomAttributesCache};
extern Il2CppType t141_0_0_3;
FieldInfo t2644_f7_FieldInfo = 
{
	"<$>predicate", &t141_0_0_3, &t2644_TI, offsetof(t2644, f7), &EmptyCustomAttributesCache};
static FieldInfo* t2644_FIs[] =
{
	&t2644_f0_FieldInfo,
	&t2644_f1_FieldInfo,
	&t2644_f2_FieldInfo,
	&t2644_f3_FieldInfo,
	&t2644_f4_FieldInfo,
	&t2644_f5_FieldInfo,
	&t2644_f6_FieldInfo,
	&t2644_f7_FieldInfo,
	NULL
};
static PropertyInfo t2644____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo = 
{
	&t2644_TI, "System.Collections.Generic.IEnumerator<TSource>.Current", &m13243_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2644____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2644_TI, "System.Collections.IEnumerator.Current", &m13244_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2644_PIs[] =
{
	&t2644____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo,
	&t2644____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13242_GM;
MethodInfo m13242_MI = 
{
	".ctor", (methodPointerType)&m13242_gshared, &t2644_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13242_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t834__CustomAttributeCache_m3738;
extern Il2CppGenericMethod m13243_GM;
MethodInfo m13243_MI = 
{
	"System.Collections.Generic.IEnumerator<TSource>.get_Current", (methodPointerType)&m13243_gshared, &t2644_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &t834__CustomAttributeCache_m3738, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13243_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t834__CustomAttributeCache_m3739;
extern Il2CppGenericMethod m13244_GM;
MethodInfo m13244_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13244_gshared, &t2644_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &t834__CustomAttributeCache_m3739, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13244_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t834__CustomAttributeCache_m3740;
extern Il2CppGenericMethod m13245_GM;
MethodInfo m13245_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m13245_gshared, &t2644_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &t834__CustomAttributeCache_m3740, 481, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13245_GM};
extern Il2CppType t492_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t834__CustomAttributeCache_m3741;
extern Il2CppGenericMethod m13246_GM;
MethodInfo m13246_MI = 
{
	"System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", (methodPointerType)&m13246_gshared, &t2644_TI, &t492_0_0_0, RuntimeInvoker_t5, NULL, &t834__CustomAttributeCache_m3741, 481, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13246_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13247_GM;
MethodInfo m13247_MI = 
{
	"MoveNext", (methodPointerType)&m13247_gshared, &t2644_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13247_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t834__CustomAttributeCache_m3743;
extern Il2CppGenericMethod m13248_GM;
MethodInfo m13248_MI = 
{
	"Dispose", (methodPointerType)&m13248_gshared, &t2644_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &t834__CustomAttributeCache_m3743, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13248_GM};
static MethodInfo* t2644_MIs[] =
{
	&m13242_MI,
	&m13243_MI,
	&m13244_MI,
	&m13245_MI,
	&m13246_MI,
	&m13247_MI,
	&m13248_MI,
	NULL
};
static MethodInfo* t2644_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m13244_MI,
	&m13247_MI,
	&m13248_MI,
	&m13245_MI,
	&m13246_MI,
	&m13243_MI,
};
static TypeInfo* t2644_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t739_TI,
	&t2459_TI,
	&t492_TI,
};
static Il2CppInterfaceOffsetPair t2644_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t739_TI, 7},
	{ &t2459_TI, 8},
	{ &t492_TI, 9},
};
extern TypeInfo t5_TI;
extern TypeInfo t2644_TI;
static Il2CppRGCTXData t2644_RGCTXData[7] = 
{
	&t5_TI/* Class Usage */,
	&m13246_MI/* Method Usage */,
	&t2644_TI/* Class Usage */,
	&m13242_MI/* Method Usage */,
	&m24087_MI/* Method Usage */,
	&m24088_MI/* Method Usage */,
	&m12558_MI/* Method Usage */,
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t2644_0_0_0;
extern Il2CppType t2644_1_0_0;
struct t2644;
extern Il2CppGenericClass t2644_GC;
extern TypeInfo t125_TI;
extern CustomAttributesCache t834__CustomAttributeCache;
extern CustomAttributesCache t834__CustomAttributeCache_m3738;
extern CustomAttributesCache t834__CustomAttributeCache_m3739;
extern CustomAttributesCache t834__CustomAttributeCache_m3740;
extern CustomAttributesCache t834__CustomAttributeCache_m3741;
extern CustomAttributesCache t834__CustomAttributeCache_m3743;
TypeInfo t2644_TI = 
{
	&g_System_Core_dll_Image, NULL, "<CreateWhereIterator>c__Iterator1D`1", "", t2644_MIs, t2644_PIs, t2644_FIs, NULL, &t5_TI, NULL, &t125_TI, &t2644_TI, t2644_ITIs, t2644_VT, &t834__CustomAttributeCache, &t2644_TI, &t2644_0_0_0, &t2644_1_0_0, t2644_IOs, &t2644_GC, NULL, NULL, NULL, t2644_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2644), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 8, 0, 0, 10, 5, 5};
#include "t2645.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2645_TI;
#include "t2645MD.h"

#include "t130.h"
extern TypeInfo t2539_TI;
extern TypeInfo t2538_TI;
extern TypeInfo t130_TI;
#include "t130MD.h"
extern MethodInfo m13253_MI;
extern MethodInfo m13249_MI;
extern MethodInfo m24105_MI;
extern MethodInfo m24106_MI;
extern MethodInfo m12563_MI;


// Metadata Definition System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<JewelMine.Engine.Models.MarkedCollisionGroup>
extern Il2CppType t2538_0_0_3;
FieldInfo t2645_f0_FieldInfo = 
{
	"source", &t2538_0_0_3, &t2645_TI, offsetof(t2645, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2539_0_0_3;
FieldInfo t2645_f1_FieldInfo = 
{
	"<$s_97>__0", &t2539_0_0_3, &t2645_TI, offsetof(t2645, f1), &EmptyCustomAttributesCache};
extern Il2CppType t15_0_0_3;
FieldInfo t2645_f2_FieldInfo = 
{
	"<element>__1", &t15_0_0_3, &t2645_TI, offsetof(t2645, f2), &EmptyCustomAttributesCache};
extern Il2CppType t130_0_0_3;
FieldInfo t2645_f3_FieldInfo = 
{
	"predicate", &t130_0_0_3, &t2645_TI, offsetof(t2645, f3), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_3;
FieldInfo t2645_f4_FieldInfo = 
{
	"$PC", &t110_0_0_3, &t2645_TI, offsetof(t2645, f4), &EmptyCustomAttributesCache};
extern Il2CppType t15_0_0_3;
FieldInfo t2645_f5_FieldInfo = 
{
	"$current", &t15_0_0_3, &t2645_TI, offsetof(t2645, f5), &EmptyCustomAttributesCache};
extern Il2CppType t2538_0_0_3;
FieldInfo t2645_f6_FieldInfo = 
{
	"<$>source", &t2538_0_0_3, &t2645_TI, offsetof(t2645, f6), &EmptyCustomAttributesCache};
extern Il2CppType t130_0_0_3;
FieldInfo t2645_f7_FieldInfo = 
{
	"<$>predicate", &t130_0_0_3, &t2645_TI, offsetof(t2645, f7), &EmptyCustomAttributesCache};
static FieldInfo* t2645_FIs[] =
{
	&t2645_f0_FieldInfo,
	&t2645_f1_FieldInfo,
	&t2645_f2_FieldInfo,
	&t2645_f3_FieldInfo,
	&t2645_f4_FieldInfo,
	&t2645_f5_FieldInfo,
	&t2645_f6_FieldInfo,
	&t2645_f7_FieldInfo,
	NULL
};
extern MethodInfo m13250_MI;
static PropertyInfo t2645____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo = 
{
	&t2645_TI, "System.Collections.Generic.IEnumerator<TSource>.Current", &m13250_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13251_MI;
static PropertyInfo t2645____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2645_TI, "System.Collections.IEnumerator.Current", &m13251_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2645_PIs[] =
{
	&t2645____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo,
	&t2645____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13249_GM;
MethodInfo m13249_MI = 
{
	".ctor", (methodPointerType)&m13242_gshared, &t2645_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13249_GM};
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t834__CustomAttributeCache_m3738;
extern Il2CppGenericMethod m13250_GM;
MethodInfo m13250_MI = 
{
	"System.Collections.Generic.IEnumerator<TSource>.get_Current", (methodPointerType)&m13243_gshared, &t2645_TI, &t15_0_0_0, RuntimeInvoker_t5, NULL, &t834__CustomAttributeCache_m3738, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13250_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t834__CustomAttributeCache_m3739;
extern Il2CppGenericMethod m13251_GM;
MethodInfo m13251_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13244_gshared, &t2645_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &t834__CustomAttributeCache_m3739, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13251_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t834__CustomAttributeCache_m3740;
extern Il2CppGenericMethod m13252_GM;
MethodInfo m13252_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m13245_gshared, &t2645_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &t834__CustomAttributeCache_m3740, 481, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13252_GM};
extern Il2CppType t2539_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t834__CustomAttributeCache_m3741;
extern Il2CppGenericMethod m13253_GM;
MethodInfo m13253_MI = 
{
	"System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", (methodPointerType)&m13246_gshared, &t2645_TI, &t2539_0_0_0, RuntimeInvoker_t5, NULL, &t834__CustomAttributeCache_m3741, 481, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13253_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13254_GM;
MethodInfo m13254_MI = 
{
	"MoveNext", (methodPointerType)&m13247_gshared, &t2645_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13254_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t834__CustomAttributeCache_m3743;
extern Il2CppGenericMethod m13255_GM;
MethodInfo m13255_MI = 
{
	"Dispose", (methodPointerType)&m13248_gshared, &t2645_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &t834__CustomAttributeCache_m3743, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13255_GM};
static MethodInfo* t2645_MIs[] =
{
	&m13249_MI,
	&m13250_MI,
	&m13251_MI,
	&m13252_MI,
	&m13253_MI,
	&m13254_MI,
	&m13255_MI,
	NULL
};
extern MethodInfo m13254_MI;
extern MethodInfo m13255_MI;
extern MethodInfo m13252_MI;
static MethodInfo* t2645_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m13251_MI,
	&m13254_MI,
	&m13255_MI,
	&m13252_MI,
	&m13253_MI,
	&m13250_MI,
};
static TypeInfo* t2645_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t739_TI,
	&t2538_TI,
	&t2539_TI,
};
static Il2CppInterfaceOffsetPair t2645_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t739_TI, 7},
	{ &t2538_TI, 8},
	{ &t2539_TI, 9},
};
extern TypeInfo t15_TI;
extern TypeInfo t2645_TI;
static Il2CppRGCTXData t2645_RGCTXData[7] = 
{
	&t15_TI/* Class Usage */,
	&m13253_MI/* Method Usage */,
	&t2645_TI/* Class Usage */,
	&m13249_MI/* Method Usage */,
	&m24105_MI/* Method Usage */,
	&m24106_MI/* Method Usage */,
	&m12563_MI/* Method Usage */,
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t2645_0_0_0;
extern Il2CppType t2645_1_0_0;
struct t2645;
extern Il2CppGenericClass t2645_GC;
extern CustomAttributesCache t834__CustomAttributeCache;
extern CustomAttributesCache t834__CustomAttributeCache_m3738;
extern CustomAttributesCache t834__CustomAttributeCache_m3739;
extern CustomAttributesCache t834__CustomAttributeCache_m3740;
extern CustomAttributesCache t834__CustomAttributeCache_m3741;
extern CustomAttributesCache t834__CustomAttributeCache_m3743;
TypeInfo t2645_TI = 
{
	&g_System_Core_dll_Image, NULL, "<CreateWhereIterator>c__Iterator1D`1", "", t2645_MIs, t2645_PIs, t2645_FIs, NULL, &t5_TI, NULL, &t125_TI, &t2645_TI, t2645_ITIs, t2645_VT, &t834__CustomAttributeCache, &t2645_TI, &t2645_0_0_0, &t2645_1_0_0, t2645_IOs, &t2645_GC, NULL, NULL, NULL, t2645_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2645), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 8, 0, 0, 10, 5, 5};
#include "t157.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t157_TI;
#include "t157MD.h"



extern MethodInfo m597_MI;
 void m597 (t157 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m13256_MI;
 void m13256 (t157 * __this, t44  p0, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m13256((t157 *)__this->f9,p0, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t5 *, t5 * __this, t44  p0, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	typedef void (*FunctionPointerType) (t5 * __this, t44  p0, MethodInfo* method);
	((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m13257_MI;
 t5 * m13257 (t157 * __this, t44  p0, t222 * p1, t5 * p2, MethodInfo* method){
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t44_TI), &p0);
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m13258_MI;
 void m13258 (t157 * __this, t5 * p0, MethodInfo* method){
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
// Metadata Definition System.Action`1<System.Collections.Generic.KeyValuePair`2<JewelMine.Engine.Models.MarkedCollisionGroup,System.Int64>>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t157_m597_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m597_GM;
MethodInfo m597_MI = 
{
	".ctor", (methodPointerType)&m597, &t157_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t157_m597_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m597_GM};
extern Il2CppType t44_0_0_0;
static ParameterInfo t157_m13256_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t44_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t44 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13256_GM;
MethodInfo m13256_MI = 
{
	"Invoke", (methodPointerType)&m13256, &t157_TI, &t109_0_0_0, RuntimeInvoker_t109_t44, t157_m13256_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13256_GM};
extern Il2CppType t44_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t157_m13257_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t44_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t44_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13257_GM;
MethodInfo m13257_MI = 
{
	"BeginInvoke", (methodPointerType)&m13257, &t157_TI, &t221_0_0_0, RuntimeInvoker_t5_t44_t5_t5, t157_m13257_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m13257_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t157_m13258_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13258_GM;
MethodInfo m13258_MI = 
{
	"EndInvoke", (methodPointerType)&m13258, &t157_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t157_m13258_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13258_GM};
static MethodInfo* t157_MIs[] =
{
	&m597_MI,
	&m13256_MI,
	&m13257_MI,
	&m13258_MI,
	NULL
};
static MethodInfo* t157_VT[] =
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
	&m13256_MI,
	&m13257_MI,
	&m13258_MI,
};
static Il2CppInterfaceOffsetPair t157_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t157_0_0_0;
extern Il2CppType t157_1_0_0;
struct t157;
extern Il2CppGenericClass t157_GC;
TypeInfo t157_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Action`1", "System", t157_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t157_TI, NULL, t157_VT, &EmptyCustomAttributesCache, &t157_TI, &t157_0_0_0, &t157_1_0_0, t157_IOs, &t157_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t157), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t64.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t64_TI;
#include "t64MD.h"

#include "t74.h"
#include "t2652.h"
#include "t2648.h"
#include "t2649.h"
#include "t2650.h"
#include "t2658.h"
#include "t2651.h"
extern TypeInfo t74_TI;
extern TypeInfo t160_TI;
extern TypeInfo t723_TI;
extern TypeInfo t1982_TI;
extern TypeInfo t1181_TI;
extern TypeInfo t2647_TI;
extern TypeInfo t2646_TI;
extern TypeInfo t2652_TI;
extern TypeInfo t194_TI;
extern TypeInfo t195_TI;
extern TypeInfo t2648_TI;
extern TypeInfo t2649_TI;
extern TypeInfo t2650_TI;
extern TypeInfo t2658_TI;
#include "t160MD.h"
#include "t1181MD.h"
#include "t166MD.h"
#include "t2648MD.h"
#include "t2649MD.h"
#include "t2650MD.h"
#include "t2652MD.h"
#include "t2658MD.h"
extern MethodInfo m13306_MI;
extern MethodInfo m13307_MI;
extern MethodInfo m2581_MI;
extern MethodInfo m4991_MI;
extern MethodInfo m24330_MI;
extern MethodInfo m4767_MI;
extern MethodInfo m13292_MI;
extern MethodInfo m13294_MI;
extern MethodInfo m13279_MI;
extern MethodInfo m31949_MI;
extern MethodInfo m13278_MI;
extern MethodInfo m13289_MI;
extern MethodInfo m6741_MI;
extern MethodInfo m603_MI;
extern MethodInfo m13283_MI;
extern MethodInfo m13290_MI;
extern MethodInfo m13293_MI;
extern MethodInfo m13295_MI;
extern MethodInfo m13277_MI;
extern MethodInfo m13303_MI;
extern MethodInfo m5931_MI;
extern MethodInfo m13304_MI;
extern MethodInfo m31950_MI;
extern MethodInfo m742_MI;
extern MethodInfo m743_MI;
extern MethodInfo m13319_MI;
extern MethodInfo m5904_MI;
extern MethodInfo m24332_MI;
extern MethodInfo m13286_MI;
extern MethodInfo m13287_MI;
extern MethodInfo m13394_MI;
extern MethodInfo m13398_MI;
extern MethodInfo m13313_MI;
extern MethodInfo m13291_MI;
extern MethodInfo m13297_MI;
extern MethodInfo m5963_MI;
extern MethodInfo m13404_MI;
extern MethodInfo m24334_MI;
extern MethodInfo m24342_MI;
extern MethodInfo m6740_MI;
struct t107;
struct t107;
 void m23607_gshared (t5 * __this, t168** p0, int32_t p1, MethodInfo* method);
#define m23607(__this, p0, p1, method) (void)m23607_gshared((t5 *)__this, (t168**)p0, (int32_t)p1, method)
#define m24330(__this, p0, p1, method) (void)m23607_gshared((t5 *)__this, (t168**)p0, (int32_t)p1, method)
struct t107;
#include "t2656.h"
struct t107;
#include "t2334.h"
 int32_t m11458_gshared (t5 * __this, t168* p0, t5 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m11458(__this, p0, p1, p2, p3, method) (int32_t)m11458_gshared((t5 *)__this, (t168*)p0, (t5 *)p1, (int32_t)p2, (int32_t)p3, method)
#define m24332(__this, p0, p1, p2, p3, method) (int32_t)m11458_gshared((t5 *)__this, (t168*)p0, (t5 *)p1, (int32_t)p2, (int32_t)p3, method)
struct t107;
struct t107;
 void m23676_gshared (t5 * __this, t168* p0, int32_t p1, int32_t p2, t5* p3, MethodInfo* method);
#define m23676(__this, p0, p1, p2, p3, method) (void)m23676_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (int32_t)p2, (t5*)p3, method)
#define m24334(__this, p0, p1, p2, p3, method) (void)m23676_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (int32_t)p2, (t5*)p3, method)
struct t107;
struct t107;
#include "t2458.h"
 void m23827_gshared (t5 * __this, t168* p0, int32_t p1, t2458 * p2, MethodInfo* method);
#define m23827(__this, p0, p1, p2, method) (void)m23827_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (t2458 *)p2, method)
#define m24342(__this, p0, p1, p2, method) (void)m23827_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (t2458 *)p2, method)


 t2652  m13289 (t64 * __this, MethodInfo* method){
	{
		t2652  L_0 = {0};
		m13313(&L_0, __this, &m13313_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<JewelMine.Engine.Models.JewelMovement>
extern Il2CppType t110_0_0_32849;
FieldInfo t64_f0_FieldInfo = 
{
	"DefaultCapacity", &t110_0_0_32849, &t64_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2646_0_0_1;
FieldInfo t64_f1_FieldInfo = 
{
	"_items", &t2646_0_0_1, &t64_TI, offsetof(t64, f1), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t64_f2_FieldInfo = 
{
	"_size", &t110_0_0_1, &t64_TI, offsetof(t64, f2), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t64_f3_FieldInfo = 
{
	"_version", &t110_0_0_1, &t64_TI, offsetof(t64, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2646_0_0_49;
FieldInfo t64_f4_FieldInfo = 
{
	"EmptyArray", &t2646_0_0_49, &t64_TI, offsetof(t64_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t64_FIs[] =
{
	&t64_f0_FieldInfo,
	&t64_f1_FieldInfo,
	&t64_f2_FieldInfo,
	&t64_f3_FieldInfo,
	&t64_f4_FieldInfo,
	NULL
};
static const int32_t t64_f0_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t64_f0_DefaultValue = 
{
	&t64_f0_FieldInfo, { (char*)&t64_f0_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t64_FDVs[] = 
{
	&t64_f0_DefaultValue,
	NULL
};
extern MethodInfo m13270_MI;
static PropertyInfo t64____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t64_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13270_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13271_MI;
static PropertyInfo t64____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t64_TI, "System.Collections.ICollection.IsSynchronized", &m13271_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13272_MI;
static PropertyInfo t64____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t64_TI, "System.Collections.ICollection.SyncRoot", &m13272_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13273_MI;
static PropertyInfo t64____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t64_TI, "System.Collections.IList.IsFixedSize", &m13273_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13274_MI;
static PropertyInfo t64____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t64_TI, "System.Collections.IList.IsReadOnly", &m13274_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13275_MI;
extern MethodInfo m13276_MI;
static PropertyInfo t64____System_Collections_IList_Item_PropertyInfo = 
{
	&t64_TI, "System.Collections.IList.Item", &m13275_MI, &m13276_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t64____Capacity_PropertyInfo = 
{
	&t64_TI, "Capacity", &m13303_MI, &m13304_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13305_MI;
static PropertyInfo t64____Count_PropertyInfo = 
{
	&t64_TI, "Count", &m13305_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t64____Item_PropertyInfo = 
{
	&t64_TI, "Item", &m13306_MI, &m13307_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t64_PIs[] =
{
	&t64____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t64____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t64____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t64____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t64____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t64____System_Collections_IList_Item_PropertyInfo,
	&t64____Capacity_PropertyInfo,
	&t64____Count_PropertyInfo,
	&t64____Item_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m651_GM;
MethodInfo m651_MI = 
{
	".ctor", (methodPointerType)&m11648_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m651_GM};
extern Il2CppType t194_0_0_0;
extern Il2CppType t194_0_0_0;
static ParameterInfo t64_m13259_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t194_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13259_GM;
MethodInfo m13259_MI = 
{
	".ctor", (methodPointerType)&m11650_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t64_m13259_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13259_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t64_m13260_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13260_GM;
MethodInfo m13260_MI = 
{
	".ctor", (methodPointerType)&m11652_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t64_m13260_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13260_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13261_GM;
MethodInfo m13261_MI = 
{
	".cctor", (methodPointerType)&m11654_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13261_GM};
extern Il2CppType t195_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13262_GM;
MethodInfo m13262_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m11656_gshared, &t64_TI, &t195_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13262_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t64_m13263_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13263_GM;
MethodInfo m13263_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11658_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t64_m13263_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13263_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13264_GM;
MethodInfo m13264_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11660_gshared, &t64_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13264_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t64_m13265_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13265_GM;
MethodInfo m13265_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11662_gshared, &t64_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t64_m13265_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13265_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t64_m13266_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13266_GM;
MethodInfo m13266_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11664_gshared, &t64_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t64_m13266_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13266_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t64_m13267_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13267_GM;
MethodInfo m13267_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11666_gshared, &t64_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t64_m13267_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13267_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t64_m13268_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13268_GM;
MethodInfo m13268_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11668_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t64_m13268_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13268_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t64_m13269_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13269_GM;
MethodInfo m13269_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11670_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t64_m13269_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13269_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13270_GM;
MethodInfo m13270_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11672_gshared, &t64_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13270_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13271_GM;
MethodInfo m13271_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11674_gshared, &t64_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13271_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13272_GM;
MethodInfo m13272_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11676_gshared, &t64_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13272_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13273_GM;
MethodInfo m13273_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11678_gshared, &t64_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13273_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13274_GM;
MethodInfo m13274_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11680_gshared, &t64_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13274_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t64_m13275_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13275_GM;
MethodInfo m13275_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11682_gshared, &t64_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t64_m13275_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13275_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t64_m13276_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13276_GM;
MethodInfo m13276_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11684_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t64_m13276_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13276_GM};
extern Il2CppType t74_0_0_0;
extern Il2CppType t74_0_0_0;
static ParameterInfo t64_m603_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m603_GM;
MethodInfo m603_MI = 
{
	"Add", (methodPointerType)&m11686_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t64_m603_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m603_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t64_m13277_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13277_GM;
MethodInfo m13277_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m11688_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t64_m13277_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13277_GM};
extern Il2CppType t2647_0_0_0;
extern Il2CppType t2647_0_0_0;
static ParameterInfo t64_m13278_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2647_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13278_GM;
MethodInfo m13278_MI = 
{
	"AddCollection", (methodPointerType)&m11690_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t64_m13278_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13278_GM};
extern Il2CppType t194_0_0_0;
static ParameterInfo t64_m13279_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t194_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13279_GM;
MethodInfo m13279_MI = 
{
	"AddEnumerable", (methodPointerType)&m11692_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t64_m13279_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13279_GM};
extern Il2CppType t194_0_0_0;
static ParameterInfo t64_m13280_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t194_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13280_GM;
MethodInfo m13280_MI = 
{
	"AddRange", (methodPointerType)&m11693_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t64_m13280_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13280_GM};
extern Il2CppType t2648_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13281_GM;
MethodInfo m13281_MI = 
{
	"AsReadOnly", (methodPointerType)&m11695_gshared, &t64_TI, &t2648_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13281_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13282_GM;
MethodInfo m13282_MI = 
{
	"Clear", (methodPointerType)&m11696_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13282_GM};
extern Il2CppType t74_0_0_0;
static ParameterInfo t64_m13283_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13283_GM;
MethodInfo m13283_MI = 
{
	"Contains", (methodPointerType)&m11698_gshared, &t64_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t64_m13283_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13283_GM};
extern Il2CppType t2646_0_0_0;
extern Il2CppType t2646_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t64_m13284_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2646_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13284_GM;
MethodInfo m13284_MI = 
{
	"CopyTo", (methodPointerType)&m11700_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t64_m13284_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13284_GM};
extern Il2CppType t2649_0_0_0;
extern Il2CppType t2649_0_0_0;
static ParameterInfo t64_m13285_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2649_0_0_0},
};
extern Il2CppType t74_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13285_GM;
MethodInfo m13285_MI = 
{
	"Find", (methodPointerType)&m11702_gshared, &t64_TI, &t74_0_0_0, RuntimeInvoker_t5_t5, t64_m13285_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13285_GM};
extern Il2CppType t2649_0_0_0;
static ParameterInfo t64_m13286_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2649_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13286_GM;
MethodInfo m13286_MI = 
{
	"CheckMatch", (methodPointerType)&m11704_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t64_m13286_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13286_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2649_0_0_0;
static ParameterInfo t64_m13287_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t2649_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13287_GM;
MethodInfo m13287_MI = 
{
	"GetIndex", (methodPointerType)&m11706_gshared, &t64_TI, &t110_0_0_0, RuntimeInvoker_t110_t110_t110_t5, t64_m13287_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL, &m13287_GM};
extern Il2CppType t2650_0_0_0;
extern Il2CppType t2650_0_0_0;
static ParameterInfo t64_m13288_ParameterInfos[] = 
{
	{"action", 0, 134217728, &EmptyCustomAttributesCache, &t2650_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13288_GM;
MethodInfo m13288_MI = 
{
	"ForEach", (methodPointerType)&m11707_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t64_m13288_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13288_GM};
extern Il2CppType t2652_0_0_0;
extern void* RuntimeInvoker_t2652 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13289_GM;
MethodInfo m13289_MI = 
{
	"GetEnumerator", (methodPointerType)&m13289, &t64_TI, &t2652_0_0_0, RuntimeInvoker_t2652, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13289_GM};
extern Il2CppType t74_0_0_0;
static ParameterInfo t64_m13290_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13290_GM;
MethodInfo m13290_MI = 
{
	"IndexOf", (methodPointerType)&m11709_gshared, &t64_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t64_m13290_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13290_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t64_m13291_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13291_GM;
MethodInfo m13291_MI = 
{
	"Shift", (methodPointerType)&m11711_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t64_m13291_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13291_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t64_m13292_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13292_GM;
MethodInfo m13292_MI = 
{
	"CheckIndex", (methodPointerType)&m11713_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t64_m13292_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13292_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t74_0_0_0;
static ParameterInfo t64_m13293_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13293_GM;
MethodInfo m13293_MI = 
{
	"Insert", (methodPointerType)&m11715_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t64_m13293_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13293_GM};
extern Il2CppType t194_0_0_0;
static ParameterInfo t64_m13294_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t194_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13294_GM;
MethodInfo m13294_MI = 
{
	"CheckCollection", (methodPointerType)&m11717_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t64_m13294_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13294_GM};
extern Il2CppType t74_0_0_0;
static ParameterInfo t64_m13295_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13295_GM;
MethodInfo m13295_MI = 
{
	"Remove", (methodPointerType)&m11719_gshared, &t64_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t64_m13295_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13295_GM};
extern Il2CppType t2649_0_0_0;
static ParameterInfo t64_m13296_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2649_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13296_GM;
MethodInfo m13296_MI = 
{
	"RemoveAll", (methodPointerType)&m11721_gshared, &t64_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t64_m13296_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13296_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t64_m13297_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13297_GM;
MethodInfo m13297_MI = 
{
	"RemoveAt", (methodPointerType)&m11723_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t64_m13297_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13297_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13298_GM;
MethodInfo m13298_MI = 
{
	"Reverse", (methodPointerType)&m11725_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13298_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13299_GM;
MethodInfo m13299_MI = 
{
	"Sort", (methodPointerType)&m11727_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13299_GM};
extern Il2CppType t2651_0_0_0;
extern Il2CppType t2651_0_0_0;
static ParameterInfo t64_m13300_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t2651_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13300_GM;
MethodInfo m13300_MI = 
{
	"Sort", (methodPointerType)&m11729_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t64_m13300_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13300_GM};
extern Il2CppType t2646_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13301_GM;
MethodInfo m13301_MI = 
{
	"ToArray", (methodPointerType)&m11731_gshared, &t64_TI, &t2646_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13301_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13302_GM;
MethodInfo m13302_MI = 
{
	"TrimExcess", (methodPointerType)&m11733_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13302_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13303_GM;
MethodInfo m13303_MI = 
{
	"get_Capacity", (methodPointerType)&m11735_gshared, &t64_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13303_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t64_m13304_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13304_GM;
MethodInfo m13304_MI = 
{
	"set_Capacity", (methodPointerType)&m11737_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t64_m13304_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13304_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13305_GM;
MethodInfo m13305_MI = 
{
	"get_Count", (methodPointerType)&m11738_gshared, &t64_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13305_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t64_m13306_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t74_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13306_GM;
MethodInfo m13306_MI = 
{
	"get_Item", (methodPointerType)&m11740_gshared, &t64_TI, &t74_0_0_0, RuntimeInvoker_t5_t110, t64_m13306_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13306_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t74_0_0_0;
static ParameterInfo t64_m13307_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13307_GM;
MethodInfo m13307_MI = 
{
	"set_Item", (methodPointerType)&m11742_gshared, &t64_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t64_m13307_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13307_GM};
static MethodInfo* t64_MIs[] =
{
	&m651_MI,
	&m13259_MI,
	&m13260_MI,
	&m13261_MI,
	&m13262_MI,
	&m13263_MI,
	&m13264_MI,
	&m13265_MI,
	&m13266_MI,
	&m13267_MI,
	&m13268_MI,
	&m13269_MI,
	&m13270_MI,
	&m13271_MI,
	&m13272_MI,
	&m13273_MI,
	&m13274_MI,
	&m13275_MI,
	&m13276_MI,
	&m603_MI,
	&m13277_MI,
	&m13278_MI,
	&m13279_MI,
	&m13280_MI,
	&m13281_MI,
	&m13282_MI,
	&m13283_MI,
	&m13284_MI,
	&m13285_MI,
	&m13286_MI,
	&m13287_MI,
	&m13288_MI,
	&m13289_MI,
	&m13290_MI,
	&m13291_MI,
	&m13292_MI,
	&m13293_MI,
	&m13294_MI,
	&m13295_MI,
	&m13296_MI,
	&m13297_MI,
	&m13298_MI,
	&m13299_MI,
	&m13300_MI,
	&m13301_MI,
	&m13302_MI,
	&m13303_MI,
	&m13304_MI,
	&m13305_MI,
	&m13306_MI,
	&m13307_MI,
	NULL
};
extern MethodInfo m13264_MI;
extern MethodInfo m13263_MI;
extern MethodInfo m13265_MI;
extern MethodInfo m13282_MI;
extern MethodInfo m13266_MI;
extern MethodInfo m13267_MI;
extern MethodInfo m13268_MI;
extern MethodInfo m13269_MI;
extern MethodInfo m13284_MI;
extern MethodInfo m13262_MI;
static MethodInfo* t64_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m13264_MI,
	&m13305_MI,
	&m13271_MI,
	&m13272_MI,
	&m13263_MI,
	&m13273_MI,
	&m13274_MI,
	&m13275_MI,
	&m13276_MI,
	&m13265_MI,
	&m13282_MI,
	&m13266_MI,
	&m13267_MI,
	&m13268_MI,
	&m13269_MI,
	&m13297_MI,
	&m13305_MI,
	&m13270_MI,
	&m603_MI,
	&m13282_MI,
	&m13283_MI,
	&m13284_MI,
	&m13295_MI,
	&m13262_MI,
	&m13290_MI,
	&m13293_MI,
	&m13297_MI,
	&m13306_MI,
	&m13307_MI,
};
extern TypeInfo t1129_TI;
extern TypeInfo t2654_TI;
static TypeInfo* t64_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t2647_TI,
	&t194_TI,
	&t2654_TI,
};
static Il2CppInterfaceOffsetPair t64_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t2647_TI, 20},
	{ &t194_TI, 27},
	{ &t2654_TI, 28},
};
extern TypeInfo t64_TI;
extern TypeInfo t2647_TI;
extern TypeInfo t2646_TI;
extern TypeInfo t2652_TI;
extern TypeInfo t74_TI;
extern TypeInfo t2648_TI;
static Il2CppRGCTXData t64_RGCTXData[38] = 
{
	&t64_TI/* Static Usage */,
	&m13294_MI/* Method Usage */,
	&t2647_TI/* Class Usage */,
	&m13279_MI/* Method Usage */,
	&m31949_MI/* Method Usage */,
	&t2646_TI/* Array Usage */,
	&m13278_MI/* Method Usage */,
	&m13289_MI/* Method Usage */,
	&t2652_TI/* Class Usage */,
	&t74_TI/* Class Usage */,
	&m603_MI/* Method Usage */,
	&m13283_MI/* Method Usage */,
	&m13290_MI/* Method Usage */,
	&m13292_MI/* Method Usage */,
	&m13293_MI/* Method Usage */,
	&m13295_MI/* Method Usage */,
	&m13306_MI/* Method Usage */,
	&m13307_MI/* Method Usage */,
	&m13277_MI/* Method Usage */,
	&m13303_MI/* Method Usage */,
	&m13304_MI/* Method Usage */,
	&m31950_MI/* Method Usage */,
	&m742_MI/* Method Usage */,
	&m743_MI/* Method Usage */,
	&t2648_TI/* Class Usage */,
	&m13319_MI/* Method Usage */,
	&m24332_MI/* Method Usage */,
	&m13286_MI/* Method Usage */,
	&m13287_MI/* Method Usage */,
	&m13394_MI/* Method Usage */,
	&m13398_MI/* Method Usage */,
	&m13313_MI/* Method Usage */,
	&m13291_MI/* Method Usage */,
	&m13297_MI/* Method Usage */,
	&m13404_MI/* Method Usage */,
	&m24334_MI/* Method Usage */,
	&m24342_MI/* Method Usage */,
	&m24330_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t64_0_0_0;
extern Il2CppType t64_1_0_0;
struct t64;
extern Il2CppGenericClass t64_GC;
extern CustomAttributesCache t1524__CustomAttributeCache;
TypeInfo t64_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t64_MIs, t64_PIs, t64_FIs, NULL, &t5_TI, NULL, NULL, &t64_TI, t64_ITIs, t64_VT, &t1524__CustomAttributeCache, &t64_TI, &t64_0_0_0, &t64_1_0_0, t64_IOs, &t64_GC, NULL, t64_FDVs, NULL, t64_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t64), 0, -1, sizeof(t64_SFs), 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, true, false, false, 51, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.ICollection`1<JewelMine.Engine.Models.JewelMovement>
static PropertyInfo t2647____Count_PropertyInfo = 
{
	&t2647_TI, "Count", &m31949_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m31951_MI;
static PropertyInfo t2647____IsReadOnly_PropertyInfo = 
{
	&t2647_TI, "IsReadOnly", &m31951_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2647_PIs[] =
{
	&t2647____Count_PropertyInfo,
	&t2647____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31949_GM;
MethodInfo m31949_MI = 
{
	"get_Count", NULL, &t2647_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31949_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31951_GM;
MethodInfo m31951_MI = 
{
	"get_IsReadOnly", NULL, &t2647_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31951_GM};
extern Il2CppType t74_0_0_0;
static ParameterInfo t2647_m31952_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31952_GM;
MethodInfo m31952_MI = 
{
	"Add", NULL, &t2647_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2647_m31952_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31952_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31953_GM;
MethodInfo m31953_MI = 
{
	"Clear", NULL, &t2647_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31953_GM};
extern Il2CppType t74_0_0_0;
static ParameterInfo t2647_m31954_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31954_GM;
MethodInfo m31954_MI = 
{
	"Contains", NULL, &t2647_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2647_m31954_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31954_GM};
extern Il2CppType t2646_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2647_m31950_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2646_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31950_GM;
MethodInfo m31950_MI = 
{
	"CopyTo", NULL, &t2647_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2647_m31950_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31950_GM};
extern Il2CppType t74_0_0_0;
static ParameterInfo t2647_m31955_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31955_GM;
MethodInfo m31955_MI = 
{
	"Remove", NULL, &t2647_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2647_m31955_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31955_GM};
static MethodInfo* t2647_MIs[] =
{
	&m31949_MI,
	&m31951_MI,
	&m31952_MI,
	&m31953_MI,
	&m31954_MI,
	&m31950_MI,
	&m31955_MI,
	NULL
};
static TypeInfo* t2647_ITIs[] = 
{
	&t739_TI,
	&t194_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2647_1_0_0;
struct t2647;
extern Il2CppGenericClass t2647_GC;
TypeInfo t2647_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t2647_MIs, t2647_PIs, NULL, NULL, NULL, NULL, NULL, &t2647_TI, t2647_ITIs, NULL, &EmptyCustomAttributesCache, &t2647_TI, &t2647_0_0_0, &t2647_1_0_0, NULL, &t2647_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<JewelMine.Engine.Models.JewelMovement>
extern Il2CppType t195_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m742_GM;
MethodInfo m742_MI = 
{
	"GetEnumerator", NULL, &t194_TI, &t195_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m742_GM};
static MethodInfo* t194_MIs[] =
{
	&m742_MI,
	NULL
};
static TypeInfo* t194_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t194_1_0_0;
struct t194;
extern Il2CppGenericClass t194_GC;
TypeInfo t194_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t194_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t194_TI, t194_ITIs, NULL, &EmptyCustomAttributesCache, &t194_TI, &t194_0_0_0, &t194_1_0_0, NULL, &t194_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerator`1<JewelMine.Engine.Models.JewelMovement>
static PropertyInfo t195____Current_PropertyInfo = 
{
	&t195_TI, "Current", &m743_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t195_PIs[] =
{
	&t195____Current_PropertyInfo,
	NULL
};
extern Il2CppType t74_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m743_GM;
MethodInfo m743_MI = 
{
	"get_Current", NULL, &t195_TI, &t74_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m743_GM};
static MethodInfo* t195_MIs[] =
{
	&m743_MI,
	NULL
};
static TypeInfo* t195_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t195_0_0_0;
extern Il2CppType t195_1_0_0;
struct t195;
extern Il2CppGenericClass t195_GC;
TypeInfo t195_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t195_MIs, t195_PIs, NULL, NULL, NULL, NULL, NULL, &t195_TI, t195_ITIs, NULL, &EmptyCustomAttributesCache, &t195_TI, &t195_0_0_0, &t195_1_0_0, NULL, &t195_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2653.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2653_TI;
#include "t2653MD.h"

extern MethodInfo m13312_MI;
extern MethodInfo m24319_MI;
struct t107;
#define m24319(__this, p0, method) (t74 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<JewelMine.Engine.Models.JewelMovement>
extern Il2CppType t107_0_0_1;
FieldInfo t2653_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t2653_TI, offsetof(t2653, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2653_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2653_TI, offsetof(t2653, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2653_FIs[] =
{
	&t2653_f0_FieldInfo,
	&t2653_f1_FieldInfo,
	NULL
};
extern MethodInfo m13309_MI;
static PropertyInfo t2653____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2653_TI, "System.Collections.IEnumerator.Current", &m13309_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2653____Current_PropertyInfo = 
{
	&t2653_TI, "Current", &m13312_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2653_PIs[] =
{
	&t2653____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2653____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t2653_m13308_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13308_GM;
MethodInfo m13308_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t2653_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2653_m13308_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13308_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13309_GM;
MethodInfo m13309_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t2653_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13309_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13310_GM;
MethodInfo m13310_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t2653_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13310_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13311_GM;
MethodInfo m13311_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t2653_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13311_GM};
extern Il2CppType t74_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13312_GM;
MethodInfo m13312_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t2653_TI, &t74_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13312_GM};
static MethodInfo* t2653_MIs[] =
{
	&m13308_MI,
	&m13309_MI,
	&m13310_MI,
	&m13311_MI,
	&m13312_MI,
	NULL
};
extern MethodInfo m13311_MI;
extern MethodInfo m13310_MI;
static MethodInfo* t2653_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m13309_MI,
	&m13311_MI,
	&m13310_MI,
	&m13312_MI,
};
static TypeInfo* t2653_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t195_TI,
};
static Il2CppInterfaceOffsetPair t2653_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t195_TI, 7},
};
extern TypeInfo t74_TI;
static Il2CppRGCTXData t2653_RGCTXData[3] = 
{
	&m13312_MI/* Method Usage */,
	&t74_TI/* Class Usage */,
	&m24319_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2653_0_0_0;
extern Il2CppType t2653_1_0_0;
extern Il2CppGenericClass t2653_GC;
TypeInfo t2653_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2653_MIs, t2653_PIs, t2653_FIs, NULL, &t267_TI, NULL, &t107_TI, &t2653_TI, t2653_ITIs, t2653_VT, &EmptyCustomAttributesCache, &t2653_TI, &t2653_0_0_0, &t2653_1_0_0, t2653_IOs, &t2653_GC, NULL, NULL, NULL, t2653_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2653)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IList`1<JewelMine.Engine.Models.JewelMovement>
extern MethodInfo m31956_MI;
extern MethodInfo m31957_MI;
static PropertyInfo t2654____Item_PropertyInfo = 
{
	&t2654_TI, "Item", &m31956_MI, &m31957_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2654_PIs[] =
{
	&t2654____Item_PropertyInfo,
	NULL
};
extern Il2CppType t74_0_0_0;
static ParameterInfo t2654_m31958_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31958_GM;
MethodInfo m31958_MI = 
{
	"IndexOf", NULL, &t2654_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2654_m31958_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31958_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t74_0_0_0;
static ParameterInfo t2654_m31959_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31959_GM;
MethodInfo m31959_MI = 
{
	"Insert", NULL, &t2654_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2654_m31959_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31959_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2654_m31960_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31960_GM;
MethodInfo m31960_MI = 
{
	"RemoveAt", NULL, &t2654_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2654_m31960_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31960_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2654_m31956_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t74_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31956_GM;
MethodInfo m31956_MI = 
{
	"get_Item", NULL, &t2654_TI, &t74_0_0_0, RuntimeInvoker_t5_t110, t2654_m31956_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31956_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t74_0_0_0;
static ParameterInfo t2654_m31957_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31957_GM;
MethodInfo m31957_MI = 
{
	"set_Item", NULL, &t2654_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2654_m31957_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31957_GM};
static MethodInfo* t2654_MIs[] =
{
	&m31958_MI,
	&m31959_MI,
	&m31960_MI,
	&m31956_MI,
	&m31957_MI,
	NULL
};
static TypeInfo* t2654_ITIs[] = 
{
	&t739_TI,
	&t2647_TI,
	&t194_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2654_0_0_0;
extern Il2CppType t2654_1_0_0;
struct t2654;
extern Il2CppGenericClass t2654_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t2654_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t2654_MIs, t2654_PIs, NULL, NULL, NULL, NULL, NULL, &t2654_TI, t2654_ITIs, NULL, &t2240__CustomAttributeCache, &t2654_TI, &t2654_0_0_0, &t2654_1_0_0, NULL, &t2654_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t11_TI;
extern MethodInfo m13316_MI;
extern MethodInfo m4766_MI;
extern MethodInfo m531_MI;
extern MethodInfo m3643_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<JewelMine.Engine.Models.JewelMovement>
extern Il2CppType t64_0_0_1;
FieldInfo t2652_f0_FieldInfo = 
{
	"l", &t64_0_0_1, &t2652_TI, offsetof(t2652, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2652_f1_FieldInfo = 
{
	"next", &t110_0_0_1, &t2652_TI, offsetof(t2652, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2652_f2_FieldInfo = 
{
	"ver", &t110_0_0_1, &t2652_TI, offsetof(t2652, f2) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t74_0_0_1;
FieldInfo t2652_f3_FieldInfo = 
{
	"current", &t74_0_0_1, &t2652_TI, offsetof(t2652, f3) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2652_FIs[] =
{
	&t2652_f0_FieldInfo,
	&t2652_f1_FieldInfo,
	&t2652_f2_FieldInfo,
	&t2652_f3_FieldInfo,
	NULL
};
extern MethodInfo m13314_MI;
static PropertyInfo t2652____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2652_TI, "System.Collections.IEnumerator.Current", &m13314_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13318_MI;
static PropertyInfo t2652____Current_PropertyInfo = 
{
	&t2652_TI, "Current", &m13318_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2652_PIs[] =
{
	&t2652____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2652____Current_PropertyInfo,
	NULL
};
extern Il2CppType t64_0_0_0;
static ParameterInfo t2652_m13313_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t64_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13313_GM;
MethodInfo m13313_MI = 
{
	".ctor", (methodPointerType)&m11749_gshared, &t2652_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2652_m13313_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13313_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13314_GM;
MethodInfo m13314_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11750_gshared, &t2652_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13314_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13315_GM;
MethodInfo m13315_MI = 
{
	"Dispose", (methodPointerType)&m11751_gshared, &t2652_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13315_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13316_GM;
MethodInfo m13316_MI = 
{
	"VerifyState", (methodPointerType)&m11752_gshared, &t2652_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13316_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13317_GM;
MethodInfo m13317_MI = 
{
	"MoveNext", (methodPointerType)&m11753_gshared, &t2652_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13317_GM};
extern Il2CppType t74_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13318_GM;
MethodInfo m13318_MI = 
{
	"get_Current", (methodPointerType)&m11754_gshared, &t2652_TI, &t74_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13318_GM};
static MethodInfo* t2652_MIs[] =
{
	&m13313_MI,
	&m13314_MI,
	&m13315_MI,
	&m13316_MI,
	&m13317_MI,
	&m13318_MI,
	NULL
};
extern MethodInfo m13317_MI;
extern MethodInfo m13315_MI;
static MethodInfo* t2652_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m13314_MI,
	&m13317_MI,
	&m13315_MI,
	&m13318_MI,
};
static TypeInfo* t2652_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t195_TI,
};
static Il2CppInterfaceOffsetPair t2652_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t195_TI, 7},
};
extern TypeInfo t74_TI;
extern TypeInfo t2652_TI;
static Il2CppRGCTXData t2652_RGCTXData[3] = 
{
	&m13316_MI/* Method Usage */,
	&t74_TI/* Class Usage */,
	&t2652_TI/* Class Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2652_0_0_0;
extern Il2CppType t2652_1_0_0;
extern Il2CppGenericClass t2652_GC;
extern TypeInfo t1524_TI;
TypeInfo t2652_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2652_MIs, t2652_PIs, t2652_FIs, NULL, &t267_TI, NULL, &t1524_TI, &t2652_TI, t2652_ITIs, t2652_VT, &EmptyCustomAttributesCache, &t2652_TI, &t2652_0_0_0, &t2652_1_0_0, t2652_IOs, &t2652_GC, NULL, NULL, NULL, t2652_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2652)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif

#include "t2655MD.h"
extern MethodInfo m13348_MI;
extern MethodInfo m2163_MI;
extern MethodInfo m4754_MI;
extern MethodInfo m4947_MI;
extern MethodInfo m13380_MI;
extern MethodInfo m31954_MI;
extern MethodInfo m31958_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<JewelMine.Engine.Models.JewelMovement>
extern Il2CppType t2654_0_0_1;
FieldInfo t2648_f0_FieldInfo = 
{
	"list", &t2654_0_0_1, &t2648_TI, offsetof(t2648, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2648_FIs[] =
{
	&t2648_f0_FieldInfo,
	NULL
};
extern MethodInfo m13325_MI;
extern MethodInfo m13326_MI;
static PropertyInfo t2648____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t2648_TI, "System.Collections.Generic.IList<T>.Item", &m13325_MI, &m13326_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13327_MI;
static PropertyInfo t2648____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2648_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13327_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13337_MI;
static PropertyInfo t2648____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2648_TI, "System.Collections.ICollection.IsSynchronized", &m13337_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13338_MI;
static PropertyInfo t2648____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2648_TI, "System.Collections.ICollection.SyncRoot", &m13338_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13339_MI;
static PropertyInfo t2648____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2648_TI, "System.Collections.IList.IsFixedSize", &m13339_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13340_MI;
static PropertyInfo t2648____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2648_TI, "System.Collections.IList.IsReadOnly", &m13340_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13341_MI;
extern MethodInfo m13342_MI;
static PropertyInfo t2648____System_Collections_IList_Item_PropertyInfo = 
{
	&t2648_TI, "System.Collections.IList.Item", &m13341_MI, &m13342_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13347_MI;
static PropertyInfo t2648____Count_PropertyInfo = 
{
	&t2648_TI, "Count", &m13347_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2648____Item_PropertyInfo = 
{
	&t2648_TI, "Item", &m13348_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2648_PIs[] =
{
	&t2648____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t2648____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2648____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2648____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2648____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2648____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2648____System_Collections_IList_Item_PropertyInfo,
	&t2648____Count_PropertyInfo,
	&t2648____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2654_0_0_0;
static ParameterInfo t2648_m13319_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2654_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13319_GM;
MethodInfo m13319_MI = 
{
	".ctor", (methodPointerType)&m11755_gshared, &t2648_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2648_m13319_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13319_GM};
extern Il2CppType t74_0_0_0;
static ParameterInfo t2648_m13320_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13320_GM;
MethodInfo m13320_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m11756_gshared, &t2648_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2648_m13320_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13320_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13321_GM;
MethodInfo m13321_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m11757_gshared, &t2648_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13321_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t74_0_0_0;
static ParameterInfo t2648_m13322_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13322_GM;
MethodInfo m13322_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m11758_gshared, &t2648_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2648_m13322_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13322_GM};
extern Il2CppType t74_0_0_0;
static ParameterInfo t2648_m13323_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13323_GM;
MethodInfo m13323_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m11759_gshared, &t2648_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2648_m13323_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13323_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2648_m13324_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13324_GM;
MethodInfo m13324_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m11760_gshared, &t2648_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2648_m13324_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13324_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2648_m13325_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t74_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13325_GM;
MethodInfo m13325_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m11761_gshared, &t2648_TI, &t74_0_0_0, RuntimeInvoker_t5_t110, t2648_m13325_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13325_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t74_0_0_0;
static ParameterInfo t2648_m13326_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13326_GM;
MethodInfo m13326_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m11762_gshared, &t2648_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2648_m13326_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13326_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13327_GM;
MethodInfo m13327_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11763_gshared, &t2648_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13327_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2648_m13328_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13328_GM;
MethodInfo m13328_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11764_gshared, &t2648_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2648_m13328_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13328_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13329_GM;
MethodInfo m13329_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11765_gshared, &t2648_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13329_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2648_m13330_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13330_GM;
MethodInfo m13330_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11766_gshared, &t2648_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2648_m13330_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13330_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13331_GM;
MethodInfo m13331_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m11767_gshared, &t2648_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13331_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2648_m13332_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13332_GM;
MethodInfo m13332_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11768_gshared, &t2648_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2648_m13332_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13332_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2648_m13333_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13333_GM;
MethodInfo m13333_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11769_gshared, &t2648_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2648_m13333_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13333_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2648_m13334_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13334_GM;
MethodInfo m13334_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11770_gshared, &t2648_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2648_m13334_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13334_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2648_m13335_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13335_GM;
MethodInfo m13335_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11771_gshared, &t2648_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2648_m13335_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13335_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2648_m13336_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13336_GM;
MethodInfo m13336_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m11772_gshared, &t2648_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2648_m13336_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13336_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13337_GM;
MethodInfo m13337_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11773_gshared, &t2648_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13337_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13338_GM;
MethodInfo m13338_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11774_gshared, &t2648_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13338_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13339_GM;
MethodInfo m13339_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11775_gshared, &t2648_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13339_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13340_GM;
MethodInfo m13340_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11776_gshared, &t2648_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13340_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2648_m13341_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13341_GM;
MethodInfo m13341_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11777_gshared, &t2648_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t2648_m13341_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13341_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2648_m13342_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13342_GM;
MethodInfo m13342_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11778_gshared, &t2648_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2648_m13342_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13342_GM};
extern Il2CppType t74_0_0_0;
static ParameterInfo t2648_m13343_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13343_GM;
MethodInfo m13343_MI = 
{
	"Contains", (methodPointerType)&m11779_gshared, &t2648_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2648_m13343_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13343_GM};
extern Il2CppType t2646_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2648_m13344_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2646_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13344_GM;
MethodInfo m13344_MI = 
{
	"CopyTo", (methodPointerType)&m11780_gshared, &t2648_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2648_m13344_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13344_GM};
extern Il2CppType t195_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13345_GM;
MethodInfo m13345_MI = 
{
	"GetEnumerator", (methodPointerType)&m11781_gshared, &t2648_TI, &t195_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13345_GM};
extern Il2CppType t74_0_0_0;
static ParameterInfo t2648_m13346_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13346_GM;
MethodInfo m13346_MI = 
{
	"IndexOf", (methodPointerType)&m11782_gshared, &t2648_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2648_m13346_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13346_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13347_GM;
MethodInfo m13347_MI = 
{
	"get_Count", (methodPointerType)&m11783_gshared, &t2648_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13347_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2648_m13348_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t74_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13348_GM;
MethodInfo m13348_MI = 
{
	"get_Item", (methodPointerType)&m11784_gshared, &t2648_TI, &t74_0_0_0, RuntimeInvoker_t5_t110, t2648_m13348_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13348_GM};
static MethodInfo* t2648_MIs[] =
{
	&m13319_MI,
	&m13320_MI,
	&m13321_MI,
	&m13322_MI,
	&m13323_MI,
	&m13324_MI,
	&m13325_MI,
	&m13326_MI,
	&m13327_MI,
	&m13328_MI,
	&m13329_MI,
	&m13330_MI,
	&m13331_MI,
	&m13332_MI,
	&m13333_MI,
	&m13334_MI,
	&m13335_MI,
	&m13336_MI,
	&m13337_MI,
	&m13338_MI,
	&m13339_MI,
	&m13340_MI,
	&m13341_MI,
	&m13342_MI,
	&m13343_MI,
	&m13344_MI,
	&m13345_MI,
	&m13346_MI,
	&m13347_MI,
	&m13348_MI,
	NULL
};
extern MethodInfo m13329_MI;
extern MethodInfo m13328_MI;
extern MethodInfo m13330_MI;
extern MethodInfo m13331_MI;
extern MethodInfo m13332_MI;
extern MethodInfo m13333_MI;
extern MethodInfo m13334_MI;
extern MethodInfo m13335_MI;
extern MethodInfo m13336_MI;
extern MethodInfo m13320_MI;
extern MethodInfo m13321_MI;
extern MethodInfo m13343_MI;
extern MethodInfo m13344_MI;
extern MethodInfo m13323_MI;
extern MethodInfo m13346_MI;
extern MethodInfo m13322_MI;
extern MethodInfo m13324_MI;
extern MethodInfo m13345_MI;
static MethodInfo* t2648_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m13329_MI,
	&m13347_MI,
	&m13337_MI,
	&m13338_MI,
	&m13328_MI,
	&m13339_MI,
	&m13340_MI,
	&m13341_MI,
	&m13342_MI,
	&m13330_MI,
	&m13331_MI,
	&m13332_MI,
	&m13333_MI,
	&m13334_MI,
	&m13335_MI,
	&m13336_MI,
	&m13347_MI,
	&m13327_MI,
	&m13320_MI,
	&m13321_MI,
	&m13343_MI,
	&m13344_MI,
	&m13323_MI,
	&m13346_MI,
	&m13322_MI,
	&m13324_MI,
	&m13325_MI,
	&m13326_MI,
	&m13345_MI,
	&m13348_MI,
};
static TypeInfo* t2648_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t2647_TI,
	&t2654_TI,
	&t194_TI,
};
static Il2CppInterfaceOffsetPair t2648_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t2647_TI, 20},
	{ &t2654_TI, 27},
	{ &t194_TI, 32},
};
extern TypeInfo t74_TI;
static Il2CppRGCTXData t2648_RGCTXData[9] = 
{
	&m13348_MI/* Method Usage */,
	&m13380_MI/* Method Usage */,
	&t74_TI/* Class Usage */,
	&m31954_MI/* Method Usage */,
	&m31958_MI/* Method Usage */,
	&m31956_MI/* Method Usage */,
	&m31950_MI/* Method Usage */,
	&m742_MI/* Method Usage */,
	&m31949_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2648_0_0_0;
extern Il2CppType t2648_1_0_0;
struct t2648;
extern Il2CppGenericClass t2648_GC;
extern CustomAttributesCache t1526__CustomAttributeCache;
TypeInfo t2648_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t2648_MIs, t2648_PIs, t2648_FIs, NULL, &t5_TI, NULL, NULL, &t2648_TI, t2648_ITIs, t2648_VT, &t1526__CustomAttributeCache, &t2648_TI, &t2648_0_0_0, &t2648_1_0_0, t2648_IOs, &t2648_GC, NULL, NULL, NULL, t2648_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2648), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t2655.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2655_TI;

extern MethodInfo m13383_MI;
extern MethodInfo m13384_MI;
extern MethodInfo m13381_MI;
extern MethodInfo m13379_MI;
extern MethodInfo m651_MI;
extern MethodInfo m13372_MI;
extern MethodInfo m13382_MI;
extern MethodInfo m13370_MI;
extern MethodInfo m13375_MI;
extern MethodInfo m13366_MI;
extern MethodInfo m31953_MI;
extern MethodInfo m31959_MI;
extern MethodInfo m31960_MI;
extern MethodInfo m6793_MI;
extern MethodInfo m11150_MI;
extern MethodInfo m11152_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<JewelMine.Engine.Models.JewelMovement>
extern Il2CppType t2654_0_0_1;
FieldInfo t2655_f0_FieldInfo = 
{
	"list", &t2654_0_0_1, &t2655_TI, offsetof(t2655, f0), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_1;
FieldInfo t2655_f1_FieldInfo = 
{
	"syncRoot", &t5_0_0_1, &t2655_TI, offsetof(t2655, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2655_FIs[] =
{
	&t2655_f0_FieldInfo,
	&t2655_f1_FieldInfo,
	NULL
};
extern MethodInfo m13350_MI;
static PropertyInfo t2655____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2655_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13350_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13358_MI;
static PropertyInfo t2655____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2655_TI, "System.Collections.ICollection.IsSynchronized", &m13358_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13359_MI;
static PropertyInfo t2655____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2655_TI, "System.Collections.ICollection.SyncRoot", &m13359_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13360_MI;
static PropertyInfo t2655____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2655_TI, "System.Collections.IList.IsFixedSize", &m13360_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13361_MI;
static PropertyInfo t2655____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2655_TI, "System.Collections.IList.IsReadOnly", &m13361_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13362_MI;
extern MethodInfo m13363_MI;
static PropertyInfo t2655____System_Collections_IList_Item_PropertyInfo = 
{
	&t2655_TI, "System.Collections.IList.Item", &m13362_MI, &m13363_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13376_MI;
static PropertyInfo t2655____Count_PropertyInfo = 
{
	&t2655_TI, "Count", &m13376_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13377_MI;
extern MethodInfo m13378_MI;
static PropertyInfo t2655____Item_PropertyInfo = 
{
	&t2655_TI, "Item", &m13377_MI, &m13378_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2655_PIs[] =
{
	&t2655____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2655____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2655____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2655____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2655____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2655____System_Collections_IList_Item_PropertyInfo,
	&t2655____Count_PropertyInfo,
	&t2655____Item_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13349_GM;
MethodInfo m13349_MI = 
{
	".ctor", (methodPointerType)&m11785_gshared, &t2655_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13349_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13350_GM;
MethodInfo m13350_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11786_gshared, &t2655_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13350_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2655_m13351_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13351_GM;
MethodInfo m13351_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11787_gshared, &t2655_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2655_m13351_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13351_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13352_GM;
MethodInfo m13352_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11788_gshared, &t2655_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13352_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2655_m13353_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13353_GM;
MethodInfo m13353_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11789_gshared, &t2655_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2655_m13353_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13353_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2655_m13354_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13354_GM;
MethodInfo m13354_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11790_gshared, &t2655_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2655_m13354_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13354_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2655_m13355_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13355_GM;
MethodInfo m13355_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11791_gshared, &t2655_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2655_m13355_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13355_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2655_m13356_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13356_GM;
MethodInfo m13356_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11792_gshared, &t2655_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2655_m13356_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13356_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2655_m13357_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13357_GM;
MethodInfo m13357_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11793_gshared, &t2655_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2655_m13357_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13357_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13358_GM;
MethodInfo m13358_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11794_gshared, &t2655_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13358_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13359_GM;
MethodInfo m13359_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11795_gshared, &t2655_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13359_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13360_GM;
MethodInfo m13360_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11796_gshared, &t2655_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13360_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13361_GM;
MethodInfo m13361_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11797_gshared, &t2655_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13361_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2655_m13362_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13362_GM;
MethodInfo m13362_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11798_gshared, &t2655_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t2655_m13362_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13362_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2655_m13363_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13363_GM;
MethodInfo m13363_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11799_gshared, &t2655_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2655_m13363_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13363_GM};
extern Il2CppType t74_0_0_0;
static ParameterInfo t2655_m13364_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13364_GM;
MethodInfo m13364_MI = 
{
	"Add", (methodPointerType)&m11800_gshared, &t2655_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2655_m13364_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13364_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13365_GM;
MethodInfo m13365_MI = 
{
	"Clear", (methodPointerType)&m11801_gshared, &t2655_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13365_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13366_GM;
MethodInfo m13366_MI = 
{
	"ClearItems", (methodPointerType)&m11802_gshared, &t2655_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13366_GM};
extern Il2CppType t74_0_0_0;
static ParameterInfo t2655_m13367_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13367_GM;
MethodInfo m13367_MI = 
{
	"Contains", (methodPointerType)&m11803_gshared, &t2655_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2655_m13367_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13367_GM};
extern Il2CppType t2646_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2655_m13368_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2646_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13368_GM;
MethodInfo m13368_MI = 
{
	"CopyTo", (methodPointerType)&m11804_gshared, &t2655_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2655_m13368_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13368_GM};
extern Il2CppType t195_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13369_GM;
MethodInfo m13369_MI = 
{
	"GetEnumerator", (methodPointerType)&m11805_gshared, &t2655_TI, &t195_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13369_GM};
extern Il2CppType t74_0_0_0;
static ParameterInfo t2655_m13370_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13370_GM;
MethodInfo m13370_MI = 
{
	"IndexOf", (methodPointerType)&m11806_gshared, &t2655_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2655_m13370_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13370_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t74_0_0_0;
static ParameterInfo t2655_m13371_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13371_GM;
MethodInfo m13371_MI = 
{
	"Insert", (methodPointerType)&m11807_gshared, &t2655_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2655_m13371_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13371_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t74_0_0_0;
static ParameterInfo t2655_m13372_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13372_GM;
MethodInfo m13372_MI = 
{
	"InsertItem", (methodPointerType)&m11808_gshared, &t2655_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2655_m13372_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13372_GM};
extern Il2CppType t74_0_0_0;
static ParameterInfo t2655_m13373_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13373_GM;
MethodInfo m13373_MI = 
{
	"Remove", (methodPointerType)&m11809_gshared, &t2655_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2655_m13373_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13373_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2655_m13374_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13374_GM;
MethodInfo m13374_MI = 
{
	"RemoveAt", (methodPointerType)&m11810_gshared, &t2655_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2655_m13374_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13374_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2655_m13375_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13375_GM;
MethodInfo m13375_MI = 
{
	"RemoveItem", (methodPointerType)&m11811_gshared, &t2655_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2655_m13375_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13375_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13376_GM;
MethodInfo m13376_MI = 
{
	"get_Count", (methodPointerType)&m11812_gshared, &t2655_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13376_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2655_m13377_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t74_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13377_GM;
MethodInfo m13377_MI = 
{
	"get_Item", (methodPointerType)&m11813_gshared, &t2655_TI, &t74_0_0_0, RuntimeInvoker_t5_t110, t2655_m13377_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13377_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t74_0_0_0;
static ParameterInfo t2655_m13378_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13378_GM;
MethodInfo m13378_MI = 
{
	"set_Item", (methodPointerType)&m11814_gshared, &t2655_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2655_m13378_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13378_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t74_0_0_0;
static ParameterInfo t2655_m13379_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13379_GM;
MethodInfo m13379_MI = 
{
	"SetItem", (methodPointerType)&m11815_gshared, &t2655_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2655_m13379_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13379_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2655_m13380_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13380_GM;
MethodInfo m13380_MI = 
{
	"IsValidItem", (methodPointerType)&m11816_gshared, &t2655_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2655_m13380_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13380_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2655_m13381_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t74_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13381_GM;
MethodInfo m13381_MI = 
{
	"ConvertItem", (methodPointerType)&m11817_gshared, &t2655_TI, &t74_0_0_0, RuntimeInvoker_t5_t5, t2655_m13381_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13381_GM};
extern Il2CppType t2654_0_0_0;
static ParameterInfo t2655_m13382_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2654_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13382_GM;
MethodInfo m13382_MI = 
{
	"CheckWritable", (methodPointerType)&m11818_gshared, &t2655_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2655_m13382_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13382_GM};
extern Il2CppType t2654_0_0_0;
static ParameterInfo t2655_m13383_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2654_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13383_GM;
MethodInfo m13383_MI = 
{
	"IsSynchronized", (methodPointerType)&m11819_gshared, &t2655_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2655_m13383_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13383_GM};
extern Il2CppType t2654_0_0_0;
static ParameterInfo t2655_m13384_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2654_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13384_GM;
MethodInfo m13384_MI = 
{
	"IsFixedSize", (methodPointerType)&m11820_gshared, &t2655_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2655_m13384_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13384_GM};
static MethodInfo* t2655_MIs[] =
{
	&m13349_MI,
	&m13350_MI,
	&m13351_MI,
	&m13352_MI,
	&m13353_MI,
	&m13354_MI,
	&m13355_MI,
	&m13356_MI,
	&m13357_MI,
	&m13358_MI,
	&m13359_MI,
	&m13360_MI,
	&m13361_MI,
	&m13362_MI,
	&m13363_MI,
	&m13364_MI,
	&m13365_MI,
	&m13366_MI,
	&m13367_MI,
	&m13368_MI,
	&m13369_MI,
	&m13370_MI,
	&m13371_MI,
	&m13372_MI,
	&m13373_MI,
	&m13374_MI,
	&m13375_MI,
	&m13376_MI,
	&m13377_MI,
	&m13378_MI,
	&m13379_MI,
	&m13380_MI,
	&m13381_MI,
	&m13382_MI,
	&m13383_MI,
	&m13384_MI,
	NULL
};
extern MethodInfo m13352_MI;
extern MethodInfo m13351_MI;
extern MethodInfo m13353_MI;
extern MethodInfo m13365_MI;
extern MethodInfo m13354_MI;
extern MethodInfo m13355_MI;
extern MethodInfo m13356_MI;
extern MethodInfo m13357_MI;
extern MethodInfo m13374_MI;
extern MethodInfo m13364_MI;
extern MethodInfo m13367_MI;
extern MethodInfo m13368_MI;
extern MethodInfo m13373_MI;
extern MethodInfo m13371_MI;
extern MethodInfo m13369_MI;
static MethodInfo* t2655_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m13352_MI,
	&m13376_MI,
	&m13358_MI,
	&m13359_MI,
	&m13351_MI,
	&m13360_MI,
	&m13361_MI,
	&m13362_MI,
	&m13363_MI,
	&m13353_MI,
	&m13365_MI,
	&m13354_MI,
	&m13355_MI,
	&m13356_MI,
	&m13357_MI,
	&m13374_MI,
	&m13376_MI,
	&m13350_MI,
	&m13364_MI,
	&m13365_MI,
	&m13367_MI,
	&m13368_MI,
	&m13373_MI,
	&m13370_MI,
	&m13371_MI,
	&m13374_MI,
	&m13377_MI,
	&m13378_MI,
	&m13369_MI,
	&m13366_MI,
	&m13372_MI,
	&m13375_MI,
	&m13379_MI,
};
static TypeInfo* t2655_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t2647_TI,
	&t2654_TI,
	&t194_TI,
};
static Il2CppInterfaceOffsetPair t2655_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t2647_TI, 20},
	{ &t2654_TI, 27},
	{ &t194_TI, 32},
};
extern TypeInfo t64_TI;
extern TypeInfo t74_TI;
static Il2CppRGCTXData t2655_RGCTXData[25] = 
{
	&t64_TI/* Class Usage */,
	&m651_MI/* Method Usage */,
	&m31951_MI/* Method Usage */,
	&m742_MI/* Method Usage */,
	&m31949_MI/* Method Usage */,
	&m13381_MI/* Method Usage */,
	&m13372_MI/* Method Usage */,
	&m13380_MI/* Method Usage */,
	&t74_TI/* Class Usage */,
	&m31954_MI/* Method Usage */,
	&m31958_MI/* Method Usage */,
	&m13382_MI/* Method Usage */,
	&m13370_MI/* Method Usage */,
	&m13375_MI/* Method Usage */,
	&m13383_MI/* Method Usage */,
	&m13384_MI/* Method Usage */,
	&m31956_MI/* Method Usage */,
	&m13379_MI/* Method Usage */,
	&m13366_MI/* Method Usage */,
	&m31953_MI/* Method Usage */,
	&m31950_MI/* Method Usage */,
	&m31959_MI/* Method Usage */,
	&m31960_MI/* Method Usage */,
	&m31957_MI/* Method Usage */,
	&t74_0_0_0/* Type Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2655_0_0_0;
extern Il2CppType t2655_1_0_0;
struct t2655;
extern Il2CppGenericClass t2655_GC;
extern CustomAttributesCache t1525__CustomAttributeCache;
TypeInfo t2655_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t2655_MIs, t2655_PIs, t2655_FIs, NULL, &t5_TI, NULL, NULL, &t2655_TI, t2655_ITIs, t2655_VT, &t1525__CustomAttributeCache, &t2655_TI, &t2655_0_0_0, &t2655_1_0_0, t2655_IOs, &t2655_GC, NULL, NULL, NULL, t2655_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2655), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2656_TI;
#include "t2656MD.h"

#include "t2657.h"
extern TypeInfo t7561_TI;
extern TypeInfo t2657_TI;
#include "t2657MD.h"
extern Il2CppType t7561_0_0_0;
extern MethodInfo m13390_MI;
extern MethodInfo m31961_MI;
extern MethodInfo m24331_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<JewelMine.Engine.Models.JewelMovement>
extern Il2CppType t2656_0_0_49;
FieldInfo t2656_f0_FieldInfo = 
{
	"_default", &t2656_0_0_49, &t2656_TI, offsetof(t2656_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2656_FIs[] =
{
	&t2656_f0_FieldInfo,
	NULL
};
extern MethodInfo m13389_MI;
static PropertyInfo t2656____Default_PropertyInfo = 
{
	&t2656_TI, "Default", &m13389_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2656_PIs[] =
{
	&t2656____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13385_GM;
MethodInfo m13385_MI = 
{
	".ctor", (methodPointerType)&m11821_gshared, &t2656_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13385_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13386_GM;
MethodInfo m13386_MI = 
{
	".cctor", (methodPointerType)&m11822_gshared, &t2656_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13386_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2656_m13387_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13387_GM;
MethodInfo m13387_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m11823_gshared, &t2656_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2656_m13387_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13387_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2656_m13388_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13388_GM;
MethodInfo m13388_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m11824_gshared, &t2656_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2656_m13388_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13388_GM};
extern Il2CppType t74_0_0_0;
static ParameterInfo t2656_m31961_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31961_GM;
MethodInfo m31961_MI = 
{
	"GetHashCode", NULL, &t2656_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2656_m31961_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31961_GM};
extern Il2CppType t74_0_0_0;
extern Il2CppType t74_0_0_0;
static ParameterInfo t2656_m24331_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m24331_GM;
MethodInfo m24331_MI = 
{
	"Equals", NULL, &t2656_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2656_m24331_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m24331_GM};
extern Il2CppType t2656_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13389_GM;
MethodInfo m13389_MI = 
{
	"get_Default", (methodPointerType)&m11825_gshared, &t2656_TI, &t2656_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13389_GM};
static MethodInfo* t2656_MIs[] =
{
	&m13385_MI,
	&m13386_MI,
	&m13387_MI,
	&m13388_MI,
	&m31961_MI,
	&m24331_MI,
	&m13389_MI,
	NULL
};
extern MethodInfo m13388_MI;
extern MethodInfo m13387_MI;
static MethodInfo* t2656_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m24331_MI,
	&m31961_MI,
	&m13388_MI,
	&m13387_MI,
	NULL,
	NULL,
};
extern TypeInfo t7562_TI;
static TypeInfo* t2656_ITIs[] = 
{
	&t7562_TI,
	&t998_TI,
};
static Il2CppInterfaceOffsetPair t2656_IOs[] = 
{
	{ &t7562_TI, 4},
	{ &t998_TI, 6},
};
extern TypeInfo t2656_TI;
extern TypeInfo t2656_TI;
extern TypeInfo t2657_TI;
extern TypeInfo t74_TI;
static Il2CppRGCTXData t2656_RGCTXData[9] = 
{
	&t7561_0_0_0/* Type Usage */,
	&t74_0_0_0/* Type Usage */,
	&t2656_TI/* Class Usage */,
	&t2656_TI/* Static Usage */,
	&t2657_TI/* Class Usage */,
	&m13390_MI/* Method Usage */,
	&t74_TI/* Class Usage */,
	&m31961_MI/* Method Usage */,
	&m24331_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2656_0_0_0;
extern Il2CppType t2656_1_0_0;
struct t2656;
extern Il2CppGenericClass t2656_GC;
TypeInfo t2656_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2656_MIs, t2656_PIs, t2656_FIs, NULL, &t5_TI, NULL, NULL, &t2656_TI, t2656_ITIs, t2656_VT, &EmptyCustomAttributesCache, &t2656_TI, &t2656_0_0_0, &t2656_1_0_0, t2656_IOs, &t2656_GC, NULL, NULL, NULL, t2656_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2656), 0, -1, sizeof(t2656_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<JewelMine.Engine.Models.JewelMovement>
extern Il2CppType t74_0_0_0;
extern Il2CppType t74_0_0_0;
static ParameterInfo t7562_m31962_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31962_GM;
MethodInfo m31962_MI = 
{
	"Equals", NULL, &t7562_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t7562_m31962_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31962_GM};
extern Il2CppType t74_0_0_0;
static ParameterInfo t7562_m31963_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31963_GM;
MethodInfo m31963_MI = 
{
	"GetHashCode", NULL, &t7562_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7562_m31963_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31963_GM};
static MethodInfo* t7562_MIs[] =
{
	&m31962_MI,
	&m31963_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7562_0_0_0;
extern Il2CppType t7562_1_0_0;
struct t7562;
extern Il2CppGenericClass t7562_GC;
TypeInfo t7562_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t7562_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7562_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7562_TI, &t7562_0_0_0, &t7562_1_0_0, NULL, &t7562_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.IEquatable`1<JewelMine.Engine.Models.JewelMovement>
extern Il2CppType t74_0_0_0;
static ParameterInfo t7561_m31964_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31964_GM;
MethodInfo m31964_MI = 
{
	"Equals", NULL, &t7561_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7561_m31964_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31964_GM};
static MethodInfo* t7561_MIs[] =
{
	&m31964_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7561_1_0_0;
struct t7561;
extern Il2CppGenericClass t7561_GC;
TypeInfo t7561_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t7561_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7561_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7561_TI, &t7561_0_0_0, &t7561_1_0_0, NULL, &t7561_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m13385_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<JewelMine.Engine.Models.JewelMovement>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13390_GM;
MethodInfo m13390_MI = 
{
	".ctor", (methodPointerType)&m11856_gshared, &t2657_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13390_GM};
extern Il2CppType t74_0_0_0;
static ParameterInfo t2657_m13391_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13391_GM;
MethodInfo m13391_MI = 
{
	"GetHashCode", (methodPointerType)&m11857_gshared, &t2657_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2657_m13391_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13391_GM};
extern Il2CppType t74_0_0_0;
extern Il2CppType t74_0_0_0;
static ParameterInfo t2657_m13392_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13392_GM;
MethodInfo m13392_MI = 
{
	"Equals", (methodPointerType)&m11858_gshared, &t2657_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2657_m13392_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13392_GM};
static MethodInfo* t2657_MIs[] =
{
	&m13390_MI,
	&m13391_MI,
	&m13392_MI,
	NULL
};
extern MethodInfo m13392_MI;
extern MethodInfo m13391_MI;
static MethodInfo* t2657_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m13392_MI,
	&m13391_MI,
	&m13388_MI,
	&m13387_MI,
	&m13391_MI,
	&m13392_MI,
};
static Il2CppInterfaceOffsetPair t2657_IOs[] = 
{
	{ &t7562_TI, 4},
	{ &t998_TI, 6},
};
extern TypeInfo t2656_TI;
extern TypeInfo t2656_TI;
extern TypeInfo t2657_TI;
extern TypeInfo t74_TI;
extern TypeInfo t74_TI;
static Il2CppRGCTXData t2657_RGCTXData[11] = 
{
	&t7561_0_0_0/* Type Usage */,
	&t74_0_0_0/* Type Usage */,
	&t2656_TI/* Class Usage */,
	&t2656_TI/* Static Usage */,
	&t2657_TI/* Class Usage */,
	&m13390_MI/* Method Usage */,
	&t74_TI/* Class Usage */,
	&m31961_MI/* Method Usage */,
	&m24331_MI/* Method Usage */,
	&m13385_MI/* Method Usage */,
	&t74_TI/* Class Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2657_0_0_0;
extern Il2CppType t2657_1_0_0;
struct t2657;
extern Il2CppGenericClass t2657_GC;
TypeInfo t2657_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2657_MIs, NULL, NULL, NULL, &t2656_TI, NULL, &t1519_TI, &t2657_TI, NULL, t2657_VT, &EmptyCustomAttributesCache, &t2657_TI, &t2657_0_0_0, &t2657_1_0_0, t2657_IOs, &t2657_GC, NULL, NULL, NULL, t2657_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2657), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Predicate`1<JewelMine.Engine.Models.JewelMovement>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2649_m13393_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13393_GM;
MethodInfo m13393_MI = 
{
	".ctor", (methodPointerType)&m11859_gshared, &t2649_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2649_m13393_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13393_GM};
extern Il2CppType t74_0_0_0;
static ParameterInfo t2649_m13394_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13394_GM;
MethodInfo m13394_MI = 
{
	"Invoke", (methodPointerType)&m11860_gshared, &t2649_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2649_m13394_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13394_GM};
extern Il2CppType t74_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2649_m13395_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13395_GM;
MethodInfo m13395_MI = 
{
	"BeginInvoke", (methodPointerType)&m11861_gshared, &t2649_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t2649_m13395_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m13395_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2649_m13396_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13396_GM;
MethodInfo m13396_MI = 
{
	"EndInvoke", (methodPointerType)&m11862_gshared, &t2649_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2649_m13396_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13396_GM};
static MethodInfo* t2649_MIs[] =
{
	&m13393_MI,
	&m13394_MI,
	&m13395_MI,
	&m13396_MI,
	NULL
};
extern MethodInfo m13395_MI;
extern MethodInfo m13396_MI;
static MethodInfo* t2649_VT[] =
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
	&m13394_MI,
	&m13395_MI,
	&m13396_MI,
};
static Il2CppInterfaceOffsetPair t2649_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2649_1_0_0;
struct t2649;
extern Il2CppGenericClass t2649_GC;
TypeInfo t2649_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t2649_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t2649_TI, NULL, t2649_VT, &EmptyCustomAttributesCache, &t2649_TI, &t2649_0_0_0, &t2649_1_0_0, t2649_IOs, &t2649_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2649), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Action`1<JewelMine.Engine.Models.JewelMovement>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2650_m13397_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13397_GM;
MethodInfo m13397_MI = 
{
	".ctor", (methodPointerType)&m11863_gshared, &t2650_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2650_m13397_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13397_GM};
extern Il2CppType t74_0_0_0;
static ParameterInfo t2650_m13398_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13398_GM;
MethodInfo m13398_MI = 
{
	"Invoke", (methodPointerType)&m11864_gshared, &t2650_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2650_m13398_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13398_GM};
extern Il2CppType t74_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2650_m13399_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13399_GM;
MethodInfo m13399_MI = 
{
	"BeginInvoke", (methodPointerType)&m11865_gshared, &t2650_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t2650_m13399_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m13399_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2650_m13400_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13400_GM;
MethodInfo m13400_MI = 
{
	"EndInvoke", (methodPointerType)&m11866_gshared, &t2650_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2650_m13400_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13400_GM};
static MethodInfo* t2650_MIs[] =
{
	&m13397_MI,
	&m13398_MI,
	&m13399_MI,
	&m13400_MI,
	NULL
};
extern MethodInfo m13399_MI;
extern MethodInfo m13400_MI;
static MethodInfo* t2650_VT[] =
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
	&m13398_MI,
	&m13399_MI,
	&m13400_MI,
};
static Il2CppInterfaceOffsetPair t2650_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2650_1_0_0;
struct t2650;
extern Il2CppGenericClass t2650_GC;
TypeInfo t2650_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Action`1", "System", t2650_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t2650_TI, NULL, t2650_VT, &EmptyCustomAttributesCache, &t2650_TI, &t2650_0_0_0, &t2650_1_0_0, t2650_IOs, &t2650_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2650), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif

#include "t1510.h"
#include "t2659.h"
extern TypeInfo t4723_TI;
extern TypeInfo t1510_TI;
extern TypeInfo t2659_TI;
#include "t2659MD.h"
extern Il2CppType t4723_0_0_0;
extern Il2CppType t1510_0_0_0;
extern MethodInfo m13405_MI;
extern MethodInfo m31965_MI;
extern MethodInfo m10152_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<JewelMine.Engine.Models.JewelMovement>
extern Il2CppType t2658_0_0_49;
FieldInfo t2658_f0_FieldInfo = 
{
	"_default", &t2658_0_0_49, &t2658_TI, offsetof(t2658_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2658_FIs[] =
{
	&t2658_f0_FieldInfo,
	NULL
};
static PropertyInfo t2658____Default_PropertyInfo = 
{
	&t2658_TI, "Default", &m13404_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2658_PIs[] =
{
	&t2658____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13401_GM;
MethodInfo m13401_MI = 
{
	".ctor", (methodPointerType)&m11867_gshared, &t2658_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13401_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13402_GM;
MethodInfo m13402_MI = 
{
	".cctor", (methodPointerType)&m11868_gshared, &t2658_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13402_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2658_m13403_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13403_GM;
MethodInfo m13403_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m11869_gshared, &t2658_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t2658_m13403_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13403_GM};
extern Il2CppType t74_0_0_0;
extern Il2CppType t74_0_0_0;
static ParameterInfo t2658_m31965_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31965_GM;
MethodInfo m31965_MI = 
{
	"Compare", NULL, &t2658_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t2658_m31965_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31965_GM};
extern Il2CppType t2658_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13404_GM;
MethodInfo m13404_MI = 
{
	"get_Default", (methodPointerType)&m11870_gshared, &t2658_TI, &t2658_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13404_GM};
static MethodInfo* t2658_MIs[] =
{
	&m13401_MI,
	&m13402_MI,
	&m13403_MI,
	&m31965_MI,
	&m13404_MI,
	NULL
};
extern MethodInfo m13403_MI;
static MethodInfo* t2658_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m31965_MI,
	&m13403_MI,
	NULL,
};
extern TypeInfo t4722_TI;
extern TypeInfo t991_TI;
static TypeInfo* t2658_ITIs[] = 
{
	&t4722_TI,
	&t991_TI,
};
static Il2CppInterfaceOffsetPair t2658_IOs[] = 
{
	{ &t4722_TI, 4},
	{ &t991_TI, 5},
};
extern TypeInfo t2658_TI;
extern TypeInfo t2658_TI;
extern TypeInfo t2659_TI;
extern TypeInfo t74_TI;
static Il2CppRGCTXData t2658_RGCTXData[8] = 
{
	&t4723_0_0_0/* Type Usage */,
	&t74_0_0_0/* Type Usage */,
	&t2658_TI/* Class Usage */,
	&t2658_TI/* Static Usage */,
	&t2659_TI/* Class Usage */,
	&m13405_MI/* Method Usage */,
	&t74_TI/* Class Usage */,
	&m31965_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2658_0_0_0;
extern Il2CppType t2658_1_0_0;
struct t2658;
extern Il2CppGenericClass t2658_GC;
TypeInfo t2658_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2658_MIs, t2658_PIs, t2658_FIs, NULL, &t5_TI, NULL, NULL, &t2658_TI, t2658_ITIs, t2658_VT, &EmptyCustomAttributesCache, &t2658_TI, &t2658_0_0_0, &t2658_1_0_0, t2658_IOs, &t2658_GC, NULL, NULL, NULL, t2658_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2658), 0, -1, sizeof(t2658_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IComparer`1<JewelMine.Engine.Models.JewelMovement>
extern Il2CppType t74_0_0_0;
extern Il2CppType t74_0_0_0;
static ParameterInfo t4722_m24339_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m24339_GM;
MethodInfo m24339_MI = 
{
	"Compare", NULL, &t4722_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t4722_m24339_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m24339_GM};
static MethodInfo* t4722_MIs[] =
{
	&m24339_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4722_0_0_0;
extern Il2CppType t4722_1_0_0;
struct t4722;
extern Il2CppGenericClass t4722_GC;
TypeInfo t4722_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t4722_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4722_TI, NULL, NULL, &EmptyCustomAttributesCache, &t4722_TI, &t4722_0_0_0, &t4722_1_0_0, NULL, &t4722_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.IComparable`1<JewelMine.Engine.Models.JewelMovement>
extern Il2CppType t74_0_0_0;
static ParameterInfo t4723_m24340_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m24340_GM;
MethodInfo m24340_MI = 
{
	"CompareTo", NULL, &t4723_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t4723_m24340_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m24340_GM};
static MethodInfo* t4723_MIs[] =
{
	&m24340_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4723_1_0_0;
struct t4723;
extern Il2CppGenericClass t4723_GC;
TypeInfo t4723_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t4723_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4723_TI, NULL, NULL, &EmptyCustomAttributesCache, &t4723_TI, &t4723_0_0_0, &t4723_1_0_0, NULL, &t4723_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t122_TI;
extern MethodInfo m13401_MI;
extern MethodInfo m24340_MI;
extern MethodInfo m11009_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<JewelMine.Engine.Models.JewelMovement>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13405_GM;
MethodInfo m13405_MI = 
{
	".ctor", (methodPointerType)&m11871_gshared, &t2659_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13405_GM};
extern Il2CppType t74_0_0_0;
extern Il2CppType t74_0_0_0;
static ParameterInfo t2659_m13406_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13406_GM;
MethodInfo m13406_MI = 
{
	"Compare", (methodPointerType)&m11872_gshared, &t2659_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t2659_m13406_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13406_GM};
static MethodInfo* t2659_MIs[] =
{
	&m13405_MI,
	&m13406_MI,
	NULL
};
extern MethodInfo m13406_MI;
static MethodInfo* t2659_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m13406_MI,
	&m13403_MI,
	&m13406_MI,
};
static Il2CppInterfaceOffsetPair t2659_IOs[] = 
{
	{ &t4722_TI, 4},
	{ &t991_TI, 5},
};
extern TypeInfo t2658_TI;
extern TypeInfo t2658_TI;
extern TypeInfo t2659_TI;
extern TypeInfo t74_TI;
extern TypeInfo t74_TI;
extern TypeInfo t4723_TI;
static Il2CppRGCTXData t2659_RGCTXData[12] = 
{
	&t4723_0_0_0/* Type Usage */,
	&t74_0_0_0/* Type Usage */,
	&t2658_TI/* Class Usage */,
	&t2658_TI/* Static Usage */,
	&t2659_TI/* Class Usage */,
	&m13405_MI/* Method Usage */,
	&t74_TI/* Class Usage */,
	&m31965_MI/* Method Usage */,
	&m13401_MI/* Method Usage */,
	&t74_TI/* Class Usage */,
	&t4723_TI/* Class Usage */,
	&m24340_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2659_0_0_0;
extern Il2CppType t2659_1_0_0;
struct t2659;
extern Il2CppGenericClass t2659_GC;
extern TypeInfo t1509_TI;
TypeInfo t2659_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2659_MIs, NULL, NULL, NULL, &t2658_TI, NULL, &t1509_TI, &t2659_TI, NULL, t2659_VT, &EmptyCustomAttributesCache, &t2659_TI, &t2659_0_0_0, &t2659_1_0_0, t2659_IOs, &t2659_GC, NULL, NULL, NULL, t2659_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2659), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2651_TI;
#include "t2651MD.h"



// Metadata Definition System.Comparison`1<JewelMine.Engine.Models.JewelMovement>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2651_m13407_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13407_GM;
MethodInfo m13407_MI = 
{
	".ctor", (methodPointerType)&m11938_gshared, &t2651_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2651_m13407_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13407_GM};
extern Il2CppType t74_0_0_0;
extern Il2CppType t74_0_0_0;
static ParameterInfo t2651_m13408_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13408_GM;
MethodInfo m13408_MI = 
{
	"Invoke", (methodPointerType)&m11939_gshared, &t2651_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t2651_m13408_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13408_GM};
extern Il2CppType t74_0_0_0;
extern Il2CppType t74_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2651_m13409_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13409_GM;
MethodInfo m13409_MI = 
{
	"BeginInvoke", (methodPointerType)&m11940_gshared, &t2651_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5_t5, t2651_m13409_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL, &m13409_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2651_m13410_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13410_GM;
MethodInfo m13410_MI = 
{
	"EndInvoke", (methodPointerType)&m11941_gshared, &t2651_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2651_m13410_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13410_GM};
static MethodInfo* t2651_MIs[] =
{
	&m13407_MI,
	&m13408_MI,
	&m13409_MI,
	&m13410_MI,
	NULL
};
extern MethodInfo m13408_MI;
extern MethodInfo m13409_MI;
extern MethodInfo m13410_MI;
static MethodInfo* t2651_VT[] =
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
	&m13408_MI,
	&m13409_MI,
	&m13410_MI,
};
static Il2CppInterfaceOffsetPair t2651_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2651_1_0_0;
struct t2651;
extern Il2CppGenericClass t2651_GC;
TypeInfo t2651_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t2651_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t2651_TI, NULL, t2651_VT, &EmptyCustomAttributesCache, &t2651_TI, &t2651_0_0_0, &t2651_1_0_0, t2651_IOs, &t2651_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2651), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2676_TI;

#include "t36.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<JewelMine.Engine.Models.Coordinates>
extern MethodInfo m31966_MI;
static PropertyInfo t2676____Current_PropertyInfo = 
{
	&t2676_TI, "Current", &m31966_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2676_PIs[] =
{
	&t2676____Current_PropertyInfo,
	NULL
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31966_GM;
MethodInfo m31966_MI = 
{
	"get_Current", NULL, &t2676_TI, &t36_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31966_GM};
static MethodInfo* t2676_MIs[] =
{
	&m31966_MI,
	NULL
};
static TypeInfo* t2676_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2676_0_0_0;
extern Il2CppType t2676_1_0_0;
struct t2676;
extern Il2CppGenericClass t2676_GC;
TypeInfo t2676_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2676_MIs, t2676_PIs, NULL, NULL, NULL, NULL, NULL, &t2676_TI, t2676_ITIs, NULL, &EmptyCustomAttributesCache, &t2676_TI, &t2676_0_0_0, &t2676_1_0_0, NULL, &t2676_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2660.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2660_TI;
#include "t2660MD.h"

extern TypeInfo t36_TI;
extern MethodInfo m13415_MI;
extern MethodInfo m24345_MI;
struct t107;
#define m24345(__this, p0, method) (t36 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<JewelMine.Engine.Models.Coordinates>
extern Il2CppType t107_0_0_1;
FieldInfo t2660_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t2660_TI, offsetof(t2660, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2660_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2660_TI, offsetof(t2660, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2660_FIs[] =
{
	&t2660_f0_FieldInfo,
	&t2660_f1_FieldInfo,
	NULL
};
extern MethodInfo m13412_MI;
static PropertyInfo t2660____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2660_TI, "System.Collections.IEnumerator.Current", &m13412_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2660____Current_PropertyInfo = 
{
	&t2660_TI, "Current", &m13415_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2660_PIs[] =
{
	&t2660____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2660____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t2660_m13411_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13411_GM;
MethodInfo m13411_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t2660_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2660_m13411_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13411_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13412_GM;
MethodInfo m13412_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t2660_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13412_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13413_GM;
MethodInfo m13413_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t2660_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13413_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13414_GM;
MethodInfo m13414_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t2660_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13414_GM};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13415_GM;
MethodInfo m13415_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t2660_TI, &t36_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13415_GM};
static MethodInfo* t2660_MIs[] =
{
	&m13411_MI,
	&m13412_MI,
	&m13413_MI,
	&m13414_MI,
	&m13415_MI,
	NULL
};
extern MethodInfo m13414_MI;
extern MethodInfo m13413_MI;
static MethodInfo* t2660_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m13412_MI,
	&m13414_MI,
	&m13413_MI,
	&m13415_MI,
};
static TypeInfo* t2660_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t2676_TI,
};
static Il2CppInterfaceOffsetPair t2660_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t2676_TI, 7},
};
extern TypeInfo t36_TI;
static Il2CppRGCTXData t2660_RGCTXData[3] = 
{
	&m13415_MI/* Method Usage */,
	&t36_TI/* Class Usage */,
	&m24345_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2660_0_0_0;
extern Il2CppType t2660_1_0_0;
extern Il2CppGenericClass t2660_GC;
TypeInfo t2660_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2660_MIs, t2660_PIs, t2660_FIs, NULL, &t267_TI, NULL, &t107_TI, &t2660_TI, t2660_ITIs, t2660_VT, &EmptyCustomAttributesCache, &t2660_TI, &t2660_0_0_0, &t2660_1_0_0, t2660_IOs, &t2660_GC, NULL, NULL, NULL, t2660_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2660)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2677_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<JewelMine.Engine.Models.Coordinates>
extern MethodInfo m31967_MI;
static PropertyInfo t2677____Count_PropertyInfo = 
{
	&t2677_TI, "Count", &m31967_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m31968_MI;
static PropertyInfo t2677____IsReadOnly_PropertyInfo = 
{
	&t2677_TI, "IsReadOnly", &m31968_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2677_PIs[] =
{
	&t2677____Count_PropertyInfo,
	&t2677____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31967_GM;
MethodInfo m31967_MI = 
{
	"get_Count", NULL, &t2677_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31967_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31968_GM;
MethodInfo m31968_MI = 
{
	"get_IsReadOnly", NULL, &t2677_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31968_GM};
extern Il2CppType t36_0_0_0;
extern Il2CppType t36_0_0_0;
static ParameterInfo t2677_m31969_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31969_GM;
MethodInfo m31969_MI = 
{
	"Add", NULL, &t2677_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2677_m31969_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31969_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31970_GM;
MethodInfo m31970_MI = 
{
	"Clear", NULL, &t2677_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31970_GM};
extern Il2CppType t36_0_0_0;
static ParameterInfo t2677_m31971_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31971_GM;
MethodInfo m31971_MI = 
{
	"Contains", NULL, &t2677_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2677_m31971_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31971_GM};
extern Il2CppType t58_0_0_0;
extern Il2CppType t58_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2677_m31972_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31972_GM;
MethodInfo m31972_MI = 
{
	"CopyTo", NULL, &t2677_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2677_m31972_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31972_GM};
extern Il2CppType t36_0_0_0;
static ParameterInfo t2677_m31973_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31973_GM;
MethodInfo m31973_MI = 
{
	"Remove", NULL, &t2677_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2677_m31973_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31973_GM};
static MethodInfo* t2677_MIs[] =
{
	&m31967_MI,
	&m31968_MI,
	&m31969_MI,
	&m31970_MI,
	&m31971_MI,
	&m31972_MI,
	&m31973_MI,
	NULL
};
extern TypeInfo t2675_TI;
static TypeInfo* t2677_ITIs[] = 
{
	&t739_TI,
	&t2675_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2677_0_0_0;
extern Il2CppType t2677_1_0_0;
struct t2677;
extern Il2CppGenericClass t2677_GC;
TypeInfo t2677_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t2677_MIs, t2677_PIs, NULL, NULL, NULL, NULL, NULL, &t2677_TI, t2677_ITIs, NULL, &EmptyCustomAttributesCache, &t2677_TI, &t2677_0_0_0, &t2677_1_0_0, NULL, &t2677_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<JewelMine.Engine.Models.Coordinates>
extern Il2CppType t2676_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31974_GM;
MethodInfo m31974_MI = 
{
	"GetEnumerator", NULL, &t2675_TI, &t2676_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31974_GM};
static MethodInfo* t2675_MIs[] =
{
	&m31974_MI,
	NULL
};
static TypeInfo* t2675_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2675_0_0_0;
extern Il2CppType t2675_1_0_0;
struct t2675;
extern Il2CppGenericClass t2675_GC;
TypeInfo t2675_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t2675_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2675_TI, t2675_ITIs, NULL, &EmptyCustomAttributesCache, &t2675_TI, &t2675_0_0_0, &t2675_1_0_0, NULL, &t2675_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2683_TI;



// Metadata Definition System.Collections.Generic.IList`1<JewelMine.Engine.Models.Coordinates>
extern MethodInfo m31975_MI;
extern MethodInfo m31976_MI;
static PropertyInfo t2683____Item_PropertyInfo = 
{
	&t2683_TI, "Item", &m31975_MI, &m31976_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2683_PIs[] =
{
	&t2683____Item_PropertyInfo,
	NULL
};
extern Il2CppType t36_0_0_0;
static ParameterInfo t2683_m31977_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31977_GM;
MethodInfo m31977_MI = 
{
	"IndexOf", NULL, &t2683_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2683_m31977_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31977_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t36_0_0_0;
static ParameterInfo t2683_m31978_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31978_GM;
MethodInfo m31978_MI = 
{
	"Insert", NULL, &t2683_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2683_m31978_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31978_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2683_m31979_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31979_GM;
MethodInfo m31979_MI = 
{
	"RemoveAt", NULL, &t2683_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2683_m31979_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31979_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2683_m31975_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31975_GM;
MethodInfo m31975_MI = 
{
	"get_Item", NULL, &t2683_TI, &t36_0_0_0, RuntimeInvoker_t5_t110, t2683_m31975_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31975_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t36_0_0_0;
static ParameterInfo t2683_m31976_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31976_GM;
MethodInfo m31976_MI = 
{
	"set_Item", NULL, &t2683_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2683_m31976_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31976_GM};
static MethodInfo* t2683_MIs[] =
{
	&m31977_MI,
	&m31978_MI,
	&m31979_MI,
	&m31975_MI,
	&m31976_MI,
	NULL
};
static TypeInfo* t2683_ITIs[] = 
{
	&t739_TI,
	&t2677_TI,
	&t2675_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2683_0_0_0;
extern Il2CppType t2683_1_0_0;
struct t2683;
extern Il2CppGenericClass t2683_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t2683_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t2683_MIs, t2683_PIs, NULL, NULL, NULL, NULL, NULL, &t2683_TI, t2683_ITIs, NULL, &t2240__CustomAttributeCache, &t2683_TI, &t2683_0_0_0, &t2683_1_0_0, NULL, &t2683_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t159.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t159_TI;
#include "t159MD.h"

#include "t2668.h"
#include "t2664.h"
#include "t2665.h"
#include "t2666.h"
#include "t2555.h"
#include "t2667.h"
extern TypeInfo t2663_TI;
extern TypeInfo t55_TI;
extern TypeInfo t2668_TI;
extern TypeInfo t2661_TI;
extern TypeInfo t2662_TI;
extern TypeInfo t2664_TI;
extern TypeInfo t2665_TI;
extern TypeInfo t2666_TI;
extern TypeInfo t2555_TI;
#include "t2664MD.h"
#include "t2665MD.h"
#include "t2666MD.h"
#include "t2668MD.h"
#include "t2555MD.h"
extern MethodInfo m13462_MI;
extern MethodInfo m13463_MI;
extern MethodInfo m24356_MI;
extern MethodInfo m13449_MI;
extern MethodInfo m13451_MI;
extern MethodInfo m13436_MI;
extern MethodInfo m31306_MI;
extern MethodInfo m13435_MI;
extern MethodInfo m13446_MI;
extern MethodInfo m610_MI;
extern MethodInfo m13440_MI;
extern MethodInfo m13447_MI;
extern MethodInfo m13450_MI;
extern MethodInfo m13452_MI;
extern MethodInfo m13434_MI;
extern MethodInfo m13459_MI;
extern MethodInfo m13460_MI;
extern MethodInfo m31311_MI;
extern MethodInfo m31313_MI;
extern MethodInfo m31305_MI;
extern MethodInfo m13470_MI;
extern MethodInfo m24358_MI;
extern MethodInfo m13443_MI;
extern MethodInfo m13444_MI;
extern MethodInfo m13548_MI;
extern MethodInfo m13552_MI;
extern MethodInfo m13464_MI;
extern MethodInfo m13448_MI;
extern MethodInfo m13454_MI;
extern MethodInfo m12480_MI;
extern MethodInfo m24360_MI;
extern MethodInfo m24368_MI;
struct t107;
 void m24356 (t5 * __this, t55** p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t107;
#include "t2671.h"
 int32_t m24358 (t5 * __this, t55* p0, int32_t p1, int32_t p2, int32_t p3, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t107;
 void m24360 (t5 * __this, t55* p0, int32_t p1, int32_t p2, t5* p3, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t107;
 void m24368 (t5 * __this, t55* p0, int32_t p1, t2667 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m609_MI;
 void m609 (t159 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t159_TI));
		__this->f1 = (((t159_SFs*)InitializedTypeInfo(&t159_TI)->static_fields)->f4);
		return;
	}
}
extern MethodInfo m13416_MI;
 void m13416 (t159 * __this, t5* p0, MethodInfo* method){
	t5* V_0 = {0};
	{
		m460(__this, &m460_MI);
		m13451(__this, p0, &m13451_MI);
		V_0 = ((t5*)IsInst(p0, InitializedTypeInfo(&t2663_TI)));
		if (V_0)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t159_TI));
		__this->f1 = (((t159_SFs*)InitializedTypeInfo(&t159_TI)->static_fields)->f4);
		m13436(__this, p0, &m13436_MI);
		goto IL_0043;
	}

IL_002b:
	{
		int32_t L_0 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m31306_MI, V_0);
		__this->f1 = ((t55*)SZArrayNew(InitializedTypeInfo(&t55_TI), L_0));
		m13435(__this, V_0, &m13435_MI);
	}

IL_0043:
	{
		return;
	}
}
extern MethodInfo m13417_MI;
 void m13417 (t159 * __this, int32_t p0, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		if ((((int32_t)p0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		t1181 * L_0 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4767(L_0, (t11*) &_stringLiteral226, &m4767_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0015:
	{
		__this->f1 = ((t55*)SZArrayNew(InitializedTypeInfo(&t55_TI), p0));
		return;
	}
}
extern MethodInfo m13418_MI;
 void m13418 (t5 * __this, MethodInfo* method){
	{
		((t159_SFs*)InitializedTypeInfo(&t159_TI)->static_fields)->f4 = ((t55*)SZArrayNew(InitializedTypeInfo(&t55_TI), 0));
		return;
	}
}
extern MethodInfo m13419_MI;
 t5* m13419 (t159 * __this, MethodInfo* method){
	{
		t2668  L_0 = m13446(__this, &m13446_MI);
		t2668  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t2668_TI), &L_1);
		return (t5*)L_2;
	}
}
extern MethodInfo m13420_MI;
 void m13420 (t159 * __this, t107 * p0, int32_t p1, MethodInfo* method){
	{
		t55* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		m6741(NULL, (t107 *)(t107 *)L_0, 0, p0, p1, L_1, &m6741_MI);
		return;
	}
}
extern MethodInfo m13421_MI;
 t5 * m13421 (t159 * __this, MethodInfo* method){
	{
		t2668  L_0 = m13446(__this, &m13446_MI);
		t2668  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t2668_TI), &L_1);
		return (t5 *)L_2;
	}
}
extern MethodInfo m13422_MI;
 int32_t m13422 (t159 * __this, t5 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			VirtActionInvoker1< int32_t >::Invoke(&m610_MI, __this, ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t110_TI))))));
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
		__exception_local = (t142 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t723_TI, e.ex->object.klass))
			goto IL_0019;
		if(il2cpp_codegen_class_is_assignable_from (&t1982_TI, e.ex->object.klass))
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
		t160 * L_1 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_1, (t11*) &_stringLiteral1218, &m2581_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_002a:
	{
		return V_0;
	}
}
extern MethodInfo m13423_MI;
 bool m13423 (t159 * __this, t5 * p0, MethodInfo* method){
	bool V_0 = false;
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			bool L_0 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(&m13440_MI, __this, ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t110_TI))))));
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
		__exception_local = (t142 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t723_TI, e.ex->object.klass))
			goto IL_0011;
		if(il2cpp_codegen_class_is_assignable_from (&t1982_TI, e.ex->object.klass))
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
extern MethodInfo m13424_MI;
 int32_t m13424 (t159 * __this, t5 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&m13447_MI, __this, ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t110_TI))))));
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
		__exception_local = (t142 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t723_TI, e.ex->object.klass))
			goto IL_0011;
		if(il2cpp_codegen_class_is_assignable_from (&t1982_TI, e.ex->object.klass))
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
extern MethodInfo m13425_MI;
 void m13425 (t159 * __this, int32_t p0, t5 * p1, MethodInfo* method){
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		m13449(__this, p0, &m13449_MI);
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			VirtActionInvoker2< int32_t, int32_t >::Invoke(&m13450_MI, __this, p0, ((*(int32_t*)((int32_t*)UnBox (p1, InitializedTypeInfo(&t110_TI))))));
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
		__exception_local = (t142 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t723_TI, e.ex->object.klass))
			goto IL_0018;
		if(il2cpp_codegen_class_is_assignable_from (&t1982_TI, e.ex->object.klass))
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
		t160 * L_0 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_0, (t11*) &_stringLiteral1218, &m2581_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0029:
	{
		return;
	}
}
extern MethodInfo m13426_MI;
 void m13426 (t159 * __this, t5 * p0, MethodInfo* method){
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			VirtFuncInvoker1< bool, int32_t >::Invoke(&m13452_MI, __this, ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t110_TI))))));
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
		__exception_local = (t142 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t723_TI, e.ex->object.klass))
			goto IL_0011;
		if(il2cpp_codegen_class_is_assignable_from (&t1982_TI, e.ex->object.klass))
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
extern MethodInfo m13427_MI;
 bool m13427 (t159 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m13428_MI;
 bool m13428 (t159 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m13429_MI;
 t5 * m13429 (t159 * __this, MethodInfo* method){
	{
		return __this;
	}
}
extern MethodInfo m13430_MI;
 bool m13430 (t159 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m13431_MI;
 bool m13431 (t159 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m13432_MI;
 t5 * m13432 (t159 * __this, int32_t p0, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&m13462_MI, __this, p0);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t110_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m13433_MI;
 void m13433 (t159 * __this, int32_t p0, t5 * p1, MethodInfo* method){
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			VirtActionInvoker2< int32_t, int32_t >::Invoke(&m13463_MI, __this, p0, ((*(int32_t*)((int32_t*)UnBox (p1, InitializedTypeInfo(&t110_TI))))));
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
		__exception_local = (t142 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t723_TI, e.ex->object.klass))
			goto IL_0011;
		if(il2cpp_codegen_class_is_assignable_from (&t1982_TI, e.ex->object.klass))
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
		t160 * L_0 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_0, (t11*) &_stringLiteral442, &m2581_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0022:
	{
		return;
	}
}
 void m610 (t159 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f2);
		t55* L_1 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)(((int32_t)(((t107 *)L_1)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		m13434(__this, 1, &m13434_MI);
	}

IL_0017:
	{
		t55* L_2 = (__this->f1);
		int32_t L_3 = (__this->f2);
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->f2 = ((int32_t)(L_4+1));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, V_0)) = (int32_t)p0;
		int32_t L_5 = (__this->f3);
		__this->f3 = ((int32_t)(L_5+1));
		return;
	}
}
 void m13434 (t159 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f2);
		V_0 = ((int32_t)(L_0+p0));
		t55* L_1 = (__this->f1);
		if ((((int32_t)V_0) <= ((int32_t)(((int32_t)(((t107 *)L_1)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_2 = m13459(__this, &m13459_MI);
		int32_t L_3 = m5931(NULL, ((int32_t)((int32_t)L_2*(int32_t)2)), 4, &m5931_MI);
		int32_t L_4 = m5931(NULL, L_3, V_0, &m5931_MI);
		m13460(__this, L_4, &m13460_MI);
	}

IL_002e:
	{
		return;
	}
}
 void m13435 (t159 * __this, t5* p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m31306_MI, p0);
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
		m13434(__this, V_0, &m13434_MI);
		t55* L_1 = (__this->f1);
		int32_t L_2 = (__this->f2);
		InterfaceActionInvoker2< t55*, int32_t >::Invoke(&m31311_MI, p0, L_1, L_2);
		int32_t L_3 = (__this->f2);
		__this->f2 = ((int32_t)(L_3+V_0));
		return;
	}
}
 void m13436 (t159 * __this, t5* p0, MethodInfo* method){
	int32_t V_0 = 0;
	t5* V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t5* L_0 = (t5*)InterfaceFuncInvoker0< t5* >::Invoke(&m31313_MI, p0);
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
			int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m31305_MI, V_1);
			V_0 = L_1;
			VirtActionInvoker1< int32_t >::Invoke(&m610_MI, __this, V_0);
		}

IL_0017:
		{
			bool L_2 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m746_MI, V_1);
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
		__last_unhandled_exception = (t142 *)e.ex;
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
					t142 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}

IL_0025:
		{
			InterfaceActionInvoker0::Invoke(&m516_MI, V_1);
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
					t142 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}
	} // end finally (depth: 1)

IL_002c:
	{
		return;
	}
}
extern MethodInfo m13437_MI;
 void m13437 (t159 * __this, t5* p0, MethodInfo* method){
	t5* V_0 = {0};
	{
		m13451(__this, p0, &m13451_MI);
		V_0 = ((t5*)IsInst(p0, InitializedTypeInfo(&t2663_TI)));
		if (!V_0)
		{
			goto IL_001a;
		}
	}
	{
		m13435(__this, V_0, &m13435_MI);
		goto IL_0021;
	}

IL_001a:
	{
		m13436(__this, p0, &m13436_MI);
	}

IL_0021:
	{
		int32_t L_0 = (__this->f3);
		__this->f3 = ((int32_t)(L_0+1));
		return;
	}
}
extern MethodInfo m13438_MI;
 t2664 * m13438 (t159 * __this, MethodInfo* method){
	{
		t2664 * L_0 = (t2664 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2664_TI));
		m13470(L_0, __this, &m13470_MI);
		return L_0;
	}
}
extern MethodInfo m13439_MI;
 void m13439 (t159 * __this, MethodInfo* method){
	{
		t55* L_0 = (__this->f1);
		t55* L_1 = (__this->f1);
		m5904(NULL, (t107 *)(t107 *)L_0, 0, (((int32_t)(((t107 *)L_1)->max_length))), &m5904_MI);
		__this->f2 = 0;
		int32_t L_2 = (__this->f3);
		__this->f3 = ((int32_t)(L_2+1));
		return;
	}
}
 bool m13440 (t159 * __this, int32_t p0, MethodInfo* method){
	{
		t55* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		int32_t L_2 = m24358(NULL, L_0, p0, 0, L_1, &m24358_MI);
		return ((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m13441_MI;
 void m13441 (t159 * __this, t55* p0, int32_t p1, MethodInfo* method){
	{
		t55* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		m6741(NULL, (t107 *)(t107 *)L_0, 0, (t107 *)(t107 *)p0, p1, L_1, &m6741_MI);
		return;
	}
}
extern MethodInfo m13442_MI;
 int32_t m13442 (t159 * __this, t2665 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t159_TI));
		m13443(NULL, p0, &m13443_MI);
		int32_t L_0 = (__this->f2);
		int32_t L_1 = m13444(__this, 0, L_0, p0, &m13444_MI);
		V_0 = L_1;
		if ((((int32_t)V_0) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		t55* L_2 = (__this->f1);
		int32_t L_3 = V_0;
		G_B3_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_3));
		goto IL_0030;
	}

IL_0027:
	{
		Initobj (&t110_TI, (&V_1));
		G_B3_0 = V_1;
	}

IL_0030:
	{
		return G_B3_0;
	}
}
 void m13443 (t5 * __this, t2665 * p0, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3595(L_0, (t11*) &_stringLiteral1075, &m3595_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		return;
	}
}
 int32_t m13444 (t159 * __this, int32_t p0, int32_t p1, t2665 * p2, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int32_t)(p0+p1));
		V_1 = p0;
		goto IL_0022;
	}

IL_0008:
	{
		t55* L_0 = (__this->f1);
		int32_t L_1 = V_1;
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(&m13548_MI, p2, (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_1)));
		if (!L_2)
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
extern MethodInfo m13445_MI;
 void m13445 (t159 * __this, t2666 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3595(L_0, (t11*) &_stringLiteral1076, &m3595_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0028;
	}

IL_0012:
	{
		t55* L_1 = (__this->f1);
		int32_t L_2 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(&m13552_MI, p0, (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_2)));
		V_0 = ((int32_t)(V_0+1));
	}

IL_0028:
	{
		int32_t L_3 = (__this->f2);
		if ((((int32_t)V_0) < ((int32_t)L_3)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
 t2668  m13446 (t159 * __this, MethodInfo* method){
	{
		t2668  L_0 = {0};
		m13464(&L_0, __this, &m13464_MI);
		return L_0;
	}
}
 int32_t m13447 (t159 * __this, int32_t p0, MethodInfo* method){
	{
		t55* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		int32_t L_2 = m24358(NULL, L_0, p0, 0, L_1, &m24358_MI);
		return L_2;
	}
}
 void m13448 (t159 * __this, int32_t p0, int32_t p1, MethodInfo* method){
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
		t55* L_1 = (__this->f1);
		t55* L_2 = (__this->f1);
		int32_t L_3 = (__this->f2);
		m6741(NULL, (t107 *)(t107 *)L_1, p0, (t107 *)(t107 *)L_2, ((int32_t)(p0+p1)), ((int32_t)(L_3-p0)), &m6741_MI);
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
		t55* L_5 = (__this->f1);
		int32_t L_6 = (__this->f2);
		m5904(NULL, (t107 *)(t107 *)L_5, L_6, ((-p1)), &m5904_MI);
	}

IL_0056:
	{
		return;
	}
}
 void m13449 (t159 * __this, int32_t p0, MethodInfo* method){
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
		t1181 * L_1 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4767(L_1, (t11*) &_stringLiteral228, &m4767_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		return;
	}
}
 void m13450 (t159 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		m13449(__this, p0, &m13449_MI);
		int32_t L_0 = (__this->f2);
		t55* L_1 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)(((int32_t)(((t107 *)L_1)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		m13434(__this, 1, &m13434_MI);
	}

IL_001e:
	{
		m13448(__this, p0, 1, &m13448_MI);
		t55* L_2 = (__this->f1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, p0)) = (int32_t)p1;
		int32_t L_3 = (__this->f3);
		__this->f3 = ((int32_t)(L_3+1));
		return;
	}
}
 void m13451 (t159 * __this, t5* p0, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3595(L_0, (t11*) &_stringLiteral225, &m3595_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		return;
	}
}
 bool m13452 (t159 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&m13447_MI, __this, p0);
		V_0 = L_0;
		if ((((int32_t)V_0) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker1< int32_t >::Invoke(&m13454_MI, __this, V_0);
	}

IL_0013:
	{
		return ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m13453_MI;
 int32_t m13453 (t159 * __this, t2665 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t159_TI));
		m13443(NULL, p0, &m13443_MI);
		V_0 = 0;
		V_1 = 0;
		V_0 = 0;
		goto IL_0028;
	}

IL_000e:
	{
		t55* L_0 = (__this->f1);
		int32_t L_1 = V_0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(&m13548_MI, p0, (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_1)));
		if (!L_2)
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
		int32_t L_3 = (__this->f2);
		if ((((int32_t)V_0) < ((int32_t)L_3)))
		{
			goto IL_000e;
		}
	}

IL_0031:
	{
		int32_t L_4 = (__this->f2);
		if ((((uint32_t)V_0) != ((uint32_t)L_4)))
		{
			goto IL_003c;
		}
	}
	{
		return 0;
	}

IL_003c:
	{
		int32_t L_5 = (__this->f3);
		__this->f3 = ((int32_t)(L_5+1));
		V_1 = ((int32_t)(V_0+1));
		goto IL_0084;
	}

IL_0050:
	{
		t55* L_6 = (__this->f1);
		int32_t L_7 = V_1;
		bool L_8 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(&m13548_MI, p0, (*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_7)));
		if (L_8)
		{
			goto IL_0080;
		}
	}
	{
		t55* L_9 = (__this->f1);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)(L_10+1));
		t55* L_11 = (__this->f1);
		int32_t L_12 = V_1;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_9, L_10)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_11, L_12));
	}

IL_0080:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0084:
	{
		int32_t L_13 = (__this->f2);
		if ((((int32_t)V_1) < ((int32_t)L_13)))
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
		t55* L_14 = (__this->f1);
		m5904(NULL, (t107 *)(t107 *)L_14, V_0, ((int32_t)(V_1-V_0)), &m5904_MI);
	}

IL_00a2:
	{
		__this->f2 = V_0;
		return ((int32_t)(V_1-V_0));
	}
}
 void m13454 (t159 * __this, int32_t p0, MethodInfo* method){
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
		t1181 * L_1 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4767(L_1, (t11*) &_stringLiteral228, &m4767_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		m13448(__this, p0, (-1), &m13448_MI);
		t55* L_2 = (__this->f1);
		int32_t L_3 = (__this->f2);
		m5904(NULL, (t107 *)(t107 *)L_2, L_3, 1, &m5904_MI);
		int32_t L_4 = (__this->f3);
		__this->f3 = ((int32_t)(L_4+1));
		return;
	}
}
extern MethodInfo m13455_MI;
 void m13455 (t159 * __this, MethodInfo* method){
	{
		t55* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		m5963(NULL, (t107 *)(t107 *)L_0, 0, L_1, &m5963_MI);
		int32_t L_2 = (__this->f3);
		__this->f3 = ((int32_t)(L_2+1));
		return;
	}
}
extern MethodInfo m13456_MI;
 void m13456 (t159 * __this, MethodInfo* method){
	{
		t55* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2555_TI));
		t2555 * L_2 = m12480(NULL, &m12480_MI);
		m24360(NULL, L_0, 0, L_1, L_2, &m24360_MI);
		int32_t L_3 = (__this->f3);
		__this->f3 = ((int32_t)(L_3+1));
		return;
	}
}
extern MethodInfo m13457_MI;
 void m13457 (t159 * __this, t2667 * p0, MethodInfo* method){
	{
		t55* L_0 = (__this->f1);
		int32_t L_1 = (__this->f2);
		m24368(NULL, L_0, L_1, p0, &m24368_MI);
		int32_t L_2 = (__this->f3);
		__this->f3 = ((int32_t)(L_2+1));
		return;
	}
}
extern MethodInfo m611_MI;
 t55* m611 (t159 * __this, MethodInfo* method){
	t55* V_0 = {0};
	{
		int32_t L_0 = (__this->f2);
		V_0 = ((t55*)SZArrayNew(InitializedTypeInfo(&t55_TI), L_0));
		t55* L_1 = (__this->f1);
		int32_t L_2 = (__this->f2);
		m6740(NULL, (t107 *)(t107 *)L_1, (t107 *)(t107 *)V_0, L_2, &m6740_MI);
		return V_0;
	}
}
extern MethodInfo m13458_MI;
 void m13458 (t159 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		m13460(__this, L_0, &m13460_MI);
		return;
	}
}
 int32_t m13459 (t159 * __this, MethodInfo* method){
	{
		t55* L_0 = (__this->f1);
		return (((int32_t)(((t107 *)L_0)->max_length)));
	}
}
 void m13460 (t159 * __this, int32_t p0, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		if ((((uint32_t)p0) >= ((uint32_t)L_0)))
		{
			goto IL_000f;
		}
	}
	{
		t1181 * L_1 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4991(L_1, &m4991_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		t55** L_2 = &(__this->f1);
		m24356(NULL, L_2, p0, &m24356_MI);
		return;
	}
}
extern MethodInfo m13461_MI;
 int32_t m13461 (t159 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
 int32_t m13462 (t159 * __this, int32_t p0, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0014;
		}
	}
	{
		t1181 * L_1 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4767(L_1, (t11*) &_stringLiteral228, &m4767_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t55* L_2 = (__this->f1);
		int32_t L_3 = p0;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_3));
	}
}
 void m13463 (t159 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		m13449(__this, p0, &m13449_MI);
		int32_t L_0 = (__this->f2);
		if ((((uint32_t)p0) != ((uint32_t)L_0)))
		{
			goto IL_001b;
		}
	}
	{
		t1181 * L_1 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4767(L_1, (t11*) &_stringLiteral228, &m4767_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001b:
	{
		t55* L_2 = (__this->f1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, p0)) = (int32_t)p1;
		return;
	}
}
// Metadata Definition System.Collections.Generic.List`1<System.Int32>
extern Il2CppType t110_0_0_32849;
FieldInfo t159_f0_FieldInfo = 
{
	"DefaultCapacity", &t110_0_0_32849, &t159_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t55_0_0_1;
FieldInfo t159_f1_FieldInfo = 
{
	"_items", &t55_0_0_1, &t159_TI, offsetof(t159, f1), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t159_f2_FieldInfo = 
{
	"_size", &t110_0_0_1, &t159_TI, offsetof(t159, f2), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t159_f3_FieldInfo = 
{
	"_version", &t110_0_0_1, &t159_TI, offsetof(t159, f3), &EmptyCustomAttributesCache};
extern Il2CppType t55_0_0_49;
FieldInfo t159_f4_FieldInfo = 
{
	"EmptyArray", &t55_0_0_49, &t159_TI, offsetof(t159_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t159_FIs[] =
{
	&t159_f0_FieldInfo,
	&t159_f1_FieldInfo,
	&t159_f2_FieldInfo,
	&t159_f3_FieldInfo,
	&t159_f4_FieldInfo,
	NULL
};
static const int32_t t159_f0_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t159_f0_DefaultValue = 
{
	&t159_f0_FieldInfo, { (char*)&t159_f0_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t159_FDVs[] = 
{
	&t159_f0_DefaultValue,
	NULL
};
static PropertyInfo t159____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t159_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13427_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t159____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t159_TI, "System.Collections.ICollection.IsSynchronized", &m13428_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t159____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t159_TI, "System.Collections.ICollection.SyncRoot", &m13429_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t159____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t159_TI, "System.Collections.IList.IsFixedSize", &m13430_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t159____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t159_TI, "System.Collections.IList.IsReadOnly", &m13431_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t159____System_Collections_IList_Item_PropertyInfo = 
{
	&t159_TI, "System.Collections.IList.Item", &m13432_MI, &m13433_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t159____Capacity_PropertyInfo = 
{
	&t159_TI, "Capacity", &m13459_MI, &m13460_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t159____Count_PropertyInfo = 
{
	&t159_TI, "Count", &m13461_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t159____Item_PropertyInfo = 
{
	&t159_TI, "Item", &m13462_MI, &m13463_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t159_PIs[] =
{
	&t159____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t159____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t159____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t159____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t159____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t159____System_Collections_IList_Item_PropertyInfo,
	&t159____Capacity_PropertyInfo,
	&t159____Count_PropertyInfo,
	&t159____Item_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m609_GM;
MethodInfo m609_MI = 
{
	".ctor", (methodPointerType)&m609, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m609_GM};
extern Il2CppType t2661_0_0_0;
extern Il2CppType t2661_0_0_0;
static ParameterInfo t159_m13416_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2661_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13416_GM;
MethodInfo m13416_MI = 
{
	".ctor", (methodPointerType)&m13416, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t159_m13416_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13416_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t159_m13417_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13417_GM;
MethodInfo m13417_MI = 
{
	".ctor", (methodPointerType)&m13417, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t159_m13417_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13417_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13418_GM;
MethodInfo m13418_MI = 
{
	".cctor", (methodPointerType)&m13418, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13418_GM};
extern Il2CppType t2662_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13419_GM;
MethodInfo m13419_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m13419, &t159_TI, &t2662_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13419_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t159_m13420_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13420_GM;
MethodInfo m13420_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m13420, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t159_m13420_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13420_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13421_GM;
MethodInfo m13421_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m13421, &t159_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13421_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t159_m13422_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13422_GM;
MethodInfo m13422_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m13422, &t159_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t159_m13422_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13422_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t159_m13423_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13423_GM;
MethodInfo m13423_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m13423, &t159_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t159_m13423_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13423_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t159_m13424_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13424_GM;
MethodInfo m13424_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m13424, &t159_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t159_m13424_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13424_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t159_m13425_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13425_GM;
MethodInfo m13425_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m13425, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t159_m13425_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13425_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t159_m13426_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13426_GM;
MethodInfo m13426_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m13426, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t159_m13426_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13426_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13427_GM;
MethodInfo m13427_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m13427, &t159_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13427_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13428_GM;
MethodInfo m13428_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m13428, &t159_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13428_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13429_GM;
MethodInfo m13429_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m13429, &t159_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13429_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13430_GM;
MethodInfo m13430_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m13430, &t159_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13430_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13431_GM;
MethodInfo m13431_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m13431, &t159_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13431_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t159_m13432_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13432_GM;
MethodInfo m13432_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m13432, &t159_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t159_m13432_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13432_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t159_m13433_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13433_GM;
MethodInfo m13433_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m13433, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t159_m13433_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13433_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t159_m610_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m610_GM;
MethodInfo m610_MI = 
{
	"Add", (methodPointerType)&m610, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t159_m610_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m610_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t159_m13434_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13434_GM;
MethodInfo m13434_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m13434, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t159_m13434_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13434_GM};
extern Il2CppType t2663_0_0_0;
extern Il2CppType t2663_0_0_0;
static ParameterInfo t159_m13435_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2663_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13435_GM;
MethodInfo m13435_MI = 
{
	"AddCollection", (methodPointerType)&m13435, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t159_m13435_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13435_GM};
extern Il2CppType t2661_0_0_0;
static ParameterInfo t159_m13436_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t2661_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13436_GM;
MethodInfo m13436_MI = 
{
	"AddEnumerable", (methodPointerType)&m13436, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t159_m13436_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13436_GM};
extern Il2CppType t2661_0_0_0;
static ParameterInfo t159_m13437_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2661_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13437_GM;
MethodInfo m13437_MI = 
{
	"AddRange", (methodPointerType)&m13437, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t159_m13437_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13437_GM};
extern Il2CppType t2664_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13438_GM;
MethodInfo m13438_MI = 
{
	"AsReadOnly", (methodPointerType)&m13438, &t159_TI, &t2664_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13438_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13439_GM;
MethodInfo m13439_MI = 
{
	"Clear", (methodPointerType)&m13439, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13439_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t159_m13440_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13440_GM;
MethodInfo m13440_MI = 
{
	"Contains", (methodPointerType)&m13440, &t159_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t159_m13440_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13440_GM};
extern Il2CppType t55_0_0_0;
extern Il2CppType t55_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t159_m13441_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13441_GM;
MethodInfo m13441_MI = 
{
	"CopyTo", (methodPointerType)&m13441, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t159_m13441_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13441_GM};
extern Il2CppType t2665_0_0_0;
extern Il2CppType t2665_0_0_0;
static ParameterInfo t159_m13442_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2665_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13442_GM;
MethodInfo m13442_MI = 
{
	"Find", (methodPointerType)&m13442, &t159_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t159_m13442_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13442_GM};
extern Il2CppType t2665_0_0_0;
static ParameterInfo t159_m13443_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2665_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13443_GM;
MethodInfo m13443_MI = 
{
	"CheckMatch", (methodPointerType)&m13443, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t159_m13443_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13443_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2665_0_0_0;
static ParameterInfo t159_m13444_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t2665_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13444_GM;
MethodInfo m13444_MI = 
{
	"GetIndex", (methodPointerType)&m13444, &t159_TI, &t110_0_0_0, RuntimeInvoker_t110_t110_t110_t5, t159_m13444_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL, &m13444_GM};
extern Il2CppType t2666_0_0_0;
extern Il2CppType t2666_0_0_0;
static ParameterInfo t159_m13445_ParameterInfos[] = 
{
	{"action", 0, 134217728, &EmptyCustomAttributesCache, &t2666_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13445_GM;
MethodInfo m13445_MI = 
{
	"ForEach", (methodPointerType)&m13445, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t159_m13445_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13445_GM};
extern Il2CppType t2668_0_0_0;
extern void* RuntimeInvoker_t2668 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13446_GM;
MethodInfo m13446_MI = 
{
	"GetEnumerator", (methodPointerType)&m13446, &t159_TI, &t2668_0_0_0, RuntimeInvoker_t2668, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13446_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t159_m13447_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13447_GM;
MethodInfo m13447_MI = 
{
	"IndexOf", (methodPointerType)&m13447, &t159_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t159_m13447_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13447_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t159_m13448_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13448_GM;
MethodInfo m13448_MI = 
{
	"Shift", (methodPointerType)&m13448, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t159_m13448_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13448_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t159_m13449_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13449_GM;
MethodInfo m13449_MI = 
{
	"CheckIndex", (methodPointerType)&m13449, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t159_m13449_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13449_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t159_m13450_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13450_GM;
MethodInfo m13450_MI = 
{
	"Insert", (methodPointerType)&m13450, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t159_m13450_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13450_GM};
extern Il2CppType t2661_0_0_0;
static ParameterInfo t159_m13451_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2661_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13451_GM;
MethodInfo m13451_MI = 
{
	"CheckCollection", (methodPointerType)&m13451, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t159_m13451_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13451_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t159_m13452_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13452_GM;
MethodInfo m13452_MI = 
{
	"Remove", (methodPointerType)&m13452, &t159_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t159_m13452_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13452_GM};
extern Il2CppType t2665_0_0_0;
static ParameterInfo t159_m13453_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2665_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13453_GM;
MethodInfo m13453_MI = 
{
	"RemoveAll", (methodPointerType)&m13453, &t159_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t159_m13453_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13453_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t159_m13454_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13454_GM;
MethodInfo m13454_MI = 
{
	"RemoveAt", (methodPointerType)&m13454, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t159_m13454_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13454_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13455_GM;
MethodInfo m13455_MI = 
{
	"Reverse", (methodPointerType)&m13455, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13455_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13456_GM;
MethodInfo m13456_MI = 
{
	"Sort", (methodPointerType)&m13456, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13456_GM};
extern Il2CppType t2667_0_0_0;
extern Il2CppType t2667_0_0_0;
static ParameterInfo t159_m13457_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t2667_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13457_GM;
MethodInfo m13457_MI = 
{
	"Sort", (methodPointerType)&m13457, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t159_m13457_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13457_GM};
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m611_GM;
MethodInfo m611_MI = 
{
	"ToArray", (methodPointerType)&m611, &t159_TI, &t55_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m611_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13458_GM;
MethodInfo m13458_MI = 
{
	"TrimExcess", (methodPointerType)&m13458, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13458_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13459_GM;
MethodInfo m13459_MI = 
{
	"get_Capacity", (methodPointerType)&m13459, &t159_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13459_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t159_m13460_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13460_GM;
MethodInfo m13460_MI = 
{
	"set_Capacity", (methodPointerType)&m13460, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t159_m13460_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13460_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13461_GM;
MethodInfo m13461_MI = 
{
	"get_Count", (methodPointerType)&m13461, &t159_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13461_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t159_m13462_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13462_GM;
MethodInfo m13462_MI = 
{
	"get_Item", (methodPointerType)&m13462, &t159_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t159_m13462_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13462_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t159_m13463_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13463_GM;
MethodInfo m13463_MI = 
{
	"set_Item", (methodPointerType)&m13463, &t159_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t159_m13463_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13463_GM};
static MethodInfo* t159_MIs[] =
{
	&m609_MI,
	&m13416_MI,
	&m13417_MI,
	&m13418_MI,
	&m13419_MI,
	&m13420_MI,
	&m13421_MI,
	&m13422_MI,
	&m13423_MI,
	&m13424_MI,
	&m13425_MI,
	&m13426_MI,
	&m13427_MI,
	&m13428_MI,
	&m13429_MI,
	&m13430_MI,
	&m13431_MI,
	&m13432_MI,
	&m13433_MI,
	&m610_MI,
	&m13434_MI,
	&m13435_MI,
	&m13436_MI,
	&m13437_MI,
	&m13438_MI,
	&m13439_MI,
	&m13440_MI,
	&m13441_MI,
	&m13442_MI,
	&m13443_MI,
	&m13444_MI,
	&m13445_MI,
	&m13446_MI,
	&m13447_MI,
	&m13448_MI,
	&m13449_MI,
	&m13450_MI,
	&m13451_MI,
	&m13452_MI,
	&m13453_MI,
	&m13454_MI,
	&m13455_MI,
	&m13456_MI,
	&m13457_MI,
	&m611_MI,
	&m13458_MI,
	&m13459_MI,
	&m13460_MI,
	&m13461_MI,
	&m13462_MI,
	&m13463_MI,
	NULL
};
static MethodInfo* t159_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m13421_MI,
	&m13461_MI,
	&m13428_MI,
	&m13429_MI,
	&m13420_MI,
	&m13430_MI,
	&m13431_MI,
	&m13432_MI,
	&m13433_MI,
	&m13422_MI,
	&m13439_MI,
	&m13423_MI,
	&m13424_MI,
	&m13425_MI,
	&m13426_MI,
	&m13454_MI,
	&m13461_MI,
	&m13427_MI,
	&m610_MI,
	&m13439_MI,
	&m13440_MI,
	&m13441_MI,
	&m13452_MI,
	&m13419_MI,
	&m13447_MI,
	&m13450_MI,
	&m13454_MI,
	&m13462_MI,
	&m13463_MI,
};
extern TypeInfo t2669_TI;
static TypeInfo* t159_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t2663_TI,
	&t2661_TI,
	&t2669_TI,
};
static Il2CppInterfaceOffsetPair t159_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t2663_TI, 20},
	{ &t2661_TI, 27},
	{ &t2669_TI, 28},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t159_0_0_0;
extern Il2CppType t159_1_0_0;
struct t159;
extern Il2CppGenericClass t159_GC;
extern CustomAttributesCache t1524__CustomAttributeCache;
TypeInfo t159_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t159_MIs, t159_PIs, t159_FIs, NULL, &t5_TI, NULL, NULL, &t159_TI, t159_ITIs, t159_VT, &t1524__CustomAttributeCache, &t159_TI, &t159_0_0_0, &t159_1_0_0, t159_IOs, &t159_GC, NULL, t159_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t159), 0, -1, sizeof(t159_SFs), 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, true, false, false, 51, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m13467_MI;


 void m13464 (t2668 * __this, t159 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		int32_t L_0 = (p0->f3);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m13465_MI;
 t5 * m13465 (t2668 * __this, MethodInfo* method){
	{
		m13467(__this, &m13467_MI);
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		t133 * L_1 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4766(L_1, &m4766_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f3);
		int32_t L_3 = L_2;
		t5 * L_4 = Box(InitializedTypeInfo(&t110_TI), &L_3);
		return L_4;
	}
}
extern MethodInfo m13466_MI;
 void m13466 (t2668 * __this, MethodInfo* method){
	{
		__this->f0 = (t159 *)NULL;
		return;
	}
}
 void m13467 (t2668 * __this, MethodInfo* method){
	{
		t159 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		t2668  L_1 = (*(t2668 *)__this);
		t5 * L_2 = Box(InitializedTypeInfo(&t2668_TI), &L_1);
		t114 * L_3 = m531(L_2, &m531_MI);
		t11* L_4 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3643_MI, L_3);
		t1363 * L_5 = (t1363 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1363_TI));
		m5942(L_5, L_4, &m5942_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = (__this->f2);
		t159 * L_7 = (__this->f0);
		int32_t L_8 = (L_7->f3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		t133 * L_9 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4758(L_9, (t11*) &_stringLiteral1219, &m4758_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0041:
	{
		return;
	}
}
extern MethodInfo m13468_MI;
 bool m13468 (t2668 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	{
		m13467(__this, &m13467_MI);
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
		t159 * L_2 = (__this->f0);
		int32_t L_3 = (L_2->f2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		t159 * L_4 = (__this->f0);
		t55* L_5 = (L_4->f1);
		int32_t L_6 = (__this->f1);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->f1 = ((int32_t)(L_7+1));
		int32_t L_8 = V_0;
		__this->f3 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8));
		return 1;
	}

IL_004d:
	{
		__this->f1 = (-1);
		return 0;
	}
}
extern MethodInfo m13469_MI;
 int32_t m13469 (t2668 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1/Enumerator<System.Int32>
extern Il2CppType t159_0_0_1;
FieldInfo t2668_f0_FieldInfo = 
{
	"l", &t159_0_0_1, &t2668_TI, offsetof(t2668, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2668_f1_FieldInfo = 
{
	"next", &t110_0_0_1, &t2668_TI, offsetof(t2668, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2668_f2_FieldInfo = 
{
	"ver", &t110_0_0_1, &t2668_TI, offsetof(t2668, f2) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2668_f3_FieldInfo = 
{
	"current", &t110_0_0_1, &t2668_TI, offsetof(t2668, f3) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2668_FIs[] =
{
	&t2668_f0_FieldInfo,
	&t2668_f1_FieldInfo,
	&t2668_f2_FieldInfo,
	&t2668_f3_FieldInfo,
	NULL
};
static PropertyInfo t2668____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2668_TI, "System.Collections.IEnumerator.Current", &m13465_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2668____Current_PropertyInfo = 
{
	&t2668_TI, "Current", &m13469_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2668_PIs[] =
{
	&t2668____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2668____Current_PropertyInfo,
	NULL
};
extern Il2CppType t159_0_0_0;
static ParameterInfo t2668_m13464_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t159_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13464_GM;
MethodInfo m13464_MI = 
{
	".ctor", (methodPointerType)&m13464, &t2668_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2668_m13464_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13464_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13465_GM;
MethodInfo m13465_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13465, &t2668_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13465_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13466_GM;
MethodInfo m13466_MI = 
{
	"Dispose", (methodPointerType)&m13466, &t2668_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13466_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13467_GM;
MethodInfo m13467_MI = 
{
	"VerifyState", (methodPointerType)&m13467, &t2668_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13467_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13468_GM;
MethodInfo m13468_MI = 
{
	"MoveNext", (methodPointerType)&m13468, &t2668_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13468_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13469_GM;
MethodInfo m13469_MI = 
{
	"get_Current", (methodPointerType)&m13469, &t2668_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13469_GM};
static MethodInfo* t2668_MIs[] =
{
	&m13464_MI,
	&m13465_MI,
	&m13466_MI,
	&m13467_MI,
	&m13468_MI,
	&m13469_MI,
	NULL
};
static MethodInfo* t2668_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m13465_MI,
	&m13468_MI,
	&m13466_MI,
	&m13469_MI,
};
static TypeInfo* t2668_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t2662_TI,
};
static Il2CppInterfaceOffsetPair t2668_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t2662_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2668_0_0_0;
extern Il2CppType t2668_1_0_0;
extern Il2CppGenericClass t2668_GC;
TypeInfo t2668_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2668_MIs, t2668_PIs, t2668_FIs, NULL, &t267_TI, NULL, &t1524_TI, &t2668_TI, t2668_ITIs, t2668_VT, &EmptyCustomAttributesCache, &t2668_TI, &t2668_0_0_0, &t2668_1_0_0, t2668_IOs, &t2668_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2668)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif

#include "t2670MD.h"
extern MethodInfo m13499_MI;
extern MethodInfo m31314_MI;
extern MethodInfo m13531_MI;
extern MethodInfo m31310_MI;
extern MethodInfo m31316_MI;


 void m13470 (t2664 * __this, t5* p0, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		if (p0)
		{
			goto IL_0014;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3595(L_0, (t11*) &_stringLiteral1220, &m3595_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0014:
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m13471_MI;
 void m13471 (t2664 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m2163(L_0, &m2163_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m13472_MI;
 void m13472 (t2664 * __this, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m2163(L_0, &m2163_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m13473_MI;
 void m13473 (t2664 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m2163(L_0, &m2163_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m13474_MI;
 bool m13474 (t2664 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m2163(L_0, &m2163_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m13475_MI;
 void m13475 (t2664 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m2163(L_0, &m2163_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m13476_MI;
 int32_t m13476 (t2664 * __this, int32_t p0, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&m13499_MI, __this, p0);
		return L_0;
	}
}
extern MethodInfo m13477_MI;
 void m13477 (t2664 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m2163(L_0, &m2163_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m13478_MI;
 bool m13478 (t2664 * __this, MethodInfo* method){
	{
		return 1;
	}
}
extern MethodInfo m13479_MI;
 void m13479 (t2664 * __this, t107 * p0, int32_t p1, MethodInfo* method){
	{
		t5* L_0 = (__this->f0);
		InterfaceActionInvoker2< t107 *, int32_t >::Invoke(&m4754_MI, ((t5 *)Castclass(L_0, InitializedTypeInfo(&t811_TI))), p0, p1);
		return;
	}
}
extern MethodInfo m13480_MI;
 t5 * m13480 (t2664 * __this, MethodInfo* method){
	{
		t5* L_0 = (__this->f0);
		t5 * L_1 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4947_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m13481_MI;
 int32_t m13481 (t2664 * __this, t5 * p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m2163(L_0, &m2163_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m13482_MI;
 void m13482 (t2664 * __this, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m2163(L_0, &m2163_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m13483_MI;
 bool m13483 (t2664 * __this, t5 * p0, MethodInfo* method){
	{
		bool L_0 = m13531(NULL, p0, &m13531_MI);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t5* L_1 = (__this->f0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, int32_t >::Invoke(&m31310_MI, L_1, ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t110_TI))))));
		return L_2;
	}

IL_001a:
	{
		return 0;
	}
}
extern MethodInfo m13484_MI;
 int32_t m13484 (t2664 * __this, t5 * p0, MethodInfo* method){
	{
		bool L_0 = m13531(NULL, p0, &m13531_MI);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t5* L_1 = (__this->f0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m31316_MI, L_1, ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t110_TI))))));
		return L_2;
	}

IL_001a:
	{
		return (-1);
	}
}
extern MethodInfo m13485_MI;
 void m13485 (t2664 * __this, int32_t p0, t5 * p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m2163(L_0, &m2163_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m13486_MI;
 void m13486 (t2664 * __this, t5 * p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m2163(L_0, &m2163_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m13487_MI;
 void m13487 (t2664 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m2163(L_0, &m2163_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m13488_MI;
 bool m13488 (t2664 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m13489_MI;
 t5 * m13489 (t2664 * __this, MethodInfo* method){
	{
		return __this;
	}
}
extern MethodInfo m13490_MI;
 bool m13490 (t2664 * __this, MethodInfo* method){
	{
		return 1;
	}
}
extern MethodInfo m13491_MI;
 bool m13491 (t2664 * __this, MethodInfo* method){
	{
		return 1;
	}
}
extern MethodInfo m13492_MI;
 t5 * m13492 (t2664 * __this, int32_t p0, MethodInfo* method){
	{
		t5* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m31314_MI, L_0, p0);
		int32_t L_2 = L_1;
		t5 * L_3 = Box(InitializedTypeInfo(&t110_TI), &L_2);
		return L_3;
	}
}
extern MethodInfo m13493_MI;
 void m13493 (t2664 * __this, int32_t p0, t5 * p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m2163(L_0, &m2163_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m13494_MI;
 bool m13494 (t2664 * __this, int32_t p0, MethodInfo* method){
	{
		t5* L_0 = (__this->f0);
		bool L_1 = (bool)InterfaceFuncInvoker1< bool, int32_t >::Invoke(&m31310_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m13495_MI;
 void m13495 (t2664 * __this, t55* p0, int32_t p1, MethodInfo* method){
	{
		t5* L_0 = (__this->f0);
		InterfaceActionInvoker2< t55*, int32_t >::Invoke(&m31311_MI, L_0, p0, p1);
		return;
	}
}
extern MethodInfo m13496_MI;
 t5* m13496 (t2664 * __this, MethodInfo* method){
	{
		t5* L_0 = (__this->f0);
		t5* L_1 = (t5*)InterfaceFuncInvoker0< t5* >::Invoke(&m31313_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m13497_MI;
 int32_t m13497 (t2664 * __this, int32_t p0, MethodInfo* method){
	{
		t5* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m31316_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m13498_MI;
 int32_t m13498 (t2664 * __this, MethodInfo* method){
	{
		t5* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m31306_MI, L_0);
		return L_1;
	}
}
 int32_t m13499 (t2664 * __this, int32_t p0, MethodInfo* method){
	{
		t5* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m31314_MI, L_0, p0);
		return L_1;
	}
}
// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
extern Il2CppType t2669_0_0_1;
FieldInfo t2664_f0_FieldInfo = 
{
	"list", &t2669_0_0_1, &t2664_TI, offsetof(t2664, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2664_FIs[] =
{
	&t2664_f0_FieldInfo,
	NULL
};
static PropertyInfo t2664____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t2664_TI, "System.Collections.Generic.IList<T>.Item", &m13476_MI, &m13477_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2664____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2664_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13478_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2664____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2664_TI, "System.Collections.ICollection.IsSynchronized", &m13488_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2664____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2664_TI, "System.Collections.ICollection.SyncRoot", &m13489_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2664____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2664_TI, "System.Collections.IList.IsFixedSize", &m13490_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2664____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2664_TI, "System.Collections.IList.IsReadOnly", &m13491_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2664____System_Collections_IList_Item_PropertyInfo = 
{
	&t2664_TI, "System.Collections.IList.Item", &m13492_MI, &m13493_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2664____Count_PropertyInfo = 
{
	&t2664_TI, "Count", &m13498_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2664____Item_PropertyInfo = 
{
	&t2664_TI, "Item", &m13499_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2664_PIs[] =
{
	&t2664____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t2664____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2664____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2664____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2664____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2664____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2664____System_Collections_IList_Item_PropertyInfo,
	&t2664____Count_PropertyInfo,
	&t2664____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2669_0_0_0;
extern Il2CppType t2669_0_0_0;
static ParameterInfo t2664_m13470_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2669_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13470_GM;
MethodInfo m13470_MI = 
{
	".ctor", (methodPointerType)&m13470, &t2664_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2664_m13470_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13470_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2664_m13471_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13471_GM;
MethodInfo m13471_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m13471, &t2664_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2664_m13471_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13471_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13472_GM;
MethodInfo m13472_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m13472, &t2664_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13472_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2664_m13473_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13473_GM;
MethodInfo m13473_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m13473, &t2664_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t2664_m13473_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13473_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2664_m13474_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13474_GM;
MethodInfo m13474_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m13474, &t2664_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t2664_m13474_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13474_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2664_m13475_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13475_GM;
MethodInfo m13475_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m13475, &t2664_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2664_m13475_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13475_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2664_m13476_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13476_GM;
MethodInfo m13476_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m13476, &t2664_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t2664_m13476_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13476_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2664_m13477_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13477_GM;
MethodInfo m13477_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m13477, &t2664_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t2664_m13477_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13477_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13478_GM;
MethodInfo m13478_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m13478, &t2664_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13478_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2664_m13479_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13479_GM;
MethodInfo m13479_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m13479, &t2664_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2664_m13479_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13479_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13480_GM;
MethodInfo m13480_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m13480, &t2664_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13480_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2664_m13481_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13481_GM;
MethodInfo m13481_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m13481, &t2664_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2664_m13481_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13481_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13482_GM;
MethodInfo m13482_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m13482, &t2664_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13482_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2664_m13483_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13483_GM;
MethodInfo m13483_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m13483, &t2664_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2664_m13483_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13483_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2664_m13484_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13484_GM;
MethodInfo m13484_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m13484, &t2664_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2664_m13484_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13484_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2664_m13485_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13485_GM;
MethodInfo m13485_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m13485, &t2664_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2664_m13485_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13485_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2664_m13486_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13486_GM;
MethodInfo m13486_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m13486, &t2664_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2664_m13486_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13486_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2664_m13487_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13487_GM;
MethodInfo m13487_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m13487, &t2664_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2664_m13487_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13487_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13488_GM;
MethodInfo m13488_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m13488, &t2664_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13488_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13489_GM;
MethodInfo m13489_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m13489, &t2664_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13489_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13490_GM;
MethodInfo m13490_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m13490, &t2664_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13490_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13491_GM;
MethodInfo m13491_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m13491, &t2664_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13491_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2664_m13492_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13492_GM;
MethodInfo m13492_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m13492, &t2664_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t2664_m13492_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13492_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2664_m13493_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13493_GM;
MethodInfo m13493_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m13493, &t2664_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2664_m13493_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13493_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2664_m13494_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13494_GM;
MethodInfo m13494_MI = 
{
	"Contains", (methodPointerType)&m13494, &t2664_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t2664_m13494_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13494_GM};
extern Il2CppType t55_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2664_m13495_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13495_GM;
MethodInfo m13495_MI = 
{
	"CopyTo", (methodPointerType)&m13495, &t2664_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2664_m13495_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13495_GM};
extern Il2CppType t2662_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13496_GM;
MethodInfo m13496_MI = 
{
	"GetEnumerator", (methodPointerType)&m13496, &t2664_TI, &t2662_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13496_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2664_m13497_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13497_GM;
MethodInfo m13497_MI = 
{
	"IndexOf", (methodPointerType)&m13497, &t2664_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t2664_m13497_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13497_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13498_GM;
MethodInfo m13498_MI = 
{
	"get_Count", (methodPointerType)&m13498, &t2664_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13498_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2664_m13499_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13499_GM;
MethodInfo m13499_MI = 
{
	"get_Item", (methodPointerType)&m13499, &t2664_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t2664_m13499_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13499_GM};
static MethodInfo* t2664_MIs[] =
{
	&m13470_MI,
	&m13471_MI,
	&m13472_MI,
	&m13473_MI,
	&m13474_MI,
	&m13475_MI,
	&m13476_MI,
	&m13477_MI,
	&m13478_MI,
	&m13479_MI,
	&m13480_MI,
	&m13481_MI,
	&m13482_MI,
	&m13483_MI,
	&m13484_MI,
	&m13485_MI,
	&m13486_MI,
	&m13487_MI,
	&m13488_MI,
	&m13489_MI,
	&m13490_MI,
	&m13491_MI,
	&m13492_MI,
	&m13493_MI,
	&m13494_MI,
	&m13495_MI,
	&m13496_MI,
	&m13497_MI,
	&m13498_MI,
	&m13499_MI,
	NULL
};
static MethodInfo* t2664_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m13480_MI,
	&m13498_MI,
	&m13488_MI,
	&m13489_MI,
	&m13479_MI,
	&m13490_MI,
	&m13491_MI,
	&m13492_MI,
	&m13493_MI,
	&m13481_MI,
	&m13482_MI,
	&m13483_MI,
	&m13484_MI,
	&m13485_MI,
	&m13486_MI,
	&m13487_MI,
	&m13498_MI,
	&m13478_MI,
	&m13471_MI,
	&m13472_MI,
	&m13494_MI,
	&m13495_MI,
	&m13474_MI,
	&m13497_MI,
	&m13473_MI,
	&m13475_MI,
	&m13476_MI,
	&m13477_MI,
	&m13496_MI,
	&m13499_MI,
};
static TypeInfo* t2664_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t2663_TI,
	&t2669_TI,
	&t2661_TI,
};
static Il2CppInterfaceOffsetPair t2664_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t2663_TI, 20},
	{ &t2669_TI, 27},
	{ &t2661_TI, 32},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2664_0_0_0;
extern Il2CppType t2664_1_0_0;
struct t2664;
extern Il2CppGenericClass t2664_GC;
extern CustomAttributesCache t1526__CustomAttributeCache;
TypeInfo t2664_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t2664_MIs, t2664_PIs, t2664_FIs, NULL, &t5_TI, NULL, NULL, &t2664_TI, t2664_ITIs, t2664_VT, &t1526__CustomAttributeCache, &t2664_TI, &t2664_0_0_0, &t2664_1_0_0, t2664_IOs, &t2664_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2664), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t2670.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2670_TI;

extern MethodInfo m31307_MI;
extern MethodInfo m13534_MI;
extern MethodInfo m13535_MI;
extern MethodInfo m13532_MI;
extern MethodInfo m13530_MI;
extern MethodInfo m13523_MI;
extern MethodInfo m13533_MI;
extern MethodInfo m13521_MI;
extern MethodInfo m13526_MI;
extern MethodInfo m13517_MI;
extern MethodInfo m31309_MI;
extern MethodInfo m31317_MI;
extern MethodInfo m31318_MI;
extern MethodInfo m31315_MI;


extern MethodInfo m13500_MI;
 void m13500 (t2670 * __this, MethodInfo* method){
	t159 * V_0 = {0};
	t5 * V_1 = {0};
	{
		m460(__this, &m460_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t159_TI));
		t159 * L_0 = (t159 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t159_TI));
		m609(L_0, &m609_MI);
		V_0 = L_0;
		V_1 = V_0;
		t5 * L_1 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m11151_MI, V_1);
		__this->f1 = L_1;
		__this->f0 = V_0;
		return;
	}
}
extern MethodInfo m13501_MI;
 bool m13501 (t2670 * __this, MethodInfo* method){
	{
		t5* L_0 = (__this->f0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m31307_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m13502_MI;
 void m13502 (t2670 * __this, t107 * p0, int32_t p1, MethodInfo* method){
	{
		t5* L_0 = (__this->f0);
		InterfaceActionInvoker2< t107 *, int32_t >::Invoke(&m4754_MI, ((t5 *)Castclass(L_0, InitializedTypeInfo(&t811_TI))), p0, p1);
		return;
	}
}
extern MethodInfo m13503_MI;
 t5 * m13503 (t2670 * __this, MethodInfo* method){
	{
		t5* L_0 = (__this->f0);
		t5* L_1 = (t5*)InterfaceFuncInvoker0< t5* >::Invoke(&m31313_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m13504_MI;
 int32_t m13504 (t2670 * __this, t5 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t5* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m31306_MI, L_0);
		V_0 = L_1;
		int32_t L_2 = m13532(NULL, p0, &m13532_MI);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(&m13523_MI, __this, V_0, L_2);
		return V_0;
	}
}
extern MethodInfo m13505_MI;
 bool m13505 (t2670 * __this, t5 * p0, MethodInfo* method){
	{
		bool L_0 = m13531(NULL, p0, &m13531_MI);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t5* L_1 = (__this->f0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, int32_t >::Invoke(&m31310_MI, L_1, ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t110_TI))))));
		return L_2;
	}

IL_001a:
	{
		return 0;
	}
}
extern MethodInfo m13506_MI;
 int32_t m13506 (t2670 * __this, t5 * p0, MethodInfo* method){
	{
		bool L_0 = m13531(NULL, p0, &m13531_MI);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t5* L_1 = (__this->f0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m31316_MI, L_1, ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t110_TI))))));
		return L_2;
	}

IL_001a:
	{
		return (-1);
	}
}
extern MethodInfo m13507_MI;
 void m13507 (t2670 * __this, int32_t p0, t5 * p1, MethodInfo* method){
	{
		int32_t L_0 = m13532(NULL, p1, &m13532_MI);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(&m13523_MI, __this, p0, L_0);
		return;
	}
}
extern MethodInfo m13508_MI;
 void m13508 (t2670 * __this, t5 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t5* L_0 = (__this->f0);
		m13533(NULL, L_0, &m13533_MI);
		int32_t L_1 = m13532(NULL, p0, &m13532_MI);
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&m13521_MI, __this, L_1);
		V_0 = L_2;
		VirtActionInvoker1< int32_t >::Invoke(&m13526_MI, __this, V_0);
		return;
	}
}
extern MethodInfo m13509_MI;
 bool m13509 (t2670 * __this, MethodInfo* method){
	{
		t5* L_0 = (__this->f0);
		bool L_1 = m13534(NULL, L_0, &m13534_MI);
		return L_1;
	}
}
extern MethodInfo m13510_MI;
 t5 * m13510 (t2670 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m13511_MI;
 bool m13511 (t2670 * __this, MethodInfo* method){
	{
		t5* L_0 = (__this->f0);
		bool L_1 = m13535(NULL, L_0, &m13535_MI);
		return L_1;
	}
}
extern MethodInfo m13512_MI;
 bool m13512 (t2670 * __this, MethodInfo* method){
	{
		t5* L_0 = (__this->f0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m31307_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m13513_MI;
 t5 * m13513 (t2670 * __this, int32_t p0, MethodInfo* method){
	{
		t5* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m31314_MI, L_0, p0);
		int32_t L_2 = L_1;
		t5 * L_3 = Box(InitializedTypeInfo(&t110_TI), &L_2);
		return L_3;
	}
}
extern MethodInfo m13514_MI;
 void m13514 (t2670 * __this, int32_t p0, t5 * p1, MethodInfo* method){
	{
		int32_t L_0 = m13532(NULL, p1, &m13532_MI);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(&m13530_MI, __this, p0, L_0);
		return;
	}
}
extern MethodInfo m13515_MI;
 void m13515 (t2670 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t5* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m31306_MI, L_0);
		V_0 = L_1;
		VirtActionInvoker2< int32_t, int32_t >::Invoke(&m13523_MI, __this, V_0, p0);
		return;
	}
}
extern MethodInfo m13516_MI;
 void m13516 (t2670 * __this, MethodInfo* method){
	{
		VirtActionInvoker0::Invoke(&m13517_MI, __this);
		return;
	}
}
 void m13517 (t2670 * __this, MethodInfo* method){
	{
		t5* L_0 = (__this->f0);
		InterfaceActionInvoker0::Invoke(&m31309_MI, L_0);
		return;
	}
}
extern MethodInfo m13518_MI;
 bool m13518 (t2670 * __this, int32_t p0, MethodInfo* method){
	{
		t5* L_0 = (__this->f0);
		bool L_1 = (bool)InterfaceFuncInvoker1< bool, int32_t >::Invoke(&m31310_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m13519_MI;
 void m13519 (t2670 * __this, t55* p0, int32_t p1, MethodInfo* method){
	{
		t5* L_0 = (__this->f0);
		InterfaceActionInvoker2< t55*, int32_t >::Invoke(&m31311_MI, L_0, p0, p1);
		return;
	}
}
extern MethodInfo m13520_MI;
 t5* m13520 (t2670 * __this, MethodInfo* method){
	{
		t5* L_0 = (__this->f0);
		t5* L_1 = (t5*)InterfaceFuncInvoker0< t5* >::Invoke(&m31313_MI, L_0);
		return L_1;
	}
}
 int32_t m13521 (t2670 * __this, int32_t p0, MethodInfo* method){
	{
		t5* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m31316_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m13522_MI;
 void m13522 (t2670 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		VirtActionInvoker2< int32_t, int32_t >::Invoke(&m13523_MI, __this, p0, p1);
		return;
	}
}
 void m13523 (t2670 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t5* L_0 = (__this->f0);
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(&m31317_MI, L_0, p0, p1);
		return;
	}
}
extern MethodInfo m13524_MI;
 bool m13524 (t2670 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&m13521_MI, __this, p0);
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
		VirtActionInvoker1< int32_t >::Invoke(&m13526_MI, __this, V_0);
		return 1;
	}
}
extern MethodInfo m13525_MI;
 void m13525 (t2670 * __this, int32_t p0, MethodInfo* method){
	{
		VirtActionInvoker1< int32_t >::Invoke(&m13526_MI, __this, p0);
		return;
	}
}
 void m13526 (t2670 * __this, int32_t p0, MethodInfo* method){
	{
		t5* L_0 = (__this->f0);
		InterfaceActionInvoker1< int32_t >::Invoke(&m31318_MI, L_0, p0);
		return;
	}
}
extern MethodInfo m13527_MI;
 int32_t m13527 (t2670 * __this, MethodInfo* method){
	{
		t5* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m31306_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m13528_MI;
 int32_t m13528 (t2670 * __this, int32_t p0, MethodInfo* method){
	{
		t5* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m31314_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m13529_MI;
 void m13529 (t2670 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		VirtActionInvoker2< int32_t, int32_t >::Invoke(&m13530_MI, __this, p0, p1);
		return;
	}
}
 void m13530 (t2670 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t5* L_0 = (__this->f0);
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(&m31315_MI, L_0, p0, p1);
		return;
	}
}
 bool m13531 (t5 * __this, t5 * p0, MethodInfo* method){
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		if (((t5 *)IsInst(p0, InitializedTypeInfo(&t110_TI))))
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_0 = m532(NULL, LoadTypeToken(&t110_0_0_0), &m532_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6793_MI, L_0);
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
 int32_t m13532 (t5 * __this, t5 * p0, MethodInfo* method){
	{
		bool L_0 = m13531(NULL, p0, &m13531_MI);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t110_TI)))));
	}

IL_000f:
	{
		t160 * L_1 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_1, (t11*) &_stringLiteral1218, &m2581_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
 void m13533 (t5 * __this, t5* p0, MethodInfo* method){
	{
		bool L_0 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m31307_MI, p0);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		t491 * L_1 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m2163(L_1, &m2163_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
 bool m13534 (t5 * __this, t5* p0, MethodInfo* method){
	t5 * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		V_0 = ((t5 *)IsInst(p0, InitializedTypeInfo(&t811_TI)));
		if (!V_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_0 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m11150_MI, V_0);
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
 bool m13535 (t5 * __this, t5* p0, MethodInfo* method){
	t5 * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		V_0 = ((t5 *)IsInst(p0, InitializedTypeInfo(&t1129_TI)));
		if (!V_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_0 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m11152_MI, V_0);
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
// Metadata Definition System.Collections.ObjectModel.Collection`1<System.Int32>
extern Il2CppType t2669_0_0_1;
FieldInfo t2670_f0_FieldInfo = 
{
	"list", &t2669_0_0_1, &t2670_TI, offsetof(t2670, f0), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_1;
FieldInfo t2670_f1_FieldInfo = 
{
	"syncRoot", &t5_0_0_1, &t2670_TI, offsetof(t2670, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2670_FIs[] =
{
	&t2670_f0_FieldInfo,
	&t2670_f1_FieldInfo,
	NULL
};
static PropertyInfo t2670____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2670_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13501_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2670____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2670_TI, "System.Collections.ICollection.IsSynchronized", &m13509_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2670____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2670_TI, "System.Collections.ICollection.SyncRoot", &m13510_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2670____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2670_TI, "System.Collections.IList.IsFixedSize", &m13511_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2670____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2670_TI, "System.Collections.IList.IsReadOnly", &m13512_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2670____System_Collections_IList_Item_PropertyInfo = 
{
	&t2670_TI, "System.Collections.IList.Item", &m13513_MI, &m13514_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2670____Count_PropertyInfo = 
{
	&t2670_TI, "Count", &m13527_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2670____Item_PropertyInfo = 
{
	&t2670_TI, "Item", &m13528_MI, &m13529_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2670_PIs[] =
{
	&t2670____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2670____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2670____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2670____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2670____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2670____System_Collections_IList_Item_PropertyInfo,
	&t2670____Count_PropertyInfo,
	&t2670____Item_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13500_GM;
MethodInfo m13500_MI = 
{
	".ctor", (methodPointerType)&m13500, &t2670_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13500_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13501_GM;
MethodInfo m13501_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m13501, &t2670_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13501_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2670_m13502_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13502_GM;
MethodInfo m13502_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m13502, &t2670_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2670_m13502_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13502_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13503_GM;
MethodInfo m13503_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m13503, &t2670_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13503_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2670_m13504_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13504_GM;
MethodInfo m13504_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m13504, &t2670_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2670_m13504_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13504_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2670_m13505_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13505_GM;
MethodInfo m13505_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m13505, &t2670_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2670_m13505_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13505_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2670_m13506_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13506_GM;
MethodInfo m13506_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m13506, &t2670_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2670_m13506_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13506_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2670_m13507_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13507_GM;
MethodInfo m13507_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m13507, &t2670_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2670_m13507_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13507_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2670_m13508_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13508_GM;
MethodInfo m13508_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m13508, &t2670_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2670_m13508_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13508_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13509_GM;
MethodInfo m13509_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m13509, &t2670_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13509_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13510_GM;
MethodInfo m13510_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m13510, &t2670_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13510_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13511_GM;
MethodInfo m13511_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m13511, &t2670_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13511_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13512_GM;
MethodInfo m13512_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m13512, &t2670_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13512_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2670_m13513_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13513_GM;
MethodInfo m13513_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m13513, &t2670_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t2670_m13513_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13513_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2670_m13514_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13514_GM;
MethodInfo m13514_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m13514, &t2670_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2670_m13514_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13514_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2670_m13515_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13515_GM;
MethodInfo m13515_MI = 
{
	"Add", (methodPointerType)&m13515, &t2670_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2670_m13515_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13515_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13516_GM;
MethodInfo m13516_MI = 
{
	"Clear", (methodPointerType)&m13516, &t2670_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13516_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13517_GM;
MethodInfo m13517_MI = 
{
	"ClearItems", (methodPointerType)&m13517, &t2670_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13517_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2670_m13518_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13518_GM;
MethodInfo m13518_MI = 
{
	"Contains", (methodPointerType)&m13518, &t2670_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t2670_m13518_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13518_GM};
extern Il2CppType t55_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2670_m13519_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t55_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13519_GM;
MethodInfo m13519_MI = 
{
	"CopyTo", (methodPointerType)&m13519, &t2670_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2670_m13519_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13519_GM};
extern Il2CppType t2662_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13520_GM;
MethodInfo m13520_MI = 
{
	"GetEnumerator", (methodPointerType)&m13520, &t2670_TI, &t2662_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13520_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2670_m13521_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13521_GM;
MethodInfo m13521_MI = 
{
	"IndexOf", (methodPointerType)&m13521, &t2670_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t2670_m13521_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13521_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2670_m13522_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13522_GM;
MethodInfo m13522_MI = 
{
	"Insert", (methodPointerType)&m13522, &t2670_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t2670_m13522_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13522_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2670_m13523_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13523_GM;
MethodInfo m13523_MI = 
{
	"InsertItem", (methodPointerType)&m13523, &t2670_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t2670_m13523_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13523_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2670_m13524_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13524_GM;
MethodInfo m13524_MI = 
{
	"Remove", (methodPointerType)&m13524, &t2670_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t2670_m13524_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13524_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2670_m13525_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13525_GM;
MethodInfo m13525_MI = 
{
	"RemoveAt", (methodPointerType)&m13525, &t2670_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2670_m13525_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13525_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2670_m13526_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13526_GM;
MethodInfo m13526_MI = 
{
	"RemoveItem", (methodPointerType)&m13526, &t2670_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2670_m13526_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13526_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13527_GM;
MethodInfo m13527_MI = 
{
	"get_Count", (methodPointerType)&m13527, &t2670_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13527_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2670_m13528_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13528_GM;
MethodInfo m13528_MI = 
{
	"get_Item", (methodPointerType)&m13528, &t2670_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t2670_m13528_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13528_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2670_m13529_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13529_GM;
MethodInfo m13529_MI = 
{
	"set_Item", (methodPointerType)&m13529, &t2670_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t2670_m13529_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13529_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2670_m13530_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13530_GM;
MethodInfo m13530_MI = 
{
	"SetItem", (methodPointerType)&m13530, &t2670_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t2670_m13530_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13530_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2670_m13531_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13531_GM;
MethodInfo m13531_MI = 
{
	"IsValidItem", (methodPointerType)&m13531, &t2670_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2670_m13531_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13531_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2670_m13532_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13532_GM;
MethodInfo m13532_MI = 
{
	"ConvertItem", (methodPointerType)&m13532, &t2670_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2670_m13532_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13532_GM};
extern Il2CppType t2669_0_0_0;
static ParameterInfo t2670_m13533_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2669_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13533_GM;
MethodInfo m13533_MI = 
{
	"CheckWritable", (methodPointerType)&m13533, &t2670_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2670_m13533_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13533_GM};
extern Il2CppType t2669_0_0_0;
static ParameterInfo t2670_m13534_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2669_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13534_GM;
MethodInfo m13534_MI = 
{
	"IsSynchronized", (methodPointerType)&m13534, &t2670_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2670_m13534_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13534_GM};
extern Il2CppType t2669_0_0_0;
static ParameterInfo t2670_m13535_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2669_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13535_GM;
MethodInfo m13535_MI = 
{
	"IsFixedSize", (methodPointerType)&m13535, &t2670_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2670_m13535_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13535_GM};
static MethodInfo* t2670_MIs[] =
{
	&m13500_MI,
	&m13501_MI,
	&m13502_MI,
	&m13503_MI,
	&m13504_MI,
	&m13505_MI,
	&m13506_MI,
	&m13507_MI,
	&m13508_MI,
	&m13509_MI,
	&m13510_MI,
	&m13511_MI,
	&m13512_MI,
	&m13513_MI,
	&m13514_MI,
	&m13515_MI,
	&m13516_MI,
	&m13517_MI,
	&m13518_MI,
	&m13519_MI,
	&m13520_MI,
	&m13521_MI,
	&m13522_MI,
	&m13523_MI,
	&m13524_MI,
	&m13525_MI,
	&m13526_MI,
	&m13527_MI,
	&m13528_MI,
	&m13529_MI,
	&m13530_MI,
	&m13531_MI,
	&m13532_MI,
	&m13533_MI,
	&m13534_MI,
	&m13535_MI,
	NULL
};
static MethodInfo* t2670_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m13503_MI,
	&m13527_MI,
	&m13509_MI,
	&m13510_MI,
	&m13502_MI,
	&m13511_MI,
	&m13512_MI,
	&m13513_MI,
	&m13514_MI,
	&m13504_MI,
	&m13516_MI,
	&m13505_MI,
	&m13506_MI,
	&m13507_MI,
	&m13508_MI,
	&m13525_MI,
	&m13527_MI,
	&m13501_MI,
	&m13515_MI,
	&m13516_MI,
	&m13518_MI,
	&m13519_MI,
	&m13524_MI,
	&m13521_MI,
	&m13522_MI,
	&m13525_MI,
	&m13528_MI,
	&m13529_MI,
	&m13520_MI,
	&m13517_MI,
	&m13523_MI,
	&m13526_MI,
	&m13530_MI,
};
static TypeInfo* t2670_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t2663_TI,
	&t2669_TI,
	&t2661_TI,
};
static Il2CppInterfaceOffsetPair t2670_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t2663_TI, 20},
	{ &t2669_TI, 27},
	{ &t2661_TI, 32},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2670_0_0_0;
extern Il2CppType t2670_1_0_0;
struct t2670;
extern Il2CppGenericClass t2670_GC;
extern CustomAttributesCache t1525__CustomAttributeCache;
TypeInfo t2670_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t2670_MIs, t2670_PIs, t2670_FIs, NULL, &t5_TI, NULL, NULL, &t2670_TI, t2670_ITIs, t2670_VT, &t1525__CustomAttributeCache, &t2670_TI, &t2670_0_0_0, &t2670_1_0_0, t2670_IOs, &t2670_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2670), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2671_TI;
#include "t2671MD.h"

#include "t2673.h"
extern TypeInfo t2040_TI;
extern TypeInfo t2673_TI;
#include "t2673MD.h"
extern Il2CppType t2040_0_0_0;
extern MethodInfo m13544_MI;
extern MethodInfo m31980_MI;
extern MethodInfo m24357_MI;


extern MethodInfo m13536_MI;
 void m13536 (t2671 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m13537_MI;
 void m13537 (t5 * __this, MethodInfo* method){
	t2673 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2673 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t2673_TI));
	m13544(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m13544_MI);
	((t2671_SFs*)InitializedTypeInfo(&t2671_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m13538_MI;
 int32_t m13538 (t2671 * __this, t5 * p0, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&m31980_MI, __this, ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t110_TI))))));
		return L_0;
	}
}
extern MethodInfo m13539_MI;
 bool m13539 (t2671 * __this, t5 * p0, t5 * p1, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m24357_MI, __this, ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t110_TI))))), ((*(int32_t*)((int32_t*)UnBox (p1, InitializedTypeInfo(&t110_TI))))));
		return L_0;
	}
}
extern MethodInfo m13540_MI;
 t2671 * m13540 (t5 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2671_TI));
		return (((t2671_SFs*)InitializedTypeInfo(&t2671_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.Int32>
extern Il2CppType t2671_0_0_49;
FieldInfo t2671_f0_FieldInfo = 
{
	"_default", &t2671_0_0_49, &t2671_TI, offsetof(t2671_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2671_FIs[] =
{
	&t2671_f0_FieldInfo,
	NULL
};
static PropertyInfo t2671____Default_PropertyInfo = 
{
	&t2671_TI, "Default", &m13540_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2671_PIs[] =
{
	&t2671____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13536_GM;
MethodInfo m13536_MI = 
{
	".ctor", (methodPointerType)&m13536, &t2671_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13536_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13537_GM;
MethodInfo m13537_MI = 
{
	".cctor", (methodPointerType)&m13537, &t2671_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13537_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2671_m13538_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13538_GM;
MethodInfo m13538_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m13538, &t2671_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2671_m13538_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13538_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2671_m13539_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13539_GM;
MethodInfo m13539_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m13539, &t2671_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2671_m13539_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13539_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2671_m31980_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31980_GM;
MethodInfo m31980_MI = 
{
	"GetHashCode", NULL, &t2671_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t2671_m31980_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31980_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2671_m24357_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m24357_GM;
MethodInfo m24357_MI = 
{
	"Equals", NULL, &t2671_TI, &t108_0_0_0, RuntimeInvoker_t108_t110_t110, t2671_m24357_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m24357_GM};
extern Il2CppType t2671_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13540_GM;
MethodInfo m13540_MI = 
{
	"get_Default", (methodPointerType)&m13540, &t2671_TI, &t2671_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13540_GM};
static MethodInfo* t2671_MIs[] =
{
	&m13536_MI,
	&m13537_MI,
	&m13538_MI,
	&m13539_MI,
	&m31980_MI,
	&m24357_MI,
	&m13540_MI,
	NULL
};
static MethodInfo* t2671_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m24357_MI,
	&m31980_MI,
	&m13539_MI,
	&m13538_MI,
	NULL,
	NULL,
};
extern TypeInfo t2986_TI;
static TypeInfo* t2671_ITIs[] = 
{
	&t2986_TI,
	&t998_TI,
};
static Il2CppInterfaceOffsetPair t2671_IOs[] = 
{
	{ &t2986_TI, 4},
	{ &t998_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2671_0_0_0;
extern Il2CppType t2671_1_0_0;
struct t2671;
extern Il2CppGenericClass t2671_GC;
TypeInfo t2671_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2671_MIs, t2671_PIs, t2671_FIs, NULL, &t5_TI, NULL, NULL, &t2671_TI, t2671_ITIs, t2671_VT, &EmptyCustomAttributesCache, &t2671_TI, &t2671_0_0_0, &t2671_1_0_0, t2671_IOs, &t2671_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2671), 0, -1, sizeof(t2671_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#include "t2672.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2672_TI;
#include "t2672MD.h"

extern MethodInfo m31384_MI;


extern MethodInfo m13541_MI;
 void m13541 (t2672 * __this, MethodInfo* method){
	{
		m13536(__this, &m13536_MI);
		return;
	}
}
extern MethodInfo m13542_MI;
 int32_t m13542 (t2672 * __this, int32_t p0, MethodInfo* method){
	{
		int32_t L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t110_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m466_MI, Box(InitializedTypeInfo(&t110_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m13543_MI;
 bool m13543 (t2672 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		int32_t L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t110_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t110_TI), &L_2);
		return ((((t5 *)L_3) == ((t5 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, int32_t >::Invoke(&m31384_MI, Box(InitializedTypeInfo(&t110_TI), &(*(&p0))), p1);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.Int32>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13541_GM;
MethodInfo m13541_MI = 
{
	".ctor", (methodPointerType)&m13541, &t2672_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13541_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2672_m13542_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13542_GM;
MethodInfo m13542_MI = 
{
	"GetHashCode", (methodPointerType)&m13542, &t2672_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t2672_m13542_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13542_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2672_m13543_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13543_GM;
MethodInfo m13543_MI = 
{
	"Equals", (methodPointerType)&m13543, &t2672_TI, &t108_0_0_0, RuntimeInvoker_t108_t110_t110, t2672_m13543_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13543_GM};
static MethodInfo* t2672_MIs[] =
{
	&m13541_MI,
	&m13542_MI,
	&m13543_MI,
	NULL
};
static MethodInfo* t2672_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m13543_MI,
	&m13542_MI,
	&m13539_MI,
	&m13538_MI,
	&m13542_MI,
	&m13543_MI,
};
static Il2CppInterfaceOffsetPair t2672_IOs[] = 
{
	{ &t2986_TI, 4},
	{ &t998_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2672_0_0_0;
extern Il2CppType t2672_1_0_0;
struct t2672;
extern Il2CppGenericClass t2672_GC;
TypeInfo t2672_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericEqualityComparer`1", "System.Collections.Generic", t2672_MIs, NULL, NULL, NULL, &t2671_TI, NULL, NULL, &t2672_TI, NULL, t2672_VT, &EmptyCustomAttributesCache, &t2672_TI, &t2672_0_0_0, &t2672_1_0_0, t2672_IOs, &t2672_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2672), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.Int32>
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2986_m31981_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31981_GM;
MethodInfo m31981_MI = 
{
	"Equals", NULL, &t2986_TI, &t108_0_0_0, RuntimeInvoker_t108_t110_t110, t2986_m31981_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31981_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2986_m31982_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31982_GM;
MethodInfo m31982_MI = 
{
	"GetHashCode", NULL, &t2986_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t2986_m31982_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31982_GM};
static MethodInfo* t2986_MIs[] =
{
	&m31981_MI,
	&m31982_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2986_0_0_0;
extern Il2CppType t2986_1_0_0;
struct t2986;
extern Il2CppGenericClass t2986_GC;
TypeInfo t2986_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t2986_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2986_TI, NULL, NULL, &EmptyCustomAttributesCache, &t2986_TI, &t2986_0_0_0, &t2986_1_0_0, NULL, &t2986_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



 void m13544 (t2673 * __this, MethodInfo* method){
	{
		m13536(__this, &m13536_MI);
		return;
	}
}
extern MethodInfo m13545_MI;
 int32_t m13545 (t2673 * __this, int32_t p0, MethodInfo* method){
	{
		int32_t L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t110_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m466_MI, Box(InitializedTypeInfo(&t110_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m13546_MI;
 bool m13546 (t2673 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		int32_t L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t110_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t110_TI), &L_2);
		return ((((t5 *)L_3) == ((t5 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		int32_t L_4 = p1;
		t5 * L_5 = Box(InitializedTypeInfo(&t110_TI), &L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t110_TI), &(*(&p0))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13544_GM;
MethodInfo m13544_MI = 
{
	".ctor", (methodPointerType)&m13544, &t2673_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13544_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2673_m13545_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13545_GM;
MethodInfo m13545_MI = 
{
	"GetHashCode", (methodPointerType)&m13545, &t2673_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t2673_m13545_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13545_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2673_m13546_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13546_GM;
MethodInfo m13546_MI = 
{
	"Equals", (methodPointerType)&m13546, &t2673_TI, &t108_0_0_0, RuntimeInvoker_t108_t110_t110, t2673_m13546_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13546_GM};
static MethodInfo* t2673_MIs[] =
{
	&m13544_MI,
	&m13545_MI,
	&m13546_MI,
	NULL
};
static MethodInfo* t2673_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m13546_MI,
	&m13545_MI,
	&m13539_MI,
	&m13538_MI,
	&m13545_MI,
	&m13546_MI,
};
static Il2CppInterfaceOffsetPair t2673_IOs[] = 
{
	{ &t2986_TI, 4},
	{ &t998_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2673_0_0_0;
extern Il2CppType t2673_1_0_0;
struct t2673;
extern Il2CppGenericClass t2673_GC;
TypeInfo t2673_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2673_MIs, NULL, NULL, NULL, &t2671_TI, NULL, &t1519_TI, &t2673_TI, NULL, t2673_VT, &EmptyCustomAttributesCache, &t2673_TI, &t2673_0_0_0, &t2673_1_0_0, t2673_IOs, &t2673_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2673), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m13547_MI;
 void m13547 (t2665 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
 bool m13548 (t2665 * __this, int32_t p0, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m13548((t2665 *)__this->f9,p0, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t5 *, t5 * __this, int32_t p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	typedef bool (*FunctionPointerType) (t5 * __this, int32_t p0, MethodInfo* method);
	return ((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m13549_MI;
 t5 * m13549 (t2665 * __this, int32_t p0, t222 * p1, t5 * p2, MethodInfo* method){
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t110_TI), &p0);
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m13550_MI;
 bool m13550 (t2665 * __this, t5 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Predicate`1<System.Int32>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2665_m13547_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13547_GM;
MethodInfo m13547_MI = 
{
	".ctor", (methodPointerType)&m13547, &t2665_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2665_m13547_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13547_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2665_m13548_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13548_GM;
MethodInfo m13548_MI = 
{
	"Invoke", (methodPointerType)&m13548, &t2665_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t2665_m13548_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13548_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2665_m13549_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13549_GM;
MethodInfo m13549_MI = 
{
	"BeginInvoke", (methodPointerType)&m13549, &t2665_TI, &t221_0_0_0, RuntimeInvoker_t5_t110_t5_t5, t2665_m13549_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m13549_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2665_m13550_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13550_GM;
MethodInfo m13550_MI = 
{
	"EndInvoke", (methodPointerType)&m13550, &t2665_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2665_m13550_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13550_GM};
static MethodInfo* t2665_MIs[] =
{
	&m13547_MI,
	&m13548_MI,
	&m13549_MI,
	&m13550_MI,
	NULL
};
static MethodInfo* t2665_VT[] =
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
	&m13548_MI,
	&m13549_MI,
	&m13550_MI,
};
static Il2CppInterfaceOffsetPair t2665_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2665_1_0_0;
struct t2665;
extern Il2CppGenericClass t2665_GC;
TypeInfo t2665_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t2665_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t2665_TI, NULL, t2665_VT, &EmptyCustomAttributesCache, &t2665_TI, &t2665_0_0_0, &t2665_1_0_0, t2665_IOs, &t2665_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2665), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m13551_MI;
 void m13551 (t2666 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
 void m13552 (t2666 * __this, int32_t p0, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m13552((t2666 *)__this->f9,p0, method);
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
extern MethodInfo m13553_MI;
 t5 * m13553 (t2666 * __this, int32_t p0, t222 * p1, t5 * p2, MethodInfo* method){
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t110_TI), &p0);
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m13554_MI;
 void m13554 (t2666 * __this, t5 * p0, MethodInfo* method){
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
// Metadata Definition System.Action`1<System.Int32>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2666_m13551_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13551_GM;
MethodInfo m13551_MI = 
{
	".ctor", (methodPointerType)&m13551, &t2666_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2666_m13551_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13551_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2666_m13552_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13552_GM;
MethodInfo m13552_MI = 
{
	"Invoke", (methodPointerType)&m13552, &t2666_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2666_m13552_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13552_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2666_m13553_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13553_GM;
MethodInfo m13553_MI = 
{
	"BeginInvoke", (methodPointerType)&m13553, &t2666_TI, &t221_0_0_0, RuntimeInvoker_t5_t110_t5_t5, t2666_m13553_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m13553_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2666_m13554_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13554_GM;
MethodInfo m13554_MI = 
{
	"EndInvoke", (methodPointerType)&m13554, &t2666_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2666_m13554_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13554_GM};
static MethodInfo* t2666_MIs[] =
{
	&m13551_MI,
	&m13552_MI,
	&m13553_MI,
	&m13554_MI,
	NULL
};
static MethodInfo* t2666_VT[] =
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
	&m13552_MI,
	&m13553_MI,
	&m13554_MI,
};
static Il2CppInterfaceOffsetPair t2666_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2666_1_0_0;
struct t2666;
extern Il2CppGenericClass t2666_GC;
TypeInfo t2666_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Action`1", "System", t2666_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t2666_TI, NULL, t2666_VT, &EmptyCustomAttributesCache, &t2666_TI, &t2666_0_0_0, &t2666_1_0_0, t2666_IOs, &t2666_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2666), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2667_TI;
#include "t2667MD.h"



extern MethodInfo m13555_MI;
 void m13555 (t2667 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m13556_MI;
 int32_t m13556 (t2667 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m13556((t2667 *)__this->f9,p0, p1, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (t5 *, t5 * __this, int32_t p0, int32_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	typedef int32_t (*FunctionPointerType) (t5 * __this, int32_t p0, int32_t p1, MethodInfo* method);
	return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m13557_MI;
 t5 * m13557 (t2667 * __this, int32_t p0, int32_t p1, t222 * p2, t5 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t110_TI), &p0);
	__d_args[1] = Box(InitializedTypeInfo(&t110_TI), &p1);
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m13558_MI;
 int32_t m13558 (t2667 * __this, t5 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Comparison`1<System.Int32>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2667_m13555_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13555_GM;
MethodInfo m13555_MI = 
{
	".ctor", (methodPointerType)&m13555, &t2667_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2667_m13555_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13555_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2667_m13556_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13556_GM;
MethodInfo m13556_MI = 
{
	"Invoke", (methodPointerType)&m13556, &t2667_TI, &t110_0_0_0, RuntimeInvoker_t110_t110_t110, t2667_m13556_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13556_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2667_m13557_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t110_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13557_GM;
MethodInfo m13557_MI = 
{
	"BeginInvoke", (methodPointerType)&m13557, &t2667_TI, &t221_0_0_0, RuntimeInvoker_t5_t110_t110_t5_t5, t2667_m13557_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL, &m13557_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2667_m13558_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13558_GM;
MethodInfo m13558_MI = 
{
	"EndInvoke", (methodPointerType)&m13558, &t2667_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2667_m13558_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13558_GM};
static MethodInfo* t2667_MIs[] =
{
	&m13555_MI,
	&m13556_MI,
	&m13557_MI,
	&m13558_MI,
	NULL
};
static MethodInfo* t2667_VT[] =
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
	&m13556_MI,
	&m13557_MI,
	&m13558_MI,
};
static Il2CppInterfaceOffsetPair t2667_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2667_1_0_0;
struct t2667;
extern Il2CppGenericClass t2667_GC;
TypeInfo t2667_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t2667_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t2667_TI, NULL, t2667_VT, &EmptyCustomAttributesCache, &t2667_TI, &t2667_0_0_0, &t2667_1_0_0, t2667_IOs, &t2667_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2667), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4727_TI;

#include "t25.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<JewelMine.Engine.Models.Jewel>
extern MethodInfo m31983_MI;
static PropertyInfo t4727____Current_PropertyInfo = 
{
	&t4727_TI, "Current", &m31983_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4727_PIs[] =
{
	&t4727____Current_PropertyInfo,
	NULL
};
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31983_GM;
MethodInfo m31983_MI = 
{
	"get_Current", NULL, &t4727_TI, &t25_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31983_GM};
static MethodInfo* t4727_MIs[] =
{
	&m31983_MI,
	NULL
};
static TypeInfo* t4727_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4727_0_0_0;
extern Il2CppType t4727_1_0_0;
struct t4727;
extern Il2CppGenericClass t4727_GC;
TypeInfo t4727_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4727_MIs, t4727_PIs, NULL, NULL, NULL, NULL, NULL, &t4727_TI, t4727_ITIs, NULL, &EmptyCustomAttributesCache, &t4727_TI, &t4727_0_0_0, &t4727_1_0_0, NULL, &t4727_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2674.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2674_TI;
#include "t2674MD.h"

extern TypeInfo t25_TI;
extern MethodInfo m13563_MI;
extern MethodInfo m24371_MI;
struct t107;
#define m24371(__this, p0, method) (t25 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<JewelMine.Engine.Models.Jewel>
extern Il2CppType t107_0_0_1;
FieldInfo t2674_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t2674_TI, offsetof(t2674, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2674_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2674_TI, offsetof(t2674, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2674_FIs[] =
{
	&t2674_f0_FieldInfo,
	&t2674_f1_FieldInfo,
	NULL
};
extern MethodInfo m13560_MI;
static PropertyInfo t2674____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2674_TI, "System.Collections.IEnumerator.Current", &m13560_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2674____Current_PropertyInfo = 
{
	&t2674_TI, "Current", &m13563_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2674_PIs[] =
{
	&t2674____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2674____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t2674_m13559_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13559_GM;
MethodInfo m13559_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t2674_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2674_m13559_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13559_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13560_GM;
MethodInfo m13560_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t2674_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13560_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13561_GM;
MethodInfo m13561_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t2674_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13561_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13562_GM;
MethodInfo m13562_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t2674_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13562_GM};
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13563_GM;
MethodInfo m13563_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t2674_TI, &t25_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13563_GM};
static MethodInfo* t2674_MIs[] =
{
	&m13559_MI,
	&m13560_MI,
	&m13561_MI,
	&m13562_MI,
	&m13563_MI,
	NULL
};
extern MethodInfo m13562_MI;
extern MethodInfo m13561_MI;
static MethodInfo* t2674_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m13560_MI,
	&m13562_MI,
	&m13561_MI,
	&m13563_MI,
};
static TypeInfo* t2674_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t4727_TI,
};
static Il2CppInterfaceOffsetPair t2674_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t4727_TI, 7},
};
extern TypeInfo t25_TI;
static Il2CppRGCTXData t2674_RGCTXData[3] = 
{
	&m13563_MI/* Method Usage */,
	&t25_TI/* Class Usage */,
	&m24371_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2674_0_0_0;
extern Il2CppType t2674_1_0_0;
extern Il2CppGenericClass t2674_GC;
TypeInfo t2674_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2674_MIs, t2674_PIs, t2674_FIs, NULL, &t267_TI, NULL, &t107_TI, &t2674_TI, t2674_ITIs, t2674_VT, &EmptyCustomAttributesCache, &t2674_TI, &t2674_0_0_0, &t2674_1_0_0, t2674_IOs, &t2674_GC, NULL, NULL, NULL, t2674_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2674)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5976_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<JewelMine.Engine.Models.Jewel>
extern MethodInfo m31984_MI;
static PropertyInfo t5976____Count_PropertyInfo = 
{
	&t5976_TI, "Count", &m31984_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m31985_MI;
static PropertyInfo t5976____IsReadOnly_PropertyInfo = 
{
	&t5976_TI, "IsReadOnly", &m31985_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5976_PIs[] =
{
	&t5976____Count_PropertyInfo,
	&t5976____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31984_GM;
MethodInfo m31984_MI = 
{
	"get_Count", NULL, &t5976_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31984_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31985_GM;
MethodInfo m31985_MI = 
{
	"get_IsReadOnly", NULL, &t5976_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31985_GM};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t5976_m31986_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31986_GM;
MethodInfo m31986_MI = 
{
	"Add", NULL, &t5976_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t5976_m31986_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31986_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31987_GM;
MethodInfo m31987_MI = 
{
	"Clear", NULL, &t5976_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31987_GM};
extern Il2CppType t25_0_0_0;
static ParameterInfo t5976_m31988_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31988_GM;
MethodInfo m31988_MI = 
{
	"Contains", NULL, &t5976_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t5976_m31988_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31988_GM};
extern Il2CppType t163_0_0_0;
extern Il2CppType t163_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t5976_m31989_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t163_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31989_GM;
MethodInfo m31989_MI = 
{
	"CopyTo", NULL, &t5976_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t5976_m31989_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31989_GM};
extern Il2CppType t25_0_0_0;
static ParameterInfo t5976_m31990_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31990_GM;
MethodInfo m31990_MI = 
{
	"Remove", NULL, &t5976_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t5976_m31990_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31990_GM};
static MethodInfo* t5976_MIs[] =
{
	&m31984_MI,
	&m31985_MI,
	&m31986_MI,
	&m31987_MI,
	&m31988_MI,
	&m31989_MI,
	&m31990_MI,
	NULL
};
extern TypeInfo t5978_TI;
static TypeInfo* t5976_ITIs[] = 
{
	&t739_TI,
	&t5978_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5976_0_0_0;
extern Il2CppType t5976_1_0_0;
struct t5976;
extern Il2CppGenericClass t5976_GC;
TypeInfo t5976_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5976_MIs, t5976_PIs, NULL, NULL, NULL, NULL, NULL, &t5976_TI, t5976_ITIs, NULL, &EmptyCustomAttributesCache, &t5976_TI, &t5976_0_0_0, &t5976_1_0_0, NULL, &t5976_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<JewelMine.Engine.Models.Jewel>
extern Il2CppType t4727_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31991_GM;
MethodInfo m31991_MI = 
{
	"GetEnumerator", NULL, &t5978_TI, &t4727_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m31991_GM};
static MethodInfo* t5978_MIs[] =
{
	&m31991_MI,
	NULL
};
static TypeInfo* t5978_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5978_0_0_0;
extern Il2CppType t5978_1_0_0;
struct t5978;
extern Il2CppGenericClass t5978_GC;
TypeInfo t5978_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5978_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5978_TI, t5978_ITIs, NULL, &EmptyCustomAttributesCache, &t5978_TI, &t5978_0_0_0, &t5978_1_0_0, NULL, &t5978_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5977_TI;



// Metadata Definition System.Collections.Generic.IList`1<JewelMine.Engine.Models.Jewel>
extern MethodInfo m31992_MI;
extern MethodInfo m31993_MI;
static PropertyInfo t5977____Item_PropertyInfo = 
{
	&t5977_TI, "Item", &m31992_MI, &m31993_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5977_PIs[] =
{
	&t5977____Item_PropertyInfo,
	NULL
};
extern Il2CppType t25_0_0_0;
static ParameterInfo t5977_m31994_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31994_GM;
MethodInfo m31994_MI = 
{
	"IndexOf", NULL, &t5977_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t5977_m31994_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31994_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t5977_m31995_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31995_GM;
MethodInfo m31995_MI = 
{
	"Insert", NULL, &t5977_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t5977_m31995_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31995_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t5977_m31996_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31996_GM;
MethodInfo m31996_MI = 
{
	"RemoveAt", NULL, &t5977_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t5977_m31996_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31996_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t5977_m31992_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31992_GM;
MethodInfo m31992_MI = 
{
	"get_Item", NULL, &t5977_TI, &t25_0_0_0, RuntimeInvoker_t5_t110, t5977_m31992_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31992_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t5977_m31993_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31993_GM;
MethodInfo m31993_MI = 
{
	"set_Item", NULL, &t5977_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t5977_m31993_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31993_GM};
static MethodInfo* t5977_MIs[] =
{
	&m31994_MI,
	&m31995_MI,
	&m31996_MI,
	&m31992_MI,
	&m31993_MI,
	NULL
};
static TypeInfo* t5977_ITIs[] = 
{
	&t739_TI,
	&t5976_TI,
	&t5978_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5977_0_0_0;
extern Il2CppType t5977_1_0_0;
struct t5977;
extern Il2CppGenericClass t5977_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t5977_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5977_MIs, t5977_PIs, NULL, NULL, NULL, NULL, NULL, &t5977_TI, t5977_ITIs, NULL, &t2240__CustomAttributeCache, &t5977_TI, &t5977_0_0_0, &t5977_1_0_0, NULL, &t5977_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t161.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t161_TI;
#include "t161MD.h"

#include "t267.h"
#include "t267MD.h"
#include "t11MD.h"
extern MethodInfo m13565_MI;


extern MethodInfo m614_MI;
 void m614 (t161 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f1 = 1;
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m615_MI;
 bool m615 (t161 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m616_MI;
 int32_t m616 (t161 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t133 * L_1 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4758(L_1, (t11*) &_stringLiteral1120, &m4758_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		int32_t L_2 = (__this->f0);
		return L_2;
	}
}
extern MethodInfo m13564_MI;
 bool m13564 (t161 * __this, t5 * p0, MethodInfo* method){
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
		if (((t5 *)IsInst(p0, InitializedTypeInfo(&t161_TI))))
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		void* L_1 = alloca(sizeof(t161 ));
		UnBoxNullable(p0, InitializedTypeInfo(&t161_TI), L_1);
		bool L_2 = m13565(__this, ((*(t161 *)((t161 *)L_1))), &m13565_MI);
		return L_2;
	}
}
 bool m13565 (t161 * __this, t161  p0, MethodInfo* method){
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
		int32_t* L_3 = &((&p0)->f0);
		int32_t L_4 = (__this->f0);
		int32_t L_5 = L_4;
		t5 * L_6 = Box(InitializedTypeInfo(&t110_TI), &L_5);
		bool L_7 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m2041_MI, Box(InitializedTypeInfo(&t110_TI), &(*L_3)), L_6);
		return L_7;
	}
}
extern MethodInfo m13566_MI;
 int32_t m13566 (t161 * __this, MethodInfo* method){
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
		int32_t* L_1 = &(__this->f0);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m2042_MI, Box(InitializedTypeInfo(&t110_TI), &(*L_1)));
		return L_2;
	}
}
extern MethodInfo m13567_MI;
 t11* m13567 (t161 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f1);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		int32_t* L_1 = &(__this->f0);
		t11* L_2 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m2147_MI, Box(InitializedTypeInfo(&t110_TI), &(*L_1)));
		return L_2;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		return (((t11_SFs*)(&t11_TI)->static_fields)->f2);
	}
}
// Metadata Definition System.Nullable`1<System.Int32>
extern Il2CppType t110_0_0_3;
FieldInfo t161_f0_FieldInfo = 
{
	"value", &t110_0_0_3, &t161_TI, offsetof(t161, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_3;
FieldInfo t161_f1_FieldInfo = 
{
	"has_value", &t108_0_0_3, &t161_TI, offsetof(t161, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t161_FIs[] =
{
	&t161_f0_FieldInfo,
	&t161_f1_FieldInfo,
	NULL
};
static PropertyInfo t161____HasValue_PropertyInfo = 
{
	&t161_TI, "HasValue", &m615_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t161____Value_PropertyInfo = 
{
	&t161_TI, "Value", &m616_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t161_PIs[] =
{
	&t161____HasValue_PropertyInfo,
	&t161____Value_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
static ParameterInfo t161_m614_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m614_GM;
MethodInfo m614_MI = 
{
	".ctor", (methodPointerType)&m614, &t161_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t161_m614_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m614_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m615_GM;
MethodInfo m615_MI = 
{
	"get_HasValue", (methodPointerType)&m615, &t161_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m615_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m616_GM;
MethodInfo m616_MI = 
{
	"get_Value", (methodPointerType)&m616, &t161_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m616_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t161_m13564_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13564_GM;
MethodInfo m13564_MI = 
{
	"Equals", (methodPointerType)&m13564, &t161_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t161_m13564_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13564_GM};
extern Il2CppType t161_0_0_0;
extern Il2CppType t161_0_0_0;
static ParameterInfo t161_m13565_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t161_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t161 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13565_GM;
MethodInfo m13565_MI = 
{
	"Equals", (methodPointerType)&m13565, &t161_TI, &t108_0_0_0, RuntimeInvoker_t108_t161, t161_m13565_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13565_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13566_GM;
MethodInfo m13566_MI = 
{
	"GetHashCode", (methodPointerType)&m13566, &t161_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13566_GM};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13567_GM;
MethodInfo m13567_MI = 
{
	"ToString", (methodPointerType)&m13567, &t161_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13567_GM};
static MethodInfo* t161_MIs[] =
{
	&m614_MI,
	&m615_MI,
	&m616_MI,
	&m13564_MI,
	&m13565_MI,
	&m13566_MI,
	&m13567_MI,
	NULL
};
static MethodInfo* t161_VT[] =
{
	&m13564_MI,
	&m465_MI,
	&m13566_MI,
	&m13567_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t161_1_0_0;
extern Il2CppGenericClass t161_GC;
TypeInfo t161_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Nullable`1", "System", t161_MIs, t161_PIs, t161_FIs, NULL, &t267_TI, NULL, NULL, &t161_TI, NULL, t161_VT, &EmptyCustomAttributesCache, &t161_TI, &t161_0_0_0, &t161_1_0_0, NULL, &t161_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t161)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 2, 0, 0, 4, 0, 0};
#include "t170.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t170_TI;
#include "t170MD.h"

#include "t2682.h"
#include "t2678.h"
#include "t2679.h"
#include "t2680.h"
#include "t2687.h"
#include "t2681.h"
extern TypeInfo t58_TI;
extern TypeInfo t2682_TI;
extern TypeInfo t2678_TI;
extern TypeInfo t2679_TI;
extern TypeInfo t2680_TI;
extern TypeInfo t2687_TI;
#include "t2678MD.h"
#include "t2679MD.h"
#include "t2680MD.h"
#include "t2682MD.h"
#include "t2687MD.h"
extern MethodInfo m13614_MI;
extern MethodInfo m13615_MI;
extern MethodInfo m24387_MI;
extern MethodInfo m13601_MI;
extern MethodInfo m13603_MI;
extern MethodInfo m13588_MI;
extern MethodInfo m13587_MI;
extern MethodInfo m13598_MI;
extern MethodInfo m646_MI;
extern MethodInfo m13592_MI;
extern MethodInfo m13599_MI;
extern MethodInfo m13602_MI;
extern MethodInfo m13604_MI;
extern MethodInfo m13586_MI;
extern MethodInfo m13611_MI;
extern MethodInfo m13612_MI;
extern MethodInfo m31972_MI;
extern MethodInfo m31974_MI;
extern MethodInfo m13622_MI;
extern MethodInfo m24389_MI;
extern MethodInfo m13595_MI;
extern MethodInfo m13596_MI;
extern MethodInfo m13697_MI;
extern MethodInfo m13701_MI;
extern MethodInfo m13616_MI;
extern MethodInfo m13600_MI;
extern MethodInfo m13606_MI;
extern MethodInfo m13707_MI;
extern MethodInfo m24391_MI;
extern MethodInfo m24399_MI;
struct t107;
#define m24387(__this, p0, p1, method) (void)m23607_gshared((t5 *)__this, (t168**)p0, (int32_t)p1, method)
struct t107;
#include "t2685.h"
#define m24389(__this, p0, p1, p2, p3, method) (int32_t)m11458_gshared((t5 *)__this, (t168*)p0, (t5 *)p1, (int32_t)p2, (int32_t)p3, method)
struct t107;
#define m24391(__this, p0, p1, p2, p3, method) (void)m23676_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (int32_t)p2, (t5*)p3, method)
struct t107;
#define m24399(__this, p0, p1, p2, method) (void)m23827_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (t2458 *)p2, method)


 t2682  m13598 (t170 * __this, MethodInfo* method){
	{
		t2682  L_0 = {0};
		m13616(&L_0, __this, &m13616_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<JewelMine.Engine.Models.Coordinates>
extern Il2CppType t110_0_0_32849;
FieldInfo t170_f0_FieldInfo = 
{
	"DefaultCapacity", &t110_0_0_32849, &t170_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t58_0_0_1;
FieldInfo t170_f1_FieldInfo = 
{
	"_items", &t58_0_0_1, &t170_TI, offsetof(t170, f1), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t170_f2_FieldInfo = 
{
	"_size", &t110_0_0_1, &t170_TI, offsetof(t170, f2), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t170_f3_FieldInfo = 
{
	"_version", &t110_0_0_1, &t170_TI, offsetof(t170, f3), &EmptyCustomAttributesCache};
extern Il2CppType t58_0_0_49;
FieldInfo t170_f4_FieldInfo = 
{
	"EmptyArray", &t58_0_0_49, &t170_TI, offsetof(t170_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t170_FIs[] =
{
	&t170_f0_FieldInfo,
	&t170_f1_FieldInfo,
	&t170_f2_FieldInfo,
	&t170_f3_FieldInfo,
	&t170_f4_FieldInfo,
	NULL
};
static const int32_t t170_f0_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t170_f0_DefaultValue = 
{
	&t170_f0_FieldInfo, { (char*)&t170_f0_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t170_FDVs[] = 
{
	&t170_f0_DefaultValue,
	NULL
};
extern MethodInfo m13579_MI;
static PropertyInfo t170____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t170_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13579_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13580_MI;
static PropertyInfo t170____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t170_TI, "System.Collections.ICollection.IsSynchronized", &m13580_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13581_MI;
static PropertyInfo t170____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t170_TI, "System.Collections.ICollection.SyncRoot", &m13581_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13582_MI;
static PropertyInfo t170____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t170_TI, "System.Collections.IList.IsFixedSize", &m13582_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13583_MI;
static PropertyInfo t170____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t170_TI, "System.Collections.IList.IsReadOnly", &m13583_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13584_MI;
extern MethodInfo m13585_MI;
static PropertyInfo t170____System_Collections_IList_Item_PropertyInfo = 
{
	&t170_TI, "System.Collections.IList.Item", &m13584_MI, &m13585_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t170____Capacity_PropertyInfo = 
{
	&t170_TI, "Capacity", &m13611_MI, &m13612_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13613_MI;
static PropertyInfo t170____Count_PropertyInfo = 
{
	&t170_TI, "Count", &m13613_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t170____Item_PropertyInfo = 
{
	&t170_TI, "Item", &m13614_MI, &m13615_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t170_PIs[] =
{
	&t170____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t170____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t170____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t170____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t170____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t170____System_Collections_IList_Item_PropertyInfo,
	&t170____Capacity_PropertyInfo,
	&t170____Count_PropertyInfo,
	&t170____Item_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m645_GM;
MethodInfo m645_MI = 
{
	".ctor", (methodPointerType)&m11648_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m645_GM};
extern Il2CppType t2675_0_0_0;
static ParameterInfo t170_m13568_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2675_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13568_GM;
MethodInfo m13568_MI = 
{
	".ctor", (methodPointerType)&m11650_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t170_m13568_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13568_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t170_m13569_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13569_GM;
MethodInfo m13569_MI = 
{
	".ctor", (methodPointerType)&m11652_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t170_m13569_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13569_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13570_GM;
MethodInfo m13570_MI = 
{
	".cctor", (methodPointerType)&m11654_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13570_GM};
extern Il2CppType t2676_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13571_GM;
MethodInfo m13571_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m11656_gshared, &t170_TI, &t2676_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13571_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t170_m13572_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13572_GM;
MethodInfo m13572_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11658_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t170_m13572_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13572_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13573_GM;
MethodInfo m13573_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11660_gshared, &t170_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13573_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t170_m13574_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13574_GM;
MethodInfo m13574_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11662_gshared, &t170_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t170_m13574_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13574_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t170_m13575_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13575_GM;
MethodInfo m13575_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11664_gshared, &t170_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t170_m13575_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13575_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t170_m13576_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13576_GM;
MethodInfo m13576_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11666_gshared, &t170_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t170_m13576_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13576_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t170_m13577_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13577_GM;
MethodInfo m13577_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11668_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t170_m13577_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13577_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t170_m13578_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13578_GM;
MethodInfo m13578_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11670_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t170_m13578_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13578_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13579_GM;
MethodInfo m13579_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11672_gshared, &t170_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13579_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13580_GM;
MethodInfo m13580_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11674_gshared, &t170_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13580_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13581_GM;
MethodInfo m13581_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11676_gshared, &t170_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13581_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13582_GM;
MethodInfo m13582_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11678_gshared, &t170_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13582_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13583_GM;
MethodInfo m13583_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11680_gshared, &t170_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13583_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t170_m13584_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13584_GM;
MethodInfo m13584_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11682_gshared, &t170_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t170_m13584_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13584_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t170_m13585_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13585_GM;
MethodInfo m13585_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11684_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t170_m13585_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13585_GM};
extern Il2CppType t36_0_0_0;
static ParameterInfo t170_m646_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m646_GM;
MethodInfo m646_MI = 
{
	"Add", (methodPointerType)&m11686_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t170_m646_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m646_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t170_m13586_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13586_GM;
MethodInfo m13586_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m11688_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t170_m13586_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13586_GM};
extern Il2CppType t2677_0_0_0;
static ParameterInfo t170_m13587_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2677_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13587_GM;
MethodInfo m13587_MI = 
{
	"AddCollection", (methodPointerType)&m11690_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t170_m13587_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13587_GM};
extern Il2CppType t2675_0_0_0;
static ParameterInfo t170_m13588_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t2675_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13588_GM;
MethodInfo m13588_MI = 
{
	"AddEnumerable", (methodPointerType)&m11692_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t170_m13588_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13588_GM};
extern Il2CppType t2675_0_0_0;
static ParameterInfo t170_m13589_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2675_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13589_GM;
MethodInfo m13589_MI = 
{
	"AddRange", (methodPointerType)&m11693_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t170_m13589_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13589_GM};
extern Il2CppType t2678_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13590_GM;
MethodInfo m13590_MI = 
{
	"AsReadOnly", (methodPointerType)&m11695_gshared, &t170_TI, &t2678_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13590_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13591_GM;
MethodInfo m13591_MI = 
{
	"Clear", (methodPointerType)&m11696_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13591_GM};
extern Il2CppType t36_0_0_0;
static ParameterInfo t170_m13592_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13592_GM;
MethodInfo m13592_MI = 
{
	"Contains", (methodPointerType)&m11698_gshared, &t170_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t170_m13592_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13592_GM};
extern Il2CppType t58_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t170_m13593_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13593_GM;
MethodInfo m13593_MI = 
{
	"CopyTo", (methodPointerType)&m11700_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t170_m13593_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13593_GM};
extern Il2CppType t2679_0_0_0;
extern Il2CppType t2679_0_0_0;
static ParameterInfo t170_m13594_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2679_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13594_GM;
MethodInfo m13594_MI = 
{
	"Find", (methodPointerType)&m11702_gshared, &t170_TI, &t36_0_0_0, RuntimeInvoker_t5_t5, t170_m13594_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13594_GM};
extern Il2CppType t2679_0_0_0;
static ParameterInfo t170_m13595_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2679_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13595_GM;
MethodInfo m13595_MI = 
{
	"CheckMatch", (methodPointerType)&m11704_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t170_m13595_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13595_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2679_0_0_0;
static ParameterInfo t170_m13596_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t2679_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13596_GM;
MethodInfo m13596_MI = 
{
	"GetIndex", (methodPointerType)&m11706_gshared, &t170_TI, &t110_0_0_0, RuntimeInvoker_t110_t110_t110_t5, t170_m13596_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL, &m13596_GM};
extern Il2CppType t2680_0_0_0;
extern Il2CppType t2680_0_0_0;
static ParameterInfo t170_m13597_ParameterInfos[] = 
{
	{"action", 0, 134217728, &EmptyCustomAttributesCache, &t2680_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13597_GM;
MethodInfo m13597_MI = 
{
	"ForEach", (methodPointerType)&m11707_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t170_m13597_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13597_GM};
extern Il2CppType t2682_0_0_0;
extern void* RuntimeInvoker_t2682 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13598_GM;
MethodInfo m13598_MI = 
{
	"GetEnumerator", (methodPointerType)&m13598, &t170_TI, &t2682_0_0_0, RuntimeInvoker_t2682, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13598_GM};
extern Il2CppType t36_0_0_0;
static ParameterInfo t170_m13599_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13599_GM;
MethodInfo m13599_MI = 
{
	"IndexOf", (methodPointerType)&m11709_gshared, &t170_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t170_m13599_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13599_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t170_m13600_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13600_GM;
MethodInfo m13600_MI = 
{
	"Shift", (methodPointerType)&m11711_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t170_m13600_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13600_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t170_m13601_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13601_GM;
MethodInfo m13601_MI = 
{
	"CheckIndex", (methodPointerType)&m11713_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t170_m13601_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13601_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t36_0_0_0;
static ParameterInfo t170_m13602_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13602_GM;
MethodInfo m13602_MI = 
{
	"Insert", (methodPointerType)&m11715_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t170_m13602_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13602_GM};
extern Il2CppType t2675_0_0_0;
static ParameterInfo t170_m13603_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2675_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13603_GM;
MethodInfo m13603_MI = 
{
	"CheckCollection", (methodPointerType)&m11717_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t170_m13603_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13603_GM};
extern Il2CppType t36_0_0_0;
static ParameterInfo t170_m13604_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13604_GM;
MethodInfo m13604_MI = 
{
	"Remove", (methodPointerType)&m11719_gshared, &t170_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t170_m13604_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13604_GM};
extern Il2CppType t2679_0_0_0;
static ParameterInfo t170_m13605_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2679_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13605_GM;
MethodInfo m13605_MI = 
{
	"RemoveAll", (methodPointerType)&m11721_gshared, &t170_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t170_m13605_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13605_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t170_m13606_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13606_GM;
MethodInfo m13606_MI = 
{
	"RemoveAt", (methodPointerType)&m11723_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t170_m13606_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13606_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13607_GM;
MethodInfo m13607_MI = 
{
	"Reverse", (methodPointerType)&m11725_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13607_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13608_GM;
MethodInfo m13608_MI = 
{
	"Sort", (methodPointerType)&m11727_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13608_GM};
extern Il2CppType t2681_0_0_0;
extern Il2CppType t2681_0_0_0;
static ParameterInfo t170_m13609_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t2681_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13609_GM;
MethodInfo m13609_MI = 
{
	"Sort", (methodPointerType)&m11729_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t170_m13609_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13609_GM};
extern Il2CppType t58_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m647_GM;
MethodInfo m647_MI = 
{
	"ToArray", (methodPointerType)&m11731_gshared, &t170_TI, &t58_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m647_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13610_GM;
MethodInfo m13610_MI = 
{
	"TrimExcess", (methodPointerType)&m11733_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13610_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13611_GM;
MethodInfo m13611_MI = 
{
	"get_Capacity", (methodPointerType)&m11735_gshared, &t170_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13611_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t170_m13612_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13612_GM;
MethodInfo m13612_MI = 
{
	"set_Capacity", (methodPointerType)&m11737_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t170_m13612_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13612_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13613_GM;
MethodInfo m13613_MI = 
{
	"get_Count", (methodPointerType)&m11738_gshared, &t170_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13613_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t170_m13614_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13614_GM;
MethodInfo m13614_MI = 
{
	"get_Item", (methodPointerType)&m11740_gshared, &t170_TI, &t36_0_0_0, RuntimeInvoker_t5_t110, t170_m13614_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13614_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t36_0_0_0;
static ParameterInfo t170_m13615_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13615_GM;
MethodInfo m13615_MI = 
{
	"set_Item", (methodPointerType)&m11742_gshared, &t170_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t170_m13615_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13615_GM};
static MethodInfo* t170_MIs[] =
{
	&m645_MI,
	&m13568_MI,
	&m13569_MI,
	&m13570_MI,
	&m13571_MI,
	&m13572_MI,
	&m13573_MI,
	&m13574_MI,
	&m13575_MI,
	&m13576_MI,
	&m13577_MI,
	&m13578_MI,
	&m13579_MI,
	&m13580_MI,
	&m13581_MI,
	&m13582_MI,
	&m13583_MI,
	&m13584_MI,
	&m13585_MI,
	&m646_MI,
	&m13586_MI,
	&m13587_MI,
	&m13588_MI,
	&m13589_MI,
	&m13590_MI,
	&m13591_MI,
	&m13592_MI,
	&m13593_MI,
	&m13594_MI,
	&m13595_MI,
	&m13596_MI,
	&m13597_MI,
	&m13598_MI,
	&m13599_MI,
	&m13600_MI,
	&m13601_MI,
	&m13602_MI,
	&m13603_MI,
	&m13604_MI,
	&m13605_MI,
	&m13606_MI,
	&m13607_MI,
	&m13608_MI,
	&m13609_MI,
	&m647_MI,
	&m13610_MI,
	&m13611_MI,
	&m13612_MI,
	&m13613_MI,
	&m13614_MI,
	&m13615_MI,
	NULL
};
extern MethodInfo m13573_MI;
extern MethodInfo m13572_MI;
extern MethodInfo m13574_MI;
extern MethodInfo m13591_MI;
extern MethodInfo m13575_MI;
extern MethodInfo m13576_MI;
extern MethodInfo m13577_MI;
extern MethodInfo m13578_MI;
extern MethodInfo m13593_MI;
extern MethodInfo m13571_MI;
static MethodInfo* t170_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m13573_MI,
	&m13613_MI,
	&m13580_MI,
	&m13581_MI,
	&m13572_MI,
	&m13582_MI,
	&m13583_MI,
	&m13584_MI,
	&m13585_MI,
	&m13574_MI,
	&m13591_MI,
	&m13575_MI,
	&m13576_MI,
	&m13577_MI,
	&m13578_MI,
	&m13606_MI,
	&m13613_MI,
	&m13579_MI,
	&m646_MI,
	&m13591_MI,
	&m13592_MI,
	&m13593_MI,
	&m13604_MI,
	&m13571_MI,
	&m13599_MI,
	&m13602_MI,
	&m13606_MI,
	&m13614_MI,
	&m13615_MI,
};
static TypeInfo* t170_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t2677_TI,
	&t2675_TI,
	&t2683_TI,
};
static Il2CppInterfaceOffsetPair t170_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t2677_TI, 20},
	{ &t2675_TI, 27},
	{ &t2683_TI, 28},
};
extern TypeInfo t170_TI;
extern TypeInfo t2677_TI;
extern TypeInfo t58_TI;
extern TypeInfo t2682_TI;
extern TypeInfo t36_TI;
extern TypeInfo t2678_TI;
static Il2CppRGCTXData t170_RGCTXData[38] = 
{
	&t170_TI/* Static Usage */,
	&m13603_MI/* Method Usage */,
	&t2677_TI/* Class Usage */,
	&m13588_MI/* Method Usage */,
	&m31967_MI/* Method Usage */,
	&t58_TI/* Array Usage */,
	&m13587_MI/* Method Usage */,
	&m13598_MI/* Method Usage */,
	&t2682_TI/* Class Usage */,
	&t36_TI/* Class Usage */,
	&m646_MI/* Method Usage */,
	&m13592_MI/* Method Usage */,
	&m13599_MI/* Method Usage */,
	&m13601_MI/* Method Usage */,
	&m13602_MI/* Method Usage */,
	&m13604_MI/* Method Usage */,
	&m13614_MI/* Method Usage */,
	&m13615_MI/* Method Usage */,
	&m13586_MI/* Method Usage */,
	&m13611_MI/* Method Usage */,
	&m13612_MI/* Method Usage */,
	&m31972_MI/* Method Usage */,
	&m31974_MI/* Method Usage */,
	&m31966_MI/* Method Usage */,
	&t2678_TI/* Class Usage */,
	&m13622_MI/* Method Usage */,
	&m24389_MI/* Method Usage */,
	&m13595_MI/* Method Usage */,
	&m13596_MI/* Method Usage */,
	&m13697_MI/* Method Usage */,
	&m13701_MI/* Method Usage */,
	&m13616_MI/* Method Usage */,
	&m13600_MI/* Method Usage */,
	&m13606_MI/* Method Usage */,
	&m13707_MI/* Method Usage */,
	&m24391_MI/* Method Usage */,
	&m24399_MI/* Method Usage */,
	&m24387_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t170_0_0_0;
extern Il2CppType t170_1_0_0;
struct t170;
extern Il2CppGenericClass t170_GC;
extern CustomAttributesCache t1524__CustomAttributeCache;
TypeInfo t170_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t170_MIs, t170_PIs, t170_FIs, NULL, &t5_TI, NULL, NULL, &t170_TI, t170_ITIs, t170_VT, &t1524__CustomAttributeCache, &t170_TI, &t170_0_0_0, &t170_1_0_0, t170_IOs, &t170_GC, NULL, t170_FDVs, NULL, t170_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t170), 0, -1, sizeof(t170_SFs), 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, true, false, false, 51, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m13619_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<JewelMine.Engine.Models.Coordinates>
extern Il2CppType t170_0_0_1;
FieldInfo t2682_f0_FieldInfo = 
{
	"l", &t170_0_0_1, &t2682_TI, offsetof(t2682, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2682_f1_FieldInfo = 
{
	"next", &t110_0_0_1, &t2682_TI, offsetof(t2682, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2682_f2_FieldInfo = 
{
	"ver", &t110_0_0_1, &t2682_TI, offsetof(t2682, f2) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t36_0_0_1;
FieldInfo t2682_f3_FieldInfo = 
{
	"current", &t36_0_0_1, &t2682_TI, offsetof(t2682, f3) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2682_FIs[] =
{
	&t2682_f0_FieldInfo,
	&t2682_f1_FieldInfo,
	&t2682_f2_FieldInfo,
	&t2682_f3_FieldInfo,
	NULL
};
extern MethodInfo m13617_MI;
static PropertyInfo t2682____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2682_TI, "System.Collections.IEnumerator.Current", &m13617_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13621_MI;
static PropertyInfo t2682____Current_PropertyInfo = 
{
	&t2682_TI, "Current", &m13621_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2682_PIs[] =
{
	&t2682____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2682____Current_PropertyInfo,
	NULL
};
extern Il2CppType t170_0_0_0;
static ParameterInfo t2682_m13616_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t170_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13616_GM;
MethodInfo m13616_MI = 
{
	".ctor", (methodPointerType)&m11749_gshared, &t2682_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2682_m13616_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13616_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13617_GM;
MethodInfo m13617_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11750_gshared, &t2682_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13617_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13618_GM;
MethodInfo m13618_MI = 
{
	"Dispose", (methodPointerType)&m11751_gshared, &t2682_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13618_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13619_GM;
MethodInfo m13619_MI = 
{
	"VerifyState", (methodPointerType)&m11752_gshared, &t2682_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13619_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13620_GM;
MethodInfo m13620_MI = 
{
	"MoveNext", (methodPointerType)&m11753_gshared, &t2682_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13620_GM};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13621_GM;
MethodInfo m13621_MI = 
{
	"get_Current", (methodPointerType)&m11754_gshared, &t2682_TI, &t36_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13621_GM};
static MethodInfo* t2682_MIs[] =
{
	&m13616_MI,
	&m13617_MI,
	&m13618_MI,
	&m13619_MI,
	&m13620_MI,
	&m13621_MI,
	NULL
};
extern MethodInfo m13620_MI;
extern MethodInfo m13618_MI;
static MethodInfo* t2682_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m13617_MI,
	&m13620_MI,
	&m13618_MI,
	&m13621_MI,
};
static TypeInfo* t2682_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t2676_TI,
};
static Il2CppInterfaceOffsetPair t2682_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t2676_TI, 7},
};
extern TypeInfo t36_TI;
extern TypeInfo t2682_TI;
static Il2CppRGCTXData t2682_RGCTXData[3] = 
{
	&m13619_MI/* Method Usage */,
	&t36_TI/* Class Usage */,
	&t2682_TI/* Class Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2682_0_0_0;
extern Il2CppType t2682_1_0_0;
extern Il2CppGenericClass t2682_GC;
TypeInfo t2682_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2682_MIs, t2682_PIs, t2682_FIs, NULL, &t267_TI, NULL, &t1524_TI, &t2682_TI, t2682_ITIs, t2682_VT, &EmptyCustomAttributesCache, &t2682_TI, &t2682_0_0_0, &t2682_1_0_0, t2682_IOs, &t2682_GC, NULL, NULL, NULL, t2682_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2682)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif

#include "t2684MD.h"
extern MethodInfo m13651_MI;
extern MethodInfo m13683_MI;
extern MethodInfo m31971_MI;
extern MethodInfo m31977_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<JewelMine.Engine.Models.Coordinates>
extern Il2CppType t2683_0_0_1;
FieldInfo t2678_f0_FieldInfo = 
{
	"list", &t2683_0_0_1, &t2678_TI, offsetof(t2678, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2678_FIs[] =
{
	&t2678_f0_FieldInfo,
	NULL
};
extern MethodInfo m13628_MI;
extern MethodInfo m13629_MI;
static PropertyInfo t2678____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t2678_TI, "System.Collections.Generic.IList<T>.Item", &m13628_MI, &m13629_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13630_MI;
static PropertyInfo t2678____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2678_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13630_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13640_MI;
static PropertyInfo t2678____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2678_TI, "System.Collections.ICollection.IsSynchronized", &m13640_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13641_MI;
static PropertyInfo t2678____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2678_TI, "System.Collections.ICollection.SyncRoot", &m13641_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13642_MI;
static PropertyInfo t2678____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2678_TI, "System.Collections.IList.IsFixedSize", &m13642_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13643_MI;
static PropertyInfo t2678____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2678_TI, "System.Collections.IList.IsReadOnly", &m13643_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13644_MI;
extern MethodInfo m13645_MI;
static PropertyInfo t2678____System_Collections_IList_Item_PropertyInfo = 
{
	&t2678_TI, "System.Collections.IList.Item", &m13644_MI, &m13645_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13650_MI;
static PropertyInfo t2678____Count_PropertyInfo = 
{
	&t2678_TI, "Count", &m13650_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2678____Item_PropertyInfo = 
{
	&t2678_TI, "Item", &m13651_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2678_PIs[] =
{
	&t2678____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t2678____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2678____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2678____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2678____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2678____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2678____System_Collections_IList_Item_PropertyInfo,
	&t2678____Count_PropertyInfo,
	&t2678____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2683_0_0_0;
static ParameterInfo t2678_m13622_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2683_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13622_GM;
MethodInfo m13622_MI = 
{
	".ctor", (methodPointerType)&m11755_gshared, &t2678_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2678_m13622_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13622_GM};
extern Il2CppType t36_0_0_0;
static ParameterInfo t2678_m13623_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13623_GM;
MethodInfo m13623_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m11756_gshared, &t2678_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2678_m13623_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13623_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13624_GM;
MethodInfo m13624_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m11757_gshared, &t2678_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13624_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t36_0_0_0;
static ParameterInfo t2678_m13625_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13625_GM;
MethodInfo m13625_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m11758_gshared, &t2678_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2678_m13625_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13625_GM};
extern Il2CppType t36_0_0_0;
static ParameterInfo t2678_m13626_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13626_GM;
MethodInfo m13626_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m11759_gshared, &t2678_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2678_m13626_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13626_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2678_m13627_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13627_GM;
MethodInfo m13627_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m11760_gshared, &t2678_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2678_m13627_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13627_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2678_m13628_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13628_GM;
MethodInfo m13628_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m11761_gshared, &t2678_TI, &t36_0_0_0, RuntimeInvoker_t5_t110, t2678_m13628_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13628_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t36_0_0_0;
static ParameterInfo t2678_m13629_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13629_GM;
MethodInfo m13629_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m11762_gshared, &t2678_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2678_m13629_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13629_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13630_GM;
MethodInfo m13630_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11763_gshared, &t2678_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13630_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2678_m13631_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13631_GM;
MethodInfo m13631_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11764_gshared, &t2678_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2678_m13631_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13631_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13632_GM;
MethodInfo m13632_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11765_gshared, &t2678_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13632_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2678_m13633_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13633_GM;
MethodInfo m13633_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11766_gshared, &t2678_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2678_m13633_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13633_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13634_GM;
MethodInfo m13634_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m11767_gshared, &t2678_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13634_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2678_m13635_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13635_GM;
MethodInfo m13635_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11768_gshared, &t2678_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2678_m13635_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13635_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2678_m13636_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13636_GM;
MethodInfo m13636_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11769_gshared, &t2678_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2678_m13636_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13636_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2678_m13637_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13637_GM;
MethodInfo m13637_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11770_gshared, &t2678_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2678_m13637_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13637_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2678_m13638_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13638_GM;
MethodInfo m13638_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11771_gshared, &t2678_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2678_m13638_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13638_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2678_m13639_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13639_GM;
MethodInfo m13639_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m11772_gshared, &t2678_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2678_m13639_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13639_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13640_GM;
MethodInfo m13640_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11773_gshared, &t2678_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13640_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13641_GM;
MethodInfo m13641_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11774_gshared, &t2678_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13641_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13642_GM;
MethodInfo m13642_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11775_gshared, &t2678_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13642_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13643_GM;
MethodInfo m13643_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11776_gshared, &t2678_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13643_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2678_m13644_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13644_GM;
MethodInfo m13644_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11777_gshared, &t2678_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t2678_m13644_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13644_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2678_m13645_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13645_GM;
MethodInfo m13645_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11778_gshared, &t2678_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2678_m13645_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13645_GM};
extern Il2CppType t36_0_0_0;
static ParameterInfo t2678_m13646_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13646_GM;
MethodInfo m13646_MI = 
{
	"Contains", (methodPointerType)&m11779_gshared, &t2678_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2678_m13646_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13646_GM};
extern Il2CppType t58_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2678_m13647_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13647_GM;
MethodInfo m13647_MI = 
{
	"CopyTo", (methodPointerType)&m11780_gshared, &t2678_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2678_m13647_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13647_GM};
extern Il2CppType t2676_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13648_GM;
MethodInfo m13648_MI = 
{
	"GetEnumerator", (methodPointerType)&m11781_gshared, &t2678_TI, &t2676_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13648_GM};
extern Il2CppType t36_0_0_0;
static ParameterInfo t2678_m13649_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13649_GM;
MethodInfo m13649_MI = 
{
	"IndexOf", (methodPointerType)&m11782_gshared, &t2678_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2678_m13649_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13649_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13650_GM;
MethodInfo m13650_MI = 
{
	"get_Count", (methodPointerType)&m11783_gshared, &t2678_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13650_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2678_m13651_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13651_GM;
MethodInfo m13651_MI = 
{
	"get_Item", (methodPointerType)&m11784_gshared, &t2678_TI, &t36_0_0_0, RuntimeInvoker_t5_t110, t2678_m13651_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13651_GM};
static MethodInfo* t2678_MIs[] =
{
	&m13622_MI,
	&m13623_MI,
	&m13624_MI,
	&m13625_MI,
	&m13626_MI,
	&m13627_MI,
	&m13628_MI,
	&m13629_MI,
	&m13630_MI,
	&m13631_MI,
	&m13632_MI,
	&m13633_MI,
	&m13634_MI,
	&m13635_MI,
	&m13636_MI,
	&m13637_MI,
	&m13638_MI,
	&m13639_MI,
	&m13640_MI,
	&m13641_MI,
	&m13642_MI,
	&m13643_MI,
	&m13644_MI,
	&m13645_MI,
	&m13646_MI,
	&m13647_MI,
	&m13648_MI,
	&m13649_MI,
	&m13650_MI,
	&m13651_MI,
	NULL
};
extern MethodInfo m13632_MI;
extern MethodInfo m13631_MI;
extern MethodInfo m13633_MI;
extern MethodInfo m13634_MI;
extern MethodInfo m13635_MI;
extern MethodInfo m13636_MI;
extern MethodInfo m13637_MI;
extern MethodInfo m13638_MI;
extern MethodInfo m13639_MI;
extern MethodInfo m13623_MI;
extern MethodInfo m13624_MI;
extern MethodInfo m13646_MI;
extern MethodInfo m13647_MI;
extern MethodInfo m13626_MI;
extern MethodInfo m13649_MI;
extern MethodInfo m13625_MI;
extern MethodInfo m13627_MI;
extern MethodInfo m13648_MI;
static MethodInfo* t2678_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m13632_MI,
	&m13650_MI,
	&m13640_MI,
	&m13641_MI,
	&m13631_MI,
	&m13642_MI,
	&m13643_MI,
	&m13644_MI,
	&m13645_MI,
	&m13633_MI,
	&m13634_MI,
	&m13635_MI,
	&m13636_MI,
	&m13637_MI,
	&m13638_MI,
	&m13639_MI,
	&m13650_MI,
	&m13630_MI,
	&m13623_MI,
	&m13624_MI,
	&m13646_MI,
	&m13647_MI,
	&m13626_MI,
	&m13649_MI,
	&m13625_MI,
	&m13627_MI,
	&m13628_MI,
	&m13629_MI,
	&m13648_MI,
	&m13651_MI,
};
static TypeInfo* t2678_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t2677_TI,
	&t2683_TI,
	&t2675_TI,
};
static Il2CppInterfaceOffsetPair t2678_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t2677_TI, 20},
	{ &t2683_TI, 27},
	{ &t2675_TI, 32},
};
extern TypeInfo t36_TI;
static Il2CppRGCTXData t2678_RGCTXData[9] = 
{
	&m13651_MI/* Method Usage */,
	&m13683_MI/* Method Usage */,
	&t36_TI/* Class Usage */,
	&m31971_MI/* Method Usage */,
	&m31977_MI/* Method Usage */,
	&m31975_MI/* Method Usage */,
	&m31972_MI/* Method Usage */,
	&m31974_MI/* Method Usage */,
	&m31967_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2678_0_0_0;
extern Il2CppType t2678_1_0_0;
struct t2678;
extern Il2CppGenericClass t2678_GC;
extern CustomAttributesCache t1526__CustomAttributeCache;
TypeInfo t2678_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t2678_MIs, t2678_PIs, t2678_FIs, NULL, &t5_TI, NULL, NULL, &t2678_TI, t2678_ITIs, t2678_VT, &t1526__CustomAttributeCache, &t2678_TI, &t2678_0_0_0, &t2678_1_0_0, t2678_IOs, &t2678_GC, NULL, NULL, NULL, t2678_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2678), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t2684.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2684_TI;

extern MethodInfo m13686_MI;
extern MethodInfo m13687_MI;
extern MethodInfo m13684_MI;
extern MethodInfo m13682_MI;
extern MethodInfo m645_MI;
extern MethodInfo m13675_MI;
extern MethodInfo m13685_MI;
extern MethodInfo m13673_MI;
extern MethodInfo m13678_MI;
extern MethodInfo m13669_MI;
extern MethodInfo m31970_MI;
extern MethodInfo m31978_MI;
extern MethodInfo m31979_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<JewelMine.Engine.Models.Coordinates>
extern Il2CppType t2683_0_0_1;
FieldInfo t2684_f0_FieldInfo = 
{
	"list", &t2683_0_0_1, &t2684_TI, offsetof(t2684, f0), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_1;
FieldInfo t2684_f1_FieldInfo = 
{
	"syncRoot", &t5_0_0_1, &t2684_TI, offsetof(t2684, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2684_FIs[] =
{
	&t2684_f0_FieldInfo,
	&t2684_f1_FieldInfo,
	NULL
};
extern MethodInfo m13653_MI;
static PropertyInfo t2684____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2684_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13653_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13661_MI;
static PropertyInfo t2684____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2684_TI, "System.Collections.ICollection.IsSynchronized", &m13661_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13662_MI;
static PropertyInfo t2684____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2684_TI, "System.Collections.ICollection.SyncRoot", &m13662_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13663_MI;
static PropertyInfo t2684____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2684_TI, "System.Collections.IList.IsFixedSize", &m13663_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13664_MI;
static PropertyInfo t2684____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2684_TI, "System.Collections.IList.IsReadOnly", &m13664_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13665_MI;
extern MethodInfo m13666_MI;
static PropertyInfo t2684____System_Collections_IList_Item_PropertyInfo = 
{
	&t2684_TI, "System.Collections.IList.Item", &m13665_MI, &m13666_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13679_MI;
static PropertyInfo t2684____Count_PropertyInfo = 
{
	&t2684_TI, "Count", &m13679_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13680_MI;
extern MethodInfo m13681_MI;
static PropertyInfo t2684____Item_PropertyInfo = 
{
	&t2684_TI, "Item", &m13680_MI, &m13681_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2684_PIs[] =
{
	&t2684____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2684____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2684____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2684____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2684____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2684____System_Collections_IList_Item_PropertyInfo,
	&t2684____Count_PropertyInfo,
	&t2684____Item_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13652_GM;
MethodInfo m13652_MI = 
{
	".ctor", (methodPointerType)&m11785_gshared, &t2684_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13652_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13653_GM;
MethodInfo m13653_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11786_gshared, &t2684_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13653_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2684_m13654_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13654_GM;
MethodInfo m13654_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11787_gshared, &t2684_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2684_m13654_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13654_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13655_GM;
MethodInfo m13655_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11788_gshared, &t2684_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13655_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2684_m13656_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13656_GM;
MethodInfo m13656_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11789_gshared, &t2684_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2684_m13656_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13656_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2684_m13657_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13657_GM;
MethodInfo m13657_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11790_gshared, &t2684_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2684_m13657_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13657_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2684_m13658_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13658_GM;
MethodInfo m13658_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11791_gshared, &t2684_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2684_m13658_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13658_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2684_m13659_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13659_GM;
MethodInfo m13659_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11792_gshared, &t2684_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2684_m13659_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13659_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2684_m13660_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13660_GM;
MethodInfo m13660_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11793_gshared, &t2684_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2684_m13660_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13660_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13661_GM;
MethodInfo m13661_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11794_gshared, &t2684_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13661_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13662_GM;
MethodInfo m13662_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11795_gshared, &t2684_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13662_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13663_GM;
MethodInfo m13663_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11796_gshared, &t2684_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13663_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13664_GM;
MethodInfo m13664_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11797_gshared, &t2684_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13664_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2684_m13665_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13665_GM;
MethodInfo m13665_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11798_gshared, &t2684_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t2684_m13665_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13665_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2684_m13666_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13666_GM;
MethodInfo m13666_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11799_gshared, &t2684_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2684_m13666_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13666_GM};
extern Il2CppType t36_0_0_0;
static ParameterInfo t2684_m13667_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13667_GM;
MethodInfo m13667_MI = 
{
	"Add", (methodPointerType)&m11800_gshared, &t2684_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2684_m13667_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13667_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13668_GM;
MethodInfo m13668_MI = 
{
	"Clear", (methodPointerType)&m11801_gshared, &t2684_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13668_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13669_GM;
MethodInfo m13669_MI = 
{
	"ClearItems", (methodPointerType)&m11802_gshared, &t2684_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13669_GM};
extern Il2CppType t36_0_0_0;
static ParameterInfo t2684_m13670_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13670_GM;
MethodInfo m13670_MI = 
{
	"Contains", (methodPointerType)&m11803_gshared, &t2684_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2684_m13670_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13670_GM};
extern Il2CppType t58_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2684_m13671_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t58_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13671_GM;
MethodInfo m13671_MI = 
{
	"CopyTo", (methodPointerType)&m11804_gshared, &t2684_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2684_m13671_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13671_GM};
extern Il2CppType t2676_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13672_GM;
MethodInfo m13672_MI = 
{
	"GetEnumerator", (methodPointerType)&m11805_gshared, &t2684_TI, &t2676_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13672_GM};
extern Il2CppType t36_0_0_0;
static ParameterInfo t2684_m13673_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13673_GM;
MethodInfo m13673_MI = 
{
	"IndexOf", (methodPointerType)&m11806_gshared, &t2684_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2684_m13673_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13673_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t36_0_0_0;
static ParameterInfo t2684_m13674_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13674_GM;
MethodInfo m13674_MI = 
{
	"Insert", (methodPointerType)&m11807_gshared, &t2684_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2684_m13674_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13674_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t36_0_0_0;
static ParameterInfo t2684_m13675_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13675_GM;
MethodInfo m13675_MI = 
{
	"InsertItem", (methodPointerType)&m11808_gshared, &t2684_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2684_m13675_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13675_GM};
extern Il2CppType t36_0_0_0;
static ParameterInfo t2684_m13676_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13676_GM;
MethodInfo m13676_MI = 
{
	"Remove", (methodPointerType)&m11809_gshared, &t2684_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2684_m13676_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13676_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2684_m13677_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13677_GM;
MethodInfo m13677_MI = 
{
	"RemoveAt", (methodPointerType)&m11810_gshared, &t2684_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2684_m13677_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13677_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2684_m13678_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13678_GM;
MethodInfo m13678_MI = 
{
	"RemoveItem", (methodPointerType)&m11811_gshared, &t2684_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2684_m13678_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13678_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13679_GM;
MethodInfo m13679_MI = 
{
	"get_Count", (methodPointerType)&m11812_gshared, &t2684_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13679_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2684_m13680_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13680_GM;
MethodInfo m13680_MI = 
{
	"get_Item", (methodPointerType)&m11813_gshared, &t2684_TI, &t36_0_0_0, RuntimeInvoker_t5_t110, t2684_m13680_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13680_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t36_0_0_0;
static ParameterInfo t2684_m13681_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13681_GM;
MethodInfo m13681_MI = 
{
	"set_Item", (methodPointerType)&m11814_gshared, &t2684_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2684_m13681_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13681_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t36_0_0_0;
static ParameterInfo t2684_m13682_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13682_GM;
MethodInfo m13682_MI = 
{
	"SetItem", (methodPointerType)&m11815_gshared, &t2684_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2684_m13682_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13682_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2684_m13683_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13683_GM;
MethodInfo m13683_MI = 
{
	"IsValidItem", (methodPointerType)&m11816_gshared, &t2684_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2684_m13683_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13683_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2684_m13684_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13684_GM;
MethodInfo m13684_MI = 
{
	"ConvertItem", (methodPointerType)&m11817_gshared, &t2684_TI, &t36_0_0_0, RuntimeInvoker_t5_t5, t2684_m13684_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13684_GM};
extern Il2CppType t2683_0_0_0;
static ParameterInfo t2684_m13685_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2683_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13685_GM;
MethodInfo m13685_MI = 
{
	"CheckWritable", (methodPointerType)&m11818_gshared, &t2684_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2684_m13685_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13685_GM};
extern Il2CppType t2683_0_0_0;
static ParameterInfo t2684_m13686_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2683_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13686_GM;
MethodInfo m13686_MI = 
{
	"IsSynchronized", (methodPointerType)&m11819_gshared, &t2684_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2684_m13686_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13686_GM};
extern Il2CppType t2683_0_0_0;
static ParameterInfo t2684_m13687_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2683_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13687_GM;
MethodInfo m13687_MI = 
{
	"IsFixedSize", (methodPointerType)&m11820_gshared, &t2684_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2684_m13687_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13687_GM};
static MethodInfo* t2684_MIs[] =
{
	&m13652_MI,
	&m13653_MI,
	&m13654_MI,
	&m13655_MI,
	&m13656_MI,
	&m13657_MI,
	&m13658_MI,
	&m13659_MI,
	&m13660_MI,
	&m13661_MI,
	&m13662_MI,
	&m13663_MI,
	&m13664_MI,
	&m13665_MI,
	&m13666_MI,
	&m13667_MI,
	&m13668_MI,
	&m13669_MI,
	&m13670_MI,
	&m13671_MI,
	&m13672_MI,
	&m13673_MI,
	&m13674_MI,
	&m13675_MI,
	&m13676_MI,
	&m13677_MI,
	&m13678_MI,
	&m13679_MI,
	&m13680_MI,
	&m13681_MI,
	&m13682_MI,
	&m13683_MI,
	&m13684_MI,
	&m13685_MI,
	&m13686_MI,
	&m13687_MI,
	NULL
};
extern MethodInfo m13655_MI;
extern MethodInfo m13654_MI;
extern MethodInfo m13656_MI;
extern MethodInfo m13668_MI;
extern MethodInfo m13657_MI;
extern MethodInfo m13658_MI;
extern MethodInfo m13659_MI;
extern MethodInfo m13660_MI;
extern MethodInfo m13677_MI;
extern MethodInfo m13667_MI;
extern MethodInfo m13670_MI;
extern MethodInfo m13671_MI;
extern MethodInfo m13676_MI;
extern MethodInfo m13674_MI;
extern MethodInfo m13672_MI;
static MethodInfo* t2684_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m13655_MI,
	&m13679_MI,
	&m13661_MI,
	&m13662_MI,
	&m13654_MI,
	&m13663_MI,
	&m13664_MI,
	&m13665_MI,
	&m13666_MI,
	&m13656_MI,
	&m13668_MI,
	&m13657_MI,
	&m13658_MI,
	&m13659_MI,
	&m13660_MI,
	&m13677_MI,
	&m13679_MI,
	&m13653_MI,
	&m13667_MI,
	&m13668_MI,
	&m13670_MI,
	&m13671_MI,
	&m13676_MI,
	&m13673_MI,
	&m13674_MI,
	&m13677_MI,
	&m13680_MI,
	&m13681_MI,
	&m13672_MI,
	&m13669_MI,
	&m13675_MI,
	&m13678_MI,
	&m13682_MI,
};
static TypeInfo* t2684_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t2677_TI,
	&t2683_TI,
	&t2675_TI,
};
static Il2CppInterfaceOffsetPair t2684_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t2677_TI, 20},
	{ &t2683_TI, 27},
	{ &t2675_TI, 32},
};
extern TypeInfo t170_TI;
extern TypeInfo t36_TI;
static Il2CppRGCTXData t2684_RGCTXData[25] = 
{
	&t170_TI/* Class Usage */,
	&m645_MI/* Method Usage */,
	&m31968_MI/* Method Usage */,
	&m31974_MI/* Method Usage */,
	&m31967_MI/* Method Usage */,
	&m13684_MI/* Method Usage */,
	&m13675_MI/* Method Usage */,
	&m13683_MI/* Method Usage */,
	&t36_TI/* Class Usage */,
	&m31971_MI/* Method Usage */,
	&m31977_MI/* Method Usage */,
	&m13685_MI/* Method Usage */,
	&m13673_MI/* Method Usage */,
	&m13678_MI/* Method Usage */,
	&m13686_MI/* Method Usage */,
	&m13687_MI/* Method Usage */,
	&m31975_MI/* Method Usage */,
	&m13682_MI/* Method Usage */,
	&m13669_MI/* Method Usage */,
	&m31970_MI/* Method Usage */,
	&m31972_MI/* Method Usage */,
	&m31978_MI/* Method Usage */,
	&m31979_MI/* Method Usage */,
	&m31976_MI/* Method Usage */,
	&t36_0_0_0/* Type Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2684_0_0_0;
extern Il2CppType t2684_1_0_0;
struct t2684;
extern Il2CppGenericClass t2684_GC;
extern CustomAttributesCache t1525__CustomAttributeCache;
TypeInfo t2684_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t2684_MIs, t2684_PIs, t2684_FIs, NULL, &t5_TI, NULL, NULL, &t2684_TI, t2684_ITIs, t2684_VT, &t1525__CustomAttributeCache, &t2684_TI, &t2684_0_0_0, &t2684_1_0_0, t2684_IOs, &t2684_GC, NULL, NULL, NULL, t2684_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2684), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2685_TI;
#include "t2685MD.h"

#include "t2686.h"
extern TypeInfo t7563_TI;
extern TypeInfo t2686_TI;
#include "t2686MD.h"
extern Il2CppType t7563_0_0_0;
extern MethodInfo m13693_MI;
extern MethodInfo m31997_MI;
extern MethodInfo m24388_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<JewelMine.Engine.Models.Coordinates>
extern Il2CppType t2685_0_0_49;
FieldInfo t2685_f0_FieldInfo = 
{
	"_default", &t2685_0_0_49, &t2685_TI, offsetof(t2685_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2685_FIs[] =
{
	&t2685_f0_FieldInfo,
	NULL
};
extern MethodInfo m13692_MI;
static PropertyInfo t2685____Default_PropertyInfo = 
{
	&t2685_TI, "Default", &m13692_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2685_PIs[] =
{
	&t2685____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13688_GM;
MethodInfo m13688_MI = 
{
	".ctor", (methodPointerType)&m11821_gshared, &t2685_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13688_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13689_GM;
MethodInfo m13689_MI = 
{
	".cctor", (methodPointerType)&m11822_gshared, &t2685_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13689_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2685_m13690_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13690_GM;
MethodInfo m13690_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m11823_gshared, &t2685_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2685_m13690_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13690_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2685_m13691_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13691_GM;
MethodInfo m13691_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m11824_gshared, &t2685_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2685_m13691_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13691_GM};
extern Il2CppType t36_0_0_0;
static ParameterInfo t2685_m31997_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31997_GM;
MethodInfo m31997_MI = 
{
	"GetHashCode", NULL, &t2685_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2685_m31997_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31997_GM};
extern Il2CppType t36_0_0_0;
extern Il2CppType t36_0_0_0;
static ParameterInfo t2685_m24388_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m24388_GM;
MethodInfo m24388_MI = 
{
	"Equals", NULL, &t2685_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2685_m24388_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m24388_GM};
extern Il2CppType t2685_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13692_GM;
MethodInfo m13692_MI = 
{
	"get_Default", (methodPointerType)&m11825_gshared, &t2685_TI, &t2685_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13692_GM};
static MethodInfo* t2685_MIs[] =
{
	&m13688_MI,
	&m13689_MI,
	&m13690_MI,
	&m13691_MI,
	&m31997_MI,
	&m24388_MI,
	&m13692_MI,
	NULL
};
extern MethodInfo m13691_MI;
extern MethodInfo m13690_MI;
static MethodInfo* t2685_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m24388_MI,
	&m31997_MI,
	&m13691_MI,
	&m13690_MI,
	NULL,
	NULL,
};
extern TypeInfo t7564_TI;
static TypeInfo* t2685_ITIs[] = 
{
	&t7564_TI,
	&t998_TI,
};
static Il2CppInterfaceOffsetPair t2685_IOs[] = 
{
	{ &t7564_TI, 4},
	{ &t998_TI, 6},
};
extern TypeInfo t2685_TI;
extern TypeInfo t2685_TI;
extern TypeInfo t2686_TI;
extern TypeInfo t36_TI;
static Il2CppRGCTXData t2685_RGCTXData[9] = 
{
	&t7563_0_0_0/* Type Usage */,
	&t36_0_0_0/* Type Usage */,
	&t2685_TI/* Class Usage */,
	&t2685_TI/* Static Usage */,
	&t2686_TI/* Class Usage */,
	&m13693_MI/* Method Usage */,
	&t36_TI/* Class Usage */,
	&m31997_MI/* Method Usage */,
	&m24388_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2685_0_0_0;
extern Il2CppType t2685_1_0_0;
struct t2685;
extern Il2CppGenericClass t2685_GC;
TypeInfo t2685_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2685_MIs, t2685_PIs, t2685_FIs, NULL, &t5_TI, NULL, NULL, &t2685_TI, t2685_ITIs, t2685_VT, &EmptyCustomAttributesCache, &t2685_TI, &t2685_0_0_0, &t2685_1_0_0, t2685_IOs, &t2685_GC, NULL, NULL, NULL, t2685_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2685), 0, -1, sizeof(t2685_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<JewelMine.Engine.Models.Coordinates>
extern Il2CppType t36_0_0_0;
extern Il2CppType t36_0_0_0;
static ParameterInfo t7564_m31998_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31998_GM;
MethodInfo m31998_MI = 
{
	"Equals", NULL, &t7564_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t7564_m31998_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m31998_GM};
extern Il2CppType t36_0_0_0;
static ParameterInfo t7564_m31999_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m31999_GM;
MethodInfo m31999_MI = 
{
	"GetHashCode", NULL, &t7564_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7564_m31999_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL, &m31999_GM};
static MethodInfo* t7564_MIs[] =
{
	&m31998_MI,
	&m31999_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7564_0_0_0;
extern Il2CppType t7564_1_0_0;
struct t7564;
extern Il2CppGenericClass t7564_GC;
TypeInfo t7564_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t7564_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7564_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7564_TI, &t7564_0_0_0, &t7564_1_0_0, NULL, &t7564_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.IEquatable`1<JewelMine.Engine.Models.Coordinates>
extern Il2CppType t36_0_0_0;
static ParameterInfo t7563_m32000_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32000_GM;
MethodInfo m32000_MI = 
{
	"Equals", NULL, &t7563_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7563_m32000_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32000_GM};
static MethodInfo* t7563_MIs[] =
{
	&m32000_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7563_1_0_0;
struct t7563;
extern Il2CppGenericClass t7563_GC;
TypeInfo t7563_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t7563_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7563_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7563_TI, &t7563_0_0_0, &t7563_1_0_0, NULL, &t7563_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m13688_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<JewelMine.Engine.Models.Coordinates>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13693_GM;
MethodInfo m13693_MI = 
{
	".ctor", (methodPointerType)&m11856_gshared, &t2686_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13693_GM};
extern Il2CppType t36_0_0_0;
static ParameterInfo t2686_m13694_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13694_GM;
MethodInfo m13694_MI = 
{
	"GetHashCode", (methodPointerType)&m11857_gshared, &t2686_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2686_m13694_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13694_GM};
extern Il2CppType t36_0_0_0;
extern Il2CppType t36_0_0_0;
static ParameterInfo t2686_m13695_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13695_GM;
MethodInfo m13695_MI = 
{
	"Equals", (methodPointerType)&m11858_gshared, &t2686_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2686_m13695_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13695_GM};
static MethodInfo* t2686_MIs[] =
{
	&m13693_MI,
	&m13694_MI,
	&m13695_MI,
	NULL
};
extern MethodInfo m13695_MI;
extern MethodInfo m13694_MI;
static MethodInfo* t2686_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m13695_MI,
	&m13694_MI,
	&m13691_MI,
	&m13690_MI,
	&m13694_MI,
	&m13695_MI,
};
static Il2CppInterfaceOffsetPair t2686_IOs[] = 
{
	{ &t7564_TI, 4},
	{ &t998_TI, 6},
};
extern TypeInfo t2685_TI;
extern TypeInfo t2685_TI;
extern TypeInfo t2686_TI;
extern TypeInfo t36_TI;
extern TypeInfo t36_TI;
static Il2CppRGCTXData t2686_RGCTXData[11] = 
{
	&t7563_0_0_0/* Type Usage */,
	&t36_0_0_0/* Type Usage */,
	&t2685_TI/* Class Usage */,
	&t2685_TI/* Static Usage */,
	&t2686_TI/* Class Usage */,
	&m13693_MI/* Method Usage */,
	&t36_TI/* Class Usage */,
	&m31997_MI/* Method Usage */,
	&m24388_MI/* Method Usage */,
	&m13688_MI/* Method Usage */,
	&t36_TI/* Class Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2686_0_0_0;
extern Il2CppType t2686_1_0_0;
struct t2686;
extern Il2CppGenericClass t2686_GC;
TypeInfo t2686_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2686_MIs, NULL, NULL, NULL, &t2685_TI, NULL, &t1519_TI, &t2686_TI, NULL, t2686_VT, &EmptyCustomAttributesCache, &t2686_TI, &t2686_0_0_0, &t2686_1_0_0, t2686_IOs, &t2686_GC, NULL, NULL, NULL, t2686_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2686), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Predicate`1<JewelMine.Engine.Models.Coordinates>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2679_m13696_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13696_GM;
MethodInfo m13696_MI = 
{
	".ctor", (methodPointerType)&m11859_gshared, &t2679_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2679_m13696_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13696_GM};
extern Il2CppType t36_0_0_0;
static ParameterInfo t2679_m13697_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13697_GM;
MethodInfo m13697_MI = 
{
	"Invoke", (methodPointerType)&m11860_gshared, &t2679_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2679_m13697_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13697_GM};
extern Il2CppType t36_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2679_m13698_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13698_GM;
MethodInfo m13698_MI = 
{
	"BeginInvoke", (methodPointerType)&m11861_gshared, &t2679_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t2679_m13698_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m13698_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2679_m13699_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13699_GM;
MethodInfo m13699_MI = 
{
	"EndInvoke", (methodPointerType)&m11862_gshared, &t2679_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2679_m13699_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13699_GM};
static MethodInfo* t2679_MIs[] =
{
	&m13696_MI,
	&m13697_MI,
	&m13698_MI,
	&m13699_MI,
	NULL
};
extern MethodInfo m13698_MI;
extern MethodInfo m13699_MI;
static MethodInfo* t2679_VT[] =
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
	&m13697_MI,
	&m13698_MI,
	&m13699_MI,
};
static Il2CppInterfaceOffsetPair t2679_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2679_1_0_0;
struct t2679;
extern Il2CppGenericClass t2679_GC;
TypeInfo t2679_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t2679_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t2679_TI, NULL, t2679_VT, &EmptyCustomAttributesCache, &t2679_TI, &t2679_0_0_0, &t2679_1_0_0, t2679_IOs, &t2679_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2679), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Action`1<JewelMine.Engine.Models.Coordinates>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2680_m13700_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13700_GM;
MethodInfo m13700_MI = 
{
	".ctor", (methodPointerType)&m11863_gshared, &t2680_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2680_m13700_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13700_GM};
extern Il2CppType t36_0_0_0;
static ParameterInfo t2680_m13701_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13701_GM;
MethodInfo m13701_MI = 
{
	"Invoke", (methodPointerType)&m11864_gshared, &t2680_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2680_m13701_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13701_GM};
extern Il2CppType t36_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2680_m13702_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13702_GM;
MethodInfo m13702_MI = 
{
	"BeginInvoke", (methodPointerType)&m11865_gshared, &t2680_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t2680_m13702_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m13702_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2680_m13703_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13703_GM;
MethodInfo m13703_MI = 
{
	"EndInvoke", (methodPointerType)&m11866_gshared, &t2680_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2680_m13703_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m13703_GM};
static MethodInfo* t2680_MIs[] =
{
	&m13700_MI,
	&m13701_MI,
	&m13702_MI,
	&m13703_MI,
	NULL
};
extern MethodInfo m13702_MI;
extern MethodInfo m13703_MI;
static MethodInfo* t2680_VT[] =
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
	&m13701_MI,
	&m13702_MI,
	&m13703_MI,
};
static Il2CppInterfaceOffsetPair t2680_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2680_1_0_0;
struct t2680;
extern Il2CppGenericClass t2680_GC;
TypeInfo t2680_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Action`1", "System", t2680_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t2680_TI, NULL, t2680_VT, &EmptyCustomAttributesCache, &t2680_TI, &t2680_0_0_0, &t2680_1_0_0, t2680_IOs, &t2680_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2680), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif

#include "t2688.h"
extern TypeInfo t4730_TI;
extern TypeInfo t2688_TI;
#include "t2688MD.h"
extern Il2CppType t4730_0_0_0;
extern MethodInfo m13708_MI;
extern MethodInfo m32001_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<JewelMine.Engine.Models.Coordinates>
extern Il2CppType t2687_0_0_49;
FieldInfo t2687_f0_FieldInfo = 
{
	"_default", &t2687_0_0_49, &t2687_TI, offsetof(t2687_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2687_FIs[] =
{
	&t2687_f0_FieldInfo,
	NULL
};
static PropertyInfo t2687____Default_PropertyInfo = 
{
	&t2687_TI, "Default", &m13707_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2687_PIs[] =
{
	&t2687____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13704_GM;
MethodInfo m13704_MI = 
{
	".ctor", (methodPointerType)&m11867_gshared, &t2687_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13704_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13705_GM;
MethodInfo m13705_MI = 
{
	".cctor", (methodPointerType)&m11868_gshared, &t2687_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13705_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2687_m13706_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13706_GM;
MethodInfo m13706_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m11869_gshared, &t2687_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t2687_m13706_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m13706_GM};
extern Il2CppType t36_0_0_0;
extern Il2CppType t36_0_0_0;
static ParameterInfo t2687_m32001_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32001_GM;
MethodInfo m32001_MI = 
{
	"Compare", NULL, &t2687_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t2687_m32001_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32001_GM};
extern Il2CppType t2687_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m13707_GM;
MethodInfo m13707_MI = 
{
	"get_Default", (methodPointerType)&m11870_gshared, &t2687_TI, &t2687_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m13707_GM};
static MethodInfo* t2687_MIs[] =
{
	&m13704_MI,
	&m13705_MI,
	&m13706_MI,
	&m32001_MI,
	&m13707_MI,
	NULL
};
extern MethodInfo m13706_MI;
static MethodInfo* t2687_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m32001_MI,
	&m13706_MI,
	NULL,
};
extern TypeInfo t4729_TI;
static TypeInfo* t2687_ITIs[] = 
{
	&t4729_TI,
	&t991_TI,
};
static Il2CppInterfaceOffsetPair t2687_IOs[] = 
{
	{ &t4729_TI, 4},
	{ &t991_TI, 5},
};
extern TypeInfo t2687_TI;
extern TypeInfo t2687_TI;
extern TypeInfo t2688_TI;
extern TypeInfo t36_TI;
static Il2CppRGCTXData t2687_RGCTXData[8] = 
{
	&t4730_0_0_0/* Type Usage */,
	&t36_0_0_0/* Type Usage */,
	&t2687_TI/* Class Usage */,
	&t2687_TI/* Static Usage */,
	&t2688_TI/* Class Usage */,
	&m13708_MI/* Method Usage */,
	&t36_TI/* Class Usage */,
	&m32001_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2687_0_0_0;
extern Il2CppType t2687_1_0_0;
struct t2687;
extern Il2CppGenericClass t2687_GC;
TypeInfo t2687_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2687_MIs, t2687_PIs, t2687_FIs, NULL, &t5_TI, NULL, NULL, &t2687_TI, t2687_ITIs, t2687_VT, &EmptyCustomAttributesCache, &t2687_TI, &t2687_0_0_0, &t2687_1_0_0, t2687_IOs, &t2687_GC, NULL, NULL, NULL, t2687_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2687), 0, -1, sizeof(t2687_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IComparer`1<JewelMine.Engine.Models.Coordinates>
extern Il2CppType t36_0_0_0;
extern Il2CppType t36_0_0_0;
static ParameterInfo t4729_m24396_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m24396_GM;
MethodInfo m24396_MI = 
{
	"Compare", NULL, &t4729_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t4729_m24396_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m24396_GM};
static MethodInfo* t4729_MIs[] =
{
	&m24396_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4729_0_0_0;
extern Il2CppType t4729_1_0_0;
struct t4729;
extern Il2CppGenericClass t4729_GC;
TypeInfo t4729_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t4729_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4729_TI, NULL, NULL, &EmptyCustomAttributesCache, &t4729_TI, &t4729_0_0_0, &t4729_1_0_0, NULL, &t4729_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.IComparable`1<JewelMine.Engine.Models.Coordinates>
extern Il2CppType t36_0_0_0;
static ParameterInfo t4730_m24397_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m24397_GM;
MethodInfo m24397_MI = 
{
	"CompareTo", NULL, &t4730_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t4730_m24397_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m24397_GM};
static MethodInfo* t4730_MIs[] =
{
	&m24397_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4730_1_0_0;
struct t4730;
extern Il2CppGenericClass t4730_GC;
TypeInfo t4730_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t4730_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4730_TI, NULL, NULL, &EmptyCustomAttributesCache, &t4730_TI, &t4730_0_0_0, &t4730_1_0_0, NULL, &t4730_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
