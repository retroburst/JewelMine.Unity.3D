#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t3832.h"
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
extern TypeInfo t3832_TI;
#include "t3832MD.h"

#include "t11.h"
#include "t109.h"
#include "t108.h"
#include "mscorlib_ArrayTypes.h"
#include "t5.h"
extern TypeInfo t585_TI;
extern TypeInfo t11_TI;
extern TypeInfo t5_TI;
extern TypeInfo t108_TI;
#include "t5MD.h"
#include "t11MD.h"
extern MethodInfo m21873_MI;
extern MethodInfo m21875_MI;
extern MethodInfo m21872_MI;
extern MethodInfo m467_MI;
extern MethodInfo m21874_MI;
extern MethodInfo m4802_MI;

#include "t107.h"

extern MethodInfo m21871_MI;
 void m21871 (t3832 * __this, t11* p0, bool p1, MethodInfo* method){
	{
		m21873(__this, p0, &m21873_MI);
		m21875(__this, p1, &m21875_MI);
		return;
	}
}
 t11* m21872 (t3832 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f0);
		return L_0;
	}
}
 void m21873 (t3832 * __this, t11* p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
 bool m21874 (t3832 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f1);
		return L_0;
	}
}
 void m21875 (t3832 * __this, bool p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m21876_MI;
 t11* m21876 (t3832 * __this, MethodInfo* method){
	t11* V_0 = {0};
	bool V_1 = false;
	int32_t G_B2_0 = 0;
	t585* G_B2_1 = {0};
	t585* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	t585* G_B1_1 = {0};
	t585* G_B1_2 = {0};
	t11* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	t585* G_B3_2 = {0};
	t585* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	t585* G_B5_1 = {0};
	t585* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t585* G_B4_1 = {0};
	t585* G_B4_2 = {0};
	t11* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	t585* G_B6_2 = {0};
	t585* G_B6_3 = {0};
	{
		t585* L_0 = ((t585*)SZArrayNew(InitializedTypeInfo(&t585_TI), 5));
		ArrayElementTypeCheck (L_0, (t11*) &_stringLiteral208);
		*((t11**)(t11**)SZArrayLdElema(L_0, 0)) = (t11*)(t11*) &_stringLiteral208;
		t585* L_1 = L_0;
		t11* L_2 = m21872(__this, &m21872_MI);
		t11* L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((t11*)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		t11* L_4 = m21872(__this, &m21872_MI);
		V_0 = L_4;
		t11* L_5 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m467_MI, (*(&V_0)));
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		G_B3_0 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((t11**)(t11**)SZArrayLdElema(G_B3_2, G_B3_1)) = (t11*)G_B3_0;
		t585* L_6 = G_B3_3;
		ArrayElementTypeCheck (L_6, (t11*) &_stringLiteral217);
		*((t11**)(t11**)SZArrayLdElema(L_6, 2)) = (t11*)(t11*) &_stringLiteral217;
		t585* L_7 = L_6;
		bool L_8 = m21874(__this, &m21874_MI);
		bool L_9 = L_8;
		t5 * L_10 = Box(InitializedTypeInfo(&t108_TI), &L_9);
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
		bool L_11 = m21874(__this, &m21874_MI);
		V_1 = L_11;
		t11* L_12 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m467_MI, Box(InitializedTypeInfo(&t108_TI), &(*(&V_1))));
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		G_B6_0 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((t11**)(t11**)SZArrayLdElema(G_B6_2, G_B6_1)) = (t11*)G_B6_0;
		t585* L_13 = G_B6_3;
		ArrayElementTypeCheck (L_13, (t11*) &_stringLiteral209);
		*((t11**)(t11**)SZArrayLdElema(L_13, 4)) = (t11*)(t11*) &_stringLiteral209;
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_14 = m4802(NULL, L_13, &m4802_MI);
		return L_14;
	}
}
// Metadata Definition System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
extern Il2CppType t11_0_0_1;
FieldInfo t3832_f0_FieldInfo = 
{
	"key", &t11_0_0_1, &t3832_TI, offsetof(t3832, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t3832_f1_FieldInfo = 
{
	"value", &t108_0_0_1, &t3832_TI, offsetof(t3832, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3832_FIs[] =
{
	&t3832_f0_FieldInfo,
	&t3832_f1_FieldInfo,
	NULL
};
static PropertyInfo t3832____Key_PropertyInfo = 
{
	&t3832_TI, "Key", &m21872_MI, &m21873_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3832____Value_PropertyInfo = 
{
	&t3832_TI, "Value", &m21874_MI, &m21875_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3832_PIs[] =
{
	&t3832____Key_PropertyInfo,
	&t3832____Value_PropertyInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t3832_m21871_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21871_GM;
MethodInfo m21871_MI = 
{
	".ctor", (methodPointerType)&m21871, &t3832_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t111, t3832_m21871_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21871_GM};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21872_GM;
MethodInfo m21872_MI = 
{
	"get_Key", (methodPointerType)&m21872, &t3832_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21872_GM};
extern Il2CppType t11_0_0_0;
static ParameterInfo t3832_m21873_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21873_GM;
MethodInfo m21873_MI = 
{
	"set_Key", (methodPointerType)&m21873, &t3832_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3832_m21873_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21873_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21874_GM;
MethodInfo m21874_MI = 
{
	"get_Value", (methodPointerType)&m21874, &t3832_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21874_GM};
extern Il2CppType t108_0_0_0;
static ParameterInfo t3832_m21875_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21875_GM;
MethodInfo m21875_MI = 
{
	"set_Value", (methodPointerType)&m21875, &t3832_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t3832_m21875_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21875_GM};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21876_GM;
MethodInfo m21876_MI = 
{
	"ToString", (methodPointerType)&m21876, &t3832_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21876_GM};
static MethodInfo* t3832_MIs[] =
{
	&m21871_MI,
	&m21872_MI,
	&m21873_MI,
	&m21874_MI,
	&m21875_MI,
	&m21876_MI,
	NULL
};
extern MethodInfo m2041_MI;
extern MethodInfo m465_MI;
extern MethodInfo m2042_MI;
static MethodInfo* t3832_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m21876_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3832_0_0_0;
extern Il2CppType t3832_1_0_0;
extern TypeInfo t267_TI;
extern Il2CppGenericClass t3832_GC;
extern CustomAttributesCache t1522__CustomAttributeCache;
TypeInfo t3832_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeyValuePair`2", "System.Collections.Generic", t3832_MIs, t3832_PIs, t3832_FIs, NULL, &t267_TI, NULL, NULL, &t3832_TI, NULL, t3832_VT, &t1522__CustomAttributeCache, &t3832_TI, &t3832_0_0_0, &t3832_1_0_0, NULL, &t3832_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3832)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 4, 0, 0};
#include "t3835.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3835_TI;
#include "t3835MD.h"

#include "t110.h"
#include "t133.h"
extern TypeInfo t133_TI;
#include "t133MD.h"
#include "t107MD.h"
extern MethodInfo m21881_MI;
extern MethodInfo m4758_MI;
extern MethodInfo m4763_MI;
extern MethodInfo m28064_MI;
struct t107;
#include "t1181.h"
 t3832  m28064 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21877_MI;
 void m21877 (t3835 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21878_MI;
 t5 * m21878 (t3835 * __this, MethodInfo* method){
	{
		t3832  L_0 = m21881(__this, &m21881_MI);
		t3832  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t3832_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m21879_MI;
 void m21879 (t3835 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21880_MI;
 bool m21880 (t3835 * __this, MethodInfo* method){
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
 t3832  m21881 (t3835 * __this, MethodInfo* method){
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
		t3832  L_8 = m28064(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28064_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
extern Il2CppType t107_0_0_1;
FieldInfo t3835_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3835_TI, offsetof(t3835, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3835_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3835_TI, offsetof(t3835, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3835_FIs[] =
{
	&t3835_f0_FieldInfo,
	&t3835_f1_FieldInfo,
	NULL
};
static PropertyInfo t3835____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3835_TI, "System.Collections.IEnumerator.Current", &m21878_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3835____Current_PropertyInfo = 
{
	&t3835_TI, "Current", &m21881_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3835_PIs[] =
{
	&t3835____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3835____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
extern Il2CppType t107_0_0_0;
static ParameterInfo t3835_m21877_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21877_GM;
MethodInfo m21877_MI = 
{
	".ctor", (methodPointerType)&m21877, &t3835_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3835_m21877_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21877_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21878_GM;
MethodInfo m21878_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21878, &t3835_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21878_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21879_GM;
MethodInfo m21879_MI = 
{
	"Dispose", (methodPointerType)&m21879, &t3835_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21879_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21880_GM;
MethodInfo m21880_MI = 
{
	"MoveNext", (methodPointerType)&m21880, &t3835_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21880_GM};
extern Il2CppType t3832_0_0_0;
extern void* RuntimeInvoker_t3832 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21881_GM;
MethodInfo m21881_MI = 
{
	"get_Current", (methodPointerType)&m21881, &t3835_TI, &t3832_0_0_0, RuntimeInvoker_t3832, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21881_GM};
static MethodInfo* t3835_MIs[] =
{
	&m21877_MI,
	&m21878_MI,
	&m21879_MI,
	&m21880_MI,
	&m21881_MI,
	NULL
};
extern MethodInfo m2147_MI;
static MethodInfo* t3835_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21878_MI,
	&m21880_MI,
	&m21879_MI,
	&m21881_MI,
};
extern TypeInfo t196_TI;
extern TypeInfo t132_TI;
extern TypeInfo t3833_TI;
static TypeInfo* t3835_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t3833_TI,
};
static Il2CppInterfaceOffsetPair t3835_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t3833_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3835_0_0_0;
extern Il2CppType t3835_1_0_0;
extern Il2CppGenericClass t3835_GC;
extern TypeInfo t107_TI;
TypeInfo t3835_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3835_MIs, t3835_PIs, t3835_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3835_TI, t3835_ITIs, t3835_VT, &EmptyCustomAttributesCache, &t3835_TI, &t3835_0_0_0, &t3835_1_0_0, t3835_IOs, &t3835_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3835)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6709_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
extern MethodInfo m36025_MI;
extern MethodInfo m36026_MI;
static PropertyInfo t6709____Item_PropertyInfo = 
{
	&t6709_TI, "Item", &m36025_MI, &m36026_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6709_PIs[] =
{
	&t6709____Item_PropertyInfo,
	NULL
};
extern Il2CppType t3832_0_0_0;
static ParameterInfo t6709_m36027_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t3832_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t3832 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36027_GM;
MethodInfo m36027_MI = 
{
	"IndexOf", NULL, &t6709_TI, &t110_0_0_0, RuntimeInvoker_t110_t3832, t6709_m36027_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36027_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t3832_0_0_0;
static ParameterInfo t6709_m36028_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t3832_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t3832 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36028_GM;
MethodInfo m36028_MI = 
{
	"Insert", NULL, &t6709_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t3832, t6709_m36028_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36028_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6709_m36029_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36029_GM;
MethodInfo m36029_MI = 
{
	"RemoveAt", NULL, &t6709_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6709_m36029_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36029_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6709_m36025_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t3832_0_0_0;
extern void* RuntimeInvoker_t3832_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36025_GM;
MethodInfo m36025_MI = 
{
	"get_Item", NULL, &t6709_TI, &t3832_0_0_0, RuntimeInvoker_t3832_t110, t6709_m36025_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36025_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t3832_0_0_0;
static ParameterInfo t6709_m36026_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t3832_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t3832 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36026_GM;
MethodInfo m36026_MI = 
{
	"set_Item", NULL, &t6709_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t3832, t6709_m36026_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36026_GM};
static MethodInfo* t6709_MIs[] =
{
	&m36027_MI,
	&m36028_MI,
	&m36029_MI,
	&m36025_MI,
	&m36026_MI,
	NULL
};
extern TypeInfo t739_TI;
extern TypeInfo t6708_TI;
extern TypeInfo t6710_TI;
static TypeInfo* t6709_ITIs[] = 
{
	&t739_TI,
	&t6708_TI,
	&t6710_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6709_0_0_0;
extern Il2CppType t6709_1_0_0;
struct t6709;
extern Il2CppGenericClass t6709_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6709_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6709_MIs, t6709_PIs, NULL, NULL, NULL, NULL, NULL, &t6709_TI, t6709_ITIs, NULL, &t2240__CustomAttributeCache, &t6709_TI, &t6709_0_0_0, &t6709_1_0_0, NULL, &t6709_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7718_TI;



// Metadata Definition System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
extern Il2CppType t11_0_0_0;
static ParameterInfo t7718_m36030_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36030_GM;
MethodInfo m36030_MI = 
{
	"Remove", NULL, &t7718_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7718_m36030_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36030_GM};
static MethodInfo* t7718_MIs[] =
{
	&m36030_MI,
	NULL
};
static TypeInfo* t7718_ITIs[] = 
{
	&t739_TI,
	&t6708_TI,
	&t6710_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7718_0_0_0;
extern Il2CppType t7718_1_0_0;
struct t7718;
extern Il2CppGenericClass t7718_GC;
extern CustomAttributesCache t2307__CustomAttributeCache;
TypeInfo t7718_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionary`2", "System.Collections.Generic", t7718_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7718_TI, t7718_ITIs, NULL, &t2307__CustomAttributeCache, &t7718_TI, &t7718_0_0_0, &t7718_1_0_0, NULL, &t7718_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 3, 0};
#include "t3830.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3830_TI;
#include "t3830MD.h"

#include "t1033.h"
#include "t484.h"
#include "t491.h"
#include "t3837.h"
#include "t3838.h"
#include "t124.h"
extern TypeInfo t811_TI;
extern TypeInfo t1033_TI;
extern TypeInfo t110_TI;
extern TypeInfo t484_TI;
extern TypeInfo t491_TI;
extern TypeInfo t3837_TI;
extern TypeInfo t1034_TI;
extern TypeInfo t109_TI;
extern TypeInfo t3838_TI;
#include "t1033MD.h"
#include "t484MD.h"
#include "t491MD.h"
#include "t3838MD.h"
#include "t3837MD.h"
extern MethodInfo m11151_MI;
extern MethodInfo m21848_MI;
extern MethodInfo m460_MI;
extern MethodInfo m3595_MI;
extern MethodInfo m4780_MI;
extern MethodInfo m21860_MI;
extern MethodInfo m21894_MI;
extern MethodInfo m21893_MI;
extern MethodInfo m21853_MI;
extern MethodInfo m21855_MI;
extern MethodInfo m21913_MI;
extern MethodInfo m28075_MI;
extern MethodInfo m28076_MI;
extern MethodInfo m21896_MI;
struct t1033;
#include "t114.h"
#include "t142.h"
#include "t115.h"
#include "t160.h"
 void m28075 (t1033 * __this, t107 * p0, int32_t p1, t3838 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t1033;
#include "t1511.h"
 void m28076 (t1033 * __this, t1034* p0, int32_t p1, t3838 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21882_MI;
 void m21882 (t3830 * __this, t1033 * p0, MethodInfo* method){
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
extern MethodInfo m21883_MI;
 void m21883 (t3830 * __this, bool p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral1216, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m21884_MI;
 void m21884 (t3830 * __this, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral1216, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m21885_MI;
 bool m21885 (t3830 * __this, bool p0, MethodInfo* method){
	{
		t1033 * L_0 = (__this->f0);
		bool L_1 = m21860(L_0, p0, &m21860_MI);
		return L_1;
	}
}
extern MethodInfo m21886_MI;
 bool m21886 (t3830 * __this, bool p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral1216, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m21887_MI;
 t5* m21887 (t3830 * __this, MethodInfo* method){
	{
		t3837  L_0 = m21894(__this, &m21894_MI);
		t3837  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t3837_TI), &L_1);
		return (t5*)L_2;
	}
}
extern MethodInfo m21888_MI;
 void m21888 (t3830 * __this, t107 * p0, int32_t p1, MethodInfo* method){
	t1034* V_0 = {0};
	{
		V_0 = ((t1034*)IsInst(p0, InitializedTypeInfo(&t1034_TI)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker2< t1034*, int32_t >::Invoke(&m21893_MI, __this, V_0, p1);
		return;
	}

IL_0013:
	{
		t1033 * L_0 = (__this->f0);
		m21853(L_0, p0, p1, &m21853_MI);
		t1033 * L_1 = (__this->f0);
		t124 L_2 = { &m21855_MI };
		t3838 * L_3 = (t3838 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t3838_TI));
		m21913(L_3, NULL, L_2, &m21913_MI);
		m28075(L_1, p0, p1, L_3, &m28075_MI);
		return;
	}
}
extern MethodInfo m21889_MI;
 t5 * m21889 (t3830 * __this, MethodInfo* method){
	{
		t3837  L_0 = m21894(__this, &m21894_MI);
		t3837  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t3837_TI), &L_1);
		return (t5 *)L_2;
	}
}
extern MethodInfo m21890_MI;
 bool m21890 (t3830 * __this, MethodInfo* method){
	{
		return 1;
	}
}
extern MethodInfo m21891_MI;
 bool m21891 (t3830 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m21892_MI;
 t5 * m21892 (t3830 * __this, MethodInfo* method){
	{
		t1033 * L_0 = (__this->f0);
		t5 * L_1 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m11151_MI, L_0);
		return L_1;
	}
}
 void m21893 (t3830 * __this, t1034* p0, int32_t p1, MethodInfo* method){
	{
		t1033 * L_0 = (__this->f0);
		m21853(L_0, (t107 *)(t107 *)p0, p1, &m21853_MI);
		t1033 * L_1 = (__this->f0);
		t124 L_2 = { &m21855_MI };
		t3838 * L_3 = (t3838 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t3838_TI));
		m21913(L_3, NULL, L_2, &m21913_MI);
		m28076(L_1, p0, p1, L_3, &m28076_MI);
		return;
	}
}
 t3837  m21894 (t3830 * __this, MethodInfo* method){
	{
		t1033 * L_0 = (__this->f0);
		t3837  L_1 = {0};
		m21896(&L_1, L_0, &m21896_MI);
		return L_1;
	}
}
extern MethodInfo m21895_MI;
 int32_t m21895 (t3830 * __this, MethodInfo* method){
	{
		t1033 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m21848_MI, L_0);
		return L_1;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
extern Il2CppType t1033_0_0_1;
FieldInfo t3830_f0_FieldInfo = 
{
	"dictionary", &t1033_0_0_1, &t3830_TI, offsetof(t3830, f0), &EmptyCustomAttributesCache};
static FieldInfo* t3830_FIs[] =
{
	&t3830_f0_FieldInfo,
	NULL
};
static PropertyInfo t3830____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo = 
{
	&t3830_TI, "System.Collections.Generic.ICollection<TValue>.IsReadOnly", &m21890_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3830____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t3830_TI, "System.Collections.ICollection.IsSynchronized", &m21891_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3830____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t3830_TI, "System.Collections.ICollection.SyncRoot", &m21892_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3830____Count_PropertyInfo = 
{
	&t3830_TI, "Count", &m21895_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3830_PIs[] =
{
	&t3830____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo,
	&t3830____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t3830____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t3830____Count_PropertyInfo,
	NULL
};
extern Il2CppType t1033_0_0_0;
extern Il2CppType t1033_0_0_0;
static ParameterInfo t3830_m21882_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t1033_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21882_GM;
MethodInfo m21882_MI = 
{
	".ctor", (methodPointerType)&m21882, &t3830_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3830_m21882_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21882_GM};
extern Il2CppType t108_0_0_0;
static ParameterInfo t3830_m21883_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21883_GM;
MethodInfo m21883_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Add", (methodPointerType)&m21883, &t3830_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t3830_m21883_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21883_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21884_GM;
MethodInfo m21884_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Clear", (methodPointerType)&m21884, &t3830_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 481, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21884_GM};
extern Il2CppType t108_0_0_0;
static ParameterInfo t3830_m21885_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21885_GM;
MethodInfo m21885_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Contains", (methodPointerType)&m21885, &t3830_TI, &t108_0_0_0, RuntimeInvoker_t108_t111, t3830_m21885_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21885_GM};
extern Il2CppType t108_0_0_0;
static ParameterInfo t3830_m21886_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21886_GM;
MethodInfo m21886_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Remove", (methodPointerType)&m21886, &t3830_TI, &t108_0_0_0, RuntimeInvoker_t108_t111, t3830_m21886_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21886_GM};
extern Il2CppType t3836_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21887_GM;
MethodInfo m21887_MI = 
{
	"System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", (methodPointerType)&m21887, &t3830_TI, &t3836_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21887_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t3830_m21888_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21888_GM;
MethodInfo m21888_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m21888, &t3830_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t3830_m21888_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21888_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21889_GM;
MethodInfo m21889_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m21889, &t3830_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21889_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21890_GM;
MethodInfo m21890_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.get_IsReadOnly", (methodPointerType)&m21890, &t3830_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21890_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21891_GM;
MethodInfo m21891_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m21891, &t3830_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21891_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21892_GM;
MethodInfo m21892_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m21892, &t3830_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21892_GM};
extern Il2CppType t1034_0_0_0;
extern Il2CppType t1034_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t3830_m21893_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1034_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21893_GM;
MethodInfo m21893_MI = 
{
	"CopyTo", (methodPointerType)&m21893, &t3830_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t3830_m21893_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21893_GM};
extern Il2CppType t3837_0_0_0;
extern void* RuntimeInvoker_t3837 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21894_GM;
MethodInfo m21894_MI = 
{
	"GetEnumerator", (methodPointerType)&m21894, &t3830_TI, &t3837_0_0_0, RuntimeInvoker_t3837, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21894_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21895_GM;
MethodInfo m21895_MI = 
{
	"get_Count", (methodPointerType)&m21895, &t3830_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21895_GM};
static MethodInfo* t3830_MIs[] =
{
	&m21882_MI,
	&m21883_MI,
	&m21884_MI,
	&m21885_MI,
	&m21886_MI,
	&m21887_MI,
	&m21888_MI,
	&m21889_MI,
	&m21890_MI,
	&m21891_MI,
	&m21892_MI,
	&m21893_MI,
	&m21894_MI,
	&m21895_MI,
	NULL
};
extern MethodInfo m464_MI;
extern MethodInfo m466_MI;
static MethodInfo* t3830_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21889_MI,
	&m21895_MI,
	&m21891_MI,
	&m21892_MI,
	&m21888_MI,
	&m21895_MI,
	&m21890_MI,
	&m21883_MI,
	&m21884_MI,
	&m21885_MI,
	&m21893_MI,
	&m21886_MI,
	&m21887_MI,
};
extern TypeInfo t6630_TI;
extern TypeInfo t6632_TI;
static TypeInfo* t3830_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t6630_TI,
	&t6632_TI,
};
static Il2CppInterfaceOffsetPair t3830_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t6630_TI, 9},
	{ &t6632_TI, 16},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3830_0_0_0;
extern Il2CppType t3830_1_0_0;
struct t3830;
extern Il2CppGenericClass t3830_GC;
extern TypeInfo t1517_TI;
extern CustomAttributesCache t1515__CustomAttributeCache;
TypeInfo t3830_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ValueCollection", "", t3830_MIs, t3830_PIs, t3830_FIs, NULL, &t5_TI, NULL, &t1517_TI, &t3830_TI, t3830_ITIs, t3830_VT, &t1515__CustomAttributeCache, &t3830_TI, &t3830_0_0_0, &t3830_1_0_0, t3830_IOs, &t3830_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3830), 0, -1, 0, 0, -1, 1057026, 0, false, false, false, false, true, false, false, false, false, false, false, false, 14, 4, 1, 0, 0, 17, 4, 4};
#ifndef _MSC_VER
#else
#endif

#include "t3834.h"
extern TypeInfo t3834_TI;
#include "t3834MD.h"
extern MethodInfo m21909_MI;
extern MethodInfo m21869_MI;
extern MethodInfo m21912_MI;
extern MethodInfo m21906_MI;


 void m21896 (t3837 * __this, t1033 * p0, MethodInfo* method){
	{
		t3834  L_0 = m21869(p0, &m21869_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m21897_MI;
 t5 * m21897 (t3837 * __this, MethodInfo* method){
	{
		t3834 * L_0 = &(__this->f0);
		bool L_1 = m21909(L_0, &m21909_MI);
		bool L_2 = L_1;
		t5 * L_3 = Box(InitializedTypeInfo(&t108_TI), &L_2);
		return L_3;
	}
}
extern MethodInfo m21898_MI;
 void m21898 (t3837 * __this, MethodInfo* method){
	{
		t3834 * L_0 = &(__this->f0);
		m21912(L_0, &m21912_MI);
		return;
	}
}
extern MethodInfo m21899_MI;
 bool m21899 (t3837 * __this, MethodInfo* method){
	{
		t3834 * L_0 = &(__this->f0);
		bool L_1 = m21906(L_0, &m21906_MI);
		return L_1;
	}
}
extern MethodInfo m21900_MI;
 bool m21900 (t3837 * __this, MethodInfo* method){
	{
		t3834 * L_0 = &(__this->f0);
		t3832 * L_1 = &(L_0->f3);
		bool L_2 = m21874(L_1, &m21874_MI);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Boolean>
extern Il2CppType t3834_0_0_1;
FieldInfo t3837_f0_FieldInfo = 
{
	"host_enumerator", &t3834_0_0_1, &t3837_TI, offsetof(t3837, f0) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3837_FIs[] =
{
	&t3837_f0_FieldInfo,
	NULL
};
static PropertyInfo t3837____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3837_TI, "System.Collections.IEnumerator.Current", &m21897_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3837____Current_PropertyInfo = 
{
	&t3837_TI, "Current", &m21900_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3837_PIs[] =
{
	&t3837____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3837____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1033_0_0_0;
static ParameterInfo t3837_m21896_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t1033_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21896_GM;
MethodInfo m21896_MI = 
{
	".ctor", (methodPointerType)&m21896, &t3837_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3837_m21896_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21896_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21897_GM;
MethodInfo m21897_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21897, &t3837_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21897_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21898_GM;
MethodInfo m21898_MI = 
{
	"Dispose", (methodPointerType)&m21898, &t3837_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21898_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21899_GM;
MethodInfo m21899_MI = 
{
	"MoveNext", (methodPointerType)&m21899, &t3837_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21899_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21900_GM;
MethodInfo m21900_MI = 
{
	"get_Current", (methodPointerType)&m21900, &t3837_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21900_GM};
static MethodInfo* t3837_MIs[] =
{
	&m21896_MI,
	&m21897_MI,
	&m21898_MI,
	&m21899_MI,
	&m21900_MI,
	NULL
};
static MethodInfo* t3837_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21897_MI,
	&m21899_MI,
	&m21898_MI,
	&m21900_MI,
};
extern TypeInfo t3836_TI;
static TypeInfo* t3837_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t3836_TI,
};
static Il2CppInterfaceOffsetPair t3837_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t3836_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3837_0_0_0;
extern Il2CppType t3837_1_0_0;
extern Il2CppGenericClass t3837_GC;
extern TypeInfo t1515_TI;
TypeInfo t3837_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t3837_MIs, t3837_PIs, t3837_FIs, NULL, &t267_TI, NULL, &t1515_TI, &t3837_TI, t3837_ITIs, t3837_VT, &EmptyCustomAttributesCache, &t3837_TI, &t3837_0_0_0, &t3837_1_0_0, t3837_IOs, &t3837_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3837)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif

#include "t990.h"
#include "t1363.h"
extern TypeInfo t990_TI;
extern TypeInfo t1511_TI;
extern TypeInfo t1363_TI;
#include "t990MD.h"
#include "t1363MD.h"
extern MethodInfo m21911_MI;
extern MethodInfo m4759_MI;
extern MethodInfo m21908_MI;
extern MethodInfo m21910_MI;
extern MethodInfo m5942_MI;


extern MethodInfo m21901_MI;
 void m21901 (t3834 * __this, t1033 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		int32_t L_0 = (p0->f14);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m21902_MI;
 t5 * m21902 (t3834 * __this, MethodInfo* method){
	{
		m21911(__this, &m21911_MI);
		t3832  L_0 = (__this->f3);
		t3832  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t3832_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m21903_MI;
 t990  m21903 (t3834 * __this, MethodInfo* method){
	{
		m21911(__this, &m21911_MI);
		t3832 * L_0 = &(__this->f3);
		t11* L_1 = m21872(L_0, &m21872_MI);
		t11* L_2 = L_1;
		t3832 * L_3 = &(__this->f3);
		bool L_4 = m21874(L_3, &m21874_MI);
		bool L_5 = L_4;
		t5 * L_6 = Box(InitializedTypeInfo(&t108_TI), &L_5);
		t990  L_7 = {0};
		m4759(&L_7, ((t11*)L_2), L_6, &m4759_MI);
		return L_7;
	}
}
extern MethodInfo m21904_MI;
 t5 * m21904 (t3834 * __this, MethodInfo* method){
	{
		t11* L_0 = m21908(__this, &m21908_MI);
		t11* L_1 = L_0;
		return ((t11*)L_1);
	}
}
extern MethodInfo m21905_MI;
 t5 * m21905 (t3834 * __this, MethodInfo* method){
	{
		bool L_0 = m21909(__this, &m21909_MI);
		bool L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t108_TI), &L_1);
		return L_2;
	}
}
 bool m21906 (t3834 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		m21910(__this, &m21910_MI);
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
		t1033 * L_3 = (__this->f0);
		t2297* L_4 = (L_3->f5);
		int32_t L_5 = (((t1511 *)(t1511 *)SZArrayLdElema(L_4, V_0))->f0);
		if (!((int32_t)((int32_t)L_5&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		t1033 * L_6 = (__this->f0);
		t585* L_7 = (L_6->f6);
		int32_t L_8 = V_0;
		t1033 * L_9 = (__this->f0);
		t1034* L_10 = (L_9->f7);
		int32_t L_11 = V_0;
		t3832  L_12 = {0};
		m21871(&L_12, (*(t11**)(t11**)SZArrayLdElema(L_7, L_8)), (*(bool*)(bool*)SZArrayLdElema(L_10, L_11)), &m21871_MI);
		__this->f3 = L_12;
		return 1;
	}

IL_0072:
	{
		int32_t L_13 = (__this->f1);
		t1033 * L_14 = (__this->f0);
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
extern MethodInfo m21907_MI;
 t3832  m21907 (t3834 * __this, MethodInfo* method){
	{
		t3832  L_0 = (__this->f3);
		return L_0;
	}
}
 t11* m21908 (t3834 * __this, MethodInfo* method){
	{
		m21911(__this, &m21911_MI);
		t3832 * L_0 = &(__this->f3);
		t11* L_1 = m21872(L_0, &m21872_MI);
		return L_1;
	}
}
 bool m21909 (t3834 * __this, MethodInfo* method){
	{
		m21911(__this, &m21911_MI);
		t3832 * L_0 = &(__this->f3);
		bool L_1 = m21874(L_0, &m21874_MI);
		return L_1;
	}
}
 void m21910 (t3834 * __this, MethodInfo* method){
	{
		t1033 * L_0 = (__this->f0);
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
		t1033 * L_2 = (__this->f0);
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
 void m21911 (t3834 * __this, MethodInfo* method){
	{
		m21910(__this, &m21910_MI);
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
 void m21912 (t3834 * __this, MethodInfo* method){
	{
		__this->f0 = (t1033 *)NULL;
		return;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>
extern Il2CppType t1033_0_0_1;
FieldInfo t3834_f0_FieldInfo = 
{
	"dictionary", &t1033_0_0_1, &t3834_TI, offsetof(t3834, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3834_f1_FieldInfo = 
{
	"next", &t110_0_0_1, &t3834_TI, offsetof(t3834, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3834_f2_FieldInfo = 
{
	"stamp", &t110_0_0_1, &t3834_TI, offsetof(t3834, f2) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t3832_0_0_3;
FieldInfo t3834_f3_FieldInfo = 
{
	"current", &t3832_0_0_3, &t3834_TI, offsetof(t3834, f3) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3834_FIs[] =
{
	&t3834_f0_FieldInfo,
	&t3834_f1_FieldInfo,
	&t3834_f2_FieldInfo,
	&t3834_f3_FieldInfo,
	NULL
};
static PropertyInfo t3834____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3834_TI, "System.Collections.IEnumerator.Current", &m21902_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3834____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo = 
{
	&t3834_TI, "System.Collections.IDictionaryEnumerator.Entry", &m21903_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3834____System_Collections_IDictionaryEnumerator_Key_PropertyInfo = 
{
	&t3834_TI, "System.Collections.IDictionaryEnumerator.Key", &m21904_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3834____System_Collections_IDictionaryEnumerator_Value_PropertyInfo = 
{
	&t3834_TI, "System.Collections.IDictionaryEnumerator.Value", &m21905_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3834____Current_PropertyInfo = 
{
	&t3834_TI, "Current", &m21907_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3834____CurrentKey_PropertyInfo = 
{
	&t3834_TI, "CurrentKey", &m21908_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3834____CurrentValue_PropertyInfo = 
{
	&t3834_TI, "CurrentValue", &m21909_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3834_PIs[] =
{
	&t3834____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3834____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo,
	&t3834____System_Collections_IDictionaryEnumerator_Key_PropertyInfo,
	&t3834____System_Collections_IDictionaryEnumerator_Value_PropertyInfo,
	&t3834____Current_PropertyInfo,
	&t3834____CurrentKey_PropertyInfo,
	&t3834____CurrentValue_PropertyInfo,
	NULL
};
extern Il2CppType t1033_0_0_0;
static ParameterInfo t3834_m21901_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t1033_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21901_GM;
MethodInfo m21901_MI = 
{
	".ctor", (methodPointerType)&m21901, &t3834_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3834_m21901_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21901_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21902_GM;
MethodInfo m21902_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21902, &t3834_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21902_GM};
extern Il2CppType t990_0_0_0;
extern void* RuntimeInvoker_t990 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21903_GM;
MethodInfo m21903_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Entry", (methodPointerType)&m21903, &t3834_TI, &t990_0_0_0, RuntimeInvoker_t990, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21903_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21904_GM;
MethodInfo m21904_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Key", (methodPointerType)&m21904, &t3834_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21904_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21905_GM;
MethodInfo m21905_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Value", (methodPointerType)&m21905, &t3834_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21905_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21906_GM;
MethodInfo m21906_MI = 
{
	"MoveNext", (methodPointerType)&m21906, &t3834_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21906_GM};
extern Il2CppType t3832_0_0_0;
extern void* RuntimeInvoker_t3832 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21907_GM;
MethodInfo m21907_MI = 
{
	"get_Current", (methodPointerType)&m21907, &t3834_TI, &t3832_0_0_0, RuntimeInvoker_t3832, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21907_GM};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21908_GM;
MethodInfo m21908_MI = 
{
	"get_CurrentKey", (methodPointerType)&m21908, &t3834_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21908_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21909_GM;
MethodInfo m21909_MI = 
{
	"get_CurrentValue", (methodPointerType)&m21909, &t3834_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21909_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21910_GM;
MethodInfo m21910_MI = 
{
	"VerifyState", (methodPointerType)&m21910, &t3834_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21910_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21911_GM;
MethodInfo m21911_MI = 
{
	"VerifyCurrent", (methodPointerType)&m21911, &t3834_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21911_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21912_GM;
MethodInfo m21912_MI = 
{
	"Dispose", (methodPointerType)&m21912, &t3834_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21912_GM};
static MethodInfo* t3834_MIs[] =
{
	&m21901_MI,
	&m21902_MI,
	&m21903_MI,
	&m21904_MI,
	&m21905_MI,
	&m21906_MI,
	&m21907_MI,
	&m21908_MI,
	&m21909_MI,
	&m21910_MI,
	&m21911_MI,
	&m21912_MI,
	NULL
};
static MethodInfo* t3834_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21902_MI,
	&m21906_MI,
	&m21912_MI,
	&m21907_MI,
	&m21903_MI,
	&m21904_MI,
	&m21905_MI,
};
extern TypeInfo t987_TI;
static TypeInfo* t3834_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t3833_TI,
	&t987_TI,
};
static Il2CppInterfaceOffsetPair t3834_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t3833_TI, 7},
	{ &t987_TI, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3834_0_0_0;
extern Il2CppType t3834_1_0_0;
extern Il2CppGenericClass t3834_GC;
TypeInfo t3834_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t3834_MIs, t3834_PIs, t3834_FIs, NULL, &t267_TI, NULL, &t1517_TI, &t3834_TI, t3834_ITIs, t3834_VT, &EmptyCustomAttributesCache, &t3834_TI, &t3834_0_0_0, &t3834_1_0_0, t3834_IOs, &t3834_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3834)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, true, false, false, false, false, false, false, false, 12, 7, 4, 0, 0, 11, 4, 4};
#ifndef _MSC_VER
#else
#endif

#include "t222.h"


 void m21913 (t3838 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m21914_MI;
 bool m21914 (t3838 * __this, t11* p0, bool p1, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m21914((t3838 *)__this->f9,p0, p1, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t5 *, t5 * __this, t11* p0, bool p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t5 * __this, t11* p0, bool p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (t5 * __this, bool p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern MethodInfo m21915_MI;
 t5 * m21915 (t3838 * __this, t11* p0, bool p1, t222 * p2, t5 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t108_TI), &p1);
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m21916_MI;
 bool m21916 (t3838 * __this, t5 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t3838_m21913_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21913_GM;
MethodInfo m21913_MI = 
{
	".ctor", (methodPointerType)&m21913, &t3838_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t3838_m21913_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21913_GM};
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t3838_m21914_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21914_GM;
MethodInfo m21914_MI = 
{
	"Invoke", (methodPointerType)&m21914, &t3838_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t111, t3838_m21914_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21914_GM};
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3838_m21915_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t111_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21915_GM;
MethodInfo m21915_MI = 
{
	"BeginInvoke", (methodPointerType)&m21915, &t3838_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t111_t5_t5, t3838_m21915_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL, &m21915_GM};
extern Il2CppType t221_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t3838_m21916_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21916_GM;
MethodInfo m21916_MI = 
{
	"EndInvoke", (methodPointerType)&m21916, &t3838_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3838_m21916_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21916_GM};
static MethodInfo* t3838_MIs[] =
{
	&m21913_MI,
	&m21914_MI,
	&m21915_MI,
	&m21916_MI,
	NULL
};
extern MethodInfo m2341_MI;
extern MethodInfo m2342_MI;
extern MethodInfo m2343_MI;
extern MethodInfo m2344_MI;
extern MethodInfo m2345_MI;
extern MethodInfo m2346_MI;
extern MethodInfo m2347_MI;
static MethodInfo* t3838_VT[] =
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
	&m21914_MI,
	&m21915_MI,
	&m21916_MI,
};
extern TypeInfo t516_TI;
extern TypeInfo t517_TI;
static Il2CppInterfaceOffsetPair t3838_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3838_0_0_0;
extern Il2CppType t3838_1_0_0;
extern TypeInfo t353_TI;
struct t3838;
extern Il2CppGenericClass t3838_GC;
TypeInfo t3838_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t3838_MIs, NULL, NULL, NULL, &t353_TI, NULL, &t1517_TI, &t3838_TI, NULL, t3838_VT, &EmptyCustomAttributesCache, &t3838_TI, &t3838_0_0_0, &t3838_1_0_0, t3838_IOs, &t3838_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3838), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t3829.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3829_TI;
#include "t3829MD.h"



extern MethodInfo m21917_MI;
 void m21917 (t3829 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m21918_MI;
 t990  m21918 (t3829 * __this, t11* p0, bool p1, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m21918((t3829 *)__this->f9,p0, p1, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t990  (*FunctionPointerType) (t5 *, t5 * __this, t11* p0, bool p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t990  (*FunctionPointerType) (t5 * __this, t11* p0, bool p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t990  (*FunctionPointerType) (t5 * __this, bool p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern MethodInfo m21919_MI;
 t5 * m21919 (t3829 * __this, t11* p0, bool p1, t222 * p2, t5 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t108_TI), &p1);
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m21920_MI;
 t990  m21920 (t3829 * __this, t5 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t990 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t3829_m21917_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21917_GM;
MethodInfo m21917_MI = 
{
	".ctor", (methodPointerType)&m21917, &t3829_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t3829_m21917_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21917_GM};
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t3829_m21918_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t990_0_0_0;
extern void* RuntimeInvoker_t990_t5_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21918_GM;
MethodInfo m21918_MI = 
{
	"Invoke", (methodPointerType)&m21918, &t3829_TI, &t990_0_0_0, RuntimeInvoker_t990_t5_t111, t3829_m21918_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21918_GM};
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3829_m21919_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t111_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21919_GM;
MethodInfo m21919_MI = 
{
	"BeginInvoke", (methodPointerType)&m21919, &t3829_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t111_t5_t5, t3829_m21919_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL, &m21919_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t3829_m21920_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t990_0_0_0;
extern void* RuntimeInvoker_t990_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21920_GM;
MethodInfo m21920_MI = 
{
	"EndInvoke", (methodPointerType)&m21920, &t3829_TI, &t990_0_0_0, RuntimeInvoker_t990_t5, t3829_m21920_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21920_GM};
static MethodInfo* t3829_MIs[] =
{
	&m21917_MI,
	&m21918_MI,
	&m21919_MI,
	&m21920_MI,
	NULL
};
static MethodInfo* t3829_VT[] =
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
	&m21918_MI,
	&m21919_MI,
	&m21920_MI,
};
static Il2CppInterfaceOffsetPair t3829_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3829_0_0_0;
extern Il2CppType t3829_1_0_0;
struct t3829;
extern Il2CppGenericClass t3829_GC;
TypeInfo t3829_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t3829_MIs, NULL, NULL, NULL, &t353_TI, NULL, &t1517_TI, &t3829_TI, NULL, t3829_VT, &EmptyCustomAttributesCache, &t3829_TI, &t3829_0_0_0, &t3829_1_0_0, t3829_IOs, &t3829_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3829), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t3839.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3839_TI;
#include "t3839MD.h"



extern MethodInfo m21921_MI;
 void m21921 (t3839 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m21922_MI;
 t3832  m21922 (t3839 * __this, t11* p0, bool p1, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m21922((t3839 *)__this->f9,p0, p1, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t3832  (*FunctionPointerType) (t5 *, t5 * __this, t11* p0, bool p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t3832  (*FunctionPointerType) (t5 * __this, t11* p0, bool p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t3832  (*FunctionPointerType) (t5 * __this, bool p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern MethodInfo m21923_MI;
 t5 * m21923 (t3839 * __this, t11* p0, bool p1, t222 * p2, t5 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t108_TI), &p1);
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m21924_MI;
 t3832  m21924 (t3839 * __this, t5 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t3832 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t3839_m21921_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21921_GM;
MethodInfo m21921_MI = 
{
	".ctor", (methodPointerType)&m21921, &t3839_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t3839_m21921_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21921_GM};
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t3839_m21922_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t3832_0_0_0;
extern void* RuntimeInvoker_t3832_t5_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21922_GM;
MethodInfo m21922_MI = 
{
	"Invoke", (methodPointerType)&m21922, &t3839_TI, &t3832_0_0_0, RuntimeInvoker_t3832_t5_t111, t3839_m21922_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21922_GM};
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3839_m21923_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t111_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21923_GM;
MethodInfo m21923_MI = 
{
	"BeginInvoke", (methodPointerType)&m21923, &t3839_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t111_t5_t5, t3839_m21923_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL, &m21923_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t3839_m21924_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t3832_0_0_0;
extern void* RuntimeInvoker_t3832_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21924_GM;
MethodInfo m21924_MI = 
{
	"EndInvoke", (methodPointerType)&m21924, &t3839_TI, &t3832_0_0_0, RuntimeInvoker_t3832_t5, t3839_m21924_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21924_GM};
static MethodInfo* t3839_MIs[] =
{
	&m21921_MI,
	&m21922_MI,
	&m21923_MI,
	&m21924_MI,
	NULL
};
static MethodInfo* t3839_VT[] =
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
	&m21922_MI,
	&m21923_MI,
	&m21924_MI,
};
static Il2CppInterfaceOffsetPair t3839_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3839_0_0_0;
extern Il2CppType t3839_1_0_0;
struct t3839;
extern Il2CppGenericClass t3839_GC;
TypeInfo t3839_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t3839_MIs, NULL, NULL, NULL, &t353_TI, NULL, &t1517_TI, &t3839_TI, NULL, t3839_VT, &EmptyCustomAttributesCache, &t3839_TI, &t3839_0_0_0, &t3839_1_0_0, t3839_IOs, &t3839_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3839), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t3840.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3840_TI;
#include "t3840MD.h"

extern MethodInfo m11460_MI;
extern MethodInfo m21927_MI;


extern MethodInfo m21925_MI;
 void m21925 (t3840 * __this, t1033 * p0, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		t3834  L_0 = m21869(p0, &m21869_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m21926_MI;
 bool m21926 (t3840 * __this, MethodInfo* method){
	{
		t3834 * L_0 = &(__this->f0);
		bool L_1 = m21906(L_0, &m21906_MI);
		return L_1;
	}
}
 t990  m21927 (t3840 * __this, MethodInfo* method){
	{
		t3834  L_0 = (__this->f0);
		t3834  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t3834_TI), &L_1);
		t990  L_3 = (t990 )InterfaceFuncInvoker0< t990  >::Invoke(&m11460_MI, L_2);
		return L_3;
	}
}
extern MethodInfo m21928_MI;
 t5 * m21928 (t3840 * __this, MethodInfo* method){
	t3832  V_0 = {0};
	{
		t3834 * L_0 = &(__this->f0);
		t3832  L_1 = m21907(L_0, &m21907_MI);
		V_0 = L_1;
		t11* L_2 = m21872((&V_0), &m21872_MI);
		t11* L_3 = L_2;
		return ((t11*)L_3);
	}
}
extern MethodInfo m21929_MI;
 t5 * m21929 (t3840 * __this, MethodInfo* method){
	t3832  V_0 = {0};
	{
		t3834 * L_0 = &(__this->f0);
		t3832  L_1 = m21907(L_0, &m21907_MI);
		V_0 = L_1;
		bool L_2 = m21874((&V_0), &m21874_MI);
		bool L_3 = L_2;
		t5 * L_4 = Box(InitializedTypeInfo(&t108_TI), &L_3);
		return L_4;
	}
}
extern MethodInfo m21930_MI;
 t5 * m21930 (t3840 * __this, MethodInfo* method){
	{
		t990  L_0 = (t990 )VirtFuncInvoker0< t990  >::Invoke(&m21927_MI, __this);
		t990  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t990_TI), &L_1);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Boolean>
extern Il2CppType t3834_0_0_1;
FieldInfo t3840_f0_FieldInfo = 
{
	"host_enumerator", &t3834_0_0_1, &t3840_TI, offsetof(t3840, f0), &EmptyCustomAttributesCache};
static FieldInfo* t3840_FIs[] =
{
	&t3840_f0_FieldInfo,
	NULL
};
static PropertyInfo t3840____Entry_PropertyInfo = 
{
	&t3840_TI, "Entry", &m21927_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3840____Key_PropertyInfo = 
{
	&t3840_TI, "Key", &m21928_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3840____Value_PropertyInfo = 
{
	&t3840_TI, "Value", &m21929_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3840____Current_PropertyInfo = 
{
	&t3840_TI, "Current", &m21930_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3840_PIs[] =
{
	&t3840____Entry_PropertyInfo,
	&t3840____Key_PropertyInfo,
	&t3840____Value_PropertyInfo,
	&t3840____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1033_0_0_0;
static ParameterInfo t3840_m21925_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t1033_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21925_GM;
MethodInfo m21925_MI = 
{
	".ctor", (methodPointerType)&m21925, &t3840_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3840_m21925_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21925_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21926_GM;
MethodInfo m21926_MI = 
{
	"MoveNext", (methodPointerType)&m21926, &t3840_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21926_GM};
extern Il2CppType t990_0_0_0;
extern void* RuntimeInvoker_t990 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21927_GM;
MethodInfo m21927_MI = 
{
	"get_Entry", (methodPointerType)&m21927, &t3840_TI, &t990_0_0_0, RuntimeInvoker_t990, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21927_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21928_GM;
MethodInfo m21928_MI = 
{
	"get_Key", (methodPointerType)&m21928, &t3840_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21928_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21929_GM;
MethodInfo m21929_MI = 
{
	"get_Value", (methodPointerType)&m21929, &t3840_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21929_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21930_GM;
MethodInfo m21930_MI = 
{
	"get_Current", (methodPointerType)&m21930, &t3840_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21930_GM};
static MethodInfo* t3840_MIs[] =
{
	&m21925_MI,
	&m21926_MI,
	&m21927_MI,
	&m21928_MI,
	&m21929_MI,
	&m21930_MI,
	NULL
};
static MethodInfo* t3840_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21930_MI,
	&m21926_MI,
	&m21927_MI,
	&m21928_MI,
	&m21929_MI,
};
static TypeInfo* t3840_ITIs[] = 
{
	&t196_TI,
	&t987_TI,
};
static Il2CppInterfaceOffsetPair t3840_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t987_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3840_0_0_0;
extern Il2CppType t3840_1_0_0;
struct t3840;
extern Il2CppGenericClass t3840_GC;
TypeInfo t3840_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ShimEnumerator", "", t3840_MIs, t3840_PIs, t3840_FIs, NULL, &t5_TI, NULL, &t1517_TI, &t3840_TI, t3840_ITIs, t3840_VT, &EmptyCustomAttributesCache, &t3840_TI, &t3840_0_0_0, &t3840_1_0_0, t3840_IOs, &t3840_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3840), 0, -1, 0, 0, -1, 1056771, 0, false, false, false, false, true, false, false, false, false, false, false, false, 6, 4, 1, 0, 0, 9, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7712_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.Boolean>
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t7712_m36010_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t111_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36010_GM;
MethodInfo m36010_MI = 
{
	"Equals", NULL, &t7712_TI, &t108_0_0_0, RuntimeInvoker_t108_t111_t111, t7712_m36010_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36010_GM};
extern Il2CppType t108_0_0_0;
static ParameterInfo t7712_m36031_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36031_GM;
MethodInfo m36031_MI = 
{
	"GetHashCode", NULL, &t7712_TI, &t110_0_0_0, RuntimeInvoker_t110_t111, t7712_m36031_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36031_GM};
static MethodInfo* t7712_MIs[] =
{
	&m36010_MI,
	&m36031_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7712_0_0_0;
extern Il2CppType t7712_1_0_0;
struct t7712;
extern Il2CppGenericClass t7712_GC;
TypeInfo t7712_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t7712_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7712_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7712_TI, &t7712_0_0_0, &t7712_1_0_0, NULL, &t7712_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#include "t3841.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3841_TI;
#include "t3841MD.h"

#include "t1520.h"
#include "t3843.h"
extern TypeInfo t2092_TI;
extern TypeInfo t114_TI;
extern TypeInfo t1520_TI;
extern TypeInfo t675_TI;
extern TypeInfo t3843_TI;
#include "t114MD.h"
#include "t1196MD.h"
#include "t3843MD.h"
extern Il2CppType t2092_0_0_0;
extern Il2CppType t1520_0_0_0;
extern MethodInfo m532_MI;
extern MethodInfo m3626_MI;
extern MethodInfo m3624_MI;
extern MethodInfo m10126_MI;
extern MethodInfo m21939_MI;
extern MethodInfo m36032_MI;
extern MethodInfo m36011_MI;


extern MethodInfo m21931_MI;
 void m21931 (t3841 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m21932_MI;
 void m21932 (t5 * __this, MethodInfo* method){
	t3843 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t3843 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t3843_TI));
	m21939(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m21939_MI);
	((t3841_SFs*)InitializedTypeInfo(&t3841_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m21933_MI;
 int32_t m21933 (t3841 * __this, t5 * p0, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, bool >::Invoke(&m36032_MI, __this, ((*(bool*)((bool*)UnBox (p0, InitializedTypeInfo(&t108_TI))))));
		return L_0;
	}
}
extern MethodInfo m21934_MI;
 bool m21934 (t3841 * __this, t5 * p0, t5 * p1, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, bool, bool >::Invoke(&m36011_MI, __this, ((*(bool*)((bool*)UnBox (p0, InitializedTypeInfo(&t108_TI))))), ((*(bool*)((bool*)UnBox (p1, InitializedTypeInfo(&t108_TI))))));
		return L_0;
	}
}
extern MethodInfo m21935_MI;
 t3841 * m21935 (t5 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t3841_TI));
		return (((t3841_SFs*)InitializedTypeInfo(&t3841_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.Boolean>
extern Il2CppType t3841_0_0_49;
FieldInfo t3841_f0_FieldInfo = 
{
	"_default", &t3841_0_0_49, &t3841_TI, offsetof(t3841_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t3841_FIs[] =
{
	&t3841_f0_FieldInfo,
	NULL
};
static PropertyInfo t3841____Default_PropertyInfo = 
{
	&t3841_TI, "Default", &m21935_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3841_PIs[] =
{
	&t3841____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21931_GM;
MethodInfo m21931_MI = 
{
	".ctor", (methodPointerType)&m21931, &t3841_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21931_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21932_GM;
MethodInfo m21932_MI = 
{
	".cctor", (methodPointerType)&m21932, &t3841_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21932_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3841_m21933_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21933_GM;
MethodInfo m21933_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m21933, &t3841_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3841_m21933_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21933_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3841_m21934_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21934_GM;
MethodInfo m21934_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m21934, &t3841_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t3841_m21934_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21934_GM};
extern Il2CppType t108_0_0_0;
static ParameterInfo t3841_m36032_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36032_GM;
MethodInfo m36032_MI = 
{
	"GetHashCode", NULL, &t3841_TI, &t110_0_0_0, RuntimeInvoker_t110_t111, t3841_m36032_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36032_GM};
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t3841_m36011_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t111_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36011_GM;
MethodInfo m36011_MI = 
{
	"Equals", NULL, &t3841_TI, &t108_0_0_0, RuntimeInvoker_t108_t111_t111, t3841_m36011_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36011_GM};
extern Il2CppType t3841_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21935_GM;
MethodInfo m21935_MI = 
{
	"get_Default", (methodPointerType)&m21935, &t3841_TI, &t3841_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21935_GM};
static MethodInfo* t3841_MIs[] =
{
	&m21931_MI,
	&m21932_MI,
	&m21933_MI,
	&m21934_MI,
	&m36032_MI,
	&m36011_MI,
	&m21935_MI,
	NULL
};
static MethodInfo* t3841_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m36011_MI,
	&m36032_MI,
	&m21934_MI,
	&m21933_MI,
	NULL,
	NULL,
};
extern TypeInfo t998_TI;
static TypeInfo* t3841_ITIs[] = 
{
	&t7712_TI,
	&t998_TI,
};
static Il2CppInterfaceOffsetPair t3841_IOs[] = 
{
	{ &t7712_TI, 4},
	{ &t998_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3841_0_0_0;
extern Il2CppType t3841_1_0_0;
struct t3841;
extern Il2CppGenericClass t3841_GC;
TypeInfo t3841_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t3841_MIs, t3841_PIs, t3841_FIs, NULL, &t5_TI, NULL, NULL, &t3841_TI, t3841_ITIs, t3841_VT, &EmptyCustomAttributesCache, &t3841_TI, &t3841_0_0_0, &t3841_1_0_0, t3841_IOs, &t3841_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3841), 0, -1, sizeof(t3841_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#include "t3842.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3842_TI;
#include "t3842MD.h"

extern MethodInfo m35680_MI;


extern MethodInfo m21936_MI;
 void m21936 (t3842 * __this, MethodInfo* method){
	{
		m21931(__this, &m21931_MI);
		return;
	}
}
extern MethodInfo m21937_MI;
 int32_t m21937 (t3842 * __this, bool p0, MethodInfo* method){
	{
		bool L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t108_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m466_MI, Box(InitializedTypeInfo(&t108_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m21938_MI;
 bool m21938 (t3842 * __this, bool p0, bool p1, MethodInfo* method){
	{
		bool L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t108_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		bool L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t108_TI), &L_2);
		return ((((t5 *)L_3) == ((t5 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, bool >::Invoke(&m35680_MI, Box(InitializedTypeInfo(&t108_TI), &(*(&p0))), p1);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.Boolean>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21936_GM;
MethodInfo m21936_MI = 
{
	".ctor", (methodPointerType)&m21936, &t3842_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21936_GM};
extern Il2CppType t108_0_0_0;
static ParameterInfo t3842_m21937_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21937_GM;
MethodInfo m21937_MI = 
{
	"GetHashCode", (methodPointerType)&m21937, &t3842_TI, &t110_0_0_0, RuntimeInvoker_t110_t111, t3842_m21937_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21937_GM};
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t3842_m21938_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t111_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21938_GM;
MethodInfo m21938_MI = 
{
	"Equals", (methodPointerType)&m21938, &t3842_TI, &t108_0_0_0, RuntimeInvoker_t108_t111_t111, t3842_m21938_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21938_GM};
static MethodInfo* t3842_MIs[] =
{
	&m21936_MI,
	&m21937_MI,
	&m21938_MI,
	NULL
};
static MethodInfo* t3842_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21938_MI,
	&m21937_MI,
	&m21934_MI,
	&m21933_MI,
	&m21937_MI,
	&m21938_MI,
};
static Il2CppInterfaceOffsetPair t3842_IOs[] = 
{
	{ &t7712_TI, 4},
	{ &t998_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3842_0_0_0;
extern Il2CppType t3842_1_0_0;
struct t3842;
extern Il2CppGenericClass t3842_GC;
TypeInfo t3842_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericEqualityComparer`1", "System.Collections.Generic", t3842_MIs, NULL, NULL, NULL, &t3841_TI, NULL, NULL, &t3842_TI, NULL, t3842_VT, &EmptyCustomAttributesCache, &t3842_TI, &t3842_0_0_0, &t3842_1_0_0, t3842_IOs, &t3842_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3842), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif



 void m21939 (t3843 * __this, MethodInfo* method){
	{
		m21931(__this, &m21931_MI);
		return;
	}
}
extern MethodInfo m21940_MI;
 int32_t m21940 (t3843 * __this, bool p0, MethodInfo* method){
	{
		bool L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t108_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m466_MI, Box(InitializedTypeInfo(&t108_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m21941_MI;
 bool m21941 (t3843 * __this, bool p0, bool p1, MethodInfo* method){
	{
		bool L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t108_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		bool L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t108_TI), &L_2);
		return ((((t5 *)L_3) == ((t5 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		bool L_4 = p1;
		t5 * L_5 = Box(InitializedTypeInfo(&t108_TI), &L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t108_TI), &(*(&p0))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21939_GM;
MethodInfo m21939_MI = 
{
	".ctor", (methodPointerType)&m21939, &t3843_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21939_GM};
extern Il2CppType t108_0_0_0;
static ParameterInfo t3843_m21940_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21940_GM;
MethodInfo m21940_MI = 
{
	"GetHashCode", (methodPointerType)&m21940, &t3843_TI, &t110_0_0_0, RuntimeInvoker_t110_t111, t3843_m21940_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21940_GM};
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t3843_m21941_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t111_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21941_GM;
MethodInfo m21941_MI = 
{
	"Equals", (methodPointerType)&m21941, &t3843_TI, &t108_0_0_0, RuntimeInvoker_t108_t111_t111, t3843_m21941_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21941_GM};
static MethodInfo* t3843_MIs[] =
{
	&m21939_MI,
	&m21940_MI,
	&m21941_MI,
	NULL
};
static MethodInfo* t3843_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21941_MI,
	&m21940_MI,
	&m21934_MI,
	&m21933_MI,
	&m21940_MI,
	&m21941_MI,
};
static Il2CppInterfaceOffsetPair t3843_IOs[] = 
{
	{ &t7712_TI, 4},
	{ &t998_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3843_0_0_0;
extern Il2CppType t3843_1_0_0;
struct t3843;
extern Il2CppGenericClass t3843_GC;
extern TypeInfo t1519_TI;
TypeInfo t3843_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t3843_MIs, NULL, NULL, NULL, &t3841_TI, NULL, &t1519_TI, &t3843_TI, NULL, t3843_VT, &EmptyCustomAttributesCache, &t3843_TI, &t3843_0_0_0, &t3843_1_0_0, t3843_IOs, &t3843_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3843), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5312_TI;

#include "t1038.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.OpenFlags>
extern MethodInfo m36033_MI;
static PropertyInfo t5312____Current_PropertyInfo = 
{
	&t5312_TI, "Current", &m36033_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5312_PIs[] =
{
	&t5312____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1038_0_0_0;
extern void* RuntimeInvoker_t1038 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36033_GM;
MethodInfo m36033_MI = 
{
	"get_Current", NULL, &t5312_TI, &t1038_0_0_0, RuntimeInvoker_t1038, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36033_GM};
static MethodInfo* t5312_MIs[] =
{
	&m36033_MI,
	NULL
};
static TypeInfo* t5312_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5312_0_0_0;
extern Il2CppType t5312_1_0_0;
struct t5312;
extern Il2CppGenericClass t5312_GC;
TypeInfo t5312_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5312_MIs, t5312_PIs, NULL, NULL, NULL, NULL, NULL, &t5312_TI, t5312_ITIs, NULL, &EmptyCustomAttributesCache, &t5312_TI, &t5312_0_0_0, &t5312_1_0_0, NULL, &t5312_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3844.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3844_TI;
#include "t3844MD.h"

extern TypeInfo t1038_TI;
extern MethodInfo m21946_MI;
extern MethodInfo m28082_MI;
struct t107;
 int32_t m28082 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21942_MI;
 void m21942 (t3844 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21943_MI;
 t5 * m21943 (t3844 * __this, MethodInfo* method){
	{
		int32_t L_0 = m21946(__this, &m21946_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1038_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m21944_MI;
 void m21944 (t3844 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21945_MI;
 bool m21945 (t3844 * __this, MethodInfo* method){
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
 int32_t m21946 (t3844 * __this, MethodInfo* method){
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
		int32_t L_8 = m28082(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28082_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.OpenFlags>
extern Il2CppType t107_0_0_1;
FieldInfo t3844_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3844_TI, offsetof(t3844, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3844_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3844_TI, offsetof(t3844, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3844_FIs[] =
{
	&t3844_f0_FieldInfo,
	&t3844_f1_FieldInfo,
	NULL
};
static PropertyInfo t3844____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3844_TI, "System.Collections.IEnumerator.Current", &m21943_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3844____Current_PropertyInfo = 
{
	&t3844_TI, "Current", &m21946_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3844_PIs[] =
{
	&t3844____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3844____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3844_m21942_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21942_GM;
MethodInfo m21942_MI = 
{
	".ctor", (methodPointerType)&m21942, &t3844_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3844_m21942_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21942_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21943_GM;
MethodInfo m21943_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21943, &t3844_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21943_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21944_GM;
MethodInfo m21944_MI = 
{
	"Dispose", (methodPointerType)&m21944, &t3844_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21944_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21945_GM;
MethodInfo m21945_MI = 
{
	"MoveNext", (methodPointerType)&m21945, &t3844_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21945_GM};
extern Il2CppType t1038_0_0_0;
extern void* RuntimeInvoker_t1038 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21946_GM;
MethodInfo m21946_MI = 
{
	"get_Current", (methodPointerType)&m21946, &t3844_TI, &t1038_0_0_0, RuntimeInvoker_t1038, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21946_GM};
static MethodInfo* t3844_MIs[] =
{
	&m21942_MI,
	&m21943_MI,
	&m21944_MI,
	&m21945_MI,
	&m21946_MI,
	NULL
};
static MethodInfo* t3844_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21943_MI,
	&m21945_MI,
	&m21944_MI,
	&m21946_MI,
};
static TypeInfo* t3844_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5312_TI,
};
static Il2CppInterfaceOffsetPair t3844_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5312_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3844_0_0_0;
extern Il2CppType t3844_1_0_0;
extern Il2CppGenericClass t3844_GC;
TypeInfo t3844_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3844_MIs, t3844_PIs, t3844_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3844_TI, t3844_ITIs, t3844_VT, &EmptyCustomAttributesCache, &t3844_TI, &t3844_0_0_0, &t3844_1_0_0, t3844_IOs, &t3844_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3844)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6711_TI;

#include "System_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.OpenFlags>
extern MethodInfo m36034_MI;
static PropertyInfo t6711____Count_PropertyInfo = 
{
	&t6711_TI, "Count", &m36034_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36035_MI;
static PropertyInfo t6711____IsReadOnly_PropertyInfo = 
{
	&t6711_TI, "IsReadOnly", &m36035_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6711_PIs[] =
{
	&t6711____Count_PropertyInfo,
	&t6711____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36034_GM;
MethodInfo m36034_MI = 
{
	"get_Count", NULL, &t6711_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36034_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36035_GM;
MethodInfo m36035_MI = 
{
	"get_IsReadOnly", NULL, &t6711_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36035_GM};
extern Il2CppType t1038_0_0_0;
extern Il2CppType t1038_0_0_0;
static ParameterInfo t6711_m36036_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1038_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36036_GM;
MethodInfo m36036_MI = 
{
	"Add", NULL, &t6711_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6711_m36036_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36036_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36037_GM;
MethodInfo m36037_MI = 
{
	"Clear", NULL, &t6711_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36037_GM};
extern Il2CppType t1038_0_0_0;
static ParameterInfo t6711_m36038_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1038_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36038_GM;
MethodInfo m36038_MI = 
{
	"Contains", NULL, &t6711_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6711_m36038_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36038_GM};
extern Il2CppType t4580_0_0_0;
extern Il2CppType t4580_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6711_m36039_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4580_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36039_GM;
MethodInfo m36039_MI = 
{
	"CopyTo", NULL, &t6711_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6711_m36039_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36039_GM};
extern Il2CppType t1038_0_0_0;
static ParameterInfo t6711_m36040_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1038_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36040_GM;
MethodInfo m36040_MI = 
{
	"Remove", NULL, &t6711_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6711_m36040_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36040_GM};
static MethodInfo* t6711_MIs[] =
{
	&m36034_MI,
	&m36035_MI,
	&m36036_MI,
	&m36037_MI,
	&m36038_MI,
	&m36039_MI,
	&m36040_MI,
	NULL
};
extern TypeInfo t6713_TI;
static TypeInfo* t6711_ITIs[] = 
{
	&t739_TI,
	&t6713_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6711_0_0_0;
extern Il2CppType t6711_1_0_0;
struct t6711;
extern Il2CppGenericClass t6711_GC;
TypeInfo t6711_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6711_MIs, t6711_PIs, NULL, NULL, NULL, NULL, NULL, &t6711_TI, t6711_ITIs, NULL, &EmptyCustomAttributesCache, &t6711_TI, &t6711_0_0_0, &t6711_1_0_0, NULL, &t6711_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.OpenFlags>
extern Il2CppType t5312_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36041_GM;
MethodInfo m36041_MI = 
{
	"GetEnumerator", NULL, &t6713_TI, &t5312_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36041_GM};
static MethodInfo* t6713_MIs[] =
{
	&m36041_MI,
	NULL
};
static TypeInfo* t6713_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6713_0_0_0;
extern Il2CppType t6713_1_0_0;
struct t6713;
extern Il2CppGenericClass t6713_GC;
TypeInfo t6713_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6713_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6713_TI, t6713_ITIs, NULL, &EmptyCustomAttributesCache, &t6713_TI, &t6713_0_0_0, &t6713_1_0_0, NULL, &t6713_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6712_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.OpenFlags>
extern MethodInfo m36042_MI;
extern MethodInfo m36043_MI;
static PropertyInfo t6712____Item_PropertyInfo = 
{
	&t6712_TI, "Item", &m36042_MI, &m36043_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6712_PIs[] =
{
	&t6712____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1038_0_0_0;
static ParameterInfo t6712_m36044_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1038_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36044_GM;
MethodInfo m36044_MI = 
{
	"IndexOf", NULL, &t6712_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6712_m36044_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36044_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1038_0_0_0;
static ParameterInfo t6712_m36045_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1038_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36045_GM;
MethodInfo m36045_MI = 
{
	"Insert", NULL, &t6712_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6712_m36045_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36045_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6712_m36046_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36046_GM;
MethodInfo m36046_MI = 
{
	"RemoveAt", NULL, &t6712_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6712_m36046_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36046_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6712_m36042_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1038_0_0_0;
extern void* RuntimeInvoker_t1038_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36042_GM;
MethodInfo m36042_MI = 
{
	"get_Item", NULL, &t6712_TI, &t1038_0_0_0, RuntimeInvoker_t1038_t110, t6712_m36042_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36042_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1038_0_0_0;
static ParameterInfo t6712_m36043_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1038_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36043_GM;
MethodInfo m36043_MI = 
{
	"set_Item", NULL, &t6712_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6712_m36043_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36043_GM};
static MethodInfo* t6712_MIs[] =
{
	&m36044_MI,
	&m36045_MI,
	&m36046_MI,
	&m36042_MI,
	&m36043_MI,
	NULL
};
static TypeInfo* t6712_ITIs[] = 
{
	&t739_TI,
	&t6711_TI,
	&t6713_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6712_0_0_0;
extern Il2CppType t6712_1_0_0;
struct t6712;
extern Il2CppGenericClass t6712_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6712_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6712_MIs, t6712_PIs, NULL, NULL, NULL, NULL, NULL, &t6712_TI, t6712_ITIs, NULL, &t2240__CustomAttributeCache, &t6712_TI, &t6712_0_0_0, &t6712_1_0_0, NULL, &t6712_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5313_TI;

#include "t494.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Byte>
extern MethodInfo m36047_MI;
static PropertyInfo t5313____Current_PropertyInfo = 
{
	&t5313_TI, "Current", &m36047_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5313_PIs[] =
{
	&t5313____Current_PropertyInfo,
	NULL
};
extern Il2CppType t494_0_0_0;
extern void* RuntimeInvoker_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36047_GM;
MethodInfo m36047_MI = 
{
	"get_Current", NULL, &t5313_TI, &t494_0_0_0, RuntimeInvoker_t494, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36047_GM};
static MethodInfo* t5313_MIs[] =
{
	&m36047_MI,
	NULL
};
static TypeInfo* t5313_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5313_0_0_0;
extern Il2CppType t5313_1_0_0;
struct t5313;
extern Il2CppGenericClass t5313_GC;
TypeInfo t5313_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5313_MIs, t5313_PIs, NULL, NULL, NULL, NULL, NULL, &t5313_TI, t5313_ITIs, NULL, &EmptyCustomAttributesCache, &t5313_TI, &t5313_0_0_0, &t5313_1_0_0, NULL, &t5313_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3845.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3845_TI;
#include "t3845MD.h"

extern TypeInfo t494_TI;
extern MethodInfo m21951_MI;
extern MethodInfo m28093_MI;
struct t107;
 uint8_t m28093 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21947_MI;
 void m21947 (t3845 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21948_MI;
 t5 * m21948 (t3845 * __this, MethodInfo* method){
	{
		uint8_t L_0 = m21951(__this, &m21951_MI);
		uint8_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t494_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m21949_MI;
 void m21949 (t3845 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21950_MI;
 bool m21950 (t3845 * __this, MethodInfo* method){
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
 uint8_t m21951 (t3845 * __this, MethodInfo* method){
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
		uint8_t L_8 = m28093(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28093_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Byte>
extern Il2CppType t107_0_0_1;
FieldInfo t3845_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3845_TI, offsetof(t3845, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3845_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3845_TI, offsetof(t3845, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3845_FIs[] =
{
	&t3845_f0_FieldInfo,
	&t3845_f1_FieldInfo,
	NULL
};
static PropertyInfo t3845____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3845_TI, "System.Collections.IEnumerator.Current", &m21948_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3845____Current_PropertyInfo = 
{
	&t3845_TI, "Current", &m21951_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3845_PIs[] =
{
	&t3845____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3845____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3845_m21947_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21947_GM;
MethodInfo m21947_MI = 
{
	".ctor", (methodPointerType)&m21947, &t3845_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3845_m21947_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21947_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21948_GM;
MethodInfo m21948_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21948, &t3845_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21948_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21949_GM;
MethodInfo m21949_MI = 
{
	"Dispose", (methodPointerType)&m21949, &t3845_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21949_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21950_GM;
MethodInfo m21950_MI = 
{
	"MoveNext", (methodPointerType)&m21950, &t3845_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21950_GM};
extern Il2CppType t494_0_0_0;
extern void* RuntimeInvoker_t494 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21951_GM;
MethodInfo m21951_MI = 
{
	"get_Current", (methodPointerType)&m21951, &t3845_TI, &t494_0_0_0, RuntimeInvoker_t494, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21951_GM};
static MethodInfo* t3845_MIs[] =
{
	&m21947_MI,
	&m21948_MI,
	&m21949_MI,
	&m21950_MI,
	&m21951_MI,
	NULL
};
static MethodInfo* t3845_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21948_MI,
	&m21950_MI,
	&m21949_MI,
	&m21951_MI,
};
static TypeInfo* t3845_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5313_TI,
};
static Il2CppInterfaceOffsetPair t3845_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5313_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3845_0_0_0;
extern Il2CppType t3845_1_0_0;
extern Il2CppGenericClass t3845_GC;
TypeInfo t3845_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3845_MIs, t3845_PIs, t3845_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3845_TI, t3845_ITIs, t3845_VT, &EmptyCustomAttributesCache, &t3845_TI, &t3845_0_0_0, &t3845_1_0_0, t3845_IOs, &t3845_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3845)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6714_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Byte>
extern MethodInfo m36048_MI;
static PropertyInfo t6714____Count_PropertyInfo = 
{
	&t6714_TI, "Count", &m36048_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36049_MI;
static PropertyInfo t6714____IsReadOnly_PropertyInfo = 
{
	&t6714_TI, "IsReadOnly", &m36049_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6714_PIs[] =
{
	&t6714____Count_PropertyInfo,
	&t6714____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36048_GM;
MethodInfo m36048_MI = 
{
	"get_Count", NULL, &t6714_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36048_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36049_GM;
MethodInfo m36049_MI = 
{
	"get_IsReadOnly", NULL, &t6714_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36049_GM};
extern Il2CppType t494_0_0_0;
extern Il2CppType t494_0_0_0;
static ParameterInfo t6714_m36050_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t494_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36050_GM;
MethodInfo m36050_MI = 
{
	"Add", NULL, &t6714_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t6714_m36050_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36050_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36051_GM;
MethodInfo m36051_MI = 
{
	"Clear", NULL, &t6714_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36051_GM};
extern Il2CppType t494_0_0_0;
static ParameterInfo t6714_m36052_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t494_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36052_GM;
MethodInfo m36052_MI = 
{
	"Contains", NULL, &t6714_TI, &t108_0_0_0, RuntimeInvoker_t108_t111, t6714_m36052_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36052_GM};
extern Il2CppType t1044_0_0_0;
extern Il2CppType t1044_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6714_m36053_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1044_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36053_GM;
MethodInfo m36053_MI = 
{
	"CopyTo", NULL, &t6714_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6714_m36053_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36053_GM};
extern Il2CppType t494_0_0_0;
static ParameterInfo t6714_m36054_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t494_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36054_GM;
MethodInfo m36054_MI = 
{
	"Remove", NULL, &t6714_TI, &t108_0_0_0, RuntimeInvoker_t108_t111, t6714_m36054_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36054_GM};
static MethodInfo* t6714_MIs[] =
{
	&m36048_MI,
	&m36049_MI,
	&m36050_MI,
	&m36051_MI,
	&m36052_MI,
	&m36053_MI,
	&m36054_MI,
	NULL
};
extern TypeInfo t6716_TI;
static TypeInfo* t6714_ITIs[] = 
{
	&t739_TI,
	&t6716_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6714_0_0_0;
extern Il2CppType t6714_1_0_0;
struct t6714;
extern Il2CppGenericClass t6714_GC;
TypeInfo t6714_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6714_MIs, t6714_PIs, NULL, NULL, NULL, NULL, NULL, &t6714_TI, t6714_ITIs, NULL, &EmptyCustomAttributesCache, &t6714_TI, &t6714_0_0_0, &t6714_1_0_0, NULL, &t6714_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Byte>
extern Il2CppType t5313_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36055_GM;
MethodInfo m36055_MI = 
{
	"GetEnumerator", NULL, &t6716_TI, &t5313_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36055_GM};
static MethodInfo* t6716_MIs[] =
{
	&m36055_MI,
	NULL
};
static TypeInfo* t6716_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6716_0_0_0;
extern Il2CppType t6716_1_0_0;
struct t6716;
extern Il2CppGenericClass t6716_GC;
TypeInfo t6716_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6716_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6716_TI, t6716_ITIs, NULL, &EmptyCustomAttributesCache, &t6716_TI, &t6716_0_0_0, &t6716_1_0_0, NULL, &t6716_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6715_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Byte>
extern MethodInfo m36056_MI;
extern MethodInfo m36057_MI;
static PropertyInfo t6715____Item_PropertyInfo = 
{
	&t6715_TI, "Item", &m36056_MI, &m36057_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6715_PIs[] =
{
	&t6715____Item_PropertyInfo,
	NULL
};
extern Il2CppType t494_0_0_0;
static ParameterInfo t6715_m36058_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t494_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36058_GM;
MethodInfo m36058_MI = 
{
	"IndexOf", NULL, &t6715_TI, &t110_0_0_0, RuntimeInvoker_t110_t111, t6715_m36058_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36058_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t494_0_0_0;
static ParameterInfo t6715_m36059_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t494_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36059_GM;
MethodInfo m36059_MI = 
{
	"Insert", NULL, &t6715_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t111, t6715_m36059_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36059_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6715_m36060_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36060_GM;
MethodInfo m36060_MI = 
{
	"RemoveAt", NULL, &t6715_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6715_m36060_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36060_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6715_m36056_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t494_0_0_0;
extern void* RuntimeInvoker_t494_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36056_GM;
MethodInfo m36056_MI = 
{
	"get_Item", NULL, &t6715_TI, &t494_0_0_0, RuntimeInvoker_t494_t110, t6715_m36056_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36056_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t494_0_0_0;
static ParameterInfo t6715_m36057_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t494_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36057_GM;
MethodInfo m36057_MI = 
{
	"set_Item", NULL, &t6715_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t111, t6715_m36057_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36057_GM};
static MethodInfo* t6715_MIs[] =
{
	&m36058_MI,
	&m36059_MI,
	&m36060_MI,
	&m36056_MI,
	&m36057_MI,
	NULL
};
static TypeInfo* t6715_ITIs[] = 
{
	&t739_TI,
	&t6714_TI,
	&t6716_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6715_0_0_0;
extern Il2CppType t6715_1_0_0;
struct t6715;
extern Il2CppGenericClass t6715_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6715_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6715_MIs, t6715_PIs, NULL, NULL, NULL, NULL, NULL, &t6715_TI, t6715_ITIs, NULL, &t2240__CustomAttributeCache, &t6715_TI, &t6715_0_0_0, &t6715_1_0_0, NULL, &t6715_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6717_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.Byte>>
extern MethodInfo m36061_MI;
static PropertyInfo t6717____Count_PropertyInfo = 
{
	&t6717_TI, "Count", &m36061_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36062_MI;
static PropertyInfo t6717____IsReadOnly_PropertyInfo = 
{
	&t6717_TI, "IsReadOnly", &m36062_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6717_PIs[] =
{
	&t6717____Count_PropertyInfo,
	&t6717____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36061_GM;
MethodInfo m36061_MI = 
{
	"get_Count", NULL, &t6717_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36061_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36062_GM;
MethodInfo m36062_MI = 
{
	"get_IsReadOnly", NULL, &t6717_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36062_GM};
extern Il2CppType t2054_0_0_0;
extern Il2CppType t2054_0_0_0;
static ParameterInfo t6717_m36063_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2054_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36063_GM;
MethodInfo m36063_MI = 
{
	"Add", NULL, &t6717_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6717_m36063_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36063_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36064_GM;
MethodInfo m36064_MI = 
{
	"Clear", NULL, &t6717_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36064_GM};
extern Il2CppType t2054_0_0_0;
static ParameterInfo t6717_m36065_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2054_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36065_GM;
MethodInfo m36065_MI = 
{
	"Contains", NULL, &t6717_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6717_m36065_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36065_GM};
extern Il2CppType t4196_0_0_0;
extern Il2CppType t4196_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6717_m36066_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4196_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36066_GM;
MethodInfo m36066_MI = 
{
	"CopyTo", NULL, &t6717_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6717_m36066_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36066_GM};
extern Il2CppType t2054_0_0_0;
static ParameterInfo t6717_m36067_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2054_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36067_GM;
MethodInfo m36067_MI = 
{
	"Remove", NULL, &t6717_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6717_m36067_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36067_GM};
static MethodInfo* t6717_MIs[] =
{
	&m36061_MI,
	&m36062_MI,
	&m36063_MI,
	&m36064_MI,
	&m36065_MI,
	&m36066_MI,
	&m36067_MI,
	NULL
};
extern TypeInfo t6719_TI;
static TypeInfo* t6717_ITIs[] = 
{
	&t739_TI,
	&t6719_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6717_0_0_0;
extern Il2CppType t6717_1_0_0;
struct t6717;
extern Il2CppGenericClass t6717_GC;
TypeInfo t6717_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6717_MIs, t6717_PIs, NULL, NULL, NULL, NULL, NULL, &t6717_TI, t6717_ITIs, NULL, &EmptyCustomAttributesCache, &t6717_TI, &t6717_0_0_0, &t6717_1_0_0, NULL, &t6717_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Byte>>
extern Il2CppType t5315_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36068_GM;
MethodInfo m36068_MI = 
{
	"GetEnumerator", NULL, &t6719_TI, &t5315_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36068_GM};
static MethodInfo* t6719_MIs[] =
{
	&m36068_MI,
	NULL
};
static TypeInfo* t6719_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6719_0_0_0;
extern Il2CppType t6719_1_0_0;
struct t6719;
extern Il2CppGenericClass t6719_GC;
TypeInfo t6719_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6719_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6719_TI, t6719_ITIs, NULL, &EmptyCustomAttributesCache, &t6719_TI, &t6719_0_0_0, &t6719_1_0_0, NULL, &t6719_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5315_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Byte>>
extern MethodInfo m36069_MI;
static PropertyInfo t5315____Current_PropertyInfo = 
{
	&t5315_TI, "Current", &m36069_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5315_PIs[] =
{
	&t5315____Current_PropertyInfo,
	NULL
};
extern Il2CppType t2054_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36069_GM;
MethodInfo m36069_MI = 
{
	"get_Current", NULL, &t5315_TI, &t2054_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36069_GM};
static MethodInfo* t5315_MIs[] =
{
	&m36069_MI,
	NULL
};
static TypeInfo* t5315_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5315_0_0_0;
extern Il2CppType t5315_1_0_0;
struct t5315;
extern Il2CppGenericClass t5315_GC;
TypeInfo t5315_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5315_MIs, t5315_PIs, NULL, NULL, NULL, NULL, NULL, &t5315_TI, t5315_ITIs, NULL, &EmptyCustomAttributesCache, &t5315_TI, &t5315_0_0_0, &t5315_1_0_0, NULL, &t5315_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2054_TI;



// Metadata Definition System.IComparable`1<System.Byte>
extern Il2CppType t494_0_0_0;
static ParameterInfo t2054_m36070_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t494_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36070_GM;
MethodInfo m36070_MI = 
{
	"CompareTo", NULL, &t2054_TI, &t110_0_0_0, RuntimeInvoker_t110_t111, t2054_m36070_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36070_GM};
static MethodInfo* t2054_MIs[] =
{
	&m36070_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2054_1_0_0;
struct t2054;
extern Il2CppGenericClass t2054_GC;
TypeInfo t2054_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t2054_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2054_TI, NULL, NULL, &EmptyCustomAttributesCache, &t2054_TI, &t2054_0_0_0, &t2054_1_0_0, NULL, &t2054_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t3846.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3846_TI;
#include "t3846MD.h"

extern MethodInfo m21956_MI;
extern MethodInfo m28104_MI;
struct t107;
struct t107;
 t5 * m23596_gshared (t107 * __this, int32_t p0, MethodInfo* method);
#define m23596(__this, p0, method) (t5 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
#define m28104(__this, p0, method) (t5*)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.Byte>>
extern Il2CppType t107_0_0_1;
FieldInfo t3846_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3846_TI, offsetof(t3846, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3846_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3846_TI, offsetof(t3846, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3846_FIs[] =
{
	&t3846_f0_FieldInfo,
	&t3846_f1_FieldInfo,
	NULL
};
extern MethodInfo m21953_MI;
static PropertyInfo t3846____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3846_TI, "System.Collections.IEnumerator.Current", &m21953_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3846____Current_PropertyInfo = 
{
	&t3846_TI, "Current", &m21956_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3846_PIs[] =
{
	&t3846____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3846____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3846_m21952_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21952_GM;
MethodInfo m21952_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3846_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3846_m21952_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21952_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21953_GM;
MethodInfo m21953_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3846_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21953_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21954_GM;
MethodInfo m21954_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3846_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21954_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21955_GM;
MethodInfo m21955_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3846_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21955_GM};
extern Il2CppType t2054_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21956_GM;
MethodInfo m21956_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3846_TI, &t2054_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21956_GM};
static MethodInfo* t3846_MIs[] =
{
	&m21952_MI,
	&m21953_MI,
	&m21954_MI,
	&m21955_MI,
	&m21956_MI,
	NULL
};
extern MethodInfo m21955_MI;
extern MethodInfo m21954_MI;
static MethodInfo* t3846_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21953_MI,
	&m21955_MI,
	&m21954_MI,
	&m21956_MI,
};
static TypeInfo* t3846_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5315_TI,
};
static Il2CppInterfaceOffsetPair t3846_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5315_TI, 7},
};
extern TypeInfo t2054_TI;
static Il2CppRGCTXData t3846_RGCTXData[3] = 
{
	&m21956_MI/* Method Usage */,
	&t2054_TI/* Class Usage */,
	&m28104_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3846_0_0_0;
extern Il2CppType t3846_1_0_0;
extern Il2CppGenericClass t3846_GC;
TypeInfo t3846_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3846_MIs, t3846_PIs, t3846_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3846_TI, t3846_ITIs, t3846_VT, &EmptyCustomAttributesCache, &t3846_TI, &t3846_0_0_0, &t3846_1_0_0, t3846_IOs, &t3846_GC, NULL, NULL, NULL, t3846_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3846)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6718_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.Byte>>
extern MethodInfo m36071_MI;
extern MethodInfo m36072_MI;
static PropertyInfo t6718____Item_PropertyInfo = 
{
	&t6718_TI, "Item", &m36071_MI, &m36072_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6718_PIs[] =
{
	&t6718____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2054_0_0_0;
static ParameterInfo t6718_m36073_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2054_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36073_GM;
MethodInfo m36073_MI = 
{
	"IndexOf", NULL, &t6718_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6718_m36073_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36073_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2054_0_0_0;
static ParameterInfo t6718_m36074_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2054_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36074_GM;
MethodInfo m36074_MI = 
{
	"Insert", NULL, &t6718_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6718_m36074_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36074_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6718_m36075_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36075_GM;
MethodInfo m36075_MI = 
{
	"RemoveAt", NULL, &t6718_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6718_m36075_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36075_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6718_m36071_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t2054_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36071_GM;
MethodInfo m36071_MI = 
{
	"get_Item", NULL, &t6718_TI, &t2054_0_0_0, RuntimeInvoker_t5_t110, t6718_m36071_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36071_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2054_0_0_0;
static ParameterInfo t6718_m36072_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2054_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36072_GM;
MethodInfo m36072_MI = 
{
	"set_Item", NULL, &t6718_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6718_m36072_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36072_GM};
static MethodInfo* t6718_MIs[] =
{
	&m36073_MI,
	&m36074_MI,
	&m36075_MI,
	&m36071_MI,
	&m36072_MI,
	NULL
};
static TypeInfo* t6718_ITIs[] = 
{
	&t739_TI,
	&t6717_TI,
	&t6719_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6718_0_0_0;
extern Il2CppType t6718_1_0_0;
struct t6718;
extern Il2CppGenericClass t6718_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6718_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6718_MIs, t6718_PIs, NULL, NULL, NULL, NULL, NULL, &t6718_TI, t6718_ITIs, NULL, &t2240__CustomAttributeCache, &t6718_TI, &t6718_0_0_0, &t6718_1_0_0, NULL, &t6718_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6720_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Byte>>
extern MethodInfo m36076_MI;
static PropertyInfo t6720____Count_PropertyInfo = 
{
	&t6720_TI, "Count", &m36076_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36077_MI;
static PropertyInfo t6720____IsReadOnly_PropertyInfo = 
{
	&t6720_TI, "IsReadOnly", &m36077_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6720_PIs[] =
{
	&t6720____Count_PropertyInfo,
	&t6720____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36076_GM;
MethodInfo m36076_MI = 
{
	"get_Count", NULL, &t6720_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36076_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36077_GM;
MethodInfo m36077_MI = 
{
	"get_IsReadOnly", NULL, &t6720_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36077_GM};
extern Il2CppType t2055_0_0_0;
extern Il2CppType t2055_0_0_0;
static ParameterInfo t6720_m36078_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2055_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36078_GM;
MethodInfo m36078_MI = 
{
	"Add", NULL, &t6720_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6720_m36078_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36078_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36079_GM;
MethodInfo m36079_MI = 
{
	"Clear", NULL, &t6720_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36079_GM};
extern Il2CppType t2055_0_0_0;
static ParameterInfo t6720_m36080_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2055_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36080_GM;
MethodInfo m36080_MI = 
{
	"Contains", NULL, &t6720_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6720_m36080_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36080_GM};
extern Il2CppType t4197_0_0_0;
extern Il2CppType t4197_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6720_m36081_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4197_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36081_GM;
MethodInfo m36081_MI = 
{
	"CopyTo", NULL, &t6720_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6720_m36081_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36081_GM};
extern Il2CppType t2055_0_0_0;
static ParameterInfo t6720_m36082_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2055_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36082_GM;
MethodInfo m36082_MI = 
{
	"Remove", NULL, &t6720_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6720_m36082_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36082_GM};
static MethodInfo* t6720_MIs[] =
{
	&m36076_MI,
	&m36077_MI,
	&m36078_MI,
	&m36079_MI,
	&m36080_MI,
	&m36081_MI,
	&m36082_MI,
	NULL
};
extern TypeInfo t6722_TI;
static TypeInfo* t6720_ITIs[] = 
{
	&t739_TI,
	&t6722_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6720_0_0_0;
extern Il2CppType t6720_1_0_0;
struct t6720;
extern Il2CppGenericClass t6720_GC;
TypeInfo t6720_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6720_MIs, t6720_PIs, NULL, NULL, NULL, NULL, NULL, &t6720_TI, t6720_ITIs, NULL, &EmptyCustomAttributesCache, &t6720_TI, &t6720_0_0_0, &t6720_1_0_0, NULL, &t6720_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Byte>>
extern Il2CppType t5317_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36083_GM;
MethodInfo m36083_MI = 
{
	"GetEnumerator", NULL, &t6722_TI, &t5317_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36083_GM};
static MethodInfo* t6722_MIs[] =
{
	&m36083_MI,
	NULL
};
static TypeInfo* t6722_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6722_0_0_0;
extern Il2CppType t6722_1_0_0;
struct t6722;
extern Il2CppGenericClass t6722_GC;
TypeInfo t6722_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6722_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6722_TI, t6722_ITIs, NULL, &EmptyCustomAttributesCache, &t6722_TI, &t6722_0_0_0, &t6722_1_0_0, NULL, &t6722_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5317_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Byte>>
extern MethodInfo m36084_MI;
static PropertyInfo t5317____Current_PropertyInfo = 
{
	&t5317_TI, "Current", &m36084_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5317_PIs[] =
{
	&t5317____Current_PropertyInfo,
	NULL
};
extern Il2CppType t2055_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36084_GM;
MethodInfo m36084_MI = 
{
	"get_Current", NULL, &t5317_TI, &t2055_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36084_GM};
static MethodInfo* t5317_MIs[] =
{
	&m36084_MI,
	NULL
};
static TypeInfo* t5317_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5317_0_0_0;
extern Il2CppType t5317_1_0_0;
struct t5317;
extern Il2CppGenericClass t5317_GC;
TypeInfo t5317_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5317_MIs, t5317_PIs, NULL, NULL, NULL, NULL, NULL, &t5317_TI, t5317_ITIs, NULL, &EmptyCustomAttributesCache, &t5317_TI, &t5317_0_0_0, &t5317_1_0_0, NULL, &t5317_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2055_TI;



// Metadata Definition System.IEquatable`1<System.Byte>
extern Il2CppType t494_0_0_0;
static ParameterInfo t2055_m36085_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t494_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36085_GM;
MethodInfo m36085_MI = 
{
	"Equals", NULL, &t2055_TI, &t108_0_0_0, RuntimeInvoker_t108_t111, t2055_m36085_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36085_GM};
static MethodInfo* t2055_MIs[] =
{
	&m36085_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2055_1_0_0;
struct t2055;
extern Il2CppGenericClass t2055_GC;
TypeInfo t2055_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t2055_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2055_TI, NULL, NULL, &EmptyCustomAttributesCache, &t2055_TI, &t2055_0_0_0, &t2055_1_0_0, NULL, &t2055_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t3847.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3847_TI;
#include "t3847MD.h"

extern MethodInfo m21961_MI;
extern MethodInfo m28115_MI;
struct t107;
#define m28115(__this, p0, method) (t5*)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.Byte>>
extern Il2CppType t107_0_0_1;
FieldInfo t3847_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3847_TI, offsetof(t3847, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3847_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3847_TI, offsetof(t3847, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3847_FIs[] =
{
	&t3847_f0_FieldInfo,
	&t3847_f1_FieldInfo,
	NULL
};
extern MethodInfo m21958_MI;
static PropertyInfo t3847____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3847_TI, "System.Collections.IEnumerator.Current", &m21958_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3847____Current_PropertyInfo = 
{
	&t3847_TI, "Current", &m21961_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3847_PIs[] =
{
	&t3847____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3847____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3847_m21957_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21957_GM;
MethodInfo m21957_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3847_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3847_m21957_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21957_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21958_GM;
MethodInfo m21958_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3847_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21958_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21959_GM;
MethodInfo m21959_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3847_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21959_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21960_GM;
MethodInfo m21960_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3847_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21960_GM};
extern Il2CppType t2055_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21961_GM;
MethodInfo m21961_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3847_TI, &t2055_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21961_GM};
static MethodInfo* t3847_MIs[] =
{
	&m21957_MI,
	&m21958_MI,
	&m21959_MI,
	&m21960_MI,
	&m21961_MI,
	NULL
};
extern MethodInfo m21960_MI;
extern MethodInfo m21959_MI;
static MethodInfo* t3847_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21958_MI,
	&m21960_MI,
	&m21959_MI,
	&m21961_MI,
};
static TypeInfo* t3847_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5317_TI,
};
static Il2CppInterfaceOffsetPair t3847_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5317_TI, 7},
};
extern TypeInfo t2055_TI;
static Il2CppRGCTXData t3847_RGCTXData[3] = 
{
	&m21961_MI/* Method Usage */,
	&t2055_TI/* Class Usage */,
	&m28115_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3847_0_0_0;
extern Il2CppType t3847_1_0_0;
extern Il2CppGenericClass t3847_GC;
TypeInfo t3847_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3847_MIs, t3847_PIs, t3847_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3847_TI, t3847_ITIs, t3847_VT, &EmptyCustomAttributesCache, &t3847_TI, &t3847_0_0_0, &t3847_1_0_0, t3847_IOs, &t3847_GC, NULL, NULL, NULL, t3847_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3847)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6721_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.Byte>>
extern MethodInfo m36086_MI;
extern MethodInfo m36087_MI;
static PropertyInfo t6721____Item_PropertyInfo = 
{
	&t6721_TI, "Item", &m36086_MI, &m36087_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6721_PIs[] =
{
	&t6721____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2055_0_0_0;
static ParameterInfo t6721_m36088_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2055_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36088_GM;
MethodInfo m36088_MI = 
{
	"IndexOf", NULL, &t6721_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6721_m36088_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36088_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2055_0_0_0;
static ParameterInfo t6721_m36089_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2055_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36089_GM;
MethodInfo m36089_MI = 
{
	"Insert", NULL, &t6721_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6721_m36089_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36089_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6721_m36090_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36090_GM;
MethodInfo m36090_MI = 
{
	"RemoveAt", NULL, &t6721_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6721_m36090_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36090_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6721_m36086_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t2055_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36086_GM;
MethodInfo m36086_MI = 
{
	"get_Item", NULL, &t6721_TI, &t2055_0_0_0, RuntimeInvoker_t5_t110, t6721_m36086_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36086_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2055_0_0_0;
static ParameterInfo t6721_m36087_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2055_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36087_GM;
MethodInfo m36087_MI = 
{
	"set_Item", NULL, &t6721_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6721_m36087_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36087_GM};
static MethodInfo* t6721_MIs[] =
{
	&m36088_MI,
	&m36089_MI,
	&m36090_MI,
	&m36086_MI,
	&m36087_MI,
	NULL
};
static TypeInfo* t6721_ITIs[] = 
{
	&t739_TI,
	&t6720_TI,
	&t6722_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6721_0_0_0;
extern Il2CppType t6721_1_0_0;
struct t6721;
extern Il2CppGenericClass t6721_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6721_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6721_MIs, t6721_PIs, NULL, NULL, NULL, NULL, NULL, &t6721_TI, t6721_ITIs, NULL, &t2240__CustomAttributeCache, &t6721_TI, &t6721_0_0_0, &t6721_1_0_0, NULL, &t6721_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5319_TI;

#include "t1047.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.StoreLocation>
extern MethodInfo m36091_MI;
static PropertyInfo t5319____Current_PropertyInfo = 
{
	&t5319_TI, "Current", &m36091_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5319_PIs[] =
{
	&t5319____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1047_0_0_0;
extern void* RuntimeInvoker_t1047 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36091_GM;
MethodInfo m36091_MI = 
{
	"get_Current", NULL, &t5319_TI, &t1047_0_0_0, RuntimeInvoker_t1047, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36091_GM};
static MethodInfo* t5319_MIs[] =
{
	&m36091_MI,
	NULL
};
static TypeInfo* t5319_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5319_0_0_0;
extern Il2CppType t5319_1_0_0;
struct t5319;
extern Il2CppGenericClass t5319_GC;
TypeInfo t5319_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5319_MIs, t5319_PIs, NULL, NULL, NULL, NULL, NULL, &t5319_TI, t5319_ITIs, NULL, &EmptyCustomAttributesCache, &t5319_TI, &t5319_0_0_0, &t5319_1_0_0, NULL, &t5319_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3848.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3848_TI;
#include "t3848MD.h"

extern TypeInfo t1047_TI;
extern MethodInfo m21966_MI;
extern MethodInfo m28126_MI;
struct t107;
 int32_t m28126 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21962_MI;
 void m21962 (t3848 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21963_MI;
 t5 * m21963 (t3848 * __this, MethodInfo* method){
	{
		int32_t L_0 = m21966(__this, &m21966_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1047_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m21964_MI;
 void m21964 (t3848 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21965_MI;
 bool m21965 (t3848 * __this, MethodInfo* method){
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
 int32_t m21966 (t3848 * __this, MethodInfo* method){
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
		int32_t L_8 = m28126(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28126_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreLocation>
extern Il2CppType t107_0_0_1;
FieldInfo t3848_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3848_TI, offsetof(t3848, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3848_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3848_TI, offsetof(t3848, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3848_FIs[] =
{
	&t3848_f0_FieldInfo,
	&t3848_f1_FieldInfo,
	NULL
};
static PropertyInfo t3848____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3848_TI, "System.Collections.IEnumerator.Current", &m21963_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3848____Current_PropertyInfo = 
{
	&t3848_TI, "Current", &m21966_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3848_PIs[] =
{
	&t3848____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3848____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3848_m21962_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21962_GM;
MethodInfo m21962_MI = 
{
	".ctor", (methodPointerType)&m21962, &t3848_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3848_m21962_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21962_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21963_GM;
MethodInfo m21963_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21963, &t3848_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21963_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21964_GM;
MethodInfo m21964_MI = 
{
	"Dispose", (methodPointerType)&m21964, &t3848_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21964_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21965_GM;
MethodInfo m21965_MI = 
{
	"MoveNext", (methodPointerType)&m21965, &t3848_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21965_GM};
extern Il2CppType t1047_0_0_0;
extern void* RuntimeInvoker_t1047 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21966_GM;
MethodInfo m21966_MI = 
{
	"get_Current", (methodPointerType)&m21966, &t3848_TI, &t1047_0_0_0, RuntimeInvoker_t1047, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21966_GM};
static MethodInfo* t3848_MIs[] =
{
	&m21962_MI,
	&m21963_MI,
	&m21964_MI,
	&m21965_MI,
	&m21966_MI,
	NULL
};
static MethodInfo* t3848_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21963_MI,
	&m21965_MI,
	&m21964_MI,
	&m21966_MI,
};
static TypeInfo* t3848_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5319_TI,
};
static Il2CppInterfaceOffsetPair t3848_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5319_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3848_0_0_0;
extern Il2CppType t3848_1_0_0;
extern Il2CppGenericClass t3848_GC;
TypeInfo t3848_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3848_MIs, t3848_PIs, t3848_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3848_TI, t3848_ITIs, t3848_VT, &EmptyCustomAttributesCache, &t3848_TI, &t3848_0_0_0, &t3848_1_0_0, t3848_IOs, &t3848_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3848)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6723_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreLocation>
extern MethodInfo m36092_MI;
static PropertyInfo t6723____Count_PropertyInfo = 
{
	&t6723_TI, "Count", &m36092_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36093_MI;
static PropertyInfo t6723____IsReadOnly_PropertyInfo = 
{
	&t6723_TI, "IsReadOnly", &m36093_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6723_PIs[] =
{
	&t6723____Count_PropertyInfo,
	&t6723____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36092_GM;
MethodInfo m36092_MI = 
{
	"get_Count", NULL, &t6723_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36092_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36093_GM;
MethodInfo m36093_MI = 
{
	"get_IsReadOnly", NULL, &t6723_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36093_GM};
extern Il2CppType t1047_0_0_0;
extern Il2CppType t1047_0_0_0;
static ParameterInfo t6723_m36094_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1047_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36094_GM;
MethodInfo m36094_MI = 
{
	"Add", NULL, &t6723_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6723_m36094_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36094_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36095_GM;
MethodInfo m36095_MI = 
{
	"Clear", NULL, &t6723_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36095_GM};
extern Il2CppType t1047_0_0_0;
static ParameterInfo t6723_m36096_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1047_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36096_GM;
MethodInfo m36096_MI = 
{
	"Contains", NULL, &t6723_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6723_m36096_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36096_GM};
extern Il2CppType t4581_0_0_0;
extern Il2CppType t4581_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6723_m36097_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4581_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36097_GM;
MethodInfo m36097_MI = 
{
	"CopyTo", NULL, &t6723_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6723_m36097_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36097_GM};
extern Il2CppType t1047_0_0_0;
static ParameterInfo t6723_m36098_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1047_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36098_GM;
MethodInfo m36098_MI = 
{
	"Remove", NULL, &t6723_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6723_m36098_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36098_GM};
static MethodInfo* t6723_MIs[] =
{
	&m36092_MI,
	&m36093_MI,
	&m36094_MI,
	&m36095_MI,
	&m36096_MI,
	&m36097_MI,
	&m36098_MI,
	NULL
};
extern TypeInfo t6725_TI;
static TypeInfo* t6723_ITIs[] = 
{
	&t739_TI,
	&t6725_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6723_0_0_0;
extern Il2CppType t6723_1_0_0;
struct t6723;
extern Il2CppGenericClass t6723_GC;
TypeInfo t6723_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6723_MIs, t6723_PIs, NULL, NULL, NULL, NULL, NULL, &t6723_TI, t6723_ITIs, NULL, &EmptyCustomAttributesCache, &t6723_TI, &t6723_0_0_0, &t6723_1_0_0, NULL, &t6723_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.StoreLocation>
extern Il2CppType t5319_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36099_GM;
MethodInfo m36099_MI = 
{
	"GetEnumerator", NULL, &t6725_TI, &t5319_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36099_GM};
static MethodInfo* t6725_MIs[] =
{
	&m36099_MI,
	NULL
};
static TypeInfo* t6725_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6725_0_0_0;
extern Il2CppType t6725_1_0_0;
struct t6725;
extern Il2CppGenericClass t6725_GC;
TypeInfo t6725_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6725_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6725_TI, t6725_ITIs, NULL, &EmptyCustomAttributesCache, &t6725_TI, &t6725_0_0_0, &t6725_1_0_0, NULL, &t6725_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6724_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.StoreLocation>
extern MethodInfo m36100_MI;
extern MethodInfo m36101_MI;
static PropertyInfo t6724____Item_PropertyInfo = 
{
	&t6724_TI, "Item", &m36100_MI, &m36101_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6724_PIs[] =
{
	&t6724____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1047_0_0_0;
static ParameterInfo t6724_m36102_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1047_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36102_GM;
MethodInfo m36102_MI = 
{
	"IndexOf", NULL, &t6724_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6724_m36102_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36102_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1047_0_0_0;
static ParameterInfo t6724_m36103_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1047_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36103_GM;
MethodInfo m36103_MI = 
{
	"Insert", NULL, &t6724_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6724_m36103_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36103_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6724_m36104_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36104_GM;
MethodInfo m36104_MI = 
{
	"RemoveAt", NULL, &t6724_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6724_m36104_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36104_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6724_m36100_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1047_0_0_0;
extern void* RuntimeInvoker_t1047_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36100_GM;
MethodInfo m36100_MI = 
{
	"get_Item", NULL, &t6724_TI, &t1047_0_0_0, RuntimeInvoker_t1047_t110, t6724_m36100_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36100_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1047_0_0_0;
static ParameterInfo t6724_m36101_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1047_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36101_GM;
MethodInfo m36101_MI = 
{
	"set_Item", NULL, &t6724_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6724_m36101_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36101_GM};
static MethodInfo* t6724_MIs[] =
{
	&m36102_MI,
	&m36103_MI,
	&m36104_MI,
	&m36100_MI,
	&m36101_MI,
	NULL
};
static TypeInfo* t6724_ITIs[] = 
{
	&t739_TI,
	&t6723_TI,
	&t6725_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6724_0_0_0;
extern Il2CppType t6724_1_0_0;
struct t6724;
extern Il2CppGenericClass t6724_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6724_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6724_MIs, t6724_PIs, NULL, NULL, NULL, NULL, NULL, &t6724_TI, t6724_ITIs, NULL, &t2240__CustomAttributeCache, &t6724_TI, &t6724_0_0_0, &t6724_1_0_0, NULL, &t6724_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5321_TI;

#include "t1048.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.StoreName>
extern MethodInfo m36105_MI;
static PropertyInfo t5321____Current_PropertyInfo = 
{
	&t5321_TI, "Current", &m36105_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5321_PIs[] =
{
	&t5321____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1048_0_0_0;
extern void* RuntimeInvoker_t1048 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36105_GM;
MethodInfo m36105_MI = 
{
	"get_Current", NULL, &t5321_TI, &t1048_0_0_0, RuntimeInvoker_t1048, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36105_GM};
static MethodInfo* t5321_MIs[] =
{
	&m36105_MI,
	NULL
};
static TypeInfo* t5321_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5321_0_0_0;
extern Il2CppType t5321_1_0_0;
struct t5321;
extern Il2CppGenericClass t5321_GC;
TypeInfo t5321_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5321_MIs, t5321_PIs, NULL, NULL, NULL, NULL, NULL, &t5321_TI, t5321_ITIs, NULL, &EmptyCustomAttributesCache, &t5321_TI, &t5321_0_0_0, &t5321_1_0_0, NULL, &t5321_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3849.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3849_TI;
#include "t3849MD.h"

extern TypeInfo t1048_TI;
extern MethodInfo m21971_MI;
extern MethodInfo m28137_MI;
struct t107;
 int32_t m28137 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21967_MI;
 void m21967 (t3849 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21968_MI;
 t5 * m21968 (t3849 * __this, MethodInfo* method){
	{
		int32_t L_0 = m21971(__this, &m21971_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1048_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m21969_MI;
 void m21969 (t3849 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21970_MI;
 bool m21970 (t3849 * __this, MethodInfo* method){
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
 int32_t m21971 (t3849 * __this, MethodInfo* method){
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
		int32_t L_8 = m28137(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28137_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreName>
extern Il2CppType t107_0_0_1;
FieldInfo t3849_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3849_TI, offsetof(t3849, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3849_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3849_TI, offsetof(t3849, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3849_FIs[] =
{
	&t3849_f0_FieldInfo,
	&t3849_f1_FieldInfo,
	NULL
};
static PropertyInfo t3849____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3849_TI, "System.Collections.IEnumerator.Current", &m21968_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3849____Current_PropertyInfo = 
{
	&t3849_TI, "Current", &m21971_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3849_PIs[] =
{
	&t3849____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3849____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3849_m21967_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21967_GM;
MethodInfo m21967_MI = 
{
	".ctor", (methodPointerType)&m21967, &t3849_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3849_m21967_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21967_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21968_GM;
MethodInfo m21968_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21968, &t3849_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21968_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21969_GM;
MethodInfo m21969_MI = 
{
	"Dispose", (methodPointerType)&m21969, &t3849_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21969_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21970_GM;
MethodInfo m21970_MI = 
{
	"MoveNext", (methodPointerType)&m21970, &t3849_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21970_GM};
extern Il2CppType t1048_0_0_0;
extern void* RuntimeInvoker_t1048 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21971_GM;
MethodInfo m21971_MI = 
{
	"get_Current", (methodPointerType)&m21971, &t3849_TI, &t1048_0_0_0, RuntimeInvoker_t1048, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21971_GM};
static MethodInfo* t3849_MIs[] =
{
	&m21967_MI,
	&m21968_MI,
	&m21969_MI,
	&m21970_MI,
	&m21971_MI,
	NULL
};
static MethodInfo* t3849_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21968_MI,
	&m21970_MI,
	&m21969_MI,
	&m21971_MI,
};
static TypeInfo* t3849_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5321_TI,
};
static Il2CppInterfaceOffsetPair t3849_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5321_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3849_0_0_0;
extern Il2CppType t3849_1_0_0;
extern Il2CppGenericClass t3849_GC;
TypeInfo t3849_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3849_MIs, t3849_PIs, t3849_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3849_TI, t3849_ITIs, t3849_VT, &EmptyCustomAttributesCache, &t3849_TI, &t3849_0_0_0, &t3849_1_0_0, t3849_IOs, &t3849_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3849)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6726_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreName>
extern MethodInfo m36106_MI;
static PropertyInfo t6726____Count_PropertyInfo = 
{
	&t6726_TI, "Count", &m36106_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36107_MI;
static PropertyInfo t6726____IsReadOnly_PropertyInfo = 
{
	&t6726_TI, "IsReadOnly", &m36107_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6726_PIs[] =
{
	&t6726____Count_PropertyInfo,
	&t6726____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36106_GM;
MethodInfo m36106_MI = 
{
	"get_Count", NULL, &t6726_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36106_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36107_GM;
MethodInfo m36107_MI = 
{
	"get_IsReadOnly", NULL, &t6726_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36107_GM};
extern Il2CppType t1048_0_0_0;
extern Il2CppType t1048_0_0_0;
static ParameterInfo t6726_m36108_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1048_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36108_GM;
MethodInfo m36108_MI = 
{
	"Add", NULL, &t6726_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6726_m36108_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36108_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36109_GM;
MethodInfo m36109_MI = 
{
	"Clear", NULL, &t6726_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36109_GM};
extern Il2CppType t1048_0_0_0;
static ParameterInfo t6726_m36110_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1048_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36110_GM;
MethodInfo m36110_MI = 
{
	"Contains", NULL, &t6726_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6726_m36110_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36110_GM};
extern Il2CppType t4582_0_0_0;
extern Il2CppType t4582_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6726_m36111_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4582_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36111_GM;
MethodInfo m36111_MI = 
{
	"CopyTo", NULL, &t6726_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6726_m36111_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36111_GM};
extern Il2CppType t1048_0_0_0;
static ParameterInfo t6726_m36112_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1048_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36112_GM;
MethodInfo m36112_MI = 
{
	"Remove", NULL, &t6726_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6726_m36112_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36112_GM};
static MethodInfo* t6726_MIs[] =
{
	&m36106_MI,
	&m36107_MI,
	&m36108_MI,
	&m36109_MI,
	&m36110_MI,
	&m36111_MI,
	&m36112_MI,
	NULL
};
extern TypeInfo t6728_TI;
static TypeInfo* t6726_ITIs[] = 
{
	&t739_TI,
	&t6728_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6726_0_0_0;
extern Il2CppType t6726_1_0_0;
struct t6726;
extern Il2CppGenericClass t6726_GC;
TypeInfo t6726_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6726_MIs, t6726_PIs, NULL, NULL, NULL, NULL, NULL, &t6726_TI, t6726_ITIs, NULL, &EmptyCustomAttributesCache, &t6726_TI, &t6726_0_0_0, &t6726_1_0_0, NULL, &t6726_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.StoreName>
extern Il2CppType t5321_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36113_GM;
MethodInfo m36113_MI = 
{
	"GetEnumerator", NULL, &t6728_TI, &t5321_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36113_GM};
static MethodInfo* t6728_MIs[] =
{
	&m36113_MI,
	NULL
};
static TypeInfo* t6728_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6728_0_0_0;
extern Il2CppType t6728_1_0_0;
struct t6728;
extern Il2CppGenericClass t6728_GC;
TypeInfo t6728_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6728_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6728_TI, t6728_ITIs, NULL, &EmptyCustomAttributesCache, &t6728_TI, &t6728_0_0_0, &t6728_1_0_0, NULL, &t6728_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6727_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.StoreName>
extern MethodInfo m36114_MI;
extern MethodInfo m36115_MI;
static PropertyInfo t6727____Item_PropertyInfo = 
{
	&t6727_TI, "Item", &m36114_MI, &m36115_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6727_PIs[] =
{
	&t6727____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1048_0_0_0;
static ParameterInfo t6727_m36116_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1048_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36116_GM;
MethodInfo m36116_MI = 
{
	"IndexOf", NULL, &t6727_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6727_m36116_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36116_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1048_0_0_0;
static ParameterInfo t6727_m36117_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1048_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36117_GM;
MethodInfo m36117_MI = 
{
	"Insert", NULL, &t6727_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6727_m36117_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36117_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6727_m36118_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36118_GM;
MethodInfo m36118_MI = 
{
	"RemoveAt", NULL, &t6727_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6727_m36118_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36118_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6727_m36114_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1048_0_0_0;
extern void* RuntimeInvoker_t1048_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36114_GM;
MethodInfo m36114_MI = 
{
	"get_Item", NULL, &t6727_TI, &t1048_0_0_0, RuntimeInvoker_t1048_t110, t6727_m36114_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36114_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1048_0_0_0;
static ParameterInfo t6727_m36115_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1048_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36115_GM;
MethodInfo m36115_MI = 
{
	"set_Item", NULL, &t6727_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6727_m36115_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36115_GM};
static MethodInfo* t6727_MIs[] =
{
	&m36116_MI,
	&m36117_MI,
	&m36118_MI,
	&m36114_MI,
	&m36115_MI,
	NULL
};
static TypeInfo* t6727_ITIs[] = 
{
	&t739_TI,
	&t6726_TI,
	&t6728_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6727_0_0_0;
extern Il2CppType t6727_1_0_0;
struct t6727;
extern Il2CppGenericClass t6727_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6727_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6727_MIs, t6727_PIs, NULL, NULL, NULL, NULL, NULL, &t6727_TI, t6727_ITIs, NULL, &t2240__CustomAttributeCache, &t6727_TI, &t6727_0_0_0, &t6727_1_0_0, NULL, &t6727_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5323_TI;

#include "t1050.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>
extern MethodInfo m36119_MI;
static PropertyInfo t5323____Current_PropertyInfo = 
{
	&t5323_TI, "Current", &m36119_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5323_PIs[] =
{
	&t5323____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1050_0_0_0;
extern void* RuntimeInvoker_t1050 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36119_GM;
MethodInfo m36119_MI = 
{
	"get_Current", NULL, &t5323_TI, &t1050_0_0_0, RuntimeInvoker_t1050, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36119_GM};
static MethodInfo* t5323_MIs[] =
{
	&m36119_MI,
	NULL
};
static TypeInfo* t5323_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5323_0_0_0;
extern Il2CppType t5323_1_0_0;
struct t5323;
extern Il2CppGenericClass t5323_GC;
TypeInfo t5323_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5323_MIs, t5323_PIs, NULL, NULL, NULL, NULL, NULL, &t5323_TI, t5323_ITIs, NULL, &EmptyCustomAttributesCache, &t5323_TI, &t5323_0_0_0, &t5323_1_0_0, NULL, &t5323_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3850.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3850_TI;
#include "t3850MD.h"

extern TypeInfo t1050_TI;
extern MethodInfo m21976_MI;
extern MethodInfo m28148_MI;
struct t107;
 int32_t m28148 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21972_MI;
 void m21972 (t3850 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21973_MI;
 t5 * m21973 (t3850 * __this, MethodInfo* method){
	{
		int32_t L_0 = m21976(__this, &m21976_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1050_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m21974_MI;
 void m21974 (t3850 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21975_MI;
 bool m21975 (t3850 * __this, MethodInfo* method){
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
 int32_t m21976 (t3850 * __this, MethodInfo* method){
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
		int32_t L_8 = m28148(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28148_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>
extern Il2CppType t107_0_0_1;
FieldInfo t3850_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3850_TI, offsetof(t3850, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3850_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3850_TI, offsetof(t3850, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3850_FIs[] =
{
	&t3850_f0_FieldInfo,
	&t3850_f1_FieldInfo,
	NULL
};
static PropertyInfo t3850____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3850_TI, "System.Collections.IEnumerator.Current", &m21973_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3850____Current_PropertyInfo = 
{
	&t3850_TI, "Current", &m21976_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3850_PIs[] =
{
	&t3850____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3850____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3850_m21972_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21972_GM;
MethodInfo m21972_MI = 
{
	".ctor", (methodPointerType)&m21972, &t3850_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3850_m21972_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21972_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21973_GM;
MethodInfo m21973_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21973, &t3850_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21973_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21974_GM;
MethodInfo m21974_MI = 
{
	"Dispose", (methodPointerType)&m21974, &t3850_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21974_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21975_GM;
MethodInfo m21975_MI = 
{
	"MoveNext", (methodPointerType)&m21975, &t3850_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21975_GM};
extern Il2CppType t1050_0_0_0;
extern void* RuntimeInvoker_t1050 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21976_GM;
MethodInfo m21976_MI = 
{
	"get_Current", (methodPointerType)&m21976, &t3850_TI, &t1050_0_0_0, RuntimeInvoker_t1050, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21976_GM};
static MethodInfo* t3850_MIs[] =
{
	&m21972_MI,
	&m21973_MI,
	&m21974_MI,
	&m21975_MI,
	&m21976_MI,
	NULL
};
static MethodInfo* t3850_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21973_MI,
	&m21975_MI,
	&m21974_MI,
	&m21976_MI,
};
static TypeInfo* t3850_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5323_TI,
};
static Il2CppInterfaceOffsetPair t3850_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5323_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3850_0_0_0;
extern Il2CppType t3850_1_0_0;
extern Il2CppGenericClass t3850_GC;
TypeInfo t3850_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3850_MIs, t3850_PIs, t3850_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3850_TI, t3850_ITIs, t3850_VT, &EmptyCustomAttributesCache, &t3850_TI, &t3850_0_0_0, &t3850_1_0_0, t3850_IOs, &t3850_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3850)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6729_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>
extern MethodInfo m36120_MI;
static PropertyInfo t6729____Count_PropertyInfo = 
{
	&t6729_TI, "Count", &m36120_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36121_MI;
static PropertyInfo t6729____IsReadOnly_PropertyInfo = 
{
	&t6729_TI, "IsReadOnly", &m36121_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6729_PIs[] =
{
	&t6729____Count_PropertyInfo,
	&t6729____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36120_GM;
MethodInfo m36120_MI = 
{
	"get_Count", NULL, &t6729_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36120_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36121_GM;
MethodInfo m36121_MI = 
{
	"get_IsReadOnly", NULL, &t6729_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36121_GM};
extern Il2CppType t1050_0_0_0;
extern Il2CppType t1050_0_0_0;
static ParameterInfo t6729_m36122_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1050_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36122_GM;
MethodInfo m36122_MI = 
{
	"Add", NULL, &t6729_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6729_m36122_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36122_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36123_GM;
MethodInfo m36123_MI = 
{
	"Clear", NULL, &t6729_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36123_GM};
extern Il2CppType t1050_0_0_0;
static ParameterInfo t6729_m36124_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1050_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36124_GM;
MethodInfo m36124_MI = 
{
	"Contains", NULL, &t6729_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6729_m36124_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36124_GM};
extern Il2CppType t4583_0_0_0;
extern Il2CppType t4583_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6729_m36125_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4583_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36125_GM;
MethodInfo m36125_MI = 
{
	"CopyTo", NULL, &t6729_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6729_m36125_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36125_GM};
extern Il2CppType t1050_0_0_0;
static ParameterInfo t6729_m36126_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1050_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36126_GM;
MethodInfo m36126_MI = 
{
	"Remove", NULL, &t6729_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6729_m36126_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36126_GM};
static MethodInfo* t6729_MIs[] =
{
	&m36120_MI,
	&m36121_MI,
	&m36122_MI,
	&m36123_MI,
	&m36124_MI,
	&m36125_MI,
	&m36126_MI,
	NULL
};
extern TypeInfo t6731_TI;
static TypeInfo* t6729_ITIs[] = 
{
	&t739_TI,
	&t6731_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6729_0_0_0;
extern Il2CppType t6729_1_0_0;
struct t6729;
extern Il2CppGenericClass t6729_GC;
TypeInfo t6729_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6729_MIs, t6729_PIs, NULL, NULL, NULL, NULL, NULL, &t6729_TI, t6729_ITIs, NULL, &EmptyCustomAttributesCache, &t6729_TI, &t6729_0_0_0, &t6729_1_0_0, NULL, &t6729_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>
extern Il2CppType t5323_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36127_GM;
MethodInfo m36127_MI = 
{
	"GetEnumerator", NULL, &t6731_TI, &t5323_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36127_GM};
static MethodInfo* t6731_MIs[] =
{
	&m36127_MI,
	NULL
};
static TypeInfo* t6731_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6731_0_0_0;
extern Il2CppType t6731_1_0_0;
struct t6731;
extern Il2CppGenericClass t6731_GC;
TypeInfo t6731_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6731_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6731_TI, t6731_ITIs, NULL, &EmptyCustomAttributesCache, &t6731_TI, &t6731_0_0_0, &t6731_1_0_0, NULL, &t6731_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6730_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>
extern MethodInfo m36128_MI;
extern MethodInfo m36129_MI;
static PropertyInfo t6730____Item_PropertyInfo = 
{
	&t6730_TI, "Item", &m36128_MI, &m36129_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6730_PIs[] =
{
	&t6730____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1050_0_0_0;
static ParameterInfo t6730_m36130_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1050_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36130_GM;
MethodInfo m36130_MI = 
{
	"IndexOf", NULL, &t6730_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6730_m36130_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36130_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1050_0_0_0;
static ParameterInfo t6730_m36131_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1050_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36131_GM;
MethodInfo m36131_MI = 
{
	"Insert", NULL, &t6730_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6730_m36131_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36131_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6730_m36132_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36132_GM;
MethodInfo m36132_MI = 
{
	"RemoveAt", NULL, &t6730_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6730_m36132_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36132_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6730_m36128_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1050_0_0_0;
extern void* RuntimeInvoker_t1050_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36128_GM;
MethodInfo m36128_MI = 
{
	"get_Item", NULL, &t6730_TI, &t1050_0_0_0, RuntimeInvoker_t1050_t110, t6730_m36128_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36128_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1050_0_0_0;
static ParameterInfo t6730_m36129_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1050_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36129_GM;
MethodInfo m36129_MI = 
{
	"set_Item", NULL, &t6730_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6730_m36129_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36129_GM};
static MethodInfo* t6730_MIs[] =
{
	&m36130_MI,
	&m36131_MI,
	&m36132_MI,
	&m36128_MI,
	&m36129_MI,
	NULL
};
static TypeInfo* t6730_ITIs[] = 
{
	&t739_TI,
	&t6729_TI,
	&t6731_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6730_0_0_0;
extern Il2CppType t6730_1_0_0;
struct t6730;
extern Il2CppGenericClass t6730_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6730_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6730_MIs, t6730_PIs, NULL, NULL, NULL, NULL, NULL, &t6730_TI, t6730_ITIs, NULL, &t2240__CustomAttributeCache, &t6730_TI, &t6730_0_0_0, &t6730_1_0_0, NULL, &t6730_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5325_TI;

#include "t1008.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>
extern MethodInfo m36133_MI;
static PropertyInfo t5325____Current_PropertyInfo = 
{
	&t5325_TI, "Current", &m36133_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5325_PIs[] =
{
	&t5325____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1008_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36133_GM;
MethodInfo m36133_MI = 
{
	"get_Current", NULL, &t5325_TI, &t1008_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36133_GM};
static MethodInfo* t5325_MIs[] =
{
	&m36133_MI,
	NULL
};
static TypeInfo* t5325_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5325_0_0_0;
extern Il2CppType t5325_1_0_0;
struct t5325;
extern Il2CppGenericClass t5325_GC;
TypeInfo t5325_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5325_MIs, t5325_PIs, NULL, NULL, NULL, NULL, NULL, &t5325_TI, t5325_ITIs, NULL, &EmptyCustomAttributesCache, &t5325_TI, &t5325_0_0_0, &t5325_1_0_0, NULL, &t5325_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3851.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3851_TI;
#include "t3851MD.h"

extern TypeInfo t1008_TI;
extern MethodInfo m21981_MI;
extern MethodInfo m28159_MI;
struct t107;
#define m28159(__this, p0, method) (t1008 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>
extern Il2CppType t107_0_0_1;
FieldInfo t3851_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3851_TI, offsetof(t3851, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3851_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3851_TI, offsetof(t3851, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3851_FIs[] =
{
	&t3851_f0_FieldInfo,
	&t3851_f1_FieldInfo,
	NULL
};
extern MethodInfo m21978_MI;
static PropertyInfo t3851____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3851_TI, "System.Collections.IEnumerator.Current", &m21978_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3851____Current_PropertyInfo = 
{
	&t3851_TI, "Current", &m21981_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3851_PIs[] =
{
	&t3851____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3851____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3851_m21977_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21977_GM;
MethodInfo m21977_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3851_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3851_m21977_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21977_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21978_GM;
MethodInfo m21978_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3851_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21978_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21979_GM;
MethodInfo m21979_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3851_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21979_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21980_GM;
MethodInfo m21980_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3851_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21980_GM};
extern Il2CppType t1008_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21981_GM;
MethodInfo m21981_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3851_TI, &t1008_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21981_GM};
static MethodInfo* t3851_MIs[] =
{
	&m21977_MI,
	&m21978_MI,
	&m21979_MI,
	&m21980_MI,
	&m21981_MI,
	NULL
};
extern MethodInfo m21980_MI;
extern MethodInfo m21979_MI;
static MethodInfo* t3851_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21978_MI,
	&m21980_MI,
	&m21979_MI,
	&m21981_MI,
};
static TypeInfo* t3851_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5325_TI,
};
static Il2CppInterfaceOffsetPair t3851_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5325_TI, 7},
};
extern TypeInfo t1008_TI;
static Il2CppRGCTXData t3851_RGCTXData[3] = 
{
	&m21981_MI/* Method Usage */,
	&t1008_TI/* Class Usage */,
	&m28159_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3851_0_0_0;
extern Il2CppType t3851_1_0_0;
extern Il2CppGenericClass t3851_GC;
TypeInfo t3851_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3851_MIs, t3851_PIs, t3851_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3851_TI, t3851_ITIs, t3851_VT, &EmptyCustomAttributesCache, &t3851_TI, &t3851_0_0_0, &t3851_1_0_0, t3851_IOs, &t3851_GC, NULL, NULL, NULL, t3851_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3851)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6732_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>
extern MethodInfo m36134_MI;
static PropertyInfo t6732____Count_PropertyInfo = 
{
	&t6732_TI, "Count", &m36134_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36135_MI;
static PropertyInfo t6732____IsReadOnly_PropertyInfo = 
{
	&t6732_TI, "IsReadOnly", &m36135_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6732_PIs[] =
{
	&t6732____Count_PropertyInfo,
	&t6732____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36134_GM;
MethodInfo m36134_MI = 
{
	"get_Count", NULL, &t6732_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36134_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36135_GM;
MethodInfo m36135_MI = 
{
	"get_IsReadOnly", NULL, &t6732_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36135_GM};
extern Il2CppType t1008_0_0_0;
extern Il2CppType t1008_0_0_0;
static ParameterInfo t6732_m36136_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1008_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36136_GM;
MethodInfo m36136_MI = 
{
	"Add", NULL, &t6732_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6732_m36136_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36136_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36137_GM;
MethodInfo m36137_MI = 
{
	"Clear", NULL, &t6732_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36137_GM};
extern Il2CppType t1008_0_0_0;
static ParameterInfo t6732_m36138_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1008_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36138_GM;
MethodInfo m36138_MI = 
{
	"Contains", NULL, &t6732_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6732_m36138_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36138_GM};
extern Il2CppType t1064_0_0_0;
extern Il2CppType t1064_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6732_m36139_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1064_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36139_GM;
MethodInfo m36139_MI = 
{
	"CopyTo", NULL, &t6732_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6732_m36139_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36139_GM};
extern Il2CppType t1008_0_0_0;
static ParameterInfo t6732_m36140_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1008_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36140_GM;
MethodInfo m36140_MI = 
{
	"Remove", NULL, &t6732_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6732_m36140_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36140_GM};
static MethodInfo* t6732_MIs[] =
{
	&m36134_MI,
	&m36135_MI,
	&m36136_MI,
	&m36137_MI,
	&m36138_MI,
	&m36139_MI,
	&m36140_MI,
	NULL
};
extern TypeInfo t6734_TI;
static TypeInfo* t6732_ITIs[] = 
{
	&t739_TI,
	&t6734_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6732_0_0_0;
extern Il2CppType t6732_1_0_0;
struct t6732;
extern Il2CppGenericClass t6732_GC;
TypeInfo t6732_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6732_MIs, t6732_PIs, NULL, NULL, NULL, NULL, NULL, &t6732_TI, t6732_ITIs, NULL, &EmptyCustomAttributesCache, &t6732_TI, &t6732_0_0_0, &t6732_1_0_0, NULL, &t6732_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509Certificate>
extern Il2CppType t5325_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36141_GM;
MethodInfo m36141_MI = 
{
	"GetEnumerator", NULL, &t6734_TI, &t5325_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36141_GM};
static MethodInfo* t6734_MIs[] =
{
	&m36141_MI,
	NULL
};
static TypeInfo* t6734_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6734_0_0_0;
extern Il2CppType t6734_1_0_0;
struct t6734;
extern Il2CppGenericClass t6734_GC;
TypeInfo t6734_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6734_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6734_TI, t6734_ITIs, NULL, &EmptyCustomAttributesCache, &t6734_TI, &t6734_0_0_0, &t6734_1_0_0, NULL, &t6734_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6733_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>
extern MethodInfo m36142_MI;
extern MethodInfo m36143_MI;
static PropertyInfo t6733____Item_PropertyInfo = 
{
	&t6733_TI, "Item", &m36142_MI, &m36143_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6733_PIs[] =
{
	&t6733____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1008_0_0_0;
static ParameterInfo t6733_m36144_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1008_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36144_GM;
MethodInfo m36144_MI = 
{
	"IndexOf", NULL, &t6733_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6733_m36144_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36144_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1008_0_0_0;
static ParameterInfo t6733_m36145_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1008_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36145_GM;
MethodInfo m36145_MI = 
{
	"Insert", NULL, &t6733_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6733_m36145_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36145_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6733_m36146_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36146_GM;
MethodInfo m36146_MI = 
{
	"RemoveAt", NULL, &t6733_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6733_m36146_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36146_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6733_m36142_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1008_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36142_GM;
MethodInfo m36142_MI = 
{
	"get_Item", NULL, &t6733_TI, &t1008_0_0_0, RuntimeInvoker_t5_t110, t6733_m36142_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36142_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1008_0_0_0;
static ParameterInfo t6733_m36143_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1008_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36143_GM;
MethodInfo m36143_MI = 
{
	"set_Item", NULL, &t6733_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6733_m36143_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36143_GM};
static MethodInfo* t6733_MIs[] =
{
	&m36144_MI,
	&m36145_MI,
	&m36146_MI,
	&m36142_MI,
	&m36143_MI,
	NULL
};
static TypeInfo* t6733_ITIs[] = 
{
	&t739_TI,
	&t6732_TI,
	&t6734_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6733_0_0_0;
extern Il2CppType t6733_1_0_0;
struct t6733;
extern Il2CppGenericClass t6733_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6733_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6733_MIs, t6733_PIs, NULL, NULL, NULL, NULL, NULL, &t6733_TI, t6733_ITIs, NULL, &t2240__CustomAttributeCache, &t6733_TI, &t6733_0_0_0, &t6733_1_0_0, NULL, &t6733_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6735_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.IDeserializationCallback>
extern MethodInfo m36147_MI;
static PropertyInfo t6735____Count_PropertyInfo = 
{
	&t6735_TI, "Count", &m36147_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36148_MI;
static PropertyInfo t6735____IsReadOnly_PropertyInfo = 
{
	&t6735_TI, "IsReadOnly", &m36148_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6735_PIs[] =
{
	&t6735____Count_PropertyInfo,
	&t6735____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36147_GM;
MethodInfo m36147_MI = 
{
	"get_Count", NULL, &t6735_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36147_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36148_GM;
MethodInfo m36148_MI = 
{
	"get_IsReadOnly", NULL, &t6735_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36148_GM};
extern Il2CppType t1184_0_0_0;
extern Il2CppType t1184_0_0_0;
static ParameterInfo t6735_m36149_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1184_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36149_GM;
MethodInfo m36149_MI = 
{
	"Add", NULL, &t6735_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6735_m36149_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36149_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36150_GM;
MethodInfo m36150_MI = 
{
	"Clear", NULL, &t6735_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36150_GM};
extern Il2CppType t1184_0_0_0;
static ParameterInfo t6735_m36151_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1184_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36151_GM;
MethodInfo m36151_MI = 
{
	"Contains", NULL, &t6735_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6735_m36151_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36151_GM};
extern Il2CppType t4198_0_0_0;
extern Il2CppType t4198_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6735_m36152_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4198_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36152_GM;
MethodInfo m36152_MI = 
{
	"CopyTo", NULL, &t6735_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6735_m36152_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36152_GM};
extern Il2CppType t1184_0_0_0;
static ParameterInfo t6735_m36153_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1184_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36153_GM;
MethodInfo m36153_MI = 
{
	"Remove", NULL, &t6735_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6735_m36153_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36153_GM};
static MethodInfo* t6735_MIs[] =
{
	&m36147_MI,
	&m36148_MI,
	&m36149_MI,
	&m36150_MI,
	&m36151_MI,
	&m36152_MI,
	&m36153_MI,
	NULL
};
extern TypeInfo t6737_TI;
static TypeInfo* t6735_ITIs[] = 
{
	&t739_TI,
	&t6737_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6735_0_0_0;
extern Il2CppType t6735_1_0_0;
struct t6735;
extern Il2CppGenericClass t6735_GC;
TypeInfo t6735_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6735_MIs, t6735_PIs, NULL, NULL, NULL, NULL, NULL, &t6735_TI, t6735_ITIs, NULL, &EmptyCustomAttributesCache, &t6735_TI, &t6735_0_0_0, &t6735_1_0_0, NULL, &t6735_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.IDeserializationCallback>
extern Il2CppType t5327_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36154_GM;
MethodInfo m36154_MI = 
{
	"GetEnumerator", NULL, &t6737_TI, &t5327_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36154_GM};
static MethodInfo* t6737_MIs[] =
{
	&m36154_MI,
	NULL
};
static TypeInfo* t6737_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6737_0_0_0;
extern Il2CppType t6737_1_0_0;
struct t6737;
extern Il2CppGenericClass t6737_GC;
TypeInfo t6737_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6737_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6737_TI, t6737_ITIs, NULL, &EmptyCustomAttributesCache, &t6737_TI, &t6737_0_0_0, &t6737_1_0_0, NULL, &t6737_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5327_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.IDeserializationCallback>
extern MethodInfo m36155_MI;
static PropertyInfo t5327____Current_PropertyInfo = 
{
	&t5327_TI, "Current", &m36155_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5327_PIs[] =
{
	&t5327____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1184_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36155_GM;
MethodInfo m36155_MI = 
{
	"get_Current", NULL, &t5327_TI, &t1184_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36155_GM};
static MethodInfo* t5327_MIs[] =
{
	&m36155_MI,
	NULL
};
static TypeInfo* t5327_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5327_0_0_0;
extern Il2CppType t5327_1_0_0;
struct t5327;
extern Il2CppGenericClass t5327_GC;
TypeInfo t5327_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5327_MIs, t5327_PIs, NULL, NULL, NULL, NULL, NULL, &t5327_TI, t5327_ITIs, NULL, &EmptyCustomAttributesCache, &t5327_TI, &t5327_0_0_0, &t5327_1_0_0, NULL, &t5327_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3852.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3852_TI;
#include "t3852MD.h"

extern TypeInfo t1184_TI;
extern MethodInfo m21986_MI;
extern MethodInfo m28170_MI;
struct t107;
#define m28170(__this, p0, method) (t5 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.IDeserializationCallback>
extern Il2CppType t107_0_0_1;
FieldInfo t3852_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3852_TI, offsetof(t3852, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3852_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3852_TI, offsetof(t3852, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3852_FIs[] =
{
	&t3852_f0_FieldInfo,
	&t3852_f1_FieldInfo,
	NULL
};
extern MethodInfo m21983_MI;
static PropertyInfo t3852____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3852_TI, "System.Collections.IEnumerator.Current", &m21983_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3852____Current_PropertyInfo = 
{
	&t3852_TI, "Current", &m21986_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3852_PIs[] =
{
	&t3852____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3852____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3852_m21982_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21982_GM;
MethodInfo m21982_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3852_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3852_m21982_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21982_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21983_GM;
MethodInfo m21983_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3852_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21983_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21984_GM;
MethodInfo m21984_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3852_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21984_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21985_GM;
MethodInfo m21985_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3852_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21985_GM};
extern Il2CppType t1184_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21986_GM;
MethodInfo m21986_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3852_TI, &t1184_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21986_GM};
static MethodInfo* t3852_MIs[] =
{
	&m21982_MI,
	&m21983_MI,
	&m21984_MI,
	&m21985_MI,
	&m21986_MI,
	NULL
};
extern MethodInfo m21985_MI;
extern MethodInfo m21984_MI;
static MethodInfo* t3852_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21983_MI,
	&m21985_MI,
	&m21984_MI,
	&m21986_MI,
};
static TypeInfo* t3852_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5327_TI,
};
static Il2CppInterfaceOffsetPair t3852_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5327_TI, 7},
};
extern TypeInfo t1184_TI;
static Il2CppRGCTXData t3852_RGCTXData[3] = 
{
	&m21986_MI/* Method Usage */,
	&t1184_TI/* Class Usage */,
	&m28170_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3852_0_0_0;
extern Il2CppType t3852_1_0_0;
extern Il2CppGenericClass t3852_GC;
TypeInfo t3852_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3852_MIs, t3852_PIs, t3852_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3852_TI, t3852_ITIs, t3852_VT, &EmptyCustomAttributesCache, &t3852_TI, &t3852_0_0_0, &t3852_1_0_0, t3852_IOs, &t3852_GC, NULL, NULL, NULL, t3852_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3852)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6736_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.IDeserializationCallback>
extern MethodInfo m36156_MI;
extern MethodInfo m36157_MI;
static PropertyInfo t6736____Item_PropertyInfo = 
{
	&t6736_TI, "Item", &m36156_MI, &m36157_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6736_PIs[] =
{
	&t6736____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1184_0_0_0;
static ParameterInfo t6736_m36158_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1184_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36158_GM;
MethodInfo m36158_MI = 
{
	"IndexOf", NULL, &t6736_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6736_m36158_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36158_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1184_0_0_0;
static ParameterInfo t6736_m36159_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1184_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36159_GM;
MethodInfo m36159_MI = 
{
	"Insert", NULL, &t6736_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6736_m36159_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36159_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6736_m36160_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36160_GM;
MethodInfo m36160_MI = 
{
	"RemoveAt", NULL, &t6736_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6736_m36160_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36160_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6736_m36156_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1184_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36156_GM;
MethodInfo m36156_MI = 
{
	"get_Item", NULL, &t6736_TI, &t1184_0_0_0, RuntimeInvoker_t5_t110, t6736_m36156_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36156_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1184_0_0_0;
static ParameterInfo t6736_m36157_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1184_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36157_GM;
MethodInfo m36157_MI = 
{
	"set_Item", NULL, &t6736_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6736_m36157_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36157_GM};
static MethodInfo* t6736_MIs[] =
{
	&m36158_MI,
	&m36159_MI,
	&m36160_MI,
	&m36156_MI,
	&m36157_MI,
	NULL
};
static TypeInfo* t6736_ITIs[] = 
{
	&t739_TI,
	&t6735_TI,
	&t6737_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6736_0_0_0;
extern Il2CppType t6736_1_0_0;
struct t6736;
extern Il2CppGenericClass t6736_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6736_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6736_MIs, t6736_PIs, NULL, NULL, NULL, NULL, NULL, &t6736_TI, t6736_ITIs, NULL, &t2240__CustomAttributeCache, &t6736_TI, &t6736_0_0_0, &t6736_1_0_0, NULL, &t6736_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5329_TI;

#include "t1068.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
extern MethodInfo m36161_MI;
static PropertyInfo t5329____Current_PropertyInfo = 
{
	&t5329_TI, "Current", &m36161_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5329_PIs[] =
{
	&t5329____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1068_0_0_0;
extern void* RuntimeInvoker_t1068 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36161_GM;
MethodInfo m36161_MI = 
{
	"get_Current", NULL, &t5329_TI, &t1068_0_0_0, RuntimeInvoker_t1068, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36161_GM};
static MethodInfo* t5329_MIs[] =
{
	&m36161_MI,
	NULL
};
static TypeInfo* t5329_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5329_0_0_0;
extern Il2CppType t5329_1_0_0;
struct t5329;
extern Il2CppGenericClass t5329_GC;
TypeInfo t5329_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5329_MIs, t5329_PIs, NULL, NULL, NULL, NULL, NULL, &t5329_TI, t5329_ITIs, NULL, &EmptyCustomAttributesCache, &t5329_TI, &t5329_0_0_0, &t5329_1_0_0, NULL, &t5329_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3853.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3853_TI;
#include "t3853MD.h"

extern TypeInfo t1068_TI;
extern MethodInfo m21991_MI;
extern MethodInfo m28181_MI;
struct t107;
 t1068  m28181 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21987_MI;
 void m21987 (t3853 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21988_MI;
 t5 * m21988 (t3853 * __this, MethodInfo* method){
	{
		t1068  L_0 = m21991(__this, &m21991_MI);
		t1068  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1068_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m21989_MI;
 void m21989 (t3853 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21990_MI;
 bool m21990 (t3853 * __this, MethodInfo* method){
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
 t1068  m21991 (t3853 * __this, MethodInfo* method){
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
		t1068  L_8 = m28181(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28181_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
extern Il2CppType t107_0_0_1;
FieldInfo t3853_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3853_TI, offsetof(t3853, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3853_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3853_TI, offsetof(t3853, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3853_FIs[] =
{
	&t3853_f0_FieldInfo,
	&t3853_f1_FieldInfo,
	NULL
};
static PropertyInfo t3853____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3853_TI, "System.Collections.IEnumerator.Current", &m21988_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3853____Current_PropertyInfo = 
{
	&t3853_TI, "Current", &m21991_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3853_PIs[] =
{
	&t3853____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3853____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3853_m21987_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21987_GM;
MethodInfo m21987_MI = 
{
	".ctor", (methodPointerType)&m21987, &t3853_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3853_m21987_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21987_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21988_GM;
MethodInfo m21988_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21988, &t3853_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21988_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21989_GM;
MethodInfo m21989_MI = 
{
	"Dispose", (methodPointerType)&m21989, &t3853_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21989_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21990_GM;
MethodInfo m21990_MI = 
{
	"MoveNext", (methodPointerType)&m21990, &t3853_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21990_GM};
extern Il2CppType t1068_0_0_0;
extern void* RuntimeInvoker_t1068 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21991_GM;
MethodInfo m21991_MI = 
{
	"get_Current", (methodPointerType)&m21991, &t3853_TI, &t1068_0_0_0, RuntimeInvoker_t1068, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21991_GM};
static MethodInfo* t3853_MIs[] =
{
	&m21987_MI,
	&m21988_MI,
	&m21989_MI,
	&m21990_MI,
	&m21991_MI,
	NULL
};
static MethodInfo* t3853_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21988_MI,
	&m21990_MI,
	&m21989_MI,
	&m21991_MI,
};
static TypeInfo* t3853_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5329_TI,
};
static Il2CppInterfaceOffsetPair t3853_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5329_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3853_0_0_0;
extern Il2CppType t3853_1_0_0;
extern Il2CppGenericClass t3853_GC;
TypeInfo t3853_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3853_MIs, t3853_PIs, t3853_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3853_TI, t3853_ITIs, t3853_VT, &EmptyCustomAttributesCache, &t3853_TI, &t3853_0_0_0, &t3853_1_0_0, t3853_IOs, &t3853_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3853)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6738_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
extern MethodInfo m36162_MI;
static PropertyInfo t6738____Count_PropertyInfo = 
{
	&t6738_TI, "Count", &m36162_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36163_MI;
static PropertyInfo t6738____IsReadOnly_PropertyInfo = 
{
	&t6738_TI, "IsReadOnly", &m36163_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6738_PIs[] =
{
	&t6738____Count_PropertyInfo,
	&t6738____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36162_GM;
MethodInfo m36162_MI = 
{
	"get_Count", NULL, &t6738_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36162_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36163_GM;
MethodInfo m36163_MI = 
{
	"get_IsReadOnly", NULL, &t6738_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36163_GM};
extern Il2CppType t1068_0_0_0;
extern Il2CppType t1068_0_0_0;
static ParameterInfo t6738_m36164_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1068_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t1068 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36164_GM;
MethodInfo m36164_MI = 
{
	"Add", NULL, &t6738_TI, &t109_0_0_0, RuntimeInvoker_t109_t1068, t6738_m36164_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36164_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36165_GM;
MethodInfo m36165_MI = 
{
	"Clear", NULL, &t6738_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36165_GM};
extern Il2CppType t1068_0_0_0;
static ParameterInfo t6738_m36166_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1068_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t1068 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36166_GM;
MethodInfo m36166_MI = 
{
	"Contains", NULL, &t6738_TI, &t108_0_0_0, RuntimeInvoker_t108_t1068, t6738_m36166_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36166_GM};
extern Il2CppType t1067_0_0_0;
extern Il2CppType t1067_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6738_m36167_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1067_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36167_GM;
MethodInfo m36167_MI = 
{
	"CopyTo", NULL, &t6738_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6738_m36167_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36167_GM};
extern Il2CppType t1068_0_0_0;
static ParameterInfo t6738_m36168_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1068_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t1068 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36168_GM;
MethodInfo m36168_MI = 
{
	"Remove", NULL, &t6738_TI, &t108_0_0_0, RuntimeInvoker_t108_t1068, t6738_m36168_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36168_GM};
static MethodInfo* t6738_MIs[] =
{
	&m36162_MI,
	&m36163_MI,
	&m36164_MI,
	&m36165_MI,
	&m36166_MI,
	&m36167_MI,
	&m36168_MI,
	NULL
};
extern TypeInfo t6740_TI;
static TypeInfo* t6738_ITIs[] = 
{
	&t739_TI,
	&t6740_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6738_0_0_0;
extern Il2CppType t6738_1_0_0;
struct t6738;
extern Il2CppGenericClass t6738_GC;
TypeInfo t6738_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6738_MIs, t6738_PIs, NULL, NULL, NULL, NULL, NULL, &t6738_TI, t6738_ITIs, NULL, &EmptyCustomAttributesCache, &t6738_TI, &t6738_0_0_0, &t6738_1_0_0, NULL, &t6738_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
extern Il2CppType t5329_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36169_GM;
MethodInfo m36169_MI = 
{
	"GetEnumerator", NULL, &t6740_TI, &t5329_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36169_GM};
static MethodInfo* t6740_MIs[] =
{
	&m36169_MI,
	NULL
};
static TypeInfo* t6740_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6740_0_0_0;
extern Il2CppType t6740_1_0_0;
struct t6740;
extern Il2CppGenericClass t6740_GC;
TypeInfo t6740_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6740_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6740_TI, t6740_ITIs, NULL, &EmptyCustomAttributesCache, &t6740_TI, &t6740_0_0_0, &t6740_1_0_0, NULL, &t6740_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6739_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
extern MethodInfo m36170_MI;
extern MethodInfo m36171_MI;
static PropertyInfo t6739____Item_PropertyInfo = 
{
	&t6739_TI, "Item", &m36170_MI, &m36171_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6739_PIs[] =
{
	&t6739____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1068_0_0_0;
static ParameterInfo t6739_m36172_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1068_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t1068 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36172_GM;
MethodInfo m36172_MI = 
{
	"IndexOf", NULL, &t6739_TI, &t110_0_0_0, RuntimeInvoker_t110_t1068, t6739_m36172_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36172_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1068_0_0_0;
static ParameterInfo t6739_m36173_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1068_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t1068 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36173_GM;
MethodInfo m36173_MI = 
{
	"Insert", NULL, &t6739_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t1068, t6739_m36173_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36173_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6739_m36174_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36174_GM;
MethodInfo m36174_MI = 
{
	"RemoveAt", NULL, &t6739_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6739_m36174_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36174_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6739_m36170_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1068_0_0_0;
extern void* RuntimeInvoker_t1068_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36170_GM;
MethodInfo m36170_MI = 
{
	"get_Item", NULL, &t6739_TI, &t1068_0_0_0, RuntimeInvoker_t1068_t110, t6739_m36170_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36170_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1068_0_0_0;
static ParameterInfo t6739_m36171_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1068_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t1068 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36171_GM;
MethodInfo m36171_MI = 
{
	"set_Item", NULL, &t6739_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t1068, t6739_m36171_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36171_GM};
static MethodInfo* t6739_MIs[] =
{
	&m36172_MI,
	&m36173_MI,
	&m36174_MI,
	&m36170_MI,
	&m36171_MI,
	NULL
};
static TypeInfo* t6739_ITIs[] = 
{
	&t739_TI,
	&t6738_TI,
	&t6740_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6739_0_0_0;
extern Il2CppType t6739_1_0_0;
struct t6739;
extern Il2CppGenericClass t6739_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6739_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6739_MIs, t6739_PIs, NULL, NULL, NULL, NULL, NULL, &t6739_TI, t6739_ITIs, NULL, &t2240__CustomAttributeCache, &t6739_TI, &t6739_0_0_0, &t6739_1_0_0, NULL, &t6739_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5331_TI;

#include "t1074.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>
extern MethodInfo m36175_MI;
static PropertyInfo t5331____Current_PropertyInfo = 
{
	&t5331_TI, "Current", &m36175_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5331_PIs[] =
{
	&t5331____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1074_0_0_0;
extern void* RuntimeInvoker_t1074 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36175_GM;
MethodInfo m36175_MI = 
{
	"get_Current", NULL, &t5331_TI, &t1074_0_0_0, RuntimeInvoker_t1074, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36175_GM};
static MethodInfo* t5331_MIs[] =
{
	&m36175_MI,
	NULL
};
static TypeInfo* t5331_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5331_0_0_0;
extern Il2CppType t5331_1_0_0;
struct t5331;
extern Il2CppGenericClass t5331_GC;
TypeInfo t5331_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5331_MIs, t5331_PIs, NULL, NULL, NULL, NULL, NULL, &t5331_TI, t5331_ITIs, NULL, &EmptyCustomAttributesCache, &t5331_TI, &t5331_0_0_0, &t5331_1_0_0, NULL, &t5331_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3854.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3854_TI;
#include "t3854MD.h"

extern TypeInfo t1074_TI;
extern MethodInfo m21996_MI;
extern MethodInfo m28192_MI;
struct t107;
 int32_t m28192 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21992_MI;
 void m21992 (t3854 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21993_MI;
 t5 * m21993 (t3854 * __this, MethodInfo* method){
	{
		int32_t L_0 = m21996(__this, &m21996_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1074_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m21994_MI;
 void m21994 (t3854 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21995_MI;
 bool m21995 (t3854 * __this, MethodInfo* method){
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
 int32_t m21996 (t3854 * __this, MethodInfo* method){
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
		int32_t L_8 = m28192(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28192_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>
extern Il2CppType t107_0_0_1;
FieldInfo t3854_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3854_TI, offsetof(t3854, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3854_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3854_TI, offsetof(t3854, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3854_FIs[] =
{
	&t3854_f0_FieldInfo,
	&t3854_f1_FieldInfo,
	NULL
};
static PropertyInfo t3854____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3854_TI, "System.Collections.IEnumerator.Current", &m21993_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3854____Current_PropertyInfo = 
{
	&t3854_TI, "Current", &m21996_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3854_PIs[] =
{
	&t3854____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3854____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3854_m21992_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21992_GM;
MethodInfo m21992_MI = 
{
	".ctor", (methodPointerType)&m21992, &t3854_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3854_m21992_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21992_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21993_GM;
MethodInfo m21993_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21993, &t3854_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21993_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21994_GM;
MethodInfo m21994_MI = 
{
	"Dispose", (methodPointerType)&m21994, &t3854_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21994_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21995_GM;
MethodInfo m21995_MI = 
{
	"MoveNext", (methodPointerType)&m21995, &t3854_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21995_GM};
extern Il2CppType t1074_0_0_0;
extern void* RuntimeInvoker_t1074 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21996_GM;
MethodInfo m21996_MI = 
{
	"get_Current", (methodPointerType)&m21996, &t3854_TI, &t1074_0_0_0, RuntimeInvoker_t1074, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21996_GM};
static MethodInfo* t3854_MIs[] =
{
	&m21992_MI,
	&m21993_MI,
	&m21994_MI,
	&m21995_MI,
	&m21996_MI,
	NULL
};
static MethodInfo* t3854_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21993_MI,
	&m21995_MI,
	&m21994_MI,
	&m21996_MI,
};
static TypeInfo* t3854_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5331_TI,
};
static Il2CppInterfaceOffsetPair t3854_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5331_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3854_0_0_0;
extern Il2CppType t3854_1_0_0;
extern Il2CppGenericClass t3854_GC;
TypeInfo t3854_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3854_MIs, t3854_PIs, t3854_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3854_TI, t3854_ITIs, t3854_VT, &EmptyCustomAttributesCache, &t3854_TI, &t3854_0_0_0, &t3854_1_0_0, t3854_IOs, &t3854_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3854)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6741_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>
extern MethodInfo m36176_MI;
static PropertyInfo t6741____Count_PropertyInfo = 
{
	&t6741_TI, "Count", &m36176_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36177_MI;
static PropertyInfo t6741____IsReadOnly_PropertyInfo = 
{
	&t6741_TI, "IsReadOnly", &m36177_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6741_PIs[] =
{
	&t6741____Count_PropertyInfo,
	&t6741____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36176_GM;
MethodInfo m36176_MI = 
{
	"get_Count", NULL, &t6741_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36176_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36177_GM;
MethodInfo m36177_MI = 
{
	"get_IsReadOnly", NULL, &t6741_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36177_GM};
extern Il2CppType t1074_0_0_0;
extern Il2CppType t1074_0_0_0;
static ParameterInfo t6741_m36178_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1074_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36178_GM;
MethodInfo m36178_MI = 
{
	"Add", NULL, &t6741_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6741_m36178_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36178_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36179_GM;
MethodInfo m36179_MI = 
{
	"Clear", NULL, &t6741_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36179_GM};
extern Il2CppType t1074_0_0_0;
static ParameterInfo t6741_m36180_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1074_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36180_GM;
MethodInfo m36180_MI = 
{
	"Contains", NULL, &t6741_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6741_m36180_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36180_GM};
extern Il2CppType t4584_0_0_0;
extern Il2CppType t4584_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6741_m36181_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4584_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36181_GM;
MethodInfo m36181_MI = 
{
	"CopyTo", NULL, &t6741_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6741_m36181_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36181_GM};
extern Il2CppType t1074_0_0_0;
static ParameterInfo t6741_m36182_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1074_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36182_GM;
MethodInfo m36182_MI = 
{
	"Remove", NULL, &t6741_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6741_m36182_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36182_GM};
static MethodInfo* t6741_MIs[] =
{
	&m36176_MI,
	&m36177_MI,
	&m36178_MI,
	&m36179_MI,
	&m36180_MI,
	&m36181_MI,
	&m36182_MI,
	NULL
};
extern TypeInfo t6743_TI;
static TypeInfo* t6741_ITIs[] = 
{
	&t739_TI,
	&t6743_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6741_0_0_0;
extern Il2CppType t6741_1_0_0;
struct t6741;
extern Il2CppGenericClass t6741_GC;
TypeInfo t6741_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6741_MIs, t6741_PIs, NULL, NULL, NULL, NULL, NULL, &t6741_TI, t6741_ITIs, NULL, &EmptyCustomAttributesCache, &t6741_TI, &t6741_0_0_0, &t6741_1_0_0, NULL, &t6741_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>
extern Il2CppType t5331_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36183_GM;
MethodInfo m36183_MI = 
{
	"GetEnumerator", NULL, &t6743_TI, &t5331_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36183_GM};
static MethodInfo* t6743_MIs[] =
{
	&m36183_MI,
	NULL
};
static TypeInfo* t6743_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6743_0_0_0;
extern Il2CppType t6743_1_0_0;
struct t6743;
extern Il2CppGenericClass t6743_GC;
TypeInfo t6743_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6743_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6743_TI, t6743_ITIs, NULL, &EmptyCustomAttributesCache, &t6743_TI, &t6743_0_0_0, &t6743_1_0_0, NULL, &t6743_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6742_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>
extern MethodInfo m36184_MI;
extern MethodInfo m36185_MI;
static PropertyInfo t6742____Item_PropertyInfo = 
{
	&t6742_TI, "Item", &m36184_MI, &m36185_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6742_PIs[] =
{
	&t6742____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1074_0_0_0;
static ParameterInfo t6742_m36186_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1074_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36186_GM;
MethodInfo m36186_MI = 
{
	"IndexOf", NULL, &t6742_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6742_m36186_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36186_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1074_0_0_0;
static ParameterInfo t6742_m36187_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1074_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36187_GM;
MethodInfo m36187_MI = 
{
	"Insert", NULL, &t6742_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6742_m36187_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36187_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6742_m36188_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36188_GM;
MethodInfo m36188_MI = 
{
	"RemoveAt", NULL, &t6742_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6742_m36188_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36188_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6742_m36184_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1074_0_0_0;
extern void* RuntimeInvoker_t1074_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36184_GM;
MethodInfo m36184_MI = 
{
	"get_Item", NULL, &t6742_TI, &t1074_0_0_0, RuntimeInvoker_t1074_t110, t6742_m36184_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36184_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1074_0_0_0;
static ParameterInfo t6742_m36185_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1074_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36185_GM;
MethodInfo m36185_MI = 
{
	"set_Item", NULL, &t6742_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6742_m36185_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36185_GM};
static MethodInfo* t6742_MIs[] =
{
	&m36186_MI,
	&m36187_MI,
	&m36188_MI,
	&m36184_MI,
	&m36185_MI,
	NULL
};
static TypeInfo* t6742_ITIs[] = 
{
	&t739_TI,
	&t6741_TI,
	&t6743_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6742_0_0_0;
extern Il2CppType t6742_1_0_0;
struct t6742;
extern Il2CppGenericClass t6742_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6742_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6742_MIs, t6742_PIs, NULL, NULL, NULL, NULL, NULL, &t6742_TI, t6742_ITIs, NULL, &t2240__CustomAttributeCache, &t6742_TI, &t6742_0_0_0, &t6742_1_0_0, NULL, &t6742_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5333_TI;

#include "t1061.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509FindType>
extern MethodInfo m36189_MI;
static PropertyInfo t5333____Current_PropertyInfo = 
{
	&t5333_TI, "Current", &m36189_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5333_PIs[] =
{
	&t5333____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1061_0_0_0;
extern void* RuntimeInvoker_t1061 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36189_GM;
MethodInfo m36189_MI = 
{
	"get_Current", NULL, &t5333_TI, &t1061_0_0_0, RuntimeInvoker_t1061, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36189_GM};
static MethodInfo* t5333_MIs[] =
{
	&m36189_MI,
	NULL
};
static TypeInfo* t5333_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5333_0_0_0;
extern Il2CppType t5333_1_0_0;
struct t5333;
extern Il2CppGenericClass t5333_GC;
TypeInfo t5333_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5333_MIs, t5333_PIs, NULL, NULL, NULL, NULL, NULL, &t5333_TI, t5333_ITIs, NULL, &EmptyCustomAttributesCache, &t5333_TI, &t5333_0_0_0, &t5333_1_0_0, NULL, &t5333_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3855.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3855_TI;
#include "t3855MD.h"

extern TypeInfo t1061_TI;
extern MethodInfo m22001_MI;
extern MethodInfo m28203_MI;
struct t107;
 int32_t m28203 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21997_MI;
 void m21997 (t3855 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21998_MI;
 t5 * m21998 (t3855 * __this, MethodInfo* method){
	{
		int32_t L_0 = m22001(__this, &m22001_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1061_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m21999_MI;
 void m21999 (t3855 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22000_MI;
 bool m22000 (t3855 * __this, MethodInfo* method){
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
 int32_t m22001 (t3855 * __this, MethodInfo* method){
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
		int32_t L_8 = m28203(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28203_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509FindType>
extern Il2CppType t107_0_0_1;
FieldInfo t3855_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3855_TI, offsetof(t3855, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3855_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3855_TI, offsetof(t3855, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3855_FIs[] =
{
	&t3855_f0_FieldInfo,
	&t3855_f1_FieldInfo,
	NULL
};
static PropertyInfo t3855____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3855_TI, "System.Collections.IEnumerator.Current", &m21998_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3855____Current_PropertyInfo = 
{
	&t3855_TI, "Current", &m22001_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3855_PIs[] =
{
	&t3855____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3855____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3855_m21997_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21997_GM;
MethodInfo m21997_MI = 
{
	".ctor", (methodPointerType)&m21997, &t3855_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3855_m21997_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21997_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21998_GM;
MethodInfo m21998_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21998, &t3855_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21998_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21999_GM;
MethodInfo m21999_MI = 
{
	"Dispose", (methodPointerType)&m21999, &t3855_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21999_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22000_GM;
MethodInfo m22000_MI = 
{
	"MoveNext", (methodPointerType)&m22000, &t3855_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22000_GM};
extern Il2CppType t1061_0_0_0;
extern void* RuntimeInvoker_t1061 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22001_GM;
MethodInfo m22001_MI = 
{
	"get_Current", (methodPointerType)&m22001, &t3855_TI, &t1061_0_0_0, RuntimeInvoker_t1061, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22001_GM};
static MethodInfo* t3855_MIs[] =
{
	&m21997_MI,
	&m21998_MI,
	&m21999_MI,
	&m22000_MI,
	&m22001_MI,
	NULL
};
static MethodInfo* t3855_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21998_MI,
	&m22000_MI,
	&m21999_MI,
	&m22001_MI,
};
static TypeInfo* t3855_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5333_TI,
};
static Il2CppInterfaceOffsetPair t3855_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5333_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3855_0_0_0;
extern Il2CppType t3855_1_0_0;
extern Il2CppGenericClass t3855_GC;
TypeInfo t3855_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3855_MIs, t3855_PIs, t3855_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3855_TI, t3855_ITIs, t3855_VT, &EmptyCustomAttributesCache, &t3855_TI, &t3855_0_0_0, &t3855_1_0_0, t3855_IOs, &t3855_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3855)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6744_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509FindType>
extern MethodInfo m36190_MI;
static PropertyInfo t6744____Count_PropertyInfo = 
{
	&t6744_TI, "Count", &m36190_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36191_MI;
static PropertyInfo t6744____IsReadOnly_PropertyInfo = 
{
	&t6744_TI, "IsReadOnly", &m36191_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6744_PIs[] =
{
	&t6744____Count_PropertyInfo,
	&t6744____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36190_GM;
MethodInfo m36190_MI = 
{
	"get_Count", NULL, &t6744_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36190_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36191_GM;
MethodInfo m36191_MI = 
{
	"get_IsReadOnly", NULL, &t6744_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36191_GM};
extern Il2CppType t1061_0_0_0;
extern Il2CppType t1061_0_0_0;
static ParameterInfo t6744_m36192_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1061_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36192_GM;
MethodInfo m36192_MI = 
{
	"Add", NULL, &t6744_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6744_m36192_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36192_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36193_GM;
MethodInfo m36193_MI = 
{
	"Clear", NULL, &t6744_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36193_GM};
extern Il2CppType t1061_0_0_0;
static ParameterInfo t6744_m36194_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1061_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36194_GM;
MethodInfo m36194_MI = 
{
	"Contains", NULL, &t6744_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6744_m36194_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36194_GM};
extern Il2CppType t4585_0_0_0;
extern Il2CppType t4585_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6744_m36195_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4585_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36195_GM;
MethodInfo m36195_MI = 
{
	"CopyTo", NULL, &t6744_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6744_m36195_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36195_GM};
extern Il2CppType t1061_0_0_0;
static ParameterInfo t6744_m36196_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1061_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36196_GM;
MethodInfo m36196_MI = 
{
	"Remove", NULL, &t6744_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6744_m36196_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36196_GM};
static MethodInfo* t6744_MIs[] =
{
	&m36190_MI,
	&m36191_MI,
	&m36192_MI,
	&m36193_MI,
	&m36194_MI,
	&m36195_MI,
	&m36196_MI,
	NULL
};
extern TypeInfo t6746_TI;
static TypeInfo* t6744_ITIs[] = 
{
	&t739_TI,
	&t6746_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6744_0_0_0;
extern Il2CppType t6744_1_0_0;
struct t6744;
extern Il2CppGenericClass t6744_GC;
TypeInfo t6744_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6744_MIs, t6744_PIs, NULL, NULL, NULL, NULL, NULL, &t6744_TI, t6744_ITIs, NULL, &EmptyCustomAttributesCache, &t6744_TI, &t6744_0_0_0, &t6744_1_0_0, NULL, &t6744_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509FindType>
extern Il2CppType t5333_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36197_GM;
MethodInfo m36197_MI = 
{
	"GetEnumerator", NULL, &t6746_TI, &t5333_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36197_GM};
static MethodInfo* t6746_MIs[] =
{
	&m36197_MI,
	NULL
};
static TypeInfo* t6746_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6746_0_0_0;
extern Il2CppType t6746_1_0_0;
struct t6746;
extern Il2CppGenericClass t6746_GC;
TypeInfo t6746_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6746_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6746_TI, t6746_ITIs, NULL, &EmptyCustomAttributesCache, &t6746_TI, &t6746_0_0_0, &t6746_1_0_0, NULL, &t6746_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6745_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509FindType>
extern MethodInfo m36198_MI;
extern MethodInfo m36199_MI;
static PropertyInfo t6745____Item_PropertyInfo = 
{
	&t6745_TI, "Item", &m36198_MI, &m36199_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6745_PIs[] =
{
	&t6745____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1061_0_0_0;
static ParameterInfo t6745_m36200_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1061_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36200_GM;
MethodInfo m36200_MI = 
{
	"IndexOf", NULL, &t6745_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6745_m36200_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36200_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1061_0_0_0;
static ParameterInfo t6745_m36201_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1061_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36201_GM;
MethodInfo m36201_MI = 
{
	"Insert", NULL, &t6745_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6745_m36201_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36201_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6745_m36202_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36202_GM;
MethodInfo m36202_MI = 
{
	"RemoveAt", NULL, &t6745_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6745_m36202_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36202_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6745_m36198_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1061_0_0_0;
extern void* RuntimeInvoker_t1061_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36198_GM;
MethodInfo m36198_MI = 
{
	"get_Item", NULL, &t6745_TI, &t1061_0_0_0, RuntimeInvoker_t1061_t110, t6745_m36198_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36198_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1061_0_0_0;
static ParameterInfo t6745_m36199_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1061_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36199_GM;
MethodInfo m36199_MI = 
{
	"set_Item", NULL, &t6745_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6745_m36199_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36199_GM};
static MethodInfo* t6745_MIs[] =
{
	&m36200_MI,
	&m36201_MI,
	&m36202_MI,
	&m36198_MI,
	&m36199_MI,
	NULL
};
static TypeInfo* t6745_ITIs[] = 
{
	&t739_TI,
	&t6744_TI,
	&t6746_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6745_0_0_0;
extern Il2CppType t6745_1_0_0;
struct t6745;
extern Il2CppGenericClass t6745_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6745_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6745_MIs, t6745_PIs, NULL, NULL, NULL, NULL, NULL, &t6745_TI, t6745_ITIs, NULL, &t2240__CustomAttributeCache, &t6745_TI, &t6745_0_0_0, &t6745_1_0_0, NULL, &t6745_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5335_TI;

#include "t1083.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>
extern MethodInfo m36203_MI;
static PropertyInfo t5335____Current_PropertyInfo = 
{
	&t5335_TI, "Current", &m36203_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5335_PIs[] =
{
	&t5335____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1083_0_0_0;
extern void* RuntimeInvoker_t1083 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36203_GM;
MethodInfo m36203_MI = 
{
	"get_Current", NULL, &t5335_TI, &t1083_0_0_0, RuntimeInvoker_t1083, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36203_GM};
static MethodInfo* t5335_MIs[] =
{
	&m36203_MI,
	NULL
};
static TypeInfo* t5335_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5335_0_0_0;
extern Il2CppType t5335_1_0_0;
struct t5335;
extern Il2CppGenericClass t5335_GC;
TypeInfo t5335_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5335_MIs, t5335_PIs, NULL, NULL, NULL, NULL, NULL, &t5335_TI, t5335_ITIs, NULL, &EmptyCustomAttributesCache, &t5335_TI, &t5335_0_0_0, &t5335_1_0_0, NULL, &t5335_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3856.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3856_TI;
#include "t3856MD.h"

extern TypeInfo t1083_TI;
extern MethodInfo m22006_MI;
extern MethodInfo m28214_MI;
struct t107;
 int32_t m28214 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22002_MI;
 void m22002 (t3856 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22003_MI;
 t5 * m22003 (t3856 * __this, MethodInfo* method){
	{
		int32_t L_0 = m22006(__this, &m22006_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1083_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22004_MI;
 void m22004 (t3856 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22005_MI;
 bool m22005 (t3856 * __this, MethodInfo* method){
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
 int32_t m22006 (t3856 * __this, MethodInfo* method){
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
		int32_t L_8 = m28214(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28214_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>
extern Il2CppType t107_0_0_1;
FieldInfo t3856_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3856_TI, offsetof(t3856, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3856_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3856_TI, offsetof(t3856, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3856_FIs[] =
{
	&t3856_f0_FieldInfo,
	&t3856_f1_FieldInfo,
	NULL
};
static PropertyInfo t3856____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3856_TI, "System.Collections.IEnumerator.Current", &m22003_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3856____Current_PropertyInfo = 
{
	&t3856_TI, "Current", &m22006_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3856_PIs[] =
{
	&t3856____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3856____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3856_m22002_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22002_GM;
MethodInfo m22002_MI = 
{
	".ctor", (methodPointerType)&m22002, &t3856_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3856_m22002_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22002_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22003_GM;
MethodInfo m22003_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22003, &t3856_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22003_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22004_GM;
MethodInfo m22004_MI = 
{
	"Dispose", (methodPointerType)&m22004, &t3856_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22004_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22005_GM;
MethodInfo m22005_MI = 
{
	"MoveNext", (methodPointerType)&m22005, &t3856_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22005_GM};
extern Il2CppType t1083_0_0_0;
extern void* RuntimeInvoker_t1083 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22006_GM;
MethodInfo m22006_MI = 
{
	"get_Current", (methodPointerType)&m22006, &t3856_TI, &t1083_0_0_0, RuntimeInvoker_t1083, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22006_GM};
static MethodInfo* t3856_MIs[] =
{
	&m22002_MI,
	&m22003_MI,
	&m22004_MI,
	&m22005_MI,
	&m22006_MI,
	NULL
};
static MethodInfo* t3856_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22003_MI,
	&m22005_MI,
	&m22004_MI,
	&m22006_MI,
};
static TypeInfo* t3856_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5335_TI,
};
static Il2CppInterfaceOffsetPair t3856_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5335_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3856_0_0_0;
extern Il2CppType t3856_1_0_0;
extern Il2CppGenericClass t3856_GC;
TypeInfo t3856_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3856_MIs, t3856_PIs, t3856_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3856_TI, t3856_ITIs, t3856_VT, &EmptyCustomAttributesCache, &t3856_TI, &t3856_0_0_0, &t3856_1_0_0, t3856_IOs, &t3856_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3856)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6747_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>
extern MethodInfo m36204_MI;
static PropertyInfo t6747____Count_PropertyInfo = 
{
	&t6747_TI, "Count", &m36204_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36205_MI;
static PropertyInfo t6747____IsReadOnly_PropertyInfo = 
{
	&t6747_TI, "IsReadOnly", &m36205_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6747_PIs[] =
{
	&t6747____Count_PropertyInfo,
	&t6747____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36204_GM;
MethodInfo m36204_MI = 
{
	"get_Count", NULL, &t6747_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36204_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36205_GM;
MethodInfo m36205_MI = 
{
	"get_IsReadOnly", NULL, &t6747_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36205_GM};
extern Il2CppType t1083_0_0_0;
extern Il2CppType t1083_0_0_0;
static ParameterInfo t6747_m36206_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1083_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36206_GM;
MethodInfo m36206_MI = 
{
	"Add", NULL, &t6747_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6747_m36206_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36206_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36207_GM;
MethodInfo m36207_MI = 
{
	"Clear", NULL, &t6747_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36207_GM};
extern Il2CppType t1083_0_0_0;
static ParameterInfo t6747_m36208_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1083_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36208_GM;
MethodInfo m36208_MI = 
{
	"Contains", NULL, &t6747_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6747_m36208_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36208_GM};
extern Il2CppType t4586_0_0_0;
extern Il2CppType t4586_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6747_m36209_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4586_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36209_GM;
MethodInfo m36209_MI = 
{
	"CopyTo", NULL, &t6747_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6747_m36209_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36209_GM};
extern Il2CppType t1083_0_0_0;
static ParameterInfo t6747_m36210_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1083_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36210_GM;
MethodInfo m36210_MI = 
{
	"Remove", NULL, &t6747_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6747_m36210_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36210_GM};
static MethodInfo* t6747_MIs[] =
{
	&m36204_MI,
	&m36205_MI,
	&m36206_MI,
	&m36207_MI,
	&m36208_MI,
	&m36209_MI,
	&m36210_MI,
	NULL
};
extern TypeInfo t6749_TI;
static TypeInfo* t6747_ITIs[] = 
{
	&t739_TI,
	&t6749_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6747_0_0_0;
extern Il2CppType t6747_1_0_0;
struct t6747;
extern Il2CppGenericClass t6747_GC;
TypeInfo t6747_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6747_MIs, t6747_PIs, NULL, NULL, NULL, NULL, NULL, &t6747_TI, t6747_ITIs, NULL, &EmptyCustomAttributesCache, &t6747_TI, &t6747_0_0_0, &t6747_1_0_0, NULL, &t6747_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>
extern Il2CppType t5335_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36211_GM;
MethodInfo m36211_MI = 
{
	"GetEnumerator", NULL, &t6749_TI, &t5335_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36211_GM};
static MethodInfo* t6749_MIs[] =
{
	&m36211_MI,
	NULL
};
static TypeInfo* t6749_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6749_0_0_0;
extern Il2CppType t6749_1_0_0;
struct t6749;
extern Il2CppGenericClass t6749_GC;
TypeInfo t6749_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6749_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6749_TI, t6749_ITIs, NULL, &EmptyCustomAttributesCache, &t6749_TI, &t6749_0_0_0, &t6749_1_0_0, NULL, &t6749_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6748_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>
extern MethodInfo m36212_MI;
extern MethodInfo m36213_MI;
static PropertyInfo t6748____Item_PropertyInfo = 
{
	&t6748_TI, "Item", &m36212_MI, &m36213_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6748_PIs[] =
{
	&t6748____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1083_0_0_0;
static ParameterInfo t6748_m36214_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1083_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36214_GM;
MethodInfo m36214_MI = 
{
	"IndexOf", NULL, &t6748_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6748_m36214_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36214_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1083_0_0_0;
static ParameterInfo t6748_m36215_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1083_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36215_GM;
MethodInfo m36215_MI = 
{
	"Insert", NULL, &t6748_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6748_m36215_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36215_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6748_m36216_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36216_GM;
MethodInfo m36216_MI = 
{
	"RemoveAt", NULL, &t6748_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6748_m36216_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36216_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6748_m36212_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1083_0_0_0;
extern void* RuntimeInvoker_t1083_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36212_GM;
MethodInfo m36212_MI = 
{
	"get_Item", NULL, &t6748_TI, &t1083_0_0_0, RuntimeInvoker_t1083_t110, t6748_m36212_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36212_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1083_0_0_0;
static ParameterInfo t6748_m36213_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1083_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36213_GM;
MethodInfo m36213_MI = 
{
	"set_Item", NULL, &t6748_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6748_m36213_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36213_GM};
static MethodInfo* t6748_MIs[] =
{
	&m36214_MI,
	&m36215_MI,
	&m36216_MI,
	&m36212_MI,
	&m36213_MI,
	NULL
};
static TypeInfo* t6748_ITIs[] = 
{
	&t739_TI,
	&t6747_TI,
	&t6749_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6748_0_0_0;
extern Il2CppType t6748_1_0_0;
struct t6748;
extern Il2CppGenericClass t6748_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6748_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6748_MIs, t6748_PIs, NULL, NULL, NULL, NULL, NULL, &t6748_TI, t6748_ITIs, NULL, &t2240__CustomAttributeCache, &t6748_TI, &t6748_0_0_0, &t6748_1_0_0, NULL, &t6748_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5337_TI;

#include "t1057.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509NameType>
extern MethodInfo m36217_MI;
static PropertyInfo t5337____Current_PropertyInfo = 
{
	&t5337_TI, "Current", &m36217_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5337_PIs[] =
{
	&t5337____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1057_0_0_0;
extern void* RuntimeInvoker_t1057 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36217_GM;
MethodInfo m36217_MI = 
{
	"get_Current", NULL, &t5337_TI, &t1057_0_0_0, RuntimeInvoker_t1057, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36217_GM};
static MethodInfo* t5337_MIs[] =
{
	&m36217_MI,
	NULL
};
static TypeInfo* t5337_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5337_0_0_0;
extern Il2CppType t5337_1_0_0;
struct t5337;
extern Il2CppGenericClass t5337_GC;
TypeInfo t5337_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5337_MIs, t5337_PIs, NULL, NULL, NULL, NULL, NULL, &t5337_TI, t5337_ITIs, NULL, &EmptyCustomAttributesCache, &t5337_TI, &t5337_0_0_0, &t5337_1_0_0, NULL, &t5337_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3857.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3857_TI;
#include "t3857MD.h"

extern TypeInfo t1057_TI;
extern MethodInfo m22011_MI;
extern MethodInfo m28225_MI;
struct t107;
 int32_t m28225 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22007_MI;
 void m22007 (t3857 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22008_MI;
 t5 * m22008 (t3857 * __this, MethodInfo* method){
	{
		int32_t L_0 = m22011(__this, &m22011_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1057_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22009_MI;
 void m22009 (t3857 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22010_MI;
 bool m22010 (t3857 * __this, MethodInfo* method){
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
 int32_t m22011 (t3857 * __this, MethodInfo* method){
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
		int32_t L_8 = m28225(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28225_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509NameType>
extern Il2CppType t107_0_0_1;
FieldInfo t3857_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3857_TI, offsetof(t3857, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3857_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3857_TI, offsetof(t3857, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3857_FIs[] =
{
	&t3857_f0_FieldInfo,
	&t3857_f1_FieldInfo,
	NULL
};
static PropertyInfo t3857____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3857_TI, "System.Collections.IEnumerator.Current", &m22008_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3857____Current_PropertyInfo = 
{
	&t3857_TI, "Current", &m22011_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3857_PIs[] =
{
	&t3857____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3857____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3857_m22007_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22007_GM;
MethodInfo m22007_MI = 
{
	".ctor", (methodPointerType)&m22007, &t3857_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3857_m22007_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22007_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22008_GM;
MethodInfo m22008_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22008, &t3857_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22008_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22009_GM;
MethodInfo m22009_MI = 
{
	"Dispose", (methodPointerType)&m22009, &t3857_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22009_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22010_GM;
MethodInfo m22010_MI = 
{
	"MoveNext", (methodPointerType)&m22010, &t3857_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22010_GM};
extern Il2CppType t1057_0_0_0;
extern void* RuntimeInvoker_t1057 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22011_GM;
MethodInfo m22011_MI = 
{
	"get_Current", (methodPointerType)&m22011, &t3857_TI, &t1057_0_0_0, RuntimeInvoker_t1057, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22011_GM};
static MethodInfo* t3857_MIs[] =
{
	&m22007_MI,
	&m22008_MI,
	&m22009_MI,
	&m22010_MI,
	&m22011_MI,
	NULL
};
static MethodInfo* t3857_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22008_MI,
	&m22010_MI,
	&m22009_MI,
	&m22011_MI,
};
static TypeInfo* t3857_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5337_TI,
};
static Il2CppInterfaceOffsetPair t3857_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5337_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3857_0_0_0;
extern Il2CppType t3857_1_0_0;
extern Il2CppGenericClass t3857_GC;
TypeInfo t3857_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3857_MIs, t3857_PIs, t3857_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3857_TI, t3857_ITIs, t3857_VT, &EmptyCustomAttributesCache, &t3857_TI, &t3857_0_0_0, &t3857_1_0_0, t3857_IOs, &t3857_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3857)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6750_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509NameType>
extern MethodInfo m36218_MI;
static PropertyInfo t6750____Count_PropertyInfo = 
{
	&t6750_TI, "Count", &m36218_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36219_MI;
static PropertyInfo t6750____IsReadOnly_PropertyInfo = 
{
	&t6750_TI, "IsReadOnly", &m36219_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6750_PIs[] =
{
	&t6750____Count_PropertyInfo,
	&t6750____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36218_GM;
MethodInfo m36218_MI = 
{
	"get_Count", NULL, &t6750_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36218_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36219_GM;
MethodInfo m36219_MI = 
{
	"get_IsReadOnly", NULL, &t6750_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36219_GM};
extern Il2CppType t1057_0_0_0;
extern Il2CppType t1057_0_0_0;
static ParameterInfo t6750_m36220_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1057_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36220_GM;
MethodInfo m36220_MI = 
{
	"Add", NULL, &t6750_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6750_m36220_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36220_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36221_GM;
MethodInfo m36221_MI = 
{
	"Clear", NULL, &t6750_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36221_GM};
extern Il2CppType t1057_0_0_0;
static ParameterInfo t6750_m36222_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1057_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36222_GM;
MethodInfo m36222_MI = 
{
	"Contains", NULL, &t6750_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6750_m36222_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36222_GM};
extern Il2CppType t4587_0_0_0;
extern Il2CppType t4587_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6750_m36223_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4587_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36223_GM;
MethodInfo m36223_MI = 
{
	"CopyTo", NULL, &t6750_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6750_m36223_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36223_GM};
extern Il2CppType t1057_0_0_0;
static ParameterInfo t6750_m36224_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1057_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36224_GM;
MethodInfo m36224_MI = 
{
	"Remove", NULL, &t6750_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6750_m36224_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36224_GM};
static MethodInfo* t6750_MIs[] =
{
	&m36218_MI,
	&m36219_MI,
	&m36220_MI,
	&m36221_MI,
	&m36222_MI,
	&m36223_MI,
	&m36224_MI,
	NULL
};
extern TypeInfo t6752_TI;
static TypeInfo* t6750_ITIs[] = 
{
	&t739_TI,
	&t6752_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6750_0_0_0;
extern Il2CppType t6750_1_0_0;
struct t6750;
extern Il2CppGenericClass t6750_GC;
TypeInfo t6750_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6750_MIs, t6750_PIs, NULL, NULL, NULL, NULL, NULL, &t6750_TI, t6750_ITIs, NULL, &EmptyCustomAttributesCache, &t6750_TI, &t6750_0_0_0, &t6750_1_0_0, NULL, &t6750_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509NameType>
extern Il2CppType t5337_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36225_GM;
MethodInfo m36225_MI = 
{
	"GetEnumerator", NULL, &t6752_TI, &t5337_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36225_GM};
static MethodInfo* t6752_MIs[] =
{
	&m36225_MI,
	NULL
};
static TypeInfo* t6752_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6752_0_0_0;
extern Il2CppType t6752_1_0_0;
struct t6752;
extern Il2CppGenericClass t6752_GC;
TypeInfo t6752_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6752_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6752_TI, t6752_ITIs, NULL, &EmptyCustomAttributesCache, &t6752_TI, &t6752_0_0_0, &t6752_1_0_0, NULL, &t6752_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6751_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509NameType>
extern MethodInfo m36226_MI;
extern MethodInfo m36227_MI;
static PropertyInfo t6751____Item_PropertyInfo = 
{
	&t6751_TI, "Item", &m36226_MI, &m36227_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6751_PIs[] =
{
	&t6751____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1057_0_0_0;
static ParameterInfo t6751_m36228_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1057_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36228_GM;
MethodInfo m36228_MI = 
{
	"IndexOf", NULL, &t6751_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6751_m36228_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36228_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1057_0_0_0;
static ParameterInfo t6751_m36229_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1057_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36229_GM;
MethodInfo m36229_MI = 
{
	"Insert", NULL, &t6751_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6751_m36229_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36229_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6751_m36230_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36230_GM;
MethodInfo m36230_MI = 
{
	"RemoveAt", NULL, &t6751_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6751_m36230_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36230_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6751_m36226_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1057_0_0_0;
extern void* RuntimeInvoker_t1057_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36226_GM;
MethodInfo m36226_MI = 
{
	"get_Item", NULL, &t6751_TI, &t1057_0_0_0, RuntimeInvoker_t1057_t110, t6751_m36226_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36226_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1057_0_0_0;
static ParameterInfo t6751_m36227_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1057_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36227_GM;
MethodInfo m36227_MI = 
{
	"set_Item", NULL, &t6751_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6751_m36227_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36227_GM};
static MethodInfo* t6751_MIs[] =
{
	&m36228_MI,
	&m36229_MI,
	&m36230_MI,
	&m36226_MI,
	&m36227_MI,
	NULL
};
static TypeInfo* t6751_ITIs[] = 
{
	&t739_TI,
	&t6750_TI,
	&t6752_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6751_0_0_0;
extern Il2CppType t6751_1_0_0;
struct t6751;
extern Il2CppGenericClass t6751_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6751_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6751_MIs, t6751_PIs, NULL, NULL, NULL, NULL, NULL, &t6751_TI, t6751_ITIs, NULL, &t2240__CustomAttributeCache, &t6751_TI, &t6751_0_0_0, &t6751_1_0_0, NULL, &t6751_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5339_TI;

#include "t1077.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>
extern MethodInfo m36231_MI;
static PropertyInfo t5339____Current_PropertyInfo = 
{
	&t5339_TI, "Current", &m36231_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5339_PIs[] =
{
	&t5339____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1077_0_0_0;
extern void* RuntimeInvoker_t1077 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36231_GM;
MethodInfo m36231_MI = 
{
	"get_Current", NULL, &t5339_TI, &t1077_0_0_0, RuntimeInvoker_t1077, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36231_GM};
static MethodInfo* t5339_MIs[] =
{
	&m36231_MI,
	NULL
};
static TypeInfo* t5339_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5339_0_0_0;
extern Il2CppType t5339_1_0_0;
struct t5339;
extern Il2CppGenericClass t5339_GC;
TypeInfo t5339_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5339_MIs, t5339_PIs, NULL, NULL, NULL, NULL, NULL, &t5339_TI, t5339_ITIs, NULL, &EmptyCustomAttributesCache, &t5339_TI, &t5339_0_0_0, &t5339_1_0_0, NULL, &t5339_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3858.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3858_TI;
#include "t3858MD.h"

extern TypeInfo t1077_TI;
extern MethodInfo m22016_MI;
extern MethodInfo m28236_MI;
struct t107;
 int32_t m28236 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22012_MI;
 void m22012 (t3858 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22013_MI;
 t5 * m22013 (t3858 * __this, MethodInfo* method){
	{
		int32_t L_0 = m22016(__this, &m22016_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1077_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22014_MI;
 void m22014 (t3858 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22015_MI;
 bool m22015 (t3858 * __this, MethodInfo* method){
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
 int32_t m22016 (t3858 * __this, MethodInfo* method){
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
		int32_t L_8 = m28236(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28236_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>
extern Il2CppType t107_0_0_1;
FieldInfo t3858_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3858_TI, offsetof(t3858, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3858_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3858_TI, offsetof(t3858, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3858_FIs[] =
{
	&t3858_f0_FieldInfo,
	&t3858_f1_FieldInfo,
	NULL
};
static PropertyInfo t3858____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3858_TI, "System.Collections.IEnumerator.Current", &m22013_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3858____Current_PropertyInfo = 
{
	&t3858_TI, "Current", &m22016_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3858_PIs[] =
{
	&t3858____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3858____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3858_m22012_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22012_GM;
MethodInfo m22012_MI = 
{
	".ctor", (methodPointerType)&m22012, &t3858_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3858_m22012_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22012_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22013_GM;
MethodInfo m22013_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22013, &t3858_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22013_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22014_GM;
MethodInfo m22014_MI = 
{
	"Dispose", (methodPointerType)&m22014, &t3858_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22014_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22015_GM;
MethodInfo m22015_MI = 
{
	"MoveNext", (methodPointerType)&m22015, &t3858_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22015_GM};
extern Il2CppType t1077_0_0_0;
extern void* RuntimeInvoker_t1077 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22016_GM;
MethodInfo m22016_MI = 
{
	"get_Current", (methodPointerType)&m22016, &t3858_TI, &t1077_0_0_0, RuntimeInvoker_t1077, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22016_GM};
static MethodInfo* t3858_MIs[] =
{
	&m22012_MI,
	&m22013_MI,
	&m22014_MI,
	&m22015_MI,
	&m22016_MI,
	NULL
};
static MethodInfo* t3858_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22013_MI,
	&m22015_MI,
	&m22014_MI,
	&m22016_MI,
};
static TypeInfo* t3858_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5339_TI,
};
static Il2CppInterfaceOffsetPair t3858_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5339_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3858_0_0_0;
extern Il2CppType t3858_1_0_0;
extern Il2CppGenericClass t3858_GC;
TypeInfo t3858_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3858_MIs, t3858_PIs, t3858_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3858_TI, t3858_ITIs, t3858_VT, &EmptyCustomAttributesCache, &t3858_TI, &t3858_0_0_0, &t3858_1_0_0, t3858_IOs, &t3858_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3858)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6753_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>
extern MethodInfo m36232_MI;
static PropertyInfo t6753____Count_PropertyInfo = 
{
	&t6753_TI, "Count", &m36232_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36233_MI;
static PropertyInfo t6753____IsReadOnly_PropertyInfo = 
{
	&t6753_TI, "IsReadOnly", &m36233_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6753_PIs[] =
{
	&t6753____Count_PropertyInfo,
	&t6753____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36232_GM;
MethodInfo m36232_MI = 
{
	"get_Count", NULL, &t6753_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36232_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36233_GM;
MethodInfo m36233_MI = 
{
	"get_IsReadOnly", NULL, &t6753_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36233_GM};
extern Il2CppType t1077_0_0_0;
extern Il2CppType t1077_0_0_0;
static ParameterInfo t6753_m36234_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1077_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36234_GM;
MethodInfo m36234_MI = 
{
	"Add", NULL, &t6753_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6753_m36234_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36234_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36235_GM;
MethodInfo m36235_MI = 
{
	"Clear", NULL, &t6753_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36235_GM};
extern Il2CppType t1077_0_0_0;
static ParameterInfo t6753_m36236_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1077_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36236_GM;
MethodInfo m36236_MI = 
{
	"Contains", NULL, &t6753_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6753_m36236_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36236_GM};
extern Il2CppType t4588_0_0_0;
extern Il2CppType t4588_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6753_m36237_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4588_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36237_GM;
MethodInfo m36237_MI = 
{
	"CopyTo", NULL, &t6753_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6753_m36237_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36237_GM};
extern Il2CppType t1077_0_0_0;
static ParameterInfo t6753_m36238_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1077_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36238_GM;
MethodInfo m36238_MI = 
{
	"Remove", NULL, &t6753_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6753_m36238_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36238_GM};
static MethodInfo* t6753_MIs[] =
{
	&m36232_MI,
	&m36233_MI,
	&m36234_MI,
	&m36235_MI,
	&m36236_MI,
	&m36237_MI,
	&m36238_MI,
	NULL
};
extern TypeInfo t6755_TI;
static TypeInfo* t6753_ITIs[] = 
{
	&t739_TI,
	&t6755_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6753_0_0_0;
extern Il2CppType t6753_1_0_0;
struct t6753;
extern Il2CppGenericClass t6753_GC;
TypeInfo t6753_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6753_MIs, t6753_PIs, NULL, NULL, NULL, NULL, NULL, &t6753_TI, t6753_ITIs, NULL, &EmptyCustomAttributesCache, &t6753_TI, &t6753_0_0_0, &t6753_1_0_0, NULL, &t6753_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>
extern Il2CppType t5339_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36239_GM;
MethodInfo m36239_MI = 
{
	"GetEnumerator", NULL, &t6755_TI, &t5339_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36239_GM};
static MethodInfo* t6755_MIs[] =
{
	&m36239_MI,
	NULL
};
static TypeInfo* t6755_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6755_0_0_0;
extern Il2CppType t6755_1_0_0;
struct t6755;
extern Il2CppGenericClass t6755_GC;
TypeInfo t6755_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6755_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6755_TI, t6755_ITIs, NULL, &EmptyCustomAttributesCache, &t6755_TI, &t6755_0_0_0, &t6755_1_0_0, NULL, &t6755_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6754_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>
extern MethodInfo m36240_MI;
extern MethodInfo m36241_MI;
static PropertyInfo t6754____Item_PropertyInfo = 
{
	&t6754_TI, "Item", &m36240_MI, &m36241_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6754_PIs[] =
{
	&t6754____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1077_0_0_0;
static ParameterInfo t6754_m36242_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1077_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36242_GM;
MethodInfo m36242_MI = 
{
	"IndexOf", NULL, &t6754_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6754_m36242_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36242_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1077_0_0_0;
static ParameterInfo t6754_m36243_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1077_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36243_GM;
MethodInfo m36243_MI = 
{
	"Insert", NULL, &t6754_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6754_m36243_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36243_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6754_m36244_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36244_GM;
MethodInfo m36244_MI = 
{
	"RemoveAt", NULL, &t6754_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6754_m36244_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36244_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6754_m36240_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1077_0_0_0;
extern void* RuntimeInvoker_t1077_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36240_GM;
MethodInfo m36240_MI = 
{
	"get_Item", NULL, &t6754_TI, &t1077_0_0_0, RuntimeInvoker_t1077_t110, t6754_m36240_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36240_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1077_0_0_0;
static ParameterInfo t6754_m36241_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1077_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36241_GM;
MethodInfo m36241_MI = 
{
	"set_Item", NULL, &t6754_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6754_m36241_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36241_GM};
static MethodInfo* t6754_MIs[] =
{
	&m36242_MI,
	&m36243_MI,
	&m36244_MI,
	&m36240_MI,
	&m36241_MI,
	NULL
};
static TypeInfo* t6754_ITIs[] = 
{
	&t739_TI,
	&t6753_TI,
	&t6755_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6754_0_0_0;
extern Il2CppType t6754_1_0_0;
struct t6754;
extern Il2CppGenericClass t6754_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6754_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6754_MIs, t6754_PIs, NULL, NULL, NULL, NULL, NULL, &t6754_TI, t6754_ITIs, NULL, &t2240__CustomAttributeCache, &t6754_TI, &t6754_0_0_0, &t6754_1_0_0, NULL, &t6754_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5341_TI;

#include "t1078.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>
extern MethodInfo m36245_MI;
static PropertyInfo t5341____Current_PropertyInfo = 
{
	&t5341_TI, "Current", &m36245_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5341_PIs[] =
{
	&t5341____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1078_0_0_0;
extern void* RuntimeInvoker_t1078 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36245_GM;
MethodInfo m36245_MI = 
{
	"get_Current", NULL, &t5341_TI, &t1078_0_0_0, RuntimeInvoker_t1078, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36245_GM};
static MethodInfo* t5341_MIs[] =
{
	&m36245_MI,
	NULL
};
static TypeInfo* t5341_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5341_0_0_0;
extern Il2CppType t5341_1_0_0;
struct t5341;
extern Il2CppGenericClass t5341_GC;
TypeInfo t5341_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5341_MIs, t5341_PIs, NULL, NULL, NULL, NULL, NULL, &t5341_TI, t5341_ITIs, NULL, &EmptyCustomAttributesCache, &t5341_TI, &t5341_0_0_0, &t5341_1_0_0, NULL, &t5341_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3859.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3859_TI;
#include "t3859MD.h"

extern TypeInfo t1078_TI;
extern MethodInfo m22021_MI;
extern MethodInfo m28247_MI;
struct t107;
 int32_t m28247 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22017_MI;
 void m22017 (t3859 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22018_MI;
 t5 * m22018 (t3859 * __this, MethodInfo* method){
	{
		int32_t L_0 = m22021(__this, &m22021_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1078_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22019_MI;
 void m22019 (t3859 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22020_MI;
 bool m22020 (t3859 * __this, MethodInfo* method){
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
 int32_t m22021 (t3859 * __this, MethodInfo* method){
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
		int32_t L_8 = m28247(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28247_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>
extern Il2CppType t107_0_0_1;
FieldInfo t3859_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3859_TI, offsetof(t3859, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3859_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3859_TI, offsetof(t3859, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3859_FIs[] =
{
	&t3859_f0_FieldInfo,
	&t3859_f1_FieldInfo,
	NULL
};
static PropertyInfo t3859____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3859_TI, "System.Collections.IEnumerator.Current", &m22018_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3859____Current_PropertyInfo = 
{
	&t3859_TI, "Current", &m22021_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3859_PIs[] =
{
	&t3859____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3859____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3859_m22017_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22017_GM;
MethodInfo m22017_MI = 
{
	".ctor", (methodPointerType)&m22017, &t3859_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3859_m22017_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22017_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22018_GM;
MethodInfo m22018_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22018, &t3859_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22018_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22019_GM;
MethodInfo m22019_MI = 
{
	"Dispose", (methodPointerType)&m22019, &t3859_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22019_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22020_GM;
MethodInfo m22020_MI = 
{
	"MoveNext", (methodPointerType)&m22020, &t3859_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22020_GM};
extern Il2CppType t1078_0_0_0;
extern void* RuntimeInvoker_t1078 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22021_GM;
MethodInfo m22021_MI = 
{
	"get_Current", (methodPointerType)&m22021, &t3859_TI, &t1078_0_0_0, RuntimeInvoker_t1078, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22021_GM};
static MethodInfo* t3859_MIs[] =
{
	&m22017_MI,
	&m22018_MI,
	&m22019_MI,
	&m22020_MI,
	&m22021_MI,
	NULL
};
static MethodInfo* t3859_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22018_MI,
	&m22020_MI,
	&m22019_MI,
	&m22021_MI,
};
static TypeInfo* t3859_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5341_TI,
};
static Il2CppInterfaceOffsetPair t3859_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5341_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3859_0_0_0;
extern Il2CppType t3859_1_0_0;
extern Il2CppGenericClass t3859_GC;
TypeInfo t3859_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3859_MIs, t3859_PIs, t3859_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3859_TI, t3859_ITIs, t3859_VT, &EmptyCustomAttributesCache, &t3859_TI, &t3859_0_0_0, &t3859_1_0_0, t3859_IOs, &t3859_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3859)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6756_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>
extern MethodInfo m36246_MI;
static PropertyInfo t6756____Count_PropertyInfo = 
{
	&t6756_TI, "Count", &m36246_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36247_MI;
static PropertyInfo t6756____IsReadOnly_PropertyInfo = 
{
	&t6756_TI, "IsReadOnly", &m36247_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6756_PIs[] =
{
	&t6756____Count_PropertyInfo,
	&t6756____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36246_GM;
MethodInfo m36246_MI = 
{
	"get_Count", NULL, &t6756_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36246_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36247_GM;
MethodInfo m36247_MI = 
{
	"get_IsReadOnly", NULL, &t6756_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36247_GM};
extern Il2CppType t1078_0_0_0;
extern Il2CppType t1078_0_0_0;
static ParameterInfo t6756_m36248_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1078_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36248_GM;
MethodInfo m36248_MI = 
{
	"Add", NULL, &t6756_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6756_m36248_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36248_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36249_GM;
MethodInfo m36249_MI = 
{
	"Clear", NULL, &t6756_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36249_GM};
extern Il2CppType t1078_0_0_0;
static ParameterInfo t6756_m36250_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1078_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36250_GM;
MethodInfo m36250_MI = 
{
	"Contains", NULL, &t6756_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6756_m36250_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36250_GM};
extern Il2CppType t4589_0_0_0;
extern Il2CppType t4589_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6756_m36251_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4589_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36251_GM;
MethodInfo m36251_MI = 
{
	"CopyTo", NULL, &t6756_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6756_m36251_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36251_GM};
extern Il2CppType t1078_0_0_0;
static ParameterInfo t6756_m36252_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1078_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36252_GM;
MethodInfo m36252_MI = 
{
	"Remove", NULL, &t6756_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6756_m36252_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36252_GM};
static MethodInfo* t6756_MIs[] =
{
	&m36246_MI,
	&m36247_MI,
	&m36248_MI,
	&m36249_MI,
	&m36250_MI,
	&m36251_MI,
	&m36252_MI,
	NULL
};
extern TypeInfo t6758_TI;
static TypeInfo* t6756_ITIs[] = 
{
	&t739_TI,
	&t6758_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6756_0_0_0;
extern Il2CppType t6756_1_0_0;
struct t6756;
extern Il2CppGenericClass t6756_GC;
TypeInfo t6756_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6756_MIs, t6756_PIs, NULL, NULL, NULL, NULL, NULL, &t6756_TI, t6756_ITIs, NULL, &EmptyCustomAttributesCache, &t6756_TI, &t6756_0_0_0, &t6756_1_0_0, NULL, &t6756_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>
extern Il2CppType t5341_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36253_GM;
MethodInfo m36253_MI = 
{
	"GetEnumerator", NULL, &t6758_TI, &t5341_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36253_GM};
static MethodInfo* t6758_MIs[] =
{
	&m36253_MI,
	NULL
};
static TypeInfo* t6758_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6758_0_0_0;
extern Il2CppType t6758_1_0_0;
struct t6758;
extern Il2CppGenericClass t6758_GC;
TypeInfo t6758_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6758_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6758_TI, t6758_ITIs, NULL, &EmptyCustomAttributesCache, &t6758_TI, &t6758_0_0_0, &t6758_1_0_0, NULL, &t6758_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6757_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>
extern MethodInfo m36254_MI;
extern MethodInfo m36255_MI;
static PropertyInfo t6757____Item_PropertyInfo = 
{
	&t6757_TI, "Item", &m36254_MI, &m36255_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6757_PIs[] =
{
	&t6757____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1078_0_0_0;
static ParameterInfo t6757_m36256_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1078_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36256_GM;
MethodInfo m36256_MI = 
{
	"IndexOf", NULL, &t6757_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6757_m36256_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36256_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1078_0_0_0;
static ParameterInfo t6757_m36257_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1078_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36257_GM;
MethodInfo m36257_MI = 
{
	"Insert", NULL, &t6757_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6757_m36257_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36257_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6757_m36258_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36258_GM;
MethodInfo m36258_MI = 
{
	"RemoveAt", NULL, &t6757_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6757_m36258_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36258_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6757_m36254_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1078_0_0_0;
extern void* RuntimeInvoker_t1078_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36254_GM;
MethodInfo m36254_MI = 
{
	"get_Item", NULL, &t6757_TI, &t1078_0_0_0, RuntimeInvoker_t1078_t110, t6757_m36254_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36254_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1078_0_0_0;
static ParameterInfo t6757_m36255_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1078_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36255_GM;
MethodInfo m36255_MI = 
{
	"set_Item", NULL, &t6757_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6757_m36255_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36255_GM};
static MethodInfo* t6757_MIs[] =
{
	&m36256_MI,
	&m36257_MI,
	&m36258_MI,
	&m36254_MI,
	&m36255_MI,
	NULL
};
static TypeInfo* t6757_ITIs[] = 
{
	&t739_TI,
	&t6756_TI,
	&t6758_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6757_0_0_0;
extern Il2CppType t6757_1_0_0;
struct t6757;
extern Il2CppGenericClass t6757_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6757_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6757_MIs, t6757_PIs, NULL, NULL, NULL, NULL, NULL, &t6757_TI, t6757_ITIs, NULL, &t2240__CustomAttributeCache, &t6757_TI, &t6757_0_0_0, &t6757_1_0_0, NULL, &t6757_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5343_TI;

#include "t1087.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>
extern MethodInfo m36259_MI;
static PropertyInfo t5343____Current_PropertyInfo = 
{
	&t5343_TI, "Current", &m36259_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5343_PIs[] =
{
	&t5343____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1087_0_0_0;
extern void* RuntimeInvoker_t1087 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36259_GM;
MethodInfo m36259_MI = 
{
	"get_Current", NULL, &t5343_TI, &t1087_0_0_0, RuntimeInvoker_t1087, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36259_GM};
static MethodInfo* t5343_MIs[] =
{
	&m36259_MI,
	NULL
};
static TypeInfo* t5343_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5343_0_0_0;
extern Il2CppType t5343_1_0_0;
struct t5343;
extern Il2CppGenericClass t5343_GC;
TypeInfo t5343_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5343_MIs, t5343_PIs, NULL, NULL, NULL, NULL, NULL, &t5343_TI, t5343_ITIs, NULL, &EmptyCustomAttributesCache, &t5343_TI, &t5343_0_0_0, &t5343_1_0_0, NULL, &t5343_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3860.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3860_TI;
#include "t3860MD.h"

extern TypeInfo t1087_TI;
extern MethodInfo m22026_MI;
extern MethodInfo m28258_MI;
struct t107;
 int32_t m28258 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m22022_MI;
 void m22022 (t3860 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22023_MI;
 t5 * m22023 (t3860 * __this, MethodInfo* method){
	{
		int32_t L_0 = m22026(__this, &m22026_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1087_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m22024_MI;
 void m22024 (t3860 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m22025_MI;
 bool m22025 (t3860 * __this, MethodInfo* method){
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
 int32_t m22026 (t3860 * __this, MethodInfo* method){
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
		int32_t L_8 = m28258(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28258_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>
extern Il2CppType t107_0_0_1;
FieldInfo t3860_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3860_TI, offsetof(t3860, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3860_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3860_TI, offsetof(t3860, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3860_FIs[] =
{
	&t3860_f0_FieldInfo,
	&t3860_f1_FieldInfo,
	NULL
};
static PropertyInfo t3860____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3860_TI, "System.Collections.IEnumerator.Current", &m22023_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3860____Current_PropertyInfo = 
{
	&t3860_TI, "Current", &m22026_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3860_PIs[] =
{
	&t3860____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3860____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3860_m22022_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22022_GM;
MethodInfo m22022_MI = 
{
	".ctor", (methodPointerType)&m22022, &t3860_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3860_m22022_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22022_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22023_GM;
MethodInfo m22023_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22023, &t3860_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22023_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22024_GM;
MethodInfo m22024_MI = 
{
	"Dispose", (methodPointerType)&m22024, &t3860_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22024_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22025_GM;
MethodInfo m22025_MI = 
{
	"MoveNext", (methodPointerType)&m22025, &t3860_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22025_GM};
extern Il2CppType t1087_0_0_0;
extern void* RuntimeInvoker_t1087 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22026_GM;
MethodInfo m22026_MI = 
{
	"get_Current", (methodPointerType)&m22026, &t3860_TI, &t1087_0_0_0, RuntimeInvoker_t1087, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22026_GM};
static MethodInfo* t3860_MIs[] =
{
	&m22022_MI,
	&m22023_MI,
	&m22024_MI,
	&m22025_MI,
	&m22026_MI,
	NULL
};
static MethodInfo* t3860_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m22023_MI,
	&m22025_MI,
	&m22024_MI,
	&m22026_MI,
};
static TypeInfo* t3860_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5343_TI,
};
static Il2CppInterfaceOffsetPair t3860_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5343_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3860_0_0_0;
extern Il2CppType t3860_1_0_0;
extern Il2CppGenericClass t3860_GC;
TypeInfo t3860_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3860_MIs, t3860_PIs, t3860_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3860_TI, t3860_ITIs, t3860_VT, &EmptyCustomAttributesCache, &t3860_TI, &t3860_0_0_0, &t3860_1_0_0, t3860_IOs, &t3860_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3860)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6759_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>
extern MethodInfo m36260_MI;
static PropertyInfo t6759____Count_PropertyInfo = 
{
	&t6759_TI, "Count", &m36260_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36261_MI;
static PropertyInfo t6759____IsReadOnly_PropertyInfo = 
{
	&t6759_TI, "IsReadOnly", &m36261_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6759_PIs[] =
{
	&t6759____Count_PropertyInfo,
	&t6759____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36260_GM;
MethodInfo m36260_MI = 
{
	"get_Count", NULL, &t6759_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36260_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36261_GM;
MethodInfo m36261_MI = 
{
	"get_IsReadOnly", NULL, &t6759_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36261_GM};
extern Il2CppType t1087_0_0_0;
extern Il2CppType t1087_0_0_0;
static ParameterInfo t6759_m36262_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1087_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36262_GM;
MethodInfo m36262_MI = 
{
	"Add", NULL, &t6759_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6759_m36262_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36262_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36263_GM;
MethodInfo m36263_MI = 
{
	"Clear", NULL, &t6759_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36263_GM};
extern Il2CppType t1087_0_0_0;
static ParameterInfo t6759_m36264_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1087_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36264_GM;
MethodInfo m36264_MI = 
{
	"Contains", NULL, &t6759_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6759_m36264_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36264_GM};
extern Il2CppType t4590_0_0_0;
extern Il2CppType t4590_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6759_m36265_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4590_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36265_GM;
MethodInfo m36265_MI = 
{
	"CopyTo", NULL, &t6759_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6759_m36265_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36265_GM};
extern Il2CppType t1087_0_0_0;
static ParameterInfo t6759_m36266_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1087_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36266_GM;
MethodInfo m36266_MI = 
{
	"Remove", NULL, &t6759_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6759_m36266_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36266_GM};
static MethodInfo* t6759_MIs[] =
{
	&m36260_MI,
	&m36261_MI,
	&m36262_MI,
	&m36263_MI,
	&m36264_MI,
	&m36265_MI,
	&m36266_MI,
	NULL
};
extern TypeInfo t6761_TI;
static TypeInfo* t6759_ITIs[] = 
{
	&t739_TI,
	&t6761_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6759_0_0_0;
extern Il2CppType t6759_1_0_0;
struct t6759;
extern Il2CppGenericClass t6759_GC;
TypeInfo t6759_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6759_MIs, t6759_PIs, NULL, NULL, NULL, NULL, NULL, &t6759_TI, t6759_ITIs, NULL, &EmptyCustomAttributesCache, &t6759_TI, &t6759_0_0_0, &t6759_1_0_0, NULL, &t6759_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
