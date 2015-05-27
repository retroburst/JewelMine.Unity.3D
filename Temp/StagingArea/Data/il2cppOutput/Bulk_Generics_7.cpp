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
extern TypeInfo t6012_TI;

#include "t110.h"
#include "t108.h"
#include "t109.h"
#include "t82.h"
#include "Assembly-CSharp_ArrayTypes.h"

#include "t107.h"

// Metadata Definition System.Collections.Generic.ICollection`1<SwipeInput>
extern MethodInfo m32264_MI;
static PropertyInfo t6012____Count_PropertyInfo = 
{
	&t6012_TI, "Count", &m32264_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m32265_MI;
static PropertyInfo t6012____IsReadOnly_PropertyInfo = 
{
	&t6012_TI, "IsReadOnly", &m32265_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6012_PIs[] =
{
	&t6012____Count_PropertyInfo,
	&t6012____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32264_GM;
MethodInfo m32264_MI = 
{
	"get_Count", NULL, &t6012_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32264_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32265_GM;
MethodInfo m32265_MI = 
{
	"get_IsReadOnly", NULL, &t6012_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32265_GM};
extern Il2CppType t82_0_0_0;
extern Il2CppType t82_0_0_0;
static ParameterInfo t6012_m32266_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t82_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32266_GM;
MethodInfo m32266_MI = 
{
	"Add", NULL, &t6012_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6012_m32266_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32266_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32267_GM;
MethodInfo m32267_MI = 
{
	"Clear", NULL, &t6012_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32267_GM};
extern Il2CppType t82_0_0_0;
static ParameterInfo t6012_m32268_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t82_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32268_GM;
MethodInfo m32268_MI = 
{
	"Contains", NULL, &t6012_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6012_m32268_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32268_GM};
extern Il2CppType t4400_0_0_0;
extern Il2CppType t4400_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6012_m32269_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4400_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32269_GM;
MethodInfo m32269_MI = 
{
	"CopyTo", NULL, &t6012_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6012_m32269_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32269_GM};
extern Il2CppType t82_0_0_0;
static ParameterInfo t6012_m32270_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t82_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32270_GM;
MethodInfo m32270_MI = 
{
	"Remove", NULL, &t6012_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6012_m32270_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32270_GM};
static MethodInfo* t6012_MIs[] =
{
	&m32264_MI,
	&m32265_MI,
	&m32266_MI,
	&m32267_MI,
	&m32268_MI,
	&m32269_MI,
	&m32270_MI,
	NULL
};
extern TypeInfo t739_TI;
extern TypeInfo t6014_TI;
static TypeInfo* t6012_ITIs[] = 
{
	&t739_TI,
	&t6014_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6012_0_0_0;
extern Il2CppType t6012_1_0_0;
struct t6012;
extern Il2CppGenericClass t6012_GC;
TypeInfo t6012_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6012_MIs, t6012_PIs, NULL, NULL, NULL, NULL, NULL, &t6012_TI, t6012_ITIs, NULL, &EmptyCustomAttributesCache, &t6012_TI, &t6012_0_0_0, &t6012_1_0_0, NULL, &t6012_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<SwipeInput>
extern Il2CppType t4774_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32271_GM;
MethodInfo m32271_MI = 
{
	"GetEnumerator", NULL, &t6014_TI, &t4774_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32271_GM};
static MethodInfo* t6014_MIs[] =
{
	&m32271_MI,
	NULL
};
static TypeInfo* t6014_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6014_0_0_0;
extern Il2CppType t6014_1_0_0;
struct t6014;
extern Il2CppGenericClass t6014_GC;
TypeInfo t6014_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6014_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6014_TI, t6014_ITIs, NULL, &EmptyCustomAttributesCache, &t6014_TI, &t6014_0_0_0, &t6014_1_0_0, NULL, &t6014_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6013_TI;



// Metadata Definition System.Collections.Generic.IList`1<SwipeInput>
extern MethodInfo m32272_MI;
extern MethodInfo m32273_MI;
static PropertyInfo t6013____Item_PropertyInfo = 
{
	&t6013_TI, "Item", &m32272_MI, &m32273_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6013_PIs[] =
{
	&t6013____Item_PropertyInfo,
	NULL
};
extern Il2CppType t82_0_0_0;
static ParameterInfo t6013_m32274_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t82_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32274_GM;
MethodInfo m32274_MI = 
{
	"IndexOf", NULL, &t6013_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6013_m32274_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32274_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t82_0_0_0;
static ParameterInfo t6013_m32275_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t82_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32275_GM;
MethodInfo m32275_MI = 
{
	"Insert", NULL, &t6013_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6013_m32275_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32275_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6013_m32276_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32276_GM;
MethodInfo m32276_MI = 
{
	"RemoveAt", NULL, &t6013_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6013_m32276_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32276_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6013_m32272_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t82_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32272_GM;
MethodInfo m32272_MI = 
{
	"get_Item", NULL, &t6013_TI, &t82_0_0_0, RuntimeInvoker_t5_t110, t6013_m32272_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32272_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t82_0_0_0;
static ParameterInfo t6013_m32273_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t82_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32273_GM;
MethodInfo m32273_MI = 
{
	"set_Item", NULL, &t6013_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6013_m32273_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32273_GM};
static MethodInfo* t6013_MIs[] =
{
	&m32274_MI,
	&m32275_MI,
	&m32276_MI,
	&m32272_MI,
	&m32273_MI,
	NULL
};
static TypeInfo* t6013_ITIs[] = 
{
	&t739_TI,
	&t6012_TI,
	&t6014_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6013_0_0_0;
extern Il2CppType t6013_1_0_0;
struct t6013;
extern Il2CppGenericClass t6013_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6013_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6013_MIs, t6013_PIs, NULL, NULL, NULL, NULL, NULL, &t6013_TI, t6013_ITIs, NULL, &t2240__CustomAttributeCache, &t6013_TI, &t6013_0_0_0, &t6013_1_0_0, NULL, &t6013_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2809.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2809_TI;
#include "t2809MD.h"

#include "t117.h"
#include "t695.h"
#include "mscorlib_ArrayTypes.h"
#include "t5.h"
#include "t2810.h"
extern TypeInfo t168_TI;
extern TypeInfo t5_TI;
extern TypeInfo t82_TI;
extern TypeInfo t2810_TI;
extern TypeInfo t109_TI;
#include "t2810MD.h"
extern MethodInfo m14734_MI;
extern MethodInfo m14736_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<SwipeInput>
extern Il2CppType t168_0_0_33;
FieldInfo t2809_f1_FieldInfo = 
{
	"m_Arg1", &t168_0_0_33, &t2809_TI, offsetof(t2809, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2809_FIs[] =
{
	&t2809_f1_FieldInfo,
	NULL
};
extern Il2CppType t117_0_0_0;
extern Il2CppType t117_0_0_0;
extern Il2CppType t695_0_0_0;
extern Il2CppType t695_0_0_0;
extern Il2CppType t82_0_0_0;
static ParameterInfo t2809_m14732_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t117_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t82_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14732_GM;
MethodInfo m14732_MI = 
{
	".ctor", (methodPointerType)&m12070_gshared, &t2809_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t5, t2809_m14732_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL, &m14732_GM};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t2809_m14733_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14733_GM;
MethodInfo m14733_MI = 
{
	"Invoke", (methodPointerType)&m12072_gshared, &t2809_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2809_m14733_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14733_GM};
static MethodInfo* t2809_MIs[] =
{
	&m14732_MI,
	&m14733_MI,
	NULL
};
extern MethodInfo m464_MI;
extern MethodInfo m465_MI;
extern MethodInfo m466_MI;
extern MethodInfo m467_MI;
extern MethodInfo m14733_MI;
extern MethodInfo m14737_MI;
static MethodInfo* t2809_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14733_MI,
	&m14737_MI,
};
extern Il2CppType t2811_0_0_0;
extern TypeInfo t2811_TI;
extern MethodInfo m24697_MI;
extern TypeInfo t82_TI;
extern MethodInfo m14739_MI;
extern TypeInfo t82_TI;
static Il2CppRGCTXData t2809_RGCTXData[8] = 
{
	&t2811_0_0_0/* Type Usage */,
	&t2811_TI/* Class Usage */,
	&m24697_MI/* Method Usage */,
	&t82_TI/* Class Usage */,
	&m14739_MI/* Method Usage */,
	&m14734_MI/* Method Usage */,
	&t82_TI/* Class Usage */,
	&m14736_MI/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2809_0_0_0;
extern Il2CppType t2809_1_0_0;
struct t2809;
extern Il2CppGenericClass t2809_GC;
TypeInfo t2809_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2809_MIs, NULL, t2809_FIs, NULL, &t2810_TI, NULL, NULL, &t2809_TI, NULL, t2809_VT, &EmptyCustomAttributesCache, &t2809_TI, &t2809_0_0_0, &t2809_1_0_0, NULL, &t2809_GC, NULL, NULL, NULL, t2809_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2809), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif

#include "t2811.h"
#include "t114.h"
#include "t115.h"
#include "t183.h"
#include "t11.h"
#include "t160.h"
extern TypeInfo t2811_TI;
extern TypeInfo t114_TI;
extern TypeInfo t160_TI;
#include "t694MD.h"
#include "t114MD.h"
#include "t183MD.h"
#include "t160MD.h"
#include "t2811MD.h"
extern MethodInfo m3437_MI;
extern MethodInfo m532_MI;
extern MethodInfo m3602_MI;
extern MethodInfo m706_MI;
extern MethodInfo m3436_MI;
extern MethodInfo m2581_MI;
extern MethodInfo m3438_MI;
extern MethodInfo m3598_MI;
extern MethodInfo m3596_MI;
struct t694;
#include "t694.h"
struct t694;
 void m23910_gshared (t5 * __this, t5 * p0, MethodInfo* method);
#define m23910(__this, p0, method) (void)m23910_gshared((t5 *)__this, (t5 *)p0, method)
#define m24697(__this, p0, method) (void)m23910_gshared((t5 *)__this, (t5 *)p0, method)


// Metadata Definition UnityEngine.Events.InvokableCall`1<SwipeInput>
extern Il2CppType t2811_0_0_1;
FieldInfo t2810_f0_FieldInfo = 
{
	"Delegate", &t2811_0_0_1, &t2810_TI, offsetof(t2810, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2810_FIs[] =
{
	&t2810_f0_FieldInfo,
	NULL
};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t2810_m14734_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14734_GM;
MethodInfo m14734_MI = 
{
	".ctor", (methodPointerType)&m12073_gshared, &t2810_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t2810_m14734_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14734_GM};
extern Il2CppType t2811_0_0_0;
static ParameterInfo t2810_m14735_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2811_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14735_GM;
MethodInfo m14735_MI = 
{
	".ctor", (methodPointerType)&m12074_gshared, &t2810_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2810_m14735_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14735_GM};
extern Il2CppType t168_0_0_0;
static ParameterInfo t2810_m14736_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14736_GM;
MethodInfo m14736_MI = 
{
	"Invoke", (methodPointerType)&m12075_gshared, &t2810_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2810_m14736_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14736_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t2810_m14737_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14737_GM;
MethodInfo m14737_MI = 
{
	"Find", (methodPointerType)&m12076_gshared, &t2810_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2810_m14737_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14737_GM};
static MethodInfo* t2810_MIs[] =
{
	&m14734_MI,
	&m14735_MI,
	&m14736_MI,
	&m14737_MI,
	NULL
};
static MethodInfo* t2810_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14736_MI,
	&m14737_MI,
};
extern TypeInfo t2811_TI;
extern TypeInfo t82_TI;
static Il2CppRGCTXData t2810_RGCTXData[5] = 
{
	&t2811_0_0_0/* Type Usage */,
	&t2811_TI/* Class Usage */,
	&m24697_MI/* Method Usage */,
	&t82_TI/* Class Usage */,
	&m14739_MI/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2810_0_0_0;
extern Il2CppType t2810_1_0_0;
extern TypeInfo t694_TI;
struct t2810;
extern Il2CppGenericClass t2810_GC;
TypeInfo t2810_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2810_MIs, NULL, t2810_FIs, NULL, &t694_TI, NULL, NULL, &t2810_TI, NULL, t2810_VT, &EmptyCustomAttributesCache, &t2810_TI, &t2810_0_0_0, &t2810_1_0_0, NULL, &t2810_GC, NULL, NULL, NULL, t2810_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2810), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif

#include "t124.h"
#include "t222.h"


// Metadata Definition UnityEngine.Events.UnityAction`1<SwipeInput>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2811_m14738_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14738_GM;
MethodInfo m14738_MI = 
{
	".ctor", (methodPointerType)&m12077_gshared, &t2811_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2811_m14738_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14738_GM};
extern Il2CppType t82_0_0_0;
static ParameterInfo t2811_m14739_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t82_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14739_GM;
MethodInfo m14739_MI = 
{
	"Invoke", (methodPointerType)&m12078_gshared, &t2811_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2811_m14739_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14739_GM};
extern Il2CppType t82_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2811_m14740_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t82_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14740_GM;
MethodInfo m14740_MI = 
{
	"BeginInvoke", (methodPointerType)&m12079_gshared, &t2811_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t2811_m14740_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m14740_GM};
extern Il2CppType t221_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t2811_m14741_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14741_GM;
MethodInfo m14741_MI = 
{
	"EndInvoke", (methodPointerType)&m12080_gshared, &t2811_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2811_m14741_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14741_GM};
static MethodInfo* t2811_MIs[] =
{
	&m14738_MI,
	&m14739_MI,
	&m14740_MI,
	&m14741_MI,
	NULL
};
extern MethodInfo m2341_MI;
extern MethodInfo m2342_MI;
extern MethodInfo m2343_MI;
extern MethodInfo m2344_MI;
extern MethodInfo m2345_MI;
extern MethodInfo m2346_MI;
extern MethodInfo m2347_MI;
extern MethodInfo m14740_MI;
extern MethodInfo m14741_MI;
static MethodInfo* t2811_VT[] =
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
	&m14739_MI,
	&m14740_MI,
	&m14741_MI,
};
extern TypeInfo t516_TI;
extern TypeInfo t517_TI;
static Il2CppInterfaceOffsetPair t2811_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2811_1_0_0;
extern TypeInfo t353_TI;
struct t2811;
extern Il2CppGenericClass t2811_GC;
TypeInfo t2811_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2811_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t2811_TI, NULL, t2811_VT, &EmptyCustomAttributesCache, &t2811_TI, &t2811_0_0_0, &t2811_1_0_0, t2811_IOs, &t2811_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2811), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4776_TI;

#include "t184.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Touch>
extern MethodInfo m32277_MI;
static PropertyInfo t4776____Current_PropertyInfo = 
{
	&t4776_TI, "Current", &m32277_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4776_PIs[] =
{
	&t4776____Current_PropertyInfo,
	NULL
};
extern Il2CppType t184_0_0_0;
extern void* RuntimeInvoker_t184 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32277_GM;
MethodInfo m32277_MI = 
{
	"get_Current", NULL, &t4776_TI, &t184_0_0_0, RuntimeInvoker_t184, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32277_GM};
static MethodInfo* t4776_MIs[] =
{
	&m32277_MI,
	NULL
};
extern TypeInfo t196_TI;
extern TypeInfo t132_TI;
static TypeInfo* t4776_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4776_0_0_0;
extern Il2CppType t4776_1_0_0;
struct t4776;
extern Il2CppGenericClass t4776_GC;
TypeInfo t4776_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4776_MIs, t4776_PIs, NULL, NULL, NULL, NULL, NULL, &t4776_TI, t4776_ITIs, NULL, &EmptyCustomAttributesCache, &t4776_TI, &t4776_0_0_0, &t4776_1_0_0, NULL, &t4776_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2812.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2812_TI;
#include "t2812MD.h"

#include "t133.h"
extern TypeInfo t184_TI;
extern TypeInfo t133_TI;
#include "t133MD.h"
#include "t107MD.h"
extern MethodInfo m14746_MI;
extern MethodInfo m4758_MI;
extern MethodInfo m4763_MI;
extern MethodInfo m24699_MI;
struct t107;
#include "t1181.h"
 t184  m24699 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m14742_MI;
 void m14742 (t2812 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14743_MI;
 t5 * m14743 (t2812 * __this, MethodInfo* method){
	{
		t184  L_0 = m14746(__this, &m14746_MI);
		t184  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t184_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14744_MI;
 void m14744 (t2812 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14745_MI;
 bool m14745 (t2812 * __this, MethodInfo* method){
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
 t184  m14746 (t2812 * __this, MethodInfo* method){
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
		t184  L_8 = m24699(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m24699_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Touch>
extern Il2CppType t107_0_0_1;
FieldInfo t2812_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t2812_TI, offsetof(t2812, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2812_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2812_TI, offsetof(t2812, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2812_FIs[] =
{
	&t2812_f0_FieldInfo,
	&t2812_f1_FieldInfo,
	NULL
};
static PropertyInfo t2812____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2812_TI, "System.Collections.IEnumerator.Current", &m14743_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2812____Current_PropertyInfo = 
{
	&t2812_TI, "Current", &m14746_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2812_PIs[] =
{
	&t2812____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2812____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
extern Il2CppType t107_0_0_0;
static ParameterInfo t2812_m14742_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14742_GM;
MethodInfo m14742_MI = 
{
	".ctor", (methodPointerType)&m14742, &t2812_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2812_m14742_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14742_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14743_GM;
MethodInfo m14743_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14743, &t2812_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14743_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14744_GM;
MethodInfo m14744_MI = 
{
	"Dispose", (methodPointerType)&m14744, &t2812_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14744_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14745_GM;
MethodInfo m14745_MI = 
{
	"MoveNext", (methodPointerType)&m14745, &t2812_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14745_GM};
extern Il2CppType t184_0_0_0;
extern void* RuntimeInvoker_t184 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14746_GM;
MethodInfo m14746_MI = 
{
	"get_Current", (methodPointerType)&m14746, &t2812_TI, &t184_0_0_0, RuntimeInvoker_t184, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14746_GM};
static MethodInfo* t2812_MIs[] =
{
	&m14742_MI,
	&m14743_MI,
	&m14744_MI,
	&m14745_MI,
	&m14746_MI,
	NULL
};
extern MethodInfo m2041_MI;
extern MethodInfo m2042_MI;
extern MethodInfo m2147_MI;
static MethodInfo* t2812_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m14743_MI,
	&m14745_MI,
	&m14744_MI,
	&m14746_MI,
};
static TypeInfo* t2812_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t4776_TI,
};
static Il2CppInterfaceOffsetPair t2812_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t4776_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2812_0_0_0;
extern Il2CppType t2812_1_0_0;
extern TypeInfo t267_TI;
extern Il2CppGenericClass t2812_GC;
extern TypeInfo t107_TI;
TypeInfo t2812_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2812_MIs, t2812_PIs, t2812_FIs, NULL, &t267_TI, NULL, &t107_TI, &t2812_TI, t2812_ITIs, t2812_VT, &EmptyCustomAttributesCache, &t2812_TI, &t2812_0_0_0, &t2812_1_0_0, t2812_IOs, &t2812_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2812)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6015_TI;

#include "UnityEngine_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Touch>
extern MethodInfo m32278_MI;
static PropertyInfo t6015____Count_PropertyInfo = 
{
	&t6015_TI, "Count", &m32278_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m32279_MI;
static PropertyInfo t6015____IsReadOnly_PropertyInfo = 
{
	&t6015_TI, "IsReadOnly", &m32279_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6015_PIs[] =
{
	&t6015____Count_PropertyInfo,
	&t6015____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32278_GM;
MethodInfo m32278_MI = 
{
	"get_Count", NULL, &t6015_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32278_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32279_GM;
MethodInfo m32279_MI = 
{
	"get_IsReadOnly", NULL, &t6015_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32279_GM};
extern Il2CppType t184_0_0_0;
extern Il2CppType t184_0_0_0;
static ParameterInfo t6015_m32280_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t184_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t184 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32280_GM;
MethodInfo m32280_MI = 
{
	"Add", NULL, &t6015_TI, &t109_0_0_0, RuntimeInvoker_t109_t184, t6015_m32280_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32280_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32281_GM;
MethodInfo m32281_MI = 
{
	"Clear", NULL, &t6015_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32281_GM};
extern Il2CppType t184_0_0_0;
static ParameterInfo t6015_m32282_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t184_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t184 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32282_GM;
MethodInfo m32282_MI = 
{
	"Contains", NULL, &t6015_TI, &t108_0_0_0, RuntimeInvoker_t108_t184, t6015_m32282_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32282_GM};
extern Il2CppType t187_0_0_0;
extern Il2CppType t187_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6015_m32283_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t187_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32283_GM;
MethodInfo m32283_MI = 
{
	"CopyTo", NULL, &t6015_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6015_m32283_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32283_GM};
extern Il2CppType t184_0_0_0;
static ParameterInfo t6015_m32284_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t184_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t184 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32284_GM;
MethodInfo m32284_MI = 
{
	"Remove", NULL, &t6015_TI, &t108_0_0_0, RuntimeInvoker_t108_t184, t6015_m32284_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32284_GM};
static MethodInfo* t6015_MIs[] =
{
	&m32278_MI,
	&m32279_MI,
	&m32280_MI,
	&m32281_MI,
	&m32282_MI,
	&m32283_MI,
	&m32284_MI,
	NULL
};
extern TypeInfo t6017_TI;
static TypeInfo* t6015_ITIs[] = 
{
	&t739_TI,
	&t6017_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6015_0_0_0;
extern Il2CppType t6015_1_0_0;
struct t6015;
extern Il2CppGenericClass t6015_GC;
TypeInfo t6015_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6015_MIs, t6015_PIs, NULL, NULL, NULL, NULL, NULL, &t6015_TI, t6015_ITIs, NULL, &EmptyCustomAttributesCache, &t6015_TI, &t6015_0_0_0, &t6015_1_0_0, NULL, &t6015_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Touch>
extern Il2CppType t4776_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32285_GM;
MethodInfo m32285_MI = 
{
	"GetEnumerator", NULL, &t6017_TI, &t4776_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32285_GM};
static MethodInfo* t6017_MIs[] =
{
	&m32285_MI,
	NULL
};
static TypeInfo* t6017_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6017_0_0_0;
extern Il2CppType t6017_1_0_0;
struct t6017;
extern Il2CppGenericClass t6017_GC;
TypeInfo t6017_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6017_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6017_TI, t6017_ITIs, NULL, &EmptyCustomAttributesCache, &t6017_TI, &t6017_0_0_0, &t6017_1_0_0, NULL, &t6017_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6016_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Touch>
extern MethodInfo m32286_MI;
extern MethodInfo m32287_MI;
static PropertyInfo t6016____Item_PropertyInfo = 
{
	&t6016_TI, "Item", &m32286_MI, &m32287_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6016_PIs[] =
{
	&t6016____Item_PropertyInfo,
	NULL
};
extern Il2CppType t184_0_0_0;
static ParameterInfo t6016_m32288_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t184_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t184 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32288_GM;
MethodInfo m32288_MI = 
{
	"IndexOf", NULL, &t6016_TI, &t110_0_0_0, RuntimeInvoker_t110_t184, t6016_m32288_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32288_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t184_0_0_0;
static ParameterInfo t6016_m32289_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t184_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t184 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32289_GM;
MethodInfo m32289_MI = 
{
	"Insert", NULL, &t6016_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t184, t6016_m32289_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32289_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6016_m32290_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32290_GM;
MethodInfo m32290_MI = 
{
	"RemoveAt", NULL, &t6016_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6016_m32290_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32290_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6016_m32286_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t184_0_0_0;
extern void* RuntimeInvoker_t184_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32286_GM;
MethodInfo m32286_MI = 
{
	"get_Item", NULL, &t6016_TI, &t184_0_0_0, RuntimeInvoker_t184_t110, t6016_m32286_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32286_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t184_0_0_0;
static ParameterInfo t6016_m32287_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t184_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t184 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32287_GM;
MethodInfo m32287_MI = 
{
	"set_Item", NULL, &t6016_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t184, t6016_m32287_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32287_GM};
static MethodInfo* t6016_MIs[] =
{
	&m32288_MI,
	&m32289_MI,
	&m32290_MI,
	&m32286_MI,
	&m32287_MI,
	NULL
};
static TypeInfo* t6016_ITIs[] = 
{
	&t739_TI,
	&t6015_TI,
	&t6017_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6016_0_0_0;
extern Il2CppType t6016_1_0_0;
struct t6016;
extern Il2CppGenericClass t6016_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6016_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6016_MIs, t6016_PIs, NULL, NULL, NULL, NULL, NULL, &t6016_TI, t6016_ITIs, NULL, &t2240__CustomAttributeCache, &t6016_TI, &t6016_0_0_0, &t6016_1_0_0, NULL, &t6016_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t104.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t104_TI;
#include "t104MD.h"

#include "t19.h"
#include "t69.h"
#include "t484.h"
#include "t1511.h"
#include "t1521.h"
#include "t2815.h"
#include "t829.h"
#include "t830.h"
#include "t2817.h"
#include "t990.h"
#include "t2814.h"
#include "t2823.h"
#include "t2819.h"
#include "t2824.h"
#include "t2607.h"
#include "t2717.h"
extern TypeInfo t19_TI;
extern TypeInfo t108_TI;
extern TypeInfo t69_TI;
extern TypeInfo t484_TI;
extern TypeInfo t2813_TI;
extern TypeInfo t110_TI;
extern TypeInfo t1511_TI;
extern TypeInfo t1521_TI;
extern TypeInfo t2815_TI;
extern TypeInfo t2816_TI;
extern TypeInfo t2817_TI;
extern TypeInfo t4182_TI;
extern TypeInfo t990_TI;
extern TypeInfo t2814_TI;
extern TypeInfo t2823_TI;
extern TypeInfo t2819_TI;
extern TypeInfo t2824_TI;
extern TypeInfo t1181_TI;
extern TypeInfo t2607_TI;
extern TypeInfo t55_TI;
extern TypeInfo t2297_TI;
extern TypeInfo t46_TI;
extern TypeInfo t199_TI;
extern TypeInfo t984_TI;
extern TypeInfo t2717_TI;
extern TypeInfo t7568_TI;
extern TypeInfo t11_TI;
#include "t484MD.h"
#include "t1521MD.h"
#include "t2815MD.h"
#include "t5MD.h"
#include "t2817MD.h"
#include "t2814MD.h"
#include "t2823MD.h"
#include "t2819MD.h"
#include "t2824MD.h"
#include "t1181MD.h"
#include "t2607MD.h"
#include "t984MD.h"
#include "t2717MD.h"
#include "t829MD.h"
#include "t11MD.h"
#include "t990MD.h"
extern Il2CppType t2813_0_0_0;
extern Il2CppType t2816_0_0_0;
extern Il2CppType t19_0_0_0;
extern Il2CppType t69_0_0_0;
extern MethodInfo m14775_MI;
extern MethodInfo m14782_MI;
extern MethodInfo m747_MI;
extern MethodInfo m14783_MI;
extern MethodInfo m14766_MI;
extern MethodInfo m3595_MI;
extern MethodInfo m31851_MI;
extern MethodInfo m24385_MI;
extern MethodInfo m7379_MI;
extern MethodInfo m14773_MI;
extern MethodInfo m14798_MI;
extern MethodInfo m460_MI;
extern MethodInfo m14767_MI;
extern MethodInfo m724_MI;
extern MethodInfo m14779_MI;
extern MethodInfo m14788_MI;
extern MethodInfo m14790_MI;
extern MethodInfo m14784_MI;
extern MethodInfo m14772_MI;
extern MethodInfo m14769_MI;
extern MethodInfo m14786_MI;
extern MethodInfo m14833_MI;
extern MethodInfo m24723_MI;
extern MethodInfo m14770_MI;
extern MethodInfo m14837_MI;
extern MethodInfo m24725_MI;
extern MethodInfo m14817_MI;
extern MethodInfo m14841_MI;
extern MethodInfo m4767_MI;
extern MethodInfo m12942_MI;
extern MethodInfo m14768_MI;
extern MethodInfo m14765_MI;
extern MethodInfo m14787_MI;
extern MethodInfo m24726_MI;
extern MethodInfo m7558_MI;
extern MethodInfo m6741_MI;
extern MethodInfo m5904_MI;
extern MethodInfo m14013_MI;
extern MethodInfo m32032_MI;
extern MethodInfo m4776_MI;
extern MethodInfo m4789_MI;
extern MethodInfo m4788_MI;
extern MethodInfo m4777_MI;
extern MethodInfo m6830_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m613_MI;
extern MethodInfo m6793_MI;
extern MethodInfo m14780_MI;
extern MethodInfo m24444_MI;
extern MethodInfo m4759_MI;
struct t104;
 void m24723 (t104 * __this, t4182* p0, int32_t p1, t2814 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t104;
#include "t142.h"
 void m24725 (t104 * __this, t107 * p0, int32_t p1, t2823 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t104;
 void m24726 (t104 * __this, t2816* p0, int32_t p1, t2823 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m720_MI;
 void m720 (t104 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		m14767(__this, ((int32_t)10), (t5*)NULL, &m14767_MI);
		return;
	}
}
extern MethodInfo m14747_MI;
 void m14747 (t104 * __this, t5* p0, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		m14767(__this, ((int32_t)10), p0, &m14767_MI);
		return;
	}
}
extern MethodInfo m14748_MI;
 void m14748 (t104 * __this, int32_t p0, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		m14767(__this, p0, (t5*)NULL, &m14767_MI);
		return;
	}
}
extern MethodInfo m14749_MI;
 void m14749 (t104 * __this, t829 * p0, t830  p1, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		__this->f13 = p0;
		return;
	}
}
extern MethodInfo m14750_MI;
 t5 * m14750 (t104 * __this, t5 * p0, MethodInfo* method){
	{
		if (!((t5 *)IsInst(p0, InitializedTypeInfo(&t19_TI))))
		{
			goto IL_0029;
		}
	}
	{
		bool L_0 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(&m14775_MI, __this, ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t19_TI))))));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1 = m14782(__this, p0, &m14782_MI);
		t69 * L_2 = (t69 *)VirtFuncInvoker1< t69 *, int32_t >::Invoke(&m747_MI, __this, L_1);
		t69 * L_3 = L_2;
		return ((t69 *)L_3);
	}

IL_0029:
	{
		return NULL;
	}
}
extern MethodInfo m14751_MI;
 void m14751 (t104 * __this, t5 * p0, t5 * p1, MethodInfo* method){
	{
		int32_t L_0 = m14782(__this, p0, &m14782_MI);
		t69 * L_1 = m14783(__this, p1, &m14783_MI);
		VirtActionInvoker2< int32_t, t69 * >::Invoke(&m14766_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m14752_MI;
 void m14752 (t104 * __this, t5 * p0, t5 * p1, MethodInfo* method){
	{
		int32_t L_0 = m14782(__this, p0, &m14782_MI);
		t69 * L_1 = m14783(__this, p1, &m14783_MI);
		VirtActionInvoker2< int32_t, t69 * >::Invoke(&m724_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m14753_MI;
 void m14753 (t104 * __this, t5 * p0, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3595(L_0, (t11*) &_stringLiteral238, &m3595_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		if (!((t5 *)IsInst(p0, InitializedTypeInfo(&t19_TI))))
		{
			goto IL_0023;
		}
	}
	{
		VirtFuncInvoker1< bool, int32_t >::Invoke(&m14779_MI, __this, ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t19_TI))))));
	}

IL_0023:
	{
		return;
	}
}
extern MethodInfo m14754_MI;
 bool m14754 (t104 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m14755_MI;
 t5 * m14755 (t104 * __this, MethodInfo* method){
	{
		return __this;
	}
}
extern MethodInfo m14756_MI;
 bool m14756 (t104 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m14757_MI;
 void m14757 (t104 * __this, t2817  p0, MethodInfo* method){
	{
		int32_t L_0 = m14788((&p0), &m14788_MI);
		t69 * L_1 = m14790((&p0), &m14790_MI);
		VirtActionInvoker2< int32_t, t69 * >::Invoke(&m724_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m14758_MI;
 bool m14758 (t104 * __this, t2817  p0, MethodInfo* method){
	{
		bool L_0 = m14784(__this, p0, &m14784_MI);
		return L_0;
	}
}
extern MethodInfo m14759_MI;
 void m14759 (t104 * __this, t2816* p0, int32_t p1, MethodInfo* method){
	{
		m14772(__this, p0, p1, &m14772_MI);
		return;
	}
}
extern MethodInfo m14760_MI;
 bool m14760 (t104 * __this, t2817  p0, MethodInfo* method){
	{
		bool L_0 = m14784(__this, p0, &m14784_MI);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		int32_t L_1 = m14788((&p0), &m14788_MI);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(&m14779_MI, __this, L_1);
		return L_2;
	}
}
extern MethodInfo m14761_MI;
 void m14761 (t104 * __this, t107 * p0, int32_t p1, MethodInfo* method){
	t2816* V_0 = {0};
	t4182* V_1 = {0};
	int32_t G_B5_0 = 0;
	t4182* G_B5_1 = {0};
	t104 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t4182* G_B4_1 = {0};
	t104 * G_B4_2 = {0};
	{
		V_0 = ((t2816*)IsInst(p0, InitializedTypeInfo(&t2816_TI)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		m14772(__this, V_0, p1, &m14772_MI);
		return;
	}

IL_0013:
	{
		m14769(__this, p0, p1, &m14769_MI);
		V_1 = ((t4182*)IsInst(p0, InitializedTypeInfo(&t4182_TI)));
		if (!V_1)
		{
			goto IL_004b;
		}
	}
	{
		G_B4_0 = p1;
		G_B4_1 = V_1;
		G_B4_2 = ((t104 *)(__this));
		if ((((t104_SFs*)InitializedTypeInfo(&t104_TI)->static_fields)->f15))
		{
			G_B5_0 = p1;
			G_B5_1 = V_1;
			G_B5_2 = ((t104 *)(__this));
			goto IL_0040;
		}
	}
	{
		t124 L_0 = { &m14786_MI };
		t2814 * L_1 = (t2814 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2814_TI));
		m14833(L_1, NULL, L_0, &m14833_MI);
		((t104_SFs*)InitializedTypeInfo(&t104_TI)->static_fields)->f15 = L_1;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((t104 *)(G_B4_2));
	}

IL_0040:
	{
		m24723(G_B5_2, G_B5_1, G_B5_0, (((t104_SFs*)InitializedTypeInfo(&t104_TI)->static_fields)->f15), &m24723_MI);
		return;
	}

IL_004b:
	{
		t124 L_2 = { &m14770_MI };
		t2823 * L_3 = (t2823 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2823_TI));
		m14837(L_3, NULL, L_2, &m14837_MI);
		m24725(__this, p0, p1, L_3, &m24725_MI);
		return;
	}
}
extern MethodInfo m14762_MI;
 t5 * m14762 (t104 * __this, MethodInfo* method){
	{
		t2819  L_0 = {0};
		m14817(&L_0, __this, &m14817_MI);
		t2819  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t2819_TI), &L_1);
		return (t5 *)L_2;
	}
}
extern MethodInfo m14763_MI;
 t5* m14763 (t104 * __this, MethodInfo* method){
	{
		t2819  L_0 = {0};
		m14817(&L_0, __this, &m14817_MI);
		t2819  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t2819_TI), &L_1);
		return (t5*)L_2;
	}
}
extern MethodInfo m14764_MI;
 t5 * m14764 (t104 * __this, MethodInfo* method){
	{
		t2824 * L_0 = (t2824 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2824_TI));
		m14841(L_0, __this, &m14841_MI);
		return L_0;
	}
}
 int32_t m14765 (t104 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f10);
		return L_0;
	}
}
 t69 * m747 (t104 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t19_TI), &L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		t484 * L_2 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3595(L_2, (t11*) &_stringLiteral238, &m3595_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		t5* L_3 = (__this->f12);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m31851_MI, L_3, p0);
		V_0 = ((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		t55* L_5 = (__this->f4);
		t55* L_6 = (__this->f4);
		int32_t L_7 = ((int32_t)(((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(((int32_t)(((t107 *)L_6)->max_length)))));
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7))-1));
		goto IL_008f;
	}

IL_0042:
	{
		t2297* L_8 = (__this->f5);
		int32_t L_9 = (((t1511 *)(t1511 *)SZArrayLdElema(L_8, V_1))->f0);
		if ((((uint32_t)L_9) != ((uint32_t)V_0)))
		{
			goto IL_007d;
		}
	}
	{
		t5* L_10 = (__this->f12);
		t46* L_11 = (__this->f6);
		int32_t L_12 = V_1;
		bool L_13 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m24385_MI, L_10, (*(int32_t*)(int32_t*)SZArrayLdElema(L_11, L_12)), p0);
		if (!L_13)
		{
			goto IL_007d;
		}
	}
	{
		t199* L_14 = (__this->f7);
		int32_t L_15 = V_1;
		return (*(t69 **)(t69 **)SZArrayLdElema(L_14, L_15));
	}

IL_007d:
	{
		t2297* L_16 = (__this->f5);
		int32_t L_17 = (((t1511 *)(t1511 *)SZArrayLdElema(L_16, V_1))->f1);
		V_1 = L_17;
	}

IL_008f:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		t1521 * L_18 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m7379(L_18, &m7379_MI);
		il2cpp_codegen_raise_exception(L_18);
	}
}
 void m14766 (t104 * __this, int32_t p0, t69 * p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t19_TI), &L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		t484 * L_2 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3595(L_2, (t11*) &_stringLiteral238, &m3595_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		t5* L_3 = (__this->f12);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m31851_MI, L_3, p0);
		V_0 = ((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		t55* L_5 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(((int32_t)(((t107 *)L_5)->max_length)))));
		t55* L_6 = (__this->f4);
		int32_t L_7 = V_1;
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_7))-1));
		V_3 = (-1);
		if ((((int32_t)V_2) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		t2297* L_8 = (__this->f5);
		int32_t L_9 = (((t1511 *)(t1511 *)SZArrayLdElema(L_8, V_2))->f0);
		if ((((uint32_t)L_9) != ((uint32_t)V_0)))
		{
			goto IL_0078;
		}
	}
	{
		t5* L_10 = (__this->f12);
		t46* L_11 = (__this->f6);
		int32_t L_12 = V_2;
		bool L_13 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m24385_MI, L_10, (*(int32_t*)(int32_t*)SZArrayLdElema(L_11, L_12)), p0);
		if (!L_13)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		V_3 = V_2;
		t2297* L_14 = (__this->f5);
		int32_t L_15 = (((t1511 *)(t1511 *)SZArrayLdElema(L_14, V_2))->f1);
		V_2 = L_15;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_16 = (__this->f10);
		int32_t L_17 = ((int32_t)(L_16+1));
		V_4 = L_17;
		__this->f10 = L_17;
		int32_t L_18 = (__this->f11);
		if ((((int32_t)V_4) <= ((int32_t)L_18)))
		{
			goto IL_00c9;
		}
	}
	{
		m14773(__this, &m14773_MI);
		t55* L_19 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(((int32_t)(((t107 *)L_19)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_20 = (__this->f9);
		V_2 = L_20;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_21 = (__this->f8);
		int32_t L_22 = L_21;
		V_4 = L_22;
		__this->f8 = ((int32_t)(L_22+1));
		V_2 = V_4;
		goto IL_0101;
	}

IL_00ea:
	{
		t2297* L_23 = (__this->f5);
		int32_t L_24 = (((t1511 *)(t1511 *)SZArrayLdElema(L_23, V_2))->f1);
		__this->f9 = L_24;
	}

IL_0101:
	{
		t2297* L_25 = (__this->f5);
		t55* L_26 = (__this->f4);
		int32_t L_27 = V_1;
		((t1511 *)(t1511 *)SZArrayLdElema(L_25, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_26, L_27))-1));
		t55* L_28 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_28, V_1)) = (int32_t)((int32_t)(V_2+1));
		t2297* L_29 = (__this->f5);
		((t1511 *)(t1511 *)SZArrayLdElema(L_29, V_2))->f0 = V_0;
		t46* L_30 = (__this->f6);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_30, V_2)) = (int32_t)p0;
		goto IL_0194;
	}

IL_0148:
	{
		if ((((int32_t)V_3) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		t2297* L_31 = (__this->f5);
		t2297* L_32 = (__this->f5);
		int32_t L_33 = (((t1511 *)(t1511 *)SZArrayLdElema(L_32, V_2))->f1);
		((t1511 *)(t1511 *)SZArrayLdElema(L_31, V_3))->f1 = L_33;
		t2297* L_34 = (__this->f5);
		t55* L_35 = (__this->f4);
		int32_t L_36 = V_1;
		((t1511 *)(t1511 *)SZArrayLdElema(L_34, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_35, L_36))-1));
		t55* L_37 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_37, V_1)) = (int32_t)((int32_t)(V_2+1));
	}

IL_0194:
	{
		t199* L_38 = (__this->f7);
		*((t69 **)(t69 **)SZArrayLdElema(L_38, V_2)) = (t69 *)p1;
		int32_t L_39 = (__this->f14);
		__this->f14 = ((int32_t)(L_39+1));
		return;
	}
}
 void m14767 (t104 * __this, int32_t p0, t5* p1, MethodInfo* method){
	t5* V_0 = {0};
	t104 * G_B4_0 = {0};
	t104 * G_B3_0 = {0};
	t5* G_B5_0 = {0};
	t104 * G_B5_1 = {0};
	{
		if ((((int32_t)p0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		t1181 * L_0 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4767(L_0, (t11*) &_stringLiteral226, &m4767_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000f:
	{
		G_B3_0 = ((t104 *)(__this));
		if (!p1)
		{
			G_B4_0 = ((t104 *)(__this));
			goto IL_0018;
		}
	}
	{
		V_0 = p1;
		G_B5_0 = V_0;
		G_B5_1 = ((t104 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2607_TI));
		t2607 * L_1 = m12942(NULL, &m12942_MI);
		G_B5_0 = ((t5*)(L_1));
		G_B5_1 = ((t104 *)(G_B4_0));
	}

IL_001d:
	{
		G_B5_1->f12 = G_B5_0;
		if (p0)
		{
			goto IL_002b;
		}
	}
	{
		p0 = ((int32_t)10);
	}

IL_002b:
	{
		p0 = ((int32_t)((((int32_t)((float)((float)(((float)p0))/(float)(0.9f)))))+1));
		m14768(__this, p0, &m14768_MI);
		__this->f14 = 0;
		return;
	}
}
 void m14768 (t104 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f4 = ((t55*)SZArrayNew(InitializedTypeInfo(&t55_TI), p0));
		__this->f5 = ((t2297*)SZArrayNew(InitializedTypeInfo(&t2297_TI), p0));
		__this->f9 = (-1);
		__this->f6 = ((t46*)SZArrayNew(InitializedTypeInfo(&t46_TI), p0));
		__this->f7 = ((t199*)SZArrayNew(InitializedTypeInfo(&t199_TI), p0));
		__this->f8 = 0;
		t55* L_0 = (__this->f4);
		__this->f11 = (((int32_t)((float)((float)(((float)(((int32_t)(((t107 *)L_0)->max_length)))))*(float)(0.9f)))));
		int32_t L_1 = (__this->f11);
		if (L_1)
		{
			goto IL_006e;
		}
	}
	{
		t55* L_2 = (__this->f4);
		if ((((int32_t)(((int32_t)(((t107 *)L_2)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->f11 = 1;
	}

IL_006e:
	{
		return;
	}
}
 void m14769 (t104 * __this, t107 * p0, int32_t p1, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3595(L_0, (t11*) &_stringLiteral227, &m3595_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		t1181 * L_1 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4767(L_1, (t11*) &_stringLiteral228, &m4767_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001d:
	{
		int32_t L_2 = m4763(p0, &m4763_MI);
		if ((((int32_t)p1) <= ((int32_t)L_2)))
		{
			goto IL_0031;
		}
	}
	{
		t160 * L_3 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_3, (t11*) &_stringLiteral229, &m2581_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0031:
	{
		int32_t L_4 = m4763(p0, &m4763_MI);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m14765_MI, __this);
		if ((((int32_t)((int32_t)(L_4-p1))) >= ((int32_t)L_5)))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_6 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_6, (t11*) &_stringLiteral230, &m2581_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_004c:
	{
		return;
	}
}
 t2817  m14770 (t5 * __this, int32_t p0, t69 * p1, MethodInfo* method){
	{
		t2817  L_0 = {0};
		m14787(&L_0, p0, p1, &m14787_MI);
		return L_0;
	}
}
extern MethodInfo m14771_MI;
 t69 * m14771 (t5 * __this, int32_t p0, t69 * p1, MethodInfo* method){
	{
		return p1;
	}
}
 void m14772 (t104 * __this, t2816* p0, int32_t p1, MethodInfo* method){
	{
		m14769(__this, (t107 *)(t107 *)p0, p1, &m14769_MI);
		t124 L_0 = { &m14770_MI };
		t2823 * L_1 = (t2823 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2823_TI));
		m14837(L_1, NULL, L_0, &m14837_MI);
		m24726(__this, p0, p1, L_1, &m24726_MI);
		return;
	}
}
 void m14773 (t104 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	t55* V_1 = {0};
	t2297* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t46* V_7 = {0};
	t199* V_8 = {0};
	int32_t V_9 = 0;
	{
		t55* L_0 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t984_TI));
		int32_t L_1 = m7558(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((t107 *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), &m7558_MI);
		V_0 = L_1;
		V_1 = ((t55*)SZArrayNew(InitializedTypeInfo(&t55_TI), V_0));
		V_2 = ((t2297*)SZArrayNew(InitializedTypeInfo(&t2297_TI), V_0));
		V_3 = 0;
		goto IL_00ab;
	}

IL_0027:
	{
		t55* L_2 = (__this->f4);
		int32_t L_3 = V_3;
		V_4 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_3))-1));
		goto IL_00a2;
	}

IL_0035:
	{
		t5* L_4 = (__this->f12);
		t46* L_5 = (__this->f6);
		int32_t L_6 = V_4;
		int32_t L_7 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m31851_MI, L_4, (*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_6)));
		int32_t L_8 = ((int32_t)((int32_t)L_7|(int32_t)((int32_t)-2147483648)));
		V_9 = L_8;
		((t1511 *)(t1511 *)SZArrayLdElema(V_2, V_4))->f0 = L_8;
		V_5 = V_9;
		V_6 = ((int32_t)(((int32_t)((int32_t)V_5&(int32_t)((int32_t)2147483647)))%V_0));
		int32_t L_9 = V_6;
		((t1511 *)(t1511 *)SZArrayLdElema(V_2, V_4))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(V_1, L_9))-1));
		*((int32_t*)(int32_t*)SZArrayLdElema(V_1, V_6)) = (int32_t)((int32_t)(V_4+1));
		t2297* L_10 = (__this->f5);
		int32_t L_11 = (((t1511 *)(t1511 *)SZArrayLdElema(L_10, V_4))->f1);
		V_4 = L_11;
	}

IL_00a2:
	{
		if ((((uint32_t)V_4) != ((uint32_t)(-1))))
		{
			goto IL_0035;
		}
	}
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_00ab:
	{
		t55* L_12 = (__this->f4);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((t107 *)L_12)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		__this->f4 = V_1;
		__this->f5 = V_2;
		V_7 = ((t46*)SZArrayNew(InitializedTypeInfo(&t46_TI), V_0));
		V_8 = ((t199*)SZArrayNew(InitializedTypeInfo(&t199_TI), V_0));
		t46* L_13 = (__this->f6);
		int32_t L_14 = (__this->f8);
		m6741(NULL, (t107 *)(t107 *)L_13, 0, (t107 *)(t107 *)V_7, 0, L_14, &m6741_MI);
		t199* L_15 = (__this->f7);
		int32_t L_16 = (__this->f8);
		m6741(NULL, (t107 *)(t107 *)L_15, 0, (t107 *)(t107 *)V_8, 0, L_16, &m6741_MI);
		__this->f6 = V_7;
		__this->f7 = V_8;
		__this->f11 = (((int32_t)((float)((float)(((float)V_0))*(float)(0.9f)))));
		return;
	}
}
 void m724 (t104 * __this, int32_t p0, t69 * p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t19_TI), &L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		t484 * L_2 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3595(L_2, (t11*) &_stringLiteral238, &m3595_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		t5* L_3 = (__this->f12);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m31851_MI, L_3, p0);
		V_0 = ((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		t55* L_5 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(((int32_t)(((t107 *)L_5)->max_length)))));
		t55* L_6 = (__this->f4);
		int32_t L_7 = V_1;
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_7))-1));
		goto IL_008f;
	}

IL_0044:
	{
		t2297* L_8 = (__this->f5);
		int32_t L_9 = (((t1511 *)(t1511 *)SZArrayLdElema(L_8, V_2))->f0);
		if ((((uint32_t)L_9) != ((uint32_t)V_0)))
		{
			goto IL_007d;
		}
	}
	{
		t5* L_10 = (__this->f12);
		t46* L_11 = (__this->f6);
		int32_t L_12 = V_2;
		bool L_13 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m24385_MI, L_10, (*(int32_t*)(int32_t*)SZArrayLdElema(L_11, L_12)), p0);
		if (!L_13)
		{
			goto IL_007d;
		}
	}
	{
		t160 * L_14 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_14, (t11*) &_stringLiteral1210, &m2581_MI);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_007d:
	{
		t2297* L_15 = (__this->f5);
		int32_t L_16 = (((t1511 *)(t1511 *)SZArrayLdElema(L_15, V_2))->f1);
		V_2 = L_16;
	}

IL_008f:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_17 = (__this->f10);
		int32_t L_18 = ((int32_t)(L_17+1));
		V_3 = L_18;
		__this->f10 = L_18;
		int32_t L_19 = (__this->f11);
		if ((((int32_t)V_3) <= ((int32_t)L_19)))
		{
			goto IL_00c3;
		}
	}
	{
		m14773(__this, &m14773_MI);
		t55* L_20 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(((int32_t)(((t107 *)L_20)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_21 = (__this->f9);
		V_2 = L_21;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_22 = (__this->f8);
		int32_t L_23 = L_22;
		V_3 = L_23;
		__this->f8 = ((int32_t)(L_23+1));
		V_2 = V_3;
		goto IL_00f9;
	}

IL_00e2:
	{
		t2297* L_24 = (__this->f5);
		int32_t L_25 = (((t1511 *)(t1511 *)SZArrayLdElema(L_24, V_2))->f1);
		__this->f9 = L_25;
	}

IL_00f9:
	{
		t2297* L_26 = (__this->f5);
		((t1511 *)(t1511 *)SZArrayLdElema(L_26, V_2))->f0 = V_0;
		t2297* L_27 = (__this->f5);
		t55* L_28 = (__this->f4);
		int32_t L_29 = V_1;
		((t1511 *)(t1511 *)SZArrayLdElema(L_27, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_28, L_29))-1));
		t55* L_30 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_30, V_1)) = (int32_t)((int32_t)(V_2+1));
		t46* L_31 = (__this->f6);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_31, V_2)) = (int32_t)p0;
		t199* L_32 = (__this->f7);
		*((t69 **)(t69 **)SZArrayLdElema(L_32, V_2)) = (t69 *)p1;
		int32_t L_33 = (__this->f14);
		__this->f14 = ((int32_t)(L_33+1));
		return;
	}
}
extern MethodInfo m14774_MI;
 void m14774 (t104 * __this, MethodInfo* method){
	{
		__this->f10 = 0;
		t55* L_0 = (__this->f4);
		t55* L_1 = (__this->f4);
		m5904(NULL, (t107 *)(t107 *)L_0, 0, (((int32_t)(((t107 *)L_1)->max_length))), &m5904_MI);
		t46* L_2 = (__this->f6);
		t46* L_3 = (__this->f6);
		m5904(NULL, (t107 *)(t107 *)L_2, 0, (((int32_t)(((t107 *)L_3)->max_length))), &m5904_MI);
		t199* L_4 = (__this->f7);
		t199* L_5 = (__this->f7);
		m5904(NULL, (t107 *)(t107 *)L_4, 0, (((int32_t)(((t107 *)L_5)->max_length))), &m5904_MI);
		t2297* L_6 = (__this->f5);
		t2297* L_7 = (__this->f5);
		m5904(NULL, (t107 *)(t107 *)L_6, 0, (((int32_t)(((t107 *)L_7)->max_length))), &m5904_MI);
		__this->f9 = (-1);
		__this->f8 = 0;
		int32_t L_8 = (__this->f14);
		__this->f14 = ((int32_t)(L_8+1));
		return;
	}
}
 bool m14775 (t104 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t19_TI), &L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		t484 * L_2 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3595(L_2, (t11*) &_stringLiteral238, &m3595_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		t5* L_3 = (__this->f12);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m31851_MI, L_3, p0);
		V_0 = ((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		t55* L_5 = (__this->f4);
		t55* L_6 = (__this->f4);
		int32_t L_7 = ((int32_t)(((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(((int32_t)(((t107 *)L_6)->max_length)))));
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7))-1));
		goto IL_0084;
	}

IL_0042:
	{
		t2297* L_8 = (__this->f5);
		int32_t L_9 = (((t1511 *)(t1511 *)SZArrayLdElema(L_8, V_1))->f0);
		if ((((uint32_t)L_9) != ((uint32_t)V_0)))
		{
			goto IL_0072;
		}
	}
	{
		t5* L_10 = (__this->f12);
		t46* L_11 = (__this->f6);
		int32_t L_12 = V_1;
		bool L_13 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m24385_MI, L_10, (*(int32_t*)(int32_t*)SZArrayLdElema(L_11, L_12)), p0);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		t2297* L_14 = (__this->f5);
		int32_t L_15 = (((t1511 *)(t1511 *)SZArrayLdElema(L_14, V_1))->f1);
		V_1 = L_15;
	}

IL_0084:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m14776_MI;
 bool m14776 (t104 * __this, t69 * p0, MethodInfo* method){
	t5* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2717_TI));
		t2717 * L_0 = m14013(NULL, &m14013_MI);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0048;
	}

IL_000a:
	{
		t55* L_1 = (__this->f4);
		int32_t L_2 = V_1;
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_2))-1));
		goto IL_0040;
	}

IL_0017:
	{
		t199* L_3 = (__this->f7);
		int32_t L_4 = V_2;
		bool L_5 = (bool)InterfaceFuncInvoker2< bool, t69 *, t69 * >::Invoke(&m32032_MI, V_0, (*(t69 **)(t69 **)SZArrayLdElema(L_3, L_4)), p0);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		t2297* L_6 = (__this->f5);
		int32_t L_7 = (((t1511 *)(t1511 *)SZArrayLdElema(L_6, V_2))->f1);
		V_2 = L_7;
	}

IL_0040:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0017;
		}
	}
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0048:
	{
		t55* L_8 = (__this->f4);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t107 *)L_8)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m14777_MI;
 void m14777 (t104 * __this, t829 * p0, t830  p1, MethodInfo* method){
	t2816* V_0 = {0};
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3595(L_0, (t11*) &_stringLiteral247, &m3595_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		int32_t L_1 = (__this->f14);
		m4776(p0, (t11*) &_stringLiteral249, L_1, &m4776_MI);
		t5* L_2 = (__this->f12);
		m4789(p0, (t11*) &_stringLiteral251, L_2, &m4789_MI);
		V_0 = (t2816*)NULL;
		int32_t L_3 = (__this->f10);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_4 = (__this->f10);
		V_0 = ((t2816*)SZArrayNew(InitializedTypeInfo(&t2816_TI), L_4));
		m14772(__this, V_0, 0, &m14772_MI);
	}

IL_004f:
	{
		t55* L_5 = (__this->f4);
		m4776(p0, (t11*) &_stringLiteral1211, (((int32_t)(((t107 *)L_5)->max_length))), &m4776_MI);
		m4789(p0, (t11*) &_stringLiteral1212, (t5 *)(t5 *)V_0, &m4789_MI);
		return;
	}
}
extern MethodInfo m14778_MI;
 void m14778 (t104 * __this, t5 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	t2816* V_1 = {0};
	int32_t V_2 = 0;
	{
		t829 * L_0 = (__this->f13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		t829 * L_1 = (__this->f13);
		int32_t L_2 = m4788(L_1, (t11*) &_stringLiteral249, &m4788_MI);
		__this->f14 = L_2;
		t829 * L_3 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_4 = m532(NULL, LoadTypeToken(&t2813_0_0_0), &m532_MI);
		t5 * L_5 = m4777(L_3, (t11*) &_stringLiteral251, L_4, &m4777_MI);
		__this->f12 = ((t5*)Castclass(L_5, InitializedTypeInfo(&t2813_TI)));
		t829 * L_6 = (__this->f13);
		int32_t L_7 = m4788(L_6, (t11*) &_stringLiteral1211, &m4788_MI);
		V_0 = L_7;
		t829 * L_8 = (__this->f13);
		t114 * L_9 = m532(NULL, LoadTypeToken(&t2816_0_0_0), &m532_MI);
		t5 * L_10 = m4777(L_8, (t11*) &_stringLiteral1212, L_9, &m4777_MI);
		V_1 = ((t2816*)Castclass(L_10, InitializedTypeInfo(&t2816_TI)));
		if ((((int32_t)V_0) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = ((int32_t)10);
	}

IL_007d:
	{
		m14768(__this, V_0, &m14768_MI);
		__this->f10 = 0;
		if (!V_1)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = 0;
		goto IL_00b4;
	}

IL_0092:
	{
		int32_t L_11 = m14788(((t2817 *)(t2817 *)SZArrayLdElema(V_1, V_2)), &m14788_MI);
		t69 * L_12 = m14790(((t2817 *)(t2817 *)SZArrayLdElema(V_1, V_2)), &m14790_MI);
		VirtActionInvoker2< int32_t, t69 * >::Invoke(&m724_MI, __this, L_11, L_12);
		V_2 = ((int32_t)(V_2+1));
	}

IL_00b4:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t107 *)V_1)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_13 = (__this->f14);
		__this->f14 = ((int32_t)(L_13+1));
		__this->f13 = (t829 *)NULL;
		return;
	}
}
 bool m14779 (t104 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = {0};
	t69 * V_5 = {0};
	{
		int32_t L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t19_TI), &L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		t484 * L_2 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3595(L_2, (t11*) &_stringLiteral238, &m3595_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		t5* L_3 = (__this->f12);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m31851_MI, L_3, p0);
		V_0 = ((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		t55* L_5 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(((int32_t)(((t107 *)L_5)->max_length)))));
		t55* L_6 = (__this->f4);
		int32_t L_7 = V_1;
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_7))-1));
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (-1);
	}

IL_004a:
	{
		t2297* L_8 = (__this->f5);
		int32_t L_9 = (((t1511 *)(t1511 *)SZArrayLdElema(L_8, V_2))->f0);
		if ((((uint32_t)L_9) != ((uint32_t)V_0)))
		{
			goto IL_007a;
		}
	}
	{
		t5* L_10 = (__this->f12);
		t46* L_11 = (__this->f6);
		int32_t L_12 = V_2;
		bool L_13 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m24385_MI, L_10, (*(int32_t*)(int32_t*)SZArrayLdElema(L_11, L_12)), p0);
		if (!L_13)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		V_3 = V_2;
		t2297* L_14 = (__this->f5);
		int32_t L_15 = (((t1511 *)(t1511 *)SZArrayLdElema(L_14, V_2))->f1);
		V_2 = L_15;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_16 = (__this->f10);
		__this->f10 = ((int32_t)(L_16-1));
		if ((((uint32_t)V_3) != ((uint32_t)(-1))))
		{
			goto IL_00c7;
		}
	}
	{
		t55* L_17 = (__this->f4);
		t2297* L_18 = (__this->f5);
		int32_t L_19 = (((t1511 *)(t1511 *)SZArrayLdElema(L_18, V_2))->f1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_17, V_1)) = (int32_t)((int32_t)(L_19+1));
		goto IL_00e9;
	}

IL_00c7:
	{
		t2297* L_20 = (__this->f5);
		t2297* L_21 = (__this->f5);
		int32_t L_22 = (((t1511 *)(t1511 *)SZArrayLdElema(L_21, V_2))->f1);
		((t1511 *)(t1511 *)SZArrayLdElema(L_20, V_3))->f1 = L_22;
	}

IL_00e9:
	{
		t2297* L_23 = (__this->f5);
		int32_t L_24 = (__this->f9);
		((t1511 *)(t1511 *)SZArrayLdElema(L_23, V_2))->f1 = L_24;
		__this->f9 = V_2;
		t2297* L_25 = (__this->f5);
		((t1511 *)(t1511 *)SZArrayLdElema(L_25, V_2))->f0 = 0;
		t46* L_26 = (__this->f6);
		Initobj (&t19_TI, (&V_4));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_26, V_2)) = (int32_t)V_4;
		t199* L_27 = (__this->f7);
		Initobj (&t69_TI, (&V_5));
		*((t69 **)(t69 **)SZArrayLdElema(L_27, V_2)) = (t69 *)V_5;
		int32_t L_28 = (__this->f14);
		__this->f14 = ((int32_t)(L_28+1));
		return 1;
	}
}
 bool m14780 (t104 * __this, int32_t p0, t69 ** p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t69 * V_2 = {0};
	{
		int32_t L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t19_TI), &L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		t484 * L_2 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3595(L_2, (t11*) &_stringLiteral238, &m3595_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		t5* L_3 = (__this->f12);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m31851_MI, L_3, p0);
		V_0 = ((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		t55* L_5 = (__this->f4);
		t55* L_6 = (__this->f4);
		int32_t L_7 = ((int32_t)(((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(((int32_t)(((t107 *)L_6)->max_length)))));
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7))-1));
		goto IL_0096;
	}

IL_0042:
	{
		t2297* L_8 = (__this->f5);
		int32_t L_9 = (((t1511 *)(t1511 *)SZArrayLdElema(L_8, V_1))->f0);
		if ((((uint32_t)L_9) != ((uint32_t)V_0)))
		{
			goto IL_0084;
		}
	}
	{
		t5* L_10 = (__this->f12);
		t46* L_11 = (__this->f6);
		int32_t L_12 = V_1;
		bool L_13 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m24385_MI, L_10, (*(int32_t*)(int32_t*)SZArrayLdElema(L_11, L_12)), p0);
		if (!L_13)
		{
			goto IL_0084;
		}
	}
	{
		t199* L_14 = (__this->f7);
		int32_t L_15 = V_1;
		*p1 = (*(t69 **)(t69 **)SZArrayLdElema(L_14, L_15));
		return 1;
	}

IL_0084:
	{
		t2297* L_16 = (__this->f5);
		int32_t L_17 = (((t1511 *)(t1511 *)SZArrayLdElema(L_16, V_1))->f1);
		V_1 = L_17;
	}

IL_0096:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		Initobj (&t69_TI, (&V_2));
		*p1 = V_2;
		return 0;
	}
}
extern MethodInfo m14781_MI;
 t2815 * m14781 (t104 * __this, MethodInfo* method){
	{
		t2815 * L_0 = (t2815 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2815_TI));
		m14798(L_0, __this, &m14798_MI);
		return L_0;
	}
}
 int32_t m14782 (t104 * __this, t5 * p0, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3595(L_0, (t11*) &_stringLiteral238, &m3595_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		if (((t5 *)IsInst(p0, InitializedTypeInfo(&t19_TI))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_1 = m532(NULL, LoadTypeToken(&t19_0_0_0), &m532_MI);
		t11* L_2 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m6830_MI, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_3 = m2409(NULL, (t11*) &_stringLiteral1213, L_2, &m2409_MI);
		t160 * L_4 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m613(L_4, L_3, (t11*) &_stringLiteral238, &m613_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_003a:
	{
		return ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t19_TI)))));
	}
}
 t69 * m14783 (t104 * __this, t5 * p0, MethodInfo* method){
	t69 * V_0 = {0};
	{
		if (p0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_0 = m532(NULL, LoadTypeToken(&t69_0_0_0), &m532_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6793_MI, L_0);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (&t69_TI, (&V_0));
		return V_0;
	}

IL_001e:
	{
		if (((t69 *)IsInst(p0, InitializedTypeInfo(&t69_TI))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_2 = m532(NULL, LoadTypeToken(&t69_0_0_0), &m532_MI);
		t11* L_3 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m6830_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_4 = m2409(NULL, (t11*) &_stringLiteral1213, L_3, &m2409_MI);
		t160 * L_5 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m613(L_5, L_4, (t11*) &_stringLiteral442, &m613_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_004a:
	{
		return ((t69 *)Castclass(p0, InitializedTypeInfo(&t69_TI)));
	}
}
 bool m14784 (t104 * __this, t2817  p0, MethodInfo* method){
	t69 * V_0 = {0};
	{
		int32_t L_0 = m14788((&p0), &m14788_MI);
		bool L_1 = (bool)VirtFuncInvoker2< bool, int32_t, t69 ** >::Invoke(&m14780_MI, __this, L_0, (&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2717_TI));
		t2717 * L_2 = m14013(NULL, &m14013_MI);
		t69 * L_3 = m14790((&p0), &m14790_MI);
		bool L_4 = (bool)VirtFuncInvoker2< bool, t69 *, t69 * >::Invoke(&m24444_MI, L_2, L_3, V_0);
		return L_4;
	}
}
extern MethodInfo m14785_MI;
 t2819  m14785 (t104 * __this, MethodInfo* method){
	{
		t2819  L_0 = {0};
		m14817(&L_0, __this, &m14817_MI);
		return L_0;
	}
}
 t990  m14786 (t5 * __this, int32_t p0, t69 * p1, MethodInfo* method){
	{
		int32_t L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t19_TI), &L_0);
		t69 * L_2 = p1;
		t990  L_3 = {0};
		m4759(&L_3, L_1, ((t69 *)L_2), &m4759_MI);
		return L_3;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2<JewelMine.Engine.JewelType,UnityEngine.GameObject>
extern Il2CppType t110_0_0_32849;
FieldInfo t104_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t110_0_0_32849, &t104_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t116_0_0_32849;
FieldInfo t104_f1_FieldInfo = 
{
	"DEFAULT_LOAD_FACTOR", &t116_0_0_32849, &t104_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_32849;
FieldInfo t104_f2_FieldInfo = 
{
	"NO_SLOT", &t110_0_0_32849, &t104_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_32849;
FieldInfo t104_f3_FieldInfo = 
{
	"HASH_FLAG", &t110_0_0_32849, &t104_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t55_0_0_1;
FieldInfo t104_f4_FieldInfo = 
{
	"table", &t55_0_0_1, &t104_TI, offsetof(t104, f4), &EmptyCustomAttributesCache};
extern Il2CppType t2297_0_0_1;
FieldInfo t104_f5_FieldInfo = 
{
	"linkSlots", &t2297_0_0_1, &t104_TI, offsetof(t104, f5), &EmptyCustomAttributesCache};
extern Il2CppType t46_0_0_1;
FieldInfo t104_f6_FieldInfo = 
{
	"keySlots", &t46_0_0_1, &t104_TI, offsetof(t104, f6), &EmptyCustomAttributesCache};
extern Il2CppType t199_0_0_1;
FieldInfo t104_f7_FieldInfo = 
{
	"valueSlots", &t199_0_0_1, &t104_TI, offsetof(t104, f7), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t104_f8_FieldInfo = 
{
	"touchedSlots", &t110_0_0_1, &t104_TI, offsetof(t104, f8), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t104_f9_FieldInfo = 
{
	"emptySlot", &t110_0_0_1, &t104_TI, offsetof(t104, f9), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t104_f10_FieldInfo = 
{
	"count", &t110_0_0_1, &t104_TI, offsetof(t104, f10), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t104_f11_FieldInfo = 
{
	"threshold", &t110_0_0_1, &t104_TI, offsetof(t104, f11), &EmptyCustomAttributesCache};
extern Il2CppType t2813_0_0_1;
FieldInfo t104_f12_FieldInfo = 
{
	"hcp", &t2813_0_0_1, &t104_TI, offsetof(t104, f12), &EmptyCustomAttributesCache};
extern Il2CppType t829_0_0_1;
FieldInfo t104_f13_FieldInfo = 
{
	"serialization_info", &t829_0_0_1, &t104_TI, offsetof(t104, f13), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t104_f14_FieldInfo = 
{
	"generation", &t110_0_0_1, &t104_TI, offsetof(t104, f14), &EmptyCustomAttributesCache};
extern Il2CppType t2814_0_0_17;
extern CustomAttributesCache t1517__CustomAttributeCache_U3CU3Ef__am$cacheB;
FieldInfo t104_f15_FieldInfo = 
{
	"<>f__am$cacheB", &t2814_0_0_17, &t104_TI, offsetof(t104_SFs, f15), &t1517__CustomAttributeCache_U3CU3Ef__am$cacheB};
static FieldInfo* t104_FIs[] =
{
	&t104_f0_FieldInfo,
	&t104_f1_FieldInfo,
	&t104_f2_FieldInfo,
	&t104_f3_FieldInfo,
	&t104_f4_FieldInfo,
	&t104_f5_FieldInfo,
	&t104_f6_FieldInfo,
	&t104_f7_FieldInfo,
	&t104_f8_FieldInfo,
	&t104_f9_FieldInfo,
	&t104_f10_FieldInfo,
	&t104_f11_FieldInfo,
	&t104_f12_FieldInfo,
	&t104_f13_FieldInfo,
	&t104_f14_FieldInfo,
	&t104_f15_FieldInfo,
	NULL
};
static const int32_t t104_f0_DefaultValueData = 10;
static Il2CppFieldDefaultValueEntry t104_f0_DefaultValue = 
{
	&t104_f0_FieldInfo, { (char*)&t104_f0_DefaultValueData, &t110_0_0_0 }};
static const float t104_f1_DefaultValueData = 0.9f;
extern Il2CppType t116_0_0_0;
static Il2CppFieldDefaultValueEntry t104_f1_DefaultValue = 
{
	&t104_f1_FieldInfo, { (char*)&t104_f1_DefaultValueData, &t116_0_0_0 }};
static const int32_t t104_f2_DefaultValueData = -1;
static Il2CppFieldDefaultValueEntry t104_f2_DefaultValue = 
{
	&t104_f2_FieldInfo, { (char*)&t104_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t104_f3_DefaultValueData = -2147483648;
static Il2CppFieldDefaultValueEntry t104_f3_DefaultValue = 
{
	&t104_f3_FieldInfo, { (char*)&t104_f3_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t104_FDVs[] = 
{
	&t104_f0_DefaultValue,
	&t104_f1_DefaultValue,
	&t104_f2_DefaultValue,
	&t104_f3_DefaultValue,
	NULL
};
static PropertyInfo t104____System_Collections_IDictionary_Item_PropertyInfo = 
{
	&t104_TI, "System.Collections.IDictionary.Item", &m14750_MI, &m14751_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t104____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t104_TI, "System.Collections.ICollection.IsSynchronized", &m14754_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t104____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t104_TI, "System.Collections.ICollection.SyncRoot", &m14755_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t104____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo = 
{
	&t104_TI, "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.IsReadOnly", &m14756_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t104____Count_PropertyInfo = 
{
	&t104_TI, "Count", &m14765_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t104____Item_PropertyInfo = 
{
	&t104_TI, "Item", &m747_MI, &m14766_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t104____Values_PropertyInfo = 
{
	&t104_TI, "Values", &m14781_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t104_PIs[] =
{
	&t104____System_Collections_IDictionary_Item_PropertyInfo,
	&t104____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t104____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t104____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo,
	&t104____Count_PropertyInfo,
	&t104____Item_PropertyInfo,
	&t104____Values_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m720_GM;
MethodInfo m720_MI = 
{
	".ctor", (methodPointerType)&m720, &t104_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m720_GM};
extern Il2CppType t2813_0_0_0;
static ParameterInfo t104_m14747_ParameterInfos[] = 
{
	{"comparer", 0, 134217728, &EmptyCustomAttributesCache, &t2813_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14747_GM;
MethodInfo m14747_MI = 
{
	".ctor", (methodPointerType)&m14747, &t104_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t104_m14747_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14747_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t104_m14748_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14748_GM;
MethodInfo m14748_MI = 
{
	".ctor", (methodPointerType)&m14748, &t104_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t104_m14748_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14748_GM};
extern Il2CppType t829_0_0_0;
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t104_m14749_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14749_GM;
MethodInfo m14749_MI = 
{
	".ctor", (methodPointerType)&m14749, &t104_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t104_m14749_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14749_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t104_m14750_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14750_GM;
MethodInfo m14750_MI = 
{
	"System.Collections.IDictionary.get_Item", (methodPointerType)&m14750, &t104_TI, &t5_0_0_0, RuntimeInvoker_t5_t5, t104_m14750_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14750_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t104_m14751_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14751_GM;
MethodInfo m14751_MI = 
{
	"System.Collections.IDictionary.set_Item", (methodPointerType)&m14751, &t104_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t104_m14751_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 20, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14751_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t104_m14752_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14752_GM;
MethodInfo m14752_MI = 
{
	"System.Collections.IDictionary.Add", (methodPointerType)&m14752, &t104_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t104_m14752_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 21, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14752_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t104_m14753_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14753_GM;
MethodInfo m14753_MI = 
{
	"System.Collections.IDictionary.Remove", (methodPointerType)&m14753, &t104_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t104_m14753_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 23, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14753_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14754_GM;
MethodInfo m14754_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m14754, &t104_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14754_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14755_GM;
MethodInfo m14755_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m14755, &t104_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14755_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14756_GM;
MethodInfo m14756_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly", (methodPointerType)&m14756, &t104_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 11, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14756_GM};
extern Il2CppType t2817_0_0_0;
extern Il2CppType t2817_0_0_0;
static ParameterInfo t104_m14757_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t2817_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t2817 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14757_GM;
MethodInfo m14757_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add", (methodPointerType)&m14757, &t104_TI, &t109_0_0_0, RuntimeInvoker_t109_t2817, t104_m14757_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14757_GM};
extern Il2CppType t2817_0_0_0;
static ParameterInfo t104_m14758_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t2817_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t2817 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14758_GM;
MethodInfo m14758_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains", (methodPointerType)&m14758, &t104_TI, &t108_0_0_0, RuntimeInvoker_t108_t2817, t104_m14758_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 14, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14758_GM};
extern Il2CppType t2816_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t104_m14759_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2816_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14759_GM;
MethodInfo m14759_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo", (methodPointerType)&m14759, &t104_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t104_m14759_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14759_GM};
extern Il2CppType t2817_0_0_0;
static ParameterInfo t104_m14760_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t2817_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t2817 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14760_GM;
MethodInfo m14760_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove", (methodPointerType)&m14760, &t104_TI, &t108_0_0_0, RuntimeInvoker_t108_t2817, t104_m14760_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14760_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t104_m14761_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14761_GM;
MethodInfo m14761_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m14761, &t104_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t104_m14761_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14761_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14762_GM;
MethodInfo m14762_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m14762, &t104_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14762_GM};
extern Il2CppType t2818_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14763_GM;
MethodInfo m14763_MI = 
{
	"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator", (methodPointerType)&m14763, &t104_TI, &t2818_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 17, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14763_GM};
extern Il2CppType t987_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14764_GM;
MethodInfo m14764_MI = 
{
	"System.Collections.IDictionary.GetEnumerator", (methodPointerType)&m14764, &t104_TI, &t987_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 22, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14764_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14765_GM;
MethodInfo m14765_MI = 
{
	"get_Count", (methodPointerType)&m14765, &t104_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14765_GM};
extern Il2CppType t19_0_0_0;
static ParameterInfo t104_m747_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t19_0_0_0},
};
extern Il2CppType t69_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m747_GM;
MethodInfo m747_MI = 
{
	"get_Item", (methodPointerType)&m747, &t104_TI, &t69_0_0_0, RuntimeInvoker_t5_t110, t104_m747_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 25, 1, false, true, 0, NULL, (methodPointerType)NULL, &m747_GM};
extern Il2CppType t19_0_0_0;
extern Il2CppType t69_0_0_0;
static ParameterInfo t104_m14766_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t19_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t69_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14766_GM;
MethodInfo m14766_MI = 
{
	"set_Item", (methodPointerType)&m14766, &t104_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t104_m14766_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 26, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14766_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2813_0_0_0;
static ParameterInfo t104_m14767_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"hcp", 1, 134217728, &EmptyCustomAttributesCache, &t2813_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14767_GM;
MethodInfo m14767_MI = 
{
	"Init", (methodPointerType)&m14767, &t104_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t104_m14767_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14767_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t104_m14768_ParameterInfos[] = 
{
	{"size", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14768_GM;
MethodInfo m14768_MI = 
{
	"InitArrays", (methodPointerType)&m14768, &t104_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t104_m14768_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14768_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t104_m14769_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14769_GM;
MethodInfo m14769_MI = 
{
	"CopyToCheck", (methodPointerType)&m14769, &t104_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t104_m14769_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14769_GM};
extern Il2CppType t2289_0_0_0;
extern Il2CppType t2289_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t7581_0_0_0;
extern Il2CppType t7581_0_0_0;
static ParameterInfo t104_m32291_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2289_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"transform", 2, 134217728, &EmptyCustomAttributesCache, &t7581_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericContainer m32291_IGC;
extern TypeInfo m32291_gp_TRet_0_TI;
Il2CppGenericParamFull m32291_gp_TRet_0_TI_GenericParamFull = { { &m32291_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
extern TypeInfo m32291_gp_TElem_1_TI;
Il2CppGenericParamFull m32291_gp_TElem_1_TI_GenericParamFull = { { &m32291_IGC, 1}, {NULL, "TElem", 0, 0, NULL} };
static Il2CppGenericParamFull* m32291_IGPA[2] = 
{
	&m32291_gp_TRet_0_TI_GenericParamFull,
	&m32291_gp_TElem_1_TI_GenericParamFull,
};
extern MethodInfo m32291_MI;
Il2CppGenericContainer m32291_IGC = { { NULL, NULL }, NULL, &m32291_MI, 2, 1, m32291_IGPA };
extern Il2CppGenericMethod m32292_GM;
extern Il2CppType m11290_gp_0_0_0_0;
extern Il2CppType m11290_gp_1_0_0_0;
static Il2CppRGCTXDefinition m32291_RGCTXData[4] = 
{
	{ IL2CPP_RGCTX_DATA_METHOD, &m32292_GM }/* Method Definition */,
	{ IL2CPP_RGCTX_DATA_CLASS, &m11290_gp_0_0_0_0 }/* Class Definition */,
	{ IL2CPP_RGCTX_DATA_CLASS, &m11290_gp_1_0_0_0 }/* Class Definition */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
extern Il2CppGenericMethod m32291_GM;
MethodInfo m32291_MI = 
{
	"Do_CopyTo", NULL, &t104_TI, &t109_0_0_0, NULL, t104_m32291_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, true, true, 0, m32291_RGCTXData, (methodPointerType)NULL, &m32291_GM};
extern Il2CppType t19_0_0_0;
extern Il2CppType t69_0_0_0;
static ParameterInfo t104_m14770_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t19_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t69_0_0_0},
};
extern Il2CppType t2817_0_0_0;
extern void* RuntimeInvoker_t2817_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14770_GM;
MethodInfo m14770_MI = 
{
	"make_pair", (methodPointerType)&m14770, &t104_TI, &t2817_0_0_0, RuntimeInvoker_t2817_t110_t5, t104_m14770_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14770_GM};
extern Il2CppType t19_0_0_0;
extern Il2CppType t69_0_0_0;
static ParameterInfo t104_m14771_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t19_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t69_0_0_0},
};
extern Il2CppType t69_0_0_0;
extern void* RuntimeInvoker_t5_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14771_GM;
MethodInfo m14771_MI = 
{
	"pick_value", (methodPointerType)&m14771, &t104_TI, &t69_0_0_0, RuntimeInvoker_t5_t110_t5, t104_m14771_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14771_GM};
extern Il2CppType t2816_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t104_m14772_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2816_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14772_GM;
MethodInfo m14772_MI = 
{
	"CopyTo", (methodPointerType)&m14772, &t104_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t104_m14772_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14772_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t7584_0_0_0;
extern Il2CppType t7584_0_0_0;
static ParameterInfo t104_m32293_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"transform", 2, 134217728, &EmptyCustomAttributesCache, &t7584_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericContainer m32293_IGC;
extern TypeInfo m32293_gp_TRet_0_TI;
Il2CppGenericParamFull m32293_gp_TRet_0_TI_GenericParamFull = { { &m32293_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
static Il2CppGenericParamFull* m32293_IGPA[1] = 
{
	&m32293_gp_TRet_0_TI_GenericParamFull,
};
extern MethodInfo m32293_MI;
Il2CppGenericContainer m32293_IGC = { { NULL, NULL }, NULL, &m32293_MI, 1, 1, m32293_IGPA };
extern Il2CppType m11295_gp_0_0_0_0;
extern Il2CppGenericMethod m32294_GM;
static Il2CppRGCTXDefinition m32293_RGCTXData[3] = 
{
	{ IL2CPP_RGCTX_DATA_TYPE, &m11295_gp_0_0_0_0 }/* Type Definition */,
	{ IL2CPP_RGCTX_DATA_METHOD, &m32294_GM }/* Method Definition */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
extern Il2CppGenericMethod m32293_GM;
MethodInfo m32293_MI = 
{
	"Do_ICollectionCopyTo", NULL, &t104_TI, &t109_0_0_0, NULL, t104_m32293_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, true, true, 0, m32293_RGCTXData, (methodPointerType)NULL, &m32293_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14773_GM;
MethodInfo m14773_MI = 
{
	"Resize", (methodPointerType)&m14773, &t104_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14773_GM};
extern Il2CppType t19_0_0_0;
extern Il2CppType t69_0_0_0;
static ParameterInfo t104_m724_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t19_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t69_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m724_GM;
MethodInfo m724_MI = 
{
	"Add", (methodPointerType)&m724, &t104_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t104_m724_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 2, false, true, 0, NULL, (methodPointerType)NULL, &m724_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14774_GM;
MethodInfo m14774_MI = 
{
	"Clear", (methodPointerType)&m14774, &t104_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 13, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14774_GM};
extern Il2CppType t19_0_0_0;
static ParameterInfo t104_m14775_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t19_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14775_GM;
MethodInfo m14775_MI = 
{
	"ContainsKey", (methodPointerType)&m14775, &t104_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t104_m14775_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14775_GM};
extern Il2CppType t69_0_0_0;
static ParameterInfo t104_m14776_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t69_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14776_GM;
MethodInfo m14776_MI = 
{
	"ContainsValue", (methodPointerType)&m14776, &t104_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t104_m14776_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14776_GM};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t104_m14777_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14777_GM;
MethodInfo m14777_MI = 
{
	"GetObjectData", (methodPointerType)&m14777, &t104_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t104_m14777_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14777_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t104_m14778_ParameterInfos[] = 
{
	{"sender", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14778_GM;
MethodInfo m14778_MI = 
{
	"OnDeserialization", (methodPointerType)&m14778, &t104_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t104_m14778_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14778_GM};
extern Il2CppType t19_0_0_0;
static ParameterInfo t104_m14779_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t19_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14779_GM;
MethodInfo m14779_MI = 
{
	"Remove", (methodPointerType)&m14779, &t104_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t104_m14779_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14779_GM};
extern Il2CppType t19_0_0_0;
extern Il2CppType t69_1_0_2;
extern Il2CppType t69_1_0_0;
static ParameterInfo t104_m14780_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t19_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t69_1_0_2},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110_t4736 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14780_GM;
MethodInfo m14780_MI = 
{
	"TryGetValue", (methodPointerType)&m14780, &t104_TI, &t108_0_0_0, RuntimeInvoker_t108_t110_t4736, t104_m14780_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14780_GM};
extern Il2CppType t2815_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14781_GM;
MethodInfo m14781_MI = 
{
	"get_Values", (methodPointerType)&m14781, &t104_TI, &t2815_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14781_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t104_m14782_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14782_GM;
MethodInfo m14782_MI = 
{
	"ToTKey", (methodPointerType)&m14782, &t104_TI, &t19_0_0_0, RuntimeInvoker_t19_t5, t104_m14782_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14782_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t104_m14783_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t69_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14783_GM;
MethodInfo m14783_MI = 
{
	"ToTValue", (methodPointerType)&m14783, &t104_TI, &t69_0_0_0, RuntimeInvoker_t5_t5, t104_m14783_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14783_GM};
extern Il2CppType t2817_0_0_0;
static ParameterInfo t104_m14784_ParameterInfos[] = 
{
	{"pair", 0, 134217728, &EmptyCustomAttributesCache, &t2817_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t2817 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14784_GM;
MethodInfo m14784_MI = 
{
	"ContainsKeyValuePair", (methodPointerType)&m14784, &t104_TI, &t108_0_0_0, RuntimeInvoker_t108_t2817, t104_m14784_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14784_GM};
extern Il2CppType t2819_0_0_0;
extern void* RuntimeInvoker_t2819 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14785_GM;
MethodInfo m14785_MI = 
{
	"GetEnumerator", (methodPointerType)&m14785, &t104_TI, &t2819_0_0_0, RuntimeInvoker_t2819, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14785_GM};
extern Il2CppType t19_0_0_0;
extern Il2CppType t69_0_0_0;
static ParameterInfo t104_m14786_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t19_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t69_0_0_0},
};
extern Il2CppType t990_0_0_0;
extern void* RuntimeInvoker_t990_t110_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1517__CustomAttributeCache_m11311;
extern Il2CppGenericMethod m14786_GM;
MethodInfo m14786_MI = 
{
	"<CopyTo>m__0", (methodPointerType)&m14786, &t104_TI, &t990_0_0_0, RuntimeInvoker_t990_t110_t5, t104_m14786_ParameterInfos, &t1517__CustomAttributeCache_m11311, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14786_GM};
static MethodInfo* t104_MIs[] =
{
	&m720_MI,
	&m14747_MI,
	&m14748_MI,
	&m14749_MI,
	&m14750_MI,
	&m14751_MI,
	&m14752_MI,
	&m14753_MI,
	&m14754_MI,
	&m14755_MI,
	&m14756_MI,
	&m14757_MI,
	&m14758_MI,
	&m14759_MI,
	&m14760_MI,
	&m14761_MI,
	&m14762_MI,
	&m14763_MI,
	&m14764_MI,
	&m14765_MI,
	&m747_MI,
	&m14766_MI,
	&m14767_MI,
	&m14768_MI,
	&m14769_MI,
	&m32291_MI,
	&m14770_MI,
	&m14771_MI,
	&m14772_MI,
	&m32293_MI,
	&m14773_MI,
	&m724_MI,
	&m14774_MI,
	&m14775_MI,
	&m14776_MI,
	&m14777_MI,
	&m14778_MI,
	&m14779_MI,
	&m14780_MI,
	&m14781_MI,
	&m14782_MI,
	&m14783_MI,
	&m14784_MI,
	&m14785_MI,
	&m14786_MI,
	NULL
};
static MethodInfo* t104_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14762_MI,
	&m14777_MI,
	&m14765_MI,
	&m14754_MI,
	&m14755_MI,
	&m14761_MI,
	&m14765_MI,
	&m14756_MI,
	&m14757_MI,
	&m14774_MI,
	&m14758_MI,
	&m14759_MI,
	&m14760_MI,
	&m14763_MI,
	&m14779_MI,
	&m14750_MI,
	&m14751_MI,
	&m14752_MI,
	&m14764_MI,
	&m14753_MI,
	&m14778_MI,
	&m747_MI,
	&m14766_MI,
	&m724_MI,
	&m14775_MI,
	&m14777_MI,
	&m14778_MI,
	&m14780_MI,
};
extern TypeInfo t811_TI;
extern TypeInfo t6018_TI;
extern TypeInfo t6020_TI;
extern TypeInfo t7586_TI;
extern TypeInfo t986_TI;
extern TypeInfo t1184_TI;
static TypeInfo* t104_ITIs[] = 
{
	&t739_TI,
	&t517_TI,
	&t811_TI,
	&t6018_TI,
	&t6020_TI,
	&t7586_TI,
	&t986_TI,
	&t1184_TI,
};
static Il2CppInterfaceOffsetPair t104_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t517_TI, 5},
	{ &t811_TI, 6},
	{ &t6018_TI, 10},
	{ &t6020_TI, 17},
	{ &t7586_TI, 18},
	{ &t986_TI, 19},
	{ &t1184_TI, 24},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t104_0_0_0;
extern Il2CppType t104_1_0_0;
struct t104;
extern Il2CppGenericClass t104_GC;
extern CustomAttributesCache t1517__CustomAttributeCache;
extern CustomAttributesCache t1517__CustomAttributeCache_U3CU3Ef__am$cacheB;
extern CustomAttributesCache t1517__CustomAttributeCache_m11311;
TypeInfo t104_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Dictionary`2", "System.Collections.Generic", t104_MIs, t104_PIs, t104_FIs, NULL, &t5_TI, NULL, NULL, &t104_TI, t104_ITIs, t104_VT, &t1517__CustomAttributeCache, &t104_TI, &t104_0_0_0, &t104_1_0_0, t104_IOs, &t104_GC, NULL, t104_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t104), 0, -1, sizeof(t104_SFs), 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 45, 7, 16, 0, 0, 32, 8, 8};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<JewelMine.Engine.JewelType,UnityEngine.GameObject>>
extern MethodInfo m32295_MI;
static PropertyInfo t6018____Count_PropertyInfo = 
{
	&t6018_TI, "Count", &m32295_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m32296_MI;
static PropertyInfo t6018____IsReadOnly_PropertyInfo = 
{
	&t6018_TI, "IsReadOnly", &m32296_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6018_PIs[] =
{
	&t6018____Count_PropertyInfo,
	&t6018____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32295_GM;
MethodInfo m32295_MI = 
{
	"get_Count", NULL, &t6018_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32295_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32296_GM;
MethodInfo m32296_MI = 
{
	"get_IsReadOnly", NULL, &t6018_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32296_GM};
extern Il2CppType t2817_0_0_0;
static ParameterInfo t6018_m32297_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2817_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t2817 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32297_GM;
MethodInfo m32297_MI = 
{
	"Add", NULL, &t6018_TI, &t109_0_0_0, RuntimeInvoker_t109_t2817, t6018_m32297_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32297_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32298_GM;
MethodInfo m32298_MI = 
{
	"Clear", NULL, &t6018_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32298_GM};
extern Il2CppType t2817_0_0_0;
static ParameterInfo t6018_m32299_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2817_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t2817 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32299_GM;
MethodInfo m32299_MI = 
{
	"Contains", NULL, &t6018_TI, &t108_0_0_0, RuntimeInvoker_t108_t2817, t6018_m32299_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32299_GM};
extern Il2CppType t2816_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6018_m32300_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2816_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32300_GM;
MethodInfo m32300_MI = 
{
	"CopyTo", NULL, &t6018_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6018_m32300_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32300_GM};
extern Il2CppType t2817_0_0_0;
static ParameterInfo t6018_m32301_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2817_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t2817 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32301_GM;
MethodInfo m32301_MI = 
{
	"Remove", NULL, &t6018_TI, &t108_0_0_0, RuntimeInvoker_t108_t2817, t6018_m32301_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32301_GM};
static MethodInfo* t6018_MIs[] =
{
	&m32295_MI,
	&m32296_MI,
	&m32297_MI,
	&m32298_MI,
	&m32299_MI,
	&m32300_MI,
	&m32301_MI,
	NULL
};
static TypeInfo* t6018_ITIs[] = 
{
	&t739_TI,
	&t6020_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6018_0_0_0;
extern Il2CppType t6018_1_0_0;
struct t6018;
extern Il2CppGenericClass t6018_GC;
TypeInfo t6018_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6018_MIs, t6018_PIs, NULL, NULL, NULL, NULL, NULL, &t6018_TI, t6018_ITIs, NULL, &EmptyCustomAttributesCache, &t6018_TI, &t6018_0_0_0, &t6018_1_0_0, NULL, &t6018_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<JewelMine.Engine.JewelType,UnityEngine.GameObject>>
extern Il2CppType t2818_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32302_GM;
MethodInfo m32302_MI = 
{
	"GetEnumerator", NULL, &t6020_TI, &t2818_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32302_GM};
static MethodInfo* t6020_MIs[] =
{
	&m32302_MI,
	NULL
};
static TypeInfo* t6020_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6020_0_0_0;
extern Il2CppType t6020_1_0_0;
struct t6020;
extern Il2CppGenericClass t6020_GC;
TypeInfo t6020_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6020_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6020_TI, t6020_ITIs, NULL, &EmptyCustomAttributesCache, &t6020_TI, &t6020_0_0_0, &t6020_1_0_0, NULL, &t6020_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2818_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<JewelMine.Engine.JewelType,UnityEngine.GameObject>>
extern MethodInfo m32303_MI;
static PropertyInfo t2818____Current_PropertyInfo = 
{
	&t2818_TI, "Current", &m32303_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2818_PIs[] =
{
	&t2818____Current_PropertyInfo,
	NULL
};
extern Il2CppType t2817_0_0_0;
extern void* RuntimeInvoker_t2817 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32303_GM;
MethodInfo m32303_MI = 
{
	"get_Current", NULL, &t2818_TI, &t2817_0_0_0, RuntimeInvoker_t2817, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32303_GM};
static MethodInfo* t2818_MIs[] =
{
	&m32303_MI,
	NULL
};
static TypeInfo* t2818_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2818_0_0_0;
extern Il2CppType t2818_1_0_0;
struct t2818;
extern Il2CppGenericClass t2818_GC;
TypeInfo t2818_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2818_MIs, t2818_PIs, NULL, NULL, NULL, NULL, NULL, &t2818_TI, t2818_ITIs, NULL, &EmptyCustomAttributesCache, &t2818_TI, &t2818_0_0_0, &t2818_1_0_0, NULL, &t2818_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t585_TI;
extern MethodInfo m14789_MI;
extern MethodInfo m14791_MI;
extern MethodInfo m4802_MI;


 void m14787 (t2817 * __this, int32_t p0, t69 * p1, MethodInfo* method){
	{
		m14789(__this, p0, &m14789_MI);
		m14791(__this, p1, &m14791_MI);
		return;
	}
}
 int32_t m14788 (t2817 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
 void m14789 (t2817 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
 t69 * m14790 (t2817 * __this, MethodInfo* method){
	{
		t69 * L_0 = (__this->f1);
		return L_0;
	}
}
 void m14791 (t2817 * __this, t69 * p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m14792_MI;
 t11* m14792 (t2817 * __this, MethodInfo* method){
	int32_t V_0 = {0};
	t69 * V_1 = {0};
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
		int32_t L_2 = m14788(__this, &m14788_MI);
		int32_t L_3 = L_2;
		t5 * L_4 = Box(InitializedTypeInfo(&t19_TI), &L_3);
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = m14788(__this, &m14788_MI);
		V_0 = L_5;
		t11* L_6 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m467_MI, Box(InitializedTypeInfo(&t19_TI), &(*(&V_0))));
		G_B3_0 = L_6;
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
		t585* L_7 = G_B3_3;
		ArrayElementTypeCheck (L_7, (t11*) &_stringLiteral217);
		*((t11**)(t11**)SZArrayLdElema(L_7, 2)) = (t11*)(t11*) &_stringLiteral217;
		t585* L_8 = L_7;
		t69 * L_9 = m14790(__this, &m14790_MI);
		t69 * L_10 = L_9;
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!((t69 *)L_10))
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0066;
		}
	}
	{
		t69 * L_11 = m14790(__this, &m14790_MI);
		V_1 = L_11;
		t11* L_12 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m467_MI, (*(&V_1)));
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
// Metadata Definition System.Collections.Generic.KeyValuePair`2<JewelMine.Engine.JewelType,UnityEngine.GameObject>
extern Il2CppType t19_0_0_1;
FieldInfo t2817_f0_FieldInfo = 
{
	"key", &t19_0_0_1, &t2817_TI, offsetof(t2817, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t69_0_0_1;
FieldInfo t2817_f1_FieldInfo = 
{
	"value", &t69_0_0_1, &t2817_TI, offsetof(t2817, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2817_FIs[] =
{
	&t2817_f0_FieldInfo,
	&t2817_f1_FieldInfo,
	NULL
};
static PropertyInfo t2817____Key_PropertyInfo = 
{
	&t2817_TI, "Key", &m14788_MI, &m14789_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2817____Value_PropertyInfo = 
{
	&t2817_TI, "Value", &m14790_MI, &m14791_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2817_PIs[] =
{
	&t2817____Key_PropertyInfo,
	&t2817____Value_PropertyInfo,
	NULL
};
extern Il2CppType t19_0_0_0;
extern Il2CppType t69_0_0_0;
static ParameterInfo t2817_m14787_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t19_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t69_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14787_GM;
MethodInfo m14787_MI = 
{
	".ctor", (methodPointerType)&m14787, &t2817_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2817_m14787_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14787_GM};
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14788_GM;
MethodInfo m14788_MI = 
{
	"get_Key", (methodPointerType)&m14788, &t2817_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14788_GM};
extern Il2CppType t19_0_0_0;
static ParameterInfo t2817_m14789_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t19_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14789_GM;
MethodInfo m14789_MI = 
{
	"set_Key", (methodPointerType)&m14789, &t2817_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2817_m14789_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14789_GM};
extern Il2CppType t69_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14790_GM;
MethodInfo m14790_MI = 
{
	"get_Value", (methodPointerType)&m14790, &t2817_TI, &t69_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14790_GM};
extern Il2CppType t69_0_0_0;
static ParameterInfo t2817_m14791_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t69_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14791_GM;
MethodInfo m14791_MI = 
{
	"set_Value", (methodPointerType)&m14791, &t2817_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2817_m14791_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14791_GM};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14792_GM;
MethodInfo m14792_MI = 
{
	"ToString", (methodPointerType)&m14792, &t2817_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14792_GM};
static MethodInfo* t2817_MIs[] =
{
	&m14787_MI,
	&m14788_MI,
	&m14789_MI,
	&m14790_MI,
	&m14791_MI,
	&m14792_MI,
	NULL
};
static MethodInfo* t2817_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m14792_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2817_1_0_0;
extern Il2CppGenericClass t2817_GC;
extern CustomAttributesCache t1522__CustomAttributeCache;
TypeInfo t2817_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeyValuePair`2", "System.Collections.Generic", t2817_MIs, t2817_PIs, t2817_FIs, NULL, &t267_TI, NULL, NULL, &t2817_TI, NULL, t2817_VT, &t1522__CustomAttributeCache, &t2817_TI, &t2817_0_0_0, &t2817_1_0_0, NULL, &t2817_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2817)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 4, 0, 0};
#include "t2820.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2820_TI;
#include "t2820MD.h"

extern MethodInfo m14797_MI;
extern MethodInfo m24710_MI;
struct t107;
 t2817  m24710 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m14793_MI;
 void m14793 (t2820 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14794_MI;
 t5 * m14794 (t2820 * __this, MethodInfo* method){
	{
		t2817  L_0 = m14797(__this, &m14797_MI);
		t2817  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t2817_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14795_MI;
 void m14795 (t2820 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14796_MI;
 bool m14796 (t2820 * __this, MethodInfo* method){
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
 t2817  m14797 (t2820 * __this, MethodInfo* method){
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
		t2817  L_8 = m24710(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m24710_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<JewelMine.Engine.JewelType,UnityEngine.GameObject>>
extern Il2CppType t107_0_0_1;
FieldInfo t2820_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t2820_TI, offsetof(t2820, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2820_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2820_TI, offsetof(t2820, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2820_FIs[] =
{
	&t2820_f0_FieldInfo,
	&t2820_f1_FieldInfo,
	NULL
};
static PropertyInfo t2820____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2820_TI, "System.Collections.IEnumerator.Current", &m14794_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2820____Current_PropertyInfo = 
{
	&t2820_TI, "Current", &m14797_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2820_PIs[] =
{
	&t2820____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2820____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t2820_m14793_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14793_GM;
MethodInfo m14793_MI = 
{
	".ctor", (methodPointerType)&m14793, &t2820_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2820_m14793_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14793_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14794_GM;
MethodInfo m14794_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14794, &t2820_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14794_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14795_GM;
MethodInfo m14795_MI = 
{
	"Dispose", (methodPointerType)&m14795, &t2820_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14795_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14796_GM;
MethodInfo m14796_MI = 
{
	"MoveNext", (methodPointerType)&m14796, &t2820_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14796_GM};
extern Il2CppType t2817_0_0_0;
extern void* RuntimeInvoker_t2817 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14797_GM;
MethodInfo m14797_MI = 
{
	"get_Current", (methodPointerType)&m14797, &t2820_TI, &t2817_0_0_0, RuntimeInvoker_t2817, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14797_GM};
static MethodInfo* t2820_MIs[] =
{
	&m14793_MI,
	&m14794_MI,
	&m14795_MI,
	&m14796_MI,
	&m14797_MI,
	NULL
};
static MethodInfo* t2820_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m14794_MI,
	&m14796_MI,
	&m14795_MI,
	&m14797_MI,
};
static TypeInfo* t2820_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t2818_TI,
};
static Il2CppInterfaceOffsetPair t2820_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t2818_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2820_0_0_0;
extern Il2CppType t2820_1_0_0;
extern Il2CppGenericClass t2820_GC;
TypeInfo t2820_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2820_MIs, t2820_PIs, t2820_FIs, NULL, &t267_TI, NULL, &t107_TI, &t2820_TI, t2820_ITIs, t2820_VT, &EmptyCustomAttributesCache, &t2820_TI, &t2820_0_0_0, &t2820_1_0_0, t2820_IOs, &t2820_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2820)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6019_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<JewelMine.Engine.JewelType,UnityEngine.GameObject>>
extern MethodInfo m32304_MI;
extern MethodInfo m32305_MI;
static PropertyInfo t6019____Item_PropertyInfo = 
{
	&t6019_TI, "Item", &m32304_MI, &m32305_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6019_PIs[] =
{
	&t6019____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2817_0_0_0;
static ParameterInfo t6019_m32306_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2817_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t2817 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32306_GM;
MethodInfo m32306_MI = 
{
	"IndexOf", NULL, &t6019_TI, &t110_0_0_0, RuntimeInvoker_t110_t2817, t6019_m32306_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32306_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2817_0_0_0;
static ParameterInfo t6019_m32307_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2817_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t2817 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32307_GM;
MethodInfo m32307_MI = 
{
	"Insert", NULL, &t6019_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t2817, t6019_m32307_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32307_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6019_m32308_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32308_GM;
MethodInfo m32308_MI = 
{
	"RemoveAt", NULL, &t6019_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6019_m32308_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32308_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6019_m32304_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t2817_0_0_0;
extern void* RuntimeInvoker_t2817_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32304_GM;
MethodInfo m32304_MI = 
{
	"get_Item", NULL, &t6019_TI, &t2817_0_0_0, RuntimeInvoker_t2817_t110, t6019_m32304_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32304_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2817_0_0_0;
static ParameterInfo t6019_m32305_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2817_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t2817 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32305_GM;
MethodInfo m32305_MI = 
{
	"set_Item", NULL, &t6019_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t2817, t6019_m32305_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32305_GM};
static MethodInfo* t6019_MIs[] =
{
	&m32306_MI,
	&m32307_MI,
	&m32308_MI,
	&m32304_MI,
	&m32305_MI,
	NULL
};
static TypeInfo* t6019_ITIs[] = 
{
	&t739_TI,
	&t6018_TI,
	&t6020_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6019_0_0_0;
extern Il2CppType t6019_1_0_0;
struct t6019;
extern Il2CppGenericClass t6019_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6019_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6019_MIs, t6019_PIs, NULL, NULL, NULL, NULL, NULL, &t6019_TI, t6019_ITIs, NULL, &t2240__CustomAttributeCache, &t6019_TI, &t6019_0_0_0, &t6019_1_0_0, NULL, &t6019_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IDictionary`2<JewelMine.Engine.JewelType,UnityEngine.GameObject>
extern Il2CppType t19_0_0_0;
static ParameterInfo t7586_m32309_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t19_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32309_GM;
MethodInfo m32309_MI = 
{
	"Remove", NULL, &t7586_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7586_m32309_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32309_GM};
static MethodInfo* t7586_MIs[] =
{
	&m32309_MI,
	NULL
};
static TypeInfo* t7586_ITIs[] = 
{
	&t739_TI,
	&t6018_TI,
	&t6020_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7586_0_0_0;
extern Il2CppType t7586_1_0_0;
struct t7586;
extern Il2CppGenericClass t7586_GC;
extern CustomAttributesCache t2307__CustomAttributeCache;
TypeInfo t7586_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionary`2", "System.Collections.Generic", t7586_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7586_TI, t7586_ITIs, NULL, &t2307__CustomAttributeCache, &t7586_TI, &t7586_0_0_0, &t7586_1_0_0, NULL, &t7586_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif

#include "t491.h"
#include "t2821.h"
#include "t2822.h"
extern TypeInfo t491_TI;
extern TypeInfo t2821_TI;
extern TypeInfo t2822_TI;
#include "t491MD.h"
#include "t2822MD.h"
#include "t2821MD.h"
extern MethodInfo m11151_MI;
extern MethodInfo m4780_MI;
extern MethodInfo m14810_MI;
extern MethodInfo m14809_MI;
extern MethodInfo m14829_MI;
extern MethodInfo m24721_MI;
extern MethodInfo m24722_MI;
extern MethodInfo m14812_MI;
struct t104;
 void m24721 (t104 * __this, t107 * p0, int32_t p1, t2822 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t104;
 void m24722 (t104 * __this, t199* p0, int32_t p1, t2822 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;


 void m14798 (t2815 * __this, t104 * p0, MethodInfo* method){
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
extern MethodInfo m14799_MI;
 void m14799 (t2815 * __this, t69 * p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral1216, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m14800_MI;
 void m14800 (t2815 * __this, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral1216, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m14801_MI;
 bool m14801 (t2815 * __this, t69 * p0, MethodInfo* method){
	{
		t104 * L_0 = (__this->f0);
		bool L_1 = m14776(L_0, p0, &m14776_MI);
		return L_1;
	}
}
extern MethodInfo m14802_MI;
 bool m14802 (t2815 * __this, t69 * p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral1216, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m14803_MI;
 t5* m14803 (t2815 * __this, MethodInfo* method){
	{
		t2821  L_0 = m14810(__this, &m14810_MI);
		t2821  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t2821_TI), &L_1);
		return (t5*)L_2;
	}
}
extern MethodInfo m14804_MI;
 void m14804 (t2815 * __this, t107 * p0, int32_t p1, MethodInfo* method){
	t199* V_0 = {0};
	{
		V_0 = ((t199*)IsInst(p0, InitializedTypeInfo(&t199_TI)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker2< t199*, int32_t >::Invoke(&m14809_MI, __this, V_0, p1);
		return;
	}

IL_0013:
	{
		t104 * L_0 = (__this->f0);
		m14769(L_0, p0, p1, &m14769_MI);
		t104 * L_1 = (__this->f0);
		t124 L_2 = { &m14771_MI };
		t2822 * L_3 = (t2822 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2822_TI));
		m14829(L_3, NULL, L_2, &m14829_MI);
		m24721(L_1, p0, p1, L_3, &m24721_MI);
		return;
	}
}
extern MethodInfo m14805_MI;
 t5 * m14805 (t2815 * __this, MethodInfo* method){
	{
		t2821  L_0 = m14810(__this, &m14810_MI);
		t2821  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t2821_TI), &L_1);
		return (t5 *)L_2;
	}
}
extern MethodInfo m14806_MI;
 bool m14806 (t2815 * __this, MethodInfo* method){
	{
		return 1;
	}
}
extern MethodInfo m14807_MI;
 bool m14807 (t2815 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m14808_MI;
 t5 * m14808 (t2815 * __this, MethodInfo* method){
	{
		t104 * L_0 = (__this->f0);
		t5 * L_1 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m11151_MI, L_0);
		return L_1;
	}
}
 void m14809 (t2815 * __this, t199* p0, int32_t p1, MethodInfo* method){
	{
		t104 * L_0 = (__this->f0);
		m14769(L_0, (t107 *)(t107 *)p0, p1, &m14769_MI);
		t104 * L_1 = (__this->f0);
		t124 L_2 = { &m14771_MI };
		t2822 * L_3 = (t2822 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2822_TI));
		m14829(L_3, NULL, L_2, &m14829_MI);
		m24722(L_1, p0, p1, L_3, &m24722_MI);
		return;
	}
}
 t2821  m14810 (t2815 * __this, MethodInfo* method){
	{
		t104 * L_0 = (__this->f0);
		t2821  L_1 = {0};
		m14812(&L_1, L_0, &m14812_MI);
		return L_1;
	}
}
extern MethodInfo m14811_MI;
 int32_t m14811 (t2815 * __this, MethodInfo* method){
	{
		t104 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m14765_MI, L_0);
		return L_1;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection<JewelMine.Engine.JewelType,UnityEngine.GameObject>
extern Il2CppType t104_0_0_1;
FieldInfo t2815_f0_FieldInfo = 
{
	"dictionary", &t104_0_0_1, &t2815_TI, offsetof(t2815, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2815_FIs[] =
{
	&t2815_f0_FieldInfo,
	NULL
};
static PropertyInfo t2815____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo = 
{
	&t2815_TI, "System.Collections.Generic.ICollection<TValue>.IsReadOnly", &m14806_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2815____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2815_TI, "System.Collections.ICollection.IsSynchronized", &m14807_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2815____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2815_TI, "System.Collections.ICollection.SyncRoot", &m14808_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2815____Count_PropertyInfo = 
{
	&t2815_TI, "Count", &m14811_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2815_PIs[] =
{
	&t2815____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo,
	&t2815____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2815____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2815____Count_PropertyInfo,
	NULL
};
extern Il2CppType t104_0_0_0;
static ParameterInfo t2815_m14798_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t104_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14798_GM;
MethodInfo m14798_MI = 
{
	".ctor", (methodPointerType)&m14798, &t2815_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2815_m14798_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14798_GM};
extern Il2CppType t69_0_0_0;
static ParameterInfo t2815_m14799_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t69_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14799_GM;
MethodInfo m14799_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Add", (methodPointerType)&m14799, &t2815_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2815_m14799_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14799_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14800_GM;
MethodInfo m14800_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Clear", (methodPointerType)&m14800, &t2815_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 481, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14800_GM};
extern Il2CppType t69_0_0_0;
static ParameterInfo t2815_m14801_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t69_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14801_GM;
MethodInfo m14801_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Contains", (methodPointerType)&m14801, &t2815_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2815_m14801_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14801_GM};
extern Il2CppType t69_0_0_0;
static ParameterInfo t2815_m14802_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t69_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14802_GM;
MethodInfo m14802_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Remove", (methodPointerType)&m14802, &t2815_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2815_m14802_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14802_GM};
extern Il2CppType t2709_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14803_GM;
MethodInfo m14803_MI = 
{
	"System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", (methodPointerType)&m14803, &t2815_TI, &t2709_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14803_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2815_m14804_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14804_GM;
MethodInfo m14804_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m14804, &t2815_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2815_m14804_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14804_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14805_GM;
MethodInfo m14805_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m14805, &t2815_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14805_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14806_GM;
MethodInfo m14806_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.get_IsReadOnly", (methodPointerType)&m14806, &t2815_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14806_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14807_GM;
MethodInfo m14807_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m14807, &t2815_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14807_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14808_GM;
MethodInfo m14808_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m14808, &t2815_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14808_GM};
extern Il2CppType t199_0_0_0;
extern Il2CppType t199_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2815_m14809_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t199_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14809_GM;
MethodInfo m14809_MI = 
{
	"CopyTo", (methodPointerType)&m14809, &t2815_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2815_m14809_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14809_GM};
extern Il2CppType t2821_0_0_0;
extern void* RuntimeInvoker_t2821 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14810_GM;
MethodInfo m14810_MI = 
{
	"GetEnumerator", (methodPointerType)&m14810, &t2815_TI, &t2821_0_0_0, RuntimeInvoker_t2821, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14810_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14811_GM;
MethodInfo m14811_MI = 
{
	"get_Count", (methodPointerType)&m14811, &t2815_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14811_GM};
static MethodInfo* t2815_MIs[] =
{
	&m14798_MI,
	&m14799_MI,
	&m14800_MI,
	&m14801_MI,
	&m14802_MI,
	&m14803_MI,
	&m14804_MI,
	&m14805_MI,
	&m14806_MI,
	&m14807_MI,
	&m14808_MI,
	&m14809_MI,
	&m14810_MI,
	&m14811_MI,
	NULL
};
static MethodInfo* t2815_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14805_MI,
	&m14811_MI,
	&m14807_MI,
	&m14808_MI,
	&m14804_MI,
	&m14811_MI,
	&m14806_MI,
	&m14799_MI,
	&m14800_MI,
	&m14801_MI,
	&m14809_MI,
	&m14802_MI,
	&m14803_MI,
};
extern TypeInfo t2710_TI;
extern TypeInfo t2708_TI;
static TypeInfo* t2815_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t2710_TI,
	&t2708_TI,
};
static Il2CppInterfaceOffsetPair t2815_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t2710_TI, 9},
	{ &t2708_TI, 16},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2815_0_0_0;
extern Il2CppType t2815_1_0_0;
struct t2815;
extern Il2CppGenericClass t2815_GC;
extern TypeInfo t1517_TI;
extern CustomAttributesCache t1515__CustomAttributeCache;
TypeInfo t2815_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ValueCollection", "", t2815_MIs, t2815_PIs, t2815_FIs, NULL, &t5_TI, NULL, &t1517_TI, &t2815_TI, t2815_ITIs, t2815_VT, &t1515__CustomAttributeCache, &t2815_TI, &t2815_0_0_0, &t2815_1_0_0, t2815_IOs, &t2815_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2815), 0, -1, 0, 0, -1, 1057026, 0, false, false, false, false, true, false, false, false, false, false, false, false, 14, 4, 1, 0, 0, 17, 4, 4};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m14825_MI;
extern MethodInfo m14828_MI;
extern MethodInfo m14822_MI;


 void m14812 (t2821 * __this, t104 * p0, MethodInfo* method){
	{
		t2819  L_0 = m14785(p0, &m14785_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m14813_MI;
 t5 * m14813 (t2821 * __this, MethodInfo* method){
	{
		t2819 * L_0 = &(__this->f0);
		t69 * L_1 = m14825(L_0, &m14825_MI);
		t69 * L_2 = L_1;
		return ((t69 *)L_2);
	}
}
extern MethodInfo m14814_MI;
 void m14814 (t2821 * __this, MethodInfo* method){
	{
		t2819 * L_0 = &(__this->f0);
		m14828(L_0, &m14828_MI);
		return;
	}
}
extern MethodInfo m14815_MI;
 bool m14815 (t2821 * __this, MethodInfo* method){
	{
		t2819 * L_0 = &(__this->f0);
		bool L_1 = m14822(L_0, &m14822_MI);
		return L_1;
	}
}
extern MethodInfo m14816_MI;
 t69 * m14816 (t2821 * __this, MethodInfo* method){
	{
		t2819 * L_0 = &(__this->f0);
		t2817 * L_1 = &(L_0->f3);
		t69 * L_2 = m14790(L_1, &m14790_MI);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<JewelMine.Engine.JewelType,UnityEngine.GameObject>
extern Il2CppType t2819_0_0_1;
FieldInfo t2821_f0_FieldInfo = 
{
	"host_enumerator", &t2819_0_0_1, &t2821_TI, offsetof(t2821, f0) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2821_FIs[] =
{
	&t2821_f0_FieldInfo,
	NULL
};
static PropertyInfo t2821____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2821_TI, "System.Collections.IEnumerator.Current", &m14813_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2821____Current_PropertyInfo = 
{
	&t2821_TI, "Current", &m14816_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2821_PIs[] =
{
	&t2821____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2821____Current_PropertyInfo,
	NULL
};
extern Il2CppType t104_0_0_0;
static ParameterInfo t2821_m14812_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t104_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14812_GM;
MethodInfo m14812_MI = 
{
	".ctor", (methodPointerType)&m14812, &t2821_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2821_m14812_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14812_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14813_GM;
MethodInfo m14813_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14813, &t2821_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14813_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14814_GM;
MethodInfo m14814_MI = 
{
	"Dispose", (methodPointerType)&m14814, &t2821_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14814_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14815_GM;
MethodInfo m14815_MI = 
{
	"MoveNext", (methodPointerType)&m14815, &t2821_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14815_GM};
extern Il2CppType t69_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14816_GM;
MethodInfo m14816_MI = 
{
	"get_Current", (methodPointerType)&m14816, &t2821_TI, &t69_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14816_GM};
static MethodInfo* t2821_MIs[] =
{
	&m14812_MI,
	&m14813_MI,
	&m14814_MI,
	&m14815_MI,
	&m14816_MI,
	NULL
};
static MethodInfo* t2821_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m14813_MI,
	&m14815_MI,
	&m14814_MI,
	&m14816_MI,
};
extern TypeInfo t2709_TI;
static TypeInfo* t2821_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t2709_TI,
};
static Il2CppInterfaceOffsetPair t2821_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t2709_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2821_0_0_0;
extern Il2CppType t2821_1_0_0;
extern Il2CppGenericClass t2821_GC;
extern TypeInfo t1515_TI;
TypeInfo t2821_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2821_MIs, t2821_PIs, t2821_FIs, NULL, &t267_TI, NULL, &t1515_TI, &t2821_TI, t2821_ITIs, t2821_VT, &EmptyCustomAttributesCache, &t2821_TI, &t2821_0_0_0, &t2821_1_0_0, t2821_IOs, &t2821_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2821)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif

#include "t1363.h"
extern TypeInfo t1363_TI;
#include "t1363MD.h"
extern MethodInfo m14827_MI;
extern MethodInfo m14824_MI;
extern MethodInfo m14826_MI;
extern MethodInfo m5942_MI;


 void m14817 (t2819 * __this, t104 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		int32_t L_0 = (p0->f14);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m14818_MI;
 t5 * m14818 (t2819 * __this, MethodInfo* method){
	{
		m14827(__this, &m14827_MI);
		t2817  L_0 = (__this->f3);
		t2817  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t2817_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14819_MI;
 t990  m14819 (t2819 * __this, MethodInfo* method){
	{
		m14827(__this, &m14827_MI);
		t2817 * L_0 = &(__this->f3);
		int32_t L_1 = m14788(L_0, &m14788_MI);
		int32_t L_2 = L_1;
		t5 * L_3 = Box(InitializedTypeInfo(&t19_TI), &L_2);
		t2817 * L_4 = &(__this->f3);
		t69 * L_5 = m14790(L_4, &m14790_MI);
		t69 * L_6 = L_5;
		t990  L_7 = {0};
		m4759(&L_7, L_3, ((t69 *)L_6), &m4759_MI);
		return L_7;
	}
}
extern MethodInfo m14820_MI;
 t5 * m14820 (t2819 * __this, MethodInfo* method){
	{
		int32_t L_0 = m14824(__this, &m14824_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t19_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14821_MI;
 t5 * m14821 (t2819 * __this, MethodInfo* method){
	{
		t69 * L_0 = m14825(__this, &m14825_MI);
		t69 * L_1 = L_0;
		return ((t69 *)L_1);
	}
}
 bool m14822 (t2819 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		m14826(__this, &m14826_MI);
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
		t104 * L_3 = (__this->f0);
		t2297* L_4 = (L_3->f5);
		int32_t L_5 = (((t1511 *)(t1511 *)SZArrayLdElema(L_4, V_0))->f0);
		if (!((int32_t)((int32_t)L_5&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		t104 * L_6 = (__this->f0);
		t46* L_7 = (L_6->f6);
		int32_t L_8 = V_0;
		t104 * L_9 = (__this->f0);
		t199* L_10 = (L_9->f7);
		int32_t L_11 = V_0;
		t2817  L_12 = {0};
		m14787(&L_12, (*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_8)), (*(t69 **)(t69 **)SZArrayLdElema(L_10, L_11)), &m14787_MI);
		__this->f3 = L_12;
		return 1;
	}

IL_0072:
	{
		int32_t L_13 = (__this->f1);
		t104 * L_14 = (__this->f0);
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
extern MethodInfo m14823_MI;
 t2817  m14823 (t2819 * __this, MethodInfo* method){
	{
		t2817  L_0 = (__this->f3);
		return L_0;
	}
}
 int32_t m14824 (t2819 * __this, MethodInfo* method){
	{
		m14827(__this, &m14827_MI);
		t2817 * L_0 = &(__this->f3);
		int32_t L_1 = m14788(L_0, &m14788_MI);
		return L_1;
	}
}
 t69 * m14825 (t2819 * __this, MethodInfo* method){
	{
		m14827(__this, &m14827_MI);
		t2817 * L_0 = &(__this->f3);
		t69 * L_1 = m14790(L_0, &m14790_MI);
		return L_1;
	}
}
 void m14826 (t2819 * __this, MethodInfo* method){
	{
		t104 * L_0 = (__this->f0);
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
		t104 * L_2 = (__this->f0);
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
 void m14827 (t2819 * __this, MethodInfo* method){
	{
		m14826(__this, &m14826_MI);
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
 void m14828 (t2819 * __this, MethodInfo* method){
	{
		__this->f0 = (t104 *)NULL;
		return;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Enumerator<JewelMine.Engine.JewelType,UnityEngine.GameObject>
extern Il2CppType t104_0_0_1;
FieldInfo t2819_f0_FieldInfo = 
{
	"dictionary", &t104_0_0_1, &t2819_TI, offsetof(t2819, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2819_f1_FieldInfo = 
{
	"next", &t110_0_0_1, &t2819_TI, offsetof(t2819, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2819_f2_FieldInfo = 
{
	"stamp", &t110_0_0_1, &t2819_TI, offsetof(t2819, f2) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t2817_0_0_3;
FieldInfo t2819_f3_FieldInfo = 
{
	"current", &t2817_0_0_3, &t2819_TI, offsetof(t2819, f3) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2819_FIs[] =
{
	&t2819_f0_FieldInfo,
	&t2819_f1_FieldInfo,
	&t2819_f2_FieldInfo,
	&t2819_f3_FieldInfo,
	NULL
};
static PropertyInfo t2819____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2819_TI, "System.Collections.IEnumerator.Current", &m14818_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2819____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo = 
{
	&t2819_TI, "System.Collections.IDictionaryEnumerator.Entry", &m14819_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2819____System_Collections_IDictionaryEnumerator_Key_PropertyInfo = 
{
	&t2819_TI, "System.Collections.IDictionaryEnumerator.Key", &m14820_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2819____System_Collections_IDictionaryEnumerator_Value_PropertyInfo = 
{
	&t2819_TI, "System.Collections.IDictionaryEnumerator.Value", &m14821_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2819____Current_PropertyInfo = 
{
	&t2819_TI, "Current", &m14823_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2819____CurrentKey_PropertyInfo = 
{
	&t2819_TI, "CurrentKey", &m14824_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2819____CurrentValue_PropertyInfo = 
{
	&t2819_TI, "CurrentValue", &m14825_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2819_PIs[] =
{
	&t2819____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2819____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo,
	&t2819____System_Collections_IDictionaryEnumerator_Key_PropertyInfo,
	&t2819____System_Collections_IDictionaryEnumerator_Value_PropertyInfo,
	&t2819____Current_PropertyInfo,
	&t2819____CurrentKey_PropertyInfo,
	&t2819____CurrentValue_PropertyInfo,
	NULL
};
extern Il2CppType t104_0_0_0;
static ParameterInfo t2819_m14817_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t104_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14817_GM;
MethodInfo m14817_MI = 
{
	".ctor", (methodPointerType)&m14817, &t2819_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2819_m14817_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14817_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14818_GM;
MethodInfo m14818_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14818, &t2819_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14818_GM};
extern Il2CppType t990_0_0_0;
extern void* RuntimeInvoker_t990 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14819_GM;
MethodInfo m14819_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Entry", (methodPointerType)&m14819, &t2819_TI, &t990_0_0_0, RuntimeInvoker_t990, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14819_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14820_GM;
MethodInfo m14820_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Key", (methodPointerType)&m14820, &t2819_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14820_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14821_GM;
MethodInfo m14821_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Value", (methodPointerType)&m14821, &t2819_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14821_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14822_GM;
MethodInfo m14822_MI = 
{
	"MoveNext", (methodPointerType)&m14822, &t2819_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14822_GM};
extern Il2CppType t2817_0_0_0;
extern void* RuntimeInvoker_t2817 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14823_GM;
MethodInfo m14823_MI = 
{
	"get_Current", (methodPointerType)&m14823, &t2819_TI, &t2817_0_0_0, RuntimeInvoker_t2817, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14823_GM};
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14824_GM;
MethodInfo m14824_MI = 
{
	"get_CurrentKey", (methodPointerType)&m14824, &t2819_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14824_GM};
extern Il2CppType t69_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14825_GM;
MethodInfo m14825_MI = 
{
	"get_CurrentValue", (methodPointerType)&m14825, &t2819_TI, &t69_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14825_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14826_GM;
MethodInfo m14826_MI = 
{
	"VerifyState", (methodPointerType)&m14826, &t2819_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14826_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14827_GM;
MethodInfo m14827_MI = 
{
	"VerifyCurrent", (methodPointerType)&m14827, &t2819_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14827_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14828_GM;
MethodInfo m14828_MI = 
{
	"Dispose", (methodPointerType)&m14828, &t2819_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14828_GM};
static MethodInfo* t2819_MIs[] =
{
	&m14817_MI,
	&m14818_MI,
	&m14819_MI,
	&m14820_MI,
	&m14821_MI,
	&m14822_MI,
	&m14823_MI,
	&m14824_MI,
	&m14825_MI,
	&m14826_MI,
	&m14827_MI,
	&m14828_MI,
	NULL
};
static MethodInfo* t2819_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m14818_MI,
	&m14822_MI,
	&m14828_MI,
	&m14823_MI,
	&m14819_MI,
	&m14820_MI,
	&m14821_MI,
};
extern TypeInfo t987_TI;
static TypeInfo* t2819_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t2818_TI,
	&t987_TI,
};
static Il2CppInterfaceOffsetPair t2819_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t2818_TI, 7},
	{ &t987_TI, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2819_0_0_0;
extern Il2CppType t2819_1_0_0;
extern Il2CppGenericClass t2819_GC;
TypeInfo t2819_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2819_MIs, t2819_PIs, t2819_FIs, NULL, &t267_TI, NULL, &t1517_TI, &t2819_TI, t2819_ITIs, t2819_VT, &EmptyCustomAttributesCache, &t2819_TI, &t2819_0_0_0, &t2819_1_0_0, t2819_IOs, &t2819_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2819)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, true, false, false, false, false, false, false, false, 12, 7, 4, 0, 0, 11, 4, 4};
#ifndef _MSC_VER
#else
#endif



 void m14829 (t2822 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m14830_MI;
 t69 * m14830 (t2822 * __this, int32_t p0, t69 * p1, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m14830((t2822 *)__this->f9,p0, p1, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t69 * (*FunctionPointerType) (t5 *, t5 * __this, int32_t p0, t69 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	typedef t69 * (*FunctionPointerType) (t5 * __this, int32_t p0, t69 * p1, MethodInfo* method);
	return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m14831_MI;
 t5 * m14831 (t2822 * __this, int32_t p0, t69 * p1, t222 * p2, t5 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t19_TI), &p0);
	__d_args[1] = p1;
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m14832_MI;
 t69 * m14832 (t2822 * __this, t5 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t69 *)__result;
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<JewelMine.Engine.JewelType,UnityEngine.GameObject,UnityEngine.GameObject>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2822_m14829_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14829_GM;
MethodInfo m14829_MI = 
{
	".ctor", (methodPointerType)&m14829, &t2822_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2822_m14829_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14829_GM};
extern Il2CppType t19_0_0_0;
extern Il2CppType t69_0_0_0;
static ParameterInfo t2822_m14830_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t19_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t69_0_0_0},
};
extern Il2CppType t69_0_0_0;
extern void* RuntimeInvoker_t5_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14830_GM;
MethodInfo m14830_MI = 
{
	"Invoke", (methodPointerType)&m14830, &t2822_TI, &t69_0_0_0, RuntimeInvoker_t5_t110_t5, t2822_m14830_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14830_GM};
extern Il2CppType t19_0_0_0;
extern Il2CppType t69_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2822_m14831_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t19_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t69_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t110_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14831_GM;
MethodInfo m14831_MI = 
{
	"BeginInvoke", (methodPointerType)&m14831, &t2822_TI, &t221_0_0_0, RuntimeInvoker_t5_t110_t5_t5_t5, t2822_m14831_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL, &m14831_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2822_m14832_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t69_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14832_GM;
MethodInfo m14832_MI = 
{
	"EndInvoke", (methodPointerType)&m14832, &t2822_TI, &t69_0_0_0, RuntimeInvoker_t5_t5, t2822_m14832_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14832_GM};
static MethodInfo* t2822_MIs[] =
{
	&m14829_MI,
	&m14830_MI,
	&m14831_MI,
	&m14832_MI,
	NULL
};
static MethodInfo* t2822_VT[] =
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
	&m14830_MI,
	&m14831_MI,
	&m14832_MI,
};
static Il2CppInterfaceOffsetPair t2822_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2822_0_0_0;
extern Il2CppType t2822_1_0_0;
struct t2822;
extern Il2CppGenericClass t2822_GC;
TypeInfo t2822_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2822_MIs, NULL, NULL, NULL, &t353_TI, NULL, &t1517_TI, &t2822_TI, NULL, t2822_VT, &EmptyCustomAttributesCache, &t2822_TI, &t2822_0_0_0, &t2822_1_0_0, t2822_IOs, &t2822_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2822), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif



 void m14833 (t2814 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m14834_MI;
 t990  m14834 (t2814 * __this, int32_t p0, t69 * p1, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m14834((t2814 *)__this->f9,p0, p1, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t990  (*FunctionPointerType) (t5 *, t5 * __this, int32_t p0, t69 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	typedef t990  (*FunctionPointerType) (t5 * __this, int32_t p0, t69 * p1, MethodInfo* method);
	return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m14835_MI;
 t5 * m14835 (t2814 * __this, int32_t p0, t69 * p1, t222 * p2, t5 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t19_TI), &p0);
	__d_args[1] = p1;
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m14836_MI;
 t990  m14836 (t2814 * __this, t5 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t990 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<JewelMine.Engine.JewelType,UnityEngine.GameObject,System.Collections.DictionaryEntry>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2814_m14833_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14833_GM;
MethodInfo m14833_MI = 
{
	".ctor", (methodPointerType)&m14833, &t2814_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2814_m14833_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14833_GM};
extern Il2CppType t19_0_0_0;
extern Il2CppType t69_0_0_0;
static ParameterInfo t2814_m14834_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t19_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t69_0_0_0},
};
extern Il2CppType t990_0_0_0;
extern void* RuntimeInvoker_t990_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14834_GM;
MethodInfo m14834_MI = 
{
	"Invoke", (methodPointerType)&m14834, &t2814_TI, &t990_0_0_0, RuntimeInvoker_t990_t110_t5, t2814_m14834_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14834_GM};
extern Il2CppType t19_0_0_0;
extern Il2CppType t69_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2814_m14835_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t19_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t69_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t110_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14835_GM;
MethodInfo m14835_MI = 
{
	"BeginInvoke", (methodPointerType)&m14835, &t2814_TI, &t221_0_0_0, RuntimeInvoker_t5_t110_t5_t5_t5, t2814_m14835_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL, &m14835_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2814_m14836_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t990_0_0_0;
extern void* RuntimeInvoker_t990_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14836_GM;
MethodInfo m14836_MI = 
{
	"EndInvoke", (methodPointerType)&m14836, &t2814_TI, &t990_0_0_0, RuntimeInvoker_t990_t5, t2814_m14836_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14836_GM};
static MethodInfo* t2814_MIs[] =
{
	&m14833_MI,
	&m14834_MI,
	&m14835_MI,
	&m14836_MI,
	NULL
};
static MethodInfo* t2814_VT[] =
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
	&m14834_MI,
	&m14835_MI,
	&m14836_MI,
};
static Il2CppInterfaceOffsetPair t2814_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2814_0_0_0;
extern Il2CppType t2814_1_0_0;
struct t2814;
extern Il2CppGenericClass t2814_GC;
TypeInfo t2814_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2814_MIs, NULL, NULL, NULL, &t353_TI, NULL, &t1517_TI, &t2814_TI, NULL, t2814_VT, &EmptyCustomAttributesCache, &t2814_TI, &t2814_0_0_0, &t2814_1_0_0, t2814_IOs, &t2814_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2814), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif



 void m14837 (t2823 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m14838_MI;
 t2817  m14838 (t2823 * __this, int32_t p0, t69 * p1, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m14838((t2823 *)__this->f9,p0, p1, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t2817  (*FunctionPointerType) (t5 *, t5 * __this, int32_t p0, t69 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	typedef t2817  (*FunctionPointerType) (t5 * __this, int32_t p0, t69 * p1, MethodInfo* method);
	return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m14839_MI;
 t5 * m14839 (t2823 * __this, int32_t p0, t69 * p1, t222 * p2, t5 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t19_TI), &p0);
	__d_args[1] = p1;
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m14840_MI;
 t2817  m14840 (t2823 * __this, t5 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t2817 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<JewelMine.Engine.JewelType,UnityEngine.GameObject,System.Collections.Generic.KeyValuePair`2<JewelMine.Engine.JewelType,UnityEngine.GameObject>>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2823_m14837_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14837_GM;
MethodInfo m14837_MI = 
{
	".ctor", (methodPointerType)&m14837, &t2823_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2823_m14837_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14837_GM};
extern Il2CppType t19_0_0_0;
extern Il2CppType t69_0_0_0;
static ParameterInfo t2823_m14838_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t19_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t69_0_0_0},
};
extern Il2CppType t2817_0_0_0;
extern void* RuntimeInvoker_t2817_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14838_GM;
MethodInfo m14838_MI = 
{
	"Invoke", (methodPointerType)&m14838, &t2823_TI, &t2817_0_0_0, RuntimeInvoker_t2817_t110_t5, t2823_m14838_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14838_GM};
extern Il2CppType t19_0_0_0;
extern Il2CppType t69_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2823_m14839_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t19_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t69_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t110_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14839_GM;
MethodInfo m14839_MI = 
{
	"BeginInvoke", (methodPointerType)&m14839, &t2823_TI, &t221_0_0_0, RuntimeInvoker_t5_t110_t5_t5_t5, t2823_m14839_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL, &m14839_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2823_m14840_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t2817_0_0_0;
extern void* RuntimeInvoker_t2817_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14840_GM;
MethodInfo m14840_MI = 
{
	"EndInvoke", (methodPointerType)&m14840, &t2823_TI, &t2817_0_0_0, RuntimeInvoker_t2817_t5, t2823_m14840_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14840_GM};
static MethodInfo* t2823_MIs[] =
{
	&m14837_MI,
	&m14838_MI,
	&m14839_MI,
	&m14840_MI,
	NULL
};
static MethodInfo* t2823_VT[] =
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
	&m14838_MI,
	&m14839_MI,
	&m14840_MI,
};
static Il2CppInterfaceOffsetPair t2823_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2823_0_0_0;
extern Il2CppType t2823_1_0_0;
struct t2823;
extern Il2CppGenericClass t2823_GC;
TypeInfo t2823_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2823_MIs, NULL, NULL, NULL, &t353_TI, NULL, &t1517_TI, &t2823_TI, NULL, t2823_VT, &EmptyCustomAttributesCache, &t2823_TI, &t2823_0_0_0, &t2823_1_0_0, t2823_IOs, &t2823_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2823), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m11460_MI;
extern MethodInfo m14843_MI;


 void m14841 (t2824 * __this, t104 * p0, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		t2819  L_0 = m14785(p0, &m14785_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m14842_MI;
 bool m14842 (t2824 * __this, MethodInfo* method){
	{
		t2819 * L_0 = &(__this->f0);
		bool L_1 = m14822(L_0, &m14822_MI);
		return L_1;
	}
}
 t990  m14843 (t2824 * __this, MethodInfo* method){
	{
		t2819  L_0 = (__this->f0);
		t2819  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t2819_TI), &L_1);
		t990  L_3 = (t990 )InterfaceFuncInvoker0< t990  >::Invoke(&m11460_MI, L_2);
		return L_3;
	}
}
extern MethodInfo m14844_MI;
 t5 * m14844 (t2824 * __this, MethodInfo* method){
	t2817  V_0 = {0};
	{
		t2819 * L_0 = &(__this->f0);
		t2817  L_1 = m14823(L_0, &m14823_MI);
		V_0 = L_1;
		int32_t L_2 = m14788((&V_0), &m14788_MI);
		int32_t L_3 = L_2;
		t5 * L_4 = Box(InitializedTypeInfo(&t19_TI), &L_3);
		return L_4;
	}
}
extern MethodInfo m14845_MI;
 t5 * m14845 (t2824 * __this, MethodInfo* method){
	t2817  V_0 = {0};
	{
		t2819 * L_0 = &(__this->f0);
		t2817  L_1 = m14823(L_0, &m14823_MI);
		V_0 = L_1;
		t69 * L_2 = m14790((&V_0), &m14790_MI);
		t69 * L_3 = L_2;
		return ((t69 *)L_3);
	}
}
extern MethodInfo m14846_MI;
 t5 * m14846 (t2824 * __this, MethodInfo* method){
	{
		t990  L_0 = (t990 )VirtFuncInvoker0< t990  >::Invoke(&m14843_MI, __this);
		t990  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t990_TI), &L_1);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ShimEnumerator<JewelMine.Engine.JewelType,UnityEngine.GameObject>
extern Il2CppType t2819_0_0_1;
FieldInfo t2824_f0_FieldInfo = 
{
	"host_enumerator", &t2819_0_0_1, &t2824_TI, offsetof(t2824, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2824_FIs[] =
{
	&t2824_f0_FieldInfo,
	NULL
};
static PropertyInfo t2824____Entry_PropertyInfo = 
{
	&t2824_TI, "Entry", &m14843_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2824____Key_PropertyInfo = 
{
	&t2824_TI, "Key", &m14844_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2824____Value_PropertyInfo = 
{
	&t2824_TI, "Value", &m14845_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2824____Current_PropertyInfo = 
{
	&t2824_TI, "Current", &m14846_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2824_PIs[] =
{
	&t2824____Entry_PropertyInfo,
	&t2824____Key_PropertyInfo,
	&t2824____Value_PropertyInfo,
	&t2824____Current_PropertyInfo,
	NULL
};
extern Il2CppType t104_0_0_0;
static ParameterInfo t2824_m14841_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t104_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14841_GM;
MethodInfo m14841_MI = 
{
	".ctor", (methodPointerType)&m14841, &t2824_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2824_m14841_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14841_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14842_GM;
MethodInfo m14842_MI = 
{
	"MoveNext", (methodPointerType)&m14842, &t2824_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14842_GM};
extern Il2CppType t990_0_0_0;
extern void* RuntimeInvoker_t990 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14843_GM;
MethodInfo m14843_MI = 
{
	"get_Entry", (methodPointerType)&m14843, &t2824_TI, &t990_0_0_0, RuntimeInvoker_t990, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14843_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14844_GM;
MethodInfo m14844_MI = 
{
	"get_Key", (methodPointerType)&m14844, &t2824_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14844_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14845_GM;
MethodInfo m14845_MI = 
{
	"get_Value", (methodPointerType)&m14845, &t2824_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14845_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14846_GM;
MethodInfo m14846_MI = 
{
	"get_Current", (methodPointerType)&m14846, &t2824_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14846_GM};
static MethodInfo* t2824_MIs[] =
{
	&m14841_MI,
	&m14842_MI,
	&m14843_MI,
	&m14844_MI,
	&m14845_MI,
	&m14846_MI,
	NULL
};
static MethodInfo* t2824_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14846_MI,
	&m14842_MI,
	&m14843_MI,
	&m14844_MI,
	&m14845_MI,
};
static TypeInfo* t2824_ITIs[] = 
{
	&t196_TI,
	&t987_TI,
};
static Il2CppInterfaceOffsetPair t2824_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t987_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2824_0_0_0;
extern Il2CppType t2824_1_0_0;
struct t2824;
extern Il2CppGenericClass t2824_GC;
TypeInfo t2824_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ShimEnumerator", "", t2824_MIs, t2824_PIs, t2824_FIs, NULL, &t5_TI, NULL, &t1517_TI, &t2824_TI, t2824_ITIs, t2824_VT, &EmptyCustomAttributesCache, &t2824_TI, &t2824_0_0_0, &t2824_1_0_0, t2824_IOs, &t2824_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2824), 0, -1, 0, 0, -1, 1056771, 0, false, false, false, false, true, false, false, false, false, false, false, false, 6, 4, 1, 0, 0, 9, 2, 2};
#include "t106.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t106_TI;
#include "t106MD.h"

#include "t74.h"


extern MethodInfo m740_MI;
 void m740 (t106 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m14847_MI;
 bool m14847 (t106 * __this, t74 * p0, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m14847((t106 *)__this->f9,p0, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t5 *, t5 * __this, t74 * p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t5 * __this, t74 * p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (t5 * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern MethodInfo m14848_MI;
 t5 * m14848 (t106 * __this, t74 * p0, t222 * p1, t5 * p2, MethodInfo* method){
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m14849_MI;
 bool m14849 (t106 * __this, t5 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Func`2<JewelMine.Engine.Models.JewelMovement,System.Boolean>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t106_m740_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m740_GM;
MethodInfo m740_MI = 
{
	".ctor", (methodPointerType)&m740, &t106_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t106_m740_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m740_GM};
extern Il2CppType t74_0_0_0;
extern Il2CppType t74_0_0_0;
static ParameterInfo t106_m14847_ParameterInfos[] = 
{
	{"arg1", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14847_GM;
MethodInfo m14847_MI = 
{
	"Invoke", (methodPointerType)&m14847, &t106_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t106_m14847_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14847_GM};
extern Il2CppType t74_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t106_m14848_ParameterInfos[] = 
{
	{"arg1", 0, 134217728, &EmptyCustomAttributesCache, &t74_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14848_GM;
MethodInfo m14848_MI = 
{
	"BeginInvoke", (methodPointerType)&m14848, &t106_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t106_m14848_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m14848_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t106_m14849_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14849_GM;
MethodInfo m14849_MI = 
{
	"EndInvoke", (methodPointerType)&m14849, &t106_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t106_m14849_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14849_GM};
static MethodInfo* t106_MIs[] =
{
	&m740_MI,
	&m14847_MI,
	&m14848_MI,
	&m14849_MI,
	NULL
};
static MethodInfo* t106_VT[] =
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
	&m14847_MI,
	&m14848_MI,
	&m14849_MI,
};
static Il2CppInterfaceOffsetPair t106_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t106_0_0_0;
extern Il2CppType t106_1_0_0;
struct t106;
extern Il2CppGenericClass t106_GC;
TypeInfo t106_TI = 
{
	&g_System_Core_dll_Image, NULL, "Func`2", "System", t106_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t106_TI, NULL, t106_VT, &EmptyCustomAttributesCache, &t106_TI, &t106_0_0_0, &t106_1_0_0, t106_IOs, &t106_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t106), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2825.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2825_TI;
#include "t2825MD.h"

#include "t490.h"
extern TypeInfo t74_TI;
extern TypeInfo t195_TI;
extern TypeInfo t194_TI;
#include "t1927MD.h"
extern MethodInfo m14854_MI;
extern MethodInfo m10031_MI;
extern MethodInfo m14850_MI;
extern MethodInfo m742_MI;
extern MethodInfo m743_MI;
extern MethodInfo m746_MI;
extern MethodInfo m516_MI;


// Metadata Definition System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<JewelMine.Engine.Models.JewelMovement>
extern Il2CppType t194_0_0_3;
FieldInfo t2825_f0_FieldInfo = 
{
	"source", &t194_0_0_3, &t2825_TI, offsetof(t2825, f0), &EmptyCustomAttributesCache};
extern Il2CppType t195_0_0_3;
FieldInfo t2825_f1_FieldInfo = 
{
	"<$s_97>__0", &t195_0_0_3, &t2825_TI, offsetof(t2825, f1), &EmptyCustomAttributesCache};
extern Il2CppType t74_0_0_3;
FieldInfo t2825_f2_FieldInfo = 
{
	"<element>__1", &t74_0_0_3, &t2825_TI, offsetof(t2825, f2), &EmptyCustomAttributesCache};
extern Il2CppType t106_0_0_3;
FieldInfo t2825_f3_FieldInfo = 
{
	"predicate", &t106_0_0_3, &t2825_TI, offsetof(t2825, f3), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_3;
FieldInfo t2825_f4_FieldInfo = 
{
	"$PC", &t110_0_0_3, &t2825_TI, offsetof(t2825, f4), &EmptyCustomAttributesCache};
extern Il2CppType t74_0_0_3;
FieldInfo t2825_f5_FieldInfo = 
{
	"$current", &t74_0_0_3, &t2825_TI, offsetof(t2825, f5), &EmptyCustomAttributesCache};
extern Il2CppType t194_0_0_3;
FieldInfo t2825_f6_FieldInfo = 
{
	"<$>source", &t194_0_0_3, &t2825_TI, offsetof(t2825, f6), &EmptyCustomAttributesCache};
extern Il2CppType t106_0_0_3;
FieldInfo t2825_f7_FieldInfo = 
{
	"<$>predicate", &t106_0_0_3, &t2825_TI, offsetof(t2825, f7), &EmptyCustomAttributesCache};
static FieldInfo* t2825_FIs[] =
{
	&t2825_f0_FieldInfo,
	&t2825_f1_FieldInfo,
	&t2825_f2_FieldInfo,
	&t2825_f3_FieldInfo,
	&t2825_f4_FieldInfo,
	&t2825_f5_FieldInfo,
	&t2825_f6_FieldInfo,
	&t2825_f7_FieldInfo,
	NULL
};
extern MethodInfo m14851_MI;
static PropertyInfo t2825____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo = 
{
	&t2825_TI, "System.Collections.Generic.IEnumerator<TSource>.Current", &m14851_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14852_MI;
static PropertyInfo t2825____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2825_TI, "System.Collections.IEnumerator.Current", &m14852_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2825_PIs[] =
{
	&t2825____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo,
	&t2825____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14850_GM;
MethodInfo m14850_MI = 
{
	".ctor", (methodPointerType)&m13242_gshared, &t2825_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14850_GM};
extern Il2CppType t74_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t834__CustomAttributeCache_m3738;
extern Il2CppGenericMethod m14851_GM;
MethodInfo m14851_MI = 
{
	"System.Collections.Generic.IEnumerator<TSource>.get_Current", (methodPointerType)&m13243_gshared, &t2825_TI, &t74_0_0_0, RuntimeInvoker_t5, NULL, &t834__CustomAttributeCache_m3738, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14851_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t834__CustomAttributeCache_m3739;
extern Il2CppGenericMethod m14852_GM;
MethodInfo m14852_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13244_gshared, &t2825_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &t834__CustomAttributeCache_m3739, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14852_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t834__CustomAttributeCache_m3740;
extern Il2CppGenericMethod m14853_GM;
MethodInfo m14853_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m13245_gshared, &t2825_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &t834__CustomAttributeCache_m3740, 481, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14853_GM};
extern Il2CppType t195_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t834__CustomAttributeCache_m3741;
extern Il2CppGenericMethod m14854_GM;
MethodInfo m14854_MI = 
{
	"System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", (methodPointerType)&m13246_gshared, &t2825_TI, &t195_0_0_0, RuntimeInvoker_t5, NULL, &t834__CustomAttributeCache_m3741, 481, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14854_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14855_GM;
MethodInfo m14855_MI = 
{
	"MoveNext", (methodPointerType)&m13247_gshared, &t2825_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14855_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t834__CustomAttributeCache_m3743;
extern Il2CppGenericMethod m14856_GM;
MethodInfo m14856_MI = 
{
	"Dispose", (methodPointerType)&m13248_gshared, &t2825_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &t834__CustomAttributeCache_m3743, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14856_GM};
static MethodInfo* t2825_MIs[] =
{
	&m14850_MI,
	&m14851_MI,
	&m14852_MI,
	&m14853_MI,
	&m14854_MI,
	&m14855_MI,
	&m14856_MI,
	NULL
};
extern MethodInfo m14855_MI;
extern MethodInfo m14856_MI;
extern MethodInfo m14853_MI;
static MethodInfo* t2825_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14852_MI,
	&m14855_MI,
	&m14856_MI,
	&m14853_MI,
	&m14854_MI,
	&m14851_MI,
};
static TypeInfo* t2825_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t739_TI,
	&t194_TI,
	&t195_TI,
};
static Il2CppInterfaceOffsetPair t2825_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t739_TI, 7},
	{ &t194_TI, 8},
	{ &t195_TI, 9},
};
extern TypeInfo t74_TI;
extern TypeInfo t2825_TI;
static Il2CppRGCTXData t2825_RGCTXData[7] = 
{
	&t74_TI/* Class Usage */,
	&m14854_MI/* Method Usage */,
	&t2825_TI/* Class Usage */,
	&m14850_MI/* Method Usage */,
	&m742_MI/* Method Usage */,
	&m743_MI/* Method Usage */,
	&m14847_MI/* Method Usage */,
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t2825_0_0_0;
extern Il2CppType t2825_1_0_0;
struct t2825;
extern Il2CppGenericClass t2825_GC;
extern TypeInfo t125_TI;
extern CustomAttributesCache t834__CustomAttributeCache;
extern CustomAttributesCache t834__CustomAttributeCache_m3738;
extern CustomAttributesCache t834__CustomAttributeCache_m3739;
extern CustomAttributesCache t834__CustomAttributeCache_m3740;
extern CustomAttributesCache t834__CustomAttributeCache_m3741;
extern CustomAttributesCache t834__CustomAttributeCache_m3743;
TypeInfo t2825_TI = 
{
	&g_System_Core_dll_Image, NULL, "<CreateWhereIterator>c__Iterator1D`1", "", t2825_MIs, t2825_PIs, t2825_FIs, NULL, &t5_TI, NULL, &t125_TI, &t2825_TI, t2825_ITIs, t2825_VT, &t834__CustomAttributeCache, &t2825_TI, &t2825_0_0_0, &t2825_1_0_0, t2825_IOs, &t2825_GC, NULL, NULL, NULL, t2825_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2825), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 8, 0, 0, 10, 5, 5};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4779_TI;

#include "t203.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.EventHandle>
extern MethodInfo m32310_MI;
static PropertyInfo t4779____Current_PropertyInfo = 
{
	&t4779_TI, "Current", &m32310_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4779_PIs[] =
{
	&t4779____Current_PropertyInfo,
	NULL
};
extern Il2CppType t203_0_0_0;
extern void* RuntimeInvoker_t203 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32310_GM;
MethodInfo m32310_MI = 
{
	"get_Current", NULL, &t4779_TI, &t203_0_0_0, RuntimeInvoker_t203, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32310_GM};
static MethodInfo* t4779_MIs[] =
{
	&m32310_MI,
	NULL
};
static TypeInfo* t4779_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4779_0_0_0;
extern Il2CppType t4779_1_0_0;
struct t4779;
extern Il2CppGenericClass t4779_GC;
TypeInfo t4779_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4779_MIs, t4779_PIs, NULL, NULL, NULL, NULL, NULL, &t4779_TI, t4779_ITIs, NULL, &EmptyCustomAttributesCache, &t4779_TI, &t4779_0_0_0, &t4779_1_0_0, NULL, &t4779_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2826.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2826_TI;
#include "t2826MD.h"

extern TypeInfo t203_TI;
extern MethodInfo m14861_MI;
extern MethodInfo m24736_MI;
struct t107;
 int32_t m24736 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m14857_MI;
 void m14857 (t2826 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14858_MI;
 t5 * m14858 (t2826 * __this, MethodInfo* method){
	{
		int32_t L_0 = m14861(__this, &m14861_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t203_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14859_MI;
 void m14859 (t2826 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14860_MI;
 bool m14860 (t2826 * __this, MethodInfo* method){
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
 int32_t m14861 (t2826 * __this, MethodInfo* method){
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
		int32_t L_8 = m24736(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m24736_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.EventHandle>
extern Il2CppType t107_0_0_1;
FieldInfo t2826_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t2826_TI, offsetof(t2826, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2826_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2826_TI, offsetof(t2826, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2826_FIs[] =
{
	&t2826_f0_FieldInfo,
	&t2826_f1_FieldInfo,
	NULL
};
static PropertyInfo t2826____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2826_TI, "System.Collections.IEnumerator.Current", &m14858_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2826____Current_PropertyInfo = 
{
	&t2826_TI, "Current", &m14861_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2826_PIs[] =
{
	&t2826____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2826____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t2826_m14857_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14857_GM;
MethodInfo m14857_MI = 
{
	".ctor", (methodPointerType)&m14857, &t2826_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2826_m14857_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14857_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14858_GM;
MethodInfo m14858_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14858, &t2826_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14858_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14859_GM;
MethodInfo m14859_MI = 
{
	"Dispose", (methodPointerType)&m14859, &t2826_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14859_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14860_GM;
MethodInfo m14860_MI = 
{
	"MoveNext", (methodPointerType)&m14860, &t2826_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14860_GM};
extern Il2CppType t203_0_0_0;
extern void* RuntimeInvoker_t203 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14861_GM;
MethodInfo m14861_MI = 
{
	"get_Current", (methodPointerType)&m14861, &t2826_TI, &t203_0_0_0, RuntimeInvoker_t203, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14861_GM};
static MethodInfo* t2826_MIs[] =
{
	&m14857_MI,
	&m14858_MI,
	&m14859_MI,
	&m14860_MI,
	&m14861_MI,
	NULL
};
static MethodInfo* t2826_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m14858_MI,
	&m14860_MI,
	&m14859_MI,
	&m14861_MI,
};
static TypeInfo* t2826_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t4779_TI,
};
static Il2CppInterfaceOffsetPair t2826_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t4779_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2826_0_0_0;
extern Il2CppType t2826_1_0_0;
extern Il2CppGenericClass t2826_GC;
TypeInfo t2826_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2826_MIs, t2826_PIs, t2826_FIs, NULL, &t267_TI, NULL, &t107_TI, &t2826_TI, t2826_ITIs, t2826_VT, &EmptyCustomAttributesCache, &t2826_TI, &t2826_0_0_0, &t2826_1_0_0, t2826_IOs, &t2826_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2826)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6021_TI;

#include "UnityEngine.UI_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventHandle>
extern MethodInfo m32311_MI;
static PropertyInfo t6021____Count_PropertyInfo = 
{
	&t6021_TI, "Count", &m32311_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m32312_MI;
static PropertyInfo t6021____IsReadOnly_PropertyInfo = 
{
	&t6021_TI, "IsReadOnly", &m32312_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6021_PIs[] =
{
	&t6021____Count_PropertyInfo,
	&t6021____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32311_GM;
MethodInfo m32311_MI = 
{
	"get_Count", NULL, &t6021_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32311_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32312_GM;
MethodInfo m32312_MI = 
{
	"get_IsReadOnly", NULL, &t6021_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32312_GM};
extern Il2CppType t203_0_0_0;
extern Il2CppType t203_0_0_0;
static ParameterInfo t6021_m32313_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t203_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32313_GM;
MethodInfo m32313_MI = 
{
	"Add", NULL, &t6021_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6021_m32313_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32313_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32314_GM;
MethodInfo m32314_MI = 
{
	"Clear", NULL, &t6021_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32314_GM};
extern Il2CppType t203_0_0_0;
static ParameterInfo t6021_m32315_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t203_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32315_GM;
MethodInfo m32315_MI = 
{
	"Contains", NULL, &t6021_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6021_m32315_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32315_GM};
extern Il2CppType t4479_0_0_0;
extern Il2CppType t4479_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6021_m32316_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4479_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32316_GM;
MethodInfo m32316_MI = 
{
	"CopyTo", NULL, &t6021_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6021_m32316_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32316_GM};
extern Il2CppType t203_0_0_0;
static ParameterInfo t6021_m32317_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t203_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32317_GM;
MethodInfo m32317_MI = 
{
	"Remove", NULL, &t6021_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6021_m32317_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32317_GM};
static MethodInfo* t6021_MIs[] =
{
	&m32311_MI,
	&m32312_MI,
	&m32313_MI,
	&m32314_MI,
	&m32315_MI,
	&m32316_MI,
	&m32317_MI,
	NULL
};
extern TypeInfo t6023_TI;
static TypeInfo* t6021_ITIs[] = 
{
	&t739_TI,
	&t6023_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6021_0_0_0;
extern Il2CppType t6021_1_0_0;
struct t6021;
extern Il2CppGenericClass t6021_GC;
TypeInfo t6021_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6021_MIs, t6021_PIs, NULL, NULL, NULL, NULL, NULL, &t6021_TI, t6021_ITIs, NULL, &EmptyCustomAttributesCache, &t6021_TI, &t6021_0_0_0, &t6021_1_0_0, NULL, &t6021_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.EventHandle>
extern Il2CppType t4779_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32318_GM;
MethodInfo m32318_MI = 
{
	"GetEnumerator", NULL, &t6023_TI, &t4779_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32318_GM};
static MethodInfo* t6023_MIs[] =
{
	&m32318_MI,
	NULL
};
static TypeInfo* t6023_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6023_0_0_0;
extern Il2CppType t6023_1_0_0;
struct t6023;
extern Il2CppGenericClass t6023_GC;
TypeInfo t6023_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6023_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6023_TI, t6023_ITIs, NULL, &EmptyCustomAttributesCache, &t6023_TI, &t6023_0_0_0, &t6023_1_0_0, NULL, &t6023_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6022_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.EventHandle>
extern MethodInfo m32319_MI;
extern MethodInfo m32320_MI;
static PropertyInfo t6022____Item_PropertyInfo = 
{
	&t6022_TI, "Item", &m32319_MI, &m32320_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6022_PIs[] =
{
	&t6022____Item_PropertyInfo,
	NULL
};
extern Il2CppType t203_0_0_0;
static ParameterInfo t6022_m32321_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t203_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32321_GM;
MethodInfo m32321_MI = 
{
	"IndexOf", NULL, &t6022_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6022_m32321_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32321_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t203_0_0_0;
static ParameterInfo t6022_m32322_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t203_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32322_GM;
MethodInfo m32322_MI = 
{
	"Insert", NULL, &t6022_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6022_m32322_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32322_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6022_m32323_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32323_GM;
MethodInfo m32323_MI = 
{
	"RemoveAt", NULL, &t6022_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6022_m32323_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32323_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6022_m32319_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t203_0_0_0;
extern void* RuntimeInvoker_t203_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32319_GM;
MethodInfo m32319_MI = 
{
	"get_Item", NULL, &t6022_TI, &t203_0_0_0, RuntimeInvoker_t203_t110, t6022_m32319_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32319_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t203_0_0_0;
static ParameterInfo t6022_m32320_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t203_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32320_GM;
MethodInfo m32320_MI = 
{
	"set_Item", NULL, &t6022_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6022_m32320_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32320_GM};
static MethodInfo* t6022_MIs[] =
{
	&m32321_MI,
	&m32322_MI,
	&m32323_MI,
	&m32319_MI,
	&m32320_MI,
	NULL
};
static TypeInfo* t6022_ITIs[] = 
{
	&t739_TI,
	&t6021_TI,
	&t6023_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6022_0_0_0;
extern Il2CppType t6022_1_0_0;
struct t6022;
extern Il2CppGenericClass t6022_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6022_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6022_MIs, t6022_PIs, NULL, NULL, NULL, NULL, NULL, &t6022_TI, t6022_ITIs, NULL, &t2240__CustomAttributeCache, &t6022_TI, &t6022_0_0_0, &t6022_1_0_0, NULL, &t6022_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4781_TI;

#include "t204.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.EventSystem>
extern MethodInfo m32324_MI;
static PropertyInfo t4781____Current_PropertyInfo = 
{
	&t4781_TI, "Current", &m32324_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4781_PIs[] =
{
	&t4781____Current_PropertyInfo,
	NULL
};
extern Il2CppType t204_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32324_GM;
MethodInfo m32324_MI = 
{
	"get_Current", NULL, &t4781_TI, &t204_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32324_GM};
static MethodInfo* t4781_MIs[] =
{
	&m32324_MI,
	NULL
};
static TypeInfo* t4781_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4781_0_0_0;
extern Il2CppType t4781_1_0_0;
struct t4781;
extern Il2CppGenericClass t4781_GC;
TypeInfo t4781_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4781_MIs, t4781_PIs, NULL, NULL, NULL, NULL, NULL, &t4781_TI, t4781_ITIs, NULL, &EmptyCustomAttributesCache, &t4781_TI, &t4781_0_0_0, &t4781_1_0_0, NULL, &t4781_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2827.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2827_TI;
#include "t2827MD.h"

extern TypeInfo t204_TI;
extern MethodInfo m14866_MI;
extern MethodInfo m24747_MI;
struct t107;
struct t107;
 t5 * m23596_gshared (t107 * __this, int32_t p0, MethodInfo* method);
#define m23596(__this, p0, method) (t5 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
#define m24747(__this, p0, method) (t204 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.EventSystem>
extern Il2CppType t107_0_0_1;
FieldInfo t2827_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t2827_TI, offsetof(t2827, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2827_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2827_TI, offsetof(t2827, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2827_FIs[] =
{
	&t2827_f0_FieldInfo,
	&t2827_f1_FieldInfo,
	NULL
};
extern MethodInfo m14863_MI;
static PropertyInfo t2827____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2827_TI, "System.Collections.IEnumerator.Current", &m14863_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2827____Current_PropertyInfo = 
{
	&t2827_TI, "Current", &m14866_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2827_PIs[] =
{
	&t2827____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2827____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t2827_m14862_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14862_GM;
MethodInfo m14862_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t2827_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2827_m14862_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14862_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14863_GM;
MethodInfo m14863_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t2827_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14863_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14864_GM;
MethodInfo m14864_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t2827_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14864_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14865_GM;
MethodInfo m14865_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t2827_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14865_GM};
extern Il2CppType t204_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14866_GM;
MethodInfo m14866_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t2827_TI, &t204_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14866_GM};
static MethodInfo* t2827_MIs[] =
{
	&m14862_MI,
	&m14863_MI,
	&m14864_MI,
	&m14865_MI,
	&m14866_MI,
	NULL
};
extern MethodInfo m14865_MI;
extern MethodInfo m14864_MI;
static MethodInfo* t2827_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m14863_MI,
	&m14865_MI,
	&m14864_MI,
	&m14866_MI,
};
static TypeInfo* t2827_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t4781_TI,
};
static Il2CppInterfaceOffsetPair t2827_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t4781_TI, 7},
};
extern TypeInfo t204_TI;
static Il2CppRGCTXData t2827_RGCTXData[3] = 
{
	&m14866_MI/* Method Usage */,
	&t204_TI/* Class Usage */,
	&m24747_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2827_0_0_0;
extern Il2CppType t2827_1_0_0;
extern Il2CppGenericClass t2827_GC;
TypeInfo t2827_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2827_MIs, t2827_PIs, t2827_FIs, NULL, &t267_TI, NULL, &t107_TI, &t2827_TI, t2827_ITIs, t2827_VT, &EmptyCustomAttributesCache, &t2827_TI, &t2827_0_0_0, &t2827_1_0_0, t2827_IOs, &t2827_GC, NULL, NULL, NULL, t2827_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2827)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6024_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventSystem>
extern MethodInfo m32325_MI;
static PropertyInfo t6024____Count_PropertyInfo = 
{
	&t6024_TI, "Count", &m32325_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m32326_MI;
static PropertyInfo t6024____IsReadOnly_PropertyInfo = 
{
	&t6024_TI, "IsReadOnly", &m32326_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6024_PIs[] =
{
	&t6024____Count_PropertyInfo,
	&t6024____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32325_GM;
MethodInfo m32325_MI = 
{
	"get_Count", NULL, &t6024_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32325_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32326_GM;
MethodInfo m32326_MI = 
{
	"get_IsReadOnly", NULL, &t6024_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32326_GM};
extern Il2CppType t204_0_0_0;
extern Il2CppType t204_0_0_0;
static ParameterInfo t6024_m32327_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t204_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32327_GM;
MethodInfo m32327_MI = 
{
	"Add", NULL, &t6024_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6024_m32327_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32327_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32328_GM;
MethodInfo m32328_MI = 
{
	"Clear", NULL, &t6024_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32328_GM};
extern Il2CppType t204_0_0_0;
static ParameterInfo t6024_m32329_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t204_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32329_GM;
MethodInfo m32329_MI = 
{
	"Contains", NULL, &t6024_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6024_m32329_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32329_GM};
extern Il2CppType t4480_0_0_0;
extern Il2CppType t4480_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6024_m32330_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4480_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32330_GM;
MethodInfo m32330_MI = 
{
	"CopyTo", NULL, &t6024_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6024_m32330_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32330_GM};
extern Il2CppType t204_0_0_0;
static ParameterInfo t6024_m32331_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t204_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32331_GM;
MethodInfo m32331_MI = 
{
	"Remove", NULL, &t6024_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6024_m32331_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32331_GM};
static MethodInfo* t6024_MIs[] =
{
	&m32325_MI,
	&m32326_MI,
	&m32327_MI,
	&m32328_MI,
	&m32329_MI,
	&m32330_MI,
	&m32331_MI,
	NULL
};
extern TypeInfo t6026_TI;
static TypeInfo* t6024_ITIs[] = 
{
	&t739_TI,
	&t6026_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6024_0_0_0;
extern Il2CppType t6024_1_0_0;
struct t6024;
extern Il2CppGenericClass t6024_GC;
TypeInfo t6024_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6024_MIs, t6024_PIs, NULL, NULL, NULL, NULL, NULL, &t6024_TI, t6024_ITIs, NULL, &EmptyCustomAttributesCache, &t6024_TI, &t6024_0_0_0, &t6024_1_0_0, NULL, &t6024_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.EventSystem>
extern Il2CppType t4781_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32332_GM;
MethodInfo m32332_MI = 
{
	"GetEnumerator", NULL, &t6026_TI, &t4781_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32332_GM};
static MethodInfo* t6026_MIs[] =
{
	&m32332_MI,
	NULL
};
static TypeInfo* t6026_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6026_0_0_0;
extern Il2CppType t6026_1_0_0;
struct t6026;
extern Il2CppGenericClass t6026_GC;
TypeInfo t6026_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6026_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6026_TI, t6026_ITIs, NULL, &EmptyCustomAttributesCache, &t6026_TI, &t6026_0_0_0, &t6026_1_0_0, NULL, &t6026_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6025_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.EventSystem>
extern MethodInfo m32333_MI;
extern MethodInfo m32334_MI;
static PropertyInfo t6025____Item_PropertyInfo = 
{
	&t6025_TI, "Item", &m32333_MI, &m32334_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6025_PIs[] =
{
	&t6025____Item_PropertyInfo,
	NULL
};
extern Il2CppType t204_0_0_0;
static ParameterInfo t6025_m32335_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t204_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32335_GM;
MethodInfo m32335_MI = 
{
	"IndexOf", NULL, &t6025_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6025_m32335_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32335_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t204_0_0_0;
static ParameterInfo t6025_m32336_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t204_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32336_GM;
MethodInfo m32336_MI = 
{
	"Insert", NULL, &t6025_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6025_m32336_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32336_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6025_m32337_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32337_GM;
MethodInfo m32337_MI = 
{
	"RemoveAt", NULL, &t6025_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6025_m32337_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32337_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6025_m32333_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t204_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32333_GM;
MethodInfo m32333_MI = 
{
	"get_Item", NULL, &t6025_TI, &t204_0_0_0, RuntimeInvoker_t5_t110, t6025_m32333_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32333_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t204_0_0_0;
static ParameterInfo t6025_m32334_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t204_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32334_GM;
MethodInfo m32334_MI = 
{
	"set_Item", NULL, &t6025_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6025_m32334_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32334_GM};
static MethodInfo* t6025_MIs[] =
{
	&m32335_MI,
	&m32336_MI,
	&m32337_MI,
	&m32333_MI,
	&m32334_MI,
	NULL
};
static TypeInfo* t6025_ITIs[] = 
{
	&t739_TI,
	&t6024_TI,
	&t6026_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6025_0_0_0;
extern Il2CppType t6025_1_0_0;
struct t6025;
extern Il2CppGenericClass t6025_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6025_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6025_MIs, t6025_PIs, NULL, NULL, NULL, NULL, NULL, &t6025_TI, t6025_ITIs, NULL, &t2240__CustomAttributeCache, &t6025_TI, &t6025_0_0_0, &t6025_1_0_0, NULL, &t6025_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2828.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2828_TI;
#include "t2828MD.h"

#include "t2829.h"
extern TypeInfo t2829_TI;
#include "t2829MD.h"
extern MethodInfo m14869_MI;
extern MethodInfo m14871_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.EventSystems.EventSystem>
extern Il2CppType t168_0_0_33;
FieldInfo t2828_f1_FieldInfo = 
{
	"m_Arg1", &t168_0_0_33, &t2828_TI, offsetof(t2828, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2828_FIs[] =
{
	&t2828_f1_FieldInfo,
	NULL
};
extern Il2CppType t117_0_0_0;
extern Il2CppType t695_0_0_0;
extern Il2CppType t204_0_0_0;
static ParameterInfo t2828_m14867_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t117_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t204_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14867_GM;
MethodInfo m14867_MI = 
{
	".ctor", (methodPointerType)&m12070_gshared, &t2828_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t5, t2828_m14867_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL, &m14867_GM};
extern Il2CppType t168_0_0_0;
static ParameterInfo t2828_m14868_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14868_GM;
MethodInfo m14868_MI = 
{
	"Invoke", (methodPointerType)&m12072_gshared, &t2828_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2828_m14868_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14868_GM};
static MethodInfo* t2828_MIs[] =
{
	&m14867_MI,
	&m14868_MI,
	NULL
};
extern MethodInfo m14868_MI;
extern MethodInfo m14872_MI;
static MethodInfo* t2828_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14868_MI,
	&m14872_MI,
};
extern Il2CppType t2830_0_0_0;
extern TypeInfo t2830_TI;
extern MethodInfo m24757_MI;
extern TypeInfo t204_TI;
extern MethodInfo m14874_MI;
extern TypeInfo t204_TI;
static Il2CppRGCTXData t2828_RGCTXData[8] = 
{
	&t2830_0_0_0/* Type Usage */,
	&t2830_TI/* Class Usage */,
	&m24757_MI/* Method Usage */,
	&t204_TI/* Class Usage */,
	&m14874_MI/* Method Usage */,
	&m14869_MI/* Method Usage */,
	&t204_TI/* Class Usage */,
	&m14871_MI/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2828_0_0_0;
extern Il2CppType t2828_1_0_0;
struct t2828;
extern Il2CppGenericClass t2828_GC;
TypeInfo t2828_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2828_MIs, NULL, t2828_FIs, NULL, &t2829_TI, NULL, NULL, &t2828_TI, NULL, t2828_VT, &EmptyCustomAttributesCache, &t2828_TI, &t2828_0_0_0, &t2828_1_0_0, NULL, &t2828_GC, NULL, NULL, NULL, t2828_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2828), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif

#include "t2830.h"
extern TypeInfo t2830_TI;
#include "t2830MD.h"
struct t694;
#define m24757(__this, p0, method) (void)m23910_gshared((t5 *)__this, (t5 *)p0, method)


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.EventSystem>
extern Il2CppType t2830_0_0_1;
FieldInfo t2829_f0_FieldInfo = 
{
	"Delegate", &t2830_0_0_1, &t2829_TI, offsetof(t2829, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2829_FIs[] =
{
	&t2829_f0_FieldInfo,
	NULL
};
extern Il2CppType t5_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t2829_m14869_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14869_GM;
MethodInfo m14869_MI = 
{
	".ctor", (methodPointerType)&m12073_gshared, &t2829_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t2829_m14869_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14869_GM};
extern Il2CppType t2830_0_0_0;
static ParameterInfo t2829_m14870_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14870_GM;
MethodInfo m14870_MI = 
{
	".ctor", (methodPointerType)&m12074_gshared, &t2829_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2829_m14870_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14870_GM};
extern Il2CppType t168_0_0_0;
static ParameterInfo t2829_m14871_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14871_GM;
MethodInfo m14871_MI = 
{
	"Invoke", (methodPointerType)&m12075_gshared, &t2829_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2829_m14871_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14871_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t2829_m14872_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14872_GM;
MethodInfo m14872_MI = 
{
	"Find", (methodPointerType)&m12076_gshared, &t2829_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2829_m14872_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14872_GM};
static MethodInfo* t2829_MIs[] =
{
	&m14869_MI,
	&m14870_MI,
	&m14871_MI,
	&m14872_MI,
	NULL
};
static MethodInfo* t2829_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14871_MI,
	&m14872_MI,
};
extern TypeInfo t2830_TI;
extern TypeInfo t204_TI;
static Il2CppRGCTXData t2829_RGCTXData[5] = 
{
	&t2830_0_0_0/* Type Usage */,
	&t2830_TI/* Class Usage */,
	&m24757_MI/* Method Usage */,
	&t204_TI/* Class Usage */,
	&m14874_MI/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2829_0_0_0;
extern Il2CppType t2829_1_0_0;
struct t2829;
extern Il2CppGenericClass t2829_GC;
TypeInfo t2829_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2829_MIs, NULL, t2829_FIs, NULL, &t694_TI, NULL, NULL, &t2829_TI, NULL, t2829_VT, &EmptyCustomAttributesCache, &t2829_TI, &t2829_0_0_0, &t2829_1_0_0, NULL, &t2829_GC, NULL, NULL, NULL, t2829_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2829), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.EventSystem>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2830_m14873_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14873_GM;
MethodInfo m14873_MI = 
{
	".ctor", (methodPointerType)&m12077_gshared, &t2830_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2830_m14873_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14873_GM};
extern Il2CppType t204_0_0_0;
static ParameterInfo t2830_m14874_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t204_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14874_GM;
MethodInfo m14874_MI = 
{
	"Invoke", (methodPointerType)&m12078_gshared, &t2830_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2830_m14874_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14874_GM};
extern Il2CppType t204_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2830_m14875_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t204_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14875_GM;
MethodInfo m14875_MI = 
{
	"BeginInvoke", (methodPointerType)&m12079_gshared, &t2830_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t2830_m14875_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m14875_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2830_m14876_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14876_GM;
MethodInfo m14876_MI = 
{
	"EndInvoke", (methodPointerType)&m12080_gshared, &t2830_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2830_m14876_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14876_GM};
static MethodInfo* t2830_MIs[] =
{
	&m14873_MI,
	&m14874_MI,
	&m14875_MI,
	&m14876_MI,
	NULL
};
extern MethodInfo m14875_MI;
extern MethodInfo m14876_MI;
static MethodInfo* t2830_VT[] =
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
	&m14874_MI,
	&m14875_MI,
	&m14876_MI,
};
static Il2CppInterfaceOffsetPair t2830_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2830_1_0_0;
struct t2830;
extern Il2CppGenericClass t2830_GC;
TypeInfo t2830_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2830_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t2830_TI, NULL, t2830_VT, &EmptyCustomAttributesCache, &t2830_TI, &t2830_0_0_0, &t2830_1_0_0, t2830_IOs, &t2830_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2830), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t205.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t205_TI;
#include "t205MD.h"

#include "t206.h"
#include "t2839.h"
#include "t2835.h"
#include "t2836.h"
#include "t2837.h"
#include "t2845.h"
#include "t2838.h"
extern TypeInfo t206_TI;
extern TypeInfo t723_TI;
extern TypeInfo t1982_TI;
extern TypeInfo t2834_TI;
extern TypeInfo t2831_TI;
extern TypeInfo t2839_TI;
extern TypeInfo t2832_TI;
extern TypeInfo t2833_TI;
extern TypeInfo t2835_TI;
extern TypeInfo t2836_TI;
extern TypeInfo t2837_TI;
extern TypeInfo t2845_TI;
#include "t166MD.h"
#include "t2835MD.h"
#include "t2836MD.h"
#include "t2837MD.h"
#include "t2839MD.h"
#include "t2845MD.h"
extern MethodInfo m1953_MI;
extern MethodInfo m14923_MI;
extern MethodInfo m4991_MI;
extern MethodInfo m24770_MI;
extern MethodInfo m14911_MI;
extern MethodInfo m14913_MI;
extern MethodInfo m14898_MI;
extern MethodInfo m32338_MI;
extern MethodInfo m14897_MI;
extern MethodInfo m14908_MI;
extern MethodInfo m14895_MI;
extern MethodInfo m14902_MI;
extern MethodInfo m14909_MI;
extern MethodInfo m14912_MI;
extern MethodInfo m14914_MI;
extern MethodInfo m14896_MI;
extern MethodInfo m14921_MI;
extern MethodInfo m5931_MI;
extern MethodInfo m14922_MI;
extern MethodInfo m32339_MI;
extern MethodInfo m32340_MI;
extern MethodInfo m32341_MI;
extern MethodInfo m14935_MI;
extern MethodInfo m24772_MI;
extern MethodInfo m14905_MI;
extern MethodInfo m14906_MI;
extern MethodInfo m15010_MI;
extern MethodInfo m15014_MI;
extern MethodInfo m14929_MI;
extern MethodInfo m14910_MI;
extern MethodInfo m1955_MI;
extern MethodInfo m5963_MI;
extern MethodInfo m15020_MI;
extern MethodInfo m24774_MI;
extern MethodInfo m24782_MI;
extern MethodInfo m6740_MI;
struct t107;
struct t107;
 void m23607_gshared (t5 * __this, t168** p0, int32_t p1, MethodInfo* method);
#define m23607(__this, p0, p1, method) (void)m23607_gshared((t5 *)__this, (t168**)p0, (int32_t)p1, method)
#define m24770(__this, p0, p1, method) (void)m23607_gshared((t5 *)__this, (t168**)p0, (int32_t)p1, method)
struct t107;
#include "t2843.h"
struct t107;
#include "t2334.h"
 int32_t m11458_gshared (t5 * __this, t168* p0, t5 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m11458(__this, p0, p1, p2, p3, method) (int32_t)m11458_gshared((t5 *)__this, (t168*)p0, (t5 *)p1, (int32_t)p2, (int32_t)p3, method)
#define m24772(__this, p0, p1, p2, p3, method) (int32_t)m11458_gshared((t5 *)__this, (t168*)p0, (t5 *)p1, (int32_t)p2, (int32_t)p3, method)
struct t107;
struct t107;
 void m23676_gshared (t5 * __this, t168* p0, int32_t p1, int32_t p2, t5* p3, MethodInfo* method);
#define m23676(__this, p0, p1, p2, p3, method) (void)m23676_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (int32_t)p2, (t5*)p3, method)
#define m24774(__this, p0, p1, p2, p3, method) (void)m23676_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (int32_t)p2, (t5*)p3, method)
struct t107;
struct t107;
#include "t2458.h"
 void m23827_gshared (t5 * __this, t168* p0, int32_t p1, t2458 * p2, MethodInfo* method);
#define m23827(__this, p0, p1, p2, method) (void)m23827_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (t2458 *)p2, method)
#define m24782(__this, p0, p1, p2, method) (void)m23827_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (t2458 *)p2, method)


 t2839  m14908 (t205 * __this, MethodInfo* method){
	{
		t2839  L_0 = {0};
		m14929(&L_0, __this, &m14929_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t110_0_0_32849;
FieldInfo t205_f0_FieldInfo = 
{
	"DefaultCapacity", &t110_0_0_32849, &t205_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2831_0_0_1;
FieldInfo t205_f1_FieldInfo = 
{
	"_items", &t2831_0_0_1, &t205_TI, offsetof(t205, f1), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t205_f2_FieldInfo = 
{
	"_size", &t110_0_0_1, &t205_TI, offsetof(t205, f2), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t205_f3_FieldInfo = 
{
	"_version", &t110_0_0_1, &t205_TI, offsetof(t205, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2831_0_0_49;
FieldInfo t205_f4_FieldInfo = 
{
	"EmptyArray", &t2831_0_0_49, &t205_TI, offsetof(t205_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t205_FIs[] =
{
	&t205_f0_FieldInfo,
	&t205_f1_FieldInfo,
	&t205_f2_FieldInfo,
	&t205_f3_FieldInfo,
	&t205_f4_FieldInfo,
	NULL
};
static const int32_t t205_f0_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t205_f0_DefaultValue = 
{
	&t205_f0_FieldInfo, { (char*)&t205_f0_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t205_FDVs[] = 
{
	&t205_f0_DefaultValue,
	NULL
};
extern MethodInfo m14888_MI;
static PropertyInfo t205____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t205_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m14888_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14889_MI;
static PropertyInfo t205____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t205_TI, "System.Collections.ICollection.IsSynchronized", &m14889_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14890_MI;
static PropertyInfo t205____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t205_TI, "System.Collections.ICollection.SyncRoot", &m14890_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14891_MI;
static PropertyInfo t205____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t205_TI, "System.Collections.IList.IsFixedSize", &m14891_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14892_MI;
static PropertyInfo t205____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t205_TI, "System.Collections.IList.IsReadOnly", &m14892_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14893_MI;
extern MethodInfo m14894_MI;
static PropertyInfo t205____System_Collections_IList_Item_PropertyInfo = 
{
	&t205_TI, "System.Collections.IList.Item", &m14893_MI, &m14894_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t205____Capacity_PropertyInfo = 
{
	&t205_TI, "Capacity", &m14921_MI, &m14922_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1952_MI;
static PropertyInfo t205____Count_PropertyInfo = 
{
	&t205_TI, "Count", &m1952_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t205____Item_PropertyInfo = 
{
	&t205_TI, "Item", &m1953_MI, &m14923_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t205_PIs[] =
{
	&t205____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t205____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t205____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t205____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t205____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t205____System_Collections_IList_Item_PropertyInfo,
	&t205____Capacity_PropertyInfo,
	&t205____Count_PropertyInfo,
	&t205____Item_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m1949_GM;
MethodInfo m1949_MI = 
{
	".ctor", (methodPointerType)&m11648_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m1949_GM};
extern Il2CppType t2832_0_0_0;
extern Il2CppType t2832_0_0_0;
static ParameterInfo t205_m14877_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2832_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14877_GM;
MethodInfo m14877_MI = 
{
	".ctor", (methodPointerType)&m11650_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t205_m14877_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14877_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t205_m14878_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14878_GM;
MethodInfo m14878_MI = 
{
	".ctor", (methodPointerType)&m11652_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t205_m14878_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14878_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14879_GM;
MethodInfo m14879_MI = 
{
	".cctor", (methodPointerType)&m11654_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14879_GM};
extern Il2CppType t2833_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14880_GM;
MethodInfo m14880_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m11656_gshared, &t205_TI, &t2833_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14880_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t205_m14881_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14881_GM;
MethodInfo m14881_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11658_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t205_m14881_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14881_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14882_GM;
MethodInfo m14882_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11660_gshared, &t205_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14882_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t205_m14883_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14883_GM;
MethodInfo m14883_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11662_gshared, &t205_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t205_m14883_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14883_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t205_m14884_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14884_GM;
MethodInfo m14884_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11664_gshared, &t205_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t205_m14884_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14884_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t205_m14885_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14885_GM;
MethodInfo m14885_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11666_gshared, &t205_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t205_m14885_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14885_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t205_m14886_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14886_GM;
MethodInfo m14886_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11668_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t205_m14886_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14886_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t205_m14887_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14887_GM;
MethodInfo m14887_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11670_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t205_m14887_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14887_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14888_GM;
MethodInfo m14888_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11672_gshared, &t205_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14888_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14889_GM;
MethodInfo m14889_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11674_gshared, &t205_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14889_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14890_GM;
MethodInfo m14890_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11676_gshared, &t205_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14890_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14891_GM;
MethodInfo m14891_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11678_gshared, &t205_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14891_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14892_GM;
MethodInfo m14892_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11680_gshared, &t205_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14892_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t205_m14893_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14893_GM;
MethodInfo m14893_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11682_gshared, &t205_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t205_m14893_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14893_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t205_m14894_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14894_GM;
MethodInfo m14894_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11684_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t205_m14894_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14894_GM};
extern Il2CppType t206_0_0_0;
extern Il2CppType t206_0_0_0;
static ParameterInfo t205_m14895_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14895_GM;
MethodInfo m14895_MI = 
{
	"Add", (methodPointerType)&m11686_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t205_m14895_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14895_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t205_m14896_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14896_GM;
MethodInfo m14896_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m11688_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t205_m14896_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14896_GM};
extern Il2CppType t2834_0_0_0;
extern Il2CppType t2834_0_0_0;
static ParameterInfo t205_m14897_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2834_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14897_GM;
MethodInfo m14897_MI = 
{
	"AddCollection", (methodPointerType)&m11690_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t205_m14897_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14897_GM};
extern Il2CppType t2832_0_0_0;
static ParameterInfo t205_m14898_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t2832_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14898_GM;
MethodInfo m14898_MI = 
{
	"AddEnumerable", (methodPointerType)&m11692_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t205_m14898_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14898_GM};
extern Il2CppType t2832_0_0_0;
static ParameterInfo t205_m14899_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2832_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14899_GM;
MethodInfo m14899_MI = 
{
	"AddRange", (methodPointerType)&m11693_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t205_m14899_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14899_GM};
extern Il2CppType t2835_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14900_GM;
MethodInfo m14900_MI = 
{
	"AsReadOnly", (methodPointerType)&m11695_gshared, &t205_TI, &t2835_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14900_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14901_GM;
MethodInfo m14901_MI = 
{
	"Clear", (methodPointerType)&m11696_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14901_GM};
extern Il2CppType t206_0_0_0;
static ParameterInfo t205_m14902_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14902_GM;
MethodInfo m14902_MI = 
{
	"Contains", (methodPointerType)&m11698_gshared, &t205_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t205_m14902_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14902_GM};
extern Il2CppType t2831_0_0_0;
extern Il2CppType t2831_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t205_m14903_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2831_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14903_GM;
MethodInfo m14903_MI = 
{
	"CopyTo", (methodPointerType)&m11700_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t205_m14903_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14903_GM};
extern Il2CppType t2836_0_0_0;
extern Il2CppType t2836_0_0_0;
static ParameterInfo t205_m14904_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2836_0_0_0},
};
extern Il2CppType t206_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14904_GM;
MethodInfo m14904_MI = 
{
	"Find", (methodPointerType)&m11702_gshared, &t205_TI, &t206_0_0_0, RuntimeInvoker_t5_t5, t205_m14904_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14904_GM};
extern Il2CppType t2836_0_0_0;
static ParameterInfo t205_m14905_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2836_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14905_GM;
MethodInfo m14905_MI = 
{
	"CheckMatch", (methodPointerType)&m11704_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t205_m14905_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14905_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2836_0_0_0;
static ParameterInfo t205_m14906_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t2836_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14906_GM;
MethodInfo m14906_MI = 
{
	"GetIndex", (methodPointerType)&m11706_gshared, &t205_TI, &t110_0_0_0, RuntimeInvoker_t110_t110_t110_t5, t205_m14906_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL, &m14906_GM};
extern Il2CppType t2837_0_0_0;
extern Il2CppType t2837_0_0_0;
static ParameterInfo t205_m14907_ParameterInfos[] = 
{
	{"action", 0, 134217728, &EmptyCustomAttributesCache, &t2837_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14907_GM;
MethodInfo m14907_MI = 
{
	"ForEach", (methodPointerType)&m11707_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t205_m14907_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14907_GM};
extern Il2CppType t2839_0_0_0;
extern void* RuntimeInvoker_t2839 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14908_GM;
MethodInfo m14908_MI = 
{
	"GetEnumerator", (methodPointerType)&m14908, &t205_TI, &t2839_0_0_0, RuntimeInvoker_t2839, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14908_GM};
extern Il2CppType t206_0_0_0;
static ParameterInfo t205_m14909_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14909_GM;
MethodInfo m14909_MI = 
{
	"IndexOf", (methodPointerType)&m11709_gshared, &t205_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t205_m14909_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14909_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t205_m14910_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14910_GM;
MethodInfo m14910_MI = 
{
	"Shift", (methodPointerType)&m11711_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t205_m14910_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14910_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t205_m14911_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14911_GM;
MethodInfo m14911_MI = 
{
	"CheckIndex", (methodPointerType)&m11713_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t205_m14911_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14911_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t206_0_0_0;
static ParameterInfo t205_m14912_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14912_GM;
MethodInfo m14912_MI = 
{
	"Insert", (methodPointerType)&m11715_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t205_m14912_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14912_GM};
extern Il2CppType t2832_0_0_0;
static ParameterInfo t205_m14913_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2832_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14913_GM;
MethodInfo m14913_MI = 
{
	"CheckCollection", (methodPointerType)&m11717_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t205_m14913_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14913_GM};
extern Il2CppType t206_0_0_0;
static ParameterInfo t205_m14914_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14914_GM;
MethodInfo m14914_MI = 
{
	"Remove", (methodPointerType)&m11719_gshared, &t205_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t205_m14914_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14914_GM};
extern Il2CppType t2836_0_0_0;
static ParameterInfo t205_m14915_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2836_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14915_GM;
MethodInfo m14915_MI = 
{
	"RemoveAll", (methodPointerType)&m11721_gshared, &t205_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t205_m14915_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14915_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t205_m1955_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m1955_GM;
MethodInfo m1955_MI = 
{
	"RemoveAt", (methodPointerType)&m11723_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t205_m1955_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m1955_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14916_GM;
MethodInfo m14916_MI = 
{
	"Reverse", (methodPointerType)&m11725_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14916_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14917_GM;
MethodInfo m14917_MI = 
{
	"Sort", (methodPointerType)&m11727_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14917_GM};
extern Il2CppType t2838_0_0_0;
extern Il2CppType t2838_0_0_0;
static ParameterInfo t205_m14918_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t2838_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14918_GM;
MethodInfo m14918_MI = 
{
	"Sort", (methodPointerType)&m11729_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t205_m14918_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14918_GM};
extern Il2CppType t2831_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14919_GM;
MethodInfo m14919_MI = 
{
	"ToArray", (methodPointerType)&m11731_gshared, &t205_TI, &t2831_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14919_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14920_GM;
MethodInfo m14920_MI = 
{
	"TrimExcess", (methodPointerType)&m11733_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14920_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14921_GM;
MethodInfo m14921_MI = 
{
	"get_Capacity", (methodPointerType)&m11735_gshared, &t205_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14921_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t205_m14922_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14922_GM;
MethodInfo m14922_MI = 
{
	"set_Capacity", (methodPointerType)&m11737_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t205_m14922_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14922_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m1952_GM;
MethodInfo m1952_MI = 
{
	"get_Count", (methodPointerType)&m11738_gshared, &t205_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m1952_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t205_m1953_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t206_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m1953_GM;
MethodInfo m1953_MI = 
{
	"get_Item", (methodPointerType)&m11740_gshared, &t205_TI, &t206_0_0_0, RuntimeInvoker_t5_t110, t205_m1953_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL, &m1953_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t206_0_0_0;
static ParameterInfo t205_m14923_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14923_GM;
MethodInfo m14923_MI = 
{
	"set_Item", (methodPointerType)&m11742_gshared, &t205_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t205_m14923_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14923_GM};
static MethodInfo* t205_MIs[] =
{
	&m1949_MI,
	&m14877_MI,
	&m14878_MI,
	&m14879_MI,
	&m14880_MI,
	&m14881_MI,
	&m14882_MI,
	&m14883_MI,
	&m14884_MI,
	&m14885_MI,
	&m14886_MI,
	&m14887_MI,
	&m14888_MI,
	&m14889_MI,
	&m14890_MI,
	&m14891_MI,
	&m14892_MI,
	&m14893_MI,
	&m14894_MI,
	&m14895_MI,
	&m14896_MI,
	&m14897_MI,
	&m14898_MI,
	&m14899_MI,
	&m14900_MI,
	&m14901_MI,
	&m14902_MI,
	&m14903_MI,
	&m14904_MI,
	&m14905_MI,
	&m14906_MI,
	&m14907_MI,
	&m14908_MI,
	&m14909_MI,
	&m14910_MI,
	&m14911_MI,
	&m14912_MI,
	&m14913_MI,
	&m14914_MI,
	&m14915_MI,
	&m1955_MI,
	&m14916_MI,
	&m14917_MI,
	&m14918_MI,
	&m14919_MI,
	&m14920_MI,
	&m14921_MI,
	&m14922_MI,
	&m1952_MI,
	&m1953_MI,
	&m14923_MI,
	NULL
};
extern MethodInfo m14882_MI;
extern MethodInfo m14881_MI;
extern MethodInfo m14883_MI;
extern MethodInfo m14901_MI;
extern MethodInfo m14884_MI;
extern MethodInfo m14885_MI;
extern MethodInfo m14886_MI;
extern MethodInfo m14887_MI;
extern MethodInfo m14903_MI;
extern MethodInfo m14880_MI;
static MethodInfo* t205_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14882_MI,
	&m1952_MI,
	&m14889_MI,
	&m14890_MI,
	&m14881_MI,
	&m14891_MI,
	&m14892_MI,
	&m14893_MI,
	&m14894_MI,
	&m14883_MI,
	&m14901_MI,
	&m14884_MI,
	&m14885_MI,
	&m14886_MI,
	&m14887_MI,
	&m1955_MI,
	&m1952_MI,
	&m14888_MI,
	&m14895_MI,
	&m14901_MI,
	&m14902_MI,
	&m14903_MI,
	&m14914_MI,
	&m14880_MI,
	&m14909_MI,
	&m14912_MI,
	&m1955_MI,
	&m1953_MI,
	&m14923_MI,
};
extern TypeInfo t1129_TI;
extern TypeInfo t2841_TI;
static TypeInfo* t205_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t2834_TI,
	&t2832_TI,
	&t2841_TI,
};
static Il2CppInterfaceOffsetPair t205_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t2834_TI, 20},
	{ &t2832_TI, 27},
	{ &t2841_TI, 28},
};
extern TypeInfo t205_TI;
extern TypeInfo t2834_TI;
extern TypeInfo t2831_TI;
extern TypeInfo t2839_TI;
extern TypeInfo t206_TI;
extern TypeInfo t2835_TI;
static Il2CppRGCTXData t205_RGCTXData[38] = 
{
	&t205_TI/* Static Usage */,
	&m14913_MI/* Method Usage */,
	&t2834_TI/* Class Usage */,
	&m14898_MI/* Method Usage */,
	&m32338_MI/* Method Usage */,
	&t2831_TI/* Array Usage */,
	&m14897_MI/* Method Usage */,
	&m14908_MI/* Method Usage */,
	&t2839_TI/* Class Usage */,
	&t206_TI/* Class Usage */,
	&m14895_MI/* Method Usage */,
	&m14902_MI/* Method Usage */,
	&m14909_MI/* Method Usage */,
	&m14911_MI/* Method Usage */,
	&m14912_MI/* Method Usage */,
	&m14914_MI/* Method Usage */,
	&m1953_MI/* Method Usage */,
	&m14923_MI/* Method Usage */,
	&m14896_MI/* Method Usage */,
	&m14921_MI/* Method Usage */,
	&m14922_MI/* Method Usage */,
	&m32339_MI/* Method Usage */,
	&m32340_MI/* Method Usage */,
	&m32341_MI/* Method Usage */,
	&t2835_TI/* Class Usage */,
	&m14935_MI/* Method Usage */,
	&m24772_MI/* Method Usage */,
	&m14905_MI/* Method Usage */,
	&m14906_MI/* Method Usage */,
	&m15010_MI/* Method Usage */,
	&m15014_MI/* Method Usage */,
	&m14929_MI/* Method Usage */,
	&m14910_MI/* Method Usage */,
	&m1955_MI/* Method Usage */,
	&m15020_MI/* Method Usage */,
	&m24774_MI/* Method Usage */,
	&m24782_MI/* Method Usage */,
	&m24770_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t205_0_0_0;
extern Il2CppType t205_1_0_0;
struct t205;
extern Il2CppGenericClass t205_GC;
extern CustomAttributesCache t1524__CustomAttributeCache;
TypeInfo t205_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t205_MIs, t205_PIs, t205_FIs, NULL, &t5_TI, NULL, NULL, &t205_TI, t205_ITIs, t205_VT, &t1524__CustomAttributeCache, &t205_TI, &t205_0_0_0, &t205_1_0_0, t205_IOs, &t205_GC, NULL, t205_FDVs, NULL, t205_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t205), 0, -1, sizeof(t205_SFs), 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, true, false, false, 51, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseInputModule>
static PropertyInfo t2834____Count_PropertyInfo = 
{
	&t2834_TI, "Count", &m32338_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m32342_MI;
static PropertyInfo t2834____IsReadOnly_PropertyInfo = 
{
	&t2834_TI, "IsReadOnly", &m32342_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2834_PIs[] =
{
	&t2834____Count_PropertyInfo,
	&t2834____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32338_GM;
MethodInfo m32338_MI = 
{
	"get_Count", NULL, &t2834_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32338_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32342_GM;
MethodInfo m32342_MI = 
{
	"get_IsReadOnly", NULL, &t2834_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32342_GM};
extern Il2CppType t206_0_0_0;
static ParameterInfo t2834_m32343_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32343_GM;
MethodInfo m32343_MI = 
{
	"Add", NULL, &t2834_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2834_m32343_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32343_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32344_GM;
MethodInfo m32344_MI = 
{
	"Clear", NULL, &t2834_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32344_GM};
extern Il2CppType t206_0_0_0;
static ParameterInfo t2834_m32345_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32345_GM;
MethodInfo m32345_MI = 
{
	"Contains", NULL, &t2834_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2834_m32345_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32345_GM};
extern Il2CppType t2831_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2834_m32339_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2831_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32339_GM;
MethodInfo m32339_MI = 
{
	"CopyTo", NULL, &t2834_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2834_m32339_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32339_GM};
extern Il2CppType t206_0_0_0;
static ParameterInfo t2834_m32346_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32346_GM;
MethodInfo m32346_MI = 
{
	"Remove", NULL, &t2834_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2834_m32346_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32346_GM};
static MethodInfo* t2834_MIs[] =
{
	&m32338_MI,
	&m32342_MI,
	&m32343_MI,
	&m32344_MI,
	&m32345_MI,
	&m32339_MI,
	&m32346_MI,
	NULL
};
static TypeInfo* t2834_ITIs[] = 
{
	&t739_TI,
	&t2832_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2834_1_0_0;
struct t2834;
extern Il2CppGenericClass t2834_GC;
TypeInfo t2834_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t2834_MIs, t2834_PIs, NULL, NULL, NULL, NULL, NULL, &t2834_TI, t2834_ITIs, NULL, &EmptyCustomAttributesCache, &t2834_TI, &t2834_0_0_0, &t2834_1_0_0, NULL, &t2834_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t2833_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32340_GM;
MethodInfo m32340_MI = 
{
	"GetEnumerator", NULL, &t2832_TI, &t2833_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32340_GM};
static MethodInfo* t2832_MIs[] =
{
	&m32340_MI,
	NULL
};
static TypeInfo* t2832_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2832_1_0_0;
struct t2832;
extern Il2CppGenericClass t2832_GC;
TypeInfo t2832_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t2832_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2832_TI, t2832_ITIs, NULL, &EmptyCustomAttributesCache, &t2832_TI, &t2832_0_0_0, &t2832_1_0_0, NULL, &t2832_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.BaseInputModule>
static PropertyInfo t2833____Current_PropertyInfo = 
{
	&t2833_TI, "Current", &m32341_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2833_PIs[] =
{
	&t2833____Current_PropertyInfo,
	NULL
};
extern Il2CppType t206_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32341_GM;
MethodInfo m32341_MI = 
{
	"get_Current", NULL, &t2833_TI, &t206_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32341_GM};
static MethodInfo* t2833_MIs[] =
{
	&m32341_MI,
	NULL
};
static TypeInfo* t2833_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2833_0_0_0;
extern Il2CppType t2833_1_0_0;
struct t2833;
extern Il2CppGenericClass t2833_GC;
TypeInfo t2833_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2833_MIs, t2833_PIs, NULL, NULL, NULL, NULL, NULL, &t2833_TI, t2833_ITIs, NULL, &EmptyCustomAttributesCache, &t2833_TI, &t2833_0_0_0, &t2833_1_0_0, NULL, &t2833_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2840.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2840_TI;
#include "t2840MD.h"

extern MethodInfo m14928_MI;
extern MethodInfo m24759_MI;
struct t107;
#define m24759(__this, p0, method) (t206 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t107_0_0_1;
FieldInfo t2840_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t2840_TI, offsetof(t2840, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2840_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2840_TI, offsetof(t2840, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2840_FIs[] =
{
	&t2840_f0_FieldInfo,
	&t2840_f1_FieldInfo,
	NULL
};
extern MethodInfo m14925_MI;
static PropertyInfo t2840____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2840_TI, "System.Collections.IEnumerator.Current", &m14925_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2840____Current_PropertyInfo = 
{
	&t2840_TI, "Current", &m14928_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2840_PIs[] =
{
	&t2840____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2840____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t2840_m14924_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14924_GM;
MethodInfo m14924_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t2840_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2840_m14924_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14924_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14925_GM;
MethodInfo m14925_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t2840_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14925_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14926_GM;
MethodInfo m14926_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t2840_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14926_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14927_GM;
MethodInfo m14927_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t2840_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14927_GM};
extern Il2CppType t206_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14928_GM;
MethodInfo m14928_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t2840_TI, &t206_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14928_GM};
static MethodInfo* t2840_MIs[] =
{
	&m14924_MI,
	&m14925_MI,
	&m14926_MI,
	&m14927_MI,
	&m14928_MI,
	NULL
};
extern MethodInfo m14927_MI;
extern MethodInfo m14926_MI;
static MethodInfo* t2840_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m14925_MI,
	&m14927_MI,
	&m14926_MI,
	&m14928_MI,
};
static TypeInfo* t2840_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t2833_TI,
};
static Il2CppInterfaceOffsetPair t2840_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t2833_TI, 7},
};
extern TypeInfo t206_TI;
static Il2CppRGCTXData t2840_RGCTXData[3] = 
{
	&m14928_MI/* Method Usage */,
	&t206_TI/* Class Usage */,
	&m24759_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2840_0_0_0;
extern Il2CppType t2840_1_0_0;
extern Il2CppGenericClass t2840_GC;
TypeInfo t2840_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2840_MIs, t2840_PIs, t2840_FIs, NULL, &t267_TI, NULL, &t107_TI, &t2840_TI, t2840_ITIs, t2840_VT, &EmptyCustomAttributesCache, &t2840_TI, &t2840_0_0_0, &t2840_1_0_0, t2840_IOs, &t2840_GC, NULL, NULL, NULL, t2840_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2840)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseInputModule>
extern MethodInfo m32347_MI;
extern MethodInfo m32348_MI;
static PropertyInfo t2841____Item_PropertyInfo = 
{
	&t2841_TI, "Item", &m32347_MI, &m32348_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2841_PIs[] =
{
	&t2841____Item_PropertyInfo,
	NULL
};
extern Il2CppType t206_0_0_0;
static ParameterInfo t2841_m32349_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32349_GM;
MethodInfo m32349_MI = 
{
	"IndexOf", NULL, &t2841_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2841_m32349_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32349_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t206_0_0_0;
static ParameterInfo t2841_m32350_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32350_GM;
MethodInfo m32350_MI = 
{
	"Insert", NULL, &t2841_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2841_m32350_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32350_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2841_m32351_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32351_GM;
MethodInfo m32351_MI = 
{
	"RemoveAt", NULL, &t2841_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2841_m32351_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32351_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2841_m32347_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t206_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32347_GM;
MethodInfo m32347_MI = 
{
	"get_Item", NULL, &t2841_TI, &t206_0_0_0, RuntimeInvoker_t5_t110, t2841_m32347_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32347_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t206_0_0_0;
static ParameterInfo t2841_m32348_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32348_GM;
MethodInfo m32348_MI = 
{
	"set_Item", NULL, &t2841_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2841_m32348_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32348_GM};
static MethodInfo* t2841_MIs[] =
{
	&m32349_MI,
	&m32350_MI,
	&m32351_MI,
	&m32347_MI,
	&m32348_MI,
	NULL
};
static TypeInfo* t2841_ITIs[] = 
{
	&t739_TI,
	&t2834_TI,
	&t2832_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2841_0_0_0;
extern Il2CppType t2841_1_0_0;
struct t2841;
extern Il2CppGenericClass t2841_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t2841_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t2841_MIs, t2841_PIs, NULL, NULL, NULL, NULL, NULL, &t2841_TI, t2841_ITIs, NULL, &t2240__CustomAttributeCache, &t2841_TI, &t2841_0_0_0, &t2841_1_0_0, NULL, &t2841_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m14932_MI;
extern MethodInfo m4766_MI;
extern MethodInfo m531_MI;
extern MethodInfo m3643_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t205_0_0_1;
FieldInfo t2839_f0_FieldInfo = 
{
	"l", &t205_0_0_1, &t2839_TI, offsetof(t2839, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2839_f1_FieldInfo = 
{
	"next", &t110_0_0_1, &t2839_TI, offsetof(t2839, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2839_f2_FieldInfo = 
{
	"ver", &t110_0_0_1, &t2839_TI, offsetof(t2839, f2) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t206_0_0_1;
FieldInfo t2839_f3_FieldInfo = 
{
	"current", &t206_0_0_1, &t2839_TI, offsetof(t2839, f3) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2839_FIs[] =
{
	&t2839_f0_FieldInfo,
	&t2839_f1_FieldInfo,
	&t2839_f2_FieldInfo,
	&t2839_f3_FieldInfo,
	NULL
};
extern MethodInfo m14930_MI;
static PropertyInfo t2839____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2839_TI, "System.Collections.IEnumerator.Current", &m14930_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14934_MI;
static PropertyInfo t2839____Current_PropertyInfo = 
{
	&t2839_TI, "Current", &m14934_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2839_PIs[] =
{
	&t2839____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2839____Current_PropertyInfo,
	NULL
};
extern Il2CppType t205_0_0_0;
static ParameterInfo t2839_m14929_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t205_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14929_GM;
MethodInfo m14929_MI = 
{
	".ctor", (methodPointerType)&m11749_gshared, &t2839_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2839_m14929_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14929_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14930_GM;
MethodInfo m14930_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11750_gshared, &t2839_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14930_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14931_GM;
MethodInfo m14931_MI = 
{
	"Dispose", (methodPointerType)&m11751_gshared, &t2839_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14931_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14932_GM;
MethodInfo m14932_MI = 
{
	"VerifyState", (methodPointerType)&m11752_gshared, &t2839_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14932_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14933_GM;
MethodInfo m14933_MI = 
{
	"MoveNext", (methodPointerType)&m11753_gshared, &t2839_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14933_GM};
extern Il2CppType t206_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14934_GM;
MethodInfo m14934_MI = 
{
	"get_Current", (methodPointerType)&m11754_gshared, &t2839_TI, &t206_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14934_GM};
static MethodInfo* t2839_MIs[] =
{
	&m14929_MI,
	&m14930_MI,
	&m14931_MI,
	&m14932_MI,
	&m14933_MI,
	&m14934_MI,
	NULL
};
extern MethodInfo m14933_MI;
extern MethodInfo m14931_MI;
static MethodInfo* t2839_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m14930_MI,
	&m14933_MI,
	&m14931_MI,
	&m14934_MI,
};
static TypeInfo* t2839_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t2833_TI,
};
static Il2CppInterfaceOffsetPair t2839_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t2833_TI, 7},
};
extern TypeInfo t206_TI;
extern TypeInfo t2839_TI;
static Il2CppRGCTXData t2839_RGCTXData[3] = 
{
	&m14932_MI/* Method Usage */,
	&t206_TI/* Class Usage */,
	&t2839_TI/* Class Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2839_0_0_0;
extern Il2CppType t2839_1_0_0;
extern Il2CppGenericClass t2839_GC;
extern TypeInfo t1524_TI;
TypeInfo t2839_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2839_MIs, t2839_PIs, t2839_FIs, NULL, &t267_TI, NULL, &t1524_TI, &t2839_TI, t2839_ITIs, t2839_VT, &EmptyCustomAttributesCache, &t2839_TI, &t2839_0_0_0, &t2839_1_0_0, t2839_IOs, &t2839_GC, NULL, NULL, NULL, t2839_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2839)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif

#include "t2842MD.h"
extern MethodInfo m14964_MI;
extern MethodInfo m2163_MI;
extern MethodInfo m4754_MI;
extern MethodInfo m4947_MI;
extern MethodInfo m14996_MI;
extern MethodInfo m32345_MI;
extern MethodInfo m32349_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t2841_0_0_1;
FieldInfo t2835_f0_FieldInfo = 
{
	"list", &t2841_0_0_1, &t2835_TI, offsetof(t2835, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2835_FIs[] =
{
	&t2835_f0_FieldInfo,
	NULL
};
extern MethodInfo m14941_MI;
extern MethodInfo m14942_MI;
static PropertyInfo t2835____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t2835_TI, "System.Collections.Generic.IList<T>.Item", &m14941_MI, &m14942_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14943_MI;
static PropertyInfo t2835____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2835_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m14943_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14953_MI;
static PropertyInfo t2835____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2835_TI, "System.Collections.ICollection.IsSynchronized", &m14953_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14954_MI;
static PropertyInfo t2835____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2835_TI, "System.Collections.ICollection.SyncRoot", &m14954_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14955_MI;
static PropertyInfo t2835____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2835_TI, "System.Collections.IList.IsFixedSize", &m14955_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14956_MI;
static PropertyInfo t2835____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2835_TI, "System.Collections.IList.IsReadOnly", &m14956_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14957_MI;
extern MethodInfo m14958_MI;
static PropertyInfo t2835____System_Collections_IList_Item_PropertyInfo = 
{
	&t2835_TI, "System.Collections.IList.Item", &m14957_MI, &m14958_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14963_MI;
static PropertyInfo t2835____Count_PropertyInfo = 
{
	&t2835_TI, "Count", &m14963_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2835____Item_PropertyInfo = 
{
	&t2835_TI, "Item", &m14964_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2835_PIs[] =
{
	&t2835____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t2835____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2835____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2835____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2835____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2835____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2835____System_Collections_IList_Item_PropertyInfo,
	&t2835____Count_PropertyInfo,
	&t2835____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2841_0_0_0;
static ParameterInfo t2835_m14935_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2841_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14935_GM;
MethodInfo m14935_MI = 
{
	".ctor", (methodPointerType)&m11755_gshared, &t2835_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2835_m14935_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14935_GM};
extern Il2CppType t206_0_0_0;
static ParameterInfo t2835_m14936_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14936_GM;
MethodInfo m14936_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m11756_gshared, &t2835_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2835_m14936_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14936_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14937_GM;
MethodInfo m14937_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m11757_gshared, &t2835_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14937_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t206_0_0_0;
static ParameterInfo t2835_m14938_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14938_GM;
MethodInfo m14938_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m11758_gshared, &t2835_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2835_m14938_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14938_GM};
extern Il2CppType t206_0_0_0;
static ParameterInfo t2835_m14939_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14939_GM;
MethodInfo m14939_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m11759_gshared, &t2835_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2835_m14939_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14939_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2835_m14940_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14940_GM;
MethodInfo m14940_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m11760_gshared, &t2835_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2835_m14940_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14940_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2835_m14941_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t206_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14941_GM;
MethodInfo m14941_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m11761_gshared, &t2835_TI, &t206_0_0_0, RuntimeInvoker_t5_t110, t2835_m14941_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14941_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t206_0_0_0;
static ParameterInfo t2835_m14942_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14942_GM;
MethodInfo m14942_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m11762_gshared, &t2835_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2835_m14942_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14942_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14943_GM;
MethodInfo m14943_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11763_gshared, &t2835_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14943_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2835_m14944_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14944_GM;
MethodInfo m14944_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11764_gshared, &t2835_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2835_m14944_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14944_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14945_GM;
MethodInfo m14945_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11765_gshared, &t2835_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14945_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2835_m14946_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14946_GM;
MethodInfo m14946_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11766_gshared, &t2835_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2835_m14946_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14946_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14947_GM;
MethodInfo m14947_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m11767_gshared, &t2835_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14947_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2835_m14948_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14948_GM;
MethodInfo m14948_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11768_gshared, &t2835_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2835_m14948_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14948_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2835_m14949_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14949_GM;
MethodInfo m14949_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11769_gshared, &t2835_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2835_m14949_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14949_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2835_m14950_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14950_GM;
MethodInfo m14950_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11770_gshared, &t2835_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2835_m14950_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14950_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2835_m14951_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14951_GM;
MethodInfo m14951_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11771_gshared, &t2835_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2835_m14951_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14951_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2835_m14952_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14952_GM;
MethodInfo m14952_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m11772_gshared, &t2835_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2835_m14952_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14952_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14953_GM;
MethodInfo m14953_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11773_gshared, &t2835_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14953_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14954_GM;
MethodInfo m14954_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11774_gshared, &t2835_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14954_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14955_GM;
MethodInfo m14955_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11775_gshared, &t2835_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14955_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14956_GM;
MethodInfo m14956_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11776_gshared, &t2835_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14956_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2835_m14957_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14957_GM;
MethodInfo m14957_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11777_gshared, &t2835_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t2835_m14957_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14957_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2835_m14958_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14958_GM;
MethodInfo m14958_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11778_gshared, &t2835_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2835_m14958_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14958_GM};
extern Il2CppType t206_0_0_0;
static ParameterInfo t2835_m14959_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14959_GM;
MethodInfo m14959_MI = 
{
	"Contains", (methodPointerType)&m11779_gshared, &t2835_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2835_m14959_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14959_GM};
extern Il2CppType t2831_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2835_m14960_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2831_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14960_GM;
MethodInfo m14960_MI = 
{
	"CopyTo", (methodPointerType)&m11780_gshared, &t2835_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2835_m14960_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14960_GM};
extern Il2CppType t2833_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14961_GM;
MethodInfo m14961_MI = 
{
	"GetEnumerator", (methodPointerType)&m11781_gshared, &t2835_TI, &t2833_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14961_GM};
extern Il2CppType t206_0_0_0;
static ParameterInfo t2835_m14962_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14962_GM;
MethodInfo m14962_MI = 
{
	"IndexOf", (methodPointerType)&m11782_gshared, &t2835_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2835_m14962_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14962_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14963_GM;
MethodInfo m14963_MI = 
{
	"get_Count", (methodPointerType)&m11783_gshared, &t2835_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14963_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2835_m14964_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t206_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14964_GM;
MethodInfo m14964_MI = 
{
	"get_Item", (methodPointerType)&m11784_gshared, &t2835_TI, &t206_0_0_0, RuntimeInvoker_t5_t110, t2835_m14964_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14964_GM};
static MethodInfo* t2835_MIs[] =
{
	&m14935_MI,
	&m14936_MI,
	&m14937_MI,
	&m14938_MI,
	&m14939_MI,
	&m14940_MI,
	&m14941_MI,
	&m14942_MI,
	&m14943_MI,
	&m14944_MI,
	&m14945_MI,
	&m14946_MI,
	&m14947_MI,
	&m14948_MI,
	&m14949_MI,
	&m14950_MI,
	&m14951_MI,
	&m14952_MI,
	&m14953_MI,
	&m14954_MI,
	&m14955_MI,
	&m14956_MI,
	&m14957_MI,
	&m14958_MI,
	&m14959_MI,
	&m14960_MI,
	&m14961_MI,
	&m14962_MI,
	&m14963_MI,
	&m14964_MI,
	NULL
};
extern MethodInfo m14945_MI;
extern MethodInfo m14944_MI;
extern MethodInfo m14946_MI;
extern MethodInfo m14947_MI;
extern MethodInfo m14948_MI;
extern MethodInfo m14949_MI;
extern MethodInfo m14950_MI;
extern MethodInfo m14951_MI;
extern MethodInfo m14952_MI;
extern MethodInfo m14936_MI;
extern MethodInfo m14937_MI;
extern MethodInfo m14959_MI;
extern MethodInfo m14960_MI;
extern MethodInfo m14939_MI;
extern MethodInfo m14962_MI;
extern MethodInfo m14938_MI;
extern MethodInfo m14940_MI;
extern MethodInfo m14961_MI;
static MethodInfo* t2835_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14945_MI,
	&m14963_MI,
	&m14953_MI,
	&m14954_MI,
	&m14944_MI,
	&m14955_MI,
	&m14956_MI,
	&m14957_MI,
	&m14958_MI,
	&m14946_MI,
	&m14947_MI,
	&m14948_MI,
	&m14949_MI,
	&m14950_MI,
	&m14951_MI,
	&m14952_MI,
	&m14963_MI,
	&m14943_MI,
	&m14936_MI,
	&m14937_MI,
	&m14959_MI,
	&m14960_MI,
	&m14939_MI,
	&m14962_MI,
	&m14938_MI,
	&m14940_MI,
	&m14941_MI,
	&m14942_MI,
	&m14961_MI,
	&m14964_MI,
};
static TypeInfo* t2835_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t2834_TI,
	&t2841_TI,
	&t2832_TI,
};
static Il2CppInterfaceOffsetPair t2835_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t2834_TI, 20},
	{ &t2841_TI, 27},
	{ &t2832_TI, 32},
};
extern TypeInfo t206_TI;
static Il2CppRGCTXData t2835_RGCTXData[9] = 
{
	&m14964_MI/* Method Usage */,
	&m14996_MI/* Method Usage */,
	&t206_TI/* Class Usage */,
	&m32345_MI/* Method Usage */,
	&m32349_MI/* Method Usage */,
	&m32347_MI/* Method Usage */,
	&m32339_MI/* Method Usage */,
	&m32340_MI/* Method Usage */,
	&m32338_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2835_0_0_0;
extern Il2CppType t2835_1_0_0;
struct t2835;
extern Il2CppGenericClass t2835_GC;
extern CustomAttributesCache t1526__CustomAttributeCache;
TypeInfo t2835_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t2835_MIs, t2835_PIs, t2835_FIs, NULL, &t5_TI, NULL, NULL, &t2835_TI, t2835_ITIs, t2835_VT, &t1526__CustomAttributeCache, &t2835_TI, &t2835_0_0_0, &t2835_1_0_0, t2835_IOs, &t2835_GC, NULL, NULL, NULL, t2835_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2835), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t2842.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2842_TI;

extern MethodInfo m14999_MI;
extern MethodInfo m15000_MI;
extern MethodInfo m14997_MI;
extern MethodInfo m14995_MI;
extern MethodInfo m1949_MI;
extern MethodInfo m14988_MI;
extern MethodInfo m14998_MI;
extern MethodInfo m14986_MI;
extern MethodInfo m14991_MI;
extern MethodInfo m14982_MI;
extern MethodInfo m32344_MI;
extern MethodInfo m32350_MI;
extern MethodInfo m32351_MI;
extern MethodInfo m11150_MI;
extern MethodInfo m11152_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t2841_0_0_1;
FieldInfo t2842_f0_FieldInfo = 
{
	"list", &t2841_0_0_1, &t2842_TI, offsetof(t2842, f0), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_1;
FieldInfo t2842_f1_FieldInfo = 
{
	"syncRoot", &t5_0_0_1, &t2842_TI, offsetof(t2842, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2842_FIs[] =
{
	&t2842_f0_FieldInfo,
	&t2842_f1_FieldInfo,
	NULL
};
extern MethodInfo m14966_MI;
static PropertyInfo t2842____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2842_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m14966_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14974_MI;
static PropertyInfo t2842____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2842_TI, "System.Collections.ICollection.IsSynchronized", &m14974_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14975_MI;
static PropertyInfo t2842____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2842_TI, "System.Collections.ICollection.SyncRoot", &m14975_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14976_MI;
static PropertyInfo t2842____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2842_TI, "System.Collections.IList.IsFixedSize", &m14976_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14977_MI;
static PropertyInfo t2842____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2842_TI, "System.Collections.IList.IsReadOnly", &m14977_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14978_MI;
extern MethodInfo m14979_MI;
static PropertyInfo t2842____System_Collections_IList_Item_PropertyInfo = 
{
	&t2842_TI, "System.Collections.IList.Item", &m14978_MI, &m14979_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14992_MI;
static PropertyInfo t2842____Count_PropertyInfo = 
{
	&t2842_TI, "Count", &m14992_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14993_MI;
extern MethodInfo m14994_MI;
static PropertyInfo t2842____Item_PropertyInfo = 
{
	&t2842_TI, "Item", &m14993_MI, &m14994_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2842_PIs[] =
{
	&t2842____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2842____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2842____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2842____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2842____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2842____System_Collections_IList_Item_PropertyInfo,
	&t2842____Count_PropertyInfo,
	&t2842____Item_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14965_GM;
MethodInfo m14965_MI = 
{
	".ctor", (methodPointerType)&m11785_gshared, &t2842_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14965_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14966_GM;
MethodInfo m14966_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11786_gshared, &t2842_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14966_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2842_m14967_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14967_GM;
MethodInfo m14967_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11787_gshared, &t2842_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2842_m14967_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14967_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14968_GM;
MethodInfo m14968_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11788_gshared, &t2842_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14968_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2842_m14969_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14969_GM;
MethodInfo m14969_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11789_gshared, &t2842_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2842_m14969_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14969_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2842_m14970_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14970_GM;
MethodInfo m14970_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11790_gshared, &t2842_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2842_m14970_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14970_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2842_m14971_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14971_GM;
MethodInfo m14971_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11791_gshared, &t2842_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2842_m14971_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14971_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2842_m14972_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14972_GM;
MethodInfo m14972_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11792_gshared, &t2842_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2842_m14972_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14972_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2842_m14973_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14973_GM;
MethodInfo m14973_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11793_gshared, &t2842_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2842_m14973_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14973_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14974_GM;
MethodInfo m14974_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11794_gshared, &t2842_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14974_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14975_GM;
MethodInfo m14975_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11795_gshared, &t2842_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14975_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14976_GM;
MethodInfo m14976_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11796_gshared, &t2842_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14976_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14977_GM;
MethodInfo m14977_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11797_gshared, &t2842_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14977_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2842_m14978_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14978_GM;
MethodInfo m14978_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11798_gshared, &t2842_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t2842_m14978_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14978_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2842_m14979_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14979_GM;
MethodInfo m14979_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11799_gshared, &t2842_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2842_m14979_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14979_GM};
extern Il2CppType t206_0_0_0;
static ParameterInfo t2842_m14980_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14980_GM;
MethodInfo m14980_MI = 
{
	"Add", (methodPointerType)&m11800_gshared, &t2842_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2842_m14980_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14980_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14981_GM;
MethodInfo m14981_MI = 
{
	"Clear", (methodPointerType)&m11801_gshared, &t2842_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14981_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14982_GM;
MethodInfo m14982_MI = 
{
	"ClearItems", (methodPointerType)&m11802_gshared, &t2842_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14982_GM};
extern Il2CppType t206_0_0_0;
static ParameterInfo t2842_m14983_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14983_GM;
MethodInfo m14983_MI = 
{
	"Contains", (methodPointerType)&m11803_gshared, &t2842_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2842_m14983_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14983_GM};
extern Il2CppType t2831_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2842_m14984_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2831_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14984_GM;
MethodInfo m14984_MI = 
{
	"CopyTo", (methodPointerType)&m11804_gshared, &t2842_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2842_m14984_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14984_GM};
extern Il2CppType t2833_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14985_GM;
MethodInfo m14985_MI = 
{
	"GetEnumerator", (methodPointerType)&m11805_gshared, &t2842_TI, &t2833_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14985_GM};
extern Il2CppType t206_0_0_0;
static ParameterInfo t2842_m14986_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14986_GM;
MethodInfo m14986_MI = 
{
	"IndexOf", (methodPointerType)&m11806_gshared, &t2842_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2842_m14986_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14986_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t206_0_0_0;
static ParameterInfo t2842_m14987_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14987_GM;
MethodInfo m14987_MI = 
{
	"Insert", (methodPointerType)&m11807_gshared, &t2842_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2842_m14987_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14987_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t206_0_0_0;
static ParameterInfo t2842_m14988_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14988_GM;
MethodInfo m14988_MI = 
{
	"InsertItem", (methodPointerType)&m11808_gshared, &t2842_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2842_m14988_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14988_GM};
extern Il2CppType t206_0_0_0;
static ParameterInfo t2842_m14989_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14989_GM;
MethodInfo m14989_MI = 
{
	"Remove", (methodPointerType)&m11809_gshared, &t2842_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2842_m14989_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14989_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2842_m14990_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14990_GM;
MethodInfo m14990_MI = 
{
	"RemoveAt", (methodPointerType)&m11810_gshared, &t2842_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2842_m14990_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14990_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2842_m14991_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14991_GM;
MethodInfo m14991_MI = 
{
	"RemoveItem", (methodPointerType)&m11811_gshared, &t2842_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2842_m14991_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14991_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14992_GM;
MethodInfo m14992_MI = 
{
	"get_Count", (methodPointerType)&m11812_gshared, &t2842_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14992_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2842_m14993_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t206_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14993_GM;
MethodInfo m14993_MI = 
{
	"get_Item", (methodPointerType)&m11813_gshared, &t2842_TI, &t206_0_0_0, RuntimeInvoker_t5_t110, t2842_m14993_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14993_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t206_0_0_0;
static ParameterInfo t2842_m14994_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14994_GM;
MethodInfo m14994_MI = 
{
	"set_Item", (methodPointerType)&m11814_gshared, &t2842_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2842_m14994_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14994_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t206_0_0_0;
static ParameterInfo t2842_m14995_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14995_GM;
MethodInfo m14995_MI = 
{
	"SetItem", (methodPointerType)&m11815_gshared, &t2842_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2842_m14995_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14995_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2842_m14996_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14996_GM;
MethodInfo m14996_MI = 
{
	"IsValidItem", (methodPointerType)&m11816_gshared, &t2842_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2842_m14996_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14996_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2842_m14997_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t206_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14997_GM;
MethodInfo m14997_MI = 
{
	"ConvertItem", (methodPointerType)&m11817_gshared, &t2842_TI, &t206_0_0_0, RuntimeInvoker_t5_t5, t2842_m14997_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14997_GM};
extern Il2CppType t2841_0_0_0;
static ParameterInfo t2842_m14998_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2841_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14998_GM;
MethodInfo m14998_MI = 
{
	"CheckWritable", (methodPointerType)&m11818_gshared, &t2842_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2842_m14998_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14998_GM};
extern Il2CppType t2841_0_0_0;
static ParameterInfo t2842_m14999_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2841_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14999_GM;
MethodInfo m14999_MI = 
{
	"IsSynchronized", (methodPointerType)&m11819_gshared, &t2842_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2842_m14999_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14999_GM};
extern Il2CppType t2841_0_0_0;
static ParameterInfo t2842_m15000_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2841_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15000_GM;
MethodInfo m15000_MI = 
{
	"IsFixedSize", (methodPointerType)&m11820_gshared, &t2842_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2842_m15000_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15000_GM};
static MethodInfo* t2842_MIs[] =
{
	&m14965_MI,
	&m14966_MI,
	&m14967_MI,
	&m14968_MI,
	&m14969_MI,
	&m14970_MI,
	&m14971_MI,
	&m14972_MI,
	&m14973_MI,
	&m14974_MI,
	&m14975_MI,
	&m14976_MI,
	&m14977_MI,
	&m14978_MI,
	&m14979_MI,
	&m14980_MI,
	&m14981_MI,
	&m14982_MI,
	&m14983_MI,
	&m14984_MI,
	&m14985_MI,
	&m14986_MI,
	&m14987_MI,
	&m14988_MI,
	&m14989_MI,
	&m14990_MI,
	&m14991_MI,
	&m14992_MI,
	&m14993_MI,
	&m14994_MI,
	&m14995_MI,
	&m14996_MI,
	&m14997_MI,
	&m14998_MI,
	&m14999_MI,
	&m15000_MI,
	NULL
};
extern MethodInfo m14968_MI;
extern MethodInfo m14967_MI;
extern MethodInfo m14969_MI;
extern MethodInfo m14981_MI;
extern MethodInfo m14970_MI;
extern MethodInfo m14971_MI;
extern MethodInfo m14972_MI;
extern MethodInfo m14973_MI;
extern MethodInfo m14990_MI;
extern MethodInfo m14980_MI;
extern MethodInfo m14983_MI;
extern MethodInfo m14984_MI;
extern MethodInfo m14989_MI;
extern MethodInfo m14987_MI;
extern MethodInfo m14985_MI;
static MethodInfo* t2842_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14968_MI,
	&m14992_MI,
	&m14974_MI,
	&m14975_MI,
	&m14967_MI,
	&m14976_MI,
	&m14977_MI,
	&m14978_MI,
	&m14979_MI,
	&m14969_MI,
	&m14981_MI,
	&m14970_MI,
	&m14971_MI,
	&m14972_MI,
	&m14973_MI,
	&m14990_MI,
	&m14992_MI,
	&m14966_MI,
	&m14980_MI,
	&m14981_MI,
	&m14983_MI,
	&m14984_MI,
	&m14989_MI,
	&m14986_MI,
	&m14987_MI,
	&m14990_MI,
	&m14993_MI,
	&m14994_MI,
	&m14985_MI,
	&m14982_MI,
	&m14988_MI,
	&m14991_MI,
	&m14995_MI,
};
static TypeInfo* t2842_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t2834_TI,
	&t2841_TI,
	&t2832_TI,
};
static Il2CppInterfaceOffsetPair t2842_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t2834_TI, 20},
	{ &t2841_TI, 27},
	{ &t2832_TI, 32},
};
extern TypeInfo t205_TI;
extern TypeInfo t206_TI;
static Il2CppRGCTXData t2842_RGCTXData[25] = 
{
	&t205_TI/* Class Usage */,
	&m1949_MI/* Method Usage */,
	&m32342_MI/* Method Usage */,
	&m32340_MI/* Method Usage */,
	&m32338_MI/* Method Usage */,
	&m14997_MI/* Method Usage */,
	&m14988_MI/* Method Usage */,
	&m14996_MI/* Method Usage */,
	&t206_TI/* Class Usage */,
	&m32345_MI/* Method Usage */,
	&m32349_MI/* Method Usage */,
	&m14998_MI/* Method Usage */,
	&m14986_MI/* Method Usage */,
	&m14991_MI/* Method Usage */,
	&m14999_MI/* Method Usage */,
	&m15000_MI/* Method Usage */,
	&m32347_MI/* Method Usage */,
	&m14995_MI/* Method Usage */,
	&m14982_MI/* Method Usage */,
	&m32344_MI/* Method Usage */,
	&m32339_MI/* Method Usage */,
	&m32350_MI/* Method Usage */,
	&m32351_MI/* Method Usage */,
	&m32348_MI/* Method Usage */,
	&t206_0_0_0/* Type Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2842_0_0_0;
extern Il2CppType t2842_1_0_0;
struct t2842;
extern Il2CppGenericClass t2842_GC;
extern CustomAttributesCache t1525__CustomAttributeCache;
TypeInfo t2842_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t2842_MIs, t2842_PIs, t2842_FIs, NULL, &t5_TI, NULL, NULL, &t2842_TI, t2842_ITIs, t2842_VT, &t1525__CustomAttributeCache, &t2842_TI, &t2842_0_0_0, &t2842_1_0_0, t2842_IOs, &t2842_GC, NULL, NULL, NULL, t2842_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2842), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2843_TI;
#include "t2843MD.h"

#include "t1520.h"
#include "t2844.h"
extern TypeInfo t7587_TI;
extern TypeInfo t1520_TI;
extern TypeInfo t675_TI;
extern TypeInfo t2844_TI;
#include "t1196MD.h"
#include "t2844MD.h"
extern Il2CppType t7587_0_0_0;
extern Il2CppType t1520_0_0_0;
extern MethodInfo m3626_MI;
extern MethodInfo m3624_MI;
extern MethodInfo m10126_MI;
extern MethodInfo m15006_MI;
extern MethodInfo m32352_MI;
extern MethodInfo m24771_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t2843_0_0_49;
FieldInfo t2843_f0_FieldInfo = 
{
	"_default", &t2843_0_0_49, &t2843_TI, offsetof(t2843_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2843_FIs[] =
{
	&t2843_f0_FieldInfo,
	NULL
};
extern MethodInfo m15005_MI;
static PropertyInfo t2843____Default_PropertyInfo = 
{
	&t2843_TI, "Default", &m15005_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2843_PIs[] =
{
	&t2843____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15001_GM;
MethodInfo m15001_MI = 
{
	".ctor", (methodPointerType)&m11821_gshared, &t2843_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15001_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15002_GM;
MethodInfo m15002_MI = 
{
	".cctor", (methodPointerType)&m11822_gshared, &t2843_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15002_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2843_m15003_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15003_GM;
MethodInfo m15003_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m11823_gshared, &t2843_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2843_m15003_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15003_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2843_m15004_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15004_GM;
MethodInfo m15004_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m11824_gshared, &t2843_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2843_m15004_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15004_GM};
extern Il2CppType t206_0_0_0;
static ParameterInfo t2843_m32352_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32352_GM;
MethodInfo m32352_MI = 
{
	"GetHashCode", NULL, &t2843_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2843_m32352_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32352_GM};
extern Il2CppType t206_0_0_0;
extern Il2CppType t206_0_0_0;
static ParameterInfo t2843_m24771_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m24771_GM;
MethodInfo m24771_MI = 
{
	"Equals", NULL, &t2843_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2843_m24771_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m24771_GM};
extern Il2CppType t2843_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15005_GM;
MethodInfo m15005_MI = 
{
	"get_Default", (methodPointerType)&m11825_gshared, &t2843_TI, &t2843_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15005_GM};
static MethodInfo* t2843_MIs[] =
{
	&m15001_MI,
	&m15002_MI,
	&m15003_MI,
	&m15004_MI,
	&m32352_MI,
	&m24771_MI,
	&m15005_MI,
	NULL
};
extern MethodInfo m15004_MI;
extern MethodInfo m15003_MI;
static MethodInfo* t2843_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m24771_MI,
	&m32352_MI,
	&m15004_MI,
	&m15003_MI,
	NULL,
	NULL,
};
extern TypeInfo t7588_TI;
extern TypeInfo t998_TI;
static TypeInfo* t2843_ITIs[] = 
{
	&t7588_TI,
	&t998_TI,
};
static Il2CppInterfaceOffsetPair t2843_IOs[] = 
{
	{ &t7588_TI, 4},
	{ &t998_TI, 6},
};
extern TypeInfo t2843_TI;
extern TypeInfo t2843_TI;
extern TypeInfo t2844_TI;
extern TypeInfo t206_TI;
static Il2CppRGCTXData t2843_RGCTXData[9] = 
{
	&t7587_0_0_0/* Type Usage */,
	&t206_0_0_0/* Type Usage */,
	&t2843_TI/* Class Usage */,
	&t2843_TI/* Static Usage */,
	&t2844_TI/* Class Usage */,
	&m15006_MI/* Method Usage */,
	&t206_TI/* Class Usage */,
	&m32352_MI/* Method Usage */,
	&m24771_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2843_0_0_0;
extern Il2CppType t2843_1_0_0;
struct t2843;
extern Il2CppGenericClass t2843_GC;
TypeInfo t2843_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2843_MIs, t2843_PIs, t2843_FIs, NULL, &t5_TI, NULL, NULL, &t2843_TI, t2843_ITIs, t2843_VT, &EmptyCustomAttributesCache, &t2843_TI, &t2843_0_0_0, &t2843_1_0_0, t2843_IOs, &t2843_GC, NULL, NULL, NULL, t2843_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2843), 0, -1, sizeof(t2843_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t206_0_0_0;
extern Il2CppType t206_0_0_0;
static ParameterInfo t7588_m32353_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32353_GM;
MethodInfo m32353_MI = 
{
	"Equals", NULL, &t7588_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t7588_m32353_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32353_GM};
extern Il2CppType t206_0_0_0;
static ParameterInfo t7588_m32354_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32354_GM;
MethodInfo m32354_MI = 
{
	"GetHashCode", NULL, &t7588_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7588_m32354_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32354_GM};
static MethodInfo* t7588_MIs[] =
{
	&m32353_MI,
	&m32354_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7588_0_0_0;
extern Il2CppType t7588_1_0_0;
struct t7588;
extern Il2CppGenericClass t7588_GC;
TypeInfo t7588_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t7588_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7588_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7588_TI, &t7588_0_0_0, &t7588_1_0_0, NULL, &t7588_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.IEquatable`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t206_0_0_0;
static ParameterInfo t7587_m32355_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32355_GM;
MethodInfo m32355_MI = 
{
	"Equals", NULL, &t7587_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7587_m32355_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32355_GM};
static MethodInfo* t7587_MIs[] =
{
	&m32355_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7587_1_0_0;
struct t7587;
extern Il2CppGenericClass t7587_GC;
TypeInfo t7587_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t7587_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7587_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7587_TI, &t7587_0_0_0, &t7587_1_0_0, NULL, &t7587_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m15001_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15006_GM;
MethodInfo m15006_MI = 
{
	".ctor", (methodPointerType)&m11856_gshared, &t2844_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15006_GM};
extern Il2CppType t206_0_0_0;
static ParameterInfo t2844_m15007_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15007_GM;
MethodInfo m15007_MI = 
{
	"GetHashCode", (methodPointerType)&m11857_gshared, &t2844_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2844_m15007_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15007_GM};
extern Il2CppType t206_0_0_0;
extern Il2CppType t206_0_0_0;
static ParameterInfo t2844_m15008_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15008_GM;
MethodInfo m15008_MI = 
{
	"Equals", (methodPointerType)&m11858_gshared, &t2844_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2844_m15008_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15008_GM};
static MethodInfo* t2844_MIs[] =
{
	&m15006_MI,
	&m15007_MI,
	&m15008_MI,
	NULL
};
extern MethodInfo m15008_MI;
extern MethodInfo m15007_MI;
static MethodInfo* t2844_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m15008_MI,
	&m15007_MI,
	&m15004_MI,
	&m15003_MI,
	&m15007_MI,
	&m15008_MI,
};
static Il2CppInterfaceOffsetPair t2844_IOs[] = 
{
	{ &t7588_TI, 4},
	{ &t998_TI, 6},
};
extern TypeInfo t2843_TI;
extern TypeInfo t2843_TI;
extern TypeInfo t2844_TI;
extern TypeInfo t206_TI;
extern TypeInfo t206_TI;
static Il2CppRGCTXData t2844_RGCTXData[11] = 
{
	&t7587_0_0_0/* Type Usage */,
	&t206_0_0_0/* Type Usage */,
	&t2843_TI/* Class Usage */,
	&t2843_TI/* Static Usage */,
	&t2844_TI/* Class Usage */,
	&m15006_MI/* Method Usage */,
	&t206_TI/* Class Usage */,
	&m32352_MI/* Method Usage */,
	&m24771_MI/* Method Usage */,
	&m15001_MI/* Method Usage */,
	&t206_TI/* Class Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2844_0_0_0;
extern Il2CppType t2844_1_0_0;
struct t2844;
extern Il2CppGenericClass t2844_GC;
extern TypeInfo t1519_TI;
TypeInfo t2844_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2844_MIs, NULL, NULL, NULL, &t2843_TI, NULL, &t1519_TI, &t2844_TI, NULL, t2844_VT, &EmptyCustomAttributesCache, &t2844_TI, &t2844_0_0_0, &t2844_1_0_0, t2844_IOs, &t2844_GC, NULL, NULL, NULL, t2844_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2844), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Predicate`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2836_m15009_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15009_GM;
MethodInfo m15009_MI = 
{
	".ctor", (methodPointerType)&m11859_gshared, &t2836_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2836_m15009_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15009_GM};
extern Il2CppType t206_0_0_0;
static ParameterInfo t2836_m15010_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15010_GM;
MethodInfo m15010_MI = 
{
	"Invoke", (methodPointerType)&m11860_gshared, &t2836_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2836_m15010_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15010_GM};
extern Il2CppType t206_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2836_m15011_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15011_GM;
MethodInfo m15011_MI = 
{
	"BeginInvoke", (methodPointerType)&m11861_gshared, &t2836_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t2836_m15011_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m15011_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2836_m15012_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15012_GM;
MethodInfo m15012_MI = 
{
	"EndInvoke", (methodPointerType)&m11862_gshared, &t2836_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2836_m15012_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15012_GM};
static MethodInfo* t2836_MIs[] =
{
	&m15009_MI,
	&m15010_MI,
	&m15011_MI,
	&m15012_MI,
	NULL
};
extern MethodInfo m15011_MI;
extern MethodInfo m15012_MI;
static MethodInfo* t2836_VT[] =
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
	&m15010_MI,
	&m15011_MI,
	&m15012_MI,
};
static Il2CppInterfaceOffsetPair t2836_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2836_1_0_0;
struct t2836;
extern Il2CppGenericClass t2836_GC;
TypeInfo t2836_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t2836_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t2836_TI, NULL, t2836_VT, &EmptyCustomAttributesCache, &t2836_TI, &t2836_0_0_0, &t2836_1_0_0, t2836_IOs, &t2836_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2836), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Action`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2837_m15013_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15013_GM;
MethodInfo m15013_MI = 
{
	".ctor", (methodPointerType)&m11863_gshared, &t2837_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2837_m15013_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15013_GM};
extern Il2CppType t206_0_0_0;
static ParameterInfo t2837_m15014_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15014_GM;
MethodInfo m15014_MI = 
{
	"Invoke", (methodPointerType)&m11864_gshared, &t2837_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2837_m15014_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15014_GM};
extern Il2CppType t206_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2837_m15015_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15015_GM;
MethodInfo m15015_MI = 
{
	"BeginInvoke", (methodPointerType)&m11865_gshared, &t2837_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t2837_m15015_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m15015_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2837_m15016_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15016_GM;
MethodInfo m15016_MI = 
{
	"EndInvoke", (methodPointerType)&m11866_gshared, &t2837_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2837_m15016_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15016_GM};
static MethodInfo* t2837_MIs[] =
{
	&m15013_MI,
	&m15014_MI,
	&m15015_MI,
	&m15016_MI,
	NULL
};
extern MethodInfo m15015_MI;
extern MethodInfo m15016_MI;
static MethodInfo* t2837_VT[] =
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
	&m15014_MI,
	&m15015_MI,
	&m15016_MI,
};
static Il2CppInterfaceOffsetPair t2837_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2837_1_0_0;
struct t2837;
extern Il2CppGenericClass t2837_GC;
TypeInfo t2837_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Action`1", "System", t2837_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t2837_TI, NULL, t2837_VT, &EmptyCustomAttributesCache, &t2837_TI, &t2837_0_0_0, &t2837_1_0_0, t2837_IOs, &t2837_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2837), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif

#include "t1510.h"
#include "t2846.h"
extern TypeInfo t4785_TI;
extern TypeInfo t1510_TI;
extern TypeInfo t2846_TI;
#include "t2846MD.h"
extern Il2CppType t4785_0_0_0;
extern Il2CppType t1510_0_0_0;
extern MethodInfo m15021_MI;
extern MethodInfo m32356_MI;
extern MethodInfo m10152_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t2845_0_0_49;
FieldInfo t2845_f0_FieldInfo = 
{
	"_default", &t2845_0_0_49, &t2845_TI, offsetof(t2845_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2845_FIs[] =
{
	&t2845_f0_FieldInfo,
	NULL
};
static PropertyInfo t2845____Default_PropertyInfo = 
{
	&t2845_TI, "Default", &m15020_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2845_PIs[] =
{
	&t2845____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15017_GM;
MethodInfo m15017_MI = 
{
	".ctor", (methodPointerType)&m11867_gshared, &t2845_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15017_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15018_GM;
MethodInfo m15018_MI = 
{
	".cctor", (methodPointerType)&m11868_gshared, &t2845_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15018_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2845_m15019_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15019_GM;
MethodInfo m15019_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m11869_gshared, &t2845_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t2845_m15019_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15019_GM};
extern Il2CppType t206_0_0_0;
extern Il2CppType t206_0_0_0;
static ParameterInfo t2845_m32356_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32356_GM;
MethodInfo m32356_MI = 
{
	"Compare", NULL, &t2845_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t2845_m32356_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32356_GM};
extern Il2CppType t2845_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15020_GM;
MethodInfo m15020_MI = 
{
	"get_Default", (methodPointerType)&m11870_gshared, &t2845_TI, &t2845_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15020_GM};
static MethodInfo* t2845_MIs[] =
{
	&m15017_MI,
	&m15018_MI,
	&m15019_MI,
	&m32356_MI,
	&m15020_MI,
	NULL
};
extern MethodInfo m15019_MI;
static MethodInfo* t2845_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m32356_MI,
	&m15019_MI,
	NULL,
};
extern TypeInfo t4784_TI;
extern TypeInfo t991_TI;
static TypeInfo* t2845_ITIs[] = 
{
	&t4784_TI,
	&t991_TI,
};
static Il2CppInterfaceOffsetPair t2845_IOs[] = 
{
	{ &t4784_TI, 4},
	{ &t991_TI, 5},
};
extern TypeInfo t2845_TI;
extern TypeInfo t2845_TI;
extern TypeInfo t2846_TI;
extern TypeInfo t206_TI;
static Il2CppRGCTXData t2845_RGCTXData[8] = 
{
	&t4785_0_0_0/* Type Usage */,
	&t206_0_0_0/* Type Usage */,
	&t2845_TI/* Class Usage */,
	&t2845_TI/* Static Usage */,
	&t2846_TI/* Class Usage */,
	&m15021_MI/* Method Usage */,
	&t206_TI/* Class Usage */,
	&m32356_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2845_0_0_0;
extern Il2CppType t2845_1_0_0;
struct t2845;
extern Il2CppGenericClass t2845_GC;
TypeInfo t2845_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2845_MIs, t2845_PIs, t2845_FIs, NULL, &t5_TI, NULL, NULL, &t2845_TI, t2845_ITIs, t2845_VT, &EmptyCustomAttributesCache, &t2845_TI, &t2845_0_0_0, &t2845_1_0_0, t2845_IOs, &t2845_GC, NULL, NULL, NULL, t2845_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2845), 0, -1, sizeof(t2845_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t206_0_0_0;
extern Il2CppType t206_0_0_0;
static ParameterInfo t4784_m24779_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m24779_GM;
MethodInfo m24779_MI = 
{
	"Compare", NULL, &t4784_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t4784_m24779_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m24779_GM};
static MethodInfo* t4784_MIs[] =
{
	&m24779_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4784_0_0_0;
extern Il2CppType t4784_1_0_0;
struct t4784;
extern Il2CppGenericClass t4784_GC;
TypeInfo t4784_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t4784_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4784_TI, NULL, NULL, &EmptyCustomAttributesCache, &t4784_TI, &t4784_0_0_0, &t4784_1_0_0, NULL, &t4784_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.IComparable`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t206_0_0_0;
static ParameterInfo t4785_m24780_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m24780_GM;
MethodInfo m24780_MI = 
{
	"CompareTo", NULL, &t4785_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t4785_m24780_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m24780_GM};
static MethodInfo* t4785_MIs[] =
{
	&m24780_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4785_1_0_0;
struct t4785;
extern Il2CppGenericClass t4785_GC;
TypeInfo t4785_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t4785_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4785_TI, NULL, NULL, &EmptyCustomAttributesCache, &t4785_TI, &t4785_0_0_0, &t4785_1_0_0, NULL, &t4785_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t122_TI;
extern MethodInfo m15017_MI;
extern MethodInfo m24780_MI;
extern MethodInfo m11009_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15021_GM;
MethodInfo m15021_MI = 
{
	".ctor", (methodPointerType)&m11871_gshared, &t2846_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15021_GM};
extern Il2CppType t206_0_0_0;
extern Il2CppType t206_0_0_0;
static ParameterInfo t2846_m15022_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15022_GM;
MethodInfo m15022_MI = 
{
	"Compare", (methodPointerType)&m11872_gshared, &t2846_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t2846_m15022_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15022_GM};
static MethodInfo* t2846_MIs[] =
{
	&m15021_MI,
	&m15022_MI,
	NULL
};
extern MethodInfo m15022_MI;
static MethodInfo* t2846_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m15022_MI,
	&m15019_MI,
	&m15022_MI,
};
static Il2CppInterfaceOffsetPair t2846_IOs[] = 
{
	{ &t4784_TI, 4},
	{ &t991_TI, 5},
};
extern TypeInfo t2845_TI;
extern TypeInfo t2845_TI;
extern TypeInfo t2846_TI;
extern TypeInfo t206_TI;
extern TypeInfo t206_TI;
extern TypeInfo t4785_TI;
static Il2CppRGCTXData t2846_RGCTXData[12] = 
{
	&t4785_0_0_0/* Type Usage */,
	&t206_0_0_0/* Type Usage */,
	&t2845_TI/* Class Usage */,
	&t2845_TI/* Static Usage */,
	&t2846_TI/* Class Usage */,
	&m15021_MI/* Method Usage */,
	&t206_TI/* Class Usage */,
	&m32356_MI/* Method Usage */,
	&m15017_MI/* Method Usage */,
	&t206_TI/* Class Usage */,
	&t4785_TI/* Class Usage */,
	&m24780_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2846_0_0_0;
extern Il2CppType t2846_1_0_0;
struct t2846;
extern Il2CppGenericClass t2846_GC;
extern TypeInfo t1509_TI;
TypeInfo t2846_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2846_MIs, NULL, NULL, NULL, &t2845_TI, NULL, &t1509_TI, &t2846_TI, NULL, t2846_VT, &EmptyCustomAttributesCache, &t2846_TI, &t2846_0_0_0, &t2846_1_0_0, t2846_IOs, &t2846_GC, NULL, NULL, NULL, t2846_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2846), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2838_TI;
#include "t2838MD.h"



// Metadata Definition System.Comparison`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2838_m15023_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15023_GM;
MethodInfo m15023_MI = 
{
	".ctor", (methodPointerType)&m11938_gshared, &t2838_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2838_m15023_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15023_GM};
extern Il2CppType t206_0_0_0;
extern Il2CppType t206_0_0_0;
static ParameterInfo t2838_m15024_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15024_GM;
MethodInfo m15024_MI = 
{
	"Invoke", (methodPointerType)&m11939_gshared, &t2838_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t2838_m15024_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15024_GM};
extern Il2CppType t206_0_0_0;
extern Il2CppType t206_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2838_m15025_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t206_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15025_GM;
MethodInfo m15025_MI = 
{
	"BeginInvoke", (methodPointerType)&m11940_gshared, &t2838_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5_t5, t2838_m15025_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL, &m15025_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2838_m15026_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15026_GM;
MethodInfo m15026_MI = 
{
	"EndInvoke", (methodPointerType)&m11941_gshared, &t2838_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2838_m15026_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15026_GM};
static MethodInfo* t2838_MIs[] =
{
	&m15023_MI,
	&m15024_MI,
	&m15025_MI,
	&m15026_MI,
	NULL
};
extern MethodInfo m15024_MI;
extern MethodInfo m15025_MI;
extern MethodInfo m15026_MI;
static MethodInfo* t2838_VT[] =
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
	&m15024_MI,
	&m15025_MI,
	&m15026_MI,
};
static Il2CppInterfaceOffsetPair t2838_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2838_1_0_0;
struct t2838;
extern Il2CppGenericClass t2838_GC;
TypeInfo t2838_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t2838_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t2838_TI, NULL, t2838_VT, &EmptyCustomAttributesCache, &t2838_TI, &t2838_0_0_0, &t2838_1_0_0, t2838_IOs, &t2838_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2838), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t208.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t208_TI;
#include "t208MD.h"

#include "t212.h"


extern MethodInfo m1950_MI;
 void m1950 (t208 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m15027_MI;
 int32_t m15027 (t208 * __this, t212  p0, t212  p1, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m15027((t208 *)__this->f9,p0, p1, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (t5 *, t5 * __this, t212  p0, t212  p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	typedef int32_t (*FunctionPointerType) (t5 * __this, t212  p0, t212  p1, MethodInfo* method);
	return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m15028_MI;
 t5 * m15028 (t208 * __this, t212  p0, t212  p1, t222 * p2, t5 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t212_TI), &p0);
	__d_args[1] = Box(InitializedTypeInfo(&t212_TI), &p1);
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m15029_MI;
 int32_t m15029 (t208 * __this, t5 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t208_m1950_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m1950_GM;
MethodInfo m1950_MI = 
{
	".ctor", (methodPointerType)&m1950, &t208_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t208_m1950_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m1950_GM};
extern Il2CppType t212_0_0_0;
extern Il2CppType t212_0_0_0;
extern Il2CppType t212_0_0_0;
static ParameterInfo t208_m15027_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t212_t212 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15027_GM;
MethodInfo m15027_MI = 
{
	"Invoke", (methodPointerType)&m15027, &t208_TI, &t110_0_0_0, RuntimeInvoker_t110_t212_t212, t208_m15027_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15027_GM};
extern Il2CppType t212_0_0_0;
extern Il2CppType t212_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t208_m15028_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t212_t212_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15028_GM;
MethodInfo m15028_MI = 
{
	"BeginInvoke", (methodPointerType)&m15028, &t208_TI, &t221_0_0_0, RuntimeInvoker_t5_t212_t212_t5_t5, t208_m15028_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL, &m15028_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t208_m15029_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15029_GM;
MethodInfo m15029_MI = 
{
	"EndInvoke", (methodPointerType)&m15029, &t208_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t208_m15029_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15029_GM};
static MethodInfo* t208_MIs[] =
{
	&m1950_MI,
	&m15027_MI,
	&m15028_MI,
	&m15029_MI,
	NULL
};
static MethodInfo* t208_VT[] =
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
	&m15027_MI,
	&m15028_MI,
	&m15029_MI,
};
static Il2CppInterfaceOffsetPair t208_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t208_0_0_0;
extern Il2CppType t208_1_0_0;
struct t208;
extern Il2CppGenericClass t208_GC;
TypeInfo t208_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t208_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t208_TI, NULL, t208_VT, &EmptyCustomAttributesCache, &t208_TI, &t208_0_0_0, &t208_1_0_0, t208_IOs, &t208_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t208), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t237.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t237_TI;
#include "t237MD.h"

#include "t207.h"


// Metadata Definition UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t237_m2008_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m2008_GM;
MethodInfo m2008_MI = 
{
	".ctor", (methodPointerType)&m15030_gshared, &t237_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t237_m2008_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m2008_GM};
extern Il2CppType t257_0_0_0;
extern Il2CppType t257_0_0_0;
extern Il2CppType t207_0_0_0;
extern Il2CppType t207_0_0_0;
static ParameterInfo t237_m15031_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t257_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15031_GM;
MethodInfo m15031_MI = 
{
	"Invoke", (methodPointerType)&m15032_gshared, &t237_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t237_m15031_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15031_GM};
extern Il2CppType t257_0_0_0;
extern Il2CppType t207_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t237_m15033_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t257_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15033_GM;
MethodInfo m15033_MI = 
{
	"BeginInvoke", (methodPointerType)&m15034_gshared, &t237_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5_t5, t237_m15033_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL, &m15033_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t237_m15035_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15035_GM;
MethodInfo m15035_MI = 
{
	"EndInvoke", (methodPointerType)&m15036_gshared, &t237_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t237_m15035_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15035_GM};
static MethodInfo* t237_MIs[] =
{
	&m2008_MI,
	&m15031_MI,
	&m15033_MI,
	&m15035_MI,
	NULL
};
extern MethodInfo m15031_MI;
extern MethodInfo m15033_MI;
extern MethodInfo m15035_MI;
static MethodInfo* t237_VT[] =
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
	&m15031_MI,
	&m15033_MI,
	&m15035_MI,
};
static Il2CppInterfaceOffsetPair t237_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t237_0_0_0;
extern Il2CppType t237_1_0_0;
struct t237;
extern Il2CppGenericClass t237_GC;
extern TypeInfo t223_TI;
TypeInfo t237_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "EventFunction`1", "", t237_MIs, NULL, NULL, NULL, &t353_TI, NULL, &t223_TI, &t237_TI, NULL, t237_VT, &EmptyCustomAttributesCache, &t237_TI, &t237_0_0_0, &t237_1_0_0, t237_IOs, &t237_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t237), 0, -1, 0, 0, -1, 258, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2847.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2847_TI;
#include "t2847MD.h"



extern MethodInfo m15030_MI;
 void m15030_gshared (t2847 * __this, t5 * p0, t124 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m15032_MI;
 void m15032_gshared (t2847 * __this, t5 * p0, t207 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m15032((t2847 *)__this->f9,p0, p1, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t5 *, t5 * __this, t5 * p0, t207 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t5 * __this, t5 * p0, t207 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t5 * __this, t207 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern MethodInfo m15034_MI;
 t5 * m15034_gshared (t2847 * __this, t5 * p0, t207 * p1, t222 * p2, t5 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m15036_MI;
 void m15036_gshared (t2847 * __this, t5 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
// Metadata Definition UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2847_m15030_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15030_GM;
MethodInfo m15030_MI = 
{
	".ctor", (methodPointerType)&m15030_gshared, &t2847_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2847_m15030_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15030_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t207_0_0_0;
static ParameterInfo t2847_m15032_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15032_GM;
MethodInfo m15032_MI = 
{
	"Invoke", (methodPointerType)&m15032_gshared, &t2847_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t2847_m15032_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15032_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t207_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2847_m15034_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15034_GM;
MethodInfo m15034_MI = 
{
	"BeginInvoke", (methodPointerType)&m15034_gshared, &t2847_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5_t5, t2847_m15034_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL, &m15034_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2847_m15036_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15036_GM;
MethodInfo m15036_MI = 
{
	"EndInvoke", (methodPointerType)&m15036_gshared, &t2847_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2847_m15036_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15036_GM};
static MethodInfo* t2847_MIs[] =
{
	&m15030_MI,
	&m15032_MI,
	&m15034_MI,
	&m15036_MI,
	NULL
};
static MethodInfo* t2847_VT[] =
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
	&m15032_MI,
	&m15034_MI,
	&m15036_MI,
};
static Il2CppInterfaceOffsetPair t2847_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t2847_0_0_0;
extern Il2CppType t2847_1_0_0;
struct t2847;
extern Il2CppGenericClass t2847_GC;
TypeInfo t2847_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "EventFunction`1", "", t2847_MIs, NULL, NULL, NULL, &t353_TI, NULL, &t223_TI, &t2847_TI, NULL, t2847_VT, &EmptyCustomAttributesCache, &t2847_TI, &t2847_0_0_0, &t2847_1_0_0, t2847_IOs, &t2847_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2847), 0, -1, 0, 0, -1, 258, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t262.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t262_TI;
#include "t262MD.h"

#include "t2856.h"
#include "t2852.h"
#include "t2853.h"
#include "t2854.h"
#include "t2861.h"
#include "t2855.h"
extern TypeInfo t447_TI;
extern TypeInfo t2851_TI;
extern TypeInfo t2848_TI;
extern TypeInfo t2856_TI;
extern TypeInfo t2849_TI;
extern TypeInfo t2850_TI;
extern TypeInfo t2852_TI;
extern TypeInfo t2853_TI;
extern TypeInfo t2854_TI;
extern TypeInfo t2861_TI;
#include "t2852MD.h"
#include "t2853MD.h"
#include "t2854MD.h"
#include "t2856MD.h"
#include "t2861MD.h"
extern MethodInfo m15085_MI;
extern MethodInfo m15086_MI;
extern MethodInfo m24797_MI;
extern MethodInfo m15071_MI;
extern MethodInfo m15073_MI;
extern MethodInfo m15059_MI;
extern MethodInfo m32357_MI;
extern MethodInfo m15058_MI;
extern MethodInfo m15068_MI;
extern MethodInfo m15056_MI;
extern MethodInfo m15062_MI;
extern MethodInfo m15069_MI;
extern MethodInfo m15072_MI;
extern MethodInfo m15074_MI;
extern MethodInfo m15057_MI;
extern MethodInfo m15082_MI;
extern MethodInfo m15083_MI;
extern MethodInfo m32358_MI;
extern MethodInfo m32359_MI;
extern MethodInfo m32360_MI;
extern MethodInfo m15098_MI;
extern MethodInfo m24799_MI;
extern MethodInfo m15065_MI;
extern MethodInfo m15066_MI;
extern MethodInfo m15173_MI;
extern MethodInfo m15177_MI;
extern MethodInfo m15092_MI;
extern MethodInfo m15070_MI;
extern MethodInfo m15076_MI;
extern MethodInfo m15183_MI;
extern MethodInfo m24801_MI;
extern MethodInfo m24809_MI;
struct t107;
#define m24797(__this, p0, p1, method) (void)m23607_gshared((t5 *)__this, (t168**)p0, (int32_t)p1, method)
struct t107;
#include "t2859.h"
#define m24799(__this, p0, p1, p2, p3, method) (int32_t)m11458_gshared((t5 *)__this, (t168*)p0, (t5 *)p1, (int32_t)p2, (int32_t)p3, method)
struct t107;
#define m24801(__this, p0, p1, p2, p3, method) (void)m23676_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (int32_t)p2, (t5*)p3, method)
struct t107;
#define m24809(__this, p0, p1, p2, method) (void)m23827_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (t2458 *)p2, method)


 t2856  m15068 (t262 * __this, MethodInfo* method){
	{
		t2856  L_0 = {0};
		m15092(&L_0, __this, &m15092_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t110_0_0_32849;
FieldInfo t262_f0_FieldInfo = 
{
	"DefaultCapacity", &t110_0_0_32849, &t262_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2848_0_0_1;
FieldInfo t262_f1_FieldInfo = 
{
	"_items", &t2848_0_0_1, &t262_TI, offsetof(t262, f1), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t262_f2_FieldInfo = 
{
	"_size", &t110_0_0_1, &t262_TI, offsetof(t262, f2), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t262_f3_FieldInfo = 
{
	"_version", &t110_0_0_1, &t262_TI, offsetof(t262, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2848_0_0_49;
FieldInfo t262_f4_FieldInfo = 
{
	"EmptyArray", &t2848_0_0_49, &t262_TI, offsetof(t262_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t262_FIs[] =
{
	&t262_f0_FieldInfo,
	&t262_f1_FieldInfo,
	&t262_f2_FieldInfo,
	&t262_f3_FieldInfo,
	&t262_f4_FieldInfo,
	NULL
};
static const int32_t t262_f0_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t262_f0_DefaultValue = 
{
	&t262_f0_FieldInfo, { (char*)&t262_f0_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t262_FDVs[] = 
{
	&t262_f0_DefaultValue,
	NULL
};
extern MethodInfo m15049_MI;
static PropertyInfo t262____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t262_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m15049_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15050_MI;
static PropertyInfo t262____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t262_TI, "System.Collections.ICollection.IsSynchronized", &m15050_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15051_MI;
static PropertyInfo t262____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t262_TI, "System.Collections.ICollection.SyncRoot", &m15051_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15052_MI;
static PropertyInfo t262____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t262_TI, "System.Collections.IList.IsFixedSize", &m15052_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15053_MI;
static PropertyInfo t262____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t262_TI, "System.Collections.IList.IsReadOnly", &m15053_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15054_MI;
extern MethodInfo m15055_MI;
static PropertyInfo t262____System_Collections_IList_Item_PropertyInfo = 
{
	&t262_TI, "System.Collections.IList.Item", &m15054_MI, &m15055_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t262____Capacity_PropertyInfo = 
{
	&t262_TI, "Capacity", &m15082_MI, &m15083_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15084_MI;
static PropertyInfo t262____Count_PropertyInfo = 
{
	&t262_TI, "Count", &m15084_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t262____Item_PropertyInfo = 
{
	&t262_TI, "Item", &m15085_MI, &m15086_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t262_PIs[] =
{
	&t262____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t262____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t262____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t262____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t262____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t262____System_Collections_IList_Item_PropertyInfo,
	&t262____Capacity_PropertyInfo,
	&t262____Count_PropertyInfo,
	&t262____Item_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15037_GM;
MethodInfo m15037_MI = 
{
	".ctor", (methodPointerType)&m11648_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15037_GM};
extern Il2CppType t2849_0_0_0;
extern Il2CppType t2849_0_0_0;
static ParameterInfo t262_m15038_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2849_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15038_GM;
MethodInfo m15038_MI = 
{
	".ctor", (methodPointerType)&m11650_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t262_m15038_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15038_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t262_m15039_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15039_GM;
MethodInfo m15039_MI = 
{
	".ctor", (methodPointerType)&m11652_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t262_m15039_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15039_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15040_GM;
MethodInfo m15040_MI = 
{
	".cctor", (methodPointerType)&m11654_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15040_GM};
extern Il2CppType t2850_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15041_GM;
MethodInfo m15041_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m11656_gshared, &t262_TI, &t2850_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15041_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t262_m15042_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15042_GM;
MethodInfo m15042_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11658_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t262_m15042_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15042_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15043_GM;
MethodInfo m15043_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11660_gshared, &t262_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15043_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t262_m15044_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15044_GM;
MethodInfo m15044_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11662_gshared, &t262_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t262_m15044_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15044_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t262_m15045_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15045_GM;
MethodInfo m15045_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11664_gshared, &t262_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t262_m15045_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15045_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t262_m15046_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15046_GM;
MethodInfo m15046_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11666_gshared, &t262_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t262_m15046_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15046_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t262_m15047_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15047_GM;
MethodInfo m15047_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11668_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t262_m15047_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15047_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t262_m15048_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15048_GM;
MethodInfo m15048_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11670_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t262_m15048_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15048_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15049_GM;
MethodInfo m15049_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11672_gshared, &t262_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15049_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15050_GM;
MethodInfo m15050_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11674_gshared, &t262_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15050_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15051_GM;
MethodInfo m15051_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11676_gshared, &t262_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15051_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15052_GM;
MethodInfo m15052_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11678_gshared, &t262_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15052_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15053_GM;
MethodInfo m15053_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11680_gshared, &t262_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15053_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t262_m15054_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15054_GM;
MethodInfo m15054_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11682_gshared, &t262_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t262_m15054_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15054_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t262_m15055_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15055_GM;
MethodInfo m15055_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11684_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t262_m15055_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15055_GM};
extern Il2CppType t447_0_0_0;
extern Il2CppType t447_0_0_0;
static ParameterInfo t262_m15056_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15056_GM;
MethodInfo m15056_MI = 
{
	"Add", (methodPointerType)&m11686_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t262_m15056_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15056_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t262_m15057_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15057_GM;
MethodInfo m15057_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m11688_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t262_m15057_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15057_GM};
extern Il2CppType t2851_0_0_0;
extern Il2CppType t2851_0_0_0;
static ParameterInfo t262_m15058_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2851_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15058_GM;
MethodInfo m15058_MI = 
{
	"AddCollection", (methodPointerType)&m11690_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t262_m15058_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15058_GM};
extern Il2CppType t2849_0_0_0;
static ParameterInfo t262_m15059_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t2849_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15059_GM;
MethodInfo m15059_MI = 
{
	"AddEnumerable", (methodPointerType)&m11692_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t262_m15059_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15059_GM};
extern Il2CppType t2849_0_0_0;
static ParameterInfo t262_m15060_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2849_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15060_GM;
MethodInfo m15060_MI = 
{
	"AddRange", (methodPointerType)&m11693_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t262_m15060_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15060_GM};
extern Il2CppType t2852_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15061_GM;
MethodInfo m15061_MI = 
{
	"AsReadOnly", (methodPointerType)&m11695_gshared, &t262_TI, &t2852_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15061_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m2020_GM;
MethodInfo m2020_MI = 
{
	"Clear", (methodPointerType)&m11696_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m2020_GM};
extern Il2CppType t447_0_0_0;
static ParameterInfo t262_m15062_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15062_GM;
MethodInfo m15062_MI = 
{
	"Contains", (methodPointerType)&m11698_gshared, &t262_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t262_m15062_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15062_GM};
extern Il2CppType t2848_0_0_0;
extern Il2CppType t2848_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t262_m15063_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2848_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15063_GM;
MethodInfo m15063_MI = 
{
	"CopyTo", (methodPointerType)&m11700_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t262_m15063_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15063_GM};
extern Il2CppType t2853_0_0_0;
extern Il2CppType t2853_0_0_0;
static ParameterInfo t262_m15064_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2853_0_0_0},
};
extern Il2CppType t447_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15064_GM;
MethodInfo m15064_MI = 
{
	"Find", (methodPointerType)&m11702_gshared, &t262_TI, &t447_0_0_0, RuntimeInvoker_t5_t5, t262_m15064_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15064_GM};
extern Il2CppType t2853_0_0_0;
static ParameterInfo t262_m15065_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2853_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15065_GM;
MethodInfo m15065_MI = 
{
	"CheckMatch", (methodPointerType)&m11704_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t262_m15065_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15065_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2853_0_0_0;
static ParameterInfo t262_m15066_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t2853_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15066_GM;
MethodInfo m15066_MI = 
{
	"GetIndex", (methodPointerType)&m11706_gshared, &t262_TI, &t110_0_0_0, RuntimeInvoker_t110_t110_t110_t5, t262_m15066_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL, &m15066_GM};
extern Il2CppType t2854_0_0_0;
extern Il2CppType t2854_0_0_0;
static ParameterInfo t262_m15067_ParameterInfos[] = 
{
	{"action", 0, 134217728, &EmptyCustomAttributesCache, &t2854_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15067_GM;
MethodInfo m15067_MI = 
{
	"ForEach", (methodPointerType)&m11707_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t262_m15067_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15067_GM};
extern Il2CppType t2856_0_0_0;
extern void* RuntimeInvoker_t2856 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15068_GM;
MethodInfo m15068_MI = 
{
	"GetEnumerator", (methodPointerType)&m15068, &t262_TI, &t2856_0_0_0, RuntimeInvoker_t2856, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15068_GM};
extern Il2CppType t447_0_0_0;
static ParameterInfo t262_m15069_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15069_GM;
MethodInfo m15069_MI = 
{
	"IndexOf", (methodPointerType)&m11709_gshared, &t262_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t262_m15069_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15069_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t262_m15070_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15070_GM;
MethodInfo m15070_MI = 
{
	"Shift", (methodPointerType)&m11711_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t262_m15070_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15070_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t262_m15071_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15071_GM;
MethodInfo m15071_MI = 
{
	"CheckIndex", (methodPointerType)&m11713_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t262_m15071_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15071_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t447_0_0_0;
static ParameterInfo t262_m15072_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15072_GM;
MethodInfo m15072_MI = 
{
	"Insert", (methodPointerType)&m11715_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t262_m15072_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15072_GM};
extern Il2CppType t2849_0_0_0;
static ParameterInfo t262_m15073_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2849_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15073_GM;
MethodInfo m15073_MI = 
{
	"CheckCollection", (methodPointerType)&m11717_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t262_m15073_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15073_GM};
extern Il2CppType t447_0_0_0;
static ParameterInfo t262_m15074_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15074_GM;
MethodInfo m15074_MI = 
{
	"Remove", (methodPointerType)&m11719_gshared, &t262_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t262_m15074_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15074_GM};
extern Il2CppType t2853_0_0_0;
static ParameterInfo t262_m15075_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2853_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15075_GM;
MethodInfo m15075_MI = 
{
	"RemoveAll", (methodPointerType)&m11721_gshared, &t262_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t262_m15075_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15075_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t262_m15076_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15076_GM;
MethodInfo m15076_MI = 
{
	"RemoveAt", (methodPointerType)&m11723_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t262_m15076_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15076_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15077_GM;
MethodInfo m15077_MI = 
{
	"Reverse", (methodPointerType)&m11725_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15077_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15078_GM;
MethodInfo m15078_MI = 
{
	"Sort", (methodPointerType)&m11727_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15078_GM};
extern Il2CppType t2855_0_0_0;
extern Il2CppType t2855_0_0_0;
static ParameterInfo t262_m15079_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t2855_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15079_GM;
MethodInfo m15079_MI = 
{
	"Sort", (methodPointerType)&m11729_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t262_m15079_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15079_GM};
extern Il2CppType t2848_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15080_GM;
MethodInfo m15080_MI = 
{
	"ToArray", (methodPointerType)&m11731_gshared, &t262_TI, &t2848_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15080_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15081_GM;
MethodInfo m15081_MI = 
{
	"TrimExcess", (methodPointerType)&m11733_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15081_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15082_GM;
MethodInfo m15082_MI = 
{
	"get_Capacity", (methodPointerType)&m11735_gshared, &t262_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15082_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t262_m15083_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15083_GM;
MethodInfo m15083_MI = 
{
	"set_Capacity", (methodPointerType)&m11737_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t262_m15083_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15083_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15084_GM;
MethodInfo m15084_MI = 
{
	"get_Count", (methodPointerType)&m11738_gshared, &t262_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15084_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t262_m15085_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t447_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15085_GM;
MethodInfo m15085_MI = 
{
	"get_Item", (methodPointerType)&m11740_gshared, &t262_TI, &t447_0_0_0, RuntimeInvoker_t5_t110, t262_m15085_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15085_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t447_0_0_0;
static ParameterInfo t262_m15086_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15086_GM;
MethodInfo m15086_MI = 
{
	"set_Item", (methodPointerType)&m11742_gshared, &t262_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t262_m15086_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15086_GM};
static MethodInfo* t262_MIs[] =
{
	&m15037_MI,
	&m15038_MI,
	&m15039_MI,
	&m15040_MI,
	&m15041_MI,
	&m15042_MI,
	&m15043_MI,
	&m15044_MI,
	&m15045_MI,
	&m15046_MI,
	&m15047_MI,
	&m15048_MI,
	&m15049_MI,
	&m15050_MI,
	&m15051_MI,
	&m15052_MI,
	&m15053_MI,
	&m15054_MI,
	&m15055_MI,
	&m15056_MI,
	&m15057_MI,
	&m15058_MI,
	&m15059_MI,
	&m15060_MI,
	&m15061_MI,
	&m2020_MI,
	&m15062_MI,
	&m15063_MI,
	&m15064_MI,
	&m15065_MI,
	&m15066_MI,
	&m15067_MI,
	&m15068_MI,
	&m15069_MI,
	&m15070_MI,
	&m15071_MI,
	&m15072_MI,
	&m15073_MI,
	&m15074_MI,
	&m15075_MI,
	&m15076_MI,
	&m15077_MI,
	&m15078_MI,
	&m15079_MI,
	&m15080_MI,
	&m15081_MI,
	&m15082_MI,
	&m15083_MI,
	&m15084_MI,
	&m15085_MI,
	&m15086_MI,
	NULL
};
extern MethodInfo m15043_MI;
extern MethodInfo m15042_MI;
extern MethodInfo m15044_MI;
extern MethodInfo m2020_MI;
extern MethodInfo m15045_MI;
extern MethodInfo m15046_MI;
extern MethodInfo m15047_MI;
extern MethodInfo m15048_MI;
extern MethodInfo m15063_MI;
extern MethodInfo m15041_MI;
static MethodInfo* t262_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m15043_MI,
	&m15084_MI,
	&m15050_MI,
	&m15051_MI,
	&m15042_MI,
	&m15052_MI,
	&m15053_MI,
	&m15054_MI,
	&m15055_MI,
	&m15044_MI,
	&m2020_MI,
	&m15045_MI,
	&m15046_MI,
	&m15047_MI,
	&m15048_MI,
	&m15076_MI,
	&m15084_MI,
	&m15049_MI,
	&m15056_MI,
	&m2020_MI,
	&m15062_MI,
	&m15063_MI,
	&m15074_MI,
	&m15041_MI,
	&m15069_MI,
	&m15072_MI,
	&m15076_MI,
	&m15085_MI,
	&m15086_MI,
};
extern TypeInfo t464_TI;
static TypeInfo* t262_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t2851_TI,
	&t2849_TI,
	&t464_TI,
};
static Il2CppInterfaceOffsetPair t262_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t2851_TI, 20},
	{ &t2849_TI, 27},
	{ &t464_TI, 28},
};
extern TypeInfo t262_TI;
extern TypeInfo t2851_TI;
extern TypeInfo t2848_TI;
extern TypeInfo t2856_TI;
extern TypeInfo t447_TI;
extern TypeInfo t2852_TI;
static Il2CppRGCTXData t262_RGCTXData[38] = 
{
	&t262_TI/* Static Usage */,
	&m15073_MI/* Method Usage */,
	&t2851_TI/* Class Usage */,
	&m15059_MI/* Method Usage */,
	&m32357_MI/* Method Usage */,
	&t2848_TI/* Array Usage */,
	&m15058_MI/* Method Usage */,
	&m15068_MI/* Method Usage */,
	&t2856_TI/* Class Usage */,
	&t447_TI/* Class Usage */,
	&m15056_MI/* Method Usage */,
	&m15062_MI/* Method Usage */,
	&m15069_MI/* Method Usage */,
	&m15071_MI/* Method Usage */,
	&m15072_MI/* Method Usage */,
	&m15074_MI/* Method Usage */,
	&m15085_MI/* Method Usage */,
	&m15086_MI/* Method Usage */,
	&m15057_MI/* Method Usage */,
	&m15082_MI/* Method Usage */,
	&m15083_MI/* Method Usage */,
	&m32358_MI/* Method Usage */,
	&m32359_MI/* Method Usage */,
	&m32360_MI/* Method Usage */,
	&t2852_TI/* Class Usage */,
	&m15098_MI/* Method Usage */,
	&m24799_MI/* Method Usage */,
	&m15065_MI/* Method Usage */,
	&m15066_MI/* Method Usage */,
	&m15173_MI/* Method Usage */,
	&m15177_MI/* Method Usage */,
	&m15092_MI/* Method Usage */,
	&m15070_MI/* Method Usage */,
	&m15076_MI/* Method Usage */,
	&m15183_MI/* Method Usage */,
	&m24801_MI/* Method Usage */,
	&m24809_MI/* Method Usage */,
	&m24797_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t262_0_0_0;
extern Il2CppType t262_1_0_0;
struct t262;
extern Il2CppGenericClass t262_GC;
extern CustomAttributesCache t1524__CustomAttributeCache;
TypeInfo t262_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t262_MIs, t262_PIs, t262_FIs, NULL, &t5_TI, NULL, NULL, &t262_TI, t262_ITIs, t262_VT, &t1524__CustomAttributeCache, &t262_TI, &t262_0_0_0, &t262_1_0_0, t262_IOs, &t262_GC, NULL, t262_FDVs, NULL, t262_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t262), 0, -1, sizeof(t262_SFs), 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, true, false, false, 51, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IEventSystemHandler>
static PropertyInfo t2851____Count_PropertyInfo = 
{
	&t2851_TI, "Count", &m32357_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m32361_MI;
static PropertyInfo t2851____IsReadOnly_PropertyInfo = 
{
	&t2851_TI, "IsReadOnly", &m32361_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2851_PIs[] =
{
	&t2851____Count_PropertyInfo,
	&t2851____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32357_GM;
MethodInfo m32357_MI = 
{
	"get_Count", NULL, &t2851_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32357_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32361_GM;
MethodInfo m32361_MI = 
{
	"get_IsReadOnly", NULL, &t2851_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32361_GM};
extern Il2CppType t447_0_0_0;
static ParameterInfo t2851_m24850_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m24850_GM;
MethodInfo m24850_MI = 
{
	"Add", NULL, &t2851_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2851_m24850_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m24850_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32362_GM;
MethodInfo m32362_MI = 
{
	"Clear", NULL, &t2851_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32362_GM};
extern Il2CppType t447_0_0_0;
static ParameterInfo t2851_m32363_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32363_GM;
MethodInfo m32363_MI = 
{
	"Contains", NULL, &t2851_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2851_m32363_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32363_GM};
extern Il2CppType t2848_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2851_m32358_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2848_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32358_GM;
MethodInfo m32358_MI = 
{
	"CopyTo", NULL, &t2851_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2851_m32358_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32358_GM};
extern Il2CppType t447_0_0_0;
static ParameterInfo t2851_m32364_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32364_GM;
MethodInfo m32364_MI = 
{
	"Remove", NULL, &t2851_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2851_m32364_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32364_GM};
static MethodInfo* t2851_MIs[] =
{
	&m32357_MI,
	&m32361_MI,
	&m24850_MI,
	&m32362_MI,
	&m32363_MI,
	&m32358_MI,
	&m32364_MI,
	NULL
};
static TypeInfo* t2851_ITIs[] = 
{
	&t739_TI,
	&t2849_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2851_1_0_0;
struct t2851;
extern Il2CppGenericClass t2851_GC;
TypeInfo t2851_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t2851_MIs, t2851_PIs, NULL, NULL, NULL, NULL, NULL, &t2851_TI, t2851_ITIs, NULL, &EmptyCustomAttributesCache, &t2851_TI, &t2851_0_0_0, &t2851_1_0_0, NULL, &t2851_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t2850_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32359_GM;
MethodInfo m32359_MI = 
{
	"GetEnumerator", NULL, &t2849_TI, &t2850_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32359_GM};
static MethodInfo* t2849_MIs[] =
{
	&m32359_MI,
	NULL
};
static TypeInfo* t2849_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2849_1_0_0;
struct t2849;
extern Il2CppGenericClass t2849_GC;
TypeInfo t2849_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t2849_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2849_TI, t2849_ITIs, NULL, &EmptyCustomAttributesCache, &t2849_TI, &t2849_0_0_0, &t2849_1_0_0, NULL, &t2849_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>
static PropertyInfo t2850____Current_PropertyInfo = 
{
	&t2850_TI, "Current", &m32360_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2850_PIs[] =
{
	&t2850____Current_PropertyInfo,
	NULL
};
extern Il2CppType t447_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32360_GM;
MethodInfo m32360_MI = 
{
	"get_Current", NULL, &t2850_TI, &t447_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32360_GM};
static MethodInfo* t2850_MIs[] =
{
	&m32360_MI,
	NULL
};
static TypeInfo* t2850_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2850_0_0_0;
extern Il2CppType t2850_1_0_0;
struct t2850;
extern Il2CppGenericClass t2850_GC;
TypeInfo t2850_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2850_MIs, t2850_PIs, NULL, NULL, NULL, NULL, NULL, &t2850_TI, t2850_ITIs, NULL, &EmptyCustomAttributesCache, &t2850_TI, &t2850_0_0_0, &t2850_1_0_0, NULL, &t2850_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2857.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2857_TI;
#include "t2857MD.h"

extern MethodInfo m15091_MI;
extern MethodInfo m24786_MI;
struct t107;
#define m24786(__this, p0, method) (t5 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t107_0_0_1;
FieldInfo t2857_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t2857_TI, offsetof(t2857, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2857_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2857_TI, offsetof(t2857, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2857_FIs[] =
{
	&t2857_f0_FieldInfo,
	&t2857_f1_FieldInfo,
	NULL
};
extern MethodInfo m15088_MI;
static PropertyInfo t2857____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2857_TI, "System.Collections.IEnumerator.Current", &m15088_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2857____Current_PropertyInfo = 
{
	&t2857_TI, "Current", &m15091_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2857_PIs[] =
{
	&t2857____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2857____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t2857_m15087_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15087_GM;
MethodInfo m15087_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t2857_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2857_m15087_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15087_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15088_GM;
MethodInfo m15088_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t2857_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15088_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15089_GM;
MethodInfo m15089_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t2857_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15089_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15090_GM;
MethodInfo m15090_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t2857_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15090_GM};
extern Il2CppType t447_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15091_GM;
MethodInfo m15091_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t2857_TI, &t447_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15091_GM};
static MethodInfo* t2857_MIs[] =
{
	&m15087_MI,
	&m15088_MI,
	&m15089_MI,
	&m15090_MI,
	&m15091_MI,
	NULL
};
extern MethodInfo m15090_MI;
extern MethodInfo m15089_MI;
static MethodInfo* t2857_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m15088_MI,
	&m15090_MI,
	&m15089_MI,
	&m15091_MI,
};
static TypeInfo* t2857_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t2850_TI,
};
static Il2CppInterfaceOffsetPair t2857_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t2850_TI, 7},
};
extern TypeInfo t447_TI;
static Il2CppRGCTXData t2857_RGCTXData[3] = 
{
	&m15091_MI/* Method Usage */,
	&t447_TI/* Class Usage */,
	&m24786_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2857_0_0_0;
extern Il2CppType t2857_1_0_0;
extern Il2CppGenericClass t2857_GC;
TypeInfo t2857_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2857_MIs, t2857_PIs, t2857_FIs, NULL, &t267_TI, NULL, &t107_TI, &t2857_TI, t2857_ITIs, t2857_VT, &EmptyCustomAttributesCache, &t2857_TI, &t2857_0_0_0, &t2857_1_0_0, t2857_IOs, &t2857_GC, NULL, NULL, NULL, t2857_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2857)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.IEventSystemHandler>
extern MethodInfo m32365_MI;
extern MethodInfo m32366_MI;
static PropertyInfo t464____Item_PropertyInfo = 
{
	&t464_TI, "Item", &m32365_MI, &m32366_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t464_PIs[] =
{
	&t464____Item_PropertyInfo,
	NULL
};
extern Il2CppType t447_0_0_0;
static ParameterInfo t464_m32367_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32367_GM;
MethodInfo m32367_MI = 
{
	"IndexOf", NULL, &t464_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t464_m32367_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32367_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t447_0_0_0;
static ParameterInfo t464_m32368_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32368_GM;
MethodInfo m32368_MI = 
{
	"Insert", NULL, &t464_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t464_m32368_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32368_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t464_m32369_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32369_GM;
MethodInfo m32369_MI = 
{
	"RemoveAt", NULL, &t464_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t464_m32369_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32369_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t464_m32365_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t447_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32365_GM;
MethodInfo m32365_MI = 
{
	"get_Item", NULL, &t464_TI, &t447_0_0_0, RuntimeInvoker_t5_t110, t464_m32365_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32365_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t447_0_0_0;
static ParameterInfo t464_m32366_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32366_GM;
MethodInfo m32366_MI = 
{
	"set_Item", NULL, &t464_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t464_m32366_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32366_GM};
static MethodInfo* t464_MIs[] =
{
	&m32367_MI,
	&m32368_MI,
	&m32369_MI,
	&m32365_MI,
	&m32366_MI,
	NULL
};
static TypeInfo* t464_ITIs[] = 
{
	&t739_TI,
	&t2851_TI,
	&t2849_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t464_0_0_0;
extern Il2CppType t464_1_0_0;
struct t464;
extern Il2CppGenericClass t464_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t464_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t464_MIs, t464_PIs, NULL, NULL, NULL, NULL, NULL, &t464_TI, t464_ITIs, NULL, &t2240__CustomAttributeCache, &t464_TI, &t464_0_0_0, &t464_1_0_0, NULL, &t464_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m15095_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t262_0_0_1;
FieldInfo t2856_f0_FieldInfo = 
{
	"l", &t262_0_0_1, &t2856_TI, offsetof(t2856, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2856_f1_FieldInfo = 
{
	"next", &t110_0_0_1, &t2856_TI, offsetof(t2856, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2856_f2_FieldInfo = 
{
	"ver", &t110_0_0_1, &t2856_TI, offsetof(t2856, f2) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t447_0_0_1;
FieldInfo t2856_f3_FieldInfo = 
{
	"current", &t447_0_0_1, &t2856_TI, offsetof(t2856, f3) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2856_FIs[] =
{
	&t2856_f0_FieldInfo,
	&t2856_f1_FieldInfo,
	&t2856_f2_FieldInfo,
	&t2856_f3_FieldInfo,
	NULL
};
extern MethodInfo m15093_MI;
static PropertyInfo t2856____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2856_TI, "System.Collections.IEnumerator.Current", &m15093_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15097_MI;
static PropertyInfo t2856____Current_PropertyInfo = 
{
	&t2856_TI, "Current", &m15097_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2856_PIs[] =
{
	&t2856____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2856____Current_PropertyInfo,
	NULL
};
extern Il2CppType t262_0_0_0;
static ParameterInfo t2856_m15092_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t262_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15092_GM;
MethodInfo m15092_MI = 
{
	".ctor", (methodPointerType)&m11749_gshared, &t2856_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2856_m15092_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15092_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15093_GM;
MethodInfo m15093_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11750_gshared, &t2856_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15093_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15094_GM;
MethodInfo m15094_MI = 
{
	"Dispose", (methodPointerType)&m11751_gshared, &t2856_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15094_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15095_GM;
MethodInfo m15095_MI = 
{
	"VerifyState", (methodPointerType)&m11752_gshared, &t2856_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15095_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15096_GM;
MethodInfo m15096_MI = 
{
	"MoveNext", (methodPointerType)&m11753_gshared, &t2856_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15096_GM};
extern Il2CppType t447_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15097_GM;
MethodInfo m15097_MI = 
{
	"get_Current", (methodPointerType)&m11754_gshared, &t2856_TI, &t447_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15097_GM};
static MethodInfo* t2856_MIs[] =
{
	&m15092_MI,
	&m15093_MI,
	&m15094_MI,
	&m15095_MI,
	&m15096_MI,
	&m15097_MI,
	NULL
};
extern MethodInfo m15096_MI;
extern MethodInfo m15094_MI;
static MethodInfo* t2856_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m15093_MI,
	&m15096_MI,
	&m15094_MI,
	&m15097_MI,
};
static TypeInfo* t2856_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t2850_TI,
};
static Il2CppInterfaceOffsetPair t2856_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t2850_TI, 7},
};
extern TypeInfo t447_TI;
extern TypeInfo t2856_TI;
static Il2CppRGCTXData t2856_RGCTXData[3] = 
{
	&m15095_MI/* Method Usage */,
	&t447_TI/* Class Usage */,
	&t2856_TI/* Class Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2856_0_0_0;
extern Il2CppType t2856_1_0_0;
extern Il2CppGenericClass t2856_GC;
TypeInfo t2856_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2856_MIs, t2856_PIs, t2856_FIs, NULL, &t267_TI, NULL, &t1524_TI, &t2856_TI, t2856_ITIs, t2856_VT, &EmptyCustomAttributesCache, &t2856_TI, &t2856_0_0_0, &t2856_1_0_0, t2856_IOs, &t2856_GC, NULL, NULL, NULL, t2856_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2856)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif

#include "t2858MD.h"
extern MethodInfo m15127_MI;
extern MethodInfo m15159_MI;
extern MethodInfo m32363_MI;
extern MethodInfo m32367_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t464_0_0_1;
FieldInfo t2852_f0_FieldInfo = 
{
	"list", &t464_0_0_1, &t2852_TI, offsetof(t2852, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2852_FIs[] =
{
	&t2852_f0_FieldInfo,
	NULL
};
extern MethodInfo m15104_MI;
extern MethodInfo m15105_MI;
static PropertyInfo t2852____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t2852_TI, "System.Collections.Generic.IList<T>.Item", &m15104_MI, &m15105_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15106_MI;
static PropertyInfo t2852____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2852_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m15106_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15116_MI;
static PropertyInfo t2852____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2852_TI, "System.Collections.ICollection.IsSynchronized", &m15116_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15117_MI;
static PropertyInfo t2852____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2852_TI, "System.Collections.ICollection.SyncRoot", &m15117_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15118_MI;
static PropertyInfo t2852____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2852_TI, "System.Collections.IList.IsFixedSize", &m15118_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15119_MI;
static PropertyInfo t2852____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2852_TI, "System.Collections.IList.IsReadOnly", &m15119_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15120_MI;
extern MethodInfo m15121_MI;
static PropertyInfo t2852____System_Collections_IList_Item_PropertyInfo = 
{
	&t2852_TI, "System.Collections.IList.Item", &m15120_MI, &m15121_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15126_MI;
static PropertyInfo t2852____Count_PropertyInfo = 
{
	&t2852_TI, "Count", &m15126_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2852____Item_PropertyInfo = 
{
	&t2852_TI, "Item", &m15127_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2852_PIs[] =
{
	&t2852____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t2852____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2852____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2852____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2852____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2852____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2852____System_Collections_IList_Item_PropertyInfo,
	&t2852____Count_PropertyInfo,
	&t2852____Item_PropertyInfo,
	NULL
};
extern Il2CppType t464_0_0_0;
static ParameterInfo t2852_m15098_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t464_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15098_GM;
MethodInfo m15098_MI = 
{
	".ctor", (methodPointerType)&m11755_gshared, &t2852_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2852_m15098_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15098_GM};
extern Il2CppType t447_0_0_0;
static ParameterInfo t2852_m15099_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15099_GM;
MethodInfo m15099_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m11756_gshared, &t2852_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2852_m15099_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15099_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15100_GM;
MethodInfo m15100_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m11757_gshared, &t2852_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15100_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t447_0_0_0;
static ParameterInfo t2852_m15101_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15101_GM;
MethodInfo m15101_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m11758_gshared, &t2852_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2852_m15101_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15101_GM};
extern Il2CppType t447_0_0_0;
static ParameterInfo t2852_m15102_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15102_GM;
MethodInfo m15102_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m11759_gshared, &t2852_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2852_m15102_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15102_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2852_m15103_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15103_GM;
MethodInfo m15103_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m11760_gshared, &t2852_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2852_m15103_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15103_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2852_m15104_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t447_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15104_GM;
MethodInfo m15104_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m11761_gshared, &t2852_TI, &t447_0_0_0, RuntimeInvoker_t5_t110, t2852_m15104_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15104_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t447_0_0_0;
static ParameterInfo t2852_m15105_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15105_GM;
MethodInfo m15105_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m11762_gshared, &t2852_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2852_m15105_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15105_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15106_GM;
MethodInfo m15106_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11763_gshared, &t2852_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15106_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2852_m15107_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15107_GM;
MethodInfo m15107_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11764_gshared, &t2852_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2852_m15107_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15107_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15108_GM;
MethodInfo m15108_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11765_gshared, &t2852_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15108_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2852_m15109_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15109_GM;
MethodInfo m15109_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11766_gshared, &t2852_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2852_m15109_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15109_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15110_GM;
MethodInfo m15110_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m11767_gshared, &t2852_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15110_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2852_m15111_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15111_GM;
MethodInfo m15111_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11768_gshared, &t2852_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2852_m15111_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15111_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2852_m15112_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15112_GM;
MethodInfo m15112_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11769_gshared, &t2852_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2852_m15112_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15112_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2852_m15113_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15113_GM;
MethodInfo m15113_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11770_gshared, &t2852_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2852_m15113_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15113_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2852_m15114_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15114_GM;
MethodInfo m15114_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11771_gshared, &t2852_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2852_m15114_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15114_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2852_m15115_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15115_GM;
MethodInfo m15115_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m11772_gshared, &t2852_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2852_m15115_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15115_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15116_GM;
MethodInfo m15116_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11773_gshared, &t2852_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15116_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15117_GM;
MethodInfo m15117_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11774_gshared, &t2852_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15117_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15118_GM;
MethodInfo m15118_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11775_gshared, &t2852_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15118_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15119_GM;
MethodInfo m15119_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11776_gshared, &t2852_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15119_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2852_m15120_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15120_GM;
MethodInfo m15120_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11777_gshared, &t2852_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t2852_m15120_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15120_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2852_m15121_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15121_GM;
MethodInfo m15121_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11778_gshared, &t2852_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2852_m15121_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15121_GM};
extern Il2CppType t447_0_0_0;
static ParameterInfo t2852_m15122_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15122_GM;
MethodInfo m15122_MI = 
{
	"Contains", (methodPointerType)&m11779_gshared, &t2852_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2852_m15122_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15122_GM};
extern Il2CppType t2848_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2852_m15123_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2848_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15123_GM;
MethodInfo m15123_MI = 
{
	"CopyTo", (methodPointerType)&m11780_gshared, &t2852_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2852_m15123_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15123_GM};
extern Il2CppType t2850_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15124_GM;
MethodInfo m15124_MI = 
{
	"GetEnumerator", (methodPointerType)&m11781_gshared, &t2852_TI, &t2850_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15124_GM};
extern Il2CppType t447_0_0_0;
static ParameterInfo t2852_m15125_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15125_GM;
MethodInfo m15125_MI = 
{
	"IndexOf", (methodPointerType)&m11782_gshared, &t2852_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2852_m15125_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15125_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15126_GM;
MethodInfo m15126_MI = 
{
	"get_Count", (methodPointerType)&m11783_gshared, &t2852_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15126_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2852_m15127_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t447_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15127_GM;
MethodInfo m15127_MI = 
{
	"get_Item", (methodPointerType)&m11784_gshared, &t2852_TI, &t447_0_0_0, RuntimeInvoker_t5_t110, t2852_m15127_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15127_GM};
static MethodInfo* t2852_MIs[] =
{
	&m15098_MI,
	&m15099_MI,
	&m15100_MI,
	&m15101_MI,
	&m15102_MI,
	&m15103_MI,
	&m15104_MI,
	&m15105_MI,
	&m15106_MI,
	&m15107_MI,
	&m15108_MI,
	&m15109_MI,
	&m15110_MI,
	&m15111_MI,
	&m15112_MI,
	&m15113_MI,
	&m15114_MI,
	&m15115_MI,
	&m15116_MI,
	&m15117_MI,
	&m15118_MI,
	&m15119_MI,
	&m15120_MI,
	&m15121_MI,
	&m15122_MI,
	&m15123_MI,
	&m15124_MI,
	&m15125_MI,
	&m15126_MI,
	&m15127_MI,
	NULL
};
extern MethodInfo m15108_MI;
extern MethodInfo m15107_MI;
extern MethodInfo m15109_MI;
extern MethodInfo m15110_MI;
extern MethodInfo m15111_MI;
extern MethodInfo m15112_MI;
extern MethodInfo m15113_MI;
extern MethodInfo m15114_MI;
extern MethodInfo m15115_MI;
extern MethodInfo m15099_MI;
extern MethodInfo m15100_MI;
extern MethodInfo m15122_MI;
extern MethodInfo m15123_MI;
extern MethodInfo m15102_MI;
extern MethodInfo m15125_MI;
extern MethodInfo m15101_MI;
extern MethodInfo m15103_MI;
extern MethodInfo m15124_MI;
static MethodInfo* t2852_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m15108_MI,
	&m15126_MI,
	&m15116_MI,
	&m15117_MI,
	&m15107_MI,
	&m15118_MI,
	&m15119_MI,
	&m15120_MI,
	&m15121_MI,
	&m15109_MI,
	&m15110_MI,
	&m15111_MI,
	&m15112_MI,
	&m15113_MI,
	&m15114_MI,
	&m15115_MI,
	&m15126_MI,
	&m15106_MI,
	&m15099_MI,
	&m15100_MI,
	&m15122_MI,
	&m15123_MI,
	&m15102_MI,
	&m15125_MI,
	&m15101_MI,
	&m15103_MI,
	&m15104_MI,
	&m15105_MI,
	&m15124_MI,
	&m15127_MI,
};
static TypeInfo* t2852_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t2851_TI,
	&t464_TI,
	&t2849_TI,
};
static Il2CppInterfaceOffsetPair t2852_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t2851_TI, 20},
	{ &t464_TI, 27},
	{ &t2849_TI, 32},
};
extern TypeInfo t447_TI;
static Il2CppRGCTXData t2852_RGCTXData[9] = 
{
	&m15127_MI/* Method Usage */,
	&m15159_MI/* Method Usage */,
	&t447_TI/* Class Usage */,
	&m32363_MI/* Method Usage */,
	&m32367_MI/* Method Usage */,
	&m32365_MI/* Method Usage */,
	&m32358_MI/* Method Usage */,
	&m32359_MI/* Method Usage */,
	&m32357_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2852_0_0_0;
extern Il2CppType t2852_1_0_0;
struct t2852;
extern Il2CppGenericClass t2852_GC;
extern CustomAttributesCache t1526__CustomAttributeCache;
TypeInfo t2852_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t2852_MIs, t2852_PIs, t2852_FIs, NULL, &t5_TI, NULL, NULL, &t2852_TI, t2852_ITIs, t2852_VT, &t1526__CustomAttributeCache, &t2852_TI, &t2852_0_0_0, &t2852_1_0_0, t2852_IOs, &t2852_GC, NULL, NULL, NULL, t2852_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2852), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t2858.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2858_TI;

extern MethodInfo m15162_MI;
extern MethodInfo m15163_MI;
extern MethodInfo m15160_MI;
extern MethodInfo m15158_MI;
extern MethodInfo m15037_MI;
extern MethodInfo m15151_MI;
extern MethodInfo m15161_MI;
extern MethodInfo m15149_MI;
extern MethodInfo m15154_MI;
extern MethodInfo m15145_MI;
extern MethodInfo m32362_MI;
extern MethodInfo m32368_MI;
extern MethodInfo m32369_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t464_0_0_1;
FieldInfo t2858_f0_FieldInfo = 
{
	"list", &t464_0_0_1, &t2858_TI, offsetof(t2858, f0), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_1;
FieldInfo t2858_f1_FieldInfo = 
{
	"syncRoot", &t5_0_0_1, &t2858_TI, offsetof(t2858, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2858_FIs[] =
{
	&t2858_f0_FieldInfo,
	&t2858_f1_FieldInfo,
	NULL
};
extern MethodInfo m15129_MI;
static PropertyInfo t2858____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2858_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m15129_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15137_MI;
static PropertyInfo t2858____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2858_TI, "System.Collections.ICollection.IsSynchronized", &m15137_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15138_MI;
static PropertyInfo t2858____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2858_TI, "System.Collections.ICollection.SyncRoot", &m15138_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15139_MI;
static PropertyInfo t2858____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2858_TI, "System.Collections.IList.IsFixedSize", &m15139_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15140_MI;
static PropertyInfo t2858____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2858_TI, "System.Collections.IList.IsReadOnly", &m15140_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15141_MI;
extern MethodInfo m15142_MI;
static PropertyInfo t2858____System_Collections_IList_Item_PropertyInfo = 
{
	&t2858_TI, "System.Collections.IList.Item", &m15141_MI, &m15142_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15155_MI;
static PropertyInfo t2858____Count_PropertyInfo = 
{
	&t2858_TI, "Count", &m15155_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15156_MI;
extern MethodInfo m15157_MI;
static PropertyInfo t2858____Item_PropertyInfo = 
{
	&t2858_TI, "Item", &m15156_MI, &m15157_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2858_PIs[] =
{
	&t2858____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2858____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2858____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2858____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2858____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2858____System_Collections_IList_Item_PropertyInfo,
	&t2858____Count_PropertyInfo,
	&t2858____Item_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15128_GM;
MethodInfo m15128_MI = 
{
	".ctor", (methodPointerType)&m11785_gshared, &t2858_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15128_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15129_GM;
MethodInfo m15129_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11786_gshared, &t2858_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15129_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2858_m15130_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15130_GM;
MethodInfo m15130_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11787_gshared, &t2858_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2858_m15130_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15130_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15131_GM;
MethodInfo m15131_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11788_gshared, &t2858_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15131_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2858_m15132_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15132_GM;
MethodInfo m15132_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11789_gshared, &t2858_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2858_m15132_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15132_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2858_m15133_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15133_GM;
MethodInfo m15133_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11790_gshared, &t2858_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2858_m15133_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15133_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2858_m15134_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15134_GM;
MethodInfo m15134_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11791_gshared, &t2858_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2858_m15134_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15134_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2858_m15135_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15135_GM;
MethodInfo m15135_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11792_gshared, &t2858_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2858_m15135_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15135_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2858_m15136_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15136_GM;
MethodInfo m15136_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11793_gshared, &t2858_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2858_m15136_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15136_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15137_GM;
MethodInfo m15137_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11794_gshared, &t2858_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15137_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15138_GM;
MethodInfo m15138_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11795_gshared, &t2858_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15138_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15139_GM;
MethodInfo m15139_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11796_gshared, &t2858_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15139_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15140_GM;
MethodInfo m15140_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11797_gshared, &t2858_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15140_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2858_m15141_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15141_GM;
MethodInfo m15141_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11798_gshared, &t2858_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t2858_m15141_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15141_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2858_m15142_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15142_GM;
MethodInfo m15142_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11799_gshared, &t2858_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2858_m15142_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15142_GM};
extern Il2CppType t447_0_0_0;
static ParameterInfo t2858_m15143_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15143_GM;
MethodInfo m15143_MI = 
{
	"Add", (methodPointerType)&m11800_gshared, &t2858_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2858_m15143_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15143_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15144_GM;
MethodInfo m15144_MI = 
{
	"Clear", (methodPointerType)&m11801_gshared, &t2858_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15144_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15145_GM;
MethodInfo m15145_MI = 
{
	"ClearItems", (methodPointerType)&m11802_gshared, &t2858_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15145_GM};
extern Il2CppType t447_0_0_0;
static ParameterInfo t2858_m15146_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15146_GM;
MethodInfo m15146_MI = 
{
	"Contains", (methodPointerType)&m11803_gshared, &t2858_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2858_m15146_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15146_GM};
extern Il2CppType t2848_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2858_m15147_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2848_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15147_GM;
MethodInfo m15147_MI = 
{
	"CopyTo", (methodPointerType)&m11804_gshared, &t2858_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2858_m15147_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15147_GM};
extern Il2CppType t2850_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15148_GM;
MethodInfo m15148_MI = 
{
	"GetEnumerator", (methodPointerType)&m11805_gshared, &t2858_TI, &t2850_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15148_GM};
extern Il2CppType t447_0_0_0;
static ParameterInfo t2858_m15149_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15149_GM;
MethodInfo m15149_MI = 
{
	"IndexOf", (methodPointerType)&m11806_gshared, &t2858_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2858_m15149_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15149_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t447_0_0_0;
static ParameterInfo t2858_m15150_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15150_GM;
MethodInfo m15150_MI = 
{
	"Insert", (methodPointerType)&m11807_gshared, &t2858_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2858_m15150_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15150_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t447_0_0_0;
static ParameterInfo t2858_m15151_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15151_GM;
MethodInfo m15151_MI = 
{
	"InsertItem", (methodPointerType)&m11808_gshared, &t2858_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2858_m15151_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15151_GM};
extern Il2CppType t447_0_0_0;
static ParameterInfo t2858_m15152_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15152_GM;
MethodInfo m15152_MI = 
{
	"Remove", (methodPointerType)&m11809_gshared, &t2858_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2858_m15152_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15152_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2858_m15153_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15153_GM;
MethodInfo m15153_MI = 
{
	"RemoveAt", (methodPointerType)&m11810_gshared, &t2858_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2858_m15153_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15153_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2858_m15154_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15154_GM;
MethodInfo m15154_MI = 
{
	"RemoveItem", (methodPointerType)&m11811_gshared, &t2858_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2858_m15154_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15154_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15155_GM;
MethodInfo m15155_MI = 
{
	"get_Count", (methodPointerType)&m11812_gshared, &t2858_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15155_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2858_m15156_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t447_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15156_GM;
MethodInfo m15156_MI = 
{
	"get_Item", (methodPointerType)&m11813_gshared, &t2858_TI, &t447_0_0_0, RuntimeInvoker_t5_t110, t2858_m15156_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15156_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t447_0_0_0;
static ParameterInfo t2858_m15157_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15157_GM;
MethodInfo m15157_MI = 
{
	"set_Item", (methodPointerType)&m11814_gshared, &t2858_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2858_m15157_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15157_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t447_0_0_0;
static ParameterInfo t2858_m15158_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15158_GM;
MethodInfo m15158_MI = 
{
	"SetItem", (methodPointerType)&m11815_gshared, &t2858_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2858_m15158_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15158_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2858_m15159_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15159_GM;
MethodInfo m15159_MI = 
{
	"IsValidItem", (methodPointerType)&m11816_gshared, &t2858_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2858_m15159_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15159_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2858_m15160_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t447_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15160_GM;
MethodInfo m15160_MI = 
{
	"ConvertItem", (methodPointerType)&m11817_gshared, &t2858_TI, &t447_0_0_0, RuntimeInvoker_t5_t5, t2858_m15160_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15160_GM};
extern Il2CppType t464_0_0_0;
static ParameterInfo t2858_m15161_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t464_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15161_GM;
MethodInfo m15161_MI = 
{
	"CheckWritable", (methodPointerType)&m11818_gshared, &t2858_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2858_m15161_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15161_GM};
extern Il2CppType t464_0_0_0;
static ParameterInfo t2858_m15162_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t464_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15162_GM;
MethodInfo m15162_MI = 
{
	"IsSynchronized", (methodPointerType)&m11819_gshared, &t2858_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2858_m15162_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15162_GM};
extern Il2CppType t464_0_0_0;
static ParameterInfo t2858_m15163_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t464_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15163_GM;
MethodInfo m15163_MI = 
{
	"IsFixedSize", (methodPointerType)&m11820_gshared, &t2858_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2858_m15163_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15163_GM};
static MethodInfo* t2858_MIs[] =
{
	&m15128_MI,
	&m15129_MI,
	&m15130_MI,
	&m15131_MI,
	&m15132_MI,
	&m15133_MI,
	&m15134_MI,
	&m15135_MI,
	&m15136_MI,
	&m15137_MI,
	&m15138_MI,
	&m15139_MI,
	&m15140_MI,
	&m15141_MI,
	&m15142_MI,
	&m15143_MI,
	&m15144_MI,
	&m15145_MI,
	&m15146_MI,
	&m15147_MI,
	&m15148_MI,
	&m15149_MI,
	&m15150_MI,
	&m15151_MI,
	&m15152_MI,
	&m15153_MI,
	&m15154_MI,
	&m15155_MI,
	&m15156_MI,
	&m15157_MI,
	&m15158_MI,
	&m15159_MI,
	&m15160_MI,
	&m15161_MI,
	&m15162_MI,
	&m15163_MI,
	NULL
};
extern MethodInfo m15131_MI;
extern MethodInfo m15130_MI;
extern MethodInfo m15132_MI;
extern MethodInfo m15144_MI;
extern MethodInfo m15133_MI;
extern MethodInfo m15134_MI;
extern MethodInfo m15135_MI;
extern MethodInfo m15136_MI;
extern MethodInfo m15153_MI;
extern MethodInfo m15143_MI;
extern MethodInfo m15146_MI;
extern MethodInfo m15147_MI;
extern MethodInfo m15152_MI;
extern MethodInfo m15150_MI;
extern MethodInfo m15148_MI;
static MethodInfo* t2858_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m15131_MI,
	&m15155_MI,
	&m15137_MI,
	&m15138_MI,
	&m15130_MI,
	&m15139_MI,
	&m15140_MI,
	&m15141_MI,
	&m15142_MI,
	&m15132_MI,
	&m15144_MI,
	&m15133_MI,
	&m15134_MI,
	&m15135_MI,
	&m15136_MI,
	&m15153_MI,
	&m15155_MI,
	&m15129_MI,
	&m15143_MI,
	&m15144_MI,
	&m15146_MI,
	&m15147_MI,
	&m15152_MI,
	&m15149_MI,
	&m15150_MI,
	&m15153_MI,
	&m15156_MI,
	&m15157_MI,
	&m15148_MI,
	&m15145_MI,
	&m15151_MI,
	&m15154_MI,
	&m15158_MI,
};
static TypeInfo* t2858_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t2851_TI,
	&t464_TI,
	&t2849_TI,
};
static Il2CppInterfaceOffsetPair t2858_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t2851_TI, 20},
	{ &t464_TI, 27},
	{ &t2849_TI, 32},
};
extern TypeInfo t262_TI;
extern TypeInfo t447_TI;
static Il2CppRGCTXData t2858_RGCTXData[25] = 
{
	&t262_TI/* Class Usage */,
	&m15037_MI/* Method Usage */,
	&m32361_MI/* Method Usage */,
	&m32359_MI/* Method Usage */,
	&m32357_MI/* Method Usage */,
	&m15160_MI/* Method Usage */,
	&m15151_MI/* Method Usage */,
	&m15159_MI/* Method Usage */,
	&t447_TI/* Class Usage */,
	&m32363_MI/* Method Usage */,
	&m32367_MI/* Method Usage */,
	&m15161_MI/* Method Usage */,
	&m15149_MI/* Method Usage */,
	&m15154_MI/* Method Usage */,
	&m15162_MI/* Method Usage */,
	&m15163_MI/* Method Usage */,
	&m32365_MI/* Method Usage */,
	&m15158_MI/* Method Usage */,
	&m15145_MI/* Method Usage */,
	&m32362_MI/* Method Usage */,
	&m32358_MI/* Method Usage */,
	&m32368_MI/* Method Usage */,
	&m32369_MI/* Method Usage */,
	&m32366_MI/* Method Usage */,
	&t447_0_0_0/* Type Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2858_0_0_0;
extern Il2CppType t2858_1_0_0;
struct t2858;
extern Il2CppGenericClass t2858_GC;
extern CustomAttributesCache t1525__CustomAttributeCache;
TypeInfo t2858_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t2858_MIs, t2858_PIs, t2858_FIs, NULL, &t5_TI, NULL, NULL, &t2858_TI, t2858_ITIs, t2858_VT, &t1525__CustomAttributeCache, &t2858_TI, &t2858_0_0_0, &t2858_1_0_0, t2858_IOs, &t2858_GC, NULL, NULL, NULL, t2858_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2858), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2859_TI;
#include "t2859MD.h"

#include "t2860.h"
extern TypeInfo t7589_TI;
extern TypeInfo t2860_TI;
#include "t2860MD.h"
extern Il2CppType t7589_0_0_0;
extern MethodInfo m15169_MI;
extern MethodInfo m32370_MI;
extern MethodInfo m24798_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t2859_0_0_49;
FieldInfo t2859_f0_FieldInfo = 
{
	"_default", &t2859_0_0_49, &t2859_TI, offsetof(t2859_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2859_FIs[] =
{
	&t2859_f0_FieldInfo,
	NULL
};
extern MethodInfo m15168_MI;
static PropertyInfo t2859____Default_PropertyInfo = 
{
	&t2859_TI, "Default", &m15168_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2859_PIs[] =
{
	&t2859____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15164_GM;
MethodInfo m15164_MI = 
{
	".ctor", (methodPointerType)&m11821_gshared, &t2859_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15164_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15165_GM;
MethodInfo m15165_MI = 
{
	".cctor", (methodPointerType)&m11822_gshared, &t2859_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15165_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2859_m15166_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15166_GM;
MethodInfo m15166_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m11823_gshared, &t2859_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2859_m15166_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15166_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2859_m15167_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15167_GM;
MethodInfo m15167_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m11824_gshared, &t2859_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2859_m15167_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15167_GM};
extern Il2CppType t447_0_0_0;
static ParameterInfo t2859_m32370_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32370_GM;
MethodInfo m32370_MI = 
{
	"GetHashCode", NULL, &t2859_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2859_m32370_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32370_GM};
extern Il2CppType t447_0_0_0;
extern Il2CppType t447_0_0_0;
static ParameterInfo t2859_m24798_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m24798_GM;
MethodInfo m24798_MI = 
{
	"Equals", NULL, &t2859_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2859_m24798_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m24798_GM};
extern Il2CppType t2859_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15168_GM;
MethodInfo m15168_MI = 
{
	"get_Default", (methodPointerType)&m11825_gshared, &t2859_TI, &t2859_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15168_GM};
static MethodInfo* t2859_MIs[] =
{
	&m15164_MI,
	&m15165_MI,
	&m15166_MI,
	&m15167_MI,
	&m32370_MI,
	&m24798_MI,
	&m15168_MI,
	NULL
};
extern MethodInfo m15167_MI;
extern MethodInfo m15166_MI;
static MethodInfo* t2859_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m24798_MI,
	&m32370_MI,
	&m15167_MI,
	&m15166_MI,
	NULL,
	NULL,
};
extern TypeInfo t7590_TI;
static TypeInfo* t2859_ITIs[] = 
{
	&t7590_TI,
	&t998_TI,
};
static Il2CppInterfaceOffsetPair t2859_IOs[] = 
{
	{ &t7590_TI, 4},
	{ &t998_TI, 6},
};
extern TypeInfo t2859_TI;
extern TypeInfo t2859_TI;
extern TypeInfo t2860_TI;
extern TypeInfo t447_TI;
static Il2CppRGCTXData t2859_RGCTXData[9] = 
{
	&t7589_0_0_0/* Type Usage */,
	&t447_0_0_0/* Type Usage */,
	&t2859_TI/* Class Usage */,
	&t2859_TI/* Static Usage */,
	&t2860_TI/* Class Usage */,
	&m15169_MI/* Method Usage */,
	&t447_TI/* Class Usage */,
	&m32370_MI/* Method Usage */,
	&m24798_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2859_0_0_0;
extern Il2CppType t2859_1_0_0;
struct t2859;
extern Il2CppGenericClass t2859_GC;
TypeInfo t2859_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2859_MIs, t2859_PIs, t2859_FIs, NULL, &t5_TI, NULL, NULL, &t2859_TI, t2859_ITIs, t2859_VT, &EmptyCustomAttributesCache, &t2859_TI, &t2859_0_0_0, &t2859_1_0_0, t2859_IOs, &t2859_GC, NULL, NULL, NULL, t2859_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2859), 0, -1, sizeof(t2859_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t447_0_0_0;
extern Il2CppType t447_0_0_0;
static ParameterInfo t7590_m32371_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32371_GM;
MethodInfo m32371_MI = 
{
	"Equals", NULL, &t7590_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t7590_m32371_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32371_GM};
extern Il2CppType t447_0_0_0;
static ParameterInfo t7590_m32372_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32372_GM;
MethodInfo m32372_MI = 
{
	"GetHashCode", NULL, &t7590_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7590_m32372_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32372_GM};
static MethodInfo* t7590_MIs[] =
{
	&m32371_MI,
	&m32372_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7590_0_0_0;
extern Il2CppType t7590_1_0_0;
struct t7590;
extern Il2CppGenericClass t7590_GC;
TypeInfo t7590_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t7590_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7590_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7590_TI, &t7590_0_0_0, &t7590_1_0_0, NULL, &t7590_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.IEquatable`1<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t447_0_0_0;
static ParameterInfo t7589_m32373_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32373_GM;
MethodInfo m32373_MI = 
{
	"Equals", NULL, &t7589_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7589_m32373_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32373_GM};
static MethodInfo* t7589_MIs[] =
{
	&m32373_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7589_1_0_0;
struct t7589;
extern Il2CppGenericClass t7589_GC;
TypeInfo t7589_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t7589_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7589_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7589_TI, &t7589_0_0_0, &t7589_1_0_0, NULL, &t7589_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m15164_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15169_GM;
MethodInfo m15169_MI = 
{
	".ctor", (methodPointerType)&m11856_gshared, &t2860_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15169_GM};
extern Il2CppType t447_0_0_0;
static ParameterInfo t2860_m15170_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15170_GM;
MethodInfo m15170_MI = 
{
	"GetHashCode", (methodPointerType)&m11857_gshared, &t2860_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2860_m15170_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15170_GM};
extern Il2CppType t447_0_0_0;
extern Il2CppType t447_0_0_0;
static ParameterInfo t2860_m15171_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15171_GM;
MethodInfo m15171_MI = 
{
	"Equals", (methodPointerType)&m11858_gshared, &t2860_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2860_m15171_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15171_GM};
static MethodInfo* t2860_MIs[] =
{
	&m15169_MI,
	&m15170_MI,
	&m15171_MI,
	NULL
};
extern MethodInfo m15171_MI;
extern MethodInfo m15170_MI;
static MethodInfo* t2860_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m15171_MI,
	&m15170_MI,
	&m15167_MI,
	&m15166_MI,
	&m15170_MI,
	&m15171_MI,
};
static Il2CppInterfaceOffsetPair t2860_IOs[] = 
{
	{ &t7590_TI, 4},
	{ &t998_TI, 6},
};
extern TypeInfo t2859_TI;
extern TypeInfo t2859_TI;
extern TypeInfo t2860_TI;
extern TypeInfo t447_TI;
extern TypeInfo t447_TI;
static Il2CppRGCTXData t2860_RGCTXData[11] = 
{
	&t7589_0_0_0/* Type Usage */,
	&t447_0_0_0/* Type Usage */,
	&t2859_TI/* Class Usage */,
	&t2859_TI/* Static Usage */,
	&t2860_TI/* Class Usage */,
	&m15169_MI/* Method Usage */,
	&t447_TI/* Class Usage */,
	&m32370_MI/* Method Usage */,
	&m24798_MI/* Method Usage */,
	&m15164_MI/* Method Usage */,
	&t447_TI/* Class Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2860_0_0_0;
extern Il2CppType t2860_1_0_0;
struct t2860;
extern Il2CppGenericClass t2860_GC;
TypeInfo t2860_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2860_MIs, NULL, NULL, NULL, &t2859_TI, NULL, &t1519_TI, &t2860_TI, NULL, t2860_VT, &EmptyCustomAttributesCache, &t2860_TI, &t2860_0_0_0, &t2860_1_0_0, t2860_IOs, &t2860_GC, NULL, NULL, NULL, t2860_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2860), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Predicate`1<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2853_m15172_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15172_GM;
MethodInfo m15172_MI = 
{
	".ctor", (methodPointerType)&m11859_gshared, &t2853_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2853_m15172_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15172_GM};
extern Il2CppType t447_0_0_0;
static ParameterInfo t2853_m15173_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15173_GM;
MethodInfo m15173_MI = 
{
	"Invoke", (methodPointerType)&m11860_gshared, &t2853_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2853_m15173_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15173_GM};
extern Il2CppType t447_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2853_m15174_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15174_GM;
MethodInfo m15174_MI = 
{
	"BeginInvoke", (methodPointerType)&m11861_gshared, &t2853_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t2853_m15174_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m15174_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2853_m15175_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15175_GM;
MethodInfo m15175_MI = 
{
	"EndInvoke", (methodPointerType)&m11862_gshared, &t2853_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2853_m15175_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15175_GM};
static MethodInfo* t2853_MIs[] =
{
	&m15172_MI,
	&m15173_MI,
	&m15174_MI,
	&m15175_MI,
	NULL
};
extern MethodInfo m15174_MI;
extern MethodInfo m15175_MI;
static MethodInfo* t2853_VT[] =
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
	&m15173_MI,
	&m15174_MI,
	&m15175_MI,
};
static Il2CppInterfaceOffsetPair t2853_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2853_1_0_0;
struct t2853;
extern Il2CppGenericClass t2853_GC;
TypeInfo t2853_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t2853_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t2853_TI, NULL, t2853_VT, &EmptyCustomAttributesCache, &t2853_TI, &t2853_0_0_0, &t2853_1_0_0, t2853_IOs, &t2853_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2853), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Action`1<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2854_m15176_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15176_GM;
MethodInfo m15176_MI = 
{
	".ctor", (methodPointerType)&m11863_gshared, &t2854_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2854_m15176_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15176_GM};
extern Il2CppType t447_0_0_0;
static ParameterInfo t2854_m15177_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15177_GM;
MethodInfo m15177_MI = 
{
	"Invoke", (methodPointerType)&m11864_gshared, &t2854_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2854_m15177_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15177_GM};
extern Il2CppType t447_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2854_m15178_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15178_GM;
MethodInfo m15178_MI = 
{
	"BeginInvoke", (methodPointerType)&m11865_gshared, &t2854_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t2854_m15178_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m15178_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2854_m15179_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15179_GM;
MethodInfo m15179_MI = 
{
	"EndInvoke", (methodPointerType)&m11866_gshared, &t2854_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2854_m15179_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15179_GM};
static MethodInfo* t2854_MIs[] =
{
	&m15176_MI,
	&m15177_MI,
	&m15178_MI,
	&m15179_MI,
	NULL
};
extern MethodInfo m15178_MI;
extern MethodInfo m15179_MI;
static MethodInfo* t2854_VT[] =
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
	&m15177_MI,
	&m15178_MI,
	&m15179_MI,
};
static Il2CppInterfaceOffsetPair t2854_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2854_1_0_0;
struct t2854;
extern Il2CppGenericClass t2854_GC;
TypeInfo t2854_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Action`1", "System", t2854_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t2854_TI, NULL, t2854_VT, &EmptyCustomAttributesCache, &t2854_TI, &t2854_0_0_0, &t2854_1_0_0, t2854_IOs, &t2854_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2854), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif

#include "t2862.h"
extern TypeInfo t4789_TI;
extern TypeInfo t2862_TI;
#include "t2862MD.h"
extern Il2CppType t4789_0_0_0;
extern MethodInfo m15184_MI;
extern MethodInfo m32374_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t2861_0_0_49;
FieldInfo t2861_f0_FieldInfo = 
{
	"_default", &t2861_0_0_49, &t2861_TI, offsetof(t2861_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2861_FIs[] =
{
	&t2861_f0_FieldInfo,
	NULL
};
static PropertyInfo t2861____Default_PropertyInfo = 
{
	&t2861_TI, "Default", &m15183_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2861_PIs[] =
{
	&t2861____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15180_GM;
MethodInfo m15180_MI = 
{
	".ctor", (methodPointerType)&m11867_gshared, &t2861_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15180_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15181_GM;
MethodInfo m15181_MI = 
{
	".cctor", (methodPointerType)&m11868_gshared, &t2861_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15181_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2861_m15182_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15182_GM;
MethodInfo m15182_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m11869_gshared, &t2861_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t2861_m15182_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15182_GM};
extern Il2CppType t447_0_0_0;
extern Il2CppType t447_0_0_0;
static ParameterInfo t2861_m32374_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32374_GM;
MethodInfo m32374_MI = 
{
	"Compare", NULL, &t2861_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t2861_m32374_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32374_GM};
extern Il2CppType t2861_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15183_GM;
MethodInfo m15183_MI = 
{
	"get_Default", (methodPointerType)&m11870_gshared, &t2861_TI, &t2861_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15183_GM};
static MethodInfo* t2861_MIs[] =
{
	&m15180_MI,
	&m15181_MI,
	&m15182_MI,
	&m32374_MI,
	&m15183_MI,
	NULL
};
extern MethodInfo m15182_MI;
static MethodInfo* t2861_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m32374_MI,
	&m15182_MI,
	NULL,
};
extern TypeInfo t4788_TI;
static TypeInfo* t2861_ITIs[] = 
{
	&t4788_TI,
	&t991_TI,
};
static Il2CppInterfaceOffsetPair t2861_IOs[] = 
{
	{ &t4788_TI, 4},
	{ &t991_TI, 5},
};
extern TypeInfo t2861_TI;
extern TypeInfo t2861_TI;
extern TypeInfo t2862_TI;
extern TypeInfo t447_TI;
static Il2CppRGCTXData t2861_RGCTXData[8] = 
{
	&t4789_0_0_0/* Type Usage */,
	&t447_0_0_0/* Type Usage */,
	&t2861_TI/* Class Usage */,
	&t2861_TI/* Static Usage */,
	&t2862_TI/* Class Usage */,
	&m15184_MI/* Method Usage */,
	&t447_TI/* Class Usage */,
	&m32374_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2861_0_0_0;
extern Il2CppType t2861_1_0_0;
struct t2861;
extern Il2CppGenericClass t2861_GC;
TypeInfo t2861_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2861_MIs, t2861_PIs, t2861_FIs, NULL, &t5_TI, NULL, NULL, &t2861_TI, t2861_ITIs, t2861_VT, &EmptyCustomAttributesCache, &t2861_TI, &t2861_0_0_0, &t2861_1_0_0, t2861_IOs, &t2861_GC, NULL, NULL, NULL, t2861_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2861), 0, -1, sizeof(t2861_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t447_0_0_0;
extern Il2CppType t447_0_0_0;
static ParameterInfo t4788_m24806_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m24806_GM;
MethodInfo m24806_MI = 
{
	"Compare", NULL, &t4788_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t4788_m24806_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m24806_GM};
static MethodInfo* t4788_MIs[] =
{
	&m24806_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4788_0_0_0;
extern Il2CppType t4788_1_0_0;
struct t4788;
extern Il2CppGenericClass t4788_GC;
TypeInfo t4788_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t4788_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4788_TI, NULL, NULL, &EmptyCustomAttributesCache, &t4788_TI, &t4788_0_0_0, &t4788_1_0_0, NULL, &t4788_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.IComparable`1<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t447_0_0_0;
static ParameterInfo t4789_m24807_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m24807_GM;
MethodInfo m24807_MI = 
{
	"CompareTo", NULL, &t4789_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t4789_m24807_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m24807_GM};
static MethodInfo* t4789_MIs[] =
{
	&m24807_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4789_1_0_0;
struct t4789;
extern Il2CppGenericClass t4789_GC;
TypeInfo t4789_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t4789_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4789_TI, NULL, NULL, &EmptyCustomAttributesCache, &t4789_TI, &t4789_0_0_0, &t4789_1_0_0, NULL, &t4789_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m15180_MI;
extern MethodInfo m24807_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15184_GM;
MethodInfo m15184_MI = 
{
	".ctor", (methodPointerType)&m11871_gshared, &t2862_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15184_GM};
extern Il2CppType t447_0_0_0;
extern Il2CppType t447_0_0_0;
static ParameterInfo t2862_m15185_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15185_GM;
MethodInfo m15185_MI = 
{
	"Compare", (methodPointerType)&m11872_gshared, &t2862_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t2862_m15185_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15185_GM};
static MethodInfo* t2862_MIs[] =
{
	&m15184_MI,
	&m15185_MI,
	NULL
};
extern MethodInfo m15185_MI;
static MethodInfo* t2862_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m15185_MI,
	&m15182_MI,
	&m15185_MI,
};
static Il2CppInterfaceOffsetPair t2862_IOs[] = 
{
	{ &t4788_TI, 4},
	{ &t991_TI, 5},
};
extern TypeInfo t2861_TI;
extern TypeInfo t2861_TI;
extern TypeInfo t2862_TI;
extern TypeInfo t447_TI;
extern TypeInfo t447_TI;
extern TypeInfo t4789_TI;
static Il2CppRGCTXData t2862_RGCTXData[12] = 
{
	&t4789_0_0_0/* Type Usage */,
	&t447_0_0_0/* Type Usage */,
	&t2861_TI/* Class Usage */,
	&t2861_TI/* Static Usage */,
	&t2862_TI/* Class Usage */,
	&m15184_MI/* Method Usage */,
	&t447_TI/* Class Usage */,
	&m32374_MI/* Method Usage */,
	&m15180_MI/* Method Usage */,
	&t447_TI/* Class Usage */,
	&t4789_TI/* Class Usage */,
	&m24807_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2862_0_0_0;
extern Il2CppType t2862_1_0_0;
struct t2862;
extern Il2CppGenericClass t2862_GC;
TypeInfo t2862_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2862_MIs, NULL, NULL, NULL, &t2861_TI, NULL, &t1509_TI, &t2862_TI, NULL, t2862_VT, &EmptyCustomAttributesCache, &t2862_TI, &t2862_0_0_0, &t2862_1_0_0, t2862_IOs, &t2862_GC, NULL, NULL, NULL, t2862_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2862), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2855_TI;
#include "t2855MD.h"



// Metadata Definition System.Comparison`1<UnityEngine.EventSystems.IEventSystemHandler>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2855_m15186_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15186_GM;
MethodInfo m15186_MI = 
{
	".ctor", (methodPointerType)&m11938_gshared, &t2855_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2855_m15186_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15186_GM};
extern Il2CppType t447_0_0_0;
extern Il2CppType t447_0_0_0;
static ParameterInfo t2855_m15187_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15187_GM;
MethodInfo m15187_MI = 
{
	"Invoke", (methodPointerType)&m11939_gshared, &t2855_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t2855_m15187_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15187_GM};
extern Il2CppType t447_0_0_0;
extern Il2CppType t447_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2855_m15188_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t447_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15188_GM;
MethodInfo m15188_MI = 
{
	"BeginInvoke", (methodPointerType)&m11940_gshared, &t2855_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5_t5, t2855_m15188_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL, &m15188_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2855_m15189_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15189_GM;
MethodInfo m15189_MI = 
{
	"EndInvoke", (methodPointerType)&m11941_gshared, &t2855_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2855_m15189_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15189_GM};
static MethodInfo* t2855_MIs[] =
{
	&m15186_MI,
	&m15187_MI,
	&m15188_MI,
	&m15189_MI,
	NULL
};
extern MethodInfo m15187_MI;
extern MethodInfo m15188_MI;
extern MethodInfo m15189_MI;
static MethodInfo* t2855_VT[] =
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
	&m15187_MI,
	&m15188_MI,
	&m15189_MI,
};
static Il2CppInterfaceOffsetPair t2855_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2855_1_0_0;
struct t2855;
extern Il2CppGenericClass t2855_GC;
TypeInfo t2855_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t2855_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t2855_TI, NULL, t2855_VT, &EmptyCustomAttributesCache, &t2855_TI, &t2855_0_0_0, &t2855_1_0_0, t2855_IOs, &t2855_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2855), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t241.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t241_TI;
#include "t241MD.h"

#include "t2863.h"
#include "t243.h"
extern TypeInfo t2863_TI;
extern TypeInfo t243_TI;
#include "t2863MD.h"
#include "t243MD.h"
#include "t449MD.h"
extern MethodInfo m15191_MI;
extern MethodInfo m15197_MI;
extern MethodInfo m15228_MI;
extern MethodInfo m15219_MI;
extern MethodInfo m24847_MI;
extern MethodInfo m15193_MI;
extern MethodInfo m15226_MI;
extern MethodInfo m15250_MI;
extern MethodInfo m15225_MI;
extern MethodInfo m3512_MI;
extern MethodInfo m1957_MI;
extern MethodInfo m15227_MI;
struct t1196;
#include "t1196.h"
struct t1196;
 t5 * m24811_gshared (t5 * __this, MethodInfo* method);
#define m24811(__this, method) (t5 *)m24811_gshared((t5 *)__this, method)
#define m24847(__this, method) (t262 *)m24811_gshared((t5 *)__this, method)


// Metadata Definition UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
extern Il2CppType t2863_0_0_33;
FieldInfo t241_f0_FieldInfo = 
{
	"m_Stack", &t2863_0_0_33, &t241_TI, offsetof(t241, f0), &EmptyCustomAttributesCache};
extern Il2CppType t243_0_0_33;
FieldInfo t241_f1_FieldInfo = 
{
	"m_ActionOnGet", &t243_0_0_33, &t241_TI, offsetof(t241, f1), &EmptyCustomAttributesCache};
extern Il2CppType t243_0_0_33;
FieldInfo t241_f2_FieldInfo = 
{
	"m_ActionOnRelease", &t243_0_0_33, &t241_TI, offsetof(t241, f2), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
extern CustomAttributesCache t440__CustomAttributeCache_U3CcountAllU3Ek__BackingField;
FieldInfo t241_f3_FieldInfo = 
{
	"<countAll>k__BackingField", &t110_0_0_1, &t241_TI, offsetof(t241, f3), &t440__CustomAttributeCache_U3CcountAllU3Ek__BackingField};
static FieldInfo* t241_FIs[] =
{
	&t241_f0_FieldInfo,
	&t241_f1_FieldInfo,
	&t241_f2_FieldInfo,
	&t241_f3_FieldInfo,
	NULL
};
static PropertyInfo t241____countAll_PropertyInfo = 
{
	&t241_TI, "countAll", &m15191_MI, &m15193_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15195_MI;
static PropertyInfo t241____countActive_PropertyInfo = 
{
	&t241_TI, "countActive", &m15195_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t241____countInactive_PropertyInfo = 
{
	&t241_TI, "countInactive", &m15197_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t241_PIs[] =
{
	&t241____countAll_PropertyInfo,
	&t241____countActive_PropertyInfo,
	&t241____countInactive_PropertyInfo,
	NULL
};
extern Il2CppType t243_0_0_0;
extern Il2CppType t243_0_0_0;
extern Il2CppType t243_0_0_0;
static ParameterInfo t241_m2013_ParameterInfos[] = 
{
	{"actionOnGet", 0, 134217728, &EmptyCustomAttributesCache, &t243_0_0_0},
	{"actionOnRelease", 1, 134217728, &EmptyCustomAttributesCache, &t243_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m2013_GM;
MethodInfo m2013_MI = 
{
	".ctor", (methodPointerType)&m15190_gshared, &t241_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t241_m2013_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m2013_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t440__CustomAttributeCache_m2680;
extern Il2CppGenericMethod m15191_GM;
MethodInfo m15191_MI = 
{
	"get_countAll", (methodPointerType)&m15192_gshared, &t241_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &t440__CustomAttributeCache_m2680, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15191_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t241_m15193_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t440__CustomAttributeCache_m2681;
extern Il2CppGenericMethod m15193_GM;
MethodInfo m15193_MI = 
{
	"set_countAll", (methodPointerType)&m15194_gshared, &t241_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t241_m15193_ParameterInfos, &t440__CustomAttributeCache_m2681, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15193_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15195_GM;
MethodInfo m15195_MI = 
{
	"get_countActive", (methodPointerType)&m15196_gshared, &t241_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15195_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15197_GM;
MethodInfo m15197_MI = 
{
	"get_countInactive", (methodPointerType)&m15198_gshared, &t241_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15197_GM};
extern Il2CppType t262_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15199_GM;
MethodInfo m15199_MI = 
{
	"Get", (methodPointerType)&m15200_gshared, &t241_TI, &t262_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15199_GM};
extern Il2CppType t262_0_0_0;
static ParameterInfo t241_m15201_ParameterInfos[] = 
{
	{"element", 0, 134217728, &EmptyCustomAttributesCache, &t262_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15201_GM;
MethodInfo m15201_MI = 
{
	"Release", (methodPointerType)&m15202_gshared, &t241_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t241_m15201_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15201_GM};
static MethodInfo* t241_MIs[] =
{
	&m2013_MI,
	&m15191_MI,
	&m15193_MI,
	&m15195_MI,
	&m15197_MI,
	&m15199_MI,
	&m15201_MI,
	NULL
};
static MethodInfo* t241_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
extern TypeInfo t2863_TI;
extern TypeInfo t262_TI;
static Il2CppRGCTXData t241_RGCTXData[12] = 
{
	&t2863_TI/* Class Usage */,
	&m15219_MI/* Method Usage */,
	&m15191_MI/* Method Usage */,
	&m15197_MI/* Method Usage */,
	&m15228_MI/* Method Usage */,
	&t262_TI/* Class Usage */,
	&m24847_MI/* Method Usage */,
	&m15193_MI/* Method Usage */,
	&m15226_MI/* Method Usage */,
	&m15250_MI/* Method Usage */,
	&m15225_MI/* Method Usage */,
	&m15227_MI/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t241_0_0_0;
extern Il2CppType t241_1_0_0;
struct t241;
extern Il2CppGenericClass t241_GC;
extern CustomAttributesCache t440__CustomAttributeCache_U3CcountAllU3Ek__BackingField;
extern CustomAttributesCache t440__CustomAttributeCache_m2680;
extern CustomAttributesCache t440__CustomAttributeCache_m2681;
TypeInfo t241_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "ObjectPool`1", "UnityEngine.UI", t241_MIs, t241_PIs, t241_FIs, NULL, &t5_TI, NULL, NULL, &t241_TI, NULL, t241_VT, &EmptyCustomAttributesCache, &t241_TI, &t241_0_0_0, &t241_1_0_0, NULL, &t241_GC, NULL, NULL, NULL, t241_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t241), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 7, 3, 4, 0, 0, 4, 0, 0};
#include "t2864.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2864_TI;
#include "t2864MD.h"

#include "t2865.h"
#include "t2504.h"
extern TypeInfo t2865_TI;
extern TypeInfo t2504_TI;
#include "t2865MD.h"
#include "t2504MD.h"
extern MethodInfo m15192_MI;
extern MethodInfo m15198_MI;
extern MethodInfo m15212_MI;
extern MethodInfo m15203_MI;
extern MethodInfo m24811_MI;
extern MethodInfo m15194_MI;
extern MethodInfo m15210_MI;
extern MethodInfo m12078_MI;
extern MethodInfo m15209_MI;
extern MethodInfo m15211_MI;


extern MethodInfo m15190_MI;
 void m15190_gshared (t2864 * __this, t2504 * p0, t2504 * p1, MethodInfo* method)
{
	{
		t2865 * L_0 = (t2865 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (t2865 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		__this->f0 = L_0;
		m460(__this, &m460_MI);
		__this->f1 = p0;
		__this->f2 = p1;
		return;
	}
}
 int32_t m15192_gshared (t2864 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
 void m15194_gshared (t2864 * __this, int32_t p0, MethodInfo* method)
{
	{
		__this->f3 = p0;
		return;
	}
}
extern MethodInfo m15196_MI;
 int32_t m15196_gshared (t2864 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (t2864 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		int32_t L_1 = (( int32_t (*) (t2864 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return ((int32_t)(L_0-L_1));
	}
}
 int32_t m15198_gshared (t2864 * __this, MethodInfo* method)
{
	{
		t2865 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		return L_1;
	}
}
extern MethodInfo m15200_MI;
 t5 * m15200_gshared (t2864 * __this, MethodInfo* method)
{
	t5 * V_0 = {0};
	t5 * V_1 = {0};
	t5 * G_B4_0 = {0};
	{
		t2865 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		if (L_1)
		{
			goto IL_0047;
		}
	}
	{
		Initobj (&t5_TI, (&V_1));
		t5 * L_2 = V_1;
		if (!((t5 *)L_2))
		{
			goto IL_002e;
		}
	}
	{
		Initobj (&t5_TI, (&V_1));
		G_B4_0 = V_1;
		goto IL_0033;
	}

IL_002e:
	{
		t5 * L_3 = (( t5 * (*) (t5 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		V_0 = G_B4_0;
		int32_t L_4 = (( int32_t (*) (t2864 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (t2864 * __this, int32_t p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, ((int32_t)(L_4+1)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		goto IL_0053;
	}

IL_0047:
	{
		t2865 * L_5 = (__this->f0);
		t5 * L_6 = (( t5 * (*) (t2865 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_5, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		V_0 = L_6;
	}

IL_0053:
	{
		t2504 * L_7 = (__this->f1);
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		t2504 * L_8 = (__this->f1);
		VirtActionInvoker1< t5 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_8, V_0);
	}

IL_006a:
	{
		return V_0;
	}
}
extern MethodInfo m15202_MI;
 void m15202_gshared (t2864 * __this, t5 * p0, MethodInfo* method)
{
	{
		t2865 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		t2865 * L_2 = (__this->f0);
		t5 * L_3 = (( t5 * (*) (t2865 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		t5 * L_4 = L_3;
		t5 * L_5 = p0;
		bool L_6 = m3512(NULL, ((t5 *)L_4), ((t5 *)L_5), &m3512_MI);
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		m1957(NULL, (t11*) &_stringLiteral99, &m1957_MI);
	}

IL_003b:
	{
		t2504 * L_7 = (__this->f2);
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		t2504 * L_8 = (__this->f2);
		VirtActionInvoker1< t5 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_8, p0);
	}

IL_0052:
	{
		t2865 * L_9 = (__this->f0);
		(( void (*) (t2865 * __this, t5 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(L_9, p0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return;
	}
}
// Metadata Definition UnityEngine.UI.ObjectPool`1<System.Object>
extern Il2CppType t2865_0_0_33;
FieldInfo t2864_f0_FieldInfo = 
{
	"m_Stack", &t2865_0_0_33, &t2864_TI, offsetof(t2864, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2504_0_0_33;
FieldInfo t2864_f1_FieldInfo = 
{
	"m_ActionOnGet", &t2504_0_0_33, &t2864_TI, offsetof(t2864, f1), &EmptyCustomAttributesCache};
extern Il2CppType t2504_0_0_33;
FieldInfo t2864_f2_FieldInfo = 
{
	"m_ActionOnRelease", &t2504_0_0_33, &t2864_TI, offsetof(t2864, f2), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
extern CustomAttributesCache t440__CustomAttributeCache_U3CcountAllU3Ek__BackingField;
FieldInfo t2864_f3_FieldInfo = 
{
	"<countAll>k__BackingField", &t110_0_0_1, &t2864_TI, offsetof(t2864, f3), &t440__CustomAttributeCache_U3CcountAllU3Ek__BackingField};
static FieldInfo* t2864_FIs[] =
{
	&t2864_f0_FieldInfo,
	&t2864_f1_FieldInfo,
	&t2864_f2_FieldInfo,
	&t2864_f3_FieldInfo,
	NULL
};
static PropertyInfo t2864____countAll_PropertyInfo = 
{
	&t2864_TI, "countAll", &m15192_MI, &m15194_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2864____countActive_PropertyInfo = 
{
	&t2864_TI, "countActive", &m15196_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2864____countInactive_PropertyInfo = 
{
	&t2864_TI, "countInactive", &m15198_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2864_PIs[] =
{
	&t2864____countAll_PropertyInfo,
	&t2864____countActive_PropertyInfo,
	&t2864____countInactive_PropertyInfo,
	NULL
};
extern Il2CppType t2504_0_0_0;
extern Il2CppType t2504_0_0_0;
extern Il2CppType t2504_0_0_0;
static ParameterInfo t2864_m15190_ParameterInfos[] = 
{
	{"actionOnGet", 0, 134217728, &EmptyCustomAttributesCache, &t2504_0_0_0},
	{"actionOnRelease", 1, 134217728, &EmptyCustomAttributesCache, &t2504_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15190_GM;
MethodInfo m15190_MI = 
{
	".ctor", (methodPointerType)&m15190_gshared, &t2864_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t2864_m15190_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15190_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t440__CustomAttributeCache_m2680;
extern Il2CppGenericMethod m15192_GM;
MethodInfo m15192_MI = 
{
	"get_countAll", (methodPointerType)&m15192_gshared, &t2864_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &t440__CustomAttributeCache_m2680, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15192_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2864_m15194_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t440__CustomAttributeCache_m2681;
extern Il2CppGenericMethod m15194_GM;
MethodInfo m15194_MI = 
{
	"set_countAll", (methodPointerType)&m15194_gshared, &t2864_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2864_m15194_ParameterInfos, &t440__CustomAttributeCache_m2681, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15194_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15196_GM;
MethodInfo m15196_MI = 
{
	"get_countActive", (methodPointerType)&m15196_gshared, &t2864_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15196_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15198_GM;
MethodInfo m15198_MI = 
{
	"get_countInactive", (methodPointerType)&m15198_gshared, &t2864_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15198_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15200_GM;
MethodInfo m15200_MI = 
{
	"Get", (methodPointerType)&m15200_gshared, &t2864_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15200_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2864_m15202_ParameterInfos[] = 
{
	{"element", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15202_GM;
MethodInfo m15202_MI = 
{
	"Release", (methodPointerType)&m15202_gshared, &t2864_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2864_m15202_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15202_GM};
static MethodInfo* t2864_MIs[] =
{
	&m15190_MI,
	&m15192_MI,
	&m15194_MI,
	&m15196_MI,
	&m15198_MI,
	&m15200_MI,
	&m15202_MI,
	NULL
};
static MethodInfo* t2864_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
extern TypeInfo t2865_TI;
extern TypeInfo t5_TI;
static Il2CppRGCTXData t2864_RGCTXData[12] = 
{
	&t2865_TI/* Class Usage */,
	&m15203_MI/* Method Usage */,
	&m15192_MI/* Method Usage */,
	&m15198_MI/* Method Usage */,
	&m15212_MI/* Method Usage */,
	&t5_TI/* Class Usage */,
	&m24811_MI/* Method Usage */,
	&m15194_MI/* Method Usage */,
	&m15210_MI/* Method Usage */,
	&m12078_MI/* Method Usage */,
	&m15209_MI/* Method Usage */,
	&m15211_MI/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t2864_0_0_0;
extern Il2CppType t2864_1_0_0;
struct t2864;
extern Il2CppGenericClass t2864_GC;
extern CustomAttributesCache t440__CustomAttributeCache_U3CcountAllU3Ek__BackingField;
extern CustomAttributesCache t440__CustomAttributeCache_m2680;
extern CustomAttributesCache t440__CustomAttributeCache_m2681;
TypeInfo t2864_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "ObjectPool`1", "UnityEngine.UI", t2864_MIs, t2864_PIs, t2864_FIs, NULL, &t5_TI, NULL, NULL, &t2864_TI, NULL, t2864_VT, &EmptyCustomAttributesCache, &t2864_TI, &t2864_0_0_0, &t2864_1_0_0, NULL, &t2864_GC, NULL, NULL, NULL, t2864_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2864), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 7, 3, 4, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif

#include "t2866.h"
extern TypeInfo t1956_TI;
extern TypeInfo t2866_TI;
#include "t2866MD.h"
extern MethodInfo m4992_MI;
extern MethodInfo m15213_MI;
extern MethodInfo m23607_MI;
extern MethodInfo m15214_MI;


 void m15203_gshared (t2865 * __this, MethodInfo* method)
{
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m15204_MI;
 bool m15204_gshared (t2865 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m15205_MI;
 t5 * m15205_gshared (t2865 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m15206_MI;
 void m15206_gshared (t2865 * __this, t107 * p0, int32_t p1, MethodInfo* method)
{
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			t168* L_0 = (__this->f1);
			if (!L_0)
			{
				goto IL_0025;
			}
		}

IL_000b:
		{
			t168* L_1 = (__this->f1);
			VirtActionInvoker2< t107 *, int32_t >::Invoke(&m4992_MI, L_1, p0, p1);
			int32_t L_2 = (__this->f2);
			m5963(NULL, p0, p1, L_2, &m5963_MI);
		}

IL_0025:
		{
			// IL_0025: leave IL_0036
			goto IL_0036;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t142 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t1956_TI, e.ex->object.klass))
			goto IL_002a;
		throw e;
	}

IL_002a:
	{ // begin catch(System.ArrayTypeMismatchException)
		t160 * L_3 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m10152(L_3, &m10152_MI);
		il2cpp_codegen_raise_exception(L_3);
		// IL_0031: leave IL_0036
		goto IL_0036;
	} // end catch (depth: 1)

IL_0036:
	{
		return;
	}
}
extern MethodInfo m15207_MI;
 t5* m15207_gshared (t2865 * __this, MethodInfo* method)
{
	{
		t2866  L_0 = (( t2866  (*) (t2865 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2866  L_1 = L_0;
		t5 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return (t5*)L_2;
	}
}
extern MethodInfo m15208_MI;
 t5 * m15208_gshared (t2865 * __this, MethodInfo* method)
{
	{
		t2866  L_0 = (( t2866  (*) (t2865 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2866  L_1 = L_0;
		t5 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return (t5 *)L_2;
	}
}
 t5 * m15209_gshared (t2865 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t133 * L_1 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4766(L_1, &m4766_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		t168* L_2 = (__this->f1);
		int32_t L_3 = (__this->f2);
		int32_t L_4 = ((int32_t)(L_3-1));
		return (*(t5 **)(t5 **)SZArrayLdElema(L_2, L_4));
	}
}
 t5 * m15210_gshared (t2865 * __this, MethodInfo* method)
{
	t5 * V_0 = {0};
	int32_t V_1 = 0;
	t5 * V_2 = {0};
	{
		int32_t L_0 = (__this->f2);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t133 * L_1 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4766(L_1, &m4766_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = (__this->f3);
		__this->f3 = ((int32_t)(L_2+1));
		t168* L_3 = (__this->f1);
		int32_t L_4 = (__this->f2);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_1 = L_5;
		__this->f2 = L_5;
		int32_t L_6 = V_1;
		V_0 = (*(t5 **)(t5 **)SZArrayLdElema(L_3, L_6));
		t168* L_7 = (__this->f1);
		int32_t L_8 = (__this->f2);
		Initobj (&t5_TI, (&V_2));
		*((t5 **)(t5 **)SZArrayLdElema(L_7, L_8)) = (t5 *)V_2;
		return V_0;
	}
}
 void m15211_gshared (t2865 * __this, t5 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	t168** G_B4_0 = {0};
	t168** G_B3_0 = {0};
	int32_t G_B5_0 = 0;
	t168** G_B5_1 = {0};
	{
		t168* L_0 = (__this->f1);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (__this->f2);
		t168* L_2 = (__this->f1);
		if ((((uint32_t)L_1) != ((uint32_t)(((int32_t)(((t107 *)L_2)->max_length))))))
		{
			goto IL_0043;
		}
	}

IL_001e:
	{
		t168** L_3 = &(__this->f1);
		int32_t L_4 = (__this->f2);
		G_B3_0 = L_3;
		if (L_4)
		{
			G_B4_0 = L_3;
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((int32_t)16);
		G_B5_1 = G_B3_0;
		goto IL_003e;
	}

IL_0036:
	{
		int32_t L_5 = (__this->f2);
		G_B5_0 = ((int32_t)((int32_t)2*(int32_t)L_5));
		G_B5_1 = G_B4_0;
	}

IL_003e:
	{
		(( void (*) (t5 * __this, t168** p0, int32_t p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL, G_B5_1, G_B5_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
	}

IL_0043:
	{
		int32_t L_6 = (__this->f3);
		__this->f3 = ((int32_t)(L_6+1));
		t168* L_7 = (__this->f1);
		int32_t L_8 = (__this->f2);
		int32_t L_9 = L_8;
		V_0 = L_9;
		__this->f2 = ((int32_t)(L_9+1));
		*((t5 **)(t5 **)SZArrayLdElema(L_7, V_0)) = (t5 *)p0;
		return;
	}
}
 int32_t m15212_gshared (t2865 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
 t2866  m15213 (t2865 * __this, MethodInfo* method){
	{
		t2866  L_0 = {0};
		m15214(&L_0, __this, &m15214_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.Stack`1<System.Object>
extern Il2CppType t110_0_0_32849;
FieldInfo t2865_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t110_0_0_32849, &t2865_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t168_0_0_1;
FieldInfo t2865_f1_FieldInfo = 
{
	"_array", &t168_0_0_1, &t2865_TI, offsetof(t2865, f1), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2865_f2_FieldInfo = 
{
	"_size", &t110_0_0_1, &t2865_TI, offsetof(t2865, f2), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2865_f3_FieldInfo = 
{
	"_version", &t110_0_0_1, &t2865_TI, offsetof(t2865, f3), &EmptyCustomAttributesCache};
static FieldInfo* t2865_FIs[] =
{
	&t2865_f0_FieldInfo,
	&t2865_f1_FieldInfo,
	&t2865_f2_FieldInfo,
	&t2865_f3_FieldInfo,
	NULL
};
static const int32_t t2865_f0_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t2865_f0_DefaultValue = 
{
	&t2865_f0_FieldInfo, { (char*)&t2865_f0_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t2865_FDVs[] = 
{
	&t2865_f0_DefaultValue,
	NULL
};
static PropertyInfo t2865____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2865_TI, "System.Collections.ICollection.IsSynchronized", &m15204_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2865____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2865_TI, "System.Collections.ICollection.SyncRoot", &m15205_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2865____Count_PropertyInfo = 
{
	&t2865_TI, "Count", &m15212_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2865_PIs[] =
{
	&t2865____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2865____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2865____Count_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15203_GM;
MethodInfo m15203_MI = 
{
	".ctor", (methodPointerType)&m15203_gshared, &t2865_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15203_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15204_GM;
MethodInfo m15204_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m15204_gshared, &t2865_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15204_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15205_GM;
MethodInfo m15205_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m15205_gshared, &t2865_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15205_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2865_m15206_ParameterInfos[] = 
{
	{"dest", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"idx", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15206_GM;
MethodInfo m15206_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m15206_gshared, &t2865_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2865_m15206_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15206_GM};
extern Il2CppType t492_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15207_GM;
MethodInfo m15207_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m15207_gshared, &t2865_TI, &t492_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15207_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15208_GM;
MethodInfo m15208_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m15208_gshared, &t2865_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15208_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15209_GM;
MethodInfo m15209_MI = 
{
	"Peek", (methodPointerType)&m15209_gshared, &t2865_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15209_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15210_GM;
MethodInfo m15210_MI = 
{
	"Pop", (methodPointerType)&m15210_gshared, &t2865_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15210_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2865_m15211_ParameterInfos[] = 
{
	{"t", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15211_GM;
MethodInfo m15211_MI = 
{
	"Push", (methodPointerType)&m15211_gshared, &t2865_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2865_m15211_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15211_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15212_GM;
MethodInfo m15212_MI = 
{
	"get_Count", (methodPointerType)&m15212_gshared, &t2865_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15212_GM};
extern Il2CppType t2866_0_0_0;
extern void* RuntimeInvoker_t2866 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15213_GM;
MethodInfo m15213_MI = 
{
	"GetEnumerator", (methodPointerType)&m15213, &t2865_TI, &t2866_0_0_0, RuntimeInvoker_t2866, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15213_GM};
static MethodInfo* t2865_MIs[] =
{
	&m15203_MI,
	&m15204_MI,
	&m15205_MI,
	&m15206_MI,
	&m15207_MI,
	&m15208_MI,
	&m15209_MI,
	&m15210_MI,
	&m15211_MI,
	&m15212_MI,
	&m15213_MI,
	NULL
};
static MethodInfo* t2865_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m15212_MI,
	&m15204_MI,
	&m15205_MI,
	&m15206_MI,
	&m15208_MI,
	&m15207_MI,
};
extern TypeInfo t2459_TI;
static TypeInfo* t2865_ITIs[] = 
{
	&t811_TI,
	&t739_TI,
	&t2459_TI,
};
static Il2CppInterfaceOffsetPair t2865_IOs[] = 
{
	{ &t811_TI, 4},
	{ &t739_TI, 8},
	{ &t2459_TI, 9},
};
extern TypeInfo t2866_TI;
static Il2CppRGCTXData t2865_RGCTXData[4] = 
{
	&m15213_MI/* Method Usage */,
	&t2866_TI/* Class Usage */,
	&m23607_MI/* Method Usage */,
	&m15214_MI/* Method Usage */,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t2865_0_0_0;
extern Il2CppType t2865_1_0_0;
struct t2865;
extern Il2CppGenericClass t2865_GC;
extern CustomAttributesCache t982__CustomAttributeCache;
TypeInfo t2865_TI = 
{
	&g_System_dll_Image, NULL, "Stack`1", "System.Collections.Generic", t2865_MIs, t2865_PIs, t2865_FIs, NULL, &t5_TI, NULL, NULL, &t2865_TI, t2865_ITIs, t2865_VT, &t982__CustomAttributeCache, &t2865_TI, &t2865_0_0_0, &t2865_1_0_0, t2865_IOs, &t2865_GC, NULL, t2865_FDVs, NULL, t2865_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2865), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 11, 3, 4, 0, 0, 10, 3, 3};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m15218_MI;


 void m15214_gshared (t2866 * __this, t2865 * p0, MethodInfo* method)
{
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		int32_t L_0 = (p0->f3);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m15215_MI;
 t5 * m15215_gshared (t2866 * __this, MethodInfo* method)
{
	{
		t5 * L_0 = (( t5 * (*) (t2866 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t5 * L_1 = L_0;
		return ((t5 *)L_1);
	}
}
extern MethodInfo m15216_MI;
 void m15216_gshared (t2866 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15217_MI;
 bool m15217_gshared (t2866 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B7_0 = 0;
	{
		int32_t L_0 = (__this->f2);
		t2865 * L_1 = (__this->f0);
		int32_t L_2 = (L_1->f3);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		t133 * L_3 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4766(L_3, &m4766_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = (__this->f1);
		if ((((uint32_t)L_4) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_003a;
		}
	}
	{
		t2865 * L_5 = (__this->f0);
		int32_t L_6 = (L_5->f2);
		__this->f1 = L_6;
	}

IL_003a:
	{
		int32_t L_7 = (__this->f1);
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_8 = (__this->f1);
		int32_t L_9 = ((int32_t)(L_8-1));
		V_0 = L_9;
		__this->f1 = L_9;
		G_B7_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B7_0 = 0;
	}

IL_0060:
	{
		return G_B7_0;
	}
}
 t5 * m15218_gshared (t2866 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		t133 * L_1 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4766(L_1, &m4766_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		t2865 * L_2 = (__this->f0);
		t168* L_3 = (L_2->f1);
		int32_t L_4 = (__this->f1);
		int32_t L_5 = L_4;
		return (*(t5 **)(t5 **)SZArrayLdElema(L_3, L_5));
	}
}
// Metadata Definition System.Collections.Generic.Stack`1/Enumerator<System.Object>
extern Il2CppType t2865_0_0_1;
FieldInfo t2866_f0_FieldInfo = 
{
	"parent", &t2865_0_0_1, &t2866_TI, offsetof(t2866, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2866_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2866_TI, offsetof(t2866, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2866_f2_FieldInfo = 
{
	"_version", &t110_0_0_1, &t2866_TI, offsetof(t2866, f2) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2866_FIs[] =
{
	&t2866_f0_FieldInfo,
	&t2866_f1_FieldInfo,
	&t2866_f2_FieldInfo,
	NULL
};
static PropertyInfo t2866____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2866_TI, "System.Collections.IEnumerator.Current", &m15215_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2866____Current_PropertyInfo = 
{
	&t2866_TI, "Current", &m15218_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2866_PIs[] =
{
	&t2866____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2866____Current_PropertyInfo,
	NULL
};
extern Il2CppType t2865_0_0_0;
static ParameterInfo t2866_m15214_ParameterInfos[] = 
{
	{"t", 0, 134217728, &EmptyCustomAttributesCache, &t2865_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15214_GM;
MethodInfo m15214_MI = 
{
	".ctor", (methodPointerType)&m15214_gshared, &t2866_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2866_m15214_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15214_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15215_GM;
MethodInfo m15215_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15215_gshared, &t2866_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15215_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15216_GM;
MethodInfo m15216_MI = 
{
	"Dispose", (methodPointerType)&m15216_gshared, &t2866_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15216_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15217_GM;
MethodInfo m15217_MI = 
{
	"MoveNext", (methodPointerType)&m15217_gshared, &t2866_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15217_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15218_GM;
MethodInfo m15218_MI = 
{
	"get_Current", (methodPointerType)&m15218_gshared, &t2866_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15218_GM};
static MethodInfo* t2866_MIs[] =
{
	&m15214_MI,
	&m15215_MI,
	&m15216_MI,
	&m15217_MI,
	&m15218_MI,
	NULL
};
static MethodInfo* t2866_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m15215_MI,
	&m15217_MI,
	&m15216_MI,
	&m15218_MI,
};
extern TypeInfo t492_TI;
static TypeInfo* t2866_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t492_TI,
};
static Il2CppInterfaceOffsetPair t2866_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t492_TI, 7},
};
extern TypeInfo t5_TI;
static Il2CppRGCTXData t2866_RGCTXData[2] = 
{
	&m15218_MI/* Method Usage */,
	&t5_TI/* Class Usage */,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t2866_0_0_0;
extern Il2CppType t2866_1_0_0;
extern Il2CppGenericClass t2866_GC;
extern TypeInfo t982_TI;
TypeInfo t2866_TI = 
{
	&g_System_dll_Image, NULL, "Enumerator", "", t2866_MIs, t2866_PIs, t2866_FIs, NULL, &t267_TI, NULL, &t982_TI, &t2866_TI, t2866_ITIs, t2866_VT, &EmptyCustomAttributesCache, &t2866_TI, &t2866_0_0_0, &t2866_1_0_0, t2866_IOs, &t2866_GC, NULL, NULL, NULL, t2866_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2866)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 3, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif

#include "t2869.h"
extern TypeInfo t2869_TI;
#include "t2869MD.h"
extern MethodInfo m15229_MI;
extern MethodInfo m24846_MI;
extern MethodInfo m15245_MI;
struct t107;
#define m24846(__this, p0, p1, method) (void)m23607_gshared((t5 *)__this, (t168**)p0, (int32_t)p1, method)


 t2869  m15229 (t2863 * __this, MethodInfo* method){
	{
		t2869  L_0 = {0};
		m15245(&L_0, __this, &m15245_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
extern Il2CppType t110_0_0_32849;
FieldInfo t2863_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t110_0_0_32849, &t2863_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2867_0_0_1;
FieldInfo t2863_f1_FieldInfo = 
{
	"_array", &t2867_0_0_1, &t2863_TI, offsetof(t2863, f1), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2863_f2_FieldInfo = 
{
	"_size", &t110_0_0_1, &t2863_TI, offsetof(t2863, f2), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2863_f3_FieldInfo = 
{
	"_version", &t110_0_0_1, &t2863_TI, offsetof(t2863, f3), &EmptyCustomAttributesCache};
static FieldInfo* t2863_FIs[] =
{
	&t2863_f0_FieldInfo,
	&t2863_f1_FieldInfo,
	&t2863_f2_FieldInfo,
	&t2863_f3_FieldInfo,
	NULL
};
static const int32_t t2863_f0_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t2863_f0_DefaultValue = 
{
	&t2863_f0_FieldInfo, { (char*)&t2863_f0_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t2863_FDVs[] = 
{
	&t2863_f0_DefaultValue,
	NULL
};
extern MethodInfo m15220_MI;
static PropertyInfo t2863____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2863_TI, "System.Collections.ICollection.IsSynchronized", &m15220_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15221_MI;
static PropertyInfo t2863____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2863_TI, "System.Collections.ICollection.SyncRoot", &m15221_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2863____Count_PropertyInfo = 
{
	&t2863_TI, "Count", &m15228_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2863_PIs[] =
{
	&t2863____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2863____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2863____Count_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15219_GM;
MethodInfo m15219_MI = 
{
	".ctor", (methodPointerType)&m15203_gshared, &t2863_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15219_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15220_GM;
MethodInfo m15220_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m15204_gshared, &t2863_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15220_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15221_GM;
MethodInfo m15221_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m15205_gshared, &t2863_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15221_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2863_m15222_ParameterInfos[] = 
{
	{"dest", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"idx", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15222_GM;
MethodInfo m15222_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m15206_gshared, &t2863_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2863_m15222_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 2, false, true, 0, NULL, (methodPointerType)NULL, &m15222_GM};
extern Il2CppType t2868_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15223_GM;
MethodInfo m15223_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m15207_gshared, &t2863_TI, &t2868_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15223_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15224_GM;
MethodInfo m15224_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m15208_gshared, &t2863_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15224_GM};
extern Il2CppType t262_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15225_GM;
MethodInfo m15225_MI = 
{
	"Peek", (methodPointerType)&m15209_gshared, &t2863_TI, &t262_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15225_GM};
extern Il2CppType t262_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15226_GM;
MethodInfo m15226_MI = 
{
	"Pop", (methodPointerType)&m15210_gshared, &t2863_TI, &t262_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15226_GM};
extern Il2CppType t262_0_0_0;
static ParameterInfo t2863_m15227_ParameterInfos[] = 
{
	{"t", 0, 134217728, &EmptyCustomAttributesCache, &t262_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15227_GM;
MethodInfo m15227_MI = 
{
	"Push", (methodPointerType)&m15211_gshared, &t2863_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2863_m15227_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15227_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15228_GM;
MethodInfo m15228_MI = 
{
	"get_Count", (methodPointerType)&m15212_gshared, &t2863_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15228_GM};
extern Il2CppType t2869_0_0_0;
extern void* RuntimeInvoker_t2869 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15229_GM;
MethodInfo m15229_MI = 
{
	"GetEnumerator", (methodPointerType)&m15229, &t2863_TI, &t2869_0_0_0, RuntimeInvoker_t2869, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15229_GM};
static MethodInfo* t2863_MIs[] =
{
	&m15219_MI,
	&m15220_MI,
	&m15221_MI,
	&m15222_MI,
	&m15223_MI,
	&m15224_MI,
	&m15225_MI,
	&m15226_MI,
	&m15227_MI,
	&m15228_MI,
	&m15229_MI,
	NULL
};
extern MethodInfo m15222_MI;
extern MethodInfo m15224_MI;
extern MethodInfo m15223_MI;
static MethodInfo* t2863_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m15228_MI,
	&m15220_MI,
	&m15221_MI,
	&m15222_MI,
	&m15224_MI,
	&m15223_MI,
};
extern TypeInfo t6029_TI;
static TypeInfo* t2863_ITIs[] = 
{
	&t811_TI,
	&t739_TI,
	&t6029_TI,
};
static Il2CppInterfaceOffsetPair t2863_IOs[] = 
{
	{ &t811_TI, 4},
	{ &t739_TI, 8},
	{ &t6029_TI, 9},
};
extern TypeInfo t2869_TI;
static Il2CppRGCTXData t2863_RGCTXData[4] = 
{
	&m15229_MI/* Method Usage */,
	&t2869_TI/* Class Usage */,
	&m24846_MI/* Method Usage */,
	&m15245_MI/* Method Usage */,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t2863_0_0_0;
extern Il2CppType t2863_1_0_0;
struct t2863;
extern Il2CppGenericClass t2863_GC;
extern CustomAttributesCache t982__CustomAttributeCache;
TypeInfo t2863_TI = 
{
	&g_System_dll_Image, NULL, "Stack`1", "System.Collections.Generic", t2863_MIs, t2863_PIs, t2863_FIs, NULL, &t5_TI, NULL, NULL, &t2863_TI, t2863_ITIs, t2863_VT, &t982__CustomAttributeCache, &t2863_TI, &t2863_0_0_0, &t2863_1_0_0, t2863_IOs, &t2863_GC, NULL, t2863_FDVs, NULL, t2863_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2863), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 11, 3, 4, 0, 0, 10, 3, 3};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
extern Il2CppType t2868_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32375_GM;
MethodInfo m32375_MI = 
{
	"GetEnumerator", NULL, &t6029_TI, &t2868_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32375_GM};
static MethodInfo* t6029_MIs[] =
{
	&m32375_MI,
	NULL
};
static TypeInfo* t6029_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6029_0_0_0;
extern Il2CppType t6029_1_0_0;
struct t6029;
extern Il2CppGenericClass t6029_GC;
TypeInfo t6029_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6029_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6029_TI, t6029_ITIs, NULL, &EmptyCustomAttributesCache, &t6029_TI, &t6029_0_0_0, &t6029_1_0_0, NULL, &t6029_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2868_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
extern MethodInfo m32376_MI;
static PropertyInfo t2868____Current_PropertyInfo = 
{
	&t2868_TI, "Current", &m32376_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2868_PIs[] =
{
	&t2868____Current_PropertyInfo,
	NULL
};
extern Il2CppType t262_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32376_GM;
MethodInfo m32376_MI = 
{
	"get_Current", NULL, &t2868_TI, &t262_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32376_GM};
static MethodInfo* t2868_MIs[] =
{
	&m32376_MI,
	NULL
};
static TypeInfo* t2868_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2868_0_0_0;
extern Il2CppType t2868_1_0_0;
struct t2868;
extern Il2CppGenericClass t2868_GC;
TypeInfo t2868_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2868_MIs, t2868_PIs, NULL, NULL, NULL, NULL, NULL, &t2868_TI, t2868_ITIs, NULL, &EmptyCustomAttributesCache, &t2868_TI, &t2868_0_0_0, &t2868_1_0_0, NULL, &t2868_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2870.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2870_TI;
#include "t2870MD.h"

extern MethodInfo m15234_MI;
extern MethodInfo m24813_MI;
struct t107;
#define m24813(__this, p0, method) (t262 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
extern Il2CppType t107_0_0_1;
FieldInfo t2870_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t2870_TI, offsetof(t2870, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2870_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2870_TI, offsetof(t2870, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2870_FIs[] =
{
	&t2870_f0_FieldInfo,
	&t2870_f1_FieldInfo,
	NULL
};
extern MethodInfo m15231_MI;
static PropertyInfo t2870____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2870_TI, "System.Collections.IEnumerator.Current", &m15231_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2870____Current_PropertyInfo = 
{
	&t2870_TI, "Current", &m15234_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2870_PIs[] =
{
	&t2870____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2870____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t2870_m15230_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15230_GM;
MethodInfo m15230_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t2870_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2870_m15230_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15230_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15231_GM;
MethodInfo m15231_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t2870_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15231_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15232_GM;
MethodInfo m15232_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t2870_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15232_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15233_GM;
MethodInfo m15233_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t2870_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15233_GM};
extern Il2CppType t262_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15234_GM;
MethodInfo m15234_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t2870_TI, &t262_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15234_GM};
static MethodInfo* t2870_MIs[] =
{
	&m15230_MI,
	&m15231_MI,
	&m15232_MI,
	&m15233_MI,
	&m15234_MI,
	NULL
};
extern MethodInfo m15233_MI;
extern MethodInfo m15232_MI;
static MethodInfo* t2870_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m15231_MI,
	&m15233_MI,
	&m15232_MI,
	&m15234_MI,
};
static TypeInfo* t2870_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t2868_TI,
};
static Il2CppInterfaceOffsetPair t2870_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t2868_TI, 7},
};
extern TypeInfo t262_TI;
static Il2CppRGCTXData t2870_RGCTXData[3] = 
{
	&m15234_MI/* Method Usage */,
	&t262_TI/* Class Usage */,
	&m24813_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2870_0_0_0;
extern Il2CppType t2870_1_0_0;
extern Il2CppGenericClass t2870_GC;
TypeInfo t2870_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2870_MIs, t2870_PIs, t2870_FIs, NULL, &t267_TI, NULL, &t107_TI, &t2870_TI, t2870_ITIs, t2870_VT, &EmptyCustomAttributesCache, &t2870_TI, &t2870_0_0_0, &t2870_1_0_0, t2870_IOs, &t2870_GC, NULL, NULL, NULL, t2870_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2870)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6027_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
extern MethodInfo m32377_MI;
static PropertyInfo t6027____Count_PropertyInfo = 
{
	&t6027_TI, "Count", &m32377_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m32378_MI;
static PropertyInfo t6027____IsReadOnly_PropertyInfo = 
{
	&t6027_TI, "IsReadOnly", &m32378_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6027_PIs[] =
{
	&t6027____Count_PropertyInfo,
	&t6027____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32377_GM;
MethodInfo m32377_MI = 
{
	"get_Count", NULL, &t6027_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32377_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32378_GM;
MethodInfo m32378_MI = 
{
	"get_IsReadOnly", NULL, &t6027_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32378_GM};
extern Il2CppType t262_0_0_0;
static ParameterInfo t6027_m32379_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t262_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32379_GM;
MethodInfo m32379_MI = 
{
	"Add", NULL, &t6027_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6027_m32379_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32379_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32380_GM;
MethodInfo m32380_MI = 
{
	"Clear", NULL, &t6027_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32380_GM};
extern Il2CppType t262_0_0_0;
static ParameterInfo t6027_m32381_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t262_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32381_GM;
MethodInfo m32381_MI = 
{
	"Contains", NULL, &t6027_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6027_m32381_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32381_GM};
extern Il2CppType t2867_0_0_0;
extern Il2CppType t2867_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6027_m32382_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2867_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32382_GM;
MethodInfo m32382_MI = 
{
	"CopyTo", NULL, &t6027_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6027_m32382_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32382_GM};
extern Il2CppType t262_0_0_0;
static ParameterInfo t6027_m32383_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t262_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32383_GM;
MethodInfo m32383_MI = 
{
	"Remove", NULL, &t6027_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6027_m32383_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32383_GM};
static MethodInfo* t6027_MIs[] =
{
	&m32377_MI,
	&m32378_MI,
	&m32379_MI,
	&m32380_MI,
	&m32381_MI,
	&m32382_MI,
	&m32383_MI,
	NULL
};
static TypeInfo* t6027_ITIs[] = 
{
	&t739_TI,
	&t6029_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6027_0_0_0;
extern Il2CppType t6027_1_0_0;
struct t6027;
extern Il2CppGenericClass t6027_GC;
TypeInfo t6027_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6027_MIs, t6027_PIs, NULL, NULL, NULL, NULL, NULL, &t6027_TI, t6027_ITIs, NULL, &EmptyCustomAttributesCache, &t6027_TI, &t6027_0_0_0, &t6027_1_0_0, NULL, &t6027_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6028_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
extern MethodInfo m32384_MI;
extern MethodInfo m32385_MI;
static PropertyInfo t6028____Item_PropertyInfo = 
{
	&t6028_TI, "Item", &m32384_MI, &m32385_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6028_PIs[] =
{
	&t6028____Item_PropertyInfo,
	NULL
};
extern Il2CppType t262_0_0_0;
static ParameterInfo t6028_m32386_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t262_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32386_GM;
MethodInfo m32386_MI = 
{
	"IndexOf", NULL, &t6028_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6028_m32386_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32386_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t262_0_0_0;
static ParameterInfo t6028_m32387_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t262_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32387_GM;
MethodInfo m32387_MI = 
{
	"Insert", NULL, &t6028_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6028_m32387_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32387_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6028_m32388_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32388_GM;
MethodInfo m32388_MI = 
{
	"RemoveAt", NULL, &t6028_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6028_m32388_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32388_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6028_m32384_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t262_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32384_GM;
MethodInfo m32384_MI = 
{
	"get_Item", NULL, &t6028_TI, &t262_0_0_0, RuntimeInvoker_t5_t110, t6028_m32384_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32384_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t262_0_0_0;
static ParameterInfo t6028_m32385_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t262_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32385_GM;
MethodInfo m32385_MI = 
{
	"set_Item", NULL, &t6028_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6028_m32385_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32385_GM};
static MethodInfo* t6028_MIs[] =
{
	&m32386_MI,
	&m32387_MI,
	&m32388_MI,
	&m32384_MI,
	&m32385_MI,
	NULL
};
static TypeInfo* t6028_ITIs[] = 
{
	&t739_TI,
	&t6027_TI,
	&t6029_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6028_0_0_0;
extern Il2CppType t6028_1_0_0;
struct t6028;
extern Il2CppGenericClass t6028_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6028_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6028_MIs, t6028_PIs, NULL, NULL, NULL, NULL, NULL, &t6028_TI, t6028_ITIs, NULL, &t2240__CustomAttributeCache, &t6028_TI, &t6028_0_0_0, &t6028_1_0_0, NULL, &t6028_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6030_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.ICollection>
extern MethodInfo m32389_MI;
static PropertyInfo t6030____Count_PropertyInfo = 
{
	&t6030_TI, "Count", &m32389_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m32390_MI;
static PropertyInfo t6030____IsReadOnly_PropertyInfo = 
{
	&t6030_TI, "IsReadOnly", &m32390_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6030_PIs[] =
{
	&t6030____Count_PropertyInfo,
	&t6030____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32389_GM;
MethodInfo m32389_MI = 
{
	"get_Count", NULL, &t6030_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32389_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32390_GM;
MethodInfo m32390_MI = 
{
	"get_IsReadOnly", NULL, &t6030_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32390_GM};
extern Il2CppType t811_0_0_0;
extern Il2CppType t811_0_0_0;
static ParameterInfo t6030_m32391_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t811_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32391_GM;
MethodInfo m32391_MI = 
{
	"Add", NULL, &t6030_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6030_m32391_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32391_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32392_GM;
MethodInfo m32392_MI = 
{
	"Clear", NULL, &t6030_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32392_GM};
extern Il2CppType t811_0_0_0;
static ParameterInfo t6030_m32393_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t811_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32393_GM;
MethodInfo m32393_MI = 
{
	"Contains", NULL, &t6030_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6030_m32393_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32393_GM};
extern Il2CppType t4183_0_0_0;
extern Il2CppType t4183_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6030_m32394_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4183_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32394_GM;
MethodInfo m32394_MI = 
{
	"CopyTo", NULL, &t6030_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6030_m32394_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32394_GM};
extern Il2CppType t811_0_0_0;
static ParameterInfo t6030_m32395_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t811_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32395_GM;
MethodInfo m32395_MI = 
{
	"Remove", NULL, &t6030_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6030_m32395_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32395_GM};
static MethodInfo* t6030_MIs[] =
{
	&m32389_MI,
	&m32390_MI,
	&m32391_MI,
	&m32392_MI,
	&m32393_MI,
	&m32394_MI,
	&m32395_MI,
	NULL
};
extern TypeInfo t6032_TI;
static TypeInfo* t6030_ITIs[] = 
{
	&t739_TI,
	&t6032_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6030_0_0_0;
extern Il2CppType t6030_1_0_0;
struct t6030;
extern Il2CppGenericClass t6030_GC;
TypeInfo t6030_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6030_MIs, t6030_PIs, NULL, NULL, NULL, NULL, NULL, &t6030_TI, t6030_ITIs, NULL, &EmptyCustomAttributesCache, &t6030_TI, &t6030_0_0_0, &t6030_1_0_0, NULL, &t6030_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.ICollection>
extern Il2CppType t4792_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32396_GM;
MethodInfo m32396_MI = 
{
	"GetEnumerator", NULL, &t6032_TI, &t4792_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32396_GM};
static MethodInfo* t6032_MIs[] =
{
	&m32396_MI,
	NULL
};
static TypeInfo* t6032_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6032_0_0_0;
extern Il2CppType t6032_1_0_0;
struct t6032;
extern Il2CppGenericClass t6032_GC;
TypeInfo t6032_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6032_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6032_TI, t6032_ITIs, NULL, &EmptyCustomAttributesCache, &t6032_TI, &t6032_0_0_0, &t6032_1_0_0, NULL, &t6032_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4792_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.ICollection>
extern MethodInfo m32397_MI;
static PropertyInfo t4792____Current_PropertyInfo = 
{
	&t4792_TI, "Current", &m32397_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4792_PIs[] =
{
	&t4792____Current_PropertyInfo,
	NULL
};
extern Il2CppType t811_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32397_GM;
MethodInfo m32397_MI = 
{
	"get_Current", NULL, &t4792_TI, &t811_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32397_GM};
static MethodInfo* t4792_MIs[] =
{
	&m32397_MI,
	NULL
};
static TypeInfo* t4792_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4792_0_0_0;
extern Il2CppType t4792_1_0_0;
struct t4792;
extern Il2CppGenericClass t4792_GC;
TypeInfo t4792_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4792_MIs, t4792_PIs, NULL, NULL, NULL, NULL, NULL, &t4792_TI, t4792_ITIs, NULL, &EmptyCustomAttributesCache, &t4792_TI, &t4792_0_0_0, &t4792_1_0_0, NULL, &t4792_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2871.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2871_TI;
#include "t2871MD.h"

extern MethodInfo m15239_MI;
extern MethodInfo m24824_MI;
struct t107;
#define m24824(__this, p0, method) (t5 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.ICollection>
extern Il2CppType t107_0_0_1;
FieldInfo t2871_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t2871_TI, offsetof(t2871, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2871_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2871_TI, offsetof(t2871, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2871_FIs[] =
{
	&t2871_f0_FieldInfo,
	&t2871_f1_FieldInfo,
	NULL
};
extern MethodInfo m15236_MI;
static PropertyInfo t2871____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2871_TI, "System.Collections.IEnumerator.Current", &m15236_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2871____Current_PropertyInfo = 
{
	&t2871_TI, "Current", &m15239_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2871_PIs[] =
{
	&t2871____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2871____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t2871_m15235_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15235_GM;
MethodInfo m15235_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t2871_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2871_m15235_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m15235_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15236_GM;
MethodInfo m15236_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t2871_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15236_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15237_GM;
MethodInfo m15237_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t2871_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15237_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15238_GM;
MethodInfo m15238_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t2871_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15238_GM};
extern Il2CppType t811_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m15239_GM;
MethodInfo m15239_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t2871_TI, &t811_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m15239_GM};
static MethodInfo* t2871_MIs[] =
{
	&m15235_MI,
	&m15236_MI,
	&m15237_MI,
	&m15238_MI,
	&m15239_MI,
	NULL
};
extern MethodInfo m15238_MI;
extern MethodInfo m15237_MI;
static MethodInfo* t2871_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m15236_MI,
	&m15238_MI,
	&m15237_MI,
	&m15239_MI,
};
static TypeInfo* t2871_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t4792_TI,
};
static Il2CppInterfaceOffsetPair t2871_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t4792_TI, 7},
};
extern TypeInfo t811_TI;
static Il2CppRGCTXData t2871_RGCTXData[3] = 
{
	&m15239_MI/* Method Usage */,
	&t811_TI/* Class Usage */,
	&m24824_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2871_0_0_0;
extern Il2CppType t2871_1_0_0;
extern Il2CppGenericClass t2871_GC;
TypeInfo t2871_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2871_MIs, t2871_PIs, t2871_FIs, NULL, &t267_TI, NULL, &t107_TI, &t2871_TI, t2871_ITIs, t2871_VT, &EmptyCustomAttributesCache, &t2871_TI, &t2871_0_0_0, &t2871_1_0_0, t2871_IOs, &t2871_GC, NULL, NULL, NULL, t2871_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2871)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6031_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.ICollection>
extern MethodInfo m32398_MI;
extern MethodInfo m32399_MI;
static PropertyInfo t6031____Item_PropertyInfo = 
{
	&t6031_TI, "Item", &m32398_MI, &m32399_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6031_PIs[] =
{
	&t6031____Item_PropertyInfo,
	NULL
};
extern Il2CppType t811_0_0_0;
static ParameterInfo t6031_m32400_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t811_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32400_GM;
MethodInfo m32400_MI = 
{
	"IndexOf", NULL, &t6031_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6031_m32400_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32400_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t811_0_0_0;
static ParameterInfo t6031_m32401_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t811_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32401_GM;
MethodInfo m32401_MI = 
{
	"Insert", NULL, &t6031_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6031_m32401_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32401_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6031_m32402_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32402_GM;
MethodInfo m32402_MI = 
{
	"RemoveAt", NULL, &t6031_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6031_m32402_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32402_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6031_m32398_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t811_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32398_GM;
MethodInfo m32398_MI = 
{
	"get_Item", NULL, &t6031_TI, &t811_0_0_0, RuntimeInvoker_t5_t110, t6031_m32398_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32398_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t811_0_0_0;
static ParameterInfo t6031_m32399_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t811_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32399_GM;
MethodInfo m32399_MI = 
{
	"set_Item", NULL, &t6031_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6031_m32399_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32399_GM};
static MethodInfo* t6031_MIs[] =
{
	&m32400_MI,
	&m32401_MI,
	&m32402_MI,
	&m32398_MI,
	&m32399_MI,
	NULL
};
static TypeInfo* t6031_ITIs[] = 
{
	&t739_TI,
	&t6030_TI,
	&t6032_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6031_0_0_0;
extern Il2CppType t6031_1_0_0;
struct t6031;
extern Il2CppGenericClass t6031_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6031_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6031_MIs, t6031_PIs, NULL, NULL, NULL, NULL, NULL, &t6031_TI, t6031_ITIs, NULL, &t2240__CustomAttributeCache, &t6031_TI, &t6031_0_0_0, &t6031_1_0_0, NULL, &t6031_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6033_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.IList>
extern MethodInfo m32403_MI;
static PropertyInfo t6033____Count_PropertyInfo = 
{
	&t6033_TI, "Count", &m32403_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m32404_MI;
static PropertyInfo t6033____IsReadOnly_PropertyInfo = 
{
	&t6033_TI, "IsReadOnly", &m32404_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6033_PIs[] =
{
	&t6033____Count_PropertyInfo,
	&t6033____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32403_GM;
MethodInfo m32403_MI = 
{
	"get_Count", NULL, &t6033_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32403_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32404_GM;
MethodInfo m32404_MI = 
{
	"get_IsReadOnly", NULL, &t6033_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32404_GM};
extern Il2CppType t1129_0_0_0;
extern Il2CppType t1129_0_0_0;
static ParameterInfo t6033_m32405_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1129_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32405_GM;
MethodInfo m32405_MI = 
{
	"Add", NULL, &t6033_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6033_m32405_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32405_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32406_GM;
MethodInfo m32406_MI = 
{
	"Clear", NULL, &t6033_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32406_GM};
extern Il2CppType t1129_0_0_0;
static ParameterInfo t6033_m32407_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1129_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32407_GM;
MethodInfo m32407_MI = 
{
	"Contains", NULL, &t6033_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6033_m32407_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32407_GM};
extern Il2CppType t4184_0_0_0;
extern Il2CppType t4184_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6033_m32408_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4184_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32408_GM;
MethodInfo m32408_MI = 
{
	"CopyTo", NULL, &t6033_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6033_m32408_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32408_GM};
extern Il2CppType t1129_0_0_0;
static ParameterInfo t6033_m32409_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1129_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32409_GM;
MethodInfo m32409_MI = 
{
	"Remove", NULL, &t6033_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6033_m32409_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32409_GM};
static MethodInfo* t6033_MIs[] =
{
	&m32403_MI,
	&m32404_MI,
	&m32405_MI,
	&m32406_MI,
	&m32407_MI,
	&m32408_MI,
	&m32409_MI,
	NULL
};
extern TypeInfo t6035_TI;
static TypeInfo* t6033_ITIs[] = 
{
	&t739_TI,
	&t6035_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6033_0_0_0;
extern Il2CppType t6033_1_0_0;
struct t6033;
extern Il2CppGenericClass t6033_GC;
TypeInfo t6033_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6033_MIs, t6033_PIs, NULL, NULL, NULL, NULL, NULL, &t6033_TI, t6033_ITIs, NULL, &EmptyCustomAttributesCache, &t6033_TI, &t6033_0_0_0, &t6033_1_0_0, NULL, &t6033_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
