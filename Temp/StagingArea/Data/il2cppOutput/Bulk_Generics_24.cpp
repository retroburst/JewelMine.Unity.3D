#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t3675.h"
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
extern TypeInfo t3675_TI;
#include "t3675MD.h"

#include "t109.h"
#include "t114.h"
#include "t115.h"
#include "t523.h"
#include "t108.h"
#include "t1520.h"
#include "mscorlib_ArrayTypes.h"
#include "t5.h"
#include "t3676.h"
#include "t110.h"
extern TypeInfo t7695_TI;
extern TypeInfo t114_TI;
extern TypeInfo t523_TI;
extern TypeInfo t108_TI;
extern TypeInfo t1520_TI;
extern TypeInfo t675_TI;
extern TypeInfo t3676_TI;
extern TypeInfo t110_TI;
#include "t5MD.h"
#include "t114MD.h"
#include "t1196MD.h"
#include "t3676MD.h"
extern Il2CppType t7695_0_0_0;
extern Il2CppType t523_0_0_0;
extern Il2CppType t1520_0_0_0;
extern MethodInfo m460_MI;
extern MethodInfo m532_MI;
extern MethodInfo m3627_MI;
extern MethodInfo m3625_MI;
extern MethodInfo m10126_MI;
extern MethodInfo m20835_MI;
extern MethodInfo m35187_MI;
extern MethodInfo m27370_MI;

#include "t107.h"

extern MethodInfo m20830_MI;
 void m20830 (t3675 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m20831_MI;
 void m20831 (t5 * __this, MethodInfo* method){
	t3676 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t3676 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t3676_TI));
	m20835(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m20835_MI);
	((t3675_SFs*)InitializedTypeInfo(&t3675_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m20832_MI;
 int32_t m20832 (t3675 * __this, t5 * p0, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t523  >::Invoke(&m35187_MI, __this, ((*(t523 *)((t523 *)UnBox (p0, InitializedTypeInfo(&t523_TI))))));
		return L_0;
	}
}
extern MethodInfo m20833_MI;
 bool m20833 (t3675 * __this, t5 * p0, t5 * p1, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, t523 , t523  >::Invoke(&m27370_MI, __this, ((*(t523 *)((t523 *)UnBox (p0, InitializedTypeInfo(&t523_TI))))), ((*(t523 *)((t523 *)UnBox (p1, InitializedTypeInfo(&t523_TI))))));
		return L_0;
	}
}
extern MethodInfo m20834_MI;
 t3675 * m20834 (t5 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t3675_TI));
		return (((t3675_SFs*)InitializedTypeInfo(&t3675_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>
extern Il2CppType t3675_0_0_49;
FieldInfo t3675_f0_FieldInfo = 
{
	"_default", &t3675_0_0_49, &t3675_TI, offsetof(t3675_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t3675_FIs[] =
{
	&t3675_f0_FieldInfo,
	NULL
};
static PropertyInfo t3675____Default_PropertyInfo = 
{
	&t3675_TI, "Default", &m20834_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3675_PIs[] =
{
	&t3675____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20830_GM;
MethodInfo m20830_MI = 
{
	".ctor", (methodPointerType)&m20830, &t3675_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20830_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20831_GM;
MethodInfo m20831_MI = 
{
	".cctor", (methodPointerType)&m20831, &t3675_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20831_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3675_m20832_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20832_GM;
MethodInfo m20832_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m20832, &t3675_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3675_m20832_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20832_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3675_m20833_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20833_GM;
MethodInfo m20833_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m20833, &t3675_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t3675_m20833_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20833_GM};
extern Il2CppType t523_0_0_0;
static ParameterInfo t3675_m35187_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t523_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t523 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35187_GM;
MethodInfo m35187_MI = 
{
	"GetHashCode", NULL, &t3675_TI, &t110_0_0_0, RuntimeInvoker_t110_t523, t3675_m35187_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35187_GM};
extern Il2CppType t523_0_0_0;
extern Il2CppType t523_0_0_0;
static ParameterInfo t3675_m27370_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t523_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t523_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t523_t523 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m27370_GM;
MethodInfo m27370_MI = 
{
	"Equals", NULL, &t3675_TI, &t108_0_0_0, RuntimeInvoker_t108_t523_t523, t3675_m27370_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m27370_GM};
extern Il2CppType t3675_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20834_GM;
MethodInfo m20834_MI = 
{
	"get_Default", (methodPointerType)&m20834, &t3675_TI, &t3675_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20834_GM};
static MethodInfo* t3675_MIs[] =
{
	&m20830_MI,
	&m20831_MI,
	&m20832_MI,
	&m20833_MI,
	&m35187_MI,
	&m27370_MI,
	&m20834_MI,
	NULL
};
extern MethodInfo m464_MI;
extern MethodInfo m465_MI;
extern MethodInfo m466_MI;
extern MethodInfo m467_MI;
static MethodInfo* t3675_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m27370_MI,
	&m35187_MI,
	&m20833_MI,
	&m20832_MI,
	NULL,
	NULL,
};
extern TypeInfo t7696_TI;
extern TypeInfo t998_TI;
static TypeInfo* t3675_ITIs[] = 
{
	&t7696_TI,
	&t998_TI,
};
static Il2CppInterfaceOffsetPair t3675_IOs[] = 
{
	{ &t7696_TI, 4},
	{ &t998_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3675_0_0_0;
extern Il2CppType t3675_1_0_0;
extern TypeInfo t5_TI;
struct t3675;
extern Il2CppGenericClass t3675_GC;
TypeInfo t3675_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t3675_MIs, t3675_PIs, t3675_FIs, NULL, &t5_TI, NULL, NULL, &t3675_TI, t3675_ITIs, t3675_VT, &EmptyCustomAttributesCache, &t3675_TI, &t3675_0_0_0, &t3675_1_0_0, t3675_IOs, &t3675_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3675), 0, -1, sizeof(t3675_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.UILineInfo>
extern Il2CppType t523_0_0_0;
extern Il2CppType t523_0_0_0;
static ParameterInfo t7696_m35188_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t523_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t523_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t523_t523 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35188_GM;
MethodInfo m35188_MI = 
{
	"Equals", NULL, &t7696_TI, &t108_0_0_0, RuntimeInvoker_t108_t523_t523, t7696_m35188_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35188_GM};
extern Il2CppType t523_0_0_0;
static ParameterInfo t7696_m35189_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t523_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t523 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35189_GM;
MethodInfo m35189_MI = 
{
	"GetHashCode", NULL, &t7696_TI, &t110_0_0_0, RuntimeInvoker_t110_t523, t7696_m35189_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35189_GM};
static MethodInfo* t7696_MIs[] =
{
	&m35188_MI,
	&m35189_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7696_0_0_0;
extern Il2CppType t7696_1_0_0;
struct t7696;
extern Il2CppGenericClass t7696_GC;
TypeInfo t7696_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t7696_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7696_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7696_TI, &t7696_0_0_0, &t7696_1_0_0, NULL, &t7696_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.IEquatable`1<UnityEngine.UILineInfo>
extern Il2CppType t523_0_0_0;
static ParameterInfo t7695_m35190_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t523_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t523 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35190_GM;
MethodInfo m35190_MI = 
{
	"Equals", NULL, &t7695_TI, &t108_0_0_0, RuntimeInvoker_t108_t523, t7695_m35190_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35190_GM};
static MethodInfo* t7695_MIs[] =
{
	&m35190_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7695_1_0_0;
struct t7695;
extern Il2CppGenericClass t7695_GC;
TypeInfo t7695_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t7695_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7695_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7695_TI, &t7695_0_0_0, &t7695_1_0_0, NULL, &t7695_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



 void m20835 (t3676 * __this, MethodInfo* method){
	{
		m20830(__this, &m20830_MI);
		return;
	}
}
extern MethodInfo m20836_MI;
 int32_t m20836 (t3676 * __this, t523  p0, MethodInfo* method){
	{
		t523  L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t523_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m466_MI, Box(InitializedTypeInfo(&t523_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m20837_MI;
 bool m20837 (t3676 * __this, t523  p0, t523  p1, MethodInfo* method){
	{
		t523  L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t523_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t523  L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t523_TI), &L_2);
		return ((((t5 *)L_3) == ((t5 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t523  L_4 = p1;
		t5 * L_5 = Box(InitializedTypeInfo(&t523_TI), &L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t523_TI), &(*(&p0))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20835_GM;
MethodInfo m20835_MI = 
{
	".ctor", (methodPointerType)&m20835, &t3676_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20835_GM};
extern Il2CppType t523_0_0_0;
static ParameterInfo t3676_m20836_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t523_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t523 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20836_GM;
MethodInfo m20836_MI = 
{
	"GetHashCode", (methodPointerType)&m20836, &t3676_TI, &t110_0_0_0, RuntimeInvoker_t110_t523, t3676_m20836_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20836_GM};
extern Il2CppType t523_0_0_0;
extern Il2CppType t523_0_0_0;
static ParameterInfo t3676_m20837_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t523_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t523_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t523_t523 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20837_GM;
MethodInfo m20837_MI = 
{
	"Equals", (methodPointerType)&m20837, &t3676_TI, &t108_0_0_0, RuntimeInvoker_t108_t523_t523, t3676_m20837_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20837_GM};
static MethodInfo* t3676_MIs[] =
{
	&m20835_MI,
	&m20836_MI,
	&m20837_MI,
	NULL
};
static MethodInfo* t3676_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m20837_MI,
	&m20836_MI,
	&m20833_MI,
	&m20832_MI,
	&m20836_MI,
	&m20837_MI,
};
static Il2CppInterfaceOffsetPair t3676_IOs[] = 
{
	{ &t7696_TI, 4},
	{ &t998_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3676_0_0_0;
extern Il2CppType t3676_1_0_0;
struct t3676;
extern Il2CppGenericClass t3676_GC;
extern TypeInfo t1519_TI;
TypeInfo t3676_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t3676_MIs, NULL, NULL, NULL, &t3675_TI, NULL, &t1519_TI, &t3676_TI, NULL, t3676_VT, &EmptyCustomAttributesCache, &t3676_TI, &t3676_0_0_0, &t3676_1_0_0, t3676_IOs, &t3676_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3676), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t3670.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3670_TI;
#include "t3670MD.h"

#include "t124.h"
#include "t222.h"


extern MethodInfo m20838_MI;
 void m20838 (t3670 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m20839_MI;
 bool m20839 (t3670 * __this, t523  p0, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m20839((t3670 *)__this->f9,p0, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t5 *, t5 * __this, t523  p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	typedef bool (*FunctionPointerType) (t5 * __this, t523  p0, MethodInfo* method);
	return ((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m20840_MI;
 t5 * m20840 (t3670 * __this, t523  p0, t222 * p1, t5 * p2, MethodInfo* method){
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t523_TI), &p0);
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m20841_MI;
 bool m20841 (t3670 * __this, t5 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Predicate`1<UnityEngine.UILineInfo>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t3670_m20838_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20838_GM;
MethodInfo m20838_MI = 
{
	".ctor", (methodPointerType)&m20838, &t3670_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t3670_m20838_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20838_GM};
extern Il2CppType t523_0_0_0;
static ParameterInfo t3670_m20839_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t523_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t523 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20839_GM;
MethodInfo m20839_MI = 
{
	"Invoke", (methodPointerType)&m20839, &t3670_TI, &t108_0_0_0, RuntimeInvoker_t108_t523, t3670_m20839_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20839_GM};
extern Il2CppType t523_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3670_m20840_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t523_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t523_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20840_GM;
MethodInfo m20840_MI = 
{
	"BeginInvoke", (methodPointerType)&m20840, &t3670_TI, &t221_0_0_0, RuntimeInvoker_t5_t523_t5_t5, t3670_m20840_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m20840_GM};
extern Il2CppType t221_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t3670_m20841_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20841_GM;
MethodInfo m20841_MI = 
{
	"EndInvoke", (methodPointerType)&m20841, &t3670_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3670_m20841_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20841_GM};
static MethodInfo* t3670_MIs[] =
{
	&m20838_MI,
	&m20839_MI,
	&m20840_MI,
	&m20841_MI,
	NULL
};
extern MethodInfo m2342_MI;
extern MethodInfo m2343_MI;
extern MethodInfo m2344_MI;
extern MethodInfo m2345_MI;
extern MethodInfo m2346_MI;
extern MethodInfo m2347_MI;
extern MethodInfo m2348_MI;
static MethodInfo* t3670_VT[] =
{
	&m2342_MI,
	&m465_MI,
	&m2343_MI,
	&m467_MI,
	&m2344_MI,
	&m2345_MI,
	&m2344_MI,
	&m2346_MI,
	&m2347_MI,
	&m2348_MI,
	&m20839_MI,
	&m20840_MI,
	&m20841_MI,
};
extern TypeInfo t516_TI;
extern TypeInfo t517_TI;
static Il2CppInterfaceOffsetPair t3670_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3670_0_0_0;
extern Il2CppType t3670_1_0_0;
extern TypeInfo t353_TI;
struct t3670;
extern Il2CppGenericClass t3670_GC;
TypeInfo t3670_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t3670_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t3670_TI, NULL, t3670_VT, &EmptyCustomAttributesCache, &t3670_TI, &t3670_0_0_0, &t3670_1_0_0, t3670_IOs, &t3670_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3670), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t3671.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3671_TI;
#include "t3671MD.h"



extern MethodInfo m20842_MI;
 void m20842 (t3671 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m20843_MI;
 void m20843 (t3671 * __this, t523  p0, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m20843((t3671 *)__this->f9,p0, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t5 *, t5 * __this, t523  p0, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	typedef void (*FunctionPointerType) (t5 * __this, t523  p0, MethodInfo* method);
	((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m20844_MI;
 t5 * m20844 (t3671 * __this, t523  p0, t222 * p1, t5 * p2, MethodInfo* method){
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t523_TI), &p0);
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m20845_MI;
 void m20845 (t3671 * __this, t5 * p0, MethodInfo* method){
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
// Metadata Definition System.Action`1<UnityEngine.UILineInfo>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t3671_m20842_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20842_GM;
MethodInfo m20842_MI = 
{
	".ctor", (methodPointerType)&m20842, &t3671_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t3671_m20842_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20842_GM};
extern Il2CppType t523_0_0_0;
static ParameterInfo t3671_m20843_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t523_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t523 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20843_GM;
MethodInfo m20843_MI = 
{
	"Invoke", (methodPointerType)&m20843, &t3671_TI, &t109_0_0_0, RuntimeInvoker_t109_t523, t3671_m20843_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20843_GM};
extern Il2CppType t523_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3671_m20844_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t523_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t523_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20844_GM;
MethodInfo m20844_MI = 
{
	"BeginInvoke", (methodPointerType)&m20844, &t3671_TI, &t221_0_0_0, RuntimeInvoker_t5_t523_t5_t5, t3671_m20844_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m20844_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t3671_m20845_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20845_GM;
MethodInfo m20845_MI = 
{
	"EndInvoke", (methodPointerType)&m20845, &t3671_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3671_m20845_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20845_GM};
static MethodInfo* t3671_MIs[] =
{
	&m20842_MI,
	&m20843_MI,
	&m20844_MI,
	&m20845_MI,
	NULL
};
static MethodInfo* t3671_VT[] =
{
	&m2342_MI,
	&m465_MI,
	&m2343_MI,
	&m467_MI,
	&m2344_MI,
	&m2345_MI,
	&m2344_MI,
	&m2346_MI,
	&m2347_MI,
	&m2348_MI,
	&m20843_MI,
	&m20844_MI,
	&m20845_MI,
};
static Il2CppInterfaceOffsetPair t3671_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3671_0_0_0;
extern Il2CppType t3671_1_0_0;
struct t3671;
extern Il2CppGenericClass t3671_GC;
TypeInfo t3671_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Action`1", "System", t3671_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t3671_TI, NULL, t3671_VT, &EmptyCustomAttributesCache, &t3671_TI, &t3671_0_0_0, &t3671_1_0_0, t3671_IOs, &t3671_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3671), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t3677.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3677_TI;
#include "t3677MD.h"

#include "t1510.h"
#include "t3678.h"
#include "t160.h"
extern TypeInfo t5195_TI;
extern TypeInfo t1510_TI;
extern TypeInfo t3678_TI;
extern TypeInfo t160_TI;
#include "t3678MD.h"
#include "t160MD.h"
extern Il2CppType t5195_0_0_0;
extern Il2CppType t1510_0_0_0;
extern MethodInfo m20850_MI;
extern MethodInfo m35191_MI;
extern MethodInfo m10152_MI;


extern MethodInfo m20846_MI;
 void m20846 (t3677 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m20847_MI;
 void m20847 (t5 * __this, MethodInfo* method){
	t3678 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t3678 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t3678_TI));
	m20850(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m20850_MI);
	((t3677_SFs*)InitializedTypeInfo(&t3677_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m20848_MI;
 int32_t m20848 (t3677 * __this, t5 * p0, t5 * p1, MethodInfo* method){
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
		if (!((t5 *)IsInst(p0, InitializedTypeInfo(&t523_TI))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((t5 *)IsInst(p1, InitializedTypeInfo(&t523_TI))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, t523 , t523  >::Invoke(&m35191_MI, __this, ((*(t523 *)((t523 *)UnBox (p0, InitializedTypeInfo(&t523_TI))))), ((*(t523 *)((t523 *)UnBox (p1, InitializedTypeInfo(&t523_TI))))));
		return L_0;
	}

IL_0033:
	{
		t160 * L_1 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m10152(L_1, &m10152_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m20849_MI;
 t3677 * m20849 (t5 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t3677_TI));
		return (((t3677_SFs*)InitializedTypeInfo(&t3677_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>
extern Il2CppType t3677_0_0_49;
FieldInfo t3677_f0_FieldInfo = 
{
	"_default", &t3677_0_0_49, &t3677_TI, offsetof(t3677_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t3677_FIs[] =
{
	&t3677_f0_FieldInfo,
	NULL
};
static PropertyInfo t3677____Default_PropertyInfo = 
{
	&t3677_TI, "Default", &m20849_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3677_PIs[] =
{
	&t3677____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20846_GM;
MethodInfo m20846_MI = 
{
	".ctor", (methodPointerType)&m20846, &t3677_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20846_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20847_GM;
MethodInfo m20847_MI = 
{
	".cctor", (methodPointerType)&m20847, &t3677_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20847_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3677_m20848_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20848_GM;
MethodInfo m20848_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m20848, &t3677_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t3677_m20848_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20848_GM};
extern Il2CppType t523_0_0_0;
extern Il2CppType t523_0_0_0;
static ParameterInfo t3677_m35191_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t523_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t523_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t523_t523 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35191_GM;
MethodInfo m35191_MI = 
{
	"Compare", NULL, &t3677_TI, &t110_0_0_0, RuntimeInvoker_t110_t523_t523, t3677_m35191_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35191_GM};
extern Il2CppType t3677_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20849_GM;
MethodInfo m20849_MI = 
{
	"get_Default", (methodPointerType)&m20849, &t3677_TI, &t3677_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20849_GM};
static MethodInfo* t3677_MIs[] =
{
	&m20846_MI,
	&m20847_MI,
	&m20848_MI,
	&m35191_MI,
	&m20849_MI,
	NULL
};
static MethodInfo* t3677_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m35191_MI,
	&m20848_MI,
	NULL,
};
extern TypeInfo t5194_TI;
extern TypeInfo t991_TI;
static TypeInfo* t3677_ITIs[] = 
{
	&t5194_TI,
	&t991_TI,
};
static Il2CppInterfaceOffsetPair t3677_IOs[] = 
{
	{ &t5194_TI, 4},
	{ &t991_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3677_0_0_0;
extern Il2CppType t3677_1_0_0;
struct t3677;
extern Il2CppGenericClass t3677_GC;
TypeInfo t3677_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t3677_MIs, t3677_PIs, t3677_FIs, NULL, &t5_TI, NULL, NULL, &t3677_TI, t3677_ITIs, t3677_VT, &EmptyCustomAttributesCache, &t3677_TI, &t3677_0_0_0, &t3677_1_0_0, t3677_IOs, &t3677_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3677), 0, -1, sizeof(t3677_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.UILineInfo>
extern Il2CppType t523_0_0_0;
extern Il2CppType t523_0_0_0;
static ParameterInfo t5194_m27378_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t523_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t523_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t523_t523 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m27378_GM;
MethodInfo m27378_MI = 
{
	"Compare", NULL, &t5194_TI, &t110_0_0_0, RuntimeInvoker_t110_t523_t523, t5194_m27378_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m27378_GM};
static MethodInfo* t5194_MIs[] =
{
	&m27378_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5194_0_0_0;
extern Il2CppType t5194_1_0_0;
struct t5194;
extern Il2CppGenericClass t5194_GC;
TypeInfo t5194_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t5194_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5194_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5194_TI, &t5194_0_0_0, &t5194_1_0_0, NULL, &t5194_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.IComparable`1<UnityEngine.UILineInfo>
extern Il2CppType t523_0_0_0;
static ParameterInfo t5195_m27379_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t523_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t523 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m27379_GM;
MethodInfo m27379_MI = 
{
	"CompareTo", NULL, &t5195_TI, &t110_0_0_0, RuntimeInvoker_t110_t523, t5195_m27379_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m27379_GM};
static MethodInfo* t5195_MIs[] =
{
	&m27379_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5195_1_0_0;
struct t5195;
extern Il2CppGenericClass t5195_GC;
TypeInfo t5195_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t5195_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5195_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5195_TI, &t5195_0_0_0, &t5195_1_0_0, NULL, &t5195_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif

#include "t11.h"
extern TypeInfo t122_TI;
extern MethodInfo m27379_MI;
extern MethodInfo m11009_MI;
extern MethodInfo m2582_MI;


 void m20850 (t3678 * __this, MethodInfo* method){
	{
		m20846(__this, &m20846_MI);
		return;
	}
}
extern MethodInfo m20851_MI;
 int32_t m20851 (t3678 * __this, t523  p0, t523  p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t523  L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t523_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t523  L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t523_TI), &L_2);
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
		t523  L_4 = p1;
		t5 * L_5 = Box(InitializedTypeInfo(&t523_TI), &L_4);
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
		t523  L_6 = p0;
		t5 * L_7 = Box(InitializedTypeInfo(&t523_TI), &L_6);
		if (!((t5*)IsInst(L_7, InitializedTypeInfo(&t5195_TI))))
		{
			goto IL_003e;
		}
	}
	{
		t523  L_8 = p0;
		t5 * L_9 = Box(InitializedTypeInfo(&t523_TI), &L_8);
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, t523  >::Invoke(&m27379_MI, ((t5*)Castclass(L_9, InitializedTypeInfo(&t5195_TI))), p1);
		return L_10;
	}

IL_003e:
	{
		t523  L_11 = p0;
		t5 * L_12 = Box(InitializedTypeInfo(&t523_TI), &L_11);
		if (!((t5 *)IsInst(L_12, InitializedTypeInfo(&t122_TI))))
		{
			goto IL_0062;
		}
	}
	{
		t523  L_13 = p0;
		t5 * L_14 = Box(InitializedTypeInfo(&t523_TI), &L_13);
		t523  L_15 = p1;
		t5 * L_16 = Box(InitializedTypeInfo(&t523_TI), &L_15);
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
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UILineInfo>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20850_GM;
MethodInfo m20850_MI = 
{
	".ctor", (methodPointerType)&m20850, &t3678_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20850_GM};
extern Il2CppType t523_0_0_0;
extern Il2CppType t523_0_0_0;
static ParameterInfo t3678_m20851_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t523_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t523_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t523_t523 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20851_GM;
MethodInfo m20851_MI = 
{
	"Compare", (methodPointerType)&m20851, &t3678_TI, &t110_0_0_0, RuntimeInvoker_t110_t523_t523, t3678_m20851_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20851_GM};
static MethodInfo* t3678_MIs[] =
{
	&m20850_MI,
	&m20851_MI,
	NULL
};
static MethodInfo* t3678_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m20851_MI,
	&m20848_MI,
	&m20851_MI,
};
static Il2CppInterfaceOffsetPair t3678_IOs[] = 
{
	{ &t5194_TI, 4},
	{ &t991_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3678_0_0_0;
extern Il2CppType t3678_1_0_0;
struct t3678;
extern Il2CppGenericClass t3678_GC;
extern TypeInfo t1509_TI;
TypeInfo t3678_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t3678_MIs, NULL, NULL, NULL, &t3677_TI, NULL, &t1509_TI, &t3678_TI, NULL, t3678_VT, &EmptyCustomAttributesCache, &t3678_TI, &t3678_0_0_0, &t3678_1_0_0, t3678_IOs, &t3678_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3678), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t3672.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3672_TI;
#include "t3672MD.h"



extern MethodInfo m20852_MI;
 void m20852 (t3672 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m20853_MI;
 int32_t m20853 (t3672 * __this, t523  p0, t523  p1, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m20853((t3672 *)__this->f9,p0, p1, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (t5 *, t5 * __this, t523  p0, t523  p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	typedef int32_t (*FunctionPointerType) (t5 * __this, t523  p0, t523  p1, MethodInfo* method);
	return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m20854_MI;
 t5 * m20854 (t3672 * __this, t523  p0, t523  p1, t222 * p2, t5 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t523_TI), &p0);
	__d_args[1] = Box(InitializedTypeInfo(&t523_TI), &p1);
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m20855_MI;
 int32_t m20855 (t3672 * __this, t5 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Comparison`1<UnityEngine.UILineInfo>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t3672_m20852_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20852_GM;
MethodInfo m20852_MI = 
{
	".ctor", (methodPointerType)&m20852, &t3672_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t3672_m20852_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20852_GM};
extern Il2CppType t523_0_0_0;
extern Il2CppType t523_0_0_0;
static ParameterInfo t3672_m20853_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t523_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t523_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t523_t523 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20853_GM;
MethodInfo m20853_MI = 
{
	"Invoke", (methodPointerType)&m20853, &t3672_TI, &t110_0_0_0, RuntimeInvoker_t110_t523_t523, t3672_m20853_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20853_GM};
extern Il2CppType t523_0_0_0;
extern Il2CppType t523_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3672_m20854_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t523_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t523_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t523_t523_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20854_GM;
MethodInfo m20854_MI = 
{
	"BeginInvoke", (methodPointerType)&m20854, &t3672_TI, &t221_0_0_0, RuntimeInvoker_t5_t523_t523_t5_t5, t3672_m20854_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL, &m20854_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t3672_m20855_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20855_GM;
MethodInfo m20855_MI = 
{
	"EndInvoke", (methodPointerType)&m20855, &t3672_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3672_m20855_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20855_GM};
static MethodInfo* t3672_MIs[] =
{
	&m20852_MI,
	&m20853_MI,
	&m20854_MI,
	&m20855_MI,
	NULL
};
static MethodInfo* t3672_VT[] =
{
	&m2342_MI,
	&m465_MI,
	&m2343_MI,
	&m467_MI,
	&m2344_MI,
	&m2345_MI,
	&m2344_MI,
	&m2346_MI,
	&m2347_MI,
	&m2348_MI,
	&m20853_MI,
	&m20854_MI,
	&m20855_MI,
};
static Il2CppInterfaceOffsetPair t3672_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3672_0_0_0;
extern Il2CppType t3672_1_0_0;
struct t3672;
extern Il2CppGenericClass t3672_GC;
TypeInfo t3672_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t3672_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t3672_TI, NULL, t3672_VT, &EmptyCustomAttributesCache, &t3672_TI, &t3672_0_0_0, &t3672_1_0_0, t3672_IOs, &t3672_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3672), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5197_TI;

#include "t505.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.RenderMode>
extern MethodInfo m35192_MI;
static PropertyInfo t5197____Current_PropertyInfo = 
{
	&t5197_TI, "Current", &m35192_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5197_PIs[] =
{
	&t5197____Current_PropertyInfo,
	NULL
};
extern Il2CppType t505_0_0_0;
extern void* RuntimeInvoker_t505 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35192_GM;
MethodInfo m35192_MI = 
{
	"get_Current", NULL, &t5197_TI, &t505_0_0_0, RuntimeInvoker_t505, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35192_GM};
static MethodInfo* t5197_MIs[] =
{
	&m35192_MI,
	NULL
};
extern TypeInfo t196_TI;
extern TypeInfo t132_TI;
static TypeInfo* t5197_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5197_0_0_0;
extern Il2CppType t5197_1_0_0;
struct t5197;
extern Il2CppGenericClass t5197_GC;
TypeInfo t5197_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5197_MIs, t5197_PIs, NULL, NULL, NULL, NULL, NULL, &t5197_TI, t5197_ITIs, NULL, &EmptyCustomAttributesCache, &t5197_TI, &t5197_0_0_0, &t5197_1_0_0, NULL, &t5197_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3679.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3679_TI;
#include "t3679MD.h"

#include "t133.h"
extern TypeInfo t505_TI;
extern TypeInfo t133_TI;
#include "t133MD.h"
#include "t107MD.h"
extern MethodInfo m20860_MI;
extern MethodInfo m4759_MI;
extern MethodInfo m4764_MI;
extern MethodInfo m27384_MI;
struct t107;
#include "t1181.h"
 int32_t m27384 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m20856_MI;
 void m20856 (t3679 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m20857_MI;
 t5 * m20857 (t3679 * __this, MethodInfo* method){
	{
		int32_t L_0 = m20860(__this, &m20860_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t505_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m20858_MI;
 void m20858 (t3679 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m20859_MI;
 bool m20859 (t3679 * __this, MethodInfo* method){
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
 int32_t m20860 (t3679 * __this, MethodInfo* method){
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
		int32_t L_8 = m27384(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m27384_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.RenderMode>
extern Il2CppType t107_0_0_1;
FieldInfo t3679_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3679_TI, offsetof(t3679, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3679_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3679_TI, offsetof(t3679, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3679_FIs[] =
{
	&t3679_f0_FieldInfo,
	&t3679_f1_FieldInfo,
	NULL
};
static PropertyInfo t3679____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3679_TI, "System.Collections.IEnumerator.Current", &m20857_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3679____Current_PropertyInfo = 
{
	&t3679_TI, "Current", &m20860_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3679_PIs[] =
{
	&t3679____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3679____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
extern Il2CppType t107_0_0_0;
static ParameterInfo t3679_m20856_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20856_GM;
MethodInfo m20856_MI = 
{
	".ctor", (methodPointerType)&m20856, &t3679_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3679_m20856_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20856_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20857_GM;
MethodInfo m20857_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m20857, &t3679_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20857_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20858_GM;
MethodInfo m20858_MI = 
{
	"Dispose", (methodPointerType)&m20858, &t3679_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20858_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20859_GM;
MethodInfo m20859_MI = 
{
	"MoveNext", (methodPointerType)&m20859, &t3679_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20859_GM};
extern Il2CppType t505_0_0_0;
extern void* RuntimeInvoker_t505 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20860_GM;
MethodInfo m20860_MI = 
{
	"get_Current", (methodPointerType)&m20860, &t3679_TI, &t505_0_0_0, RuntimeInvoker_t505, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20860_GM};
static MethodInfo* t3679_MIs[] =
{
	&m20856_MI,
	&m20857_MI,
	&m20858_MI,
	&m20859_MI,
	&m20860_MI,
	NULL
};
extern MethodInfo m2042_MI;
extern MethodInfo m2043_MI;
extern MethodInfo m2148_MI;
static MethodInfo* t3679_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m20857_MI,
	&m20859_MI,
	&m20858_MI,
	&m20860_MI,
};
static TypeInfo* t3679_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5197_TI,
};
static Il2CppInterfaceOffsetPair t3679_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5197_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3679_0_0_0;
extern Il2CppType t3679_1_0_0;
extern TypeInfo t267_TI;
extern Il2CppGenericClass t3679_GC;
extern TypeInfo t107_TI;
TypeInfo t3679_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3679_MIs, t3679_PIs, t3679_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3679_TI, t3679_ITIs, t3679_VT, &EmptyCustomAttributesCache, &t3679_TI, &t3679_0_0_0, &t3679_1_0_0, t3679_IOs, &t3679_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3679)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6546_TI;

#include "UnityEngine_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.RenderMode>
extern MethodInfo m35193_MI;
static PropertyInfo t6546____Count_PropertyInfo = 
{
	&t6546_TI, "Count", &m35193_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35194_MI;
static PropertyInfo t6546____IsReadOnly_PropertyInfo = 
{
	&t6546_TI, "IsReadOnly", &m35194_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6546_PIs[] =
{
	&t6546____Count_PropertyInfo,
	&t6546____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35193_GM;
MethodInfo m35193_MI = 
{
	"get_Count", NULL, &t6546_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35193_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35194_GM;
MethodInfo m35194_MI = 
{
	"get_IsReadOnly", NULL, &t6546_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35194_GM};
extern Il2CppType t505_0_0_0;
extern Il2CppType t505_0_0_0;
static ParameterInfo t6546_m35195_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t505_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35195_GM;
MethodInfo m35195_MI = 
{
	"Add", NULL, &t6546_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6546_m35195_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35195_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35196_GM;
MethodInfo m35196_MI = 
{
	"Clear", NULL, &t6546_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35196_GM};
extern Il2CppType t505_0_0_0;
static ParameterInfo t6546_m35197_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t505_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35197_GM;
MethodInfo m35197_MI = 
{
	"Contains", NULL, &t6546_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6546_m35197_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35197_GM};
extern Il2CppType t4447_0_0_0;
extern Il2CppType t4447_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6546_m35198_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4447_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35198_GM;
MethodInfo m35198_MI = 
{
	"CopyTo", NULL, &t6546_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6546_m35198_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35198_GM};
extern Il2CppType t505_0_0_0;
static ParameterInfo t6546_m35199_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t505_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35199_GM;
MethodInfo m35199_MI = 
{
	"Remove", NULL, &t6546_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6546_m35199_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35199_GM};
static MethodInfo* t6546_MIs[] =
{
	&m35193_MI,
	&m35194_MI,
	&m35195_MI,
	&m35196_MI,
	&m35197_MI,
	&m35198_MI,
	&m35199_MI,
	NULL
};
extern TypeInfo t739_TI;
extern TypeInfo t6548_TI;
static TypeInfo* t6546_ITIs[] = 
{
	&t739_TI,
	&t6548_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6546_0_0_0;
extern Il2CppType t6546_1_0_0;
struct t6546;
extern Il2CppGenericClass t6546_GC;
TypeInfo t6546_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6546_MIs, t6546_PIs, NULL, NULL, NULL, NULL, NULL, &t6546_TI, t6546_ITIs, NULL, &EmptyCustomAttributesCache, &t6546_TI, &t6546_0_0_0, &t6546_1_0_0, NULL, &t6546_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.RenderMode>
extern Il2CppType t5197_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35200_GM;
MethodInfo m35200_MI = 
{
	"GetEnumerator", NULL, &t6548_TI, &t5197_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35200_GM};
static MethodInfo* t6548_MIs[] =
{
	&m35200_MI,
	NULL
};
static TypeInfo* t6548_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6548_0_0_0;
extern Il2CppType t6548_1_0_0;
struct t6548;
extern Il2CppGenericClass t6548_GC;
TypeInfo t6548_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6548_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6548_TI, t6548_ITIs, NULL, &EmptyCustomAttributesCache, &t6548_TI, &t6548_0_0_0, &t6548_1_0_0, NULL, &t6548_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6547_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.RenderMode>
extern MethodInfo m35201_MI;
extern MethodInfo m35202_MI;
static PropertyInfo t6547____Item_PropertyInfo = 
{
	&t6547_TI, "Item", &m35201_MI, &m35202_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6547_PIs[] =
{
	&t6547____Item_PropertyInfo,
	NULL
};
extern Il2CppType t505_0_0_0;
static ParameterInfo t6547_m35203_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t505_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35203_GM;
MethodInfo m35203_MI = 
{
	"IndexOf", NULL, &t6547_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6547_m35203_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35203_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t505_0_0_0;
static ParameterInfo t6547_m35204_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t505_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35204_GM;
MethodInfo m35204_MI = 
{
	"Insert", NULL, &t6547_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6547_m35204_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35204_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6547_m35205_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35205_GM;
MethodInfo m35205_MI = 
{
	"RemoveAt", NULL, &t6547_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6547_m35205_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35205_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6547_m35201_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t505_0_0_0;
extern void* RuntimeInvoker_t505_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35201_GM;
MethodInfo m35201_MI = 
{
	"get_Item", NULL, &t6547_TI, &t505_0_0_0, RuntimeInvoker_t505_t110, t6547_m35201_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35201_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t505_0_0_0;
static ParameterInfo t6547_m35202_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t505_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35202_GM;
MethodInfo m35202_MI = 
{
	"set_Item", NULL, &t6547_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6547_m35202_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35202_GM};
static MethodInfo* t6547_MIs[] =
{
	&m35203_MI,
	&m35204_MI,
	&m35205_MI,
	&m35201_MI,
	&m35202_MI,
	NULL
};
static TypeInfo* t6547_ITIs[] = 
{
	&t739_TI,
	&t6546_TI,
	&t6548_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6547_0_0_0;
extern Il2CppType t6547_1_0_0;
struct t6547;
extern Il2CppGenericClass t6547_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6547_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6547_MIs, t6547_PIs, NULL, NULL, NULL, NULL, NULL, &t6547_TI, t6547_ITIs, NULL, &t2240__CustomAttributeCache, &t6547_TI, &t6547_0_0_0, &t6547_1_0_0, NULL, &t6547_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t3680.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3680_TI;
#include "t3680MD.h"

#include "t117.h"
#include "t695.h"
#include "t317.h"
#include "t3681.h"
extern TypeInfo t168_TI;
extern TypeInfo t317_TI;
extern TypeInfo t3681_TI;
extern TypeInfo t109_TI;
#include "t3681MD.h"
extern MethodInfo m20863_MI;
extern MethodInfo m20865_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Canvas>
extern Il2CppType t168_0_0_33;
FieldInfo t3680_f1_FieldInfo = 
{
	"m_Arg1", &t168_0_0_33, &t3680_TI, offsetof(t3680, f1), &EmptyCustomAttributesCache};
static FieldInfo* t3680_FIs[] =
{
	&t3680_f1_FieldInfo,
	NULL
};
extern Il2CppType t117_0_0_0;
extern Il2CppType t117_0_0_0;
extern Il2CppType t695_0_0_0;
extern Il2CppType t695_0_0_0;
extern Il2CppType t317_0_0_0;
extern Il2CppType t317_0_0_0;
static ParameterInfo t3680_m20861_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t117_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t317_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20861_GM;
MethodInfo m20861_MI = 
{
	".ctor", (methodPointerType)&m12070_gshared, &t3680_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t5, t3680_m20861_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL, &m20861_GM};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t3680_m20862_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20862_GM;
MethodInfo m20862_MI = 
{
	"Invoke", (methodPointerType)&m12072_gshared, &t3680_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3680_m20862_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20862_GM};
static MethodInfo* t3680_MIs[] =
{
	&m20861_MI,
	&m20862_MI,
	NULL
};
extern MethodInfo m20862_MI;
extern MethodInfo m20866_MI;
static MethodInfo* t3680_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m20862_MI,
	&m20866_MI,
};
extern Il2CppType t3682_0_0_0;
extern TypeInfo t3682_TI;
extern MethodInfo m27394_MI;
extern TypeInfo t317_TI;
extern MethodInfo m20868_MI;
extern TypeInfo t317_TI;
static Il2CppRGCTXData t3680_RGCTXData[8] = 
{
	&t3682_0_0_0/* Type Usage */,
	&t3682_TI/* Class Usage */,
	&m27394_MI/* Method Usage */,
	&t317_TI/* Class Usage */,
	&m20868_MI/* Method Usage */,
	&m20863_MI/* Method Usage */,
	&t317_TI/* Class Usage */,
	&m20865_MI/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t3680_0_0_0;
extern Il2CppType t3680_1_0_0;
struct t3680;
extern Il2CppGenericClass t3680_GC;
TypeInfo t3680_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t3680_MIs, NULL, t3680_FIs, NULL, &t3681_TI, NULL, NULL, &t3680_TI, NULL, t3680_VT, &EmptyCustomAttributesCache, &t3680_TI, &t3680_0_0_0, &t3680_1_0_0, NULL, &t3680_GC, NULL, NULL, NULL, t3680_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3680), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif

#include "t3682.h"
#include "t183.h"
extern TypeInfo t3682_TI;
#include "t694MD.h"
#include "t183MD.h"
#include "t3682MD.h"
extern MethodInfo m3438_MI;
extern MethodInfo m3603_MI;
extern MethodInfo m707_MI;
extern MethodInfo m3437_MI;
extern MethodInfo m3439_MI;
extern MethodInfo m3599_MI;
extern MethodInfo m3597_MI;
struct t694;
#include "t694.h"
struct t694;
 void m23910_gshared (t5 * __this, t5 * p0, MethodInfo* method);
#define m23910(__this, p0, method) (void)m23910_gshared((t5 *)__this, (t5 *)p0, method)
#define m27394(__this, p0, method) (void)m23910_gshared((t5 *)__this, (t5 *)p0, method)


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Canvas>
extern Il2CppType t3682_0_0_1;
FieldInfo t3681_f0_FieldInfo = 
{
	"Delegate", &t3682_0_0_1, &t3681_TI, offsetof(t3681, f0), &EmptyCustomAttributesCache};
static FieldInfo* t3681_FIs[] =
{
	&t3681_f0_FieldInfo,
	NULL
};
extern Il2CppType t5_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t3681_m20863_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20863_GM;
MethodInfo m20863_MI = 
{
	".ctor", (methodPointerType)&m12073_gshared, &t3681_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t3681_m20863_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20863_GM};
extern Il2CppType t3682_0_0_0;
static ParameterInfo t3681_m20864_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t3682_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20864_GM;
MethodInfo m20864_MI = 
{
	".ctor", (methodPointerType)&m12074_gshared, &t3681_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3681_m20864_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20864_GM};
extern Il2CppType t168_0_0_0;
static ParameterInfo t3681_m20865_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20865_GM;
MethodInfo m20865_MI = 
{
	"Invoke", (methodPointerType)&m12075_gshared, &t3681_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3681_m20865_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20865_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t3681_m20866_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20866_GM;
MethodInfo m20866_MI = 
{
	"Find", (methodPointerType)&m12076_gshared, &t3681_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t3681_m20866_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20866_GM};
static MethodInfo* t3681_MIs[] =
{
	&m20863_MI,
	&m20864_MI,
	&m20865_MI,
	&m20866_MI,
	NULL
};
static MethodInfo* t3681_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m20865_MI,
	&m20866_MI,
};
extern TypeInfo t3682_TI;
extern TypeInfo t317_TI;
static Il2CppRGCTXData t3681_RGCTXData[5] = 
{
	&t3682_0_0_0/* Type Usage */,
	&t3682_TI/* Class Usage */,
	&m27394_MI/* Method Usage */,
	&t317_TI/* Class Usage */,
	&m20868_MI/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t3681_0_0_0;
extern Il2CppType t3681_1_0_0;
extern TypeInfo t694_TI;
struct t3681;
extern Il2CppGenericClass t3681_GC;
TypeInfo t3681_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t3681_MIs, NULL, t3681_FIs, NULL, &t694_TI, NULL, NULL, &t3681_TI, NULL, t3681_VT, &EmptyCustomAttributesCache, &t3681_TI, &t3681_0_0_0, &t3681_1_0_0, NULL, &t3681_GC, NULL, NULL, NULL, t3681_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3681), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.Canvas>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t3682_m20867_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20867_GM;
MethodInfo m20867_MI = 
{
	".ctor", (methodPointerType)&m12077_gshared, &t3682_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t3682_m20867_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20867_GM};
extern Il2CppType t317_0_0_0;
static ParameterInfo t3682_m20868_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t317_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20868_GM;
MethodInfo m20868_MI = 
{
	"Invoke", (methodPointerType)&m12078_gshared, &t3682_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3682_m20868_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20868_GM};
extern Il2CppType t317_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3682_m20869_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t317_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20869_GM;
MethodInfo m20869_MI = 
{
	"BeginInvoke", (methodPointerType)&m12079_gshared, &t3682_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t3682_m20869_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m20869_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t3682_m20870_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20870_GM;
MethodInfo m20870_MI = 
{
	"EndInvoke", (methodPointerType)&m12080_gshared, &t3682_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3682_m20870_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20870_GM};
static MethodInfo* t3682_MIs[] =
{
	&m20867_MI,
	&m20868_MI,
	&m20869_MI,
	&m20870_MI,
	NULL
};
extern MethodInfo m20869_MI;
extern MethodInfo m20870_MI;
static MethodInfo* t3682_VT[] =
{
	&m2342_MI,
	&m465_MI,
	&m2343_MI,
	&m467_MI,
	&m2344_MI,
	&m2345_MI,
	&m2344_MI,
	&m2346_MI,
	&m2347_MI,
	&m2348_MI,
	&m20868_MI,
	&m20869_MI,
	&m20870_MI,
};
static Il2CppInterfaceOffsetPair t3682_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t3682_1_0_0;
struct t3682;
extern Il2CppGenericClass t3682_GC;
TypeInfo t3682_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t3682_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t3682_TI, NULL, t3682_VT, &EmptyCustomAttributesCache, &t3682_TI, &t3682_0_0_0, &t3682_1_0_0, t3682_IOs, &t3682_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3682), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t3683.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3683_TI;
#include "t3683MD.h"

#include "t497.h"
#include "t3684.h"
extern TypeInfo t497_TI;
extern TypeInfo t3684_TI;
#include "t3684MD.h"
extern MethodInfo m20873_MI;
extern MethodInfo m20875_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.CanvasGroup>
extern Il2CppType t168_0_0_33;
FieldInfo t3683_f1_FieldInfo = 
{
	"m_Arg1", &t168_0_0_33, &t3683_TI, offsetof(t3683, f1), &EmptyCustomAttributesCache};
static FieldInfo* t3683_FIs[] =
{
	&t3683_f1_FieldInfo,
	NULL
};
extern Il2CppType t117_0_0_0;
extern Il2CppType t695_0_0_0;
extern Il2CppType t497_0_0_0;
extern Il2CppType t497_0_0_0;
static ParameterInfo t3683_m20871_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t117_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t497_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20871_GM;
MethodInfo m20871_MI = 
{
	".ctor", (methodPointerType)&m12070_gshared, &t3683_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t5, t3683_m20871_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL, &m20871_GM};
extern Il2CppType t168_0_0_0;
static ParameterInfo t3683_m20872_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20872_GM;
MethodInfo m20872_MI = 
{
	"Invoke", (methodPointerType)&m12072_gshared, &t3683_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3683_m20872_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20872_GM};
static MethodInfo* t3683_MIs[] =
{
	&m20871_MI,
	&m20872_MI,
	NULL
};
extern MethodInfo m20872_MI;
extern MethodInfo m20876_MI;
static MethodInfo* t3683_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m20872_MI,
	&m20876_MI,
};
extern Il2CppType t3685_0_0_0;
extern TypeInfo t3685_TI;
extern MethodInfo m27395_MI;
extern TypeInfo t497_TI;
extern MethodInfo m20878_MI;
extern TypeInfo t497_TI;
static Il2CppRGCTXData t3683_RGCTXData[8] = 
{
	&t3685_0_0_0/* Type Usage */,
	&t3685_TI/* Class Usage */,
	&m27395_MI/* Method Usage */,
	&t497_TI/* Class Usage */,
	&m20878_MI/* Method Usage */,
	&m20873_MI/* Method Usage */,
	&t497_TI/* Class Usage */,
	&m20875_MI/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t3683_0_0_0;
extern Il2CppType t3683_1_0_0;
struct t3683;
extern Il2CppGenericClass t3683_GC;
TypeInfo t3683_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t3683_MIs, NULL, t3683_FIs, NULL, &t3684_TI, NULL, NULL, &t3683_TI, NULL, t3683_VT, &EmptyCustomAttributesCache, &t3683_TI, &t3683_0_0_0, &t3683_1_0_0, NULL, &t3683_GC, NULL, NULL, NULL, t3683_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3683), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif

#include "t3685.h"
extern TypeInfo t3685_TI;
#include "t3685MD.h"
struct t694;
#define m27395(__this, p0, method) (void)m23910_gshared((t5 *)__this, (t5 *)p0, method)


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.CanvasGroup>
extern Il2CppType t3685_0_0_1;
FieldInfo t3684_f0_FieldInfo = 
{
	"Delegate", &t3685_0_0_1, &t3684_TI, offsetof(t3684, f0), &EmptyCustomAttributesCache};
static FieldInfo* t3684_FIs[] =
{
	&t3684_f0_FieldInfo,
	NULL
};
extern Il2CppType t5_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t3684_m20873_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20873_GM;
MethodInfo m20873_MI = 
{
	".ctor", (methodPointerType)&m12073_gshared, &t3684_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t3684_m20873_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20873_GM};
extern Il2CppType t3685_0_0_0;
static ParameterInfo t3684_m20874_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t3685_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20874_GM;
MethodInfo m20874_MI = 
{
	".ctor", (methodPointerType)&m12074_gshared, &t3684_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3684_m20874_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20874_GM};
extern Il2CppType t168_0_0_0;
static ParameterInfo t3684_m20875_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20875_GM;
MethodInfo m20875_MI = 
{
	"Invoke", (methodPointerType)&m12075_gshared, &t3684_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3684_m20875_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20875_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t3684_m20876_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20876_GM;
MethodInfo m20876_MI = 
{
	"Find", (methodPointerType)&m12076_gshared, &t3684_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t3684_m20876_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20876_GM};
static MethodInfo* t3684_MIs[] =
{
	&m20873_MI,
	&m20874_MI,
	&m20875_MI,
	&m20876_MI,
	NULL
};
static MethodInfo* t3684_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m20875_MI,
	&m20876_MI,
};
extern TypeInfo t3685_TI;
extern TypeInfo t497_TI;
static Il2CppRGCTXData t3684_RGCTXData[5] = 
{
	&t3685_0_0_0/* Type Usage */,
	&t3685_TI/* Class Usage */,
	&m27395_MI/* Method Usage */,
	&t497_TI/* Class Usage */,
	&m20878_MI/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t3684_0_0_0;
extern Il2CppType t3684_1_0_0;
struct t3684;
extern Il2CppGenericClass t3684_GC;
TypeInfo t3684_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t3684_MIs, NULL, t3684_FIs, NULL, &t694_TI, NULL, NULL, &t3684_TI, NULL, t3684_VT, &EmptyCustomAttributesCache, &t3684_TI, &t3684_0_0_0, &t3684_1_0_0, NULL, &t3684_GC, NULL, NULL, NULL, t3684_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3684), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.CanvasGroup>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t3685_m20877_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20877_GM;
MethodInfo m20877_MI = 
{
	".ctor", (methodPointerType)&m12077_gshared, &t3685_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t3685_m20877_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20877_GM};
extern Il2CppType t497_0_0_0;
static ParameterInfo t3685_m20878_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t497_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20878_GM;
MethodInfo m20878_MI = 
{
	"Invoke", (methodPointerType)&m12078_gshared, &t3685_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3685_m20878_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20878_GM};
extern Il2CppType t497_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3685_m20879_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t497_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20879_GM;
MethodInfo m20879_MI = 
{
	"BeginInvoke", (methodPointerType)&m12079_gshared, &t3685_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t3685_m20879_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m20879_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t3685_m20880_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20880_GM;
MethodInfo m20880_MI = 
{
	"EndInvoke", (methodPointerType)&m12080_gshared, &t3685_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3685_m20880_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20880_GM};
static MethodInfo* t3685_MIs[] =
{
	&m20877_MI,
	&m20878_MI,
	&m20879_MI,
	&m20880_MI,
	NULL
};
extern MethodInfo m20879_MI;
extern MethodInfo m20880_MI;
static MethodInfo* t3685_VT[] =
{
	&m2342_MI,
	&m465_MI,
	&m2343_MI,
	&m467_MI,
	&m2344_MI,
	&m2345_MI,
	&m2344_MI,
	&m2346_MI,
	&m2347_MI,
	&m2348_MI,
	&m20878_MI,
	&m20879_MI,
	&m20880_MI,
};
static Il2CppInterfaceOffsetPair t3685_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t3685_1_0_0;
struct t3685;
extern Il2CppGenericClass t3685_GC;
TypeInfo t3685_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t3685_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t3685_TI, NULL, t3685_VT, &EmptyCustomAttributesCache, &t3685_TI, &t3685_0_0_0, &t3685_1_0_0, t3685_IOs, &t3685_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3685), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5199_TI;

#include "t316.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.CanvasRenderer>
extern MethodInfo m35206_MI;
static PropertyInfo t5199____Current_PropertyInfo = 
{
	&t5199_TI, "Current", &m35206_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5199_PIs[] =
{
	&t5199____Current_PropertyInfo,
	NULL
};
extern Il2CppType t316_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35206_GM;
MethodInfo m35206_MI = 
{
	"get_Current", NULL, &t5199_TI, &t316_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35206_GM};
static MethodInfo* t5199_MIs[] =
{
	&m35206_MI,
	NULL
};
static TypeInfo* t5199_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5199_0_0_0;
extern Il2CppType t5199_1_0_0;
struct t5199;
extern Il2CppGenericClass t5199_GC;
TypeInfo t5199_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5199_MIs, t5199_PIs, NULL, NULL, NULL, NULL, NULL, &t5199_TI, t5199_ITIs, NULL, &EmptyCustomAttributesCache, &t5199_TI, &t5199_0_0_0, &t5199_1_0_0, NULL, &t5199_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3686.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3686_TI;
#include "t3686MD.h"

extern TypeInfo t316_TI;
extern MethodInfo m20885_MI;
extern MethodInfo m27397_MI;
struct t107;
struct t107;
 t5 * m23596_gshared (t107 * __this, int32_t p0, MethodInfo* method);
#define m23596(__this, p0, method) (t5 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
#define m27397(__this, p0, method) (t316 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.CanvasRenderer>
extern Il2CppType t107_0_0_1;
FieldInfo t3686_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3686_TI, offsetof(t3686, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3686_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3686_TI, offsetof(t3686, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3686_FIs[] =
{
	&t3686_f0_FieldInfo,
	&t3686_f1_FieldInfo,
	NULL
};
extern MethodInfo m20882_MI;
static PropertyInfo t3686____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3686_TI, "System.Collections.IEnumerator.Current", &m20882_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3686____Current_PropertyInfo = 
{
	&t3686_TI, "Current", &m20885_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3686_PIs[] =
{
	&t3686____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3686____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3686_m20881_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20881_GM;
MethodInfo m20881_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3686_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3686_m20881_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20881_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20882_GM;
MethodInfo m20882_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3686_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20882_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20883_GM;
MethodInfo m20883_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3686_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20883_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20884_GM;
MethodInfo m20884_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3686_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20884_GM};
extern Il2CppType t316_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20885_GM;
MethodInfo m20885_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3686_TI, &t316_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20885_GM};
static MethodInfo* t3686_MIs[] =
{
	&m20881_MI,
	&m20882_MI,
	&m20883_MI,
	&m20884_MI,
	&m20885_MI,
	NULL
};
extern MethodInfo m20884_MI;
extern MethodInfo m20883_MI;
static MethodInfo* t3686_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m20882_MI,
	&m20884_MI,
	&m20883_MI,
	&m20885_MI,
};
static TypeInfo* t3686_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5199_TI,
};
static Il2CppInterfaceOffsetPair t3686_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5199_TI, 7},
};
extern TypeInfo t316_TI;
static Il2CppRGCTXData t3686_RGCTXData[3] = 
{
	&m20885_MI/* Method Usage */,
	&t316_TI/* Class Usage */,
	&m27397_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3686_0_0_0;
extern Il2CppType t3686_1_0_0;
extern Il2CppGenericClass t3686_GC;
TypeInfo t3686_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3686_MIs, t3686_PIs, t3686_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3686_TI, t3686_ITIs, t3686_VT, &EmptyCustomAttributesCache, &t3686_TI, &t3686_0_0_0, &t3686_1_0_0, t3686_IOs, &t3686_GC, NULL, NULL, NULL, t3686_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3686)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6549_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.CanvasRenderer>
extern MethodInfo m35207_MI;
static PropertyInfo t6549____Count_PropertyInfo = 
{
	&t6549_TI, "Count", &m35207_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35208_MI;
static PropertyInfo t6549____IsReadOnly_PropertyInfo = 
{
	&t6549_TI, "IsReadOnly", &m35208_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6549_PIs[] =
{
	&t6549____Count_PropertyInfo,
	&t6549____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35207_GM;
MethodInfo m35207_MI = 
{
	"get_Count", NULL, &t6549_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35207_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35208_GM;
MethodInfo m35208_MI = 
{
	"get_IsReadOnly", NULL, &t6549_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35208_GM};
extern Il2CppType t316_0_0_0;
extern Il2CppType t316_0_0_0;
static ParameterInfo t6549_m35209_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t316_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35209_GM;
MethodInfo m35209_MI = 
{
	"Add", NULL, &t6549_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6549_m35209_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35209_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35210_GM;
MethodInfo m35210_MI = 
{
	"Clear", NULL, &t6549_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35210_GM};
extern Il2CppType t316_0_0_0;
static ParameterInfo t6549_m35211_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t316_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35211_GM;
MethodInfo m35211_MI = 
{
	"Contains", NULL, &t6549_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6549_m35211_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35211_GM};
extern Il2CppType t4448_0_0_0;
extern Il2CppType t4448_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6549_m35212_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4448_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35212_GM;
MethodInfo m35212_MI = 
{
	"CopyTo", NULL, &t6549_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6549_m35212_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35212_GM};
extern Il2CppType t316_0_0_0;
static ParameterInfo t6549_m35213_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t316_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35213_GM;
MethodInfo m35213_MI = 
{
	"Remove", NULL, &t6549_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6549_m35213_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35213_GM};
static MethodInfo* t6549_MIs[] =
{
	&m35207_MI,
	&m35208_MI,
	&m35209_MI,
	&m35210_MI,
	&m35211_MI,
	&m35212_MI,
	&m35213_MI,
	NULL
};
extern TypeInfo t6551_TI;
static TypeInfo* t6549_ITIs[] = 
{
	&t739_TI,
	&t6551_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6549_0_0_0;
extern Il2CppType t6549_1_0_0;
struct t6549;
extern Il2CppGenericClass t6549_GC;
TypeInfo t6549_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6549_MIs, t6549_PIs, NULL, NULL, NULL, NULL, NULL, &t6549_TI, t6549_ITIs, NULL, &EmptyCustomAttributesCache, &t6549_TI, &t6549_0_0_0, &t6549_1_0_0, NULL, &t6549_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.CanvasRenderer>
extern Il2CppType t5199_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35214_GM;
MethodInfo m35214_MI = 
{
	"GetEnumerator", NULL, &t6551_TI, &t5199_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35214_GM};
static MethodInfo* t6551_MIs[] =
{
	&m35214_MI,
	NULL
};
static TypeInfo* t6551_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6551_0_0_0;
extern Il2CppType t6551_1_0_0;
struct t6551;
extern Il2CppGenericClass t6551_GC;
TypeInfo t6551_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6551_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6551_TI, t6551_ITIs, NULL, &EmptyCustomAttributesCache, &t6551_TI, &t6551_0_0_0, &t6551_1_0_0, NULL, &t6551_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6550_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.CanvasRenderer>
extern MethodInfo m35215_MI;
extern MethodInfo m35216_MI;
static PropertyInfo t6550____Item_PropertyInfo = 
{
	&t6550_TI, "Item", &m35215_MI, &m35216_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6550_PIs[] =
{
	&t6550____Item_PropertyInfo,
	NULL
};
extern Il2CppType t316_0_0_0;
static ParameterInfo t6550_m35217_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t316_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35217_GM;
MethodInfo m35217_MI = 
{
	"IndexOf", NULL, &t6550_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6550_m35217_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35217_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t316_0_0_0;
static ParameterInfo t6550_m35218_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t316_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35218_GM;
MethodInfo m35218_MI = 
{
	"Insert", NULL, &t6550_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6550_m35218_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35218_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6550_m35219_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35219_GM;
MethodInfo m35219_MI = 
{
	"RemoveAt", NULL, &t6550_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6550_m35219_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35219_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6550_m35215_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t316_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35215_GM;
MethodInfo m35215_MI = 
{
	"get_Item", NULL, &t6550_TI, &t316_0_0_0, RuntimeInvoker_t5_t110, t6550_m35215_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35215_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t316_0_0_0;
static ParameterInfo t6550_m35216_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t316_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35216_GM;
MethodInfo m35216_MI = 
{
	"set_Item", NULL, &t6550_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6550_m35216_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35216_GM};
static MethodInfo* t6550_MIs[] =
{
	&m35217_MI,
	&m35218_MI,
	&m35219_MI,
	&m35215_MI,
	&m35216_MI,
	NULL
};
static TypeInfo* t6550_ITIs[] = 
{
	&t739_TI,
	&t6549_TI,
	&t6551_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6550_0_0_0;
extern Il2CppType t6550_1_0_0;
struct t6550;
extern Il2CppGenericClass t6550_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6550_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6550_MIs, t6550_PIs, NULL, NULL, NULL, NULL, NULL, &t6550_TI, t6550_ITIs, NULL, &t2240__CustomAttributeCache, &t6550_TI, &t6550_0_0_0, &t6550_1_0_0, NULL, &t6550_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t3687.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3687_TI;
#include "t3687MD.h"

#include "t3688.h"
extern TypeInfo t3688_TI;
#include "t3688MD.h"
extern MethodInfo m20888_MI;
extern MethodInfo m20890_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.CanvasRenderer>
extern Il2CppType t168_0_0_33;
FieldInfo t3687_f1_FieldInfo = 
{
	"m_Arg1", &t168_0_0_33, &t3687_TI, offsetof(t3687, f1), &EmptyCustomAttributesCache};
static FieldInfo* t3687_FIs[] =
{
	&t3687_f1_FieldInfo,
	NULL
};
extern Il2CppType t117_0_0_0;
extern Il2CppType t695_0_0_0;
extern Il2CppType t316_0_0_0;
static ParameterInfo t3687_m20886_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t117_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t316_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20886_GM;
MethodInfo m20886_MI = 
{
	".ctor", (methodPointerType)&m12070_gshared, &t3687_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t5, t3687_m20886_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL, &m20886_GM};
extern Il2CppType t168_0_0_0;
static ParameterInfo t3687_m20887_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20887_GM;
MethodInfo m20887_MI = 
{
	"Invoke", (methodPointerType)&m12072_gshared, &t3687_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3687_m20887_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20887_GM};
static MethodInfo* t3687_MIs[] =
{
	&m20886_MI,
	&m20887_MI,
	NULL
};
extern MethodInfo m20887_MI;
extern MethodInfo m20891_MI;
static MethodInfo* t3687_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m20887_MI,
	&m20891_MI,
};
extern Il2CppType t3689_0_0_0;
extern TypeInfo t3689_TI;
extern MethodInfo m27407_MI;
extern TypeInfo t316_TI;
extern MethodInfo m20893_MI;
extern TypeInfo t316_TI;
static Il2CppRGCTXData t3687_RGCTXData[8] = 
{
	&t3689_0_0_0/* Type Usage */,
	&t3689_TI/* Class Usage */,
	&m27407_MI/* Method Usage */,
	&t316_TI/* Class Usage */,
	&m20893_MI/* Method Usage */,
	&m20888_MI/* Method Usage */,
	&t316_TI/* Class Usage */,
	&m20890_MI/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t3687_0_0_0;
extern Il2CppType t3687_1_0_0;
struct t3687;
extern Il2CppGenericClass t3687_GC;
TypeInfo t3687_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t3687_MIs, NULL, t3687_FIs, NULL, &t3688_TI, NULL, NULL, &t3687_TI, NULL, t3687_VT, &EmptyCustomAttributesCache, &t3687_TI, &t3687_0_0_0, &t3687_1_0_0, NULL, &t3687_GC, NULL, NULL, NULL, t3687_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3687), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif

#include "t3689.h"
extern TypeInfo t3689_TI;
#include "t3689MD.h"
struct t694;
#define m27407(__this, p0, method) (void)m23910_gshared((t5 *)__this, (t5 *)p0, method)


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.CanvasRenderer>
extern Il2CppType t3689_0_0_1;
FieldInfo t3688_f0_FieldInfo = 
{
	"Delegate", &t3689_0_0_1, &t3688_TI, offsetof(t3688, f0), &EmptyCustomAttributesCache};
static FieldInfo* t3688_FIs[] =
{
	&t3688_f0_FieldInfo,
	NULL
};
extern Il2CppType t5_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t3688_m20888_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20888_GM;
MethodInfo m20888_MI = 
{
	".ctor", (methodPointerType)&m12073_gshared, &t3688_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t3688_m20888_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20888_GM};
extern Il2CppType t3689_0_0_0;
static ParameterInfo t3688_m20889_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t3689_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20889_GM;
MethodInfo m20889_MI = 
{
	".ctor", (methodPointerType)&m12074_gshared, &t3688_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3688_m20889_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20889_GM};
extern Il2CppType t168_0_0_0;
static ParameterInfo t3688_m20890_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20890_GM;
MethodInfo m20890_MI = 
{
	"Invoke", (methodPointerType)&m12075_gshared, &t3688_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3688_m20890_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20890_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t3688_m20891_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20891_GM;
MethodInfo m20891_MI = 
{
	"Find", (methodPointerType)&m12076_gshared, &t3688_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t3688_m20891_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20891_GM};
static MethodInfo* t3688_MIs[] =
{
	&m20888_MI,
	&m20889_MI,
	&m20890_MI,
	&m20891_MI,
	NULL
};
static MethodInfo* t3688_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m20890_MI,
	&m20891_MI,
};
extern TypeInfo t3689_TI;
extern TypeInfo t316_TI;
static Il2CppRGCTXData t3688_RGCTXData[5] = 
{
	&t3689_0_0_0/* Type Usage */,
	&t3689_TI/* Class Usage */,
	&m27407_MI/* Method Usage */,
	&t316_TI/* Class Usage */,
	&m20893_MI/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t3688_0_0_0;
extern Il2CppType t3688_1_0_0;
struct t3688;
extern Il2CppGenericClass t3688_GC;
TypeInfo t3688_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t3688_MIs, NULL, t3688_FIs, NULL, &t694_TI, NULL, NULL, &t3688_TI, NULL, t3688_VT, &EmptyCustomAttributesCache, &t3688_TI, &t3688_0_0_0, &t3688_1_0_0, NULL, &t3688_GC, NULL, NULL, NULL, t3688_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3688), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.CanvasRenderer>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t3689_m20892_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20892_GM;
MethodInfo m20892_MI = 
{
	".ctor", (methodPointerType)&m12077_gshared, &t3689_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t3689_m20892_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20892_GM};
extern Il2CppType t316_0_0_0;
static ParameterInfo t3689_m20893_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t316_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20893_GM;
MethodInfo m20893_MI = 
{
	"Invoke", (methodPointerType)&m12078_gshared, &t3689_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3689_m20893_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20893_GM};
extern Il2CppType t316_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3689_m20894_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t316_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20894_GM;
MethodInfo m20894_MI = 
{
	"BeginInvoke", (methodPointerType)&m12079_gshared, &t3689_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t3689_m20894_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m20894_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t3689_m20895_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20895_GM;
MethodInfo m20895_MI = 
{
	"EndInvoke", (methodPointerType)&m12080_gshared, &t3689_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3689_m20895_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20895_GM};
static MethodInfo* t3689_MIs[] =
{
	&m20892_MI,
	&m20893_MI,
	&m20894_MI,
	&m20895_MI,
	NULL
};
extern MethodInfo m20894_MI;
extern MethodInfo m20895_MI;
static MethodInfo* t3689_VT[] =
{
	&m2342_MI,
	&m465_MI,
	&m2343_MI,
	&m467_MI,
	&m2344_MI,
	&m2345_MI,
	&m2344_MI,
	&m2346_MI,
	&m2347_MI,
	&m2348_MI,
	&m20893_MI,
	&m20894_MI,
	&m20895_MI,
};
static Il2CppInterfaceOffsetPair t3689_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t3689_1_0_0;
struct t3689;
extern Il2CppGenericClass t3689_GC;
TypeInfo t3689_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t3689_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t3689_TI, NULL, t3689_VT, &EmptyCustomAttributesCache, &t3689_TI, &t3689_0_0_0, &t3689_1_0_0, t3689_IOs, &t3689_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3689), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5201_TI;

#include "t670.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.WrapperlessIcall>
extern MethodInfo m35220_MI;
static PropertyInfo t5201____Current_PropertyInfo = 
{
	&t5201_TI, "Current", &m35220_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5201_PIs[] =
{
	&t5201____Current_PropertyInfo,
	NULL
};
extern Il2CppType t670_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35220_GM;
MethodInfo m35220_MI = 
{
	"get_Current", NULL, &t5201_TI, &t670_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35220_GM};
static MethodInfo* t5201_MIs[] =
{
	&m35220_MI,
	NULL
};
static TypeInfo* t5201_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5201_0_0_0;
extern Il2CppType t5201_1_0_0;
struct t5201;
extern Il2CppGenericClass t5201_GC;
TypeInfo t5201_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5201_MIs, t5201_PIs, NULL, NULL, NULL, NULL, NULL, &t5201_TI, t5201_ITIs, NULL, &EmptyCustomAttributesCache, &t5201_TI, &t5201_0_0_0, &t5201_1_0_0, NULL, &t5201_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3690.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3690_TI;
#include "t3690MD.h"

extern TypeInfo t670_TI;
extern MethodInfo m20900_MI;
extern MethodInfo m27409_MI;
struct t107;
#define m27409(__this, p0, method) (t670 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.WrapperlessIcall>
extern Il2CppType t107_0_0_1;
FieldInfo t3690_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3690_TI, offsetof(t3690, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3690_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3690_TI, offsetof(t3690, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3690_FIs[] =
{
	&t3690_f0_FieldInfo,
	&t3690_f1_FieldInfo,
	NULL
};
extern MethodInfo m20897_MI;
static PropertyInfo t3690____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3690_TI, "System.Collections.IEnumerator.Current", &m20897_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3690____Current_PropertyInfo = 
{
	&t3690_TI, "Current", &m20900_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3690_PIs[] =
{
	&t3690____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3690____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3690_m20896_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20896_GM;
MethodInfo m20896_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3690_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3690_m20896_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20896_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20897_GM;
MethodInfo m20897_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3690_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20897_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20898_GM;
MethodInfo m20898_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3690_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20898_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20899_GM;
MethodInfo m20899_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3690_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20899_GM};
extern Il2CppType t670_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20900_GM;
MethodInfo m20900_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3690_TI, &t670_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20900_GM};
static MethodInfo* t3690_MIs[] =
{
	&m20896_MI,
	&m20897_MI,
	&m20898_MI,
	&m20899_MI,
	&m20900_MI,
	NULL
};
extern MethodInfo m20899_MI;
extern MethodInfo m20898_MI;
static MethodInfo* t3690_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m20897_MI,
	&m20899_MI,
	&m20898_MI,
	&m20900_MI,
};
static TypeInfo* t3690_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5201_TI,
};
static Il2CppInterfaceOffsetPair t3690_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5201_TI, 7},
};
extern TypeInfo t670_TI;
static Il2CppRGCTXData t3690_RGCTXData[3] = 
{
	&m20900_MI/* Method Usage */,
	&t670_TI/* Class Usage */,
	&m27409_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3690_0_0_0;
extern Il2CppType t3690_1_0_0;
extern Il2CppGenericClass t3690_GC;
TypeInfo t3690_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3690_MIs, t3690_PIs, t3690_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3690_TI, t3690_ITIs, t3690_VT, &EmptyCustomAttributesCache, &t3690_TI, &t3690_0_0_0, &t3690_1_0_0, t3690_IOs, &t3690_GC, NULL, NULL, NULL, t3690_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3690)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6552_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.WrapperlessIcall>
extern MethodInfo m35221_MI;
static PropertyInfo t6552____Count_PropertyInfo = 
{
	&t6552_TI, "Count", &m35221_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35222_MI;
static PropertyInfo t6552____IsReadOnly_PropertyInfo = 
{
	&t6552_TI, "IsReadOnly", &m35222_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6552_PIs[] =
{
	&t6552____Count_PropertyInfo,
	&t6552____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35221_GM;
MethodInfo m35221_MI = 
{
	"get_Count", NULL, &t6552_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35221_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35222_GM;
MethodInfo m35222_MI = 
{
	"get_IsReadOnly", NULL, &t6552_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35222_GM};
extern Il2CppType t670_0_0_0;
extern Il2CppType t670_0_0_0;
static ParameterInfo t6552_m35223_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t670_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35223_GM;
MethodInfo m35223_MI = 
{
	"Add", NULL, &t6552_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6552_m35223_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35223_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35224_GM;
MethodInfo m35224_MI = 
{
	"Clear", NULL, &t6552_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35224_GM};
extern Il2CppType t670_0_0_0;
static ParameterInfo t6552_m35225_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t670_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35225_GM;
MethodInfo m35225_MI = 
{
	"Contains", NULL, &t6552_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6552_m35225_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35225_GM};
extern Il2CppType t4449_0_0_0;
extern Il2CppType t4449_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6552_m35226_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4449_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35226_GM;
MethodInfo m35226_MI = 
{
	"CopyTo", NULL, &t6552_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6552_m35226_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35226_GM};
extern Il2CppType t670_0_0_0;
static ParameterInfo t6552_m35227_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t670_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35227_GM;
MethodInfo m35227_MI = 
{
	"Remove", NULL, &t6552_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6552_m35227_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35227_GM};
static MethodInfo* t6552_MIs[] =
{
	&m35221_MI,
	&m35222_MI,
	&m35223_MI,
	&m35224_MI,
	&m35225_MI,
	&m35226_MI,
	&m35227_MI,
	NULL
};
extern TypeInfo t6554_TI;
static TypeInfo* t6552_ITIs[] = 
{
	&t739_TI,
	&t6554_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6552_0_0_0;
extern Il2CppType t6552_1_0_0;
struct t6552;
extern Il2CppGenericClass t6552_GC;
TypeInfo t6552_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6552_MIs, t6552_PIs, NULL, NULL, NULL, NULL, NULL, &t6552_TI, t6552_ITIs, NULL, &EmptyCustomAttributesCache, &t6552_TI, &t6552_0_0_0, &t6552_1_0_0, NULL, &t6552_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.WrapperlessIcall>
extern Il2CppType t5201_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35228_GM;
MethodInfo m35228_MI = 
{
	"GetEnumerator", NULL, &t6554_TI, &t5201_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35228_GM};
static MethodInfo* t6554_MIs[] =
{
	&m35228_MI,
	NULL
};
static TypeInfo* t6554_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6554_0_0_0;
extern Il2CppType t6554_1_0_0;
struct t6554;
extern Il2CppGenericClass t6554_GC;
TypeInfo t6554_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6554_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6554_TI, t6554_ITIs, NULL, &EmptyCustomAttributesCache, &t6554_TI, &t6554_0_0_0, &t6554_1_0_0, NULL, &t6554_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6553_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.WrapperlessIcall>
extern MethodInfo m35229_MI;
extern MethodInfo m35230_MI;
static PropertyInfo t6553____Item_PropertyInfo = 
{
	&t6553_TI, "Item", &m35229_MI, &m35230_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6553_PIs[] =
{
	&t6553____Item_PropertyInfo,
	NULL
};
extern Il2CppType t670_0_0_0;
static ParameterInfo t6553_m35231_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t670_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35231_GM;
MethodInfo m35231_MI = 
{
	"IndexOf", NULL, &t6553_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6553_m35231_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35231_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t670_0_0_0;
static ParameterInfo t6553_m35232_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t670_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35232_GM;
MethodInfo m35232_MI = 
{
	"Insert", NULL, &t6553_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6553_m35232_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35232_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6553_m35233_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35233_GM;
MethodInfo m35233_MI = 
{
	"RemoveAt", NULL, &t6553_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6553_m35233_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35233_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6553_m35229_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t670_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35229_GM;
MethodInfo m35229_MI = 
{
	"get_Item", NULL, &t6553_TI, &t670_0_0_0, RuntimeInvoker_t5_t110, t6553_m35229_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35229_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t670_0_0_0;
static ParameterInfo t6553_m35230_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t670_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35230_GM;
MethodInfo m35230_MI = 
{
	"set_Item", NULL, &t6553_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6553_m35230_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35230_GM};
static MethodInfo* t6553_MIs[] =
{
	&m35231_MI,
	&m35232_MI,
	&m35233_MI,
	&m35229_MI,
	&m35230_MI,
	NULL
};
static TypeInfo* t6553_ITIs[] = 
{
	&t739_TI,
	&t6552_TI,
	&t6554_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6553_0_0_0;
extern Il2CppType t6553_1_0_0;
struct t6553;
extern Il2CppGenericClass t6553_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6553_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6553_MIs, t6553_PIs, NULL, NULL, NULL, NULL, NULL, &t6553_TI, t6553_ITIs, NULL, &t2240__CustomAttributeCache, &t6553_TI, &t6553_0_0_0, &t6553_1_0_0, NULL, &t6553_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5203_TI;

#include "t503.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.DisallowMultipleComponent>
extern MethodInfo m35234_MI;
static PropertyInfo t5203____Current_PropertyInfo = 
{
	&t5203_TI, "Current", &m35234_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5203_PIs[] =
{
	&t5203____Current_PropertyInfo,
	NULL
};
extern Il2CppType t503_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35234_GM;
MethodInfo m35234_MI = 
{
	"get_Current", NULL, &t5203_TI, &t503_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35234_GM};
static MethodInfo* t5203_MIs[] =
{
	&m35234_MI,
	NULL
};
static TypeInfo* t5203_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5203_0_0_0;
extern Il2CppType t5203_1_0_0;
struct t5203;
extern Il2CppGenericClass t5203_GC;
TypeInfo t5203_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5203_MIs, t5203_PIs, NULL, NULL, NULL, NULL, NULL, &t5203_TI, t5203_ITIs, NULL, &EmptyCustomAttributesCache, &t5203_TI, &t5203_0_0_0, &t5203_1_0_0, NULL, &t5203_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3691.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3691_TI;
#include "t3691MD.h"

extern TypeInfo t503_TI;
extern MethodInfo m20905_MI;
extern MethodInfo m27420_MI;
struct t107;
#define m27420(__this, p0, method) (t503 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.DisallowMultipleComponent>
extern Il2CppType t107_0_0_1;
FieldInfo t3691_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3691_TI, offsetof(t3691, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3691_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3691_TI, offsetof(t3691, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3691_FIs[] =
{
	&t3691_f0_FieldInfo,
	&t3691_f1_FieldInfo,
	NULL
};
extern MethodInfo m20902_MI;
static PropertyInfo t3691____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3691_TI, "System.Collections.IEnumerator.Current", &m20902_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3691____Current_PropertyInfo = 
{
	&t3691_TI, "Current", &m20905_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3691_PIs[] =
{
	&t3691____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3691____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3691_m20901_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20901_GM;
MethodInfo m20901_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3691_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3691_m20901_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20901_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20902_GM;
MethodInfo m20902_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3691_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20902_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20903_GM;
MethodInfo m20903_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3691_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20903_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20904_GM;
MethodInfo m20904_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3691_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20904_GM};
extern Il2CppType t503_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20905_GM;
MethodInfo m20905_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3691_TI, &t503_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20905_GM};
static MethodInfo* t3691_MIs[] =
{
	&m20901_MI,
	&m20902_MI,
	&m20903_MI,
	&m20904_MI,
	&m20905_MI,
	NULL
};
extern MethodInfo m20904_MI;
extern MethodInfo m20903_MI;
static MethodInfo* t3691_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m20902_MI,
	&m20904_MI,
	&m20903_MI,
	&m20905_MI,
};
static TypeInfo* t3691_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5203_TI,
};
static Il2CppInterfaceOffsetPair t3691_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5203_TI, 7},
};
extern TypeInfo t503_TI;
static Il2CppRGCTXData t3691_RGCTXData[3] = 
{
	&m20905_MI/* Method Usage */,
	&t503_TI/* Class Usage */,
	&m27420_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3691_0_0_0;
extern Il2CppType t3691_1_0_0;
extern Il2CppGenericClass t3691_GC;
TypeInfo t3691_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3691_MIs, t3691_PIs, t3691_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3691_TI, t3691_ITIs, t3691_VT, &EmptyCustomAttributesCache, &t3691_TI, &t3691_0_0_0, &t3691_1_0_0, t3691_IOs, &t3691_GC, NULL, NULL, NULL, t3691_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3691)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6555_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.DisallowMultipleComponent>
extern MethodInfo m35235_MI;
static PropertyInfo t6555____Count_PropertyInfo = 
{
	&t6555_TI, "Count", &m35235_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35236_MI;
static PropertyInfo t6555____IsReadOnly_PropertyInfo = 
{
	&t6555_TI, "IsReadOnly", &m35236_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6555_PIs[] =
{
	&t6555____Count_PropertyInfo,
	&t6555____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35235_GM;
MethodInfo m35235_MI = 
{
	"get_Count", NULL, &t6555_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35235_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35236_GM;
MethodInfo m35236_MI = 
{
	"get_IsReadOnly", NULL, &t6555_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35236_GM};
extern Il2CppType t503_0_0_0;
extern Il2CppType t503_0_0_0;
static ParameterInfo t6555_m35237_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t503_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35237_GM;
MethodInfo m35237_MI = 
{
	"Add", NULL, &t6555_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6555_m35237_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35237_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35238_GM;
MethodInfo m35238_MI = 
{
	"Clear", NULL, &t6555_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35238_GM};
extern Il2CppType t503_0_0_0;
static ParameterInfo t6555_m35239_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t503_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35239_GM;
MethodInfo m35239_MI = 
{
	"Contains", NULL, &t6555_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6555_m35239_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35239_GM};
extern Il2CppType t672_0_0_0;
extern Il2CppType t672_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6555_m35240_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t672_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35240_GM;
MethodInfo m35240_MI = 
{
	"CopyTo", NULL, &t6555_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6555_m35240_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35240_GM};
extern Il2CppType t503_0_0_0;
static ParameterInfo t6555_m35241_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t503_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35241_GM;
MethodInfo m35241_MI = 
{
	"Remove", NULL, &t6555_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6555_m35241_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35241_GM};
static MethodInfo* t6555_MIs[] =
{
	&m35235_MI,
	&m35236_MI,
	&m35237_MI,
	&m35238_MI,
	&m35239_MI,
	&m35240_MI,
	&m35241_MI,
	NULL
};
extern TypeInfo t6557_TI;
static TypeInfo* t6555_ITIs[] = 
{
	&t739_TI,
	&t6557_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6555_0_0_0;
extern Il2CppType t6555_1_0_0;
struct t6555;
extern Il2CppGenericClass t6555_GC;
TypeInfo t6555_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6555_MIs, t6555_PIs, NULL, NULL, NULL, NULL, NULL, &t6555_TI, t6555_ITIs, NULL, &EmptyCustomAttributesCache, &t6555_TI, &t6555_0_0_0, &t6555_1_0_0, NULL, &t6555_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.DisallowMultipleComponent>
extern Il2CppType t5203_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35242_GM;
MethodInfo m35242_MI = 
{
	"GetEnumerator", NULL, &t6557_TI, &t5203_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35242_GM};
static MethodInfo* t6557_MIs[] =
{
	&m35242_MI,
	NULL
};
static TypeInfo* t6557_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6557_0_0_0;
extern Il2CppType t6557_1_0_0;
struct t6557;
extern Il2CppGenericClass t6557_GC;
TypeInfo t6557_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6557_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6557_TI, t6557_ITIs, NULL, &EmptyCustomAttributesCache, &t6557_TI, &t6557_0_0_0, &t6557_1_0_0, NULL, &t6557_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6556_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.DisallowMultipleComponent>
extern MethodInfo m35243_MI;
extern MethodInfo m35244_MI;
static PropertyInfo t6556____Item_PropertyInfo = 
{
	&t6556_TI, "Item", &m35243_MI, &m35244_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6556_PIs[] =
{
	&t6556____Item_PropertyInfo,
	NULL
};
extern Il2CppType t503_0_0_0;
static ParameterInfo t6556_m35245_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t503_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35245_GM;
MethodInfo m35245_MI = 
{
	"IndexOf", NULL, &t6556_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6556_m35245_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35245_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t503_0_0_0;
static ParameterInfo t6556_m35246_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t503_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35246_GM;
MethodInfo m35246_MI = 
{
	"Insert", NULL, &t6556_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6556_m35246_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35246_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6556_m35247_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35247_GM;
MethodInfo m35247_MI = 
{
	"RemoveAt", NULL, &t6556_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6556_m35247_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35247_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6556_m35243_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t503_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35243_GM;
MethodInfo m35243_MI = 
{
	"get_Item", NULL, &t6556_TI, &t503_0_0_0, RuntimeInvoker_t5_t110, t6556_m35243_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35243_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t503_0_0_0;
static ParameterInfo t6556_m35244_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t503_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35244_GM;
MethodInfo m35244_MI = 
{
	"set_Item", NULL, &t6556_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6556_m35244_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35244_GM};
static MethodInfo* t6556_MIs[] =
{
	&m35245_MI,
	&m35246_MI,
	&m35247_MI,
	&m35243_MI,
	&m35244_MI,
	NULL
};
static TypeInfo* t6556_ITIs[] = 
{
	&t739_TI,
	&t6555_TI,
	&t6557_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6556_0_0_0;
extern Il2CppType t6556_1_0_0;
struct t6556;
extern Il2CppGenericClass t6556_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6556_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6556_MIs, t6556_PIs, NULL, NULL, NULL, NULL, NULL, &t6556_TI, t6556_ITIs, NULL, &t2240__CustomAttributeCache, &t6556_TI, &t6556_0_0_0, &t6556_1_0_0, NULL, &t6556_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5205_TI;

#include "t504.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.ExecuteInEditMode>
extern MethodInfo m35248_MI;
static PropertyInfo t5205____Current_PropertyInfo = 
{
	&t5205_TI, "Current", &m35248_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5205_PIs[] =
{
	&t5205____Current_PropertyInfo,
	NULL
};
extern Il2CppType t504_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35248_GM;
MethodInfo m35248_MI = 
{
	"get_Current", NULL, &t5205_TI, &t504_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35248_GM};
static MethodInfo* t5205_MIs[] =
{
	&m35248_MI,
	NULL
};
static TypeInfo* t5205_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5205_0_0_0;
extern Il2CppType t5205_1_0_0;
struct t5205;
extern Il2CppGenericClass t5205_GC;
TypeInfo t5205_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5205_MIs, t5205_PIs, NULL, NULL, NULL, NULL, NULL, &t5205_TI, t5205_ITIs, NULL, &EmptyCustomAttributesCache, &t5205_TI, &t5205_0_0_0, &t5205_1_0_0, NULL, &t5205_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3692.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3692_TI;
#include "t3692MD.h"

extern TypeInfo t504_TI;
extern MethodInfo m20910_MI;
extern MethodInfo m27431_MI;
struct t107;
#define m27431(__this, p0, method) (t504 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.ExecuteInEditMode>
extern Il2CppType t107_0_0_1;
FieldInfo t3692_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3692_TI, offsetof(t3692, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3692_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3692_TI, offsetof(t3692, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3692_FIs[] =
{
	&t3692_f0_FieldInfo,
	&t3692_f1_FieldInfo,
	NULL
};
extern MethodInfo m20907_MI;
static PropertyInfo t3692____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3692_TI, "System.Collections.IEnumerator.Current", &m20907_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3692____Current_PropertyInfo = 
{
	&t3692_TI, "Current", &m20910_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3692_PIs[] =
{
	&t3692____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3692____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3692_m20906_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20906_GM;
MethodInfo m20906_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3692_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3692_m20906_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20906_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20907_GM;
MethodInfo m20907_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3692_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20907_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20908_GM;
MethodInfo m20908_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3692_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20908_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20909_GM;
MethodInfo m20909_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3692_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20909_GM};
extern Il2CppType t504_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20910_GM;
MethodInfo m20910_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3692_TI, &t504_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20910_GM};
static MethodInfo* t3692_MIs[] =
{
	&m20906_MI,
	&m20907_MI,
	&m20908_MI,
	&m20909_MI,
	&m20910_MI,
	NULL
};
extern MethodInfo m20909_MI;
extern MethodInfo m20908_MI;
static MethodInfo* t3692_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m20907_MI,
	&m20909_MI,
	&m20908_MI,
	&m20910_MI,
};
static TypeInfo* t3692_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5205_TI,
};
static Il2CppInterfaceOffsetPair t3692_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5205_TI, 7},
};
extern TypeInfo t504_TI;
static Il2CppRGCTXData t3692_RGCTXData[3] = 
{
	&m20910_MI/* Method Usage */,
	&t504_TI/* Class Usage */,
	&m27431_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3692_0_0_0;
extern Il2CppType t3692_1_0_0;
extern Il2CppGenericClass t3692_GC;
TypeInfo t3692_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3692_MIs, t3692_PIs, t3692_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3692_TI, t3692_ITIs, t3692_VT, &EmptyCustomAttributesCache, &t3692_TI, &t3692_0_0_0, &t3692_1_0_0, t3692_IOs, &t3692_GC, NULL, NULL, NULL, t3692_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3692)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6558_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.ExecuteInEditMode>
extern MethodInfo m35249_MI;
static PropertyInfo t6558____Count_PropertyInfo = 
{
	&t6558_TI, "Count", &m35249_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35250_MI;
static PropertyInfo t6558____IsReadOnly_PropertyInfo = 
{
	&t6558_TI, "IsReadOnly", &m35250_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6558_PIs[] =
{
	&t6558____Count_PropertyInfo,
	&t6558____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35249_GM;
MethodInfo m35249_MI = 
{
	"get_Count", NULL, &t6558_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35249_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35250_GM;
MethodInfo m35250_MI = 
{
	"get_IsReadOnly", NULL, &t6558_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35250_GM};
extern Il2CppType t504_0_0_0;
extern Il2CppType t504_0_0_0;
static ParameterInfo t6558_m35251_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35251_GM;
MethodInfo m35251_MI = 
{
	"Add", NULL, &t6558_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6558_m35251_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35251_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35252_GM;
MethodInfo m35252_MI = 
{
	"Clear", NULL, &t6558_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35252_GM};
extern Il2CppType t504_0_0_0;
static ParameterInfo t6558_m35253_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35253_GM;
MethodInfo m35253_MI = 
{
	"Contains", NULL, &t6558_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6558_m35253_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35253_GM};
extern Il2CppType t673_0_0_0;
extern Il2CppType t673_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6558_m35254_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t673_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35254_GM;
MethodInfo m35254_MI = 
{
	"CopyTo", NULL, &t6558_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6558_m35254_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35254_GM};
extern Il2CppType t504_0_0_0;
static ParameterInfo t6558_m35255_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35255_GM;
MethodInfo m35255_MI = 
{
	"Remove", NULL, &t6558_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6558_m35255_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35255_GM};
static MethodInfo* t6558_MIs[] =
{
	&m35249_MI,
	&m35250_MI,
	&m35251_MI,
	&m35252_MI,
	&m35253_MI,
	&m35254_MI,
	&m35255_MI,
	NULL
};
extern TypeInfo t6560_TI;
static TypeInfo* t6558_ITIs[] = 
{
	&t739_TI,
	&t6560_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6558_0_0_0;
extern Il2CppType t6558_1_0_0;
struct t6558;
extern Il2CppGenericClass t6558_GC;
TypeInfo t6558_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6558_MIs, t6558_PIs, NULL, NULL, NULL, NULL, NULL, &t6558_TI, t6558_ITIs, NULL, &EmptyCustomAttributesCache, &t6558_TI, &t6558_0_0_0, &t6558_1_0_0, NULL, &t6558_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.ExecuteInEditMode>
extern Il2CppType t5205_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35256_GM;
MethodInfo m35256_MI = 
{
	"GetEnumerator", NULL, &t6560_TI, &t5205_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35256_GM};
static MethodInfo* t6560_MIs[] =
{
	&m35256_MI,
	NULL
};
static TypeInfo* t6560_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6560_0_0_0;
extern Il2CppType t6560_1_0_0;
struct t6560;
extern Il2CppGenericClass t6560_GC;
TypeInfo t6560_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6560_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6560_TI, t6560_ITIs, NULL, &EmptyCustomAttributesCache, &t6560_TI, &t6560_0_0_0, &t6560_1_0_0, NULL, &t6560_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6559_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.ExecuteInEditMode>
extern MethodInfo m35257_MI;
extern MethodInfo m35258_MI;
static PropertyInfo t6559____Item_PropertyInfo = 
{
	&t6559_TI, "Item", &m35257_MI, &m35258_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6559_PIs[] =
{
	&t6559____Item_PropertyInfo,
	NULL
};
extern Il2CppType t504_0_0_0;
static ParameterInfo t6559_m35259_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35259_GM;
MethodInfo m35259_MI = 
{
	"IndexOf", NULL, &t6559_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6559_m35259_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35259_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t504_0_0_0;
static ParameterInfo t6559_m35260_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35260_GM;
MethodInfo m35260_MI = 
{
	"Insert", NULL, &t6559_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6559_m35260_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35260_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6559_m35261_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35261_GM;
MethodInfo m35261_MI = 
{
	"RemoveAt", NULL, &t6559_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6559_m35261_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35261_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6559_m35257_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t504_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35257_GM;
MethodInfo m35257_MI = 
{
	"get_Item", NULL, &t6559_TI, &t504_0_0_0, RuntimeInvoker_t5_t110, t6559_m35257_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35257_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t504_0_0_0;
static ParameterInfo t6559_m35258_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t504_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35258_GM;
MethodInfo m35258_MI = 
{
	"set_Item", NULL, &t6559_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6559_m35258_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35258_GM};
static MethodInfo* t6559_MIs[] =
{
	&m35259_MI,
	&m35260_MI,
	&m35261_MI,
	&m35257_MI,
	&m35258_MI,
	NULL
};
static TypeInfo* t6559_ITIs[] = 
{
	&t739_TI,
	&t6558_TI,
	&t6560_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6559_0_0_0;
extern Il2CppType t6559_1_0_0;
struct t6559;
extern Il2CppGenericClass t6559_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6559_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6559_MIs, t6559_PIs, NULL, NULL, NULL, NULL, NULL, &t6559_TI, t6559_ITIs, NULL, &t2240__CustomAttributeCache, &t6559_TI, &t6559_0_0_0, &t6559_1_0_0, NULL, &t6559_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5207_TI;

#include "t469.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.RequireComponent>
extern MethodInfo m35262_MI;
static PropertyInfo t5207____Current_PropertyInfo = 
{
	&t5207_TI, "Current", &m35262_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5207_PIs[] =
{
	&t5207____Current_PropertyInfo,
	NULL
};
extern Il2CppType t469_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35262_GM;
MethodInfo m35262_MI = 
{
	"get_Current", NULL, &t5207_TI, &t469_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35262_GM};
static MethodInfo* t5207_MIs[] =
{
	&m35262_MI,
	NULL
};
static TypeInfo* t5207_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5207_0_0_0;
extern Il2CppType t5207_1_0_0;
struct t5207;
extern Il2CppGenericClass t5207_GC;
TypeInfo t5207_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5207_MIs, t5207_PIs, NULL, NULL, NULL, NULL, NULL, &t5207_TI, t5207_ITIs, NULL, &EmptyCustomAttributesCache, &t5207_TI, &t5207_0_0_0, &t5207_1_0_0, NULL, &t5207_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3693.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3693_TI;
#include "t3693MD.h"

extern TypeInfo t469_TI;
extern MethodInfo m20915_MI;
extern MethodInfo m27442_MI;
struct t107;
#define m27442(__this, p0, method) (t469 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.RequireComponent>
extern Il2CppType t107_0_0_1;
FieldInfo t3693_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3693_TI, offsetof(t3693, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3693_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3693_TI, offsetof(t3693, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3693_FIs[] =
{
	&t3693_f0_FieldInfo,
	&t3693_f1_FieldInfo,
	NULL
};
extern MethodInfo m20912_MI;
static PropertyInfo t3693____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3693_TI, "System.Collections.IEnumerator.Current", &m20912_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3693____Current_PropertyInfo = 
{
	&t3693_TI, "Current", &m20915_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3693_PIs[] =
{
	&t3693____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3693____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3693_m20911_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20911_GM;
MethodInfo m20911_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3693_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3693_m20911_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20911_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20912_GM;
MethodInfo m20912_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3693_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20912_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20913_GM;
MethodInfo m20913_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3693_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20913_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20914_GM;
MethodInfo m20914_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3693_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20914_GM};
extern Il2CppType t469_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20915_GM;
MethodInfo m20915_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3693_TI, &t469_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20915_GM};
static MethodInfo* t3693_MIs[] =
{
	&m20911_MI,
	&m20912_MI,
	&m20913_MI,
	&m20914_MI,
	&m20915_MI,
	NULL
};
extern MethodInfo m20914_MI;
extern MethodInfo m20913_MI;
static MethodInfo* t3693_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m20912_MI,
	&m20914_MI,
	&m20913_MI,
	&m20915_MI,
};
static TypeInfo* t3693_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5207_TI,
};
static Il2CppInterfaceOffsetPair t3693_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5207_TI, 7},
};
extern TypeInfo t469_TI;
static Il2CppRGCTXData t3693_RGCTXData[3] = 
{
	&m20915_MI/* Method Usage */,
	&t469_TI/* Class Usage */,
	&m27442_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3693_0_0_0;
extern Il2CppType t3693_1_0_0;
extern Il2CppGenericClass t3693_GC;
TypeInfo t3693_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3693_MIs, t3693_PIs, t3693_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3693_TI, t3693_ITIs, t3693_VT, &EmptyCustomAttributesCache, &t3693_TI, &t3693_0_0_0, &t3693_1_0_0, t3693_IOs, &t3693_GC, NULL, NULL, NULL, t3693_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3693)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6561_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.RequireComponent>
extern MethodInfo m35263_MI;
static PropertyInfo t6561____Count_PropertyInfo = 
{
	&t6561_TI, "Count", &m35263_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35264_MI;
static PropertyInfo t6561____IsReadOnly_PropertyInfo = 
{
	&t6561_TI, "IsReadOnly", &m35264_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6561_PIs[] =
{
	&t6561____Count_PropertyInfo,
	&t6561____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35263_GM;
MethodInfo m35263_MI = 
{
	"get_Count", NULL, &t6561_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35263_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35264_GM;
MethodInfo m35264_MI = 
{
	"get_IsReadOnly", NULL, &t6561_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35264_GM};
extern Il2CppType t469_0_0_0;
extern Il2CppType t469_0_0_0;
static ParameterInfo t6561_m35265_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t469_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35265_GM;
MethodInfo m35265_MI = 
{
	"Add", NULL, &t6561_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6561_m35265_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35265_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35266_GM;
MethodInfo m35266_MI = 
{
	"Clear", NULL, &t6561_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35266_GM};
extern Il2CppType t469_0_0_0;
static ParameterInfo t6561_m35267_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t469_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35267_GM;
MethodInfo m35267_MI = 
{
	"Contains", NULL, &t6561_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6561_m35267_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35267_GM};
extern Il2CppType t674_0_0_0;
extern Il2CppType t674_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6561_m35268_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t674_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35268_GM;
MethodInfo m35268_MI = 
{
	"CopyTo", NULL, &t6561_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6561_m35268_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35268_GM};
extern Il2CppType t469_0_0_0;
static ParameterInfo t6561_m35269_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t469_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35269_GM;
MethodInfo m35269_MI = 
{
	"Remove", NULL, &t6561_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6561_m35269_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35269_GM};
static MethodInfo* t6561_MIs[] =
{
	&m35263_MI,
	&m35264_MI,
	&m35265_MI,
	&m35266_MI,
	&m35267_MI,
	&m35268_MI,
	&m35269_MI,
	NULL
};
extern TypeInfo t6563_TI;
static TypeInfo* t6561_ITIs[] = 
{
	&t739_TI,
	&t6563_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6561_0_0_0;
extern Il2CppType t6561_1_0_0;
struct t6561;
extern Il2CppGenericClass t6561_GC;
TypeInfo t6561_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6561_MIs, t6561_PIs, NULL, NULL, NULL, NULL, NULL, &t6561_TI, t6561_ITIs, NULL, &EmptyCustomAttributesCache, &t6561_TI, &t6561_0_0_0, &t6561_1_0_0, NULL, &t6561_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.RequireComponent>
extern Il2CppType t5207_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35270_GM;
MethodInfo m35270_MI = 
{
	"GetEnumerator", NULL, &t6563_TI, &t5207_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35270_GM};
static MethodInfo* t6563_MIs[] =
{
	&m35270_MI,
	NULL
};
static TypeInfo* t6563_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6563_0_0_0;
extern Il2CppType t6563_1_0_0;
struct t6563;
extern Il2CppGenericClass t6563_GC;
TypeInfo t6563_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6563_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6563_TI, t6563_ITIs, NULL, &EmptyCustomAttributesCache, &t6563_TI, &t6563_0_0_0, &t6563_1_0_0, NULL, &t6563_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6562_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.RequireComponent>
extern MethodInfo m35271_MI;
extern MethodInfo m35272_MI;
static PropertyInfo t6562____Item_PropertyInfo = 
{
	&t6562_TI, "Item", &m35271_MI, &m35272_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6562_PIs[] =
{
	&t6562____Item_PropertyInfo,
	NULL
};
extern Il2CppType t469_0_0_0;
static ParameterInfo t6562_m35273_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t469_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35273_GM;
MethodInfo m35273_MI = 
{
	"IndexOf", NULL, &t6562_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6562_m35273_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35273_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t469_0_0_0;
static ParameterInfo t6562_m35274_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t469_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35274_GM;
MethodInfo m35274_MI = 
{
	"Insert", NULL, &t6562_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6562_m35274_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35274_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6562_m35275_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35275_GM;
MethodInfo m35275_MI = 
{
	"RemoveAt", NULL, &t6562_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6562_m35275_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35275_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6562_m35271_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t469_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35271_GM;
MethodInfo m35271_MI = 
{
	"get_Item", NULL, &t6562_TI, &t469_0_0_0, RuntimeInvoker_t5_t110, t6562_m35271_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35271_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t469_0_0_0;
static ParameterInfo t6562_m35272_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t469_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35272_GM;
MethodInfo m35272_MI = 
{
	"set_Item", NULL, &t6562_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6562_m35272_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35272_GM};
static MethodInfo* t6562_MIs[] =
{
	&m35273_MI,
	&m35274_MI,
	&m35275_MI,
	&m35271_MI,
	&m35272_MI,
	NULL
};
static TypeInfo* t6562_ITIs[] = 
{
	&t739_TI,
	&t6561_TI,
	&t6563_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6562_0_0_0;
extern Il2CppType t6562_1_0_0;
struct t6562;
extern Il2CppGenericClass t6562_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6562_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6562_MIs, t6562_PIs, NULL, NULL, NULL, NULL, NULL, &t6562_TI, t6562_ITIs, NULL, &t2240__CustomAttributeCache, &t6562_TI, &t6562_0_0_0, &t6562_1_0_0, NULL, &t6562_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t765.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t765_TI;
#include "t765MD.h"

#include "t3695.h"
extern TypeInfo t1956_TI;
extern TypeInfo t3695_TI;
#include "t3695MD.h"
extern MethodInfo m4993_MI;
extern MethodInfo m5964_MI;
extern MethodInfo m20922_MI;
extern MethodInfo m4767_MI;
extern MethodInfo m27453_MI;
extern MethodInfo m20923_MI;
struct t107;
struct t107;
 void m23607_gshared (t5 * __this, t168** p0, int32_t p1, MethodInfo* method);
#define m23607(__this, p0, p1, method) (void)m23607_gshared((t5 *)__this, (t168**)p0, (int32_t)p1, method)
#define m27453(__this, p0, p1, method) (void)m23607_gshared((t5 *)__this, (t168**)p0, (int32_t)p1, method)


 t3695  m20922 (t765 * __this, MethodInfo* method){
	{
		t3695  L_0 = {0};
		m20923(&L_0, __this, &m20923_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.Stack`1<System.Type>
extern Il2CppType t110_0_0_32849;
FieldInfo t765_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t110_0_0_32849, &t765_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t675_0_0_1;
FieldInfo t765_f1_FieldInfo = 
{
	"_array", &t675_0_0_1, &t765_TI, offsetof(t765, f1), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t765_f2_FieldInfo = 
{
	"_size", &t110_0_0_1, &t765_TI, offsetof(t765, f2), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t765_f3_FieldInfo = 
{
	"_version", &t110_0_0_1, &t765_TI, offsetof(t765, f3), &EmptyCustomAttributesCache};
static FieldInfo* t765_FIs[] =
{
	&t765_f0_FieldInfo,
	&t765_f1_FieldInfo,
	&t765_f2_FieldInfo,
	&t765_f3_FieldInfo,
	NULL
};
static const int32_t t765_f0_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t765_f0_DefaultValue = 
{
	&t765_f0_FieldInfo, { (char*)&t765_f0_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t765_FDVs[] = 
{
	&t765_f0_DefaultValue,
	NULL
};
extern MethodInfo m20916_MI;
static PropertyInfo t765____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t765_TI, "System.Collections.ICollection.IsSynchronized", &m20916_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m20917_MI;
static PropertyInfo t765____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t765_TI, "System.Collections.ICollection.SyncRoot", &m20917_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3558_MI;
static PropertyInfo t765____Count_PropertyInfo = 
{
	&t765_TI, "Count", &m3558_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t765_PIs[] =
{
	&t765____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t765____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t765____Count_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m3553_GM;
MethodInfo m3553_MI = 
{
	".ctor", (methodPointerType)&m15203_gshared, &t765_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m3553_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20916_GM;
MethodInfo m20916_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m15204_gshared, &t765_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20916_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20917_GM;
MethodInfo m20917_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m15205_gshared, &t765_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20917_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t765_m20918_ParameterInfos[] = 
{
	{"dest", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"idx", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20918_GM;
MethodInfo m20918_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m15206_gshared, &t765_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t765_m20918_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20918_GM};
extern Il2CppType t3694_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20919_GM;
MethodInfo m20919_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m15207_gshared, &t765_TI, &t3694_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20919_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20920_GM;
MethodInfo m20920_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m15208_gshared, &t765_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20920_GM};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20921_GM;
MethodInfo m20921_MI = 
{
	"Peek", (methodPointerType)&m15209_gshared, &t765_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20921_GM};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m3556_GM;
MethodInfo m3556_MI = 
{
	"Pop", (methodPointerType)&m15210_gshared, &t765_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m3556_GM};
extern Il2CppType t114_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t765_m3554_ParameterInfos[] = 
{
	{"t", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m3554_GM;
MethodInfo m3554_MI = 
{
	"Push", (methodPointerType)&m15211_gshared, &t765_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t765_m3554_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m3554_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m3558_GM;
MethodInfo m3558_MI = 
{
	"get_Count", (methodPointerType)&m15212_gshared, &t765_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m3558_GM};
extern Il2CppType t3695_0_0_0;
extern void* RuntimeInvoker_t3695 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20922_GM;
MethodInfo m20922_MI = 
{
	"GetEnumerator", (methodPointerType)&m20922, &t765_TI, &t3695_0_0_0, RuntimeInvoker_t3695, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20922_GM};
static MethodInfo* t765_MIs[] =
{
	&m3553_MI,
	&m20916_MI,
	&m20917_MI,
	&m20918_MI,
	&m20919_MI,
	&m20920_MI,
	&m20921_MI,
	&m3556_MI,
	&m3554_MI,
	&m3558_MI,
	&m20922_MI,
	NULL
};
extern MethodInfo m20918_MI;
extern MethodInfo m20920_MI;
extern MethodInfo m20919_MI;
static MethodInfo* t765_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m3558_MI,
	&m20916_MI,
	&m20917_MI,
	&m20918_MI,
	&m20920_MI,
	&m20919_MI,
};
extern TypeInfo t811_TI;
extern TypeInfo t3696_TI;
static TypeInfo* t765_ITIs[] = 
{
	&t811_TI,
	&t739_TI,
	&t3696_TI,
};
static Il2CppInterfaceOffsetPair t765_IOs[] = 
{
	{ &t811_TI, 4},
	{ &t739_TI, 8},
	{ &t3696_TI, 9},
};
extern TypeInfo t3695_TI;
static Il2CppRGCTXData t765_RGCTXData[4] = 
{
	&m20922_MI/* Method Usage */,
	&t3695_TI/* Class Usage */,
	&m27453_MI/* Method Usage */,
	&m20923_MI/* Method Usage */,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t765_0_0_0;
extern Il2CppType t765_1_0_0;
struct t765;
extern Il2CppGenericClass t765_GC;
extern CustomAttributesCache t982__CustomAttributeCache;
TypeInfo t765_TI = 
{
	&g_System_dll_Image, NULL, "Stack`1", "System.Collections.Generic", t765_MIs, t765_PIs, t765_FIs, NULL, &t5_TI, NULL, NULL, &t765_TI, t765_ITIs, t765_VT, &t982__CustomAttributeCache, &t765_TI, &t765_0_0_0, &t765_1_0_0, t765_IOs, &t765_GC, NULL, t765_FDVs, NULL, t765_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t765), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 11, 3, 4, 0, 0, 10, 3, 3};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m20927_MI;


// Metadata Definition System.Collections.Generic.Stack`1/Enumerator<System.Type>
extern Il2CppType t765_0_0_1;
FieldInfo t3695_f0_FieldInfo = 
{
	"parent", &t765_0_0_1, &t3695_TI, offsetof(t3695, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3695_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3695_TI, offsetof(t3695, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3695_f2_FieldInfo = 
{
	"_version", &t110_0_0_1, &t3695_TI, offsetof(t3695, f2) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3695_FIs[] =
{
	&t3695_f0_FieldInfo,
	&t3695_f1_FieldInfo,
	&t3695_f2_FieldInfo,
	NULL
};
extern MethodInfo m20924_MI;
static PropertyInfo t3695____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3695_TI, "System.Collections.IEnumerator.Current", &m20924_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3695____Current_PropertyInfo = 
{
	&t3695_TI, "Current", &m20927_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3695_PIs[] =
{
	&t3695____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3695____Current_PropertyInfo,
	NULL
};
extern Il2CppType t765_0_0_0;
static ParameterInfo t3695_m20923_ParameterInfos[] = 
{
	{"t", 0, 134217728, &EmptyCustomAttributesCache, &t765_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20923_GM;
MethodInfo m20923_MI = 
{
	".ctor", (methodPointerType)&m15214_gshared, &t3695_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3695_m20923_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20923_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20924_GM;
MethodInfo m20924_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15215_gshared, &t3695_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20924_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20925_GM;
MethodInfo m20925_MI = 
{
	"Dispose", (methodPointerType)&m15216_gshared, &t3695_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20925_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20926_GM;
MethodInfo m20926_MI = 
{
	"MoveNext", (methodPointerType)&m15217_gshared, &t3695_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20926_GM};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20927_GM;
MethodInfo m20927_MI = 
{
	"get_Current", (methodPointerType)&m15218_gshared, &t3695_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20927_GM};
static MethodInfo* t3695_MIs[] =
{
	&m20923_MI,
	&m20924_MI,
	&m20925_MI,
	&m20926_MI,
	&m20927_MI,
	NULL
};
extern MethodInfo m20926_MI;
extern MethodInfo m20925_MI;
static MethodInfo* t3695_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m20924_MI,
	&m20926_MI,
	&m20925_MI,
	&m20927_MI,
};
extern TypeInfo t3694_TI;
static TypeInfo* t3695_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t3694_TI,
};
static Il2CppInterfaceOffsetPair t3695_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t3694_TI, 7},
};
extern TypeInfo t114_TI;
static Il2CppRGCTXData t3695_RGCTXData[2] = 
{
	&m20927_MI/* Method Usage */,
	&t114_TI/* Class Usage */,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t3695_0_0_0;
extern Il2CppType t3695_1_0_0;
extern Il2CppGenericClass t3695_GC;
extern TypeInfo t982_TI;
TypeInfo t3695_TI = 
{
	&g_System_dll_Image, NULL, "Enumerator", "", t3695_MIs, t3695_PIs, t3695_FIs, NULL, &t267_TI, NULL, &t982_TI, &t3695_TI, t3695_ITIs, t3695_VT, &EmptyCustomAttributesCache, &t3695_TI, &t3695_0_0_0, &t3695_1_0_0, t3695_IOs, &t3695_GC, NULL, NULL, NULL, t3695_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3695)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 3, 0, 0, 8, 3, 3};
#include "t766.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t766_TI;
#include "t766MD.h"

#include "t3702.h"
#include "t3698.h"
#include "t3699.h"
#include "t484.h"
#include "t3700.h"
#include "t3707.h"
#include "t3701.h"
extern TypeInfo t723_TI;
extern TypeInfo t1982_TI;
extern TypeInfo t1181_TI;
extern TypeInfo t3697_TI;
extern TypeInfo t3702_TI;
extern TypeInfo t3698_TI;
extern TypeInfo t484_TI;
extern TypeInfo t3699_TI;
extern TypeInfo t3700_TI;
extern TypeInfo t3707_TI;
#include "t1181MD.h"
#include "t166MD.h"
#include "t3698MD.h"
#include "t484MD.h"
#include "t3699MD.h"
#include "t3700MD.h"
#include "t3702MD.h"
#include "t3707MD.h"
extern MethodInfo m20974_MI;
extern MethodInfo m20975_MI;
extern MethodInfo m4992_MI;
extern MethodInfo m4768_MI;
extern MethodInfo m20961_MI;
extern MethodInfo m20963_MI;
extern MethodInfo m20948_MI;
extern MethodInfo m31221_MI;
extern MethodInfo m20947_MI;
extern MethodInfo m20958_MI;
extern MethodInfo m6742_MI;
extern MethodInfo m3560_MI;
extern MethodInfo m20952_MI;
extern MethodInfo m20959_MI;
extern MethodInfo m20962_MI;
extern MethodInfo m20964_MI;
extern MethodInfo m20946_MI;
extern MethodInfo m20971_MI;
extern MethodInfo m5932_MI;
extern MethodInfo m20972_MI;
extern MethodInfo m31226_MI;
extern MethodInfo m31228_MI;
extern MethodInfo m31220_MI;
extern MethodInfo m747_MI;
extern MethodInfo m516_MI;
extern MethodInfo m20982_MI;
extern MethodInfo m5905_MI;
extern MethodInfo m27455_MI;
extern MethodInfo m20955_MI;
extern MethodInfo m20956_MI;
extern MethodInfo m3596_MI;
extern MethodInfo m21057_MI;
extern MethodInfo m21061_MI;
extern MethodInfo m20976_MI;
extern MethodInfo m20960_MI;
extern MethodInfo m20966_MI;
extern MethodInfo m21067_MI;
extern MethodInfo m27457_MI;
extern MethodInfo m27465_MI;
extern MethodInfo m6741_MI;
struct t107;
#include "t3705.h"
struct t107;
#include "t2334.h"
 int32_t m11458_gshared (t5 * __this, t168* p0, t5 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m11458(__this, p0, p1, p2, p3, method) (int32_t)m11458_gshared((t5 *)__this, (t168*)p0, (t5 *)p1, (int32_t)p2, (int32_t)p3, method)
#define m27455(__this, p0, p1, p2, p3, method) (int32_t)m11458_gshared((t5 *)__this, (t168*)p0, (t5 *)p1, (int32_t)p2, (int32_t)p3, method)
struct t107;
struct t107;
 void m23676_gshared (t5 * __this, t168* p0, int32_t p1, int32_t p2, t5* p3, MethodInfo* method);
#define m23676(__this, p0, p1, p2, p3, method) (void)m23676_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (int32_t)p2, (t5*)p3, method)
#define m27457(__this, p0, p1, p2, p3, method) (void)m23676_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (int32_t)p2, (t5*)p3, method)
struct t107;
#include "t142.h"
struct t107;
#include "t2458.h"
 void m23827_gshared (t5 * __this, t168* p0, int32_t p1, t2458 * p2, MethodInfo* method);
#define m23827(__this, p0, p1, p2, method) (void)m23827_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (t2458 *)p2, method)
#define m27465(__this, p0, p1, p2, method) (void)m23827_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (t2458 *)p2, method)


 t3702  m20958 (t766 * __this, MethodInfo* method){
	{
		t3702  L_0 = {0};
		m20976(&L_0, __this, &m20976_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<System.Type>
extern Il2CppType t110_0_0_32849;
FieldInfo t766_f0_FieldInfo = 
{
	"DefaultCapacity", &t110_0_0_32849, &t766_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t675_0_0_1;
FieldInfo t766_f1_FieldInfo = 
{
	"_items", &t675_0_0_1, &t766_TI, offsetof(t766, f1), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t766_f2_FieldInfo = 
{
	"_size", &t110_0_0_1, &t766_TI, offsetof(t766, f2), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t766_f3_FieldInfo = 
{
	"_version", &t110_0_0_1, &t766_TI, offsetof(t766, f3), &EmptyCustomAttributesCache};
extern Il2CppType t675_0_0_49;
FieldInfo t766_f4_FieldInfo = 
{
	"EmptyArray", &t675_0_0_49, &t766_TI, offsetof(t766_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t766_FIs[] =
{
	&t766_f0_FieldInfo,
	&t766_f1_FieldInfo,
	&t766_f2_FieldInfo,
	&t766_f3_FieldInfo,
	&t766_f4_FieldInfo,
	NULL
};
static const int32_t t766_f0_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t766_f0_DefaultValue = 
{
	&t766_f0_FieldInfo, { (char*)&t766_f0_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t766_FDVs[] = 
{
	&t766_f0_DefaultValue,
	NULL
};
extern MethodInfo m20939_MI;
static PropertyInfo t766____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t766_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m20939_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m20940_MI;
static PropertyInfo t766____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t766_TI, "System.Collections.ICollection.IsSynchronized", &m20940_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m20941_MI;
static PropertyInfo t766____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t766_TI, "System.Collections.ICollection.SyncRoot", &m20941_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m20942_MI;
static PropertyInfo t766____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t766_TI, "System.Collections.IList.IsFixedSize", &m20942_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m20943_MI;
static PropertyInfo t766____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t766_TI, "System.Collections.IList.IsReadOnly", &m20943_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m20944_MI;
extern MethodInfo m20945_MI;
static PropertyInfo t766____System_Collections_IList_Item_PropertyInfo = 
{
	&t766_TI, "System.Collections.IList.Item", &m20944_MI, &m20945_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t766____Capacity_PropertyInfo = 
{
	&t766_TI, "Capacity", &m20971_MI, &m20972_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m20973_MI;
static PropertyInfo t766____Count_PropertyInfo = 
{
	&t766_TI, "Count", &m20973_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t766____Item_PropertyInfo = 
{
	&t766_TI, "Item", &m20974_MI, &m20975_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t766_PIs[] =
{
	&t766____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t766____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t766____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t766____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t766____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t766____System_Collections_IList_Item_PropertyInfo,
	&t766____Capacity_PropertyInfo,
	&t766____Count_PropertyInfo,
	&t766____Item_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m3559_GM;
MethodInfo m3559_MI = 
{
	".ctor", (methodPointerType)&m11648_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m3559_GM};
extern Il2CppType t3696_0_0_0;
extern Il2CppType t3696_0_0_0;
static ParameterInfo t766_m20928_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t3696_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20928_GM;
MethodInfo m20928_MI = 
{
	".ctor", (methodPointerType)&m11650_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t766_m20928_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20928_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t766_m20929_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20929_GM;
MethodInfo m20929_MI = 
{
	".ctor", (methodPointerType)&m11652_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t766_m20929_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20929_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20930_GM;
MethodInfo m20930_MI = 
{
	".cctor", (methodPointerType)&m11654_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20930_GM};
extern Il2CppType t3694_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20931_GM;
MethodInfo m20931_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m11656_gshared, &t766_TI, &t3694_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20931_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t766_m20932_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20932_GM;
MethodInfo m20932_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11658_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t766_m20932_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20932_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20933_GM;
MethodInfo m20933_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11660_gshared, &t766_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20933_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t766_m20934_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20934_GM;
MethodInfo m20934_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11662_gshared, &t766_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t766_m20934_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20934_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t766_m20935_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20935_GM;
MethodInfo m20935_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11664_gshared, &t766_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t766_m20935_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20935_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t766_m20936_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20936_GM;
MethodInfo m20936_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11666_gshared, &t766_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t766_m20936_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20936_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t766_m20937_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20937_GM;
MethodInfo m20937_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11668_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t766_m20937_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20937_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t766_m20938_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20938_GM;
MethodInfo m20938_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11670_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t766_m20938_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20938_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20939_GM;
MethodInfo m20939_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11672_gshared, &t766_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20939_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20940_GM;
MethodInfo m20940_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11674_gshared, &t766_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20940_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20941_GM;
MethodInfo m20941_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11676_gshared, &t766_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20941_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20942_GM;
MethodInfo m20942_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11678_gshared, &t766_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20942_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20943_GM;
MethodInfo m20943_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11680_gshared, &t766_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20943_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t766_m20944_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20944_GM;
MethodInfo m20944_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11682_gshared, &t766_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t766_m20944_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20944_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t766_m20945_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20945_GM;
MethodInfo m20945_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11684_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t766_m20945_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20945_GM};
extern Il2CppType t114_0_0_0;
static ParameterInfo t766_m3560_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m3560_GM;
MethodInfo m3560_MI = 
{
	"Add", (methodPointerType)&m11686_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t766_m3560_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m3560_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t766_m20946_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20946_GM;
MethodInfo m20946_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m11688_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t766_m20946_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20946_GM};
extern Il2CppType t3697_0_0_0;
extern Il2CppType t3697_0_0_0;
static ParameterInfo t766_m20947_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t3697_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20947_GM;
MethodInfo m20947_MI = 
{
	"AddCollection", (methodPointerType)&m11690_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t766_m20947_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20947_GM};
extern Il2CppType t3696_0_0_0;
static ParameterInfo t766_m20948_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t3696_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20948_GM;
MethodInfo m20948_MI = 
{
	"AddEnumerable", (methodPointerType)&m11692_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t766_m20948_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20948_GM};
extern Il2CppType t3696_0_0_0;
static ParameterInfo t766_m20949_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t3696_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20949_GM;
MethodInfo m20949_MI = 
{
	"AddRange", (methodPointerType)&m11693_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t766_m20949_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20949_GM};
extern Il2CppType t3698_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20950_GM;
MethodInfo m20950_MI = 
{
	"AsReadOnly", (methodPointerType)&m11695_gshared, &t766_TI, &t3698_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20950_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20951_GM;
MethodInfo m20951_MI = 
{
	"Clear", (methodPointerType)&m11696_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20951_GM};
extern Il2CppType t114_0_0_0;
static ParameterInfo t766_m20952_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20952_GM;
MethodInfo m20952_MI = 
{
	"Contains", (methodPointerType)&m11698_gshared, &t766_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t766_m20952_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20952_GM};
extern Il2CppType t675_0_0_0;
extern Il2CppType t675_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t766_m20953_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t675_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20953_GM;
MethodInfo m20953_MI = 
{
	"CopyTo", (methodPointerType)&m11700_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t766_m20953_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20953_GM};
extern Il2CppType t3699_0_0_0;
extern Il2CppType t3699_0_0_0;
static ParameterInfo t766_m20954_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t3699_0_0_0},
};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20954_GM;
MethodInfo m20954_MI = 
{
	"Find", (methodPointerType)&m11702_gshared, &t766_TI, &t114_0_0_0, RuntimeInvoker_t5_t5, t766_m20954_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20954_GM};
extern Il2CppType t3699_0_0_0;
static ParameterInfo t766_m20955_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t3699_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20955_GM;
MethodInfo m20955_MI = 
{
	"CheckMatch", (methodPointerType)&m11704_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t766_m20955_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20955_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t3699_0_0_0;
static ParameterInfo t766_m20956_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t3699_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20956_GM;
MethodInfo m20956_MI = 
{
	"GetIndex", (methodPointerType)&m11706_gshared, &t766_TI, &t110_0_0_0, RuntimeInvoker_t110_t110_t110_t5, t766_m20956_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL, &m20956_GM};
extern Il2CppType t3700_0_0_0;
extern Il2CppType t3700_0_0_0;
static ParameterInfo t766_m20957_ParameterInfos[] = 
{
	{"action", 0, 134217728, &EmptyCustomAttributesCache, &t3700_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20957_GM;
MethodInfo m20957_MI = 
{
	"ForEach", (methodPointerType)&m11707_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t766_m20957_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20957_GM};
extern Il2CppType t3702_0_0_0;
extern void* RuntimeInvoker_t3702 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20958_GM;
MethodInfo m20958_MI = 
{
	"GetEnumerator", (methodPointerType)&m20958, &t766_TI, &t3702_0_0_0, RuntimeInvoker_t3702, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20958_GM};
extern Il2CppType t114_0_0_0;
static ParameterInfo t766_m20959_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20959_GM;
MethodInfo m20959_MI = 
{
	"IndexOf", (methodPointerType)&m11709_gshared, &t766_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t766_m20959_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20959_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t766_m20960_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20960_GM;
MethodInfo m20960_MI = 
{
	"Shift", (methodPointerType)&m11711_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t766_m20960_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20960_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t766_m20961_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20961_GM;
MethodInfo m20961_MI = 
{
	"CheckIndex", (methodPointerType)&m11713_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t766_m20961_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20961_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t766_m20962_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20962_GM;
MethodInfo m20962_MI = 
{
	"Insert", (methodPointerType)&m11715_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t766_m20962_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20962_GM};
extern Il2CppType t3696_0_0_0;
static ParameterInfo t766_m20963_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t3696_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20963_GM;
MethodInfo m20963_MI = 
{
	"CheckCollection", (methodPointerType)&m11717_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t766_m20963_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20963_GM};
extern Il2CppType t114_0_0_0;
static ParameterInfo t766_m20964_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20964_GM;
MethodInfo m20964_MI = 
{
	"Remove", (methodPointerType)&m11719_gshared, &t766_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t766_m20964_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20964_GM};
extern Il2CppType t3699_0_0_0;
static ParameterInfo t766_m20965_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t3699_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20965_GM;
MethodInfo m20965_MI = 
{
	"RemoveAll", (methodPointerType)&m11721_gshared, &t766_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t766_m20965_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20965_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t766_m20966_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20966_GM;
MethodInfo m20966_MI = 
{
	"RemoveAt", (methodPointerType)&m11723_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t766_m20966_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20966_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20967_GM;
MethodInfo m20967_MI = 
{
	"Reverse", (methodPointerType)&m11725_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20967_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20968_GM;
MethodInfo m20968_MI = 
{
	"Sort", (methodPointerType)&m11727_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20968_GM};
extern Il2CppType t3701_0_0_0;
extern Il2CppType t3701_0_0_0;
static ParameterInfo t766_m20969_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t3701_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20969_GM;
MethodInfo m20969_MI = 
{
	"Sort", (methodPointerType)&m11729_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t766_m20969_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20969_GM};
extern Il2CppType t675_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m3561_GM;
MethodInfo m3561_MI = 
{
	"ToArray", (methodPointerType)&m11731_gshared, &t766_TI, &t675_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m3561_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20970_GM;
MethodInfo m20970_MI = 
{
	"TrimExcess", (methodPointerType)&m11733_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20970_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20971_GM;
MethodInfo m20971_MI = 
{
	"get_Capacity", (methodPointerType)&m11735_gshared, &t766_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20971_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t766_m20972_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20972_GM;
MethodInfo m20972_MI = 
{
	"set_Capacity", (methodPointerType)&m11737_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t766_m20972_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20972_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20973_GM;
MethodInfo m20973_MI = 
{
	"get_Count", (methodPointerType)&m11738_gshared, &t766_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20973_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t766_m20974_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20974_GM;
MethodInfo m20974_MI = 
{
	"get_Item", (methodPointerType)&m11740_gshared, &t766_TI, &t114_0_0_0, RuntimeInvoker_t5_t110, t766_m20974_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20974_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t766_m20975_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20975_GM;
MethodInfo m20975_MI = 
{
	"set_Item", (methodPointerType)&m11742_gshared, &t766_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t766_m20975_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20975_GM};
static MethodInfo* t766_MIs[] =
{
	&m3559_MI,
	&m20928_MI,
	&m20929_MI,
	&m20930_MI,
	&m20931_MI,
	&m20932_MI,
	&m20933_MI,
	&m20934_MI,
	&m20935_MI,
	&m20936_MI,
	&m20937_MI,
	&m20938_MI,
	&m20939_MI,
	&m20940_MI,
	&m20941_MI,
	&m20942_MI,
	&m20943_MI,
	&m20944_MI,
	&m20945_MI,
	&m3560_MI,
	&m20946_MI,
	&m20947_MI,
	&m20948_MI,
	&m20949_MI,
	&m20950_MI,
	&m20951_MI,
	&m20952_MI,
	&m20953_MI,
	&m20954_MI,
	&m20955_MI,
	&m20956_MI,
	&m20957_MI,
	&m20958_MI,
	&m20959_MI,
	&m20960_MI,
	&m20961_MI,
	&m20962_MI,
	&m20963_MI,
	&m20964_MI,
	&m20965_MI,
	&m20966_MI,
	&m20967_MI,
	&m20968_MI,
	&m20969_MI,
	&m3561_MI,
	&m20970_MI,
	&m20971_MI,
	&m20972_MI,
	&m20973_MI,
	&m20974_MI,
	&m20975_MI,
	NULL
};
extern MethodInfo m20933_MI;
extern MethodInfo m20932_MI;
extern MethodInfo m20934_MI;
extern MethodInfo m20951_MI;
extern MethodInfo m20935_MI;
extern MethodInfo m20936_MI;
extern MethodInfo m20937_MI;
extern MethodInfo m20938_MI;
extern MethodInfo m20953_MI;
extern MethodInfo m20931_MI;
static MethodInfo* t766_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m20933_MI,
	&m20973_MI,
	&m20940_MI,
	&m20941_MI,
	&m20932_MI,
	&m20942_MI,
	&m20943_MI,
	&m20944_MI,
	&m20945_MI,
	&m20934_MI,
	&m20951_MI,
	&m20935_MI,
	&m20936_MI,
	&m20937_MI,
	&m20938_MI,
	&m20966_MI,
	&m20973_MI,
	&m20939_MI,
	&m3560_MI,
	&m20951_MI,
	&m20952_MI,
	&m20953_MI,
	&m20964_MI,
	&m20931_MI,
	&m20959_MI,
	&m20962_MI,
	&m20966_MI,
	&m20974_MI,
	&m20975_MI,
};
extern TypeInfo t1129_TI;
extern TypeInfo t3703_TI;
static TypeInfo* t766_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t3697_TI,
	&t3696_TI,
	&t3703_TI,
};
static Il2CppInterfaceOffsetPair t766_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t3697_TI, 20},
	{ &t3696_TI, 27},
	{ &t3703_TI, 28},
};
extern TypeInfo t766_TI;
extern TypeInfo t3697_TI;
extern TypeInfo t675_TI;
extern TypeInfo t3702_TI;
extern TypeInfo t114_TI;
extern TypeInfo t3698_TI;
static Il2CppRGCTXData t766_RGCTXData[38] = 
{
	&t766_TI/* Static Usage */,
	&m20963_MI/* Method Usage */,
	&t3697_TI/* Class Usage */,
	&m20948_MI/* Method Usage */,
	&m31221_MI/* Method Usage */,
	&t675_TI/* Array Usage */,
	&m20947_MI/* Method Usage */,
	&m20958_MI/* Method Usage */,
	&t3702_TI/* Class Usage */,
	&t114_TI/* Class Usage */,
	&m3560_MI/* Method Usage */,
	&m20952_MI/* Method Usage */,
	&m20959_MI/* Method Usage */,
	&m20961_MI/* Method Usage */,
	&m20962_MI/* Method Usage */,
	&m20964_MI/* Method Usage */,
	&m20974_MI/* Method Usage */,
	&m20975_MI/* Method Usage */,
	&m20946_MI/* Method Usage */,
	&m20971_MI/* Method Usage */,
	&m20972_MI/* Method Usage */,
	&m31226_MI/* Method Usage */,
	&m31228_MI/* Method Usage */,
	&m31220_MI/* Method Usage */,
	&t3698_TI/* Class Usage */,
	&m20982_MI/* Method Usage */,
	&m27455_MI/* Method Usage */,
	&m20955_MI/* Method Usage */,
	&m20956_MI/* Method Usage */,
	&m21057_MI/* Method Usage */,
	&m21061_MI/* Method Usage */,
	&m20976_MI/* Method Usage */,
	&m20960_MI/* Method Usage */,
	&m20966_MI/* Method Usage */,
	&m21067_MI/* Method Usage */,
	&m27457_MI/* Method Usage */,
	&m27465_MI/* Method Usage */,
	&m27453_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t766_0_0_0;
extern Il2CppType t766_1_0_0;
struct t766;
extern Il2CppGenericClass t766_GC;
extern CustomAttributesCache t1524__CustomAttributeCache;
TypeInfo t766_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t766_MIs, t766_PIs, t766_FIs, NULL, &t5_TI, NULL, NULL, &t766_TI, t766_ITIs, t766_VT, &t1524__CustomAttributeCache, &t766_TI, &t766_0_0_0, &t766_1_0_0, t766_IOs, &t766_GC, NULL, t766_FDVs, NULL, t766_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t766), 0, -1, sizeof(t766_SFs), 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, true, false, false, 51, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif

#include "t1363.h"
extern TypeInfo t11_TI;
extern TypeInfo t1363_TI;
#include "t1363MD.h"
extern MethodInfo m20979_MI;
extern MethodInfo m531_MI;
extern MethodInfo m3644_MI;
extern MethodInfo m5943_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<System.Type>
extern Il2CppType t766_0_0_1;
FieldInfo t3702_f0_FieldInfo = 
{
	"l", &t766_0_0_1, &t3702_TI, offsetof(t3702, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3702_f1_FieldInfo = 
{
	"next", &t110_0_0_1, &t3702_TI, offsetof(t3702, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3702_f2_FieldInfo = 
{
	"ver", &t110_0_0_1, &t3702_TI, offsetof(t3702, f2) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t114_0_0_1;
FieldInfo t3702_f3_FieldInfo = 
{
	"current", &t114_0_0_1, &t3702_TI, offsetof(t3702, f3) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3702_FIs[] =
{
	&t3702_f0_FieldInfo,
	&t3702_f1_FieldInfo,
	&t3702_f2_FieldInfo,
	&t3702_f3_FieldInfo,
	NULL
};
extern MethodInfo m20977_MI;
static PropertyInfo t3702____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3702_TI, "System.Collections.IEnumerator.Current", &m20977_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m20981_MI;
static PropertyInfo t3702____Current_PropertyInfo = 
{
	&t3702_TI, "Current", &m20981_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3702_PIs[] =
{
	&t3702____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3702____Current_PropertyInfo,
	NULL
};
extern Il2CppType t766_0_0_0;
static ParameterInfo t3702_m20976_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t766_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20976_GM;
MethodInfo m20976_MI = 
{
	".ctor", (methodPointerType)&m11749_gshared, &t3702_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3702_m20976_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20976_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20977_GM;
MethodInfo m20977_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11750_gshared, &t3702_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20977_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20978_GM;
MethodInfo m20978_MI = 
{
	"Dispose", (methodPointerType)&m11751_gshared, &t3702_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20978_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20979_GM;
MethodInfo m20979_MI = 
{
	"VerifyState", (methodPointerType)&m11752_gshared, &t3702_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20979_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20980_GM;
MethodInfo m20980_MI = 
{
	"MoveNext", (methodPointerType)&m11753_gshared, &t3702_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20980_GM};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20981_GM;
MethodInfo m20981_MI = 
{
	"get_Current", (methodPointerType)&m11754_gshared, &t3702_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20981_GM};
static MethodInfo* t3702_MIs[] =
{
	&m20976_MI,
	&m20977_MI,
	&m20978_MI,
	&m20979_MI,
	&m20980_MI,
	&m20981_MI,
	NULL
};
extern MethodInfo m20980_MI;
extern MethodInfo m20978_MI;
static MethodInfo* t3702_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m20977_MI,
	&m20980_MI,
	&m20978_MI,
	&m20981_MI,
};
static TypeInfo* t3702_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t3694_TI,
};
static Il2CppInterfaceOffsetPair t3702_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t3694_TI, 7},
};
extern TypeInfo t114_TI;
extern TypeInfo t3702_TI;
static Il2CppRGCTXData t3702_RGCTXData[3] = 
{
	&m20979_MI/* Method Usage */,
	&t114_TI/* Class Usage */,
	&t3702_TI/* Class Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3702_0_0_0;
extern Il2CppType t3702_1_0_0;
extern Il2CppGenericClass t3702_GC;
extern TypeInfo t1524_TI;
TypeInfo t3702_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t3702_MIs, t3702_PIs, t3702_FIs, NULL, &t267_TI, NULL, &t1524_TI, &t3702_TI, t3702_ITIs, t3702_VT, &EmptyCustomAttributesCache, &t3702_TI, &t3702_0_0_0, &t3702_1_0_0, t3702_IOs, &t3702_GC, NULL, NULL, NULL, t3702_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3702)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif

#include "t491.h"
extern TypeInfo t491_TI;
#include "t491MD.h"
#include "t3704MD.h"
extern MethodInfo m21011_MI;
extern MethodInfo m2164_MI;
extern MethodInfo m31229_MI;
extern MethodInfo m4755_MI;
extern MethodInfo m4948_MI;
extern MethodInfo m21043_MI;
extern MethodInfo m31225_MI;
extern MethodInfo m31231_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>
extern Il2CppType t3703_0_0_1;
FieldInfo t3698_f0_FieldInfo = 
{
	"list", &t3703_0_0_1, &t3698_TI, offsetof(t3698, f0), &EmptyCustomAttributesCache};
static FieldInfo* t3698_FIs[] =
{
	&t3698_f0_FieldInfo,
	NULL
};
extern MethodInfo m20988_MI;
extern MethodInfo m20989_MI;
static PropertyInfo t3698____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t3698_TI, "System.Collections.Generic.IList<T>.Item", &m20988_MI, &m20989_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m20990_MI;
static PropertyInfo t3698____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t3698_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m20990_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21000_MI;
static PropertyInfo t3698____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t3698_TI, "System.Collections.ICollection.IsSynchronized", &m21000_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21001_MI;
static PropertyInfo t3698____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t3698_TI, "System.Collections.ICollection.SyncRoot", &m21001_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21002_MI;
static PropertyInfo t3698____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t3698_TI, "System.Collections.IList.IsFixedSize", &m21002_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21003_MI;
static PropertyInfo t3698____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t3698_TI, "System.Collections.IList.IsReadOnly", &m21003_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21004_MI;
extern MethodInfo m21005_MI;
static PropertyInfo t3698____System_Collections_IList_Item_PropertyInfo = 
{
	&t3698_TI, "System.Collections.IList.Item", &m21004_MI, &m21005_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21010_MI;
static PropertyInfo t3698____Count_PropertyInfo = 
{
	&t3698_TI, "Count", &m21010_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3698____Item_PropertyInfo = 
{
	&t3698_TI, "Item", &m21011_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3698_PIs[] =
{
	&t3698____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t3698____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t3698____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t3698____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t3698____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t3698____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t3698____System_Collections_IList_Item_PropertyInfo,
	&t3698____Count_PropertyInfo,
	&t3698____Item_PropertyInfo,
	NULL
};
extern Il2CppType t3703_0_0_0;
extern Il2CppType t3703_0_0_0;
static ParameterInfo t3698_m20982_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t3703_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20982_GM;
MethodInfo m20982_MI = 
{
	".ctor", (methodPointerType)&m11755_gshared, &t3698_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3698_m20982_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20982_GM};
extern Il2CppType t114_0_0_0;
static ParameterInfo t3698_m20983_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20983_GM;
MethodInfo m20983_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m11756_gshared, &t3698_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3698_m20983_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20983_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20984_GM;
MethodInfo m20984_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m11757_gshared, &t3698_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20984_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t3698_m20985_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20985_GM;
MethodInfo m20985_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m11758_gshared, &t3698_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3698_m20985_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20985_GM};
extern Il2CppType t114_0_0_0;
static ParameterInfo t3698_m20986_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20986_GM;
MethodInfo m20986_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m11759_gshared, &t3698_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3698_m20986_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20986_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3698_m20987_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20987_GM;
MethodInfo m20987_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m11760_gshared, &t3698_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t3698_m20987_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20987_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3698_m20988_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20988_GM;
MethodInfo m20988_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m11761_gshared, &t3698_TI, &t114_0_0_0, RuntimeInvoker_t5_t110, t3698_m20988_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20988_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t3698_m20989_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20989_GM;
MethodInfo m20989_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m11762_gshared, &t3698_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3698_m20989_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20989_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20990_GM;
MethodInfo m20990_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11763_gshared, &t3698_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20990_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t3698_m20991_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20991_GM;
MethodInfo m20991_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11764_gshared, &t3698_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t3698_m20991_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20991_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20992_GM;
MethodInfo m20992_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11765_gshared, &t3698_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20992_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3698_m20993_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20993_GM;
MethodInfo m20993_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11766_gshared, &t3698_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3698_m20993_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20993_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20994_GM;
MethodInfo m20994_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m11767_gshared, &t3698_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL, &m20994_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3698_m20995_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20995_GM;
MethodInfo m20995_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11768_gshared, &t3698_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3698_m20995_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20995_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3698_m20996_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20996_GM;
MethodInfo m20996_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11769_gshared, &t3698_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3698_m20996_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20996_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3698_m20997_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20997_GM;
MethodInfo m20997_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11770_gshared, &t3698_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3698_m20997_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m20997_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3698_m20998_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20998_GM;
MethodInfo m20998_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11771_gshared, &t3698_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3698_m20998_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20998_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3698_m20999_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m20999_GM;
MethodInfo m20999_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m11772_gshared, &t3698_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t3698_m20999_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL, &m20999_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21000_GM;
MethodInfo m21000_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11773_gshared, &t3698_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21000_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21001_GM;
MethodInfo m21001_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11774_gshared, &t3698_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21001_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21002_GM;
MethodInfo m21002_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11775_gshared, &t3698_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21002_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21003_GM;
MethodInfo m21003_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11776_gshared, &t3698_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21003_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3698_m21004_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21004_GM;
MethodInfo m21004_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11777_gshared, &t3698_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t3698_m21004_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21004_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3698_m21005_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21005_GM;
MethodInfo m21005_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11778_gshared, &t3698_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3698_m21005_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21005_GM};
extern Il2CppType t114_0_0_0;
static ParameterInfo t3698_m21006_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21006_GM;
MethodInfo m21006_MI = 
{
	"Contains", (methodPointerType)&m11779_gshared, &t3698_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3698_m21006_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21006_GM};
extern Il2CppType t675_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t3698_m21007_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t675_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21007_GM;
MethodInfo m21007_MI = 
{
	"CopyTo", (methodPointerType)&m11780_gshared, &t3698_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t3698_m21007_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21007_GM};
extern Il2CppType t3694_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21008_GM;
MethodInfo m21008_MI = 
{
	"GetEnumerator", (methodPointerType)&m11781_gshared, &t3698_TI, &t3694_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21008_GM};
extern Il2CppType t114_0_0_0;
static ParameterInfo t3698_m21009_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21009_GM;
MethodInfo m21009_MI = 
{
	"IndexOf", (methodPointerType)&m11782_gshared, &t3698_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3698_m21009_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21009_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21010_GM;
MethodInfo m21010_MI = 
{
	"get_Count", (methodPointerType)&m11783_gshared, &t3698_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21010_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3698_m21011_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21011_GM;
MethodInfo m21011_MI = 
{
	"get_Item", (methodPointerType)&m11784_gshared, &t3698_TI, &t114_0_0_0, RuntimeInvoker_t5_t110, t3698_m21011_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21011_GM};
static MethodInfo* t3698_MIs[] =
{
	&m20982_MI,
	&m20983_MI,
	&m20984_MI,
	&m20985_MI,
	&m20986_MI,
	&m20987_MI,
	&m20988_MI,
	&m20989_MI,
	&m20990_MI,
	&m20991_MI,
	&m20992_MI,
	&m20993_MI,
	&m20994_MI,
	&m20995_MI,
	&m20996_MI,
	&m20997_MI,
	&m20998_MI,
	&m20999_MI,
	&m21000_MI,
	&m21001_MI,
	&m21002_MI,
	&m21003_MI,
	&m21004_MI,
	&m21005_MI,
	&m21006_MI,
	&m21007_MI,
	&m21008_MI,
	&m21009_MI,
	&m21010_MI,
	&m21011_MI,
	NULL
};
extern MethodInfo m20992_MI;
extern MethodInfo m20991_MI;
extern MethodInfo m20993_MI;
extern MethodInfo m20994_MI;
extern MethodInfo m20995_MI;
extern MethodInfo m20996_MI;
extern MethodInfo m20997_MI;
extern MethodInfo m20998_MI;
extern MethodInfo m20999_MI;
extern MethodInfo m20983_MI;
extern MethodInfo m20984_MI;
extern MethodInfo m21006_MI;
extern MethodInfo m21007_MI;
extern MethodInfo m20986_MI;
extern MethodInfo m21009_MI;
extern MethodInfo m20985_MI;
extern MethodInfo m20987_MI;
extern MethodInfo m21008_MI;
static MethodInfo* t3698_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m20992_MI,
	&m21010_MI,
	&m21000_MI,
	&m21001_MI,
	&m20991_MI,
	&m21002_MI,
	&m21003_MI,
	&m21004_MI,
	&m21005_MI,
	&m20993_MI,
	&m20994_MI,
	&m20995_MI,
	&m20996_MI,
	&m20997_MI,
	&m20998_MI,
	&m20999_MI,
	&m21010_MI,
	&m20990_MI,
	&m20983_MI,
	&m20984_MI,
	&m21006_MI,
	&m21007_MI,
	&m20986_MI,
	&m21009_MI,
	&m20985_MI,
	&m20987_MI,
	&m20988_MI,
	&m20989_MI,
	&m21008_MI,
	&m21011_MI,
};
static TypeInfo* t3698_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t3697_TI,
	&t3703_TI,
	&t3696_TI,
};
static Il2CppInterfaceOffsetPair t3698_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t3697_TI, 20},
	{ &t3703_TI, 27},
	{ &t3696_TI, 32},
};
extern TypeInfo t114_TI;
static Il2CppRGCTXData t3698_RGCTXData[9] = 
{
	&m21011_MI/* Method Usage */,
	&m21043_MI/* Method Usage */,
	&t114_TI/* Class Usage */,
	&m31225_MI/* Method Usage */,
	&m31231_MI/* Method Usage */,
	&m31229_MI/* Method Usage */,
	&m31226_MI/* Method Usage */,
	&m31228_MI/* Method Usage */,
	&m31221_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3698_0_0_0;
extern Il2CppType t3698_1_0_0;
struct t3698;
extern Il2CppGenericClass t3698_GC;
extern CustomAttributesCache t1526__CustomAttributeCache;
TypeInfo t3698_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t3698_MIs, t3698_PIs, t3698_FIs, NULL, &t5_TI, NULL, NULL, &t3698_TI, t3698_ITIs, t3698_VT, &t1526__CustomAttributeCache, &t3698_TI, &t3698_0_0_0, &t3698_1_0_0, t3698_IOs, &t3698_GC, NULL, NULL, NULL, t3698_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3698), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t3704.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3704_TI;

extern MethodInfo m31222_MI;
extern MethodInfo m21046_MI;
extern MethodInfo m21047_MI;
extern MethodInfo m21044_MI;
extern MethodInfo m21042_MI;
extern MethodInfo m3559_MI;
extern MethodInfo m11151_MI;
extern MethodInfo m21035_MI;
extern MethodInfo m21045_MI;
extern MethodInfo m21033_MI;
extern MethodInfo m21038_MI;
extern MethodInfo m21029_MI;
extern MethodInfo m31224_MI;
extern MethodInfo m31232_MI;
extern MethodInfo m31233_MI;
extern MethodInfo m31230_MI;
extern MethodInfo m6794_MI;
extern MethodInfo m11150_MI;
extern MethodInfo m11152_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<System.Type>
extern Il2CppType t3703_0_0_1;
FieldInfo t3704_f0_FieldInfo = 
{
	"list", &t3703_0_0_1, &t3704_TI, offsetof(t3704, f0), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_1;
FieldInfo t3704_f1_FieldInfo = 
{
	"syncRoot", &t5_0_0_1, &t3704_TI, offsetof(t3704, f1), &EmptyCustomAttributesCache};
static FieldInfo* t3704_FIs[] =
{
	&t3704_f0_FieldInfo,
	&t3704_f1_FieldInfo,
	NULL
};
extern MethodInfo m21013_MI;
static PropertyInfo t3704____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t3704_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m21013_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21021_MI;
static PropertyInfo t3704____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t3704_TI, "System.Collections.ICollection.IsSynchronized", &m21021_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21022_MI;
static PropertyInfo t3704____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t3704_TI, "System.Collections.ICollection.SyncRoot", &m21022_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21023_MI;
static PropertyInfo t3704____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t3704_TI, "System.Collections.IList.IsFixedSize", &m21023_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21024_MI;
static PropertyInfo t3704____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t3704_TI, "System.Collections.IList.IsReadOnly", &m21024_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21025_MI;
extern MethodInfo m21026_MI;
static PropertyInfo t3704____System_Collections_IList_Item_PropertyInfo = 
{
	&t3704_TI, "System.Collections.IList.Item", &m21025_MI, &m21026_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21039_MI;
static PropertyInfo t3704____Count_PropertyInfo = 
{
	&t3704_TI, "Count", &m21039_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m21040_MI;
extern MethodInfo m21041_MI;
static PropertyInfo t3704____Item_PropertyInfo = 
{
	&t3704_TI, "Item", &m21040_MI, &m21041_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3704_PIs[] =
{
	&t3704____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t3704____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t3704____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t3704____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t3704____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t3704____System_Collections_IList_Item_PropertyInfo,
	&t3704____Count_PropertyInfo,
	&t3704____Item_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21012_GM;
MethodInfo m21012_MI = 
{
	".ctor", (methodPointerType)&m11785_gshared, &t3704_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21012_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21013_GM;
MethodInfo m21013_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11786_gshared, &t3704_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21013_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t3704_m21014_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21014_GM;
MethodInfo m21014_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11787_gshared, &t3704_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t3704_m21014_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21014_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21015_GM;
MethodInfo m21015_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11788_gshared, &t3704_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21015_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3704_m21016_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21016_GM;
MethodInfo m21016_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11789_gshared, &t3704_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3704_m21016_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21016_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3704_m21017_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21017_GM;
MethodInfo m21017_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11790_gshared, &t3704_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3704_m21017_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21017_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3704_m21018_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21018_GM;
MethodInfo m21018_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11791_gshared, &t3704_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3704_m21018_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21018_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3704_m21019_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21019_GM;
MethodInfo m21019_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11792_gshared, &t3704_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3704_m21019_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21019_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3704_m21020_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21020_GM;
MethodInfo m21020_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11793_gshared, &t3704_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3704_m21020_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21020_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21021_GM;
MethodInfo m21021_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11794_gshared, &t3704_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21021_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21022_GM;
MethodInfo m21022_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11795_gshared, &t3704_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21022_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21023_GM;
MethodInfo m21023_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11796_gshared, &t3704_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21023_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21024_GM;
MethodInfo m21024_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11797_gshared, &t3704_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21024_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3704_m21025_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21025_GM;
MethodInfo m21025_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11798_gshared, &t3704_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t3704_m21025_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21025_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3704_m21026_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21026_GM;
MethodInfo m21026_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11799_gshared, &t3704_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3704_m21026_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21026_GM};
extern Il2CppType t114_0_0_0;
static ParameterInfo t3704_m21027_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21027_GM;
MethodInfo m21027_MI = 
{
	"Add", (methodPointerType)&m11800_gshared, &t3704_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3704_m21027_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21027_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21028_GM;
MethodInfo m21028_MI = 
{
	"Clear", (methodPointerType)&m11801_gshared, &t3704_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21028_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21029_GM;
MethodInfo m21029_MI = 
{
	"ClearItems", (methodPointerType)&m11802_gshared, &t3704_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21029_GM};
extern Il2CppType t114_0_0_0;
static ParameterInfo t3704_m21030_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21030_GM;
MethodInfo m21030_MI = 
{
	"Contains", (methodPointerType)&m11803_gshared, &t3704_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3704_m21030_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21030_GM};
extern Il2CppType t675_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t3704_m21031_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t675_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21031_GM;
MethodInfo m21031_MI = 
{
	"CopyTo", (methodPointerType)&m11804_gshared, &t3704_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t3704_m21031_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21031_GM};
extern Il2CppType t3694_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21032_GM;
MethodInfo m21032_MI = 
{
	"GetEnumerator", (methodPointerType)&m11805_gshared, &t3704_TI, &t3694_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21032_GM};
extern Il2CppType t114_0_0_0;
static ParameterInfo t3704_m21033_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21033_GM;
MethodInfo m21033_MI = 
{
	"IndexOf", (methodPointerType)&m11806_gshared, &t3704_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3704_m21033_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21033_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t3704_m21034_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21034_GM;
MethodInfo m21034_MI = 
{
	"Insert", (methodPointerType)&m11807_gshared, &t3704_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3704_m21034_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21034_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t3704_m21035_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21035_GM;
MethodInfo m21035_MI = 
{
	"InsertItem", (methodPointerType)&m11808_gshared, &t3704_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3704_m21035_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21035_GM};
extern Il2CppType t114_0_0_0;
static ParameterInfo t3704_m21036_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21036_GM;
MethodInfo m21036_MI = 
{
	"Remove", (methodPointerType)&m11809_gshared, &t3704_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3704_m21036_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21036_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3704_m21037_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21037_GM;
MethodInfo m21037_MI = 
{
	"RemoveAt", (methodPointerType)&m11810_gshared, &t3704_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t3704_m21037_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21037_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3704_m21038_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21038_GM;
MethodInfo m21038_MI = 
{
	"RemoveItem", (methodPointerType)&m11811_gshared, &t3704_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t3704_m21038_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21038_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21039_GM;
MethodInfo m21039_MI = 
{
	"get_Count", (methodPointerType)&m11812_gshared, &t3704_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21039_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3704_m21040_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21040_GM;
MethodInfo m21040_MI = 
{
	"get_Item", (methodPointerType)&m11813_gshared, &t3704_TI, &t114_0_0_0, RuntimeInvoker_t5_t110, t3704_m21040_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21040_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t3704_m21041_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21041_GM;
MethodInfo m21041_MI = 
{
	"set_Item", (methodPointerType)&m11814_gshared, &t3704_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3704_m21041_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21041_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t3704_m21042_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21042_GM;
MethodInfo m21042_MI = 
{
	"SetItem", (methodPointerType)&m11815_gshared, &t3704_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3704_m21042_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21042_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3704_m21043_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21043_GM;
MethodInfo m21043_MI = 
{
	"IsValidItem", (methodPointerType)&m11816_gshared, &t3704_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3704_m21043_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21043_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3704_m21044_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21044_GM;
MethodInfo m21044_MI = 
{
	"ConvertItem", (methodPointerType)&m11817_gshared, &t3704_TI, &t114_0_0_0, RuntimeInvoker_t5_t5, t3704_m21044_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21044_GM};
extern Il2CppType t3703_0_0_0;
static ParameterInfo t3704_m21045_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t3703_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21045_GM;
MethodInfo m21045_MI = 
{
	"CheckWritable", (methodPointerType)&m11818_gshared, &t3704_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3704_m21045_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21045_GM};
extern Il2CppType t3703_0_0_0;
static ParameterInfo t3704_m21046_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t3703_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21046_GM;
MethodInfo m21046_MI = 
{
	"IsSynchronized", (methodPointerType)&m11819_gshared, &t3704_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3704_m21046_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21046_GM};
extern Il2CppType t3703_0_0_0;
static ParameterInfo t3704_m21047_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t3703_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21047_GM;
MethodInfo m21047_MI = 
{
	"IsFixedSize", (methodPointerType)&m11820_gshared, &t3704_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3704_m21047_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21047_GM};
static MethodInfo* t3704_MIs[] =
{
	&m21012_MI,
	&m21013_MI,
	&m21014_MI,
	&m21015_MI,
	&m21016_MI,
	&m21017_MI,
	&m21018_MI,
	&m21019_MI,
	&m21020_MI,
	&m21021_MI,
	&m21022_MI,
	&m21023_MI,
	&m21024_MI,
	&m21025_MI,
	&m21026_MI,
	&m21027_MI,
	&m21028_MI,
	&m21029_MI,
	&m21030_MI,
	&m21031_MI,
	&m21032_MI,
	&m21033_MI,
	&m21034_MI,
	&m21035_MI,
	&m21036_MI,
	&m21037_MI,
	&m21038_MI,
	&m21039_MI,
	&m21040_MI,
	&m21041_MI,
	&m21042_MI,
	&m21043_MI,
	&m21044_MI,
	&m21045_MI,
	&m21046_MI,
	&m21047_MI,
	NULL
};
extern MethodInfo m21015_MI;
extern MethodInfo m21014_MI;
extern MethodInfo m21016_MI;
extern MethodInfo m21028_MI;
extern MethodInfo m21017_MI;
extern MethodInfo m21018_MI;
extern MethodInfo m21019_MI;
extern MethodInfo m21020_MI;
extern MethodInfo m21037_MI;
extern MethodInfo m21027_MI;
extern MethodInfo m21030_MI;
extern MethodInfo m21031_MI;
extern MethodInfo m21036_MI;
extern MethodInfo m21034_MI;
extern MethodInfo m21032_MI;
static MethodInfo* t3704_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21015_MI,
	&m21039_MI,
	&m21021_MI,
	&m21022_MI,
	&m21014_MI,
	&m21023_MI,
	&m21024_MI,
	&m21025_MI,
	&m21026_MI,
	&m21016_MI,
	&m21028_MI,
	&m21017_MI,
	&m21018_MI,
	&m21019_MI,
	&m21020_MI,
	&m21037_MI,
	&m21039_MI,
	&m21013_MI,
	&m21027_MI,
	&m21028_MI,
	&m21030_MI,
	&m21031_MI,
	&m21036_MI,
	&m21033_MI,
	&m21034_MI,
	&m21037_MI,
	&m21040_MI,
	&m21041_MI,
	&m21032_MI,
	&m21029_MI,
	&m21035_MI,
	&m21038_MI,
	&m21042_MI,
};
static TypeInfo* t3704_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t3697_TI,
	&t3703_TI,
	&t3696_TI,
};
static Il2CppInterfaceOffsetPair t3704_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t3697_TI, 20},
	{ &t3703_TI, 27},
	{ &t3696_TI, 32},
};
extern TypeInfo t766_TI;
extern TypeInfo t114_TI;
static Il2CppRGCTXData t3704_RGCTXData[25] = 
{
	&t766_TI/* Class Usage */,
	&m3559_MI/* Method Usage */,
	&m31222_MI/* Method Usage */,
	&m31228_MI/* Method Usage */,
	&m31221_MI/* Method Usage */,
	&m21044_MI/* Method Usage */,
	&m21035_MI/* Method Usage */,
	&m21043_MI/* Method Usage */,
	&t114_TI/* Class Usage */,
	&m31225_MI/* Method Usage */,
	&m31231_MI/* Method Usage */,
	&m21045_MI/* Method Usage */,
	&m21033_MI/* Method Usage */,
	&m21038_MI/* Method Usage */,
	&m21046_MI/* Method Usage */,
	&m21047_MI/* Method Usage */,
	&m31229_MI/* Method Usage */,
	&m21042_MI/* Method Usage */,
	&m21029_MI/* Method Usage */,
	&m31224_MI/* Method Usage */,
	&m31226_MI/* Method Usage */,
	&m31232_MI/* Method Usage */,
	&m31233_MI/* Method Usage */,
	&m31230_MI/* Method Usage */,
	&t114_0_0_0/* Type Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3704_0_0_0;
extern Il2CppType t3704_1_0_0;
struct t3704;
extern Il2CppGenericClass t3704_GC;
extern CustomAttributesCache t1525__CustomAttributeCache;
TypeInfo t3704_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t3704_MIs, t3704_PIs, t3704_FIs, NULL, &t5_TI, NULL, NULL, &t3704_TI, t3704_ITIs, t3704_VT, &t1525__CustomAttributeCache, &t3704_TI, &t3704_0_0_0, &t3704_1_0_0, t3704_IOs, &t3704_GC, NULL, NULL, NULL, t3704_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3704), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3705_TI;
#include "t3705MD.h"

#include "t3706.h"
extern TypeInfo t7697_TI;
extern TypeInfo t3706_TI;
#include "t3706MD.h"
extern Il2CppType t7697_0_0_0;
extern MethodInfo m21053_MI;
extern MethodInfo m35276_MI;
extern MethodInfo m27454_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.Type>
extern Il2CppType t3705_0_0_49;
FieldInfo t3705_f0_FieldInfo = 
{
	"_default", &t3705_0_0_49, &t3705_TI, offsetof(t3705_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t3705_FIs[] =
{
	&t3705_f0_FieldInfo,
	NULL
};
extern MethodInfo m21052_MI;
static PropertyInfo t3705____Default_PropertyInfo = 
{
	&t3705_TI, "Default", &m21052_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3705_PIs[] =
{
	&t3705____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21048_GM;
MethodInfo m21048_MI = 
{
	".ctor", (methodPointerType)&m11821_gshared, &t3705_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21048_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21049_GM;
MethodInfo m21049_MI = 
{
	".cctor", (methodPointerType)&m11822_gshared, &t3705_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21049_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3705_m21050_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21050_GM;
MethodInfo m21050_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m11823_gshared, &t3705_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3705_m21050_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21050_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3705_m21051_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21051_GM;
MethodInfo m21051_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m11824_gshared, &t3705_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t3705_m21051_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21051_GM};
extern Il2CppType t114_0_0_0;
static ParameterInfo t3705_m35276_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35276_GM;
MethodInfo m35276_MI = 
{
	"GetHashCode", NULL, &t3705_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3705_m35276_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35276_GM};
extern Il2CppType t114_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t3705_m27454_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m27454_GM;
MethodInfo m27454_MI = 
{
	"Equals", NULL, &t3705_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t3705_m27454_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m27454_GM};
extern Il2CppType t3705_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21052_GM;
MethodInfo m21052_MI = 
{
	"get_Default", (methodPointerType)&m11825_gshared, &t3705_TI, &t3705_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21052_GM};
static MethodInfo* t3705_MIs[] =
{
	&m21048_MI,
	&m21049_MI,
	&m21050_MI,
	&m21051_MI,
	&m35276_MI,
	&m27454_MI,
	&m21052_MI,
	NULL
};
extern MethodInfo m21051_MI;
extern MethodInfo m21050_MI;
static MethodInfo* t3705_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m27454_MI,
	&m35276_MI,
	&m21051_MI,
	&m21050_MI,
	NULL,
	NULL,
};
extern TypeInfo t7698_TI;
static TypeInfo* t3705_ITIs[] = 
{
	&t7698_TI,
	&t998_TI,
};
static Il2CppInterfaceOffsetPair t3705_IOs[] = 
{
	{ &t7698_TI, 4},
	{ &t998_TI, 6},
};
extern TypeInfo t3705_TI;
extern TypeInfo t3705_TI;
extern TypeInfo t3706_TI;
extern TypeInfo t114_TI;
static Il2CppRGCTXData t3705_RGCTXData[9] = 
{
	&t7697_0_0_0/* Type Usage */,
	&t114_0_0_0/* Type Usage */,
	&t3705_TI/* Class Usage */,
	&t3705_TI/* Static Usage */,
	&t3706_TI/* Class Usage */,
	&m21053_MI/* Method Usage */,
	&t114_TI/* Class Usage */,
	&m35276_MI/* Method Usage */,
	&m27454_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3705_0_0_0;
extern Il2CppType t3705_1_0_0;
struct t3705;
extern Il2CppGenericClass t3705_GC;
TypeInfo t3705_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t3705_MIs, t3705_PIs, t3705_FIs, NULL, &t5_TI, NULL, NULL, &t3705_TI, t3705_ITIs, t3705_VT, &EmptyCustomAttributesCache, &t3705_TI, &t3705_0_0_0, &t3705_1_0_0, t3705_IOs, &t3705_GC, NULL, NULL, NULL, t3705_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3705), 0, -1, sizeof(t3705_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.Type>
extern Il2CppType t114_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t7698_m35277_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35277_GM;
MethodInfo m35277_MI = 
{
	"Equals", NULL, &t7698_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t7698_m35277_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35277_GM};
extern Il2CppType t114_0_0_0;
static ParameterInfo t7698_m35278_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35278_GM;
MethodInfo m35278_MI = 
{
	"GetHashCode", NULL, &t7698_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7698_m35278_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35278_GM};
static MethodInfo* t7698_MIs[] =
{
	&m35277_MI,
	&m35278_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7698_0_0_0;
extern Il2CppType t7698_1_0_0;
struct t7698;
extern Il2CppGenericClass t7698_GC;
TypeInfo t7698_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t7698_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7698_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7698_TI, &t7698_0_0_0, &t7698_1_0_0, NULL, &t7698_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.IEquatable`1<System.Type>
extern Il2CppType t114_0_0_0;
static ParameterInfo t7697_m35279_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35279_GM;
MethodInfo m35279_MI = 
{
	"Equals", NULL, &t7697_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7697_m35279_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35279_GM};
static MethodInfo* t7697_MIs[] =
{
	&m35279_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7697_1_0_0;
struct t7697;
extern Il2CppGenericClass t7697_GC;
TypeInfo t7697_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t7697_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7697_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7697_TI, &t7697_0_0_0, &t7697_1_0_0, NULL, &t7697_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m21048_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Type>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21053_GM;
MethodInfo m21053_MI = 
{
	".ctor", (methodPointerType)&m11856_gshared, &t3706_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21053_GM};
extern Il2CppType t114_0_0_0;
static ParameterInfo t3706_m21054_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21054_GM;
MethodInfo m21054_MI = 
{
	"GetHashCode", (methodPointerType)&m11857_gshared, &t3706_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3706_m21054_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21054_GM};
extern Il2CppType t114_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t3706_m21055_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21055_GM;
MethodInfo m21055_MI = 
{
	"Equals", (methodPointerType)&m11858_gshared, &t3706_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t3706_m21055_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21055_GM};
static MethodInfo* t3706_MIs[] =
{
	&m21053_MI,
	&m21054_MI,
	&m21055_MI,
	NULL
};
extern MethodInfo m21055_MI;
extern MethodInfo m21054_MI;
static MethodInfo* t3706_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21055_MI,
	&m21054_MI,
	&m21051_MI,
	&m21050_MI,
	&m21054_MI,
	&m21055_MI,
};
static Il2CppInterfaceOffsetPair t3706_IOs[] = 
{
	{ &t7698_TI, 4},
	{ &t998_TI, 6},
};
extern TypeInfo t3705_TI;
extern TypeInfo t3705_TI;
extern TypeInfo t3706_TI;
extern TypeInfo t114_TI;
extern TypeInfo t114_TI;
static Il2CppRGCTXData t3706_RGCTXData[11] = 
{
	&t7697_0_0_0/* Type Usage */,
	&t114_0_0_0/* Type Usage */,
	&t3705_TI/* Class Usage */,
	&t3705_TI/* Static Usage */,
	&t3706_TI/* Class Usage */,
	&m21053_MI/* Method Usage */,
	&t114_TI/* Class Usage */,
	&m35276_MI/* Method Usage */,
	&m27454_MI/* Method Usage */,
	&m21048_MI/* Method Usage */,
	&t114_TI/* Class Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3706_0_0_0;
extern Il2CppType t3706_1_0_0;
struct t3706;
extern Il2CppGenericClass t3706_GC;
TypeInfo t3706_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t3706_MIs, NULL, NULL, NULL, &t3705_TI, NULL, &t1519_TI, &t3706_TI, NULL, t3706_VT, &EmptyCustomAttributesCache, &t3706_TI, &t3706_0_0_0, &t3706_1_0_0, t3706_IOs, &t3706_GC, NULL, NULL, NULL, t3706_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3706), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Predicate`1<System.Type>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t3699_m21056_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21056_GM;
MethodInfo m21056_MI = 
{
	".ctor", (methodPointerType)&m11859_gshared, &t3699_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t3699_m21056_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21056_GM};
extern Il2CppType t114_0_0_0;
static ParameterInfo t3699_m21057_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21057_GM;
MethodInfo m21057_MI = 
{
	"Invoke", (methodPointerType)&m11860_gshared, &t3699_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3699_m21057_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21057_GM};
extern Il2CppType t114_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3699_m21058_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21058_GM;
MethodInfo m21058_MI = 
{
	"BeginInvoke", (methodPointerType)&m11861_gshared, &t3699_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t3699_m21058_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m21058_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t3699_m21059_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21059_GM;
MethodInfo m21059_MI = 
{
	"EndInvoke", (methodPointerType)&m11862_gshared, &t3699_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3699_m21059_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21059_GM};
static MethodInfo* t3699_MIs[] =
{
	&m21056_MI,
	&m21057_MI,
	&m21058_MI,
	&m21059_MI,
	NULL
};
extern MethodInfo m21058_MI;
extern MethodInfo m21059_MI;
static MethodInfo* t3699_VT[] =
{
	&m2342_MI,
	&m465_MI,
	&m2343_MI,
	&m467_MI,
	&m2344_MI,
	&m2345_MI,
	&m2344_MI,
	&m2346_MI,
	&m2347_MI,
	&m2348_MI,
	&m21057_MI,
	&m21058_MI,
	&m21059_MI,
};
static Il2CppInterfaceOffsetPair t3699_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3699_1_0_0;
struct t3699;
extern Il2CppGenericClass t3699_GC;
TypeInfo t3699_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t3699_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t3699_TI, NULL, t3699_VT, &EmptyCustomAttributesCache, &t3699_TI, &t3699_0_0_0, &t3699_1_0_0, t3699_IOs, &t3699_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3699), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Action`1<System.Type>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t3700_m21060_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21060_GM;
MethodInfo m21060_MI = 
{
	".ctor", (methodPointerType)&m11863_gshared, &t3700_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t3700_m21060_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21060_GM};
extern Il2CppType t114_0_0_0;
static ParameterInfo t3700_m21061_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21061_GM;
MethodInfo m21061_MI = 
{
	"Invoke", (methodPointerType)&m11864_gshared, &t3700_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3700_m21061_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21061_GM};
extern Il2CppType t114_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3700_m21062_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21062_GM;
MethodInfo m21062_MI = 
{
	"BeginInvoke", (methodPointerType)&m11865_gshared, &t3700_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t3700_m21062_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m21062_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t3700_m21063_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21063_GM;
MethodInfo m21063_MI = 
{
	"EndInvoke", (methodPointerType)&m11866_gshared, &t3700_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3700_m21063_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21063_GM};
static MethodInfo* t3700_MIs[] =
{
	&m21060_MI,
	&m21061_MI,
	&m21062_MI,
	&m21063_MI,
	NULL
};
extern MethodInfo m21062_MI;
extern MethodInfo m21063_MI;
static MethodInfo* t3700_VT[] =
{
	&m2342_MI,
	&m465_MI,
	&m2343_MI,
	&m467_MI,
	&m2344_MI,
	&m2345_MI,
	&m2344_MI,
	&m2346_MI,
	&m2347_MI,
	&m2348_MI,
	&m21061_MI,
	&m21062_MI,
	&m21063_MI,
};
static Il2CppInterfaceOffsetPair t3700_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3700_1_0_0;
struct t3700;
extern Il2CppGenericClass t3700_GC;
TypeInfo t3700_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Action`1", "System", t3700_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t3700_TI, NULL, t3700_VT, &EmptyCustomAttributesCache, &t3700_TI, &t3700_0_0_0, &t3700_1_0_0, t3700_IOs, &t3700_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3700), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif

#include "t3708.h"
extern TypeInfo t5210_TI;
extern TypeInfo t3708_TI;
#include "t3708MD.h"
extern Il2CppType t5210_0_0_0;
extern MethodInfo m21068_MI;
extern MethodInfo m35280_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<System.Type>
extern Il2CppType t3707_0_0_49;
FieldInfo t3707_f0_FieldInfo = 
{
	"_default", &t3707_0_0_49, &t3707_TI, offsetof(t3707_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t3707_FIs[] =
{
	&t3707_f0_FieldInfo,
	NULL
};
static PropertyInfo t3707____Default_PropertyInfo = 
{
	&t3707_TI, "Default", &m21067_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3707_PIs[] =
{
	&t3707____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21064_GM;
MethodInfo m21064_MI = 
{
	".ctor", (methodPointerType)&m11867_gshared, &t3707_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21064_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21065_GM;
MethodInfo m21065_MI = 
{
	".cctor", (methodPointerType)&m11868_gshared, &t3707_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21065_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3707_m21066_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21066_GM;
MethodInfo m21066_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m11869_gshared, &t3707_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t3707_m21066_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21066_GM};
extern Il2CppType t114_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t3707_m35280_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35280_GM;
MethodInfo m35280_MI = 
{
	"Compare", NULL, &t3707_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t3707_m35280_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35280_GM};
extern Il2CppType t3707_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21067_GM;
MethodInfo m21067_MI = 
{
	"get_Default", (methodPointerType)&m11870_gshared, &t3707_TI, &t3707_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21067_GM};
static MethodInfo* t3707_MIs[] =
{
	&m21064_MI,
	&m21065_MI,
	&m21066_MI,
	&m35280_MI,
	&m21067_MI,
	NULL
};
extern MethodInfo m21066_MI;
static MethodInfo* t3707_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m35280_MI,
	&m21066_MI,
	NULL,
};
extern TypeInfo t5209_TI;
static TypeInfo* t3707_ITIs[] = 
{
	&t5209_TI,
	&t991_TI,
};
static Il2CppInterfaceOffsetPair t3707_IOs[] = 
{
	{ &t5209_TI, 4},
	{ &t991_TI, 5},
};
extern TypeInfo t3707_TI;
extern TypeInfo t3707_TI;
extern TypeInfo t3708_TI;
extern TypeInfo t114_TI;
static Il2CppRGCTXData t3707_RGCTXData[8] = 
{
	&t5210_0_0_0/* Type Usage */,
	&t114_0_0_0/* Type Usage */,
	&t3707_TI/* Class Usage */,
	&t3707_TI/* Static Usage */,
	&t3708_TI/* Class Usage */,
	&m21068_MI/* Method Usage */,
	&t114_TI/* Class Usage */,
	&m35280_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3707_0_0_0;
extern Il2CppType t3707_1_0_0;
struct t3707;
extern Il2CppGenericClass t3707_GC;
TypeInfo t3707_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t3707_MIs, t3707_PIs, t3707_FIs, NULL, &t5_TI, NULL, NULL, &t3707_TI, t3707_ITIs, t3707_VT, &EmptyCustomAttributesCache, &t3707_TI, &t3707_0_0_0, &t3707_1_0_0, t3707_IOs, &t3707_GC, NULL, NULL, NULL, t3707_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3707), 0, -1, sizeof(t3707_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IComparer`1<System.Type>
extern Il2CppType t114_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t5209_m27462_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m27462_GM;
MethodInfo m27462_MI = 
{
	"Compare", NULL, &t5209_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t5209_m27462_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m27462_GM};
static MethodInfo* t5209_MIs[] =
{
	&m27462_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5209_0_0_0;
extern Il2CppType t5209_1_0_0;
struct t5209;
extern Il2CppGenericClass t5209_GC;
TypeInfo t5209_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t5209_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5209_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5209_TI, &t5209_0_0_0, &t5209_1_0_0, NULL, &t5209_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.IComparable`1<System.Type>
extern Il2CppType t114_0_0_0;
static ParameterInfo t5210_m27463_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m27463_GM;
MethodInfo m27463_MI = 
{
	"CompareTo", NULL, &t5210_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t5210_m27463_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m27463_GM};
static MethodInfo* t5210_MIs[] =
{
	&m27463_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5210_1_0_0;
struct t5210;
extern Il2CppGenericClass t5210_GC;
TypeInfo t5210_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t5210_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5210_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5210_TI, &t5210_0_0_0, &t5210_1_0_0, NULL, &t5210_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m21064_MI;
extern MethodInfo m27463_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.Type>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21068_GM;
MethodInfo m21068_MI = 
{
	".ctor", (methodPointerType)&m11871_gshared, &t3708_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21068_GM};
extern Il2CppType t114_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t3708_m21069_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21069_GM;
MethodInfo m21069_MI = 
{
	"Compare", (methodPointerType)&m11872_gshared, &t3708_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t3708_m21069_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21069_GM};
static MethodInfo* t3708_MIs[] =
{
	&m21068_MI,
	&m21069_MI,
	NULL
};
extern MethodInfo m21069_MI;
static MethodInfo* t3708_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21069_MI,
	&m21066_MI,
	&m21069_MI,
};
static Il2CppInterfaceOffsetPair t3708_IOs[] = 
{
	{ &t5209_TI, 4},
	{ &t991_TI, 5},
};
extern TypeInfo t3707_TI;
extern TypeInfo t3707_TI;
extern TypeInfo t3708_TI;
extern TypeInfo t114_TI;
extern TypeInfo t114_TI;
extern TypeInfo t5210_TI;
static Il2CppRGCTXData t3708_RGCTXData[12] = 
{
	&t5210_0_0_0/* Type Usage */,
	&t114_0_0_0/* Type Usage */,
	&t3707_TI/* Class Usage */,
	&t3707_TI/* Static Usage */,
	&t3708_TI/* Class Usage */,
	&m21068_MI/* Method Usage */,
	&t114_TI/* Class Usage */,
	&m35280_MI/* Method Usage */,
	&m21064_MI/* Method Usage */,
	&t114_TI/* Class Usage */,
	&t5210_TI/* Class Usage */,
	&m27463_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3708_0_0_0;
extern Il2CppType t3708_1_0_0;
struct t3708;
extern Il2CppGenericClass t3708_GC;
TypeInfo t3708_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t3708_MIs, NULL, NULL, NULL, &t3707_TI, NULL, &t1509_TI, &t3708_TI, NULL, t3708_VT, &EmptyCustomAttributesCache, &t3708_TI, &t3708_0_0_0, &t3708_1_0_0, t3708_IOs, &t3708_GC, NULL, NULL, NULL, t3708_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3708), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3701_TI;
#include "t3701MD.h"



// Metadata Definition System.Comparison`1<System.Type>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t3701_m21070_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21070_GM;
MethodInfo m21070_MI = 
{
	".ctor", (methodPointerType)&m11938_gshared, &t3701_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t3701_m21070_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21070_GM};
extern Il2CppType t114_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t3701_m21071_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21071_GM;
MethodInfo m21071_MI = 
{
	"Invoke", (methodPointerType)&m11939_gshared, &t3701_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t3701_m21071_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21071_GM};
extern Il2CppType t114_0_0_0;
extern Il2CppType t114_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3701_m21072_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21072_GM;
MethodInfo m21072_MI = 
{
	"BeginInvoke", (methodPointerType)&m11940_gshared, &t3701_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5_t5, t3701_m21072_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL, &m21072_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t3701_m21073_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21073_GM;
MethodInfo m21073_MI = 
{
	"EndInvoke", (methodPointerType)&m11941_gshared, &t3701_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3701_m21073_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21073_GM};
static MethodInfo* t3701_MIs[] =
{
	&m21070_MI,
	&m21071_MI,
	&m21072_MI,
	&m21073_MI,
	NULL
};
extern MethodInfo m21071_MI;
extern MethodInfo m21072_MI;
extern MethodInfo m21073_MI;
static MethodInfo* t3701_VT[] =
{
	&m2342_MI,
	&m465_MI,
	&m2343_MI,
	&m467_MI,
	&m2344_MI,
	&m2345_MI,
	&m2344_MI,
	&m2346_MI,
	&m2347_MI,
	&m2348_MI,
	&m21071_MI,
	&m21072_MI,
	&m21073_MI,
};
static Il2CppInterfaceOffsetPair t3701_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3701_1_0_0;
struct t3701;
extern Il2CppGenericClass t3701_GC;
TypeInfo t3701_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t3701_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t3701_TI, NULL, t3701_VT, &EmptyCustomAttributesCache, &t3701_TI, &t3701_0_0_0, &t3701_1_0_0, t3701_IOs, &t3701_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3701), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5212_TI;

#include "t451.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.AddComponentMenu>
extern MethodInfo m35281_MI;
static PropertyInfo t5212____Current_PropertyInfo = 
{
	&t5212_TI, "Current", &m35281_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5212_PIs[] =
{
	&t5212____Current_PropertyInfo,
	NULL
};
extern Il2CppType t451_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35281_GM;
MethodInfo m35281_MI = 
{
	"get_Current", NULL, &t5212_TI, &t451_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35281_GM};
static MethodInfo* t5212_MIs[] =
{
	&m35281_MI,
	NULL
};
static TypeInfo* t5212_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5212_0_0_0;
extern Il2CppType t5212_1_0_0;
struct t5212;
extern Il2CppGenericClass t5212_GC;
TypeInfo t5212_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5212_MIs, t5212_PIs, NULL, NULL, NULL, NULL, NULL, &t5212_TI, t5212_ITIs, NULL, &EmptyCustomAttributesCache, &t5212_TI, &t5212_0_0_0, &t5212_1_0_0, NULL, &t5212_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3709.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3709_TI;
#include "t3709MD.h"

extern TypeInfo t451_TI;
extern MethodInfo m21078_MI;
extern MethodInfo m27468_MI;
struct t107;
#define m27468(__this, p0, method) (t451 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.AddComponentMenu>
extern Il2CppType t107_0_0_1;
FieldInfo t3709_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3709_TI, offsetof(t3709, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3709_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3709_TI, offsetof(t3709, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3709_FIs[] =
{
	&t3709_f0_FieldInfo,
	&t3709_f1_FieldInfo,
	NULL
};
extern MethodInfo m21075_MI;
static PropertyInfo t3709____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3709_TI, "System.Collections.IEnumerator.Current", &m21075_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3709____Current_PropertyInfo = 
{
	&t3709_TI, "Current", &m21078_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3709_PIs[] =
{
	&t3709____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3709____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3709_m21074_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21074_GM;
MethodInfo m21074_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3709_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3709_m21074_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21074_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21075_GM;
MethodInfo m21075_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3709_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21075_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21076_GM;
MethodInfo m21076_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3709_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21076_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21077_GM;
MethodInfo m21077_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3709_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21077_GM};
extern Il2CppType t451_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21078_GM;
MethodInfo m21078_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3709_TI, &t451_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21078_GM};
static MethodInfo* t3709_MIs[] =
{
	&m21074_MI,
	&m21075_MI,
	&m21076_MI,
	&m21077_MI,
	&m21078_MI,
	NULL
};
extern MethodInfo m21077_MI;
extern MethodInfo m21076_MI;
static MethodInfo* t3709_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m21075_MI,
	&m21077_MI,
	&m21076_MI,
	&m21078_MI,
};
static TypeInfo* t3709_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5212_TI,
};
static Il2CppInterfaceOffsetPair t3709_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5212_TI, 7},
};
extern TypeInfo t451_TI;
static Il2CppRGCTXData t3709_RGCTXData[3] = 
{
	&m21078_MI/* Method Usage */,
	&t451_TI/* Class Usage */,
	&m27468_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3709_0_0_0;
extern Il2CppType t3709_1_0_0;
extern Il2CppGenericClass t3709_GC;
TypeInfo t3709_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3709_MIs, t3709_PIs, t3709_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3709_TI, t3709_ITIs, t3709_VT, &EmptyCustomAttributesCache, &t3709_TI, &t3709_0_0_0, &t3709_1_0_0, t3709_IOs, &t3709_GC, NULL, NULL, NULL, t3709_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3709)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6564_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.AddComponentMenu>
extern MethodInfo m35282_MI;
static PropertyInfo t6564____Count_PropertyInfo = 
{
	&t6564_TI, "Count", &m35282_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35283_MI;
static PropertyInfo t6564____IsReadOnly_PropertyInfo = 
{
	&t6564_TI, "IsReadOnly", &m35283_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6564_PIs[] =
{
	&t6564____Count_PropertyInfo,
	&t6564____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35282_GM;
MethodInfo m35282_MI = 
{
	"get_Count", NULL, &t6564_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35282_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35283_GM;
MethodInfo m35283_MI = 
{
	"get_IsReadOnly", NULL, &t6564_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35283_GM};
extern Il2CppType t451_0_0_0;
extern Il2CppType t451_0_0_0;
static ParameterInfo t6564_m35284_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t451_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35284_GM;
MethodInfo m35284_MI = 
{
	"Add", NULL, &t6564_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6564_m35284_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35284_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35285_GM;
MethodInfo m35285_MI = 
{
	"Clear", NULL, &t6564_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35285_GM};
extern Il2CppType t451_0_0_0;
static ParameterInfo t6564_m35286_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t451_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35286_GM;
MethodInfo m35286_MI = 
{
	"Contains", NULL, &t6564_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6564_m35286_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35286_GM};
extern Il2CppType t4450_0_0_0;
extern Il2CppType t4450_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6564_m35287_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4450_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35287_GM;
MethodInfo m35287_MI = 
{
	"CopyTo", NULL, &t6564_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6564_m35287_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35287_GM};
extern Il2CppType t451_0_0_0;
static ParameterInfo t6564_m35288_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t451_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35288_GM;
MethodInfo m35288_MI = 
{
	"Remove", NULL, &t6564_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6564_m35288_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35288_GM};
static MethodInfo* t6564_MIs[] =
{
	&m35282_MI,
	&m35283_MI,
	&m35284_MI,
	&m35285_MI,
	&m35286_MI,
	&m35287_MI,
	&m35288_MI,
	NULL
};
extern TypeInfo t6566_TI;
static TypeInfo* t6564_ITIs[] = 
{
	&t739_TI,
	&t6566_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6564_0_0_0;
extern Il2CppType t6564_1_0_0;
struct t6564;
extern Il2CppGenericClass t6564_GC;
TypeInfo t6564_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6564_MIs, t6564_PIs, NULL, NULL, NULL, NULL, NULL, &t6564_TI, t6564_ITIs, NULL, &EmptyCustomAttributesCache, &t6564_TI, &t6564_0_0_0, &t6564_1_0_0, NULL, &t6564_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.AddComponentMenu>
extern Il2CppType t5212_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35289_GM;
MethodInfo m35289_MI = 
{
	"GetEnumerator", NULL, &t6566_TI, &t5212_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35289_GM};
static MethodInfo* t6566_MIs[] =
{
	&m35289_MI,
	NULL
};
static TypeInfo* t6566_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6566_0_0_0;
extern Il2CppType t6566_1_0_0;
struct t6566;
extern Il2CppGenericClass t6566_GC;
TypeInfo t6566_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6566_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6566_TI, t6566_ITIs, NULL, &EmptyCustomAttributesCache, &t6566_TI, &t6566_0_0_0, &t6566_1_0_0, NULL, &t6566_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6565_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.AddComponentMenu>
extern MethodInfo m35290_MI;
extern MethodInfo m35291_MI;
static PropertyInfo t6565____Item_PropertyInfo = 
{
	&t6565_TI, "Item", &m35290_MI, &m35291_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6565_PIs[] =
{
	&t6565____Item_PropertyInfo,
	NULL
};
extern Il2CppType t451_0_0_0;
static ParameterInfo t6565_m35292_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t451_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35292_GM;
MethodInfo m35292_MI = 
{
	"IndexOf", NULL, &t6565_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6565_m35292_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35292_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t451_0_0_0;
static ParameterInfo t6565_m35293_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t451_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35293_GM;
MethodInfo m35293_MI = 
{
	"Insert", NULL, &t6565_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6565_m35293_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35293_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6565_m35294_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35294_GM;
MethodInfo m35294_MI = 
{
	"RemoveAt", NULL, &t6565_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6565_m35294_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35294_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6565_m35290_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t451_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35290_GM;
MethodInfo m35290_MI = 
{
	"get_Item", NULL, &t6565_TI, &t451_0_0_0, RuntimeInvoker_t5_t110, t6565_m35290_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35290_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t451_0_0_0;
static ParameterInfo t6565_m35291_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t451_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35291_GM;
MethodInfo m35291_MI = 
{
	"set_Item", NULL, &t6565_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6565_m35291_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35291_GM};
static MethodInfo* t6565_MIs[] =
{
	&m35292_MI,
	&m35293_MI,
	&m35294_MI,
	&m35290_MI,
	&m35291_MI,
	NULL
};
static TypeInfo* t6565_ITIs[] = 
{
	&t739_TI,
	&t6564_TI,
	&t6566_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6565_0_0_0;
extern Il2CppType t6565_1_0_0;
struct t6565;
extern Il2CppGenericClass t6565_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6565_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6565_MIs, t6565_PIs, NULL, NULL, NULL, NULL, NULL, &t6565_TI, t6565_ITIs, NULL, &t2240__CustomAttributeCache, &t6565_TI, &t6565_0_0_0, &t6565_1_0_0, NULL, &t6565_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5214_TI;

#include "t770.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.ParameterModifier>
extern MethodInfo m35295_MI;
static PropertyInfo t5214____Current_PropertyInfo = 
{
	&t5214_TI, "Current", &m35295_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5214_PIs[] =
{
	&t5214____Current_PropertyInfo,
	NULL
};
extern Il2CppType t770_0_0_0;
extern void* RuntimeInvoker_t770 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35295_GM;
MethodInfo m35295_MI = 
{
	"get_Current", NULL, &t5214_TI, &t770_0_0_0, RuntimeInvoker_t770, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35295_GM};
static MethodInfo* t5214_MIs[] =
{
	&m35295_MI,
	NULL
};
static TypeInfo* t5214_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5214_0_0_0;
extern Il2CppType t5214_1_0_0;
struct t5214;
extern Il2CppGenericClass t5214_GC;
TypeInfo t5214_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5214_MIs, t5214_PIs, NULL, NULL, NULL, NULL, NULL, &t5214_TI, t5214_ITIs, NULL, &EmptyCustomAttributesCache, &t5214_TI, &t5214_0_0_0, &t5214_1_0_0, NULL, &t5214_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3710.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3710_TI;
#include "t3710MD.h"

extern TypeInfo t770_TI;
extern MethodInfo m21083_MI;
extern MethodInfo m27479_MI;
struct t107;
 t770  m27479 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21079_MI;
 void m21079 (t3710 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21080_MI;
 t5 * m21080 (t3710 * __this, MethodInfo* method){
	{
		t770  L_0 = m21083(__this, &m21083_MI);
		t770  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t770_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m21081_MI;
 void m21081 (t3710 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21082_MI;
 bool m21082 (t3710 * __this, MethodInfo* method){
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
 t770  m21083 (t3710 * __this, MethodInfo* method){
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
		t770  L_8 = m27479(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m27479_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>
extern Il2CppType t107_0_0_1;
FieldInfo t3710_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3710_TI, offsetof(t3710, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3710_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3710_TI, offsetof(t3710, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3710_FIs[] =
{
	&t3710_f0_FieldInfo,
	&t3710_f1_FieldInfo,
	NULL
};
static PropertyInfo t3710____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3710_TI, "System.Collections.IEnumerator.Current", &m21080_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3710____Current_PropertyInfo = 
{
	&t3710_TI, "Current", &m21083_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3710_PIs[] =
{
	&t3710____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3710____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3710_m21079_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21079_GM;
MethodInfo m21079_MI = 
{
	".ctor", (methodPointerType)&m21079, &t3710_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3710_m21079_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21079_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21080_GM;
MethodInfo m21080_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21080, &t3710_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21080_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21081_GM;
MethodInfo m21081_MI = 
{
	"Dispose", (methodPointerType)&m21081, &t3710_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21081_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21082_GM;
MethodInfo m21082_MI = 
{
	"MoveNext", (methodPointerType)&m21082, &t3710_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21082_GM};
extern Il2CppType t770_0_0_0;
extern void* RuntimeInvoker_t770 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21083_GM;
MethodInfo m21083_MI = 
{
	"get_Current", (methodPointerType)&m21083, &t3710_TI, &t770_0_0_0, RuntimeInvoker_t770, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21083_GM};
static MethodInfo* t3710_MIs[] =
{
	&m21079_MI,
	&m21080_MI,
	&m21081_MI,
	&m21082_MI,
	&m21083_MI,
	NULL
};
static MethodInfo* t3710_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m21080_MI,
	&m21082_MI,
	&m21081_MI,
	&m21083_MI,
};
static TypeInfo* t3710_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5214_TI,
};
static Il2CppInterfaceOffsetPair t3710_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5214_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3710_0_0_0;
extern Il2CppType t3710_1_0_0;
extern Il2CppGenericClass t3710_GC;
TypeInfo t3710_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3710_MIs, t3710_PIs, t3710_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3710_TI, t3710_ITIs, t3710_VT, &EmptyCustomAttributesCache, &t3710_TI, &t3710_0_0_0, &t3710_1_0_0, t3710_IOs, &t3710_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3710)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6567_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.ParameterModifier>
extern MethodInfo m35296_MI;
static PropertyInfo t6567____Count_PropertyInfo = 
{
	&t6567_TI, "Count", &m35296_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35297_MI;
static PropertyInfo t6567____IsReadOnly_PropertyInfo = 
{
	&t6567_TI, "IsReadOnly", &m35297_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6567_PIs[] =
{
	&t6567____Count_PropertyInfo,
	&t6567____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35296_GM;
MethodInfo m35296_MI = 
{
	"get_Count", NULL, &t6567_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35296_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35297_GM;
MethodInfo m35297_MI = 
{
	"get_IsReadOnly", NULL, &t6567_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35297_GM};
extern Il2CppType t770_0_0_0;
extern Il2CppType t770_0_0_0;
static ParameterInfo t6567_m35298_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t770_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t770 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35298_GM;
MethodInfo m35298_MI = 
{
	"Add", NULL, &t6567_TI, &t109_0_0_0, RuntimeInvoker_t109_t770, t6567_m35298_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35298_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35299_GM;
MethodInfo m35299_MI = 
{
	"Clear", NULL, &t6567_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35299_GM};
extern Il2CppType t770_0_0_0;
static ParameterInfo t6567_m35300_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t770_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t770 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35300_GM;
MethodInfo m35300_MI = 
{
	"Contains", NULL, &t6567_TI, &t108_0_0_0, RuntimeInvoker_t108_t770, t6567_m35300_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35300_GM};
extern Il2CppType t772_0_0_0;
extern Il2CppType t772_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6567_m35301_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t772_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35301_GM;
MethodInfo m35301_MI = 
{
	"CopyTo", NULL, &t6567_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6567_m35301_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35301_GM};
extern Il2CppType t770_0_0_0;
static ParameterInfo t6567_m35302_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t770_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t770 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35302_GM;
MethodInfo m35302_MI = 
{
	"Remove", NULL, &t6567_TI, &t108_0_0_0, RuntimeInvoker_t108_t770, t6567_m35302_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35302_GM};
static MethodInfo* t6567_MIs[] =
{
	&m35296_MI,
	&m35297_MI,
	&m35298_MI,
	&m35299_MI,
	&m35300_MI,
	&m35301_MI,
	&m35302_MI,
	NULL
};
extern TypeInfo t6569_TI;
static TypeInfo* t6567_ITIs[] = 
{
	&t739_TI,
	&t6569_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6567_0_0_0;
extern Il2CppType t6567_1_0_0;
struct t6567;
extern Il2CppGenericClass t6567_GC;
TypeInfo t6567_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6567_MIs, t6567_PIs, NULL, NULL, NULL, NULL, NULL, &t6567_TI, t6567_ITIs, NULL, &EmptyCustomAttributesCache, &t6567_TI, &t6567_0_0_0, &t6567_1_0_0, NULL, &t6567_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterModifier>
extern Il2CppType t5214_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35303_GM;
MethodInfo m35303_MI = 
{
	"GetEnumerator", NULL, &t6569_TI, &t5214_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35303_GM};
static MethodInfo* t6569_MIs[] =
{
	&m35303_MI,
	NULL
};
static TypeInfo* t6569_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6569_0_0_0;
extern Il2CppType t6569_1_0_0;
struct t6569;
extern Il2CppGenericClass t6569_GC;
TypeInfo t6569_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6569_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6569_TI, t6569_ITIs, NULL, &EmptyCustomAttributesCache, &t6569_TI, &t6569_0_0_0, &t6569_1_0_0, NULL, &t6569_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6568_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.ParameterModifier>
extern MethodInfo m35304_MI;
extern MethodInfo m35305_MI;
static PropertyInfo t6568____Item_PropertyInfo = 
{
	&t6568_TI, "Item", &m35304_MI, &m35305_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6568_PIs[] =
{
	&t6568____Item_PropertyInfo,
	NULL
};
extern Il2CppType t770_0_0_0;
static ParameterInfo t6568_m35306_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t770_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t770 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35306_GM;
MethodInfo m35306_MI = 
{
	"IndexOf", NULL, &t6568_TI, &t110_0_0_0, RuntimeInvoker_t110_t770, t6568_m35306_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35306_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t770_0_0_0;
static ParameterInfo t6568_m35307_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t770_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t770 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35307_GM;
MethodInfo m35307_MI = 
{
	"Insert", NULL, &t6568_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t770, t6568_m35307_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35307_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6568_m35308_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35308_GM;
MethodInfo m35308_MI = 
{
	"RemoveAt", NULL, &t6568_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6568_m35308_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35308_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6568_m35304_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t770_0_0_0;
extern void* RuntimeInvoker_t770_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35304_GM;
MethodInfo m35304_MI = 
{
	"get_Item", NULL, &t6568_TI, &t770_0_0_0, RuntimeInvoker_t770_t110, t6568_m35304_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35304_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t770_0_0_0;
static ParameterInfo t6568_m35305_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t770_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t770 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35305_GM;
MethodInfo m35305_MI = 
{
	"set_Item", NULL, &t6568_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t770, t6568_m35305_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35305_GM};
static MethodInfo* t6568_MIs[] =
{
	&m35306_MI,
	&m35307_MI,
	&m35308_MI,
	&m35304_MI,
	&m35305_MI,
	NULL
};
static TypeInfo* t6568_ITIs[] = 
{
	&t739_TI,
	&t6567_TI,
	&t6569_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6568_0_0_0;
extern Il2CppType t6568_1_0_0;
struct t6568;
extern Il2CppGenericClass t6568_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6568_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6568_MIs, t6568_PIs, NULL, NULL, NULL, NULL, NULL, &t6568_TI, t6568_ITIs, NULL, &t2240__CustomAttributeCache, &t6568_TI, &t6568_0_0_0, &t6568_1_0_0, NULL, &t6568_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5216_TI;

#include "t677.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.WritableAttribute>
extern MethodInfo m35309_MI;
static PropertyInfo t5216____Current_PropertyInfo = 
{
	&t5216_TI, "Current", &m35309_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5216_PIs[] =
{
	&t5216____Current_PropertyInfo,
	NULL
};
extern Il2CppType t677_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35309_GM;
MethodInfo m35309_MI = 
{
	"get_Current", NULL, &t5216_TI, &t677_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35309_GM};
static MethodInfo* t5216_MIs[] =
{
	&m35309_MI,
	NULL
};
static TypeInfo* t5216_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5216_0_0_0;
extern Il2CppType t5216_1_0_0;
struct t5216;
extern Il2CppGenericClass t5216_GC;
TypeInfo t5216_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5216_MIs, t5216_PIs, NULL, NULL, NULL, NULL, NULL, &t5216_TI, t5216_ITIs, NULL, &EmptyCustomAttributesCache, &t5216_TI, &t5216_0_0_0, &t5216_1_0_0, NULL, &t5216_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3711.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3711_TI;
#include "t3711MD.h"

extern TypeInfo t677_TI;
extern MethodInfo m21088_MI;
extern MethodInfo m27490_MI;
struct t107;
#define m27490(__this, p0, method) (t677 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.WritableAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3711_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3711_TI, offsetof(t3711, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3711_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3711_TI, offsetof(t3711, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3711_FIs[] =
{
	&t3711_f0_FieldInfo,
	&t3711_f1_FieldInfo,
	NULL
};
extern MethodInfo m21085_MI;
static PropertyInfo t3711____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3711_TI, "System.Collections.IEnumerator.Current", &m21085_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3711____Current_PropertyInfo = 
{
	&t3711_TI, "Current", &m21088_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3711_PIs[] =
{
	&t3711____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3711____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3711_m21084_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21084_GM;
MethodInfo m21084_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3711_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3711_m21084_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21084_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21085_GM;
MethodInfo m21085_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3711_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21085_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21086_GM;
MethodInfo m21086_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3711_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21086_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21087_GM;
MethodInfo m21087_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3711_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21087_GM};
extern Il2CppType t677_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21088_GM;
MethodInfo m21088_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3711_TI, &t677_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21088_GM};
static MethodInfo* t3711_MIs[] =
{
	&m21084_MI,
	&m21085_MI,
	&m21086_MI,
	&m21087_MI,
	&m21088_MI,
	NULL
};
extern MethodInfo m21087_MI;
extern MethodInfo m21086_MI;
static MethodInfo* t3711_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m21085_MI,
	&m21087_MI,
	&m21086_MI,
	&m21088_MI,
};
static TypeInfo* t3711_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5216_TI,
};
static Il2CppInterfaceOffsetPair t3711_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5216_TI, 7},
};
extern TypeInfo t677_TI;
static Il2CppRGCTXData t3711_RGCTXData[3] = 
{
	&m21088_MI/* Method Usage */,
	&t677_TI/* Class Usage */,
	&m27490_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3711_0_0_0;
extern Il2CppType t3711_1_0_0;
extern Il2CppGenericClass t3711_GC;
TypeInfo t3711_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3711_MIs, t3711_PIs, t3711_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3711_TI, t3711_ITIs, t3711_VT, &EmptyCustomAttributesCache, &t3711_TI, &t3711_0_0_0, &t3711_1_0_0, t3711_IOs, &t3711_GC, NULL, NULL, NULL, t3711_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3711)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6570_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.WritableAttribute>
extern MethodInfo m35310_MI;
static PropertyInfo t6570____Count_PropertyInfo = 
{
	&t6570_TI, "Count", &m35310_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35311_MI;
static PropertyInfo t6570____IsReadOnly_PropertyInfo = 
{
	&t6570_TI, "IsReadOnly", &m35311_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6570_PIs[] =
{
	&t6570____Count_PropertyInfo,
	&t6570____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35310_GM;
MethodInfo m35310_MI = 
{
	"get_Count", NULL, &t6570_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35310_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35311_GM;
MethodInfo m35311_MI = 
{
	"get_IsReadOnly", NULL, &t6570_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35311_GM};
extern Il2CppType t677_0_0_0;
extern Il2CppType t677_0_0_0;
static ParameterInfo t6570_m35312_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t677_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35312_GM;
MethodInfo m35312_MI = 
{
	"Add", NULL, &t6570_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6570_m35312_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35312_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35313_GM;
MethodInfo m35313_MI = 
{
	"Clear", NULL, &t6570_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35313_GM};
extern Il2CppType t677_0_0_0;
static ParameterInfo t6570_m35314_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t677_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35314_GM;
MethodInfo m35314_MI = 
{
	"Contains", NULL, &t6570_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6570_m35314_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35314_GM};
extern Il2CppType t4451_0_0_0;
extern Il2CppType t4451_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6570_m35315_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4451_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35315_GM;
MethodInfo m35315_MI = 
{
	"CopyTo", NULL, &t6570_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6570_m35315_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35315_GM};
extern Il2CppType t677_0_0_0;
static ParameterInfo t6570_m35316_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t677_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35316_GM;
MethodInfo m35316_MI = 
{
	"Remove", NULL, &t6570_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6570_m35316_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35316_GM};
static MethodInfo* t6570_MIs[] =
{
	&m35310_MI,
	&m35311_MI,
	&m35312_MI,
	&m35313_MI,
	&m35314_MI,
	&m35315_MI,
	&m35316_MI,
	NULL
};
extern TypeInfo t6572_TI;
static TypeInfo* t6570_ITIs[] = 
{
	&t739_TI,
	&t6572_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6570_0_0_0;
extern Il2CppType t6570_1_0_0;
struct t6570;
extern Il2CppGenericClass t6570_GC;
TypeInfo t6570_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6570_MIs, t6570_PIs, NULL, NULL, NULL, NULL, NULL, &t6570_TI, t6570_ITIs, NULL, &EmptyCustomAttributesCache, &t6570_TI, &t6570_0_0_0, &t6570_1_0_0, NULL, &t6570_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.WritableAttribute>
extern Il2CppType t5216_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35317_GM;
MethodInfo m35317_MI = 
{
	"GetEnumerator", NULL, &t6572_TI, &t5216_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35317_GM};
static MethodInfo* t6572_MIs[] =
{
	&m35317_MI,
	NULL
};
static TypeInfo* t6572_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6572_0_0_0;
extern Il2CppType t6572_1_0_0;
struct t6572;
extern Il2CppGenericClass t6572_GC;
TypeInfo t6572_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6572_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6572_TI, t6572_ITIs, NULL, &EmptyCustomAttributesCache, &t6572_TI, &t6572_0_0_0, &t6572_1_0_0, NULL, &t6572_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6571_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.WritableAttribute>
extern MethodInfo m35318_MI;
extern MethodInfo m35319_MI;
static PropertyInfo t6571____Item_PropertyInfo = 
{
	&t6571_TI, "Item", &m35318_MI, &m35319_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6571_PIs[] =
{
	&t6571____Item_PropertyInfo,
	NULL
};
extern Il2CppType t677_0_0_0;
static ParameterInfo t6571_m35320_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t677_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35320_GM;
MethodInfo m35320_MI = 
{
	"IndexOf", NULL, &t6571_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6571_m35320_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35320_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t677_0_0_0;
static ParameterInfo t6571_m35321_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t677_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35321_GM;
MethodInfo m35321_MI = 
{
	"Insert", NULL, &t6571_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6571_m35321_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35321_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6571_m35322_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35322_GM;
MethodInfo m35322_MI = 
{
	"RemoveAt", NULL, &t6571_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6571_m35322_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35322_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6571_m35318_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t677_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35318_GM;
MethodInfo m35318_MI = 
{
	"get_Item", NULL, &t6571_TI, &t677_0_0_0, RuntimeInvoker_t5_t110, t6571_m35318_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35318_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t677_0_0_0;
static ParameterInfo t6571_m35319_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t677_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35319_GM;
MethodInfo m35319_MI = 
{
	"set_Item", NULL, &t6571_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6571_m35319_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35319_GM};
static MethodInfo* t6571_MIs[] =
{
	&m35320_MI,
	&m35321_MI,
	&m35322_MI,
	&m35318_MI,
	&m35319_MI,
	NULL
};
static TypeInfo* t6571_ITIs[] = 
{
	&t739_TI,
	&t6570_TI,
	&t6572_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6571_0_0_0;
extern Il2CppType t6571_1_0_0;
struct t6571;
extern Il2CppGenericClass t6571_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6571_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6571_MIs, t6571_PIs, NULL, NULL, NULL, NULL, NULL, &t6571_TI, t6571_ITIs, NULL, &t2240__CustomAttributeCache, &t6571_TI, &t6571_0_0_0, &t6571_1_0_0, NULL, &t6571_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5218_TI;

#include "t678.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.AssemblyIsEditorAssembly>
extern MethodInfo m35323_MI;
static PropertyInfo t5218____Current_PropertyInfo = 
{
	&t5218_TI, "Current", &m35323_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5218_PIs[] =
{
	&t5218____Current_PropertyInfo,
	NULL
};
extern Il2CppType t678_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35323_GM;
MethodInfo m35323_MI = 
{
	"get_Current", NULL, &t5218_TI, &t678_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35323_GM};
static MethodInfo* t5218_MIs[] =
{
	&m35323_MI,
	NULL
};
static TypeInfo* t5218_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5218_0_0_0;
extern Il2CppType t5218_1_0_0;
struct t5218;
extern Il2CppGenericClass t5218_GC;
TypeInfo t5218_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5218_MIs, t5218_PIs, NULL, NULL, NULL, NULL, NULL, &t5218_TI, t5218_ITIs, NULL, &EmptyCustomAttributesCache, &t5218_TI, &t5218_0_0_0, &t5218_1_0_0, NULL, &t5218_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3712.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3712_TI;
#include "t3712MD.h"

extern TypeInfo t678_TI;
extern MethodInfo m21093_MI;
extern MethodInfo m27501_MI;
struct t107;
#define m27501(__this, p0, method) (t678 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.AssemblyIsEditorAssembly>
extern Il2CppType t107_0_0_1;
FieldInfo t3712_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3712_TI, offsetof(t3712, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3712_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3712_TI, offsetof(t3712, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3712_FIs[] =
{
	&t3712_f0_FieldInfo,
	&t3712_f1_FieldInfo,
	NULL
};
extern MethodInfo m21090_MI;
static PropertyInfo t3712____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3712_TI, "System.Collections.IEnumerator.Current", &m21090_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3712____Current_PropertyInfo = 
{
	&t3712_TI, "Current", &m21093_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3712_PIs[] =
{
	&t3712____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3712____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3712_m21089_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21089_GM;
MethodInfo m21089_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3712_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3712_m21089_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21089_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21090_GM;
MethodInfo m21090_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3712_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21090_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21091_GM;
MethodInfo m21091_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3712_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21091_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21092_GM;
MethodInfo m21092_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3712_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21092_GM};
extern Il2CppType t678_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21093_GM;
MethodInfo m21093_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3712_TI, &t678_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21093_GM};
static MethodInfo* t3712_MIs[] =
{
	&m21089_MI,
	&m21090_MI,
	&m21091_MI,
	&m21092_MI,
	&m21093_MI,
	NULL
};
extern MethodInfo m21092_MI;
extern MethodInfo m21091_MI;
static MethodInfo* t3712_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m21090_MI,
	&m21092_MI,
	&m21091_MI,
	&m21093_MI,
};
static TypeInfo* t3712_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5218_TI,
};
static Il2CppInterfaceOffsetPair t3712_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5218_TI, 7},
};
extern TypeInfo t678_TI;
static Il2CppRGCTXData t3712_RGCTXData[3] = 
{
	&m21093_MI/* Method Usage */,
	&t678_TI/* Class Usage */,
	&m27501_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3712_0_0_0;
extern Il2CppType t3712_1_0_0;
extern Il2CppGenericClass t3712_GC;
TypeInfo t3712_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3712_MIs, t3712_PIs, t3712_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3712_TI, t3712_ITIs, t3712_VT, &EmptyCustomAttributesCache, &t3712_TI, &t3712_0_0_0, &t3712_1_0_0, t3712_IOs, &t3712_GC, NULL, NULL, NULL, t3712_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3712)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6573_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.AssemblyIsEditorAssembly>
extern MethodInfo m35324_MI;
static PropertyInfo t6573____Count_PropertyInfo = 
{
	&t6573_TI, "Count", &m35324_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35325_MI;
static PropertyInfo t6573____IsReadOnly_PropertyInfo = 
{
	&t6573_TI, "IsReadOnly", &m35325_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6573_PIs[] =
{
	&t6573____Count_PropertyInfo,
	&t6573____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35324_GM;
MethodInfo m35324_MI = 
{
	"get_Count", NULL, &t6573_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35324_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35325_GM;
MethodInfo m35325_MI = 
{
	"get_IsReadOnly", NULL, &t6573_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35325_GM};
extern Il2CppType t678_0_0_0;
extern Il2CppType t678_0_0_0;
static ParameterInfo t6573_m35326_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t678_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35326_GM;
MethodInfo m35326_MI = 
{
	"Add", NULL, &t6573_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6573_m35326_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35326_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35327_GM;
MethodInfo m35327_MI = 
{
	"Clear", NULL, &t6573_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35327_GM};
extern Il2CppType t678_0_0_0;
static ParameterInfo t6573_m35328_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t678_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35328_GM;
MethodInfo m35328_MI = 
{
	"Contains", NULL, &t6573_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6573_m35328_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35328_GM};
extern Il2CppType t4452_0_0_0;
extern Il2CppType t4452_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6573_m35329_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4452_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35329_GM;
MethodInfo m35329_MI = 
{
	"CopyTo", NULL, &t6573_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6573_m35329_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35329_GM};
extern Il2CppType t678_0_0_0;
static ParameterInfo t6573_m35330_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t678_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35330_GM;
MethodInfo m35330_MI = 
{
	"Remove", NULL, &t6573_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6573_m35330_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35330_GM};
static MethodInfo* t6573_MIs[] =
{
	&m35324_MI,
	&m35325_MI,
	&m35326_MI,
	&m35327_MI,
	&m35328_MI,
	&m35329_MI,
	&m35330_MI,
	NULL
};
extern TypeInfo t6575_TI;
static TypeInfo* t6573_ITIs[] = 
{
	&t739_TI,
	&t6575_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6573_0_0_0;
extern Il2CppType t6573_1_0_0;
struct t6573;
extern Il2CppGenericClass t6573_GC;
TypeInfo t6573_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6573_MIs, t6573_PIs, NULL, NULL, NULL, NULL, NULL, &t6573_TI, t6573_ITIs, NULL, &EmptyCustomAttributesCache, &t6573_TI, &t6573_0_0_0, &t6573_1_0_0, NULL, &t6573_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.AssemblyIsEditorAssembly>
extern Il2CppType t5218_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35331_GM;
MethodInfo m35331_MI = 
{
	"GetEnumerator", NULL, &t6575_TI, &t5218_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35331_GM};
static MethodInfo* t6575_MIs[] =
{
	&m35331_MI,
	NULL
};
static TypeInfo* t6575_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6575_0_0_0;
extern Il2CppType t6575_1_0_0;
struct t6575;
extern Il2CppGenericClass t6575_GC;
TypeInfo t6575_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6575_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6575_TI, t6575_ITIs, NULL, &EmptyCustomAttributesCache, &t6575_TI, &t6575_0_0_0, &t6575_1_0_0, NULL, &t6575_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6574_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.AssemblyIsEditorAssembly>
extern MethodInfo m35332_MI;
extern MethodInfo m35333_MI;
static PropertyInfo t6574____Item_PropertyInfo = 
{
	&t6574_TI, "Item", &m35332_MI, &m35333_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6574_PIs[] =
{
	&t6574____Item_PropertyInfo,
	NULL
};
extern Il2CppType t678_0_0_0;
static ParameterInfo t6574_m35334_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t678_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35334_GM;
MethodInfo m35334_MI = 
{
	"IndexOf", NULL, &t6574_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6574_m35334_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35334_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t678_0_0_0;
static ParameterInfo t6574_m35335_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t678_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35335_GM;
MethodInfo m35335_MI = 
{
	"Insert", NULL, &t6574_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6574_m35335_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35335_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6574_m35336_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35336_GM;
MethodInfo m35336_MI = 
{
	"RemoveAt", NULL, &t6574_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6574_m35336_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35336_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6574_m35332_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t678_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35332_GM;
MethodInfo m35332_MI = 
{
	"get_Item", NULL, &t6574_TI, &t678_0_0_0, RuntimeInvoker_t5_t110, t6574_m35332_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35332_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t678_0_0_0;
static ParameterInfo t6574_m35333_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t678_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35333_GM;
MethodInfo m35333_MI = 
{
	"set_Item", NULL, &t6574_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6574_m35333_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35333_GM};
static MethodInfo* t6574_MIs[] =
{
	&m35334_MI,
	&m35335_MI,
	&m35336_MI,
	&m35332_MI,
	&m35333_MI,
	NULL
};
static TypeInfo* t6574_ITIs[] = 
{
	&t739_TI,
	&t6573_TI,
	&t6575_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6574_0_0_0;
extern Il2CppType t6574_1_0_0;
struct t6574;
extern Il2CppGenericClass t6574_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6574_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6574_MIs, t6574_PIs, NULL, NULL, NULL, NULL, NULL, &t6574_TI, t6574_ITIs, NULL, &t2240__CustomAttributeCache, &t6574_TI, &t6574_0_0_0, &t6574_1_0_0, NULL, &t6574_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5220_TI;

#include "t636.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.CameraClearFlags>
extern MethodInfo m35337_MI;
static PropertyInfo t5220____Current_PropertyInfo = 
{
	&t5220_TI, "Current", &m35337_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5220_PIs[] =
{
	&t5220____Current_PropertyInfo,
	NULL
};
extern Il2CppType t636_0_0_0;
extern void* RuntimeInvoker_t636 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35337_GM;
MethodInfo m35337_MI = 
{
	"get_Current", NULL, &t5220_TI, &t636_0_0_0, RuntimeInvoker_t636, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35337_GM};
static MethodInfo* t5220_MIs[] =
{
	&m35337_MI,
	NULL
};
static TypeInfo* t5220_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5220_0_0_0;
extern Il2CppType t5220_1_0_0;
struct t5220;
extern Il2CppGenericClass t5220_GC;
TypeInfo t5220_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5220_MIs, t5220_PIs, NULL, NULL, NULL, NULL, NULL, &t5220_TI, t5220_ITIs, NULL, &EmptyCustomAttributesCache, &t5220_TI, &t5220_0_0_0, &t5220_1_0_0, NULL, &t5220_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3713.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3713_TI;
#include "t3713MD.h"

extern TypeInfo t636_TI;
extern MethodInfo m21098_MI;
extern MethodInfo m27512_MI;
struct t107;
 int32_t m27512 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21094_MI;
 void m21094 (t3713 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21095_MI;
 t5 * m21095 (t3713 * __this, MethodInfo* method){
	{
		int32_t L_0 = m21098(__this, &m21098_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t636_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m21096_MI;
 void m21096 (t3713 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21097_MI;
 bool m21097 (t3713 * __this, MethodInfo* method){
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
 int32_t m21098 (t3713 * __this, MethodInfo* method){
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
		int32_t L_8 = m27512(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m27512_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.CameraClearFlags>
extern Il2CppType t107_0_0_1;
FieldInfo t3713_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3713_TI, offsetof(t3713, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3713_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3713_TI, offsetof(t3713, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3713_FIs[] =
{
	&t3713_f0_FieldInfo,
	&t3713_f1_FieldInfo,
	NULL
};
static PropertyInfo t3713____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3713_TI, "System.Collections.IEnumerator.Current", &m21095_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3713____Current_PropertyInfo = 
{
	&t3713_TI, "Current", &m21098_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3713_PIs[] =
{
	&t3713____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3713____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3713_m21094_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21094_GM;
MethodInfo m21094_MI = 
{
	".ctor", (methodPointerType)&m21094, &t3713_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3713_m21094_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21094_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21095_GM;
MethodInfo m21095_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21095, &t3713_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21095_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21096_GM;
MethodInfo m21096_MI = 
{
	"Dispose", (methodPointerType)&m21096, &t3713_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21096_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21097_GM;
MethodInfo m21097_MI = 
{
	"MoveNext", (methodPointerType)&m21097, &t3713_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21097_GM};
extern Il2CppType t636_0_0_0;
extern void* RuntimeInvoker_t636 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21098_GM;
MethodInfo m21098_MI = 
{
	"get_Current", (methodPointerType)&m21098, &t3713_TI, &t636_0_0_0, RuntimeInvoker_t636, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21098_GM};
static MethodInfo* t3713_MIs[] =
{
	&m21094_MI,
	&m21095_MI,
	&m21096_MI,
	&m21097_MI,
	&m21098_MI,
	NULL
};
static MethodInfo* t3713_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m21095_MI,
	&m21097_MI,
	&m21096_MI,
	&m21098_MI,
};
static TypeInfo* t3713_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5220_TI,
};
static Il2CppInterfaceOffsetPair t3713_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5220_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3713_0_0_0;
extern Il2CppType t3713_1_0_0;
extern Il2CppGenericClass t3713_GC;
TypeInfo t3713_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3713_MIs, t3713_PIs, t3713_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3713_TI, t3713_ITIs, t3713_VT, &EmptyCustomAttributesCache, &t3713_TI, &t3713_0_0_0, &t3713_1_0_0, t3713_IOs, &t3713_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3713)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6576_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.CameraClearFlags>
extern MethodInfo m35338_MI;
static PropertyInfo t6576____Count_PropertyInfo = 
{
	&t6576_TI, "Count", &m35338_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35339_MI;
static PropertyInfo t6576____IsReadOnly_PropertyInfo = 
{
	&t6576_TI, "IsReadOnly", &m35339_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6576_PIs[] =
{
	&t6576____Count_PropertyInfo,
	&t6576____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35338_GM;
MethodInfo m35338_MI = 
{
	"get_Count", NULL, &t6576_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35338_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35339_GM;
MethodInfo m35339_MI = 
{
	"get_IsReadOnly", NULL, &t6576_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35339_GM};
extern Il2CppType t636_0_0_0;
extern Il2CppType t636_0_0_0;
static ParameterInfo t6576_m35340_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t636_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35340_GM;
MethodInfo m35340_MI = 
{
	"Add", NULL, &t6576_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6576_m35340_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35340_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35341_GM;
MethodInfo m35341_MI = 
{
	"Clear", NULL, &t6576_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35341_GM};
extern Il2CppType t636_0_0_0;
static ParameterInfo t6576_m35342_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t636_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35342_GM;
MethodInfo m35342_MI = 
{
	"Contains", NULL, &t6576_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6576_m35342_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35342_GM};
extern Il2CppType t4453_0_0_0;
extern Il2CppType t4453_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6576_m35343_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4453_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35343_GM;
MethodInfo m35343_MI = 
{
	"CopyTo", NULL, &t6576_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6576_m35343_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35343_GM};
extern Il2CppType t636_0_0_0;
static ParameterInfo t6576_m35344_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t636_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35344_GM;
MethodInfo m35344_MI = 
{
	"Remove", NULL, &t6576_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6576_m35344_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35344_GM};
static MethodInfo* t6576_MIs[] =
{
	&m35338_MI,
	&m35339_MI,
	&m35340_MI,
	&m35341_MI,
	&m35342_MI,
	&m35343_MI,
	&m35344_MI,
	NULL
};
extern TypeInfo t6578_TI;
static TypeInfo* t6576_ITIs[] = 
{
	&t739_TI,
	&t6578_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6576_0_0_0;
extern Il2CppType t6576_1_0_0;
struct t6576;
extern Il2CppGenericClass t6576_GC;
TypeInfo t6576_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6576_MIs, t6576_PIs, NULL, NULL, NULL, NULL, NULL, &t6576_TI, t6576_ITIs, NULL, &EmptyCustomAttributesCache, &t6576_TI, &t6576_0_0_0, &t6576_1_0_0, NULL, &t6576_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.CameraClearFlags>
extern Il2CppType t5220_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35345_GM;
MethodInfo m35345_MI = 
{
	"GetEnumerator", NULL, &t6578_TI, &t5220_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35345_GM};
static MethodInfo* t6578_MIs[] =
{
	&m35345_MI,
	NULL
};
static TypeInfo* t6578_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6578_0_0_0;
extern Il2CppType t6578_1_0_0;
struct t6578;
extern Il2CppGenericClass t6578_GC;
TypeInfo t6578_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6578_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6578_TI, t6578_ITIs, NULL, &EmptyCustomAttributesCache, &t6578_TI, &t6578_0_0_0, &t6578_1_0_0, NULL, &t6578_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6577_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.CameraClearFlags>
extern MethodInfo m35346_MI;
extern MethodInfo m35347_MI;
static PropertyInfo t6577____Item_PropertyInfo = 
{
	&t6577_TI, "Item", &m35346_MI, &m35347_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6577_PIs[] =
{
	&t6577____Item_PropertyInfo,
	NULL
};
extern Il2CppType t636_0_0_0;
static ParameterInfo t6577_m35348_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t636_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35348_GM;
MethodInfo m35348_MI = 
{
	"IndexOf", NULL, &t6577_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6577_m35348_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35348_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t636_0_0_0;
static ParameterInfo t6577_m35349_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t636_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35349_GM;
MethodInfo m35349_MI = 
{
	"Insert", NULL, &t6577_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6577_m35349_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35349_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6577_m35350_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35350_GM;
MethodInfo m35350_MI = 
{
	"RemoveAt", NULL, &t6577_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6577_m35350_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35350_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6577_m35346_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t636_0_0_0;
extern void* RuntimeInvoker_t636_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35346_GM;
MethodInfo m35346_MI = 
{
	"get_Item", NULL, &t6577_TI, &t636_0_0_0, RuntimeInvoker_t636_t110, t6577_m35346_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35346_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t636_0_0_0;
static ParameterInfo t6577_m35347_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t636_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35347_GM;
MethodInfo m35347_MI = 
{
	"set_Item", NULL, &t6577_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6577_m35347_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35347_GM};
static MethodInfo* t6577_MIs[] =
{
	&m35348_MI,
	&m35349_MI,
	&m35350_MI,
	&m35346_MI,
	&m35347_MI,
	NULL
};
static TypeInfo* t6577_ITIs[] = 
{
	&t739_TI,
	&t6576_TI,
	&t6578_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6577_0_0_0;
extern Il2CppType t6577_1_0_0;
struct t6577;
extern Il2CppGenericClass t6577_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6577_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6577_MIs, t6577_PIs, NULL, NULL, NULL, NULL, NULL, &t6577_TI, t6577_ITIs, NULL, &t2240__CustomAttributeCache, &t6577_TI, &t6577_0_0_0, &t6577_1_0_0, NULL, &t6577_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5222_TI;

#include "t680.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>
extern MethodInfo m35351_MI;
static PropertyInfo t5222____Current_PropertyInfo = 
{
	&t5222_TI, "Current", &m35351_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5222_PIs[] =
{
	&t5222____Current_PropertyInfo,
	NULL
};
extern Il2CppType t680_0_0_0;
extern void* RuntimeInvoker_t680 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35351_GM;
MethodInfo m35351_MI = 
{
	"get_Current", NULL, &t5222_TI, &t680_0_0_0, RuntimeInvoker_t680, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35351_GM};
static MethodInfo* t5222_MIs[] =
{
	&m35351_MI,
	NULL
};
static TypeInfo* t5222_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5222_0_0_0;
extern Il2CppType t5222_1_0_0;
struct t5222;
extern Il2CppGenericClass t5222_GC;
TypeInfo t5222_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5222_MIs, t5222_PIs, NULL, NULL, NULL, NULL, NULL, &t5222_TI, t5222_ITIs, NULL, &EmptyCustomAttributesCache, &t5222_TI, &t5222_0_0_0, &t5222_1_0_0, NULL, &t5222_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3714.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3714_TI;
#include "t3714MD.h"

extern TypeInfo t680_TI;
extern MethodInfo m21103_MI;
extern MethodInfo m27523_MI;
struct t107;
 t680  m27523 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21099_MI;
 void m21099 (t3714 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21100_MI;
 t5 * m21100 (t3714 * __this, MethodInfo* method){
	{
		t680  L_0 = m21103(__this, &m21103_MI);
		t680  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t680_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m21101_MI;
 void m21101 (t3714 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21102_MI;
 bool m21102 (t3714 * __this, MethodInfo* method){
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
 t680  m21103 (t3714 * __this, MethodInfo* method){
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
		t680  L_8 = m27523(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m27523_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>
extern Il2CppType t107_0_0_1;
FieldInfo t3714_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3714_TI, offsetof(t3714, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3714_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3714_TI, offsetof(t3714, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3714_FIs[] =
{
	&t3714_f0_FieldInfo,
	&t3714_f1_FieldInfo,
	NULL
};
static PropertyInfo t3714____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3714_TI, "System.Collections.IEnumerator.Current", &m21100_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3714____Current_PropertyInfo = 
{
	&t3714_TI, "Current", &m21103_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3714_PIs[] =
{
	&t3714____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3714____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3714_m21099_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21099_GM;
MethodInfo m21099_MI = 
{
	".ctor", (methodPointerType)&m21099, &t3714_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3714_m21099_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21099_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21100_GM;
MethodInfo m21100_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21100, &t3714_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21100_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21101_GM;
MethodInfo m21101_MI = 
{
	"Dispose", (methodPointerType)&m21101, &t3714_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21101_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21102_GM;
MethodInfo m21102_MI = 
{
	"MoveNext", (methodPointerType)&m21102, &t3714_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21102_GM};
extern Il2CppType t680_0_0_0;
extern void* RuntimeInvoker_t680 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21103_GM;
MethodInfo m21103_MI = 
{
	"get_Current", (methodPointerType)&m21103, &t3714_TI, &t680_0_0_0, RuntimeInvoker_t680, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21103_GM};
static MethodInfo* t3714_MIs[] =
{
	&m21099_MI,
	&m21100_MI,
	&m21101_MI,
	&m21102_MI,
	&m21103_MI,
	NULL
};
static MethodInfo* t3714_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m21100_MI,
	&m21102_MI,
	&m21101_MI,
	&m21103_MI,
};
static TypeInfo* t3714_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5222_TI,
};
static Il2CppInterfaceOffsetPair t3714_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5222_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3714_0_0_0;
extern Il2CppType t3714_1_0_0;
extern Il2CppGenericClass t3714_GC;
TypeInfo t3714_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3714_MIs, t3714_PIs, t3714_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3714_TI, t3714_ITIs, t3714_VT, &EmptyCustomAttributesCache, &t3714_TI, &t3714_0_0_0, &t3714_1_0_0, t3714_IOs, &t3714_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3714)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6579_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.SendMouseEvents/HitInfo>
extern MethodInfo m35352_MI;
static PropertyInfo t6579____Count_PropertyInfo = 
{
	&t6579_TI, "Count", &m35352_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35353_MI;
static PropertyInfo t6579____IsReadOnly_PropertyInfo = 
{
	&t6579_TI, "IsReadOnly", &m35353_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6579_PIs[] =
{
	&t6579____Count_PropertyInfo,
	&t6579____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35352_GM;
MethodInfo m35352_MI = 
{
	"get_Count", NULL, &t6579_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35352_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35353_GM;
MethodInfo m35353_MI = 
{
	"get_IsReadOnly", NULL, &t6579_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35353_GM};
extern Il2CppType t680_0_0_0;
extern Il2CppType t680_0_0_0;
static ParameterInfo t6579_m35354_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t680_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t680 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35354_GM;
MethodInfo m35354_MI = 
{
	"Add", NULL, &t6579_TI, &t109_0_0_0, RuntimeInvoker_t109_t680, t6579_m35354_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35354_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35355_GM;
MethodInfo m35355_MI = 
{
	"Clear", NULL, &t6579_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35355_GM};
extern Il2CppType t680_0_0_0;
static ParameterInfo t6579_m35356_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t680_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t680 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35356_GM;
MethodInfo m35356_MI = 
{
	"Contains", NULL, &t6579_TI, &t108_0_0_0, RuntimeInvoker_t108_t680, t6579_m35356_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35356_GM};
extern Il2CppType t682_0_0_0;
extern Il2CppType t682_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6579_m35357_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t682_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35357_GM;
MethodInfo m35357_MI = 
{
	"CopyTo", NULL, &t6579_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6579_m35357_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35357_GM};
extern Il2CppType t680_0_0_0;
static ParameterInfo t6579_m35358_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t680_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t680 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35358_GM;
MethodInfo m35358_MI = 
{
	"Remove", NULL, &t6579_TI, &t108_0_0_0, RuntimeInvoker_t108_t680, t6579_m35358_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35358_GM};
static MethodInfo* t6579_MIs[] =
{
	&m35352_MI,
	&m35353_MI,
	&m35354_MI,
	&m35355_MI,
	&m35356_MI,
	&m35357_MI,
	&m35358_MI,
	NULL
};
extern TypeInfo t6581_TI;
static TypeInfo* t6579_ITIs[] = 
{
	&t739_TI,
	&t6581_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6579_0_0_0;
extern Il2CppType t6579_1_0_0;
struct t6579;
extern Il2CppGenericClass t6579_GC;
TypeInfo t6579_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6579_MIs, t6579_PIs, NULL, NULL, NULL, NULL, NULL, &t6579_TI, t6579_ITIs, NULL, &EmptyCustomAttributesCache, &t6579_TI, &t6579_0_0_0, &t6579_1_0_0, NULL, &t6579_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.SendMouseEvents/HitInfo>
extern Il2CppType t5222_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35359_GM;
MethodInfo m35359_MI = 
{
	"GetEnumerator", NULL, &t6581_TI, &t5222_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35359_GM};
static MethodInfo* t6581_MIs[] =
{
	&m35359_MI,
	NULL
};
static TypeInfo* t6581_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6581_0_0_0;
extern Il2CppType t6581_1_0_0;
struct t6581;
extern Il2CppGenericClass t6581_GC;
TypeInfo t6581_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6581_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6581_TI, t6581_ITIs, NULL, &EmptyCustomAttributesCache, &t6581_TI, &t6581_0_0_0, &t6581_1_0_0, NULL, &t6581_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6580_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.SendMouseEvents/HitInfo>
extern MethodInfo m35360_MI;
extern MethodInfo m35361_MI;
static PropertyInfo t6580____Item_PropertyInfo = 
{
	&t6580_TI, "Item", &m35360_MI, &m35361_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6580_PIs[] =
{
	&t6580____Item_PropertyInfo,
	NULL
};
extern Il2CppType t680_0_0_0;
static ParameterInfo t6580_m35362_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t680_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t680 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35362_GM;
MethodInfo m35362_MI = 
{
	"IndexOf", NULL, &t6580_TI, &t110_0_0_0, RuntimeInvoker_t110_t680, t6580_m35362_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35362_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t680_0_0_0;
static ParameterInfo t6580_m35363_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t680_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t680 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35363_GM;
MethodInfo m35363_MI = 
{
	"Insert", NULL, &t6580_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t680, t6580_m35363_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35363_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6580_m35364_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35364_GM;
MethodInfo m35364_MI = 
{
	"RemoveAt", NULL, &t6580_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6580_m35364_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35364_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6580_m35360_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t680_0_0_0;
extern void* RuntimeInvoker_t680_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35360_GM;
MethodInfo m35360_MI = 
{
	"get_Item", NULL, &t6580_TI, &t680_0_0_0, RuntimeInvoker_t680_t110, t6580_m35360_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35360_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t680_0_0_0;
static ParameterInfo t6580_m35361_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t680_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t680 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35361_GM;
MethodInfo m35361_MI = 
{
	"set_Item", NULL, &t6580_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t680, t6580_m35361_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35361_GM};
static MethodInfo* t6580_MIs[] =
{
	&m35362_MI,
	&m35363_MI,
	&m35364_MI,
	&m35360_MI,
	&m35361_MI,
	NULL
};
static TypeInfo* t6580_ITIs[] = 
{
	&t739_TI,
	&t6579_TI,
	&t6581_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6580_0_0_0;
extern Il2CppType t6580_1_0_0;
struct t6580;
extern Il2CppGenericClass t6580_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6580_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6580_MIs, t6580_PIs, NULL, NULL, NULL, NULL, NULL, &t6580_TI, t6580_ITIs, NULL, &t2240__CustomAttributeCache, &t6580_TI, &t6580_0_0_0, &t6580_1_0_0, NULL, &t6580_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5224_TI;

#include "t683.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.PropertyAttribute>
extern MethodInfo m35365_MI;
static PropertyInfo t5224____Current_PropertyInfo = 
{
	&t5224_TI, "Current", &m35365_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5224_PIs[] =
{
	&t5224____Current_PropertyInfo,
	NULL
};
extern Il2CppType t683_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35365_GM;
MethodInfo m35365_MI = 
{
	"get_Current", NULL, &t5224_TI, &t683_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35365_GM};
static MethodInfo* t5224_MIs[] =
{
	&m35365_MI,
	NULL
};
static TypeInfo* t5224_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5224_0_0_0;
extern Il2CppType t5224_1_0_0;
struct t5224;
extern Il2CppGenericClass t5224_GC;
TypeInfo t5224_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5224_MIs, t5224_PIs, NULL, NULL, NULL, NULL, NULL, &t5224_TI, t5224_ITIs, NULL, &EmptyCustomAttributesCache, &t5224_TI, &t5224_0_0_0, &t5224_1_0_0, NULL, &t5224_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3715.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3715_TI;
#include "t3715MD.h"

extern TypeInfo t683_TI;
extern MethodInfo m21108_MI;
extern MethodInfo m27534_MI;
struct t107;
#define m27534(__this, p0, method) (t683 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.PropertyAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3715_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3715_TI, offsetof(t3715, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3715_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3715_TI, offsetof(t3715, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3715_FIs[] =
{
	&t3715_f0_FieldInfo,
	&t3715_f1_FieldInfo,
	NULL
};
extern MethodInfo m21105_MI;
static PropertyInfo t3715____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3715_TI, "System.Collections.IEnumerator.Current", &m21105_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3715____Current_PropertyInfo = 
{
	&t3715_TI, "Current", &m21108_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3715_PIs[] =
{
	&t3715____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3715____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3715_m21104_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21104_GM;
MethodInfo m21104_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3715_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3715_m21104_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21104_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21105_GM;
MethodInfo m21105_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3715_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21105_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21106_GM;
MethodInfo m21106_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3715_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21106_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21107_GM;
MethodInfo m21107_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3715_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21107_GM};
extern Il2CppType t683_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21108_GM;
MethodInfo m21108_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3715_TI, &t683_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21108_GM};
static MethodInfo* t3715_MIs[] =
{
	&m21104_MI,
	&m21105_MI,
	&m21106_MI,
	&m21107_MI,
	&m21108_MI,
	NULL
};
extern MethodInfo m21107_MI;
extern MethodInfo m21106_MI;
static MethodInfo* t3715_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m21105_MI,
	&m21107_MI,
	&m21106_MI,
	&m21108_MI,
};
static TypeInfo* t3715_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5224_TI,
};
static Il2CppInterfaceOffsetPair t3715_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5224_TI, 7},
};
extern TypeInfo t683_TI;
static Il2CppRGCTXData t3715_RGCTXData[3] = 
{
	&m21108_MI/* Method Usage */,
	&t683_TI/* Class Usage */,
	&m27534_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3715_0_0_0;
extern Il2CppType t3715_1_0_0;
extern Il2CppGenericClass t3715_GC;
TypeInfo t3715_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3715_MIs, t3715_PIs, t3715_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3715_TI, t3715_ITIs, t3715_VT, &EmptyCustomAttributesCache, &t3715_TI, &t3715_0_0_0, &t3715_1_0_0, t3715_IOs, &t3715_GC, NULL, NULL, NULL, t3715_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3715)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6582_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.PropertyAttribute>
extern MethodInfo m35366_MI;
static PropertyInfo t6582____Count_PropertyInfo = 
{
	&t6582_TI, "Count", &m35366_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35367_MI;
static PropertyInfo t6582____IsReadOnly_PropertyInfo = 
{
	&t6582_TI, "IsReadOnly", &m35367_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6582_PIs[] =
{
	&t6582____Count_PropertyInfo,
	&t6582____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35366_GM;
MethodInfo m35366_MI = 
{
	"get_Count", NULL, &t6582_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35366_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35367_GM;
MethodInfo m35367_MI = 
{
	"get_IsReadOnly", NULL, &t6582_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35367_GM};
extern Il2CppType t683_0_0_0;
extern Il2CppType t683_0_0_0;
static ParameterInfo t6582_m35368_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t683_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35368_GM;
MethodInfo m35368_MI = 
{
	"Add", NULL, &t6582_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6582_m35368_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35368_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35369_GM;
MethodInfo m35369_MI = 
{
	"Clear", NULL, &t6582_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35369_GM};
extern Il2CppType t683_0_0_0;
static ParameterInfo t6582_m35370_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t683_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35370_GM;
MethodInfo m35370_MI = 
{
	"Contains", NULL, &t6582_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6582_m35370_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35370_GM};
extern Il2CppType t4454_0_0_0;
extern Il2CppType t4454_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6582_m35371_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4454_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35371_GM;
MethodInfo m35371_MI = 
{
	"CopyTo", NULL, &t6582_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6582_m35371_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35371_GM};
extern Il2CppType t683_0_0_0;
static ParameterInfo t6582_m35372_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t683_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35372_GM;
MethodInfo m35372_MI = 
{
	"Remove", NULL, &t6582_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6582_m35372_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35372_GM};
static MethodInfo* t6582_MIs[] =
{
	&m35366_MI,
	&m35367_MI,
	&m35368_MI,
	&m35369_MI,
	&m35370_MI,
	&m35371_MI,
	&m35372_MI,
	NULL
};
extern TypeInfo t6584_TI;
static TypeInfo* t6582_ITIs[] = 
{
	&t739_TI,
	&t6584_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6582_0_0_0;
extern Il2CppType t6582_1_0_0;
struct t6582;
extern Il2CppGenericClass t6582_GC;
TypeInfo t6582_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6582_MIs, t6582_PIs, NULL, NULL, NULL, NULL, NULL, &t6582_TI, t6582_ITIs, NULL, &EmptyCustomAttributesCache, &t6582_TI, &t6582_0_0_0, &t6582_1_0_0, NULL, &t6582_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
