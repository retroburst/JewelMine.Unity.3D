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
extern TypeInfo t6654_TI;

#include "t110.h"
#include "t108.h"
#include "t109.h"
#include "t717.h"
#include "UnityEngine_ArrayTypes.h"

#include "t107.h"

// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngineInternal.TypeInferenceRuleAttribute>
extern MethodInfo m35757_MI;
static PropertyInfo t6654____Count_PropertyInfo = 
{
	&t6654_TI, "Count", &m35757_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35758_MI;
static PropertyInfo t6654____IsReadOnly_PropertyInfo = 
{
	&t6654_TI, "IsReadOnly", &m35758_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6654_PIs[] =
{
	&t6654____Count_PropertyInfo,
	&t6654____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35757_GM;
MethodInfo m35757_MI = 
{
	"get_Count", NULL, &t6654_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35757_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35758_GM;
MethodInfo m35758_MI = 
{
	"get_IsReadOnly", NULL, &t6654_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35758_GM};
extern Il2CppType t717_0_0_0;
extern Il2CppType t717_0_0_0;
static ParameterInfo t6654_m35759_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t717_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35759_GM;
MethodInfo m35759_MI = 
{
	"Add", NULL, &t6654_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6654_m35759_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35759_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35760_GM;
MethodInfo m35760_MI = 
{
	"Clear", NULL, &t6654_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35760_GM};
extern Il2CppType t717_0_0_0;
static ParameterInfo t6654_m35761_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t717_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35761_GM;
MethodInfo m35761_MI = 
{
	"Contains", NULL, &t6654_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6654_m35761_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35761_GM};
extern Il2CppType t4470_0_0_0;
extern Il2CppType t4470_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6654_m35762_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4470_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35762_GM;
MethodInfo m35762_MI = 
{
	"CopyTo", NULL, &t6654_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6654_m35762_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35762_GM};
extern Il2CppType t717_0_0_0;
static ParameterInfo t6654_m35763_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t717_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35763_GM;
MethodInfo m35763_MI = 
{
	"Remove", NULL, &t6654_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6654_m35763_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35763_GM};
static MethodInfo* t6654_MIs[] =
{
	&m35757_MI,
	&m35758_MI,
	&m35759_MI,
	&m35760_MI,
	&m35761_MI,
	&m35762_MI,
	&m35763_MI,
	NULL
};
extern TypeInfo t739_TI;
extern TypeInfo t6656_TI;
static TypeInfo* t6654_ITIs[] = 
{
	&t739_TI,
	&t6656_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6654_0_0_0;
extern Il2CppType t6654_1_0_0;
struct t6654;
extern Il2CppGenericClass t6654_GC;
TypeInfo t6654_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6654_MIs, t6654_PIs, NULL, NULL, NULL, NULL, NULL, &t6654_TI, t6654_ITIs, NULL, &EmptyCustomAttributesCache, &t6654_TI, &t6654_0_0_0, &t6654_1_0_0, NULL, &t6654_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngineInternal.TypeInferenceRuleAttribute>
extern Il2CppType t5276_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35764_GM;
MethodInfo m35764_MI = 
{
	"GetEnumerator", NULL, &t6656_TI, &t5276_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35764_GM};
static MethodInfo* t6656_MIs[] =
{
	&m35764_MI,
	NULL
};
static TypeInfo* t6656_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6656_0_0_0;
extern Il2CppType t6656_1_0_0;
struct t6656;
extern Il2CppGenericClass t6656_GC;
TypeInfo t6656_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6656_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6656_TI, t6656_ITIs, NULL, &EmptyCustomAttributesCache, &t6656_TI, &t6656_0_0_0, &t6656_1_0_0, NULL, &t6656_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6655_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngineInternal.TypeInferenceRuleAttribute>
extern MethodInfo m35765_MI;
extern MethodInfo m35766_MI;
static PropertyInfo t6655____Item_PropertyInfo = 
{
	&t6655_TI, "Item", &m35765_MI, &m35766_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6655_PIs[] =
{
	&t6655____Item_PropertyInfo,
	NULL
};
extern Il2CppType t717_0_0_0;
static ParameterInfo t6655_m35767_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t717_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35767_GM;
MethodInfo m35767_MI = 
{
	"IndexOf", NULL, &t6655_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6655_m35767_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35767_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t717_0_0_0;
static ParameterInfo t6655_m35768_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t717_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35768_GM;
MethodInfo m35768_MI = 
{
	"Insert", NULL, &t6655_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6655_m35768_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35768_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6655_m35769_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35769_GM;
MethodInfo m35769_MI = 
{
	"RemoveAt", NULL, &t6655_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6655_m35769_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35769_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6655_m35765_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t717_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35765_GM;
MethodInfo m35765_MI = 
{
	"get_Item", NULL, &t6655_TI, &t717_0_0_0, RuntimeInvoker_t5_t110, t6655_m35765_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35765_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t717_0_0_0;
static ParameterInfo t6655_m35766_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t717_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35766_GM;
MethodInfo m35766_MI = 
{
	"set_Item", NULL, &t6655_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6655_m35766_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35766_GM};
static MethodInfo* t6655_MIs[] =
{
	&m35767_MI,
	&m35768_MI,
	&m35769_MI,
	&m35765_MI,
	&m35766_MI,
	NULL
};
static TypeInfo* t6655_ITIs[] = 
{
	&t739_TI,
	&t6654_TI,
	&t6656_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6655_0_0_0;
extern Il2CppType t6655_1_0_0;
struct t6655;
extern Il2CppGenericClass t6655_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6655_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6655_MIs, t6655_PIs, NULL, NULL, NULL, NULL, NULL, &t6655_TI, t6655_ITIs, NULL, &t2240__CustomAttributeCache, &t6655_TI, &t6655_0_0_0, &t6655_1_0_0, NULL, &t6655_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5278_TI;

#include "t151.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.ExtensionAttribute>
extern MethodInfo m35770_MI;
static PropertyInfo t5278____Current_PropertyInfo = 
{
	&t5278_TI, "Current", &m35770_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5278_PIs[] =
{
	&t5278____Current_PropertyInfo,
	NULL
};
extern Il2CppType t151_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35770_GM;
MethodInfo m35770_MI = 
{
	"get_Current", NULL, &t5278_TI, &t151_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35770_GM};
static MethodInfo* t5278_MIs[] =
{
	&m35770_MI,
	NULL
};
extern TypeInfo t196_TI;
extern TypeInfo t132_TI;
static TypeInfo* t5278_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5278_0_0_0;
extern Il2CppType t5278_1_0_0;
struct t5278;
extern Il2CppGenericClass t5278_GC;
TypeInfo t5278_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5278_MIs, t5278_PIs, NULL, NULL, NULL, NULL, NULL, &t5278_TI, t5278_ITIs, NULL, &EmptyCustomAttributesCache, &t5278_TI, &t5278_0_0_0, &t5278_1_0_0, NULL, &t5278_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3805.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3805_TI;
#include "t3805MD.h"

#include "t5.h"
#include "t11.h"
#include "t133.h"
extern TypeInfo t151_TI;
extern TypeInfo t133_TI;
#include "t133MD.h"
#include "t107MD.h"
extern MethodInfo m21704_MI;
extern MethodInfo m4758_MI;
extern MethodInfo m4763_MI;
extern MethodInfo m27871_MI;
struct t107;
#include "t1181.h"
struct t107;
 t5 * m23596_gshared (t107 * __this, int32_t p0, MethodInfo* method);
#define m23596(__this, p0, method) (t5 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
#define m27871(__this, p0, method) (t151 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.ExtensionAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3805_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3805_TI, offsetof(t3805, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3805_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3805_TI, offsetof(t3805, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3805_FIs[] =
{
	&t3805_f0_FieldInfo,
	&t3805_f1_FieldInfo,
	NULL
};
extern MethodInfo m21701_MI;
static PropertyInfo t3805____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3805_TI, "System.Collections.IEnumerator.Current", &m21701_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3805____Current_PropertyInfo = 
{
	&t3805_TI, "Current", &m21704_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3805_PIs[] =
{
	&t3805____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3805____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
extern Il2CppType t107_0_0_0;
static ParameterInfo t3805_m21700_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21700_GM;
MethodInfo m21700_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3805_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3805_m21700_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21700_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21701_GM;
MethodInfo m21701_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3805_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21701_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21702_GM;
MethodInfo m21702_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3805_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21702_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21703_GM;
MethodInfo m21703_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3805_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21703_GM};
extern Il2CppType t151_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21704_GM;
MethodInfo m21704_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3805_TI, &t151_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21704_GM};
static MethodInfo* t3805_MIs[] =
{
	&m21700_MI,
	&m21701_MI,
	&m21702_MI,
	&m21703_MI,
	&m21704_MI,
	NULL
};
extern MethodInfo m2041_MI;
extern MethodInfo m465_MI;
extern MethodInfo m2042_MI;
extern MethodInfo m2147_MI;
extern MethodInfo m21703_MI;
extern MethodInfo m21702_MI;
static MethodInfo* t3805_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21701_MI,
	&m21703_MI,
	&m21702_MI,
	&m21704_MI,
};
static TypeInfo* t3805_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5278_TI,
};
static Il2CppInterfaceOffsetPair t3805_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5278_TI, 7},
};
extern TypeInfo t151_TI;
static Il2CppRGCTXData t3805_RGCTXData[3] = 
{
	&m21704_MI/* Method Usage */,
	&t151_TI/* Class Usage */,
	&m27871_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3805_0_0_0;
extern Il2CppType t3805_1_0_0;
extern TypeInfo t267_TI;
extern Il2CppGenericClass t3805_GC;
extern TypeInfo t107_TI;
TypeInfo t3805_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3805_MIs, t3805_PIs, t3805_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3805_TI, t3805_ITIs, t3805_VT, &EmptyCustomAttributesCache, &t3805_TI, &t3805_0_0_0, &t3805_1_0_0, t3805_IOs, &t3805_GC, NULL, NULL, NULL, t3805_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3805)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6657_TI;

#include "System.Core_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.ExtensionAttribute>
extern MethodInfo m35771_MI;
static PropertyInfo t6657____Count_PropertyInfo = 
{
	&t6657_TI, "Count", &m35771_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35772_MI;
static PropertyInfo t6657____IsReadOnly_PropertyInfo = 
{
	&t6657_TI, "IsReadOnly", &m35772_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6657_PIs[] =
{
	&t6657____Count_PropertyInfo,
	&t6657____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35771_GM;
MethodInfo m35771_MI = 
{
	"get_Count", NULL, &t6657_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35771_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35772_GM;
MethodInfo m35772_MI = 
{
	"get_IsReadOnly", NULL, &t6657_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35772_GM};
extern Il2CppType t151_0_0_0;
extern Il2CppType t151_0_0_0;
static ParameterInfo t6657_m35773_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t151_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35773_GM;
MethodInfo m35773_MI = 
{
	"Add", NULL, &t6657_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6657_m35773_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35773_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35774_GM;
MethodInfo m35774_MI = 
{
	"Clear", NULL, &t6657_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35774_GM};
extern Il2CppType t151_0_0_0;
static ParameterInfo t6657_m35775_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t151_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35775_GM;
MethodInfo m35775_MI = 
{
	"Contains", NULL, &t6657_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6657_m35775_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35775_GM};
extern Il2CppType t4471_0_0_0;
extern Il2CppType t4471_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6657_m35776_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4471_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35776_GM;
MethodInfo m35776_MI = 
{
	"CopyTo", NULL, &t6657_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6657_m35776_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35776_GM};
extern Il2CppType t151_0_0_0;
static ParameterInfo t6657_m35777_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t151_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35777_GM;
MethodInfo m35777_MI = 
{
	"Remove", NULL, &t6657_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6657_m35777_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35777_GM};
static MethodInfo* t6657_MIs[] =
{
	&m35771_MI,
	&m35772_MI,
	&m35773_MI,
	&m35774_MI,
	&m35775_MI,
	&m35776_MI,
	&m35777_MI,
	NULL
};
extern TypeInfo t6659_TI;
static TypeInfo* t6657_ITIs[] = 
{
	&t739_TI,
	&t6659_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6657_0_0_0;
extern Il2CppType t6657_1_0_0;
struct t6657;
extern Il2CppGenericClass t6657_GC;
TypeInfo t6657_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6657_MIs, t6657_PIs, NULL, NULL, NULL, NULL, NULL, &t6657_TI, t6657_ITIs, NULL, &EmptyCustomAttributesCache, &t6657_TI, &t6657_0_0_0, &t6657_1_0_0, NULL, &t6657_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.ExtensionAttribute>
extern Il2CppType t5278_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35778_GM;
MethodInfo m35778_MI = 
{
	"GetEnumerator", NULL, &t6659_TI, &t5278_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35778_GM};
static MethodInfo* t6659_MIs[] =
{
	&m35778_MI,
	NULL
};
static TypeInfo* t6659_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6659_0_0_0;
extern Il2CppType t6659_1_0_0;
struct t6659;
extern Il2CppGenericClass t6659_GC;
TypeInfo t6659_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6659_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6659_TI, t6659_ITIs, NULL, &EmptyCustomAttributesCache, &t6659_TI, &t6659_0_0_0, &t6659_1_0_0, NULL, &t6659_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6658_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.ExtensionAttribute>
extern MethodInfo m35779_MI;
extern MethodInfo m35780_MI;
static PropertyInfo t6658____Item_PropertyInfo = 
{
	&t6658_TI, "Item", &m35779_MI, &m35780_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6658_PIs[] =
{
	&t6658____Item_PropertyInfo,
	NULL
};
extern Il2CppType t151_0_0_0;
static ParameterInfo t6658_m35781_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t151_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35781_GM;
MethodInfo m35781_MI = 
{
	"IndexOf", NULL, &t6658_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6658_m35781_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35781_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t151_0_0_0;
static ParameterInfo t6658_m35782_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t151_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35782_GM;
MethodInfo m35782_MI = 
{
	"Insert", NULL, &t6658_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6658_m35782_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35782_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6658_m35783_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35783_GM;
MethodInfo m35783_MI = 
{
	"RemoveAt", NULL, &t6658_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6658_m35783_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35783_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6658_m35779_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t151_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35779_GM;
MethodInfo m35779_MI = 
{
	"get_Item", NULL, &t6658_TI, &t151_0_0_0, RuntimeInvoker_t5_t110, t6658_m35779_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35779_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t151_0_0_0;
static ParameterInfo t6658_m35780_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t151_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35780_GM;
MethodInfo m35780_MI = 
{
	"set_Item", NULL, &t6658_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6658_m35780_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35780_GM};
static MethodInfo* t6658_MIs[] =
{
	&m35781_MI,
	&m35782_MI,
	&m35783_MI,
	&m35779_MI,
	&m35780_MI,
	NULL
};
static TypeInfo* t6658_ITIs[] = 
{
	&t739_TI,
	&t6657_TI,
	&t6659_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6658_0_0_0;
extern Il2CppType t6658_1_0_0;
struct t6658;
extern Il2CppGenericClass t6658_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6658_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6658_MIs, t6658_PIs, NULL, NULL, NULL, NULL, NULL, &t6658_TI, t6658_ITIs, NULL, &t2240__CustomAttributeCache, &t6658_TI, &t6658_0_0_0, &t6658_1_0_0, NULL, &t6658_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5280_TI;

#include "t824.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.MonoTODOAttribute>
extern MethodInfo m35784_MI;
static PropertyInfo t5280____Current_PropertyInfo = 
{
	&t5280_TI, "Current", &m35784_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5280_PIs[] =
{
	&t5280____Current_PropertyInfo,
	NULL
};
extern Il2CppType t824_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35784_GM;
MethodInfo m35784_MI = 
{
	"get_Current", NULL, &t5280_TI, &t824_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35784_GM};
static MethodInfo* t5280_MIs[] =
{
	&m35784_MI,
	NULL
};
static TypeInfo* t5280_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5280_0_0_0;
extern Il2CppType t5280_1_0_0;
struct t5280;
extern Il2CppGenericClass t5280_GC;
TypeInfo t5280_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5280_MIs, t5280_PIs, NULL, NULL, NULL, NULL, NULL, &t5280_TI, t5280_ITIs, NULL, &EmptyCustomAttributesCache, &t5280_TI, &t5280_0_0_0, &t5280_1_0_0, NULL, &t5280_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3806.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3806_TI;
#include "t3806MD.h"

extern TypeInfo t824_TI;
extern MethodInfo m21709_MI;
extern MethodInfo m27882_MI;
struct t107;
#define m27882(__this, p0, method) (t824 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.MonoTODOAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3806_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3806_TI, offsetof(t3806, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3806_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3806_TI, offsetof(t3806, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3806_FIs[] =
{
	&t3806_f0_FieldInfo,
	&t3806_f1_FieldInfo,
	NULL
};
extern MethodInfo m21706_MI;
static PropertyInfo t3806____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3806_TI, "System.Collections.IEnumerator.Current", &m21706_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3806____Current_PropertyInfo = 
{
	&t3806_TI, "Current", &m21709_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3806_PIs[] =
{
	&t3806____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3806____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3806_m21705_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21705_GM;
MethodInfo m21705_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3806_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3806_m21705_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21705_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21706_GM;
MethodInfo m21706_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3806_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21706_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21707_GM;
MethodInfo m21707_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3806_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21707_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21708_GM;
MethodInfo m21708_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3806_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21708_GM};
extern Il2CppType t824_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21709_GM;
MethodInfo m21709_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3806_TI, &t824_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21709_GM};
static MethodInfo* t3806_MIs[] =
{
	&m21705_MI,
	&m21706_MI,
	&m21707_MI,
	&m21708_MI,
	&m21709_MI,
	NULL
};
extern MethodInfo m21708_MI;
extern MethodInfo m21707_MI;
static MethodInfo* t3806_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21706_MI,
	&m21708_MI,
	&m21707_MI,
	&m21709_MI,
};
static TypeInfo* t3806_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5280_TI,
};
static Il2CppInterfaceOffsetPair t3806_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5280_TI, 7},
};
extern TypeInfo t824_TI;
static Il2CppRGCTXData t3806_RGCTXData[3] = 
{
	&m21709_MI/* Method Usage */,
	&t824_TI/* Class Usage */,
	&m27882_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3806_0_0_0;
extern Il2CppType t3806_1_0_0;
extern Il2CppGenericClass t3806_GC;
TypeInfo t3806_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3806_MIs, t3806_PIs, t3806_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3806_TI, t3806_ITIs, t3806_VT, &EmptyCustomAttributesCache, &t3806_TI, &t3806_0_0_0, &t3806_1_0_0, t3806_IOs, &t3806_GC, NULL, NULL, NULL, t3806_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3806)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6660_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>
extern MethodInfo m35785_MI;
static PropertyInfo t6660____Count_PropertyInfo = 
{
	&t6660_TI, "Count", &m35785_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35786_MI;
static PropertyInfo t6660____IsReadOnly_PropertyInfo = 
{
	&t6660_TI, "IsReadOnly", &m35786_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6660_PIs[] =
{
	&t6660____Count_PropertyInfo,
	&t6660____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35785_GM;
MethodInfo m35785_MI = 
{
	"get_Count", NULL, &t6660_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35785_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35786_GM;
MethodInfo m35786_MI = 
{
	"get_IsReadOnly", NULL, &t6660_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35786_GM};
extern Il2CppType t824_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t6660_m35787_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35787_GM;
MethodInfo m35787_MI = 
{
	"Add", NULL, &t6660_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6660_m35787_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35787_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35788_GM;
MethodInfo m35788_MI = 
{
	"Clear", NULL, &t6660_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35788_GM};
extern Il2CppType t824_0_0_0;
static ParameterInfo t6660_m35789_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35789_GM;
MethodInfo m35789_MI = 
{
	"Contains", NULL, &t6660_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6660_m35789_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35789_GM};
extern Il2CppType t4472_0_0_0;
extern Il2CppType t4472_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6660_m35790_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4472_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35790_GM;
MethodInfo m35790_MI = 
{
	"CopyTo", NULL, &t6660_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6660_m35790_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35790_GM};
extern Il2CppType t824_0_0_0;
static ParameterInfo t6660_m35791_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35791_GM;
MethodInfo m35791_MI = 
{
	"Remove", NULL, &t6660_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6660_m35791_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35791_GM};
static MethodInfo* t6660_MIs[] =
{
	&m35785_MI,
	&m35786_MI,
	&m35787_MI,
	&m35788_MI,
	&m35789_MI,
	&m35790_MI,
	&m35791_MI,
	NULL
};
extern TypeInfo t6662_TI;
static TypeInfo* t6660_ITIs[] = 
{
	&t739_TI,
	&t6662_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6660_0_0_0;
extern Il2CppType t6660_1_0_0;
struct t6660;
extern Il2CppGenericClass t6660_GC;
TypeInfo t6660_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6660_MIs, t6660_PIs, NULL, NULL, NULL, NULL, NULL, &t6660_TI, t6660_ITIs, NULL, &EmptyCustomAttributesCache, &t6660_TI, &t6660_0_0_0, &t6660_1_0_0, NULL, &t6660_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.MonoTODOAttribute>
extern Il2CppType t5280_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35792_GM;
MethodInfo m35792_MI = 
{
	"GetEnumerator", NULL, &t6662_TI, &t5280_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35792_GM};
static MethodInfo* t6662_MIs[] =
{
	&m35792_MI,
	NULL
};
static TypeInfo* t6662_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6662_0_0_0;
extern Il2CppType t6662_1_0_0;
struct t6662;
extern Il2CppGenericClass t6662_GC;
TypeInfo t6662_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6662_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6662_TI, t6662_ITIs, NULL, &EmptyCustomAttributesCache, &t6662_TI, &t6662_0_0_0, &t6662_1_0_0, NULL, &t6662_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6661_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.MonoTODOAttribute>
extern MethodInfo m35793_MI;
extern MethodInfo m35794_MI;
static PropertyInfo t6661____Item_PropertyInfo = 
{
	&t6661_TI, "Item", &m35793_MI, &m35794_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6661_PIs[] =
{
	&t6661____Item_PropertyInfo,
	NULL
};
extern Il2CppType t824_0_0_0;
static ParameterInfo t6661_m35795_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35795_GM;
MethodInfo m35795_MI = 
{
	"IndexOf", NULL, &t6661_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6661_m35795_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35795_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t6661_m35796_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35796_GM;
MethodInfo m35796_MI = 
{
	"Insert", NULL, &t6661_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6661_m35796_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35796_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6661_m35797_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35797_GM;
MethodInfo m35797_MI = 
{
	"RemoveAt", NULL, &t6661_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6661_m35797_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35797_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6661_m35793_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t824_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35793_GM;
MethodInfo m35793_MI = 
{
	"get_Item", NULL, &t6661_TI, &t824_0_0_0, RuntimeInvoker_t5_t110, t6661_m35793_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35793_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t824_0_0_0;
static ParameterInfo t6661_m35794_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t824_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35794_GM;
MethodInfo m35794_MI = 
{
	"set_Item", NULL, &t6661_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6661_m35794_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35794_GM};
static MethodInfo* t6661_MIs[] =
{
	&m35795_MI,
	&m35796_MI,
	&m35797_MI,
	&m35793_MI,
	&m35794_MI,
	NULL
};
static TypeInfo* t6661_ITIs[] = 
{
	&t739_TI,
	&t6660_TI,
	&t6662_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6661_0_0_0;
extern Il2CppType t6661_1_0_0;
struct t6661;
extern Il2CppGenericClass t6661_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6661_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6661_MIs, t6661_PIs, NULL, NULL, NULL, NULL, NULL, &t6661_TI, t6661_ITIs, NULL, &t2240__CustomAttributeCache, &t6661_TI, &t6661_0_0_0, &t6661_1_0_0, NULL, &t6661_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t3807.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3807_TI;
#include "t3807MD.h"

#include "t484.h"
#include "t829.h"
#include "t830.h"
#include "t3811.h"
#include "mscorlib_ArrayTypes.h"
#include "t2334.h"
#include "t3809.h"
#include "t160.h"
#include "t1195.h"
extern TypeInfo t484_TI;
extern TypeInfo t2460_TI;
extern TypeInfo t110_TI;
extern TypeInfo t2459_TI;
extern TypeInfo t492_TI;
extern TypeInfo t5_TI;
extern TypeInfo t108_TI;
extern TypeInfo t109_TI;
extern TypeInfo t3811_TI;
extern TypeInfo t168_TI;
extern TypeInfo t1181_TI;
extern TypeInfo t2334_TI;
extern TypeInfo t55_TI;
extern TypeInfo t3808_TI;
extern TypeInfo t3809_TI;
extern TypeInfo t3050_TI;
extern TypeInfo t160_TI;
extern TypeInfo t3812_TI;
extern TypeInfo t1195_TI;
#include "t5MD.h"
#include "t484MD.h"
#include "t3811MD.h"
#include "t1181MD.h"
#include "t2334MD.h"
#include "t160MD.h"
#include "t3812MD.h"
#include "t1195MD.h"
extern MethodInfo m460_MI;
extern MethodInfo m21720_MI;
extern MethodInfo m21712_MI;
extern MethodInfo m3595_MI;
extern MethodInfo m24078_MI;
extern MethodInfo m24087_MI;
extern MethodInfo m24088_MI;
extern MethodInfo m21728_MI;
extern MethodInfo m746_MI;
extern MethodInfo m516_MI;
extern MethodInfo m21739_MI;
extern MethodInfo m21723_MI;
extern MethodInfo m4767_MI;
extern MethodInfo m11825_MI;
extern MethodInfo m21721_MI;
extern MethodInfo m24111_MI;
extern MethodInfo m21724_MI;
extern MethodInfo m2581_MI;
extern MethodInfo m21726_MI;
extern MethodInfo m21748_MI;
extern MethodInfo m21727_MI;
extern MethodInfo m6741_MI;
extern MethodInfo m31218_MI;
extern MethodInfo m21722_MI;
extern MethodInfo m21725_MI;
extern MethodInfo m5904_MI;
extern MethodInfo m10700_MI;


extern MethodInfo m21710_MI;
 void m21710_gshared (t3807 * __this, MethodInfo* method)
{
	{
		m460(__this, &m460_MI);
		(( void (*) (t3807 * __this, int32_t p0, t5* p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), (t5*)NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern MethodInfo m21711_MI;
 void m21711_gshared (t3807 * __this, t5* p0, MethodInfo* method)
{
	{
		(( void (*) (t3807 * __this, t5* p0, t5* p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, p0, (t5*)NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
 void m21712_gshared (t3807 * __this, t5* p0, t5* p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	t5* V_1 = {0};
	t5 * V_2 = {0};
	t5* V_3 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		m460(__this, &m460_MI);
		if (p0)
		{
			goto IL_0017;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3595(L_0, (t11*) &_stringLiteral225, &m3595_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0017:
	{
		V_0 = 0;
		V_1 = ((t5*)IsInst(p0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		if (!V_1)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), V_1);
		V_0 = L_1;
	}

IL_002d:
	{
		(( void (*) (t3807 * __this, int32_t p0, t5* p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, V_0, p1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t5* L_2 = (t5*)InterfaceFuncInvoker0< t5* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), p0);
		V_3 = L_2;
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0050;
		}

IL_0041:
		{
			t5 * L_3 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), V_3);
			V_2 = L_3;
			(( bool (*) (t3807 * __this, t5 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, V_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		}

IL_0050:
		{
			bool L_4 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m746_MI, V_3);
			if (L_4)
			{
				goto IL_0041;
			}
		}

IL_005b:
		{
			// IL_005b: leave IL_006b
			leaveInstructions[0] = 0x6B; // 1
			THROW_SENTINEL(IL_006b);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0060;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_0060;
	}

IL_0060:
	{ // begin finally (depth: 1)
		{
			if (V_3)
			{
				goto IL_0064;
			}
		}

IL_0063:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x6B:
					goto IL_006b;
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

IL_0064:
		{
			InterfaceActionInvoker0::Invoke(&m516_MI, V_3);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x6B:
					goto IL_006b;
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

IL_006b:
	{
		return;
	}
}
extern MethodInfo m21713_MI;
 void m21713_gshared (t3807 * __this, t829 * p0, t830  p1, MethodInfo* method)
{
	{
		m460(__this, &m460_MI);
		__this->f8 = p0;
		return;
	}
}
extern MethodInfo m21714_MI;
 t5* m21714_gshared (t3807 * __this, MethodInfo* method)
{
	{
		t3811  L_0 = {0};
		(( void (*) (t3811 * __this, t3807 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(&L_0, __this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		t3811  L_1 = L_0;
		t5 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (t5*)L_2;
	}
}
extern MethodInfo m21715_MI;
 bool m21715_gshared (t3807 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m21716_MI;
 void m21716_gshared (t3807 * __this, t168* p0, int32_t p1, MethodInfo* method)
{
	{
		VirtActionInvoker2< t168*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), __this, p0, p1);
		return;
	}
}
extern MethodInfo m21717_MI;
 void m21717_gshared (t3807 * __this, t5 * p0, MethodInfo* method)
{
	{
		(( bool (*) (t3807 * __this, t5 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, p0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return;
	}
}
extern MethodInfo m21718_MI;
 t5 * m21718_gshared (t3807 * __this, MethodInfo* method)
{
	{
		t3811  L_0 = {0};
		(( void (*) (t3811 * __this, t3807 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(&L_0, __this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		t3811  L_1 = L_0;
		t5 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (t5 *)L_2;
	}
}
extern MethodInfo m21719_MI;
 int32_t m21719_gshared (t3807 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
 void m21720_gshared (t3807 * __this, int32_t p0, t5* p1, MethodInfo* method)
{
	t5* G_B4_0 = {0};
	t3807 * G_B4_1 = {0};
	t5* G_B3_0 = {0};
	t3807 * G_B3_1 = {0};
	{
		if ((((int32_t)p0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		t1181 * L_0 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4767(L_0, (t11*) &_stringLiteral226, &m4767_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0012:
	{
		t5* L_1 = p1;
		G_B3_0 = L_1;
		G_B3_1 = ((t3807 *)(__this));
		if (L_1)
		{
			G_B4_0 = L_1;
			G_B4_1 = ((t3807 *)(__this));
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2334_TI));
		t2334 * L_2 = (( t2334 * (*) (t5 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		G_B4_0 = ((t5*)(L_2));
		G_B4_1 = ((t3807 *)(G_B3_1));
	}

IL_0020:
	{
		G_B4_1->f7 = G_B4_0;
		if (p0)
		{
			goto IL_002f;
		}
	}
	{
		p0 = ((int32_t)10);
	}

IL_002f:
	{
		p0 = ((int32_t)((((int32_t)((float)((float)(((float)p0))/(float)(0.9f)))))+1));
		(( void (*) (t3807 * __this, int32_t p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(__this, p0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		__this->f9 = 0;
		return;
	}
}
 void m21721_gshared (t3807 * __this, int32_t p0, MethodInfo* method)
{
	{
		__this->f0 = ((t55*)SZArrayNew(InitializedTypeInfo(&t55_TI), p0));
		__this->f1 = ((t3808*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), p0));
		__this->f4 = (-1);
		__this->f2 = ((t168*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), p0));
		__this->f3 = 0;
		t55* L_0 = (__this->f0);
		__this->f6 = (((int32_t)((float)((float)(((float)(((int32_t)(((t107 *)L_0)->max_length)))))*(float)(0.9f)))));
		int32_t L_1 = (__this->f6);
		if (L_1)
		{
			goto IL_0068;
		}
	}
	{
		t55* L_2 = (__this->f0);
		if ((((int32_t)(((int32_t)(((t107 *)L_2)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		__this->f6 = 1;
	}

IL_0068:
	{
		return;
	}
}
 bool m21722_gshared (t3807 * __this, int32_t p0, int32_t p1, t5 * p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	t3809  V_1 = {0};
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	{
		t55* L_0 = (__this->f0);
		int32_t L_1 = p0;
		V_0 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_1))-1));
		goto IL_00a9;
	}

IL_0010:
	{
		t3808* L_2 = (__this->f1);
		V_1 = (*(t3809 *)((t3809 *)(t3809 *)SZArrayLdElema(L_2, V_0)));
		int32_t L_3 = ((&V_1)->f0);
		if ((((uint32_t)L_3) != ((uint32_t)p1)))
		{
			goto IL_00a1;
		}
	}
	{
		if ((((uint32_t)p1) != ((uint32_t)((int32_t)-2147483648))))
		{
			goto IL_0082;
		}
	}
	{
		t5 * L_4 = p2;
		if (!((t5 *)L_4))
		{
			goto IL_005b;
		}
	}
	{
		t168* L_5 = (__this->f2);
		int32_t L_6 = V_0;
		t5 * L_7 = (*(t5 **)(t5 **)SZArrayLdElema(L_5, L_6));
		if (((t5 *)L_7))
		{
			goto IL_0082;
		}
	}

IL_005b:
	{
		t5 * L_8 = p2;
		if (((t5 *)L_8))
		{
			goto IL_007c;
		}
	}
	{
		t168* L_9 = (__this->f2);
		int32_t L_10 = V_0;
		t5 * L_11 = (*(t5 **)(t5 **)SZArrayLdElema(L_9, L_10));
		G_B8_0 = ((((t5 *)NULL) == ((t5 *)((t5 *)L_11)))? 1 : 0);
		goto IL_007d;
	}

IL_007c:
	{
		G_B8_0 = 0;
	}

IL_007d:
	{
		G_B10_0 = G_B8_0;
		goto IL_009a;
	}

IL_0082:
	{
		t5* L_12 = (__this->f7);
		t168* L_13 = (__this->f2);
		int32_t L_14 = V_0;
		bool L_15 = (bool)InterfaceFuncInvoker2< bool, t5 *, t5 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15), L_12, p2, (*(t5 **)(t5 **)SZArrayLdElema(L_13, L_14)));
		G_B10_0 = ((int32_t)(L_15));
	}

IL_009a:
	{
		if (!G_B10_0)
		{
			goto IL_00a1;
		}
	}
	{
		return 1;
	}

IL_00a1:
	{
		int32_t L_16 = ((&V_1)->f1);
		V_0 = L_16;
	}

IL_00a9:
	{
		if ((((uint32_t)V_0) != ((uint32_t)(-1))))
		{
			goto IL_0010;
		}
	}
	{
		return 0;
	}
}
 void m21723_gshared (t3807 * __this, t168* p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		(( void (*) (t3807 * __this, t168* p0, int32_t p1, int32_t p2, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->method)(__this, p0, p1, L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16));
		return;
	}
}
 void m21724_gshared (t3807 * __this, t168* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		if (p0)
		{
			goto IL_0011;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3595(L_0, (t11*) &_stringLiteral227, &m3595_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0011:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		t1181 * L_1 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4767(L_1, (t11*) &_stringLiteral228, &m4767_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0023:
	{
		if ((((int32_t)p1) <= ((int32_t)(((int32_t)(((t107 *)p0)->max_length))))))
		{
			goto IL_0037;
		}
	}
	{
		t160 * L_2 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_2, (t11*) &_stringLiteral229, &m2581_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0037:
	{
		if ((((int32_t)((int32_t)((((int32_t)(((t107 *)p0)->max_length)))-p1))) >= ((int32_t)p2)))
		{
			goto IL_004d;
		}
	}
	{
		t160 * L_3 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_3, (t11*) &_stringLiteral230, &m2581_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_004d:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_007e;
	}

IL_0056:
	{
		int32_t L_4 = (( int32_t (*) (t3807 * __this, int32_t p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)(__this, V_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		if (!L_4)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_5 = p1;
		p1 = ((int32_t)(L_5+1));
		t168* L_6 = (__this->f2);
		int32_t L_7 = V_0;
		*((t5 **)(t5 **)SZArrayLdElema(p0, L_5)) = (t5 *)(*(t5 **)(t5 **)SZArrayLdElema(L_6, L_7));
	}

IL_007a:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_007e:
	{
		int32_t L_8 = (__this->f3);
		if ((((int32_t)V_0) >= ((int32_t)L_8)))
		{
			goto IL_0091;
		}
	}
	{
		if ((((int32_t)V_1) < ((int32_t)p2)))
		{
			goto IL_0056;
		}
	}

IL_0091:
	{
		return;
	}
}
 void m21725_gshared (t3807 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	t55* V_1 = {0};
	t3808* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t168* V_7 = {0};
	int32_t V_8 = 0;
	{
		t55* L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t3812_TI));
		int32_t L_1 = (( int32_t (*) (t5 * __this, int32_t p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((t107 *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		V_0 = L_1;
		V_1 = ((t55*)SZArrayNew(InitializedTypeInfo(&t55_TI), V_0));
		V_2 = ((t3808*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), V_0));
		V_3 = 0;
		goto IL_00a6;
	}

IL_0027:
	{
		t55* L_2 = (__this->f0);
		int32_t L_3 = V_3;
		V_4 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_3))-1));
		goto IL_009a;
	}

IL_0038:
	{
		t168* L_4 = (__this->f2);
		int32_t L_5 = V_4;
		int32_t L_6 = (( int32_t (*) (t3807 * __this, t5 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, (*(t5 **)(t5 **)SZArrayLdElema(L_4, L_5)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		int32_t L_7 = L_6;
		V_8 = L_7;
		((t3809 *)(t3809 *)SZArrayLdElema(V_2, V_4))->f0 = L_7;
		V_5 = V_8;
		V_6 = ((int32_t)(((int32_t)((int32_t)V_5&(int32_t)((int32_t)2147483647)))%V_0));
		int32_t L_8 = V_6;
		((t3809 *)(t3809 *)SZArrayLdElema(V_2, V_4))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(V_1, L_8))-1));
		*((int32_t*)(int32_t*)SZArrayLdElema(V_1, V_6)) = (int32_t)((int32_t)(V_4+1));
		t3808* L_9 = (__this->f1);
		int32_t L_10 = (((t3809 *)(t3809 *)SZArrayLdElema(L_9, V_4))->f1);
		V_4 = L_10;
	}

IL_009a:
	{
		if ((((uint32_t)V_4) != ((uint32_t)(-1))))
		{
			goto IL_0038;
		}
	}
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_00a6:
	{
		t55* L_11 = (__this->f0);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((t107 *)L_11)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		__this->f0 = V_1;
		__this->f1 = V_2;
		V_7 = ((t168*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), V_0));
		t168* L_12 = (__this->f2);
		int32_t L_13 = (__this->f3);
		m6741(NULL, (t107 *)(t107 *)L_12, 0, (t107 *)(t107 *)V_7, 0, L_13, &m6741_MI);
		__this->f2 = V_7;
		__this->f6 = (((int32_t)((float)((float)(((float)V_0))*(float)(0.9f)))));
		return;
	}
}
 int32_t m21726_gshared (t3807 * __this, int32_t p0, MethodInfo* method)
{
	{
		t3808* L_0 = (__this->f1);
		int32_t L_1 = (((t3809 *)(t3809 *)SZArrayLdElema(L_0, p0))->f0);
		return ((int32_t)((int32_t)L_1&(int32_t)((int32_t)-2147483648)));
	}
}
 int32_t m21727_gshared (t3807 * __this, t5 * p0, MethodInfo* method)
{
	{
		t5 * L_0 = p0;
		if (((t5 *)L_0))
		{
			goto IL_0011;
		}
	}
	{
		return ((int32_t)-2147483648);
	}

IL_0011:
	{
		t5* L_1 = (__this->f7);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, t5 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), L_1, p0);
		return ((int32_t)((int32_t)L_2|(int32_t)((int32_t)-2147483648)));
	}
}
 bool m21728_gshared (t3807 * __this, t5 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = (( int32_t (*) (t3807 * __this, t5 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, p0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		V_0 = L_0;
		t55* L_1 = (__this->f0);
		V_1 = ((int32_t)(((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(((int32_t)(((t107 *)L_1)->max_length)))));
		bool L_2 = (( bool (*) (t3807 * __this, int32_t p0, int32_t p1, t5 * p2, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(__this, V_1, V_0, p0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		return 0;
	}

IL_0029:
	{
		int32_t L_3 = (__this->f5);
		int32_t L_4 = ((int32_t)(L_3+1));
		V_3 = L_4;
		__this->f5 = L_4;
		int32_t L_5 = (__this->f6);
		if ((((int32_t)V_3) <= ((int32_t)L_5)))
		{
			goto IL_005c;
		}
	}
	{
		(( void (*) (t3807 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		t55* L_6 = (__this->f0);
		V_1 = ((int32_t)(((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(((int32_t)(((t107 *)L_6)->max_length)))));
	}

IL_005c:
	{
		int32_t L_7 = (__this->f4);
		V_2 = L_7;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_8 = (__this->f3);
		int32_t L_9 = L_8;
		V_3 = L_9;
		__this->f3 = ((int32_t)(L_9+1));
		V_2 = V_3;
		goto IL_0098;
	}

IL_0081:
	{
		t3808* L_10 = (__this->f1);
		int32_t L_11 = (((t3809 *)(t3809 *)SZArrayLdElema(L_10, V_2))->f1);
		__this->f4 = L_11;
	}

IL_0098:
	{
		t3808* L_12 = (__this->f1);
		((t3809 *)(t3809 *)SZArrayLdElema(L_12, V_2))->f0 = V_0;
		t3808* L_13 = (__this->f1);
		t55* L_14 = (__this->f0);
		int32_t L_15 = V_1;
		((t3809 *)(t3809 *)SZArrayLdElema(L_13, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_14, L_15))-1));
		t55* L_16 = (__this->f0);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_16, V_1)) = (int32_t)((int32_t)(V_2+1));
		t168* L_17 = (__this->f2);
		*((t5 **)(t5 **)SZArrayLdElema(L_17, V_2)) = (t5 *)p0;
		int32_t L_18 = (__this->f9);
		__this->f9 = ((int32_t)(L_18+1));
		return 1;
	}
}
extern MethodInfo m21729_MI;
 void m21729_gshared (t3807 * __this, MethodInfo* method)
{
	{
		__this->f5 = 0;
		t55* L_0 = (__this->f0);
		t55* L_1 = (__this->f0);
		m5904(NULL, (t107 *)(t107 *)L_0, 0, (((int32_t)(((t107 *)L_1)->max_length))), &m5904_MI);
		t168* L_2 = (__this->f2);
		t168* L_3 = (__this->f2);
		m5904(NULL, (t107 *)(t107 *)L_2, 0, (((int32_t)(((t107 *)L_3)->max_length))), &m5904_MI);
		t3808* L_4 = (__this->f1);
		t3808* L_5 = (__this->f1);
		m5904(NULL, (t107 *)(t107 *)L_4, 0, (((int32_t)(((t107 *)L_5)->max_length))), &m5904_MI);
		__this->f4 = (-1);
		__this->f3 = 0;
		int32_t L_6 = (__this->f9);
		__this->f9 = ((int32_t)(L_6+1));
		return;
	}
}
extern MethodInfo m21730_MI;
 bool m21730_gshared (t3807 * __this, t5 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (( int32_t (*) (t3807 * __this, t5 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, p0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		V_0 = L_0;
		t55* L_1 = (__this->f0);
		V_1 = ((int32_t)(((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(((int32_t)(((t107 *)L_1)->max_length)))));
		bool L_2 = (( bool (*) (t3807 * __this, int32_t p0, int32_t p1, t5 * p2, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(__this, V_1, V_0, p0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		return L_2;
	}
}
extern MethodInfo m21731_MI;
 bool m21731_gshared (t3807 * __this, t5 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t3809  V_4 = {0};
	t5 * V_5 = {0};
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	{
		int32_t L_0 = (( int32_t (*) (t3807 * __this, t5 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, p0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		V_0 = L_0;
		t55* L_1 = (__this->f0);
		V_1 = ((int32_t)(((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(((int32_t)(((t107 *)L_1)->max_length)))));
		t55* L_2 = (__this->f0);
		int32_t L_3 = V_1;
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_3))-1));
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_002d;
		}
	}
	{
		return 0;
	}

IL_002d:
	{
		V_3 = (-1);
	}

IL_002f:
	{
		t3808* L_4 = (__this->f1);
		V_4 = (*(t3809 *)((t3809 *)(t3809 *)SZArrayLdElema(L_4, V_2)));
		int32_t L_5 = ((&V_4)->f0);
		if ((((uint32_t)L_5) != ((uint32_t)V_0)))
		{
			goto IL_00c4;
		}
	}
	{
		if ((((uint32_t)V_0) != ((uint32_t)((int32_t)-2147483648))))
		{
			goto IL_00a2;
		}
	}
	{
		t5 * L_6 = p0;
		if (!((t5 *)L_6))
		{
			goto IL_007b;
		}
	}
	{
		t168* L_7 = (__this->f2);
		int32_t L_8 = V_2;
		t5 * L_9 = (*(t5 **)(t5 **)SZArrayLdElema(L_7, L_8));
		if (((t5 *)L_9))
		{
			goto IL_00a2;
		}
	}

IL_007b:
	{
		t5 * L_10 = p0;
		if (((t5 *)L_10))
		{
			goto IL_009c;
		}
	}
	{
		t168* L_11 = (__this->f2);
		int32_t L_12 = V_2;
		t5 * L_13 = (*(t5 **)(t5 **)SZArrayLdElema(L_11, L_12));
		G_B10_0 = ((((t5 *)NULL) == ((t5 *)((t5 *)L_13)))? 1 : 0);
		goto IL_009d;
	}

IL_009c:
	{
		G_B10_0 = 0;
	}

IL_009d:
	{
		G_B12_0 = G_B10_0;
		goto IL_00ba;
	}

IL_00a2:
	{
		t5* L_14 = (__this->f7);
		t168* L_15 = (__this->f2);
		int32_t L_16 = V_2;
		bool L_17 = (bool)InterfaceFuncInvoker2< bool, t5 *, t5 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15), L_14, (*(t5 **)(t5 **)SZArrayLdElema(L_15, L_16)), p0);
		G_B12_0 = ((int32_t)(L_17));
	}

IL_00ba:
	{
		if (!G_B12_0)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_00d5;
	}

IL_00c4:
	{
		V_3 = V_2;
		int32_t L_18 = ((&V_4)->f1);
		V_2 = L_18;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_002f;
		}
	}

IL_00d5:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00de;
		}
	}
	{
		return 0;
	}

IL_00de:
	{
		int32_t L_19 = (__this->f5);
		__this->f5 = ((int32_t)(L_19-1));
		if ((((uint32_t)V_3) != ((uint32_t)(-1))))
		{
			goto IL_0113;
		}
	}
	{
		t55* L_20 = (__this->f0);
		t3808* L_21 = (__this->f1);
		int32_t L_22 = (((t3809 *)(t3809 *)SZArrayLdElema(L_21, V_2))->f1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_20, V_1)) = (int32_t)((int32_t)(L_22+1));
		goto IL_0135;
	}

IL_0113:
	{
		t3808* L_23 = (__this->f1);
		t3808* L_24 = (__this->f1);
		int32_t L_25 = (((t3809 *)(t3809 *)SZArrayLdElema(L_24, V_2))->f1);
		((t3809 *)(t3809 *)SZArrayLdElema(L_23, V_3))->f1 = L_25;
	}

IL_0135:
	{
		t3808* L_26 = (__this->f1);
		int32_t L_27 = (__this->f4);
		((t3809 *)(t3809 *)SZArrayLdElema(L_26, V_2))->f1 = L_27;
		__this->f4 = V_2;
		t3808* L_28 = (__this->f1);
		((t3809 *)(t3809 *)SZArrayLdElema(L_28, V_2))->f0 = 0;
		t168* L_29 = (__this->f2);
		Initobj (&t5_TI, (&V_5));
		*((t5 **)(t5 **)SZArrayLdElema(L_29, V_2)) = (t5 *)V_5;
		int32_t L_30 = (__this->f9);
		__this->f9 = ((int32_t)(L_30+1));
		return 1;
	}
}
extern MethodInfo m21732_MI;
 void m21732_gshared (t3807 * __this, t829 * p0, t830  p1, MethodInfo* method)
{
	{
		t1195 * L_0 = (t1195 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1195_TI));
		m10700(L_0, &m10700_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m21733_MI;
 void m21733_gshared (t3807 * __this, t5 * p0, MethodInfo* method)
{
	{
		t829 * L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		t1195 * L_1 = (t1195 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1195_TI));
		m10700(L_1, &m10700_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
// Metadata Definition System.Collections.Generic.HashSet`1<System.Object>
extern Il2CppType t55_0_0_1;
FieldInfo t3807_f0_FieldInfo = 
{
	"table", &t55_0_0_1, &t3807_TI, offsetof(t3807, f0), &EmptyCustomAttributesCache};
extern Il2CppType t3808_0_0_1;
FieldInfo t3807_f1_FieldInfo = 
{
	"links", &t3808_0_0_1, &t3807_TI, offsetof(t3807, f1), &EmptyCustomAttributesCache};
extern Il2CppType t168_0_0_1;
FieldInfo t3807_f2_FieldInfo = 
{
	"slots", &t168_0_0_1, &t3807_TI, offsetof(t3807, f2), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3807_f3_FieldInfo = 
{
	"touched", &t110_0_0_1, &t3807_TI, offsetof(t3807, f3), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3807_f4_FieldInfo = 
{
	"empty_slot", &t110_0_0_1, &t3807_TI, offsetof(t3807, f4), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3807_f5_FieldInfo = 
{
	"count", &t110_0_0_1, &t3807_TI, offsetof(t3807, f5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3807_f6_FieldInfo = 
{
	"threshold", &t110_0_0_1, &t3807_TI, offsetof(t3807, f6), &EmptyCustomAttributesCache};
extern Il2CppType t3050_0_0_1;
FieldInfo t3807_f7_FieldInfo = 
{
	"comparer", &t3050_0_0_1, &t3807_TI, offsetof(t3807, f7), &EmptyCustomAttributesCache};
extern Il2CppType t829_0_0_1;
FieldInfo t3807_f8_FieldInfo = 
{
	"si", &t829_0_0_1, &t3807_TI, offsetof(t3807, f8), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3807_f9_FieldInfo = 
{
	"generation", &t110_0_0_1, &t3807_TI, offsetof(t3807, f9), &EmptyCustomAttributesCache};
static FieldInfo* t3807_FIs[] =
{
	&t3807_f0_FieldInfo,
	&t3807_f1_FieldInfo,
	&t3807_f2_FieldInfo,
	&t3807_f3_FieldInfo,
	&t3807_f4_FieldInfo,
	&t3807_f5_FieldInfo,
	&t3807_f6_FieldInfo,
	&t3807_f7_FieldInfo,
	&t3807_f8_FieldInfo,
	&t3807_f9_FieldInfo,
	NULL
};
static PropertyInfo t3807____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t3807_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m21715_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3807____Count_PropertyInfo = 
{
	&t3807_TI, "Count", &m21719_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3807_PIs[] =
{
	&t3807____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t3807____Count_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21710_GM;
MethodInfo m21710_MI = 
{
	".ctor", (methodPointerType)&m21710_gshared, &t3807_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21710_GM};
extern Il2CppType t2459_0_0_0;
extern Il2CppType t2459_0_0_0;
static ParameterInfo t3807_m21711_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2459_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21711_GM;
MethodInfo m21711_MI = 
{
	".ctor", (methodPointerType)&m21711_gshared, &t3807_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3807_m21711_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21711_GM};
extern Il2CppType t2459_0_0_0;
extern Il2CppType t3050_0_0_0;
extern Il2CppType t3050_0_0_0;
static ParameterInfo t3807_m21712_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2459_0_0_0},
	{"comparer", 1, 134217728, &EmptyCustomAttributesCache, &t3050_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21712_GM;
MethodInfo m21712_MI = 
{
	".ctor", (methodPointerType)&m21712_gshared, &t3807_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t3807_m21712_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21712_GM};
extern Il2CppType t829_0_0_0;
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t3807_m21713_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21713_GM;
MethodInfo m21713_MI = 
{
	".ctor", (methodPointerType)&m21713_gshared, &t3807_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t3807_m21713_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21713_GM};
extern Il2CppType t492_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21714_GM;
MethodInfo m21714_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m21714_gshared, &t3807_TI, &t492_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 11, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21714_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21715_GM;
MethodInfo m21715_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m21715_gshared, &t3807_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21715_GM};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t3807_m21716_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21716_GM;
MethodInfo m21716_MI = 
{
	"System.Collections.Generic.ICollection<T>.CopyTo", (methodPointerType)&m21716_gshared, &t3807_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t3807_m21716_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21716_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3807_m21717_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21717_GM;
MethodInfo m21717_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m21717_gshared, &t3807_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3807_m21717_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21717_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21718_GM;
MethodInfo m21718_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m21718_gshared, &t3807_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21718_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21719_GM;
MethodInfo m21719_MI = 
{
	"get_Count", (methodPointerType)&m21719_gshared, &t3807_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21719_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t3050_0_0_0;
static ParameterInfo t3807_m21720_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"comparer", 1, 134217728, &EmptyCustomAttributesCache, &t3050_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21720_GM;
MethodInfo m21720_MI = 
{
	"Init", (methodPointerType)&m21720_gshared, &t3807_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t3807_m21720_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21720_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3807_m21721_ParameterInfos[] = 
{
	{"size", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21721_GM;
MethodInfo m21721_MI = 
{
	"InitArrays", (methodPointerType)&m21721_gshared, &t3807_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t3807_m21721_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21721_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3807_m21722_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"hash", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21722_GM;
MethodInfo m21722_MI = 
{
	"SlotsContainsAt", (methodPointerType)&m21722_gshared, &t3807_TI, &t108_0_0_0, RuntimeInvoker_t108_t110_t110_t5, t3807_m21722_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL, &m21722_GM};
extern Il2CppType t168_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t3807_m21723_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21723_GM;
MethodInfo m21723_MI = 
{
	"CopyTo", (methodPointerType)&m21723_gshared, &t3807_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t3807_m21723_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 15, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21723_GM};
extern Il2CppType t168_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t3807_m21724_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"count", 2, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21724_GM;
MethodInfo m21724_MI = 
{
	"CopyTo", (methodPointerType)&m21724_gshared, &t3807_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110_t110, t3807_m21724_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL, &m21724_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21725_GM;
MethodInfo m21725_MI = 
{
	"Resize", (methodPointerType)&m21725_gshared, &t3807_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21725_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3807_m21726_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21726_GM;
MethodInfo m21726_MI = 
{
	"GetLinkHashCode", (methodPointerType)&m21726_gshared, &t3807_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t3807_m21726_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21726_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3807_m21727_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21727_GM;
MethodInfo m21727_MI = 
{
	"GetItemHashCode", (methodPointerType)&m21727_gshared, &t3807_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t3807_m21727_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21727_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3807_m21728_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21728_GM;
MethodInfo m21728_MI = 
{
	"Add", (methodPointerType)&m21728_gshared, &t3807_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3807_m21728_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21728_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21729_GM;
MethodInfo m21729_MI = 
{
	"Clear", (methodPointerType)&m21729_gshared, &t3807_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21729_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3807_m21730_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21730_GM;
MethodInfo m21730_MI = 
{
	"Contains", (methodPointerType)&m21730_gshared, &t3807_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3807_m21730_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21730_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3807_m21731_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21731_GM;
MethodInfo m21731_MI = 
{
	"Remove", (methodPointerType)&m21731_gshared, &t3807_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t3807_m21731_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21731_GM};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t3807_m21732_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t828__CustomAttributeCache_m3726;
extern Il2CppGenericMethod m21732_GM;
MethodInfo m21732_MI = 
{
	"GetObjectData", (methodPointerType)&m21732_gshared, &t3807_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t3807_m21732_ParameterInfos, &t828__CustomAttributeCache_m3726, 454, 0, 16, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21732_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3807_m21733_ParameterInfos[] = 
{
	{"sender", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t828__CustomAttributeCache_m3727;
extern Il2CppGenericMethod m21733_GM;
MethodInfo m21733_MI = 
{
	"OnDeserialization", (methodPointerType)&m21733_gshared, &t3807_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3807_m21733_ParameterInfos, &t828__CustomAttributeCache_m3727, 454, 0, 17, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21733_GM};
static MethodInfo* t3807_MIs[] =
{
	&m21710_MI,
	&m21711_MI,
	&m21712_MI,
	&m21713_MI,
	&m21714_MI,
	&m21715_MI,
	&m21716_MI,
	&m21717_MI,
	&m21718_MI,
	&m21719_MI,
	&m21720_MI,
	&m21721_MI,
	&m21722_MI,
	&m21723_MI,
	&m21724_MI,
	&m21725_MI,
	&m21726_MI,
	&m21727_MI,
	&m21728_MI,
	&m21729_MI,
	&m21730_MI,
	&m21731_MI,
	&m21732_MI,
	&m21733_MI,
	NULL
};
extern MethodInfo m464_MI;
extern MethodInfo m466_MI;
extern MethodInfo m467_MI;
static MethodInfo* t3807_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21719_MI,
	&m21715_MI,
	&m21717_MI,
	&m21729_MI,
	&m21730_MI,
	&m21716_MI,
	&m21731_MI,
	&m21714_MI,
	&m21718_MI,
	&m21732_MI,
	&m21733_MI,
	&m21723_MI,
	&m21732_MI,
	&m21733_MI,
};
extern TypeInfo t517_TI;
extern TypeInfo t1184_TI;
static TypeInfo* t3807_ITIs[] = 
{
	&t2460_TI,
	&t2459_TI,
	&t739_TI,
	&t517_TI,
	&t1184_TI,
};
static Il2CppInterfaceOffsetPair t3807_IOs[] = 
{
	{ &t2460_TI, 4},
	{ &t2459_TI, 11},
	{ &t739_TI, 12},
	{ &t517_TI, 13},
	{ &t1184_TI, 14},
};
extern TypeInfo t2460_TI;
extern TypeInfo t3811_TI;
extern TypeInfo t3808_TI;
extern TypeInfo t168_TI;
extern TypeInfo t5_TI;
static Il2CppRGCTXData t3807_RGCTXData[23] = 
{
	&m21720_MI/* Method Usage */,
	&m21712_MI/* Method Usage */,
	&t2460_TI/* Class Usage */,
	&m24078_MI/* Method Usage */,
	&m24087_MI/* Method Usage */,
	&m24088_MI/* Method Usage */,
	&m21728_MI/* Method Usage */,
	&t3811_TI/* Class Usage */,
	&m21739_MI/* Method Usage */,
	&m21723_MI/* Method Usage */,
	&m11825_MI/* Method Usage */,
	&m21721_MI/* Method Usage */,
	&t3808_TI/* Array Usage */,
	&t168_TI/* Array Usage */,
	&t5_TI/* Class Usage */,
	&m24111_MI/* Method Usage */,
	&m21724_MI/* Method Usage */,
	&m21726_MI/* Method Usage */,
	&m21748_MI/* Method Usage */,
	&m21727_MI/* Method Usage */,
	&m31218_MI/* Method Usage */,
	&m21722_MI/* Method Usage */,
	&m21725_MI/* Method Usage */,
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t3807_0_0_0;
extern Il2CppType t3807_1_0_0;
struct t3807;
extern Il2CppGenericClass t3807_GC;
extern CustomAttributesCache t828__CustomAttributeCache_m3726;
extern CustomAttributesCache t828__CustomAttributeCache_m3727;
TypeInfo t3807_TI = 
{
	&g_System_Core_dll_Image, NULL, "HashSet`1", "System.Collections.Generic", t3807_MIs, t3807_PIs, t3807_FIs, NULL, &t5_TI, NULL, NULL, &t3807_TI, t3807_ITIs, t3807_VT, &EmptyCustomAttributesCache, &t3807_TI, &t3807_0_0_0, &t3807_1_0_0, t3807_IOs, &t3807_GC, NULL, NULL, NULL, t3807_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3807), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 24, 2, 10, 0, 0, 18, 5, 5};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5282_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>
extern MethodInfo m35798_MI;
static PropertyInfo t5282____Current_PropertyInfo = 
{
	&t5282_TI, "Current", &m35798_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5282_PIs[] =
{
	&t5282____Current_PropertyInfo,
	NULL
};
extern Il2CppType t3809_0_0_0;
extern void* RuntimeInvoker_t3809 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35798_GM;
MethodInfo m35798_MI = 
{
	"get_Current", NULL, &t5282_TI, &t3809_0_0_0, RuntimeInvoker_t3809, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35798_GM};
static MethodInfo* t5282_MIs[] =
{
	&m35798_MI,
	NULL
};
static TypeInfo* t5282_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5282_0_0_0;
extern Il2CppType t5282_1_0_0;
struct t5282;
extern Il2CppGenericClass t5282_GC;
TypeInfo t5282_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5282_MIs, t5282_PIs, NULL, NULL, NULL, NULL, NULL, &t5282_TI, t5282_ITIs, NULL, &EmptyCustomAttributesCache, &t5282_TI, &t5282_0_0_0, &t5282_1_0_0, NULL, &t5282_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
#include "t3809MD.h"



// Metadata Definition System.Collections.Generic.HashSet`1/Link<System.Object>
extern Il2CppType t110_0_0_6;
FieldInfo t3809_f0_FieldInfo = 
{
	"HashCode", &t110_0_0_6, &t3809_TI, offsetof(t3809, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_6;
FieldInfo t3809_f1_FieldInfo = 
{
	"Next", &t110_0_0_6, &t3809_TI, offsetof(t3809, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3809_FIs[] =
{
	&t3809_f0_FieldInfo,
	&t3809_f1_FieldInfo,
	NULL
};
static MethodInfo* t3809_MIs[] =
{
	NULL
};
static MethodInfo* t3809_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t3809_0_0_0;
extern Il2CppType t3809_1_0_0;
extern Il2CppGenericClass t3809_GC;
extern TypeInfo t828_TI;
TypeInfo t3809_TI = 
{
	&g_System_Core_dll_Image, NULL, "Link", "", t3809_MIs, NULL, t3809_FIs, NULL, &t267_TI, NULL, &t828_TI, &t3809_TI, NULL, t3809_VT, &EmptyCustomAttributesCache, &t3809_TI, &t3809_0_0_0, &t3809_1_0_0, NULL, &t3809_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3809)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048843, 0, true, false, false, false, true, false, false, false, false, false, true, true, 0, 0, 2, 0, 0, 4, 0, 0};
#include "t3810.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3810_TI;
#include "t3810MD.h"

extern MethodInfo m21738_MI;
extern MethodInfo m27893_MI;
struct t107;
 t3809  m27893 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21734_MI;
 void m21734 (t3810 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21735_MI;
 t5 * m21735 (t3810 * __this, MethodInfo* method){
	{
		t3809  L_0 = m21738(__this, &m21738_MI);
		t3809  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t3809_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m21736_MI;
 void m21736 (t3810 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21737_MI;
 bool m21737 (t3810 * __this, MethodInfo* method){
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
 t3809  m21738 (t3810 * __this, MethodInfo* method){
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
		t3809  L_8 = m27893(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m27893_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>
extern Il2CppType t107_0_0_1;
FieldInfo t3810_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3810_TI, offsetof(t3810, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3810_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3810_TI, offsetof(t3810, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3810_FIs[] =
{
	&t3810_f0_FieldInfo,
	&t3810_f1_FieldInfo,
	NULL
};
static PropertyInfo t3810____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3810_TI, "System.Collections.IEnumerator.Current", &m21735_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3810____Current_PropertyInfo = 
{
	&t3810_TI, "Current", &m21738_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3810_PIs[] =
{
	&t3810____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3810____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3810_m21734_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21734_GM;
MethodInfo m21734_MI = 
{
	".ctor", (methodPointerType)&m21734, &t3810_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3810_m21734_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21734_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21735_GM;
MethodInfo m21735_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21735, &t3810_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21735_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21736_GM;
MethodInfo m21736_MI = 
{
	"Dispose", (methodPointerType)&m21736, &t3810_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21736_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21737_GM;
MethodInfo m21737_MI = 
{
	"MoveNext", (methodPointerType)&m21737, &t3810_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21737_GM};
extern Il2CppType t3809_0_0_0;
extern void* RuntimeInvoker_t3809 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21738_GM;
MethodInfo m21738_MI = 
{
	"get_Current", (methodPointerType)&m21738, &t3810_TI, &t3809_0_0_0, RuntimeInvoker_t3809, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21738_GM};
static MethodInfo* t3810_MIs[] =
{
	&m21734_MI,
	&m21735_MI,
	&m21736_MI,
	&m21737_MI,
	&m21738_MI,
	NULL
};
static MethodInfo* t3810_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21735_MI,
	&m21737_MI,
	&m21736_MI,
	&m21738_MI,
};
static TypeInfo* t3810_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5282_TI,
};
static Il2CppInterfaceOffsetPair t3810_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5282_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3810_0_0_0;
extern Il2CppType t3810_1_0_0;
extern Il2CppGenericClass t3810_GC;
TypeInfo t3810_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3810_MIs, t3810_PIs, t3810_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3810_TI, t3810_ITIs, t3810_VT, &EmptyCustomAttributesCache, &t3810_TI, &t3810_0_0_0, &t3810_1_0_0, t3810_IOs, &t3810_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3810)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6663_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.HashSet`1/Link<System.Object>>
extern MethodInfo m35799_MI;
static PropertyInfo t6663____Count_PropertyInfo = 
{
	&t6663_TI, "Count", &m35799_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35800_MI;
static PropertyInfo t6663____IsReadOnly_PropertyInfo = 
{
	&t6663_TI, "IsReadOnly", &m35800_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6663_PIs[] =
{
	&t6663____Count_PropertyInfo,
	&t6663____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35799_GM;
MethodInfo m35799_MI = 
{
	"get_Count", NULL, &t6663_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35799_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35800_GM;
MethodInfo m35800_MI = 
{
	"get_IsReadOnly", NULL, &t6663_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35800_GM};
extern Il2CppType t3809_0_0_0;
static ParameterInfo t6663_m35801_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t3809_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t3809 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35801_GM;
MethodInfo m35801_MI = 
{
	"Add", NULL, &t6663_TI, &t109_0_0_0, RuntimeInvoker_t109_t3809, t6663_m35801_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35801_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35802_GM;
MethodInfo m35802_MI = 
{
	"Clear", NULL, &t6663_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35802_GM};
extern Il2CppType t3809_0_0_0;
static ParameterInfo t6663_m35803_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t3809_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t3809 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35803_GM;
MethodInfo m35803_MI = 
{
	"Contains", NULL, &t6663_TI, &t108_0_0_0, RuntimeInvoker_t108_t3809, t6663_m35803_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35803_GM};
extern Il2CppType t3808_0_0_0;
extern Il2CppType t3808_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6663_m35804_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3808_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35804_GM;
MethodInfo m35804_MI = 
{
	"CopyTo", NULL, &t6663_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6663_m35804_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35804_GM};
extern Il2CppType t3809_0_0_0;
static ParameterInfo t6663_m35805_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t3809_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t3809 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35805_GM;
MethodInfo m35805_MI = 
{
	"Remove", NULL, &t6663_TI, &t108_0_0_0, RuntimeInvoker_t108_t3809, t6663_m35805_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35805_GM};
static MethodInfo* t6663_MIs[] =
{
	&m35799_MI,
	&m35800_MI,
	&m35801_MI,
	&m35802_MI,
	&m35803_MI,
	&m35804_MI,
	&m35805_MI,
	NULL
};
extern TypeInfo t6665_TI;
static TypeInfo* t6663_ITIs[] = 
{
	&t739_TI,
	&t6665_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6663_0_0_0;
extern Il2CppType t6663_1_0_0;
struct t6663;
extern Il2CppGenericClass t6663_GC;
TypeInfo t6663_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6663_MIs, t6663_PIs, NULL, NULL, NULL, NULL, NULL, &t6663_TI, t6663_ITIs, NULL, &EmptyCustomAttributesCache, &t6663_TI, &t6663_0_0_0, &t6663_1_0_0, NULL, &t6663_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.HashSet`1/Link<System.Object>>
extern Il2CppType t5282_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35806_GM;
MethodInfo m35806_MI = 
{
	"GetEnumerator", NULL, &t6665_TI, &t5282_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35806_GM};
static MethodInfo* t6665_MIs[] =
{
	&m35806_MI,
	NULL
};
static TypeInfo* t6665_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6665_0_0_0;
extern Il2CppType t6665_1_0_0;
struct t6665;
extern Il2CppGenericClass t6665_GC;
TypeInfo t6665_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6665_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6665_TI, t6665_ITIs, NULL, &EmptyCustomAttributesCache, &t6665_TI, &t6665_0_0_0, &t6665_1_0_0, NULL, &t6665_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6664_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.HashSet`1/Link<System.Object>>
extern MethodInfo m35807_MI;
extern MethodInfo m35808_MI;
static PropertyInfo t6664____Item_PropertyInfo = 
{
	&t6664_TI, "Item", &m35807_MI, &m35808_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6664_PIs[] =
{
	&t6664____Item_PropertyInfo,
	NULL
};
extern Il2CppType t3809_0_0_0;
static ParameterInfo t6664_m35809_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t3809_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t3809 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35809_GM;
MethodInfo m35809_MI = 
{
	"IndexOf", NULL, &t6664_TI, &t110_0_0_0, RuntimeInvoker_t110_t3809, t6664_m35809_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35809_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t3809_0_0_0;
static ParameterInfo t6664_m35810_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t3809_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t3809 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35810_GM;
MethodInfo m35810_MI = 
{
	"Insert", NULL, &t6664_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t3809, t6664_m35810_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35810_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6664_m35811_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35811_GM;
MethodInfo m35811_MI = 
{
	"RemoveAt", NULL, &t6664_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6664_m35811_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35811_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6664_m35807_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t3809_0_0_0;
extern void* RuntimeInvoker_t3809_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35807_GM;
MethodInfo m35807_MI = 
{
	"get_Item", NULL, &t6664_TI, &t3809_0_0_0, RuntimeInvoker_t3809_t110, t6664_m35807_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35807_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t3809_0_0_0;
static ParameterInfo t6664_m35808_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t3809_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t3809 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35808_GM;
MethodInfo m35808_MI = 
{
	"set_Item", NULL, &t6664_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t3809, t6664_m35808_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35808_GM};
static MethodInfo* t6664_MIs[] =
{
	&m35809_MI,
	&m35810_MI,
	&m35811_MI,
	&m35807_MI,
	&m35808_MI,
	NULL
};
static TypeInfo* t6664_ITIs[] = 
{
	&t739_TI,
	&t6663_TI,
	&t6665_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6664_0_0_0;
extern Il2CppType t6664_1_0_0;
struct t6664;
extern Il2CppGenericClass t6664_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6664_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6664_MIs, t6664_PIs, NULL, NULL, NULL, NULL, NULL, &t6664_TI, t6664_ITIs, NULL, &t2240__CustomAttributeCache, &t6664_TI, &t6664_0_0_0, &t6664_1_0_0, NULL, &t6664_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif

#include "t1363.h"
extern TypeInfo t1363_TI;
#include "t1363MD.h"
extern MethodInfo m21744_MI;
extern MethodInfo m5942_MI;


 void m21739_gshared (t3811 * __this, t3807 * p0, MethodInfo* method)
{
	{
		__this->f0 = p0;
		int32_t L_0 = (p0->f9);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m21740_MI;
 t5 * m21740_gshared (t3811 * __this, MethodInfo* method)
{
	{
		(( void (*) (t3811 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		t133 * L_1 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4758(L_1, (t11*) &_stringLiteral231, &m4758_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001d:
	{
		t5 * L_2 = (__this->f3);
		t5 * L_3 = L_2;
		return ((t5 *)L_3);
	}
}
extern MethodInfo m21741_MI;
 bool m21741_gshared (t3811 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (t3811 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		goto IL_0055;
	}

IL_0019:
	{
		int32_t L_1 = (__this->f1);
		int32_t L_2 = L_1;
		V_1 = L_2;
		__this->f1 = ((int32_t)(L_2+1));
		V_0 = V_1;
		t3807 * L_3 = (__this->f0);
		int32_t L_4 = (( int32_t (*) (t3807 * __this, int32_t p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_3, V_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		if (!L_4)
		{
			goto IL_0055;
		}
	}
	{
		t3807 * L_5 = (__this->f0);
		t168* L_6 = (L_5->f2);
		int32_t L_7 = V_0;
		__this->f3 = (*(t5 **)(t5 **)SZArrayLdElema(L_6, L_7));
		return 1;
	}

IL_0055:
	{
		int32_t L_8 = (__this->f1);
		t3807 * L_9 = (__this->f0);
		int32_t L_10 = (L_9->f3);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0019;
		}
	}
	{
		__this->f1 = (-1);
		return 0;
	}
}
extern MethodInfo m21742_MI;
 t5 * m21742_gshared (t3811 * __this, MethodInfo* method)
{
	{
		t5 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m21743_MI;
 void m21743_gshared (t3811 * __this, MethodInfo* method)
{
	{
		__this->f0 = (t3807 *)NULL;
		return;
	}
}
 void m21744_gshared (t3811 * __this, MethodInfo* method)
{
	{
		t3807 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		t1363 * L_1 = (t1363 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1363_TI));
		m5942(L_1, (t11*)NULL, &m5942_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		t3807 * L_2 = (__this->f0);
		int32_t L_3 = (L_2->f9);
		int32_t L_4 = (__this->f2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		t133 * L_5 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4758(L_5, (t11*) &_stringLiteral232, &m4758_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0033:
	{
		return;
	}
}
// Metadata Definition System.Collections.Generic.HashSet`1/Enumerator<System.Object>
extern Il2CppType t3807_0_0_1;
FieldInfo t3811_f0_FieldInfo = 
{
	"hashset", &t3807_0_0_1, &t3811_TI, offsetof(t3811, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3811_f1_FieldInfo = 
{
	"next", &t110_0_0_1, &t3811_TI, offsetof(t3811, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3811_f2_FieldInfo = 
{
	"stamp", &t110_0_0_1, &t3811_TI, offsetof(t3811, f2) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_1;
FieldInfo t3811_f3_FieldInfo = 
{
	"current", &t5_0_0_1, &t3811_TI, offsetof(t3811, f3) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3811_FIs[] =
{
	&t3811_f0_FieldInfo,
	&t3811_f1_FieldInfo,
	&t3811_f2_FieldInfo,
	&t3811_f3_FieldInfo,
	NULL
};
static PropertyInfo t3811____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3811_TI, "System.Collections.IEnumerator.Current", &m21740_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3811____Current_PropertyInfo = 
{
	&t3811_TI, "Current", &m21742_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3811_PIs[] =
{
	&t3811____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3811____Current_PropertyInfo,
	NULL
};
extern Il2CppType t3807_0_0_0;
static ParameterInfo t3811_m21739_ParameterInfos[] = 
{
	{"hashset", 0, 134217728, &EmptyCustomAttributesCache, &t3807_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21739_GM;
MethodInfo m21739_MI = 
{
	".ctor", (methodPointerType)&m21739_gshared, &t3811_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3811_m21739_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21739_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21740_GM;
MethodInfo m21740_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21740_gshared, &t3811_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21740_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21741_GM;
MethodInfo m21741_MI = 
{
	"MoveNext", (methodPointerType)&m21741_gshared, &t3811_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21741_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21742_GM;
MethodInfo m21742_MI = 
{
	"get_Current", (methodPointerType)&m21742_gshared, &t3811_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21742_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21743_GM;
MethodInfo m21743_MI = 
{
	"Dispose", (methodPointerType)&m21743_gshared, &t3811_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21743_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21744_GM;
MethodInfo m21744_MI = 
{
	"CheckState", (methodPointerType)&m21744_gshared, &t3811_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21744_GM};
static MethodInfo* t3811_MIs[] =
{
	&m21739_MI,
	&m21740_MI,
	&m21741_MI,
	&m21742_MI,
	&m21743_MI,
	&m21744_MI,
	NULL
};
static MethodInfo* t3811_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21740_MI,
	&m21741_MI,
	&m21743_MI,
	&m21742_MI,
};
static TypeInfo* t3811_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t492_TI,
};
static Il2CppInterfaceOffsetPair t3811_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t492_TI, 7},
};
extern TypeInfo t5_TI;
static Il2CppRGCTXData t3811_RGCTXData[3] = 
{
	&m21744_MI/* Method Usage */,
	&t5_TI/* Class Usage */,
	&m21726_MI/* Method Usage */,
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t3811_0_0_0;
extern Il2CppType t3811_1_0_0;
extern Il2CppGenericClass t3811_GC;
TypeInfo t3811_TI = 
{
	&g_System_Core_dll_Image, NULL, "Enumerator", "", t3811_MIs, t3811_PIs, t3811_FIs, NULL, &t267_TI, NULL, &t828_TI, &t3811_TI, t3811_ITIs, t3811_VT, &EmptyCustomAttributesCache, &t3811_TI, &t3811_0_0_0, &t3811_1_0_0, t3811_IOs, &t3811_GC, NULL, NULL, NULL, t3811_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3811)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#include "t3812.h"
#ifndef _MSC_VER
#else
#endif

#include "t843.h"
#include "t842.h"
#include "t1192.h"
#include "t118.h"
extern TypeInfo t843_TI;
#include "t843MD.h"
#include "t1193MD.h"
#include "t166MD.h"
extern MethodInfo m4819_MI;
extern MethodInfo m3518_MI;
extern MethodInfo m21746_MI;
extern MethodInfo m21747_MI;
extern FieldInfo t843_f0_FieldInfo;


extern MethodInfo m21745_MI;
 void m21745_gshared (t5 * __this, MethodInfo* method)
{
	{
		t55* L_0 = ((t55*)SZArrayNew(InitializedTypeInfo(&t55_TI), ((int32_t)34)));
		m4819(NULL, (t107 *)(t107 *)L_0, LoadFieldToken(&t843_f0_FieldInfo), &m4819_MI);
		((t3812_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->f0 = L_0;
		return;
	}
}
 bool m21746_gshared (t5 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		if (!((int32_t)((int32_t)p0&(int32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		double L_0 = sqrt((((double)p0)));
		V_0 = (((int32_t)L_0));
		V_1 = 3;
		goto IL_0026;
	}

IL_0018:
	{
		if (((int32_t)(p0%V_1)))
		{
			goto IL_0022;
		}
	}
	{
		return 0;
	}

IL_0022:
	{
		V_1 = ((int32_t)(V_1+2));
	}

IL_0026:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_002f:
	{
		return ((((int32_t)p0) == ((int32_t)2))? 1 : 0);
	}
}
 int32_t m21747_gshared (t5 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)(((int32_t)((int32_t)p0&(int32_t)((int32_t)-2)))-1));
		goto IL_001d;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t3812_TI));
		bool L_0 = (( bool (*) (t5 * __this, int32_t p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL, V_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		return V_0;
	}

IL_0019:
	{
		V_0 = ((int32_t)(V_0+2));
	}

IL_001d:
	{
		if ((((int32_t)V_0) < ((int32_t)((int32_t)2147483647))))
		{
			goto IL_000c;
		}
	}
	{
		return p0;
	}
}
 int32_t m21748_gshared (t5 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0020;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = V_0;
		if ((((int32_t)p0) > ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema((((t3812_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->f0), L_0)))))
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = V_0;
		return (*(int32_t*)(int32_t*)SZArrayLdElema((((t3812_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->f0), L_1));
	}

IL_001c:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		if ((((int32_t)V_0) < ((int32_t)(((int32_t)(((t107 *)(((t3812_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->f0))->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t3812_TI));
		int32_t L_2 = (( int32_t (*) (t5 * __this, int32_t p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL, p0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.HashSet`1/PrimeHelper<System.Object>
extern Il2CppType t55_0_0_49;
FieldInfo t3812_f0_FieldInfo = 
{
	"primes_table", &t55_0_0_49, &t3812_TI, offsetof(t3812_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t3812_FIs[] =
{
	&t3812_f0_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21745_GM;
MethodInfo m21745_MI = 
{
	".cctor", (methodPointerType)&m21745_gshared, &t3812_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21745_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3812_m21746_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21746_GM;
MethodInfo m21746_MI = 
{
	"TestPrime", (methodPointerType)&m21746_gshared, &t3812_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t3812_m21746_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21746_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3812_m21747_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21747_GM;
MethodInfo m21747_MI = 
{
	"CalcPrime", (methodPointerType)&m21747_gshared, &t3812_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t3812_m21747_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21747_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t3812_m21748_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21748_GM;
MethodInfo m21748_MI = 
{
	"ToPrime", (methodPointerType)&m21748_gshared, &t3812_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t3812_m21748_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21748_GM};
static MethodInfo* t3812_MIs[] =
{
	&m21745_MI,
	&m21746_MI,
	&m21747_MI,
	&m21748_MI,
	NULL
};
static MethodInfo* t3812_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
extern TypeInfo t3812_TI;
static Il2CppRGCTXData t3812_RGCTXData[3] = 
{
	&t3812_TI/* Static Usage */,
	&m21746_MI/* Method Usage */,
	&m21747_MI/* Method Usage */,
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t3812_0_0_0;
extern Il2CppType t3812_1_0_0;
struct t3812;
extern Il2CppGenericClass t3812_GC;
TypeInfo t3812_TI = 
{
	&g_System_Core_dll_Image, NULL, "PrimeHelper", "", t3812_MIs, NULL, t3812_FIs, NULL, &t5_TI, NULL, &t828_TI, &t3812_TI, NULL, t3812_VT, &EmptyCustomAttributesCache, &t3812_TI, &t3812_0_0_0, &t3812_1_0_0, NULL, &t3812_GC, NULL, NULL, NULL, t3812_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3812), 0, -1, sizeof(t3812_SFs), 0, -1, 1048963, 0, false, false, false, false, true, false, false, false, false, true, false, false, 4, 0, 1, 0, 0, 4, 0, 0};
#include "t3813.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3813_TI;
#include "t3813MD.h"

#include "t490.h"
#include "t1927MD.h"
extern MethodInfo m21753_MI;
extern MethodInfo m10031_MI;
extern MethodInfo m21749_MI;
extern MethodInfo m4947_MI;
extern MethodInfo m4764_MI;


 void m21749_gshared (t3813 * __this, MethodInfo* method)
{
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m21750_MI;
 t5 * m21750_gshared (t3813 * __this, MethodInfo* method)
{
	{
		t5 * L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m21751_MI;
 t5 * m21751_gshared (t3813 * __this, MethodInfo* method)
{
	{
		t5 * L_0 = (__this->f4);
		t5 * L_1 = L_0;
		return ((t5 *)L_1);
	}
}
extern MethodInfo m21752_MI;
 t5 * m21752_gshared (t3813 * __this, MethodInfo* method)
{
	{
		t5* L_0 = (t5*)VirtFuncInvoker0< t5* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), __this);
		return L_0;
	}
}
 t5* m21753_gshared (t3813 * __this, MethodInfo* method)
{
	t3813 * V_0 = {0};
	{
		int32_t* L_0 = &(__this->f3);
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
		t3813 * L_2 = (t3813 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (t3813 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_2;
		t5 * L_3 = (__this->f5);
		V_0->f0 = L_3;
		return V_0;
	}
}
extern MethodInfo m21754_MI;
 bool m21754_gshared (t3813 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	t5 * V_2 = {0};
	bool V_3 = false;
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		int32_t L_0 = (__this->f3);
		V_0 = L_0;
		__this->f3 = (-1);
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
		goto IL_00af;
	}

IL_0023:
	{
		t5 * L_1 = (__this->f0);
		t5 * L_2 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4947_MI, L_1);
		__this->f1 = L_2;
		V_0 = ((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			if (((uint32_t)(V_0-1)) == 0)
			{
				goto IL_0078;
			}
		}

IL_0043:
		{
			goto IL_0078;
		}

IL_0048:
		{
			t5 * L_3 = (__this->f1);
			t5 * L_4 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4764_MI, L_3);
			__this->f2 = ((t5 *)Castclass(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
			t5 * L_5 = (__this->f2);
			__this->f4 = L_5;
			__this->f3 = 1;
			V_1 = 1;
			// IL_0073: leave IL_00b1
			leaveInstructions[0] = 0xB1; // 1
			THROW_SENTINEL(IL_00b1);
			// finally target depth: 1
		}

IL_0078:
		{
			t5 * L_6 = (__this->f1);
			bool L_7 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m746_MI, L_6);
			if (L_7)
			{
				goto IL_0048;
			}
		}

IL_0088:
		{
			// IL_0088: leave IL_00a8
			leaveInstructions[0] = 0xA8; // 1
			THROW_SENTINEL(IL_00a8);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_008d;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_008d;
	}

IL_008d:
	{ // begin finally (depth: 1)
		{
			if (!V_1)
			{
				goto IL_0091;
			}
		}

IL_0090:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xB1:
					goto IL_00b1;
				case 0xA8:
					goto IL_00a8;
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

IL_0091:
		{
			t5 * L_8 = (__this->f1);
			V_2 = ((t5 *)IsInst(L_8, InitializedTypeInfo(&t132_TI)));
			if (V_2)
			{
				goto IL_00a1;
			}
		}

IL_00a0:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xB1:
					goto IL_00b1;
				case 0xA8:
					goto IL_00a8;
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

IL_00a1:
		{
			InterfaceActionInvoker0::Invoke(&m516_MI, V_2);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xB1:
					goto IL_00b1;
				case 0xA8:
					goto IL_00a8;
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

IL_00a8:
	{
		__this->f3 = (-1);
	}

IL_00af:
	{
		return 0;
	}

IL_00b1:
	{
		return 1;
	}
	// Dead block : IL_00b3: ldloc.3
}
extern MethodInfo m21755_MI;
 void m21755_gshared (t3813 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	t5 * V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		int32_t L_0 = (__this->f3);
		V_0 = L_0;
		__this->f3 = (-1);
		if (V_0 == 0)
		{
			goto IL_003d;
		}
		if (V_0 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_003d;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		// IL_0021: leave IL_003d
		leaveInstructions[0] = 0x3D; // 1
		THROW_SENTINEL(IL_003d);
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
			t5 * L_1 = (__this->f1);
			V_1 = ((t5 *)IsInst(L_1, InitializedTypeInfo(&t132_TI)));
			if (V_1)
			{
				goto IL_0036;
			}
		}

IL_0035:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x3D:
					goto IL_003d;
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

IL_0036:
		{
			InterfaceActionInvoker0::Invoke(&m516_MI, V_1);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x3D:
					goto IL_003d;
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

IL_003d:
	{
		return;
	}
}
// Metadata Definition System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>
extern Il2CppType t739_0_0_3;
FieldInfo t3813_f0_FieldInfo = 
{
	"source", &t739_0_0_3, &t3813_TI, offsetof(t3813, f0), &EmptyCustomAttributesCache};
extern Il2CppType t196_0_0_3;
FieldInfo t3813_f1_FieldInfo = 
{
	"<$s_41>__0", &t196_0_0_3, &t3813_TI, offsetof(t3813, f1), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_3;
FieldInfo t3813_f2_FieldInfo = 
{
	"<element>__1", &t5_0_0_3, &t3813_TI, offsetof(t3813, f2), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_3;
FieldInfo t3813_f3_FieldInfo = 
{
	"$PC", &t110_0_0_3, &t3813_TI, offsetof(t3813, f3), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_3;
FieldInfo t3813_f4_FieldInfo = 
{
	"$current", &t5_0_0_3, &t3813_TI, offsetof(t3813, f4), &EmptyCustomAttributesCache};
extern Il2CppType t739_0_0_3;
FieldInfo t3813_f5_FieldInfo = 
{
	"<$>source", &t739_0_0_3, &t3813_TI, offsetof(t3813, f5), &EmptyCustomAttributesCache};
static FieldInfo* t3813_FIs[] =
{
	&t3813_f0_FieldInfo,
	&t3813_f1_FieldInfo,
	&t3813_f2_FieldInfo,
	&t3813_f3_FieldInfo,
	&t3813_f4_FieldInfo,
	&t3813_f5_FieldInfo,
	NULL
};
static PropertyInfo t3813____System_Collections_Generic_IEnumeratorU3CTResultU3E_Current_PropertyInfo = 
{
	&t3813_TI, "System.Collections.Generic.IEnumerator<TResult>.Current", &m21750_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3813____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3813_TI, "System.Collections.IEnumerator.Current", &m21751_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3813_PIs[] =
{
	&t3813____System_Collections_Generic_IEnumeratorU3CTResultU3E_Current_PropertyInfo,
	&t3813____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21749_GM;
MethodInfo m21749_MI = 
{
	".ctor", (methodPointerType)&m21749_gshared, &t3813_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21749_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t833__CustomAttributeCache_m3731;
extern Il2CppGenericMethod m21750_GM;
MethodInfo m21750_MI = 
{
	"System.Collections.Generic.IEnumerator<TResult>.get_Current", (methodPointerType)&m21750_gshared, &t3813_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &t833__CustomAttributeCache_m3731, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21750_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t833__CustomAttributeCache_m3732;
extern Il2CppGenericMethod m21751_GM;
MethodInfo m21751_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21751_gshared, &t3813_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &t833__CustomAttributeCache_m3732, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21751_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t833__CustomAttributeCache_m3733;
extern Il2CppGenericMethod m21752_GM;
MethodInfo m21752_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m21752_gshared, &t3813_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &t833__CustomAttributeCache_m3733, 481, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21752_GM};
extern Il2CppType t492_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t833__CustomAttributeCache_m3734;
extern Il2CppGenericMethod m21753_GM;
MethodInfo m21753_MI = 
{
	"System.Collections.Generic.IEnumerable<TResult>.GetEnumerator", (methodPointerType)&m21753_gshared, &t3813_TI, &t492_0_0_0, RuntimeInvoker_t5, NULL, &t833__CustomAttributeCache_m3734, 481, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21753_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21754_GM;
MethodInfo m21754_MI = 
{
	"MoveNext", (methodPointerType)&m21754_gshared, &t3813_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21754_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t833__CustomAttributeCache_m3736;
extern Il2CppGenericMethod m21755_GM;
MethodInfo m21755_MI = 
{
	"Dispose", (methodPointerType)&m21755_gshared, &t3813_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &t833__CustomAttributeCache_m3736, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21755_GM};
static MethodInfo* t3813_MIs[] =
{
	&m21749_MI,
	&m21750_MI,
	&m21751_MI,
	&m21752_MI,
	&m21753_MI,
	&m21754_MI,
	&m21755_MI,
	NULL
};
static MethodInfo* t3813_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21751_MI,
	&m21754_MI,
	&m21755_MI,
	&m21752_MI,
	&m21753_MI,
	&m21750_MI,
};
static TypeInfo* t3813_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t739_TI,
	&t2459_TI,
	&t492_TI,
};
static Il2CppInterfaceOffsetPair t3813_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t739_TI, 7},
	{ &t2459_TI, 8},
	{ &t492_TI, 9},
};
extern TypeInfo t5_TI;
extern TypeInfo t3813_TI;
static Il2CppRGCTXData t3813_RGCTXData[4] = 
{
	&t5_TI/* Class Usage */,
	&m21753_MI/* Method Usage */,
	&t3813_TI/* Class Usage */,
	&m21749_MI/* Method Usage */,
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t3813_0_0_0;
extern Il2CppType t3813_1_0_0;
struct t3813;
extern Il2CppGenericClass t3813_GC;
extern TypeInfo t125_TI;
extern CustomAttributesCache t833__CustomAttributeCache;
extern CustomAttributesCache t833__CustomAttributeCache_m3731;
extern CustomAttributesCache t833__CustomAttributeCache_m3732;
extern CustomAttributesCache t833__CustomAttributeCache_m3733;
extern CustomAttributesCache t833__CustomAttributeCache_m3734;
extern CustomAttributesCache t833__CustomAttributeCache_m3736;
TypeInfo t3813_TI = 
{
	&g_System_Core_dll_Image, NULL, "<CreateCastIterator>c__Iterator0`1", "", t3813_MIs, t3813_PIs, t3813_FIs, NULL, &t5_TI, NULL, &t125_TI, &t3813_TI, t3813_ITIs, t3813_VT, &t833__CustomAttributeCache, &t3813_TI, &t3813_0_0_0, &t3813_1_0_0, t3813_IOs, &t3813_GC, NULL, NULL, NULL, t3813_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3813), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 6, 0, 0, 10, 5, 5};
#include "t3814.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3814_TI;
#include "t3814MD.h"

#include "t124.h"
#include "t152.h"
#include "t222.h"


extern MethodInfo m21756_MI;
 void m21756 (t3814 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m21757_MI;
 int64_t m21757 (t3814 * __this, t5 * p0, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m21757((t3814 *)__this->f9,p0, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef int64_t (*FunctionPointerType) (t5 *, t5 * __this, t5 * p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef int64_t (*FunctionPointerType) (t5 * __this, t5 * p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef int64_t (*FunctionPointerType) (t5 * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern MethodInfo m21758_MI;
 t5 * m21758 (t3814 * __this, t5 * p0, t222 * p1, t5 * p2, MethodInfo* method){
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m21759_MI;
 int64_t m21759 (t3814 * __this, t5 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int64_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Func`2<System.Object,System.Int64>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t3814_m21756_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21756_GM;
MethodInfo m21756_MI = 
{
	".ctor", (methodPointerType)&m21756, &t3814_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t3814_m21756_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21756_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t3814_m21757_ParameterInfos[] = 
{
	{"arg1", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t152_0_0_0;
extern void* RuntimeInvoker_t152_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21757_GM;
MethodInfo m21757_MI = 
{
	"Invoke", (methodPointerType)&m21757, &t3814_TI, &t152_0_0_0, RuntimeInvoker_t152_t5, t3814_m21757_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21757_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t3814_m21758_ParameterInfos[] = 
{
	{"arg1", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21758_GM;
MethodInfo m21758_MI = 
{
	"BeginInvoke", (methodPointerType)&m21758, &t3814_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t3814_m21758_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m21758_GM};
extern Il2CppType t221_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t3814_m21759_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t152_0_0_0;
extern void* RuntimeInvoker_t152_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21759_GM;
MethodInfo m21759_MI = 
{
	"EndInvoke", (methodPointerType)&m21759, &t3814_TI, &t152_0_0_0, RuntimeInvoker_t152_t5, t3814_m21759_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21759_GM};
static MethodInfo* t3814_MIs[] =
{
	&m21756_MI,
	&m21757_MI,
	&m21758_MI,
	&m21759_MI,
	NULL
};
extern MethodInfo m2341_MI;
extern MethodInfo m2342_MI;
extern MethodInfo m2343_MI;
extern MethodInfo m2344_MI;
extern MethodInfo m2345_MI;
extern MethodInfo m2346_MI;
extern MethodInfo m2347_MI;
static MethodInfo* t3814_VT[] =
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
	&m21757_MI,
	&m21758_MI,
	&m21759_MI,
};
extern TypeInfo t516_TI;
static Il2CppInterfaceOffsetPair t3814_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t3814_0_0_0;
extern Il2CppType t3814_1_0_0;
extern TypeInfo t353_TI;
struct t3814;
extern Il2CppGenericClass t3814_GC;
TypeInfo t3814_TI = 
{
	&g_System_Core_dll_Image, NULL, "Func`2", "System", t3814_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t3814_TI, NULL, t3814_VT, &EmptyCustomAttributesCache, &t3814_TI, &t3814_0_0_0, &t3814_1_0_0, t3814_IOs, &t3814_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3814), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5284_TI;

#include "t139.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Linq.Enumerable/Fallback>
extern MethodInfo m35812_MI;
static PropertyInfo t5284____Current_PropertyInfo = 
{
	&t5284_TI, "Current", &m35812_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5284_PIs[] =
{
	&t5284____Current_PropertyInfo,
	NULL
};
extern Il2CppType t139_0_0_0;
extern void* RuntimeInvoker_t139 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35812_GM;
MethodInfo m35812_MI = 
{
	"get_Current", NULL, &t5284_TI, &t139_0_0_0, RuntimeInvoker_t139, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35812_GM};
static MethodInfo* t5284_MIs[] =
{
	&m35812_MI,
	NULL
};
static TypeInfo* t5284_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5284_0_0_0;
extern Il2CppType t5284_1_0_0;
struct t5284;
extern Il2CppGenericClass t5284_GC;
TypeInfo t5284_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5284_MIs, t5284_PIs, NULL, NULL, NULL, NULL, NULL, &t5284_TI, t5284_ITIs, NULL, &EmptyCustomAttributesCache, &t5284_TI, &t5284_0_0_0, &t5284_1_0_0, NULL, &t5284_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3815.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3815_TI;
#include "t3815MD.h"

extern TypeInfo t139_TI;
extern MethodInfo m21764_MI;
extern MethodInfo m27910_MI;
struct t107;
 int32_t m27910 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21760_MI;
 void m21760 (t3815 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21761_MI;
 t5 * m21761 (t3815 * __this, MethodInfo* method){
	{
		int32_t L_0 = m21764(__this, &m21764_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t139_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m21762_MI;
 void m21762 (t3815 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21763_MI;
 bool m21763 (t3815 * __this, MethodInfo* method){
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
 int32_t m21764 (t3815 * __this, MethodInfo* method){
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
		int32_t L_8 = m27910(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m27910_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Linq.Enumerable/Fallback>
extern Il2CppType t107_0_0_1;
FieldInfo t3815_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3815_TI, offsetof(t3815, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3815_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3815_TI, offsetof(t3815, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3815_FIs[] =
{
	&t3815_f0_FieldInfo,
	&t3815_f1_FieldInfo,
	NULL
};
static PropertyInfo t3815____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3815_TI, "System.Collections.IEnumerator.Current", &m21761_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3815____Current_PropertyInfo = 
{
	&t3815_TI, "Current", &m21764_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3815_PIs[] =
{
	&t3815____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3815____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3815_m21760_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21760_GM;
MethodInfo m21760_MI = 
{
	".ctor", (methodPointerType)&m21760, &t3815_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3815_m21760_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21760_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21761_GM;
MethodInfo m21761_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21761, &t3815_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21761_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21762_GM;
MethodInfo m21762_MI = 
{
	"Dispose", (methodPointerType)&m21762, &t3815_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21762_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21763_GM;
MethodInfo m21763_MI = 
{
	"MoveNext", (methodPointerType)&m21763, &t3815_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21763_GM};
extern Il2CppType t139_0_0_0;
extern void* RuntimeInvoker_t139 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21764_GM;
MethodInfo m21764_MI = 
{
	"get_Current", (methodPointerType)&m21764, &t3815_TI, &t139_0_0_0, RuntimeInvoker_t139, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21764_GM};
static MethodInfo* t3815_MIs[] =
{
	&m21760_MI,
	&m21761_MI,
	&m21762_MI,
	&m21763_MI,
	&m21764_MI,
	NULL
};
static MethodInfo* t3815_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21761_MI,
	&m21763_MI,
	&m21762_MI,
	&m21764_MI,
};
static TypeInfo* t3815_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5284_TI,
};
static Il2CppInterfaceOffsetPair t3815_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5284_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3815_0_0_0;
extern Il2CppType t3815_1_0_0;
extern Il2CppGenericClass t3815_GC;
TypeInfo t3815_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3815_MIs, t3815_PIs, t3815_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3815_TI, t3815_ITIs, t3815_VT, &EmptyCustomAttributesCache, &t3815_TI, &t3815_0_0_0, &t3815_1_0_0, t3815_IOs, &t3815_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3815)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6666_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Linq.Enumerable/Fallback>
extern MethodInfo m35813_MI;
static PropertyInfo t6666____Count_PropertyInfo = 
{
	&t6666_TI, "Count", &m35813_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35814_MI;
static PropertyInfo t6666____IsReadOnly_PropertyInfo = 
{
	&t6666_TI, "IsReadOnly", &m35814_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6666_PIs[] =
{
	&t6666____Count_PropertyInfo,
	&t6666____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35813_GM;
MethodInfo m35813_MI = 
{
	"get_Count", NULL, &t6666_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35813_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35814_GM;
MethodInfo m35814_MI = 
{
	"get_IsReadOnly", NULL, &t6666_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35814_GM};
extern Il2CppType t139_0_0_0;
extern Il2CppType t139_0_0_0;
static ParameterInfo t6666_m35815_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t139_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35815_GM;
MethodInfo m35815_MI = 
{
	"Add", NULL, &t6666_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6666_m35815_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35815_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35816_GM;
MethodInfo m35816_MI = 
{
	"Clear", NULL, &t6666_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35816_GM};
extern Il2CppType t139_0_0_0;
static ParameterInfo t6666_m35817_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t139_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35817_GM;
MethodInfo m35817_MI = 
{
	"Contains", NULL, &t6666_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6666_m35817_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35817_GM};
extern Il2CppType t4473_0_0_0;
extern Il2CppType t4473_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6666_m35818_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4473_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35818_GM;
MethodInfo m35818_MI = 
{
	"CopyTo", NULL, &t6666_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6666_m35818_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35818_GM};
extern Il2CppType t139_0_0_0;
static ParameterInfo t6666_m35819_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t139_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35819_GM;
MethodInfo m35819_MI = 
{
	"Remove", NULL, &t6666_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6666_m35819_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35819_GM};
static MethodInfo* t6666_MIs[] =
{
	&m35813_MI,
	&m35814_MI,
	&m35815_MI,
	&m35816_MI,
	&m35817_MI,
	&m35818_MI,
	&m35819_MI,
	NULL
};
extern TypeInfo t6668_TI;
static TypeInfo* t6666_ITIs[] = 
{
	&t739_TI,
	&t6668_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6666_0_0_0;
extern Il2CppType t6666_1_0_0;
struct t6666;
extern Il2CppGenericClass t6666_GC;
TypeInfo t6666_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6666_MIs, t6666_PIs, NULL, NULL, NULL, NULL, NULL, &t6666_TI, t6666_ITIs, NULL, &EmptyCustomAttributesCache, &t6666_TI, &t6666_0_0_0, &t6666_1_0_0, NULL, &t6666_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Linq.Enumerable/Fallback>
extern Il2CppType t5284_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35820_GM;
MethodInfo m35820_MI = 
{
	"GetEnumerator", NULL, &t6668_TI, &t5284_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35820_GM};
static MethodInfo* t6668_MIs[] =
{
	&m35820_MI,
	NULL
};
static TypeInfo* t6668_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6668_0_0_0;
extern Il2CppType t6668_1_0_0;
struct t6668;
extern Il2CppGenericClass t6668_GC;
TypeInfo t6668_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6668_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6668_TI, t6668_ITIs, NULL, &EmptyCustomAttributesCache, &t6668_TI, &t6668_0_0_0, &t6668_1_0_0, NULL, &t6668_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6667_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Linq.Enumerable/Fallback>
extern MethodInfo m35821_MI;
extern MethodInfo m35822_MI;
static PropertyInfo t6667____Item_PropertyInfo = 
{
	&t6667_TI, "Item", &m35821_MI, &m35822_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6667_PIs[] =
{
	&t6667____Item_PropertyInfo,
	NULL
};
extern Il2CppType t139_0_0_0;
static ParameterInfo t6667_m35823_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t139_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35823_GM;
MethodInfo m35823_MI = 
{
	"IndexOf", NULL, &t6667_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6667_m35823_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35823_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t139_0_0_0;
static ParameterInfo t6667_m35824_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t139_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35824_GM;
MethodInfo m35824_MI = 
{
	"Insert", NULL, &t6667_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6667_m35824_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35824_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6667_m35825_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35825_GM;
MethodInfo m35825_MI = 
{
	"RemoveAt", NULL, &t6667_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6667_m35825_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35825_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6667_m35821_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t139_0_0_0;
extern void* RuntimeInvoker_t139_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35821_GM;
MethodInfo m35821_MI = 
{
	"get_Item", NULL, &t6667_TI, &t139_0_0_0, RuntimeInvoker_t139_t110, t6667_m35821_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35821_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t139_0_0_0;
static ParameterInfo t6667_m35822_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t139_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35822_GM;
MethodInfo m35822_MI = 
{
	"set_Item", NULL, &t6667_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6667_m35822_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35822_GM};
static MethodInfo* t6667_MIs[] =
{
	&m35823_MI,
	&m35824_MI,
	&m35825_MI,
	&m35821_MI,
	&m35822_MI,
	NULL
};
static TypeInfo* t6667_ITIs[] = 
{
	&t739_TI,
	&t6666_TI,
	&t6668_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6667_0_0_0;
extern Il2CppType t6667_1_0_0;
struct t6667;
extern Il2CppGenericClass t6667_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6667_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6667_MIs, t6667_PIs, NULL, NULL, NULL, NULL, NULL, &t6667_TI, t6667_ITIs, NULL, &t2240__CustomAttributeCache, &t6667_TI, &t6667_0_0_0, &t6667_1_0_0, NULL, &t6667_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5286_TI;

#include "t135.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Linq.SortDirection>
extern MethodInfo m35826_MI;
static PropertyInfo t5286____Current_PropertyInfo = 
{
	&t5286_TI, "Current", &m35826_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5286_PIs[] =
{
	&t5286____Current_PropertyInfo,
	NULL
};
extern Il2CppType t135_0_0_0;
extern void* RuntimeInvoker_t135 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35826_GM;
MethodInfo m35826_MI = 
{
	"get_Current", NULL, &t5286_TI, &t135_0_0_0, RuntimeInvoker_t135, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35826_GM};
static MethodInfo* t5286_MIs[] =
{
	&m35826_MI,
	NULL
};
static TypeInfo* t5286_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5286_0_0_0;
extern Il2CppType t5286_1_0_0;
struct t5286;
extern Il2CppGenericClass t5286_GC;
TypeInfo t5286_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5286_MIs, t5286_PIs, NULL, NULL, NULL, NULL, NULL, &t5286_TI, t5286_ITIs, NULL, &EmptyCustomAttributesCache, &t5286_TI, &t5286_0_0_0, &t5286_1_0_0, NULL, &t5286_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3816.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3816_TI;
#include "t3816MD.h"

extern TypeInfo t135_TI;
extern MethodInfo m21769_MI;
extern MethodInfo m27921_MI;
struct t107;
 int32_t m27921 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21765_MI;
 void m21765 (t3816 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21766_MI;
 t5 * m21766 (t3816 * __this, MethodInfo* method){
	{
		int32_t L_0 = m21769(__this, &m21769_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t135_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m21767_MI;
 void m21767 (t3816 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21768_MI;
 bool m21768 (t3816 * __this, MethodInfo* method){
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
 int32_t m21769 (t3816 * __this, MethodInfo* method){
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
		int32_t L_8 = m27921(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m27921_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Linq.SortDirection>
extern Il2CppType t107_0_0_1;
FieldInfo t3816_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3816_TI, offsetof(t3816, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3816_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3816_TI, offsetof(t3816, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3816_FIs[] =
{
	&t3816_f0_FieldInfo,
	&t3816_f1_FieldInfo,
	NULL
};
static PropertyInfo t3816____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3816_TI, "System.Collections.IEnumerator.Current", &m21766_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3816____Current_PropertyInfo = 
{
	&t3816_TI, "Current", &m21769_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3816_PIs[] =
{
	&t3816____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3816____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3816_m21765_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21765_GM;
MethodInfo m21765_MI = 
{
	".ctor", (methodPointerType)&m21765, &t3816_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3816_m21765_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21765_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21766_GM;
MethodInfo m21766_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21766, &t3816_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21766_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21767_GM;
MethodInfo m21767_MI = 
{
	"Dispose", (methodPointerType)&m21767, &t3816_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21767_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21768_GM;
MethodInfo m21768_MI = 
{
	"MoveNext", (methodPointerType)&m21768, &t3816_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21768_GM};
extern Il2CppType t135_0_0_0;
extern void* RuntimeInvoker_t135 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21769_GM;
MethodInfo m21769_MI = 
{
	"get_Current", (methodPointerType)&m21769, &t3816_TI, &t135_0_0_0, RuntimeInvoker_t135, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21769_GM};
static MethodInfo* t3816_MIs[] =
{
	&m21765_MI,
	&m21766_MI,
	&m21767_MI,
	&m21768_MI,
	&m21769_MI,
	NULL
};
static MethodInfo* t3816_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21766_MI,
	&m21768_MI,
	&m21767_MI,
	&m21769_MI,
};
static TypeInfo* t3816_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5286_TI,
};
static Il2CppInterfaceOffsetPair t3816_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5286_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3816_0_0_0;
extern Il2CppType t3816_1_0_0;
extern Il2CppGenericClass t3816_GC;
TypeInfo t3816_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3816_MIs, t3816_PIs, t3816_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3816_TI, t3816_ITIs, t3816_VT, &EmptyCustomAttributesCache, &t3816_TI, &t3816_0_0_0, &t3816_1_0_0, t3816_IOs, &t3816_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3816)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6669_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Linq.SortDirection>
extern MethodInfo m35827_MI;
static PropertyInfo t6669____Count_PropertyInfo = 
{
	&t6669_TI, "Count", &m35827_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35828_MI;
static PropertyInfo t6669____IsReadOnly_PropertyInfo = 
{
	&t6669_TI, "IsReadOnly", &m35828_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6669_PIs[] =
{
	&t6669____Count_PropertyInfo,
	&t6669____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35827_GM;
MethodInfo m35827_MI = 
{
	"get_Count", NULL, &t6669_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35827_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35828_GM;
MethodInfo m35828_MI = 
{
	"get_IsReadOnly", NULL, &t6669_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35828_GM};
extern Il2CppType t135_0_0_0;
extern Il2CppType t135_0_0_0;
static ParameterInfo t6669_m35829_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35829_GM;
MethodInfo m35829_MI = 
{
	"Add", NULL, &t6669_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6669_m35829_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35829_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35830_GM;
MethodInfo m35830_MI = 
{
	"Clear", NULL, &t6669_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35830_GM};
extern Il2CppType t135_0_0_0;
static ParameterInfo t6669_m35831_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35831_GM;
MethodInfo m35831_MI = 
{
	"Contains", NULL, &t6669_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6669_m35831_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35831_GM};
extern Il2CppType t4474_0_0_0;
extern Il2CppType t4474_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6669_m35832_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4474_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35832_GM;
MethodInfo m35832_MI = 
{
	"CopyTo", NULL, &t6669_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6669_m35832_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35832_GM};
extern Il2CppType t135_0_0_0;
static ParameterInfo t6669_m35833_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35833_GM;
MethodInfo m35833_MI = 
{
	"Remove", NULL, &t6669_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6669_m35833_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35833_GM};
static MethodInfo* t6669_MIs[] =
{
	&m35827_MI,
	&m35828_MI,
	&m35829_MI,
	&m35830_MI,
	&m35831_MI,
	&m35832_MI,
	&m35833_MI,
	NULL
};
extern TypeInfo t6671_TI;
static TypeInfo* t6669_ITIs[] = 
{
	&t739_TI,
	&t6671_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6669_0_0_0;
extern Il2CppType t6669_1_0_0;
struct t6669;
extern Il2CppGenericClass t6669_GC;
TypeInfo t6669_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6669_MIs, t6669_PIs, NULL, NULL, NULL, NULL, NULL, &t6669_TI, t6669_ITIs, NULL, &EmptyCustomAttributesCache, &t6669_TI, &t6669_0_0_0, &t6669_1_0_0, NULL, &t6669_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Linq.SortDirection>
extern Il2CppType t5286_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35834_GM;
MethodInfo m35834_MI = 
{
	"GetEnumerator", NULL, &t6671_TI, &t5286_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35834_GM};
static MethodInfo* t6671_MIs[] =
{
	&m35834_MI,
	NULL
};
static TypeInfo* t6671_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6671_0_0_0;
extern Il2CppType t6671_1_0_0;
struct t6671;
extern Il2CppGenericClass t6671_GC;
TypeInfo t6671_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6671_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6671_TI, t6671_ITIs, NULL, &EmptyCustomAttributesCache, &t6671_TI, &t6671_0_0_0, &t6671_1_0_0, NULL, &t6671_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6670_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Linq.SortDirection>
extern MethodInfo m35835_MI;
extern MethodInfo m35836_MI;
static PropertyInfo t6670____Item_PropertyInfo = 
{
	&t6670_TI, "Item", &m35835_MI, &m35836_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6670_PIs[] =
{
	&t6670____Item_PropertyInfo,
	NULL
};
extern Il2CppType t135_0_0_0;
static ParameterInfo t6670_m35837_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35837_GM;
MethodInfo m35837_MI = 
{
	"IndexOf", NULL, &t6670_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6670_m35837_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35837_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t135_0_0_0;
static ParameterInfo t6670_m35838_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35838_GM;
MethodInfo m35838_MI = 
{
	"Insert", NULL, &t6670_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6670_m35838_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35838_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6670_m35839_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35839_GM;
MethodInfo m35839_MI = 
{
	"RemoveAt", NULL, &t6670_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6670_m35839_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35839_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6670_m35835_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t135_0_0_0;
extern void* RuntimeInvoker_t135_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35835_GM;
MethodInfo m35835_MI = 
{
	"get_Item", NULL, &t6670_TI, &t135_0_0_0, RuntimeInvoker_t135_t110, t6670_m35835_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35835_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t135_0_0_0;
static ParameterInfo t6670_m35836_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t135_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35836_GM;
MethodInfo m35836_MI = 
{
	"set_Item", NULL, &t6670_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6670_m35836_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35836_GM};
static MethodInfo* t6670_MIs[] =
{
	&m35837_MI,
	&m35838_MI,
	&m35839_MI,
	&m35835_MI,
	&m35836_MI,
	NULL
};
static TypeInfo* t6670_ITIs[] = 
{
	&t739_TI,
	&t6669_TI,
	&t6671_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6670_0_0_0;
extern Il2CppType t6670_1_0_0;
struct t6670;
extern Il2CppGenericClass t6670_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6670_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6670_MIs, t6670_PIs, NULL, NULL, NULL, NULL, NULL, &t6670_TI, t6670_ITIs, NULL, &t2240__CustomAttributeCache, &t6670_TI, &t6670_0_0_0, &t6670_1_0_0, NULL, &t6670_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5288_TI;

#include "t978.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.MonoTODOAttribute>
extern MethodInfo m35840_MI;
static PropertyInfo t5288____Current_PropertyInfo = 
{
	&t5288_TI, "Current", &m35840_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5288_PIs[] =
{
	&t5288____Current_PropertyInfo,
	NULL
};
extern Il2CppType t978_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35840_GM;
MethodInfo m35840_MI = 
{
	"get_Current", NULL, &t5288_TI, &t978_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35840_GM};
static MethodInfo* t5288_MIs[] =
{
	&m35840_MI,
	NULL
};
static TypeInfo* t5288_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5288_0_0_0;
extern Il2CppType t5288_1_0_0;
struct t5288;
extern Il2CppGenericClass t5288_GC;
TypeInfo t5288_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5288_MIs, t5288_PIs, NULL, NULL, NULL, NULL, NULL, &t5288_TI, t5288_ITIs, NULL, &EmptyCustomAttributesCache, &t5288_TI, &t5288_0_0_0, &t5288_1_0_0, NULL, &t5288_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3817.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3817_TI;
#include "t3817MD.h"

extern TypeInfo t978_TI;
extern MethodInfo m21774_MI;
extern MethodInfo m27932_MI;
struct t107;
#define m27932(__this, p0, method) (t978 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.MonoTODOAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3817_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3817_TI, offsetof(t3817, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3817_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3817_TI, offsetof(t3817, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3817_FIs[] =
{
	&t3817_f0_FieldInfo,
	&t3817_f1_FieldInfo,
	NULL
};
extern MethodInfo m21771_MI;
static PropertyInfo t3817____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3817_TI, "System.Collections.IEnumerator.Current", &m21771_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3817____Current_PropertyInfo = 
{
	&t3817_TI, "Current", &m21774_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3817_PIs[] =
{
	&t3817____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3817____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3817_m21770_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21770_GM;
MethodInfo m21770_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3817_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3817_m21770_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21770_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21771_GM;
MethodInfo m21771_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3817_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21771_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21772_GM;
MethodInfo m21772_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3817_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21772_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21773_GM;
MethodInfo m21773_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3817_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21773_GM};
extern Il2CppType t978_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21774_GM;
MethodInfo m21774_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3817_TI, &t978_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21774_GM};
static MethodInfo* t3817_MIs[] =
{
	&m21770_MI,
	&m21771_MI,
	&m21772_MI,
	&m21773_MI,
	&m21774_MI,
	NULL
};
extern MethodInfo m21773_MI;
extern MethodInfo m21772_MI;
static MethodInfo* t3817_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21771_MI,
	&m21773_MI,
	&m21772_MI,
	&m21774_MI,
};
static TypeInfo* t3817_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5288_TI,
};
static Il2CppInterfaceOffsetPair t3817_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5288_TI, 7},
};
extern TypeInfo t978_TI;
static Il2CppRGCTXData t3817_RGCTXData[3] = 
{
	&m21774_MI/* Method Usage */,
	&t978_TI/* Class Usage */,
	&m27932_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3817_0_0_0;
extern Il2CppType t3817_1_0_0;
extern Il2CppGenericClass t3817_GC;
TypeInfo t3817_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3817_MIs, t3817_PIs, t3817_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3817_TI, t3817_ITIs, t3817_VT, &EmptyCustomAttributesCache, &t3817_TI, &t3817_0_0_0, &t3817_1_0_0, t3817_IOs, &t3817_GC, NULL, NULL, NULL, t3817_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3817)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6672_TI;

#include "System_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>
extern MethodInfo m35841_MI;
static PropertyInfo t6672____Count_PropertyInfo = 
{
	&t6672_TI, "Count", &m35841_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35842_MI;
static PropertyInfo t6672____IsReadOnly_PropertyInfo = 
{
	&t6672_TI, "IsReadOnly", &m35842_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6672_PIs[] =
{
	&t6672____Count_PropertyInfo,
	&t6672____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35841_GM;
MethodInfo m35841_MI = 
{
	"get_Count", NULL, &t6672_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35841_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35842_GM;
MethodInfo m35842_MI = 
{
	"get_IsReadOnly", NULL, &t6672_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35842_GM};
extern Il2CppType t978_0_0_0;
extern Il2CppType t978_0_0_0;
static ParameterInfo t6672_m35843_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t978_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35843_GM;
MethodInfo m35843_MI = 
{
	"Add", NULL, &t6672_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6672_m35843_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35843_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35844_GM;
MethodInfo m35844_MI = 
{
	"Clear", NULL, &t6672_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35844_GM};
extern Il2CppType t978_0_0_0;
static ParameterInfo t6672_m35845_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t978_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35845_GM;
MethodInfo m35845_MI = 
{
	"Contains", NULL, &t6672_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6672_m35845_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35845_GM};
extern Il2CppType t4572_0_0_0;
extern Il2CppType t4572_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6672_m35846_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4572_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35846_GM;
MethodInfo m35846_MI = 
{
	"CopyTo", NULL, &t6672_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6672_m35846_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35846_GM};
extern Il2CppType t978_0_0_0;
static ParameterInfo t6672_m35847_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t978_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35847_GM;
MethodInfo m35847_MI = 
{
	"Remove", NULL, &t6672_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6672_m35847_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35847_GM};
static MethodInfo* t6672_MIs[] =
{
	&m35841_MI,
	&m35842_MI,
	&m35843_MI,
	&m35844_MI,
	&m35845_MI,
	&m35846_MI,
	&m35847_MI,
	NULL
};
extern TypeInfo t6674_TI;
static TypeInfo* t6672_ITIs[] = 
{
	&t739_TI,
	&t6674_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6672_0_0_0;
extern Il2CppType t6672_1_0_0;
struct t6672;
extern Il2CppGenericClass t6672_GC;
TypeInfo t6672_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6672_MIs, t6672_PIs, NULL, NULL, NULL, NULL, NULL, &t6672_TI, t6672_ITIs, NULL, &EmptyCustomAttributesCache, &t6672_TI, &t6672_0_0_0, &t6672_1_0_0, NULL, &t6672_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.MonoTODOAttribute>
extern Il2CppType t5288_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35848_GM;
MethodInfo m35848_MI = 
{
	"GetEnumerator", NULL, &t6674_TI, &t5288_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35848_GM};
static MethodInfo* t6674_MIs[] =
{
	&m35848_MI,
	NULL
};
static TypeInfo* t6674_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6674_0_0_0;
extern Il2CppType t6674_1_0_0;
struct t6674;
extern Il2CppGenericClass t6674_GC;
TypeInfo t6674_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6674_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6674_TI, t6674_ITIs, NULL, &EmptyCustomAttributesCache, &t6674_TI, &t6674_0_0_0, &t6674_1_0_0, NULL, &t6674_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6673_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.MonoTODOAttribute>
extern MethodInfo m35849_MI;
extern MethodInfo m35850_MI;
static PropertyInfo t6673____Item_PropertyInfo = 
{
	&t6673_TI, "Item", &m35849_MI, &m35850_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6673_PIs[] =
{
	&t6673____Item_PropertyInfo,
	NULL
};
extern Il2CppType t978_0_0_0;
static ParameterInfo t6673_m35851_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t978_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35851_GM;
MethodInfo m35851_MI = 
{
	"IndexOf", NULL, &t6673_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6673_m35851_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35851_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t978_0_0_0;
static ParameterInfo t6673_m35852_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t978_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35852_GM;
MethodInfo m35852_MI = 
{
	"Insert", NULL, &t6673_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6673_m35852_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35852_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6673_m35853_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35853_GM;
MethodInfo m35853_MI = 
{
	"RemoveAt", NULL, &t6673_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6673_m35853_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35853_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6673_m35849_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t978_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35849_GM;
MethodInfo m35849_MI = 
{
	"get_Item", NULL, &t6673_TI, &t978_0_0_0, RuntimeInvoker_t5_t110, t6673_m35849_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35849_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t978_0_0_0;
static ParameterInfo t6673_m35850_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t978_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35850_GM;
MethodInfo m35850_MI = 
{
	"set_Item", NULL, &t6673_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6673_m35850_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35850_GM};
static MethodInfo* t6673_MIs[] =
{
	&m35851_MI,
	&m35852_MI,
	&m35853_MI,
	&m35849_MI,
	&m35850_MI,
	NULL
};
static TypeInfo* t6673_ITIs[] = 
{
	&t739_TI,
	&t6672_TI,
	&t6674_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6673_0_0_0;
extern Il2CppType t6673_1_0_0;
struct t6673;
extern Il2CppGenericClass t6673_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6673_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6673_MIs, t6673_PIs, NULL, NULL, NULL, NULL, NULL, &t6673_TI, t6673_ITIs, NULL, &t2240__CustomAttributeCache, &t6673_TI, &t6673_0_0_0, &t6673_1_0_0, NULL, &t6673_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5290_TI;

#include "t743.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ComponentModel.EditorBrowsableAttribute>
extern MethodInfo m35854_MI;
static PropertyInfo t5290____Current_PropertyInfo = 
{
	&t5290_TI, "Current", &m35854_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5290_PIs[] =
{
	&t5290____Current_PropertyInfo,
	NULL
};
extern Il2CppType t743_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35854_GM;
MethodInfo m35854_MI = 
{
	"get_Current", NULL, &t5290_TI, &t743_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35854_GM};
static MethodInfo* t5290_MIs[] =
{
	&m35854_MI,
	NULL
};
static TypeInfo* t5290_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5290_0_0_0;
extern Il2CppType t5290_1_0_0;
struct t5290;
extern Il2CppGenericClass t5290_GC;
TypeInfo t5290_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5290_MIs, t5290_PIs, NULL, NULL, NULL, NULL, NULL, &t5290_TI, t5290_ITIs, NULL, &EmptyCustomAttributesCache, &t5290_TI, &t5290_0_0_0, &t5290_1_0_0, NULL, &t5290_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3818.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3818_TI;
#include "t3818MD.h"

extern TypeInfo t743_TI;
extern MethodInfo m21779_MI;
extern MethodInfo m27943_MI;
struct t107;
#define m27943(__this, p0, method) (t743 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3818_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3818_TI, offsetof(t3818, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3818_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3818_TI, offsetof(t3818, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3818_FIs[] =
{
	&t3818_f0_FieldInfo,
	&t3818_f1_FieldInfo,
	NULL
};
extern MethodInfo m21776_MI;
static PropertyInfo t3818____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3818_TI, "System.Collections.IEnumerator.Current", &m21776_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3818____Current_PropertyInfo = 
{
	&t3818_TI, "Current", &m21779_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3818_PIs[] =
{
	&t3818____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3818____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3818_m21775_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21775_GM;
MethodInfo m21775_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3818_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3818_m21775_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21775_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21776_GM;
MethodInfo m21776_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3818_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21776_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21777_GM;
MethodInfo m21777_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3818_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21777_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21778_GM;
MethodInfo m21778_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3818_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21778_GM};
extern Il2CppType t743_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21779_GM;
MethodInfo m21779_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3818_TI, &t743_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21779_GM};
static MethodInfo* t3818_MIs[] =
{
	&m21775_MI,
	&m21776_MI,
	&m21777_MI,
	&m21778_MI,
	&m21779_MI,
	NULL
};
extern MethodInfo m21778_MI;
extern MethodInfo m21777_MI;
static MethodInfo* t3818_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21776_MI,
	&m21778_MI,
	&m21777_MI,
	&m21779_MI,
};
static TypeInfo* t3818_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5290_TI,
};
static Il2CppInterfaceOffsetPair t3818_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5290_TI, 7},
};
extern TypeInfo t743_TI;
static Il2CppRGCTXData t3818_RGCTXData[3] = 
{
	&m21779_MI/* Method Usage */,
	&t743_TI/* Class Usage */,
	&m27943_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3818_0_0_0;
extern Il2CppType t3818_1_0_0;
extern Il2CppGenericClass t3818_GC;
TypeInfo t3818_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3818_MIs, t3818_PIs, t3818_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3818_TI, t3818_ITIs, t3818_VT, &EmptyCustomAttributesCache, &t3818_TI, &t3818_0_0_0, &t3818_1_0_0, t3818_IOs, &t3818_GC, NULL, NULL, NULL, t3818_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3818)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6675_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableAttribute>
extern MethodInfo m35855_MI;
static PropertyInfo t6675____Count_PropertyInfo = 
{
	&t6675_TI, "Count", &m35855_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35856_MI;
static PropertyInfo t6675____IsReadOnly_PropertyInfo = 
{
	&t6675_TI, "IsReadOnly", &m35856_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6675_PIs[] =
{
	&t6675____Count_PropertyInfo,
	&t6675____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35855_GM;
MethodInfo m35855_MI = 
{
	"get_Count", NULL, &t6675_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35855_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35856_GM;
MethodInfo m35856_MI = 
{
	"get_IsReadOnly", NULL, &t6675_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35856_GM};
extern Il2CppType t743_0_0_0;
extern Il2CppType t743_0_0_0;
static ParameterInfo t6675_m35857_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t743_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35857_GM;
MethodInfo m35857_MI = 
{
	"Add", NULL, &t6675_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6675_m35857_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35857_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35858_GM;
MethodInfo m35858_MI = 
{
	"Clear", NULL, &t6675_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35858_GM};
extern Il2CppType t743_0_0_0;
static ParameterInfo t6675_m35859_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t743_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35859_GM;
MethodInfo m35859_MI = 
{
	"Contains", NULL, &t6675_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6675_m35859_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35859_GM};
extern Il2CppType t4573_0_0_0;
extern Il2CppType t4573_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6675_m35860_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4573_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35860_GM;
MethodInfo m35860_MI = 
{
	"CopyTo", NULL, &t6675_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6675_m35860_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35860_GM};
extern Il2CppType t743_0_0_0;
static ParameterInfo t6675_m35861_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t743_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35861_GM;
MethodInfo m35861_MI = 
{
	"Remove", NULL, &t6675_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6675_m35861_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35861_GM};
static MethodInfo* t6675_MIs[] =
{
	&m35855_MI,
	&m35856_MI,
	&m35857_MI,
	&m35858_MI,
	&m35859_MI,
	&m35860_MI,
	&m35861_MI,
	NULL
};
extern TypeInfo t6677_TI;
static TypeInfo* t6675_ITIs[] = 
{
	&t739_TI,
	&t6677_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6675_0_0_0;
extern Il2CppType t6675_1_0_0;
struct t6675;
extern Il2CppGenericClass t6675_GC;
TypeInfo t6675_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6675_MIs, t6675_PIs, NULL, NULL, NULL, NULL, NULL, &t6675_TI, t6675_ITIs, NULL, &EmptyCustomAttributesCache, &t6675_TI, &t6675_0_0_0, &t6675_1_0_0, NULL, &t6675_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ComponentModel.EditorBrowsableAttribute>
extern Il2CppType t5290_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35862_GM;
MethodInfo m35862_MI = 
{
	"GetEnumerator", NULL, &t6677_TI, &t5290_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35862_GM};
static MethodInfo* t6677_MIs[] =
{
	&m35862_MI,
	NULL
};
static TypeInfo* t6677_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6677_0_0_0;
extern Il2CppType t6677_1_0_0;
struct t6677;
extern Il2CppGenericClass t6677_GC;
TypeInfo t6677_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6677_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6677_TI, t6677_ITIs, NULL, &EmptyCustomAttributesCache, &t6677_TI, &t6677_0_0_0, &t6677_1_0_0, NULL, &t6677_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6676_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.ComponentModel.EditorBrowsableAttribute>
extern MethodInfo m35863_MI;
extern MethodInfo m35864_MI;
static PropertyInfo t6676____Item_PropertyInfo = 
{
	&t6676_TI, "Item", &m35863_MI, &m35864_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6676_PIs[] =
{
	&t6676____Item_PropertyInfo,
	NULL
};
extern Il2CppType t743_0_0_0;
static ParameterInfo t6676_m35865_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t743_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35865_GM;
MethodInfo m35865_MI = 
{
	"IndexOf", NULL, &t6676_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6676_m35865_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35865_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t743_0_0_0;
static ParameterInfo t6676_m35866_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t743_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35866_GM;
MethodInfo m35866_MI = 
{
	"Insert", NULL, &t6676_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6676_m35866_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35866_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6676_m35867_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35867_GM;
MethodInfo m35867_MI = 
{
	"RemoveAt", NULL, &t6676_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6676_m35867_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35867_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6676_m35863_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t743_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35863_GM;
MethodInfo m35863_MI = 
{
	"get_Item", NULL, &t6676_TI, &t743_0_0_0, RuntimeInvoker_t5_t110, t6676_m35863_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35863_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t743_0_0_0;
static ParameterInfo t6676_m35864_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t743_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35864_GM;
MethodInfo m35864_MI = 
{
	"set_Item", NULL, &t6676_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6676_m35864_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35864_GM};
static MethodInfo* t6676_MIs[] =
{
	&m35865_MI,
	&m35866_MI,
	&m35867_MI,
	&m35863_MI,
	&m35864_MI,
	NULL
};
static TypeInfo* t6676_ITIs[] = 
{
	&t739_TI,
	&t6675_TI,
	&t6677_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6676_0_0_0;
extern Il2CppType t6676_1_0_0;
struct t6676;
extern Il2CppGenericClass t6676_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6676_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6676_MIs, t6676_PIs, NULL, NULL, NULL, NULL, NULL, &t6676_TI, t6676_ITIs, NULL, &t2240__CustomAttributeCache, &t6676_TI, &t6676_0_0_0, &t6676_1_0_0, NULL, &t6676_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5292_TI;

#include "t1000.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ComponentModel.EditorBrowsableState>
extern MethodInfo m35868_MI;
static PropertyInfo t5292____Current_PropertyInfo = 
{
	&t5292_TI, "Current", &m35868_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5292_PIs[] =
{
	&t5292____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1000_0_0_0;
extern void* RuntimeInvoker_t1000 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35868_GM;
MethodInfo m35868_MI = 
{
	"get_Current", NULL, &t5292_TI, &t1000_0_0_0, RuntimeInvoker_t1000, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35868_GM};
static MethodInfo* t5292_MIs[] =
{
	&m35868_MI,
	NULL
};
static TypeInfo* t5292_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5292_0_0_0;
extern Il2CppType t5292_1_0_0;
struct t5292;
extern Il2CppGenericClass t5292_GC;
TypeInfo t5292_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5292_MIs, t5292_PIs, NULL, NULL, NULL, NULL, NULL, &t5292_TI, t5292_ITIs, NULL, &EmptyCustomAttributesCache, &t5292_TI, &t5292_0_0_0, &t5292_1_0_0, NULL, &t5292_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3819.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3819_TI;
#include "t3819MD.h"

extern TypeInfo t1000_TI;
extern MethodInfo m21784_MI;
extern MethodInfo m27954_MI;
struct t107;
 int32_t m27954 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21780_MI;
 void m21780 (t3819 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21781_MI;
 t5 * m21781 (t3819 * __this, MethodInfo* method){
	{
		int32_t L_0 = m21784(__this, &m21784_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1000_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m21782_MI;
 void m21782 (t3819 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21783_MI;
 bool m21783 (t3819 * __this, MethodInfo* method){
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
 int32_t m21784 (t3819 * __this, MethodInfo* method){
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
		int32_t L_8 = m27954(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m27954_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableState>
extern Il2CppType t107_0_0_1;
FieldInfo t3819_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3819_TI, offsetof(t3819, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3819_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3819_TI, offsetof(t3819, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3819_FIs[] =
{
	&t3819_f0_FieldInfo,
	&t3819_f1_FieldInfo,
	NULL
};
static PropertyInfo t3819____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3819_TI, "System.Collections.IEnumerator.Current", &m21781_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3819____Current_PropertyInfo = 
{
	&t3819_TI, "Current", &m21784_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3819_PIs[] =
{
	&t3819____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3819____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3819_m21780_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21780_GM;
MethodInfo m21780_MI = 
{
	".ctor", (methodPointerType)&m21780, &t3819_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3819_m21780_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21780_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21781_GM;
MethodInfo m21781_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21781, &t3819_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21781_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21782_GM;
MethodInfo m21782_MI = 
{
	"Dispose", (methodPointerType)&m21782, &t3819_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21782_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21783_GM;
MethodInfo m21783_MI = 
{
	"MoveNext", (methodPointerType)&m21783, &t3819_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21783_GM};
extern Il2CppType t1000_0_0_0;
extern void* RuntimeInvoker_t1000 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21784_GM;
MethodInfo m21784_MI = 
{
	"get_Current", (methodPointerType)&m21784, &t3819_TI, &t1000_0_0_0, RuntimeInvoker_t1000, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21784_GM};
static MethodInfo* t3819_MIs[] =
{
	&m21780_MI,
	&m21781_MI,
	&m21782_MI,
	&m21783_MI,
	&m21784_MI,
	NULL
};
static MethodInfo* t3819_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21781_MI,
	&m21783_MI,
	&m21782_MI,
	&m21784_MI,
};
static TypeInfo* t3819_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5292_TI,
};
static Il2CppInterfaceOffsetPair t3819_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5292_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3819_0_0_0;
extern Il2CppType t3819_1_0_0;
extern Il2CppGenericClass t3819_GC;
TypeInfo t3819_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3819_MIs, t3819_PIs, t3819_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3819_TI, t3819_ITIs, t3819_VT, &EmptyCustomAttributesCache, &t3819_TI, &t3819_0_0_0, &t3819_1_0_0, t3819_IOs, &t3819_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3819)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6678_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableState>
extern MethodInfo m35869_MI;
static PropertyInfo t6678____Count_PropertyInfo = 
{
	&t6678_TI, "Count", &m35869_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35870_MI;
static PropertyInfo t6678____IsReadOnly_PropertyInfo = 
{
	&t6678_TI, "IsReadOnly", &m35870_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6678_PIs[] =
{
	&t6678____Count_PropertyInfo,
	&t6678____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35869_GM;
MethodInfo m35869_MI = 
{
	"get_Count", NULL, &t6678_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35869_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35870_GM;
MethodInfo m35870_MI = 
{
	"get_IsReadOnly", NULL, &t6678_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35870_GM};
extern Il2CppType t1000_0_0_0;
extern Il2CppType t1000_0_0_0;
static ParameterInfo t6678_m35871_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1000_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35871_GM;
MethodInfo m35871_MI = 
{
	"Add", NULL, &t6678_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6678_m35871_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35871_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35872_GM;
MethodInfo m35872_MI = 
{
	"Clear", NULL, &t6678_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35872_GM};
extern Il2CppType t1000_0_0_0;
static ParameterInfo t6678_m35873_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1000_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35873_GM;
MethodInfo m35873_MI = 
{
	"Contains", NULL, &t6678_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6678_m35873_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35873_GM};
extern Il2CppType t4574_0_0_0;
extern Il2CppType t4574_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6678_m35874_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4574_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35874_GM;
MethodInfo m35874_MI = 
{
	"CopyTo", NULL, &t6678_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6678_m35874_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35874_GM};
extern Il2CppType t1000_0_0_0;
static ParameterInfo t6678_m35875_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1000_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35875_GM;
MethodInfo m35875_MI = 
{
	"Remove", NULL, &t6678_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6678_m35875_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35875_GM};
static MethodInfo* t6678_MIs[] =
{
	&m35869_MI,
	&m35870_MI,
	&m35871_MI,
	&m35872_MI,
	&m35873_MI,
	&m35874_MI,
	&m35875_MI,
	NULL
};
extern TypeInfo t6680_TI;
static TypeInfo* t6678_ITIs[] = 
{
	&t739_TI,
	&t6680_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6678_0_0_0;
extern Il2CppType t6678_1_0_0;
struct t6678;
extern Il2CppGenericClass t6678_GC;
TypeInfo t6678_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6678_MIs, t6678_PIs, NULL, NULL, NULL, NULL, NULL, &t6678_TI, t6678_ITIs, NULL, &EmptyCustomAttributesCache, &t6678_TI, &t6678_0_0_0, &t6678_1_0_0, NULL, &t6678_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ComponentModel.EditorBrowsableState>
extern Il2CppType t5292_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35876_GM;
MethodInfo m35876_MI = 
{
	"GetEnumerator", NULL, &t6680_TI, &t5292_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35876_GM};
static MethodInfo* t6680_MIs[] =
{
	&m35876_MI,
	NULL
};
static TypeInfo* t6680_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6680_0_0_0;
extern Il2CppType t6680_1_0_0;
struct t6680;
extern Il2CppGenericClass t6680_GC;
TypeInfo t6680_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6680_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6680_TI, t6680_ITIs, NULL, &EmptyCustomAttributesCache, &t6680_TI, &t6680_0_0_0, &t6680_1_0_0, NULL, &t6680_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6679_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.ComponentModel.EditorBrowsableState>
extern MethodInfo m35877_MI;
extern MethodInfo m35878_MI;
static PropertyInfo t6679____Item_PropertyInfo = 
{
	&t6679_TI, "Item", &m35877_MI, &m35878_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6679_PIs[] =
{
	&t6679____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1000_0_0_0;
static ParameterInfo t6679_m35879_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1000_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35879_GM;
MethodInfo m35879_MI = 
{
	"IndexOf", NULL, &t6679_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6679_m35879_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35879_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1000_0_0_0;
static ParameterInfo t6679_m35880_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1000_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35880_GM;
MethodInfo m35880_MI = 
{
	"Insert", NULL, &t6679_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6679_m35880_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35880_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6679_m35881_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35881_GM;
MethodInfo m35881_MI = 
{
	"RemoveAt", NULL, &t6679_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6679_m35881_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35881_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6679_m35877_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1000_0_0_0;
extern void* RuntimeInvoker_t1000_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35877_GM;
MethodInfo m35877_MI = 
{
	"get_Item", NULL, &t6679_TI, &t1000_0_0_0, RuntimeInvoker_t1000_t110, t6679_m35877_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35877_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1000_0_0_0;
static ParameterInfo t6679_m35878_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1000_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35878_GM;
MethodInfo m35878_MI = 
{
	"set_Item", NULL, &t6679_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6679_m35878_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35878_GM};
static MethodInfo* t6679_MIs[] =
{
	&m35879_MI,
	&m35880_MI,
	&m35881_MI,
	&m35877_MI,
	&m35878_MI,
	NULL
};
static TypeInfo* t6679_ITIs[] = 
{
	&t739_TI,
	&t6678_TI,
	&t6680_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6679_0_0_0;
extern Il2CppType t6679_1_0_0;
struct t6679;
extern Il2CppGenericClass t6679_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6679_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6679_MIs, t6679_PIs, NULL, NULL, NULL, NULL, NULL, &t6679_TI, t6679_ITIs, NULL, &t2240__CustomAttributeCache, &t6679_TI, &t6679_0_0_0, &t6679_1_0_0, NULL, &t6679_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5294_TI;

#include "t1002.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ComponentModel.TypeConverterAttribute>
extern MethodInfo m35882_MI;
static PropertyInfo t5294____Current_PropertyInfo = 
{
	&t5294_TI, "Current", &m35882_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5294_PIs[] =
{
	&t5294____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1002_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35882_GM;
MethodInfo m35882_MI = 
{
	"get_Current", NULL, &t5294_TI, &t1002_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35882_GM};
static MethodInfo* t5294_MIs[] =
{
	&m35882_MI,
	NULL
};
static TypeInfo* t5294_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5294_0_0_0;
extern Il2CppType t5294_1_0_0;
struct t5294;
extern Il2CppGenericClass t5294_GC;
TypeInfo t5294_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5294_MIs, t5294_PIs, NULL, NULL, NULL, NULL, NULL, &t5294_TI, t5294_ITIs, NULL, &EmptyCustomAttributesCache, &t5294_TI, &t5294_0_0_0, &t5294_1_0_0, NULL, &t5294_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3820.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3820_TI;
#include "t3820MD.h"

extern TypeInfo t1002_TI;
extern MethodInfo m21789_MI;
extern MethodInfo m27965_MI;
struct t107;
#define m27965(__this, p0, method) (t1002 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.ComponentModel.TypeConverterAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3820_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3820_TI, offsetof(t3820, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3820_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3820_TI, offsetof(t3820, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3820_FIs[] =
{
	&t3820_f0_FieldInfo,
	&t3820_f1_FieldInfo,
	NULL
};
extern MethodInfo m21786_MI;
static PropertyInfo t3820____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3820_TI, "System.Collections.IEnumerator.Current", &m21786_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3820____Current_PropertyInfo = 
{
	&t3820_TI, "Current", &m21789_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3820_PIs[] =
{
	&t3820____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3820____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3820_m21785_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21785_GM;
MethodInfo m21785_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3820_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3820_m21785_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21785_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21786_GM;
MethodInfo m21786_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3820_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21786_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21787_GM;
MethodInfo m21787_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3820_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21787_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21788_GM;
MethodInfo m21788_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3820_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21788_GM};
extern Il2CppType t1002_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21789_GM;
MethodInfo m21789_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3820_TI, &t1002_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21789_GM};
static MethodInfo* t3820_MIs[] =
{
	&m21785_MI,
	&m21786_MI,
	&m21787_MI,
	&m21788_MI,
	&m21789_MI,
	NULL
};
extern MethodInfo m21788_MI;
extern MethodInfo m21787_MI;
static MethodInfo* t3820_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21786_MI,
	&m21788_MI,
	&m21787_MI,
	&m21789_MI,
};
static TypeInfo* t3820_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5294_TI,
};
static Il2CppInterfaceOffsetPair t3820_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5294_TI, 7},
};
extern TypeInfo t1002_TI;
static Il2CppRGCTXData t3820_RGCTXData[3] = 
{
	&m21789_MI/* Method Usage */,
	&t1002_TI/* Class Usage */,
	&m27965_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3820_0_0_0;
extern Il2CppType t3820_1_0_0;
extern Il2CppGenericClass t3820_GC;
TypeInfo t3820_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3820_MIs, t3820_PIs, t3820_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3820_TI, t3820_ITIs, t3820_VT, &EmptyCustomAttributesCache, &t3820_TI, &t3820_0_0_0, &t3820_1_0_0, t3820_IOs, &t3820_GC, NULL, NULL, NULL, t3820_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3820)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6681_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.ComponentModel.TypeConverterAttribute>
extern MethodInfo m35883_MI;
static PropertyInfo t6681____Count_PropertyInfo = 
{
	&t6681_TI, "Count", &m35883_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35884_MI;
static PropertyInfo t6681____IsReadOnly_PropertyInfo = 
{
	&t6681_TI, "IsReadOnly", &m35884_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6681_PIs[] =
{
	&t6681____Count_PropertyInfo,
	&t6681____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35883_GM;
MethodInfo m35883_MI = 
{
	"get_Count", NULL, &t6681_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35883_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35884_GM;
MethodInfo m35884_MI = 
{
	"get_IsReadOnly", NULL, &t6681_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35884_GM};
extern Il2CppType t1002_0_0_0;
extern Il2CppType t1002_0_0_0;
static ParameterInfo t6681_m35885_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1002_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35885_GM;
MethodInfo m35885_MI = 
{
	"Add", NULL, &t6681_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6681_m35885_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35885_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35886_GM;
MethodInfo m35886_MI = 
{
	"Clear", NULL, &t6681_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35886_GM};
extern Il2CppType t1002_0_0_0;
static ParameterInfo t6681_m35887_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1002_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35887_GM;
MethodInfo m35887_MI = 
{
	"Contains", NULL, &t6681_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6681_m35887_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35887_GM};
extern Il2CppType t4575_0_0_0;
extern Il2CppType t4575_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6681_m35888_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4575_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35888_GM;
MethodInfo m35888_MI = 
{
	"CopyTo", NULL, &t6681_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6681_m35888_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35888_GM};
extern Il2CppType t1002_0_0_0;
static ParameterInfo t6681_m35889_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1002_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35889_GM;
MethodInfo m35889_MI = 
{
	"Remove", NULL, &t6681_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6681_m35889_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35889_GM};
static MethodInfo* t6681_MIs[] =
{
	&m35883_MI,
	&m35884_MI,
	&m35885_MI,
	&m35886_MI,
	&m35887_MI,
	&m35888_MI,
	&m35889_MI,
	NULL
};
extern TypeInfo t6683_TI;
static TypeInfo* t6681_ITIs[] = 
{
	&t739_TI,
	&t6683_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6681_0_0_0;
extern Il2CppType t6681_1_0_0;
struct t6681;
extern Il2CppGenericClass t6681_GC;
TypeInfo t6681_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6681_MIs, t6681_PIs, NULL, NULL, NULL, NULL, NULL, &t6681_TI, t6681_ITIs, NULL, &EmptyCustomAttributesCache, &t6681_TI, &t6681_0_0_0, &t6681_1_0_0, NULL, &t6681_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ComponentModel.TypeConverterAttribute>
extern Il2CppType t5294_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35890_GM;
MethodInfo m35890_MI = 
{
	"GetEnumerator", NULL, &t6683_TI, &t5294_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35890_GM};
static MethodInfo* t6683_MIs[] =
{
	&m35890_MI,
	NULL
};
static TypeInfo* t6683_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6683_0_0_0;
extern Il2CppType t6683_1_0_0;
struct t6683;
extern Il2CppGenericClass t6683_GC;
TypeInfo t6683_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6683_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6683_TI, t6683_ITIs, NULL, &EmptyCustomAttributesCache, &t6683_TI, &t6683_0_0_0, &t6683_1_0_0, NULL, &t6683_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6682_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.ComponentModel.TypeConverterAttribute>
extern MethodInfo m35891_MI;
extern MethodInfo m35892_MI;
static PropertyInfo t6682____Item_PropertyInfo = 
{
	&t6682_TI, "Item", &m35891_MI, &m35892_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6682_PIs[] =
{
	&t6682____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1002_0_0_0;
static ParameterInfo t6682_m35893_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1002_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35893_GM;
MethodInfo m35893_MI = 
{
	"IndexOf", NULL, &t6682_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6682_m35893_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35893_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1002_0_0_0;
static ParameterInfo t6682_m35894_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1002_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35894_GM;
MethodInfo m35894_MI = 
{
	"Insert", NULL, &t6682_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6682_m35894_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35894_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6682_m35895_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35895_GM;
MethodInfo m35895_MI = 
{
	"RemoveAt", NULL, &t6682_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6682_m35895_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35895_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6682_m35891_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1002_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35891_GM;
MethodInfo m35891_MI = 
{
	"get_Item", NULL, &t6682_TI, &t1002_0_0_0, RuntimeInvoker_t5_t110, t6682_m35891_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35891_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1002_0_0_0;
static ParameterInfo t6682_m35892_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1002_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35892_GM;
MethodInfo m35892_MI = 
{
	"set_Item", NULL, &t6682_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6682_m35892_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35892_GM};
static MethodInfo* t6682_MIs[] =
{
	&m35893_MI,
	&m35894_MI,
	&m35895_MI,
	&m35891_MI,
	&m35892_MI,
	NULL
};
static TypeInfo* t6682_ITIs[] = 
{
	&t739_TI,
	&t6681_TI,
	&t6683_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6682_0_0_0;
extern Il2CppType t6682_1_0_0;
struct t6682;
extern Il2CppGenericClass t6682_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6682_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6682_MIs, t6682_PIs, NULL, NULL, NULL, NULL, NULL, &t6682_TI, t6682_ITIs, NULL, &t2240__CustomAttributeCache, &t6682_TI, &t6682_0_0_0, &t6682_1_0_0, NULL, &t6682_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5296_TI;

#include "t1003.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Net.Security.AuthenticationLevel>
extern MethodInfo m35896_MI;
static PropertyInfo t5296____Current_PropertyInfo = 
{
	&t5296_TI, "Current", &m35896_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5296_PIs[] =
{
	&t5296____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1003_0_0_0;
extern void* RuntimeInvoker_t1003 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35896_GM;
MethodInfo m35896_MI = 
{
	"get_Current", NULL, &t5296_TI, &t1003_0_0_0, RuntimeInvoker_t1003, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35896_GM};
static MethodInfo* t5296_MIs[] =
{
	&m35896_MI,
	NULL
};
static TypeInfo* t5296_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5296_0_0_0;
extern Il2CppType t5296_1_0_0;
struct t5296;
extern Il2CppGenericClass t5296_GC;
TypeInfo t5296_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5296_MIs, t5296_PIs, NULL, NULL, NULL, NULL, NULL, &t5296_TI, t5296_ITIs, NULL, &EmptyCustomAttributesCache, &t5296_TI, &t5296_0_0_0, &t5296_1_0_0, NULL, &t5296_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3821.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3821_TI;
#include "t3821MD.h"

extern TypeInfo t1003_TI;
extern MethodInfo m21794_MI;
extern MethodInfo m27976_MI;
struct t107;
 int32_t m27976 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21790_MI;
 void m21790 (t3821 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21791_MI;
 t5 * m21791 (t3821 * __this, MethodInfo* method){
	{
		int32_t L_0 = m21794(__this, &m21794_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1003_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m21792_MI;
 void m21792 (t3821 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21793_MI;
 bool m21793 (t3821 * __this, MethodInfo* method){
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
 int32_t m21794 (t3821 * __this, MethodInfo* method){
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
		int32_t L_8 = m27976(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m27976_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Net.Security.AuthenticationLevel>
extern Il2CppType t107_0_0_1;
FieldInfo t3821_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3821_TI, offsetof(t3821, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3821_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3821_TI, offsetof(t3821, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3821_FIs[] =
{
	&t3821_f0_FieldInfo,
	&t3821_f1_FieldInfo,
	NULL
};
static PropertyInfo t3821____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3821_TI, "System.Collections.IEnumerator.Current", &m21791_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3821____Current_PropertyInfo = 
{
	&t3821_TI, "Current", &m21794_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3821_PIs[] =
{
	&t3821____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3821____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3821_m21790_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21790_GM;
MethodInfo m21790_MI = 
{
	".ctor", (methodPointerType)&m21790, &t3821_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3821_m21790_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21790_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21791_GM;
MethodInfo m21791_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21791, &t3821_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21791_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21792_GM;
MethodInfo m21792_MI = 
{
	"Dispose", (methodPointerType)&m21792, &t3821_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21792_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21793_GM;
MethodInfo m21793_MI = 
{
	"MoveNext", (methodPointerType)&m21793, &t3821_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21793_GM};
extern Il2CppType t1003_0_0_0;
extern void* RuntimeInvoker_t1003 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21794_GM;
MethodInfo m21794_MI = 
{
	"get_Current", (methodPointerType)&m21794, &t3821_TI, &t1003_0_0_0, RuntimeInvoker_t1003, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21794_GM};
static MethodInfo* t3821_MIs[] =
{
	&m21790_MI,
	&m21791_MI,
	&m21792_MI,
	&m21793_MI,
	&m21794_MI,
	NULL
};
static MethodInfo* t3821_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21791_MI,
	&m21793_MI,
	&m21792_MI,
	&m21794_MI,
};
static TypeInfo* t3821_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5296_TI,
};
static Il2CppInterfaceOffsetPair t3821_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5296_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3821_0_0_0;
extern Il2CppType t3821_1_0_0;
extern Il2CppGenericClass t3821_GC;
TypeInfo t3821_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3821_MIs, t3821_PIs, t3821_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3821_TI, t3821_ITIs, t3821_VT, &EmptyCustomAttributesCache, &t3821_TI, &t3821_0_0_0, &t3821_1_0_0, t3821_IOs, &t3821_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3821)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6684_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Net.Security.AuthenticationLevel>
extern MethodInfo m35897_MI;
static PropertyInfo t6684____Count_PropertyInfo = 
{
	&t6684_TI, "Count", &m35897_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35898_MI;
static PropertyInfo t6684____IsReadOnly_PropertyInfo = 
{
	&t6684_TI, "IsReadOnly", &m35898_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6684_PIs[] =
{
	&t6684____Count_PropertyInfo,
	&t6684____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35897_GM;
MethodInfo m35897_MI = 
{
	"get_Count", NULL, &t6684_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35897_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35898_GM;
MethodInfo m35898_MI = 
{
	"get_IsReadOnly", NULL, &t6684_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35898_GM};
extern Il2CppType t1003_0_0_0;
extern Il2CppType t1003_0_0_0;
static ParameterInfo t6684_m35899_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1003_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35899_GM;
MethodInfo m35899_MI = 
{
	"Add", NULL, &t6684_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6684_m35899_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35899_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35900_GM;
MethodInfo m35900_MI = 
{
	"Clear", NULL, &t6684_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35900_GM};
extern Il2CppType t1003_0_0_0;
static ParameterInfo t6684_m35901_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1003_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35901_GM;
MethodInfo m35901_MI = 
{
	"Contains", NULL, &t6684_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6684_m35901_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35901_GM};
extern Il2CppType t4576_0_0_0;
extern Il2CppType t4576_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6684_m35902_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4576_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35902_GM;
MethodInfo m35902_MI = 
{
	"CopyTo", NULL, &t6684_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6684_m35902_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35902_GM};
extern Il2CppType t1003_0_0_0;
static ParameterInfo t6684_m35903_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1003_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35903_GM;
MethodInfo m35903_MI = 
{
	"Remove", NULL, &t6684_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6684_m35903_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35903_GM};
static MethodInfo* t6684_MIs[] =
{
	&m35897_MI,
	&m35898_MI,
	&m35899_MI,
	&m35900_MI,
	&m35901_MI,
	&m35902_MI,
	&m35903_MI,
	NULL
};
extern TypeInfo t6686_TI;
static TypeInfo* t6684_ITIs[] = 
{
	&t739_TI,
	&t6686_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6684_0_0_0;
extern Il2CppType t6684_1_0_0;
struct t6684;
extern Il2CppGenericClass t6684_GC;
TypeInfo t6684_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6684_MIs, t6684_PIs, NULL, NULL, NULL, NULL, NULL, &t6684_TI, t6684_ITIs, NULL, &EmptyCustomAttributesCache, &t6684_TI, &t6684_0_0_0, &t6684_1_0_0, NULL, &t6684_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Net.Security.AuthenticationLevel>
extern Il2CppType t5296_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35904_GM;
MethodInfo m35904_MI = 
{
	"GetEnumerator", NULL, &t6686_TI, &t5296_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35904_GM};
static MethodInfo* t6686_MIs[] =
{
	&m35904_MI,
	NULL
};
static TypeInfo* t6686_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6686_0_0_0;
extern Il2CppType t6686_1_0_0;
struct t6686;
extern Il2CppGenericClass t6686_GC;
TypeInfo t6686_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6686_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6686_TI, t6686_ITIs, NULL, &EmptyCustomAttributesCache, &t6686_TI, &t6686_0_0_0, &t6686_1_0_0, NULL, &t6686_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6685_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Net.Security.AuthenticationLevel>
extern MethodInfo m35905_MI;
extern MethodInfo m35906_MI;
static PropertyInfo t6685____Item_PropertyInfo = 
{
	&t6685_TI, "Item", &m35905_MI, &m35906_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6685_PIs[] =
{
	&t6685____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1003_0_0_0;
static ParameterInfo t6685_m35907_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1003_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35907_GM;
MethodInfo m35907_MI = 
{
	"IndexOf", NULL, &t6685_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6685_m35907_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35907_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1003_0_0_0;
static ParameterInfo t6685_m35908_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1003_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35908_GM;
MethodInfo m35908_MI = 
{
	"Insert", NULL, &t6685_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6685_m35908_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35908_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6685_m35909_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35909_GM;
MethodInfo m35909_MI = 
{
	"RemoveAt", NULL, &t6685_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6685_m35909_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35909_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6685_m35905_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1003_0_0_0;
extern void* RuntimeInvoker_t1003_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35905_GM;
MethodInfo m35905_MI = 
{
	"get_Item", NULL, &t6685_TI, &t1003_0_0_0, RuntimeInvoker_t1003_t110, t6685_m35905_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35905_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1003_0_0_0;
static ParameterInfo t6685_m35906_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1003_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35906_GM;
MethodInfo m35906_MI = 
{
	"set_Item", NULL, &t6685_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6685_m35906_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35906_GM};
static MethodInfo* t6685_MIs[] =
{
	&m35907_MI,
	&m35908_MI,
	&m35909_MI,
	&m35905_MI,
	&m35906_MI,
	NULL
};
static TypeInfo* t6685_ITIs[] = 
{
	&t739_TI,
	&t6684_TI,
	&t6686_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6685_0_0_0;
extern Il2CppType t6685_1_0_0;
struct t6685;
extern Il2CppGenericClass t6685_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6685_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6685_MIs, t6685_PIs, NULL, NULL, NULL, NULL, NULL, &t6685_TI, t6685_ITIs, NULL, &t2240__CustomAttributeCache, &t6685_TI, &t6685_0_0_0, &t6685_1_0_0, NULL, &t6685_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5298_TI;

#include "t1004.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Net.Security.SslPolicyErrors>
extern MethodInfo m35910_MI;
static PropertyInfo t5298____Current_PropertyInfo = 
{
	&t5298_TI, "Current", &m35910_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5298_PIs[] =
{
	&t5298____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1004_0_0_0;
extern void* RuntimeInvoker_t1004 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35910_GM;
MethodInfo m35910_MI = 
{
	"get_Current", NULL, &t5298_TI, &t1004_0_0_0, RuntimeInvoker_t1004, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35910_GM};
static MethodInfo* t5298_MIs[] =
{
	&m35910_MI,
	NULL
};
static TypeInfo* t5298_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5298_0_0_0;
extern Il2CppType t5298_1_0_0;
struct t5298;
extern Il2CppGenericClass t5298_GC;
TypeInfo t5298_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5298_MIs, t5298_PIs, NULL, NULL, NULL, NULL, NULL, &t5298_TI, t5298_ITIs, NULL, &EmptyCustomAttributesCache, &t5298_TI, &t5298_0_0_0, &t5298_1_0_0, NULL, &t5298_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3822.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3822_TI;
#include "t3822MD.h"

extern TypeInfo t1004_TI;
extern MethodInfo m21799_MI;
extern MethodInfo m27987_MI;
struct t107;
 int32_t m27987 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21795_MI;
 void m21795 (t3822 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21796_MI;
 t5 * m21796 (t3822 * __this, MethodInfo* method){
	{
		int32_t L_0 = m21799(__this, &m21799_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1004_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m21797_MI;
 void m21797 (t3822 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21798_MI;
 bool m21798 (t3822 * __this, MethodInfo* method){
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
 int32_t m21799 (t3822 * __this, MethodInfo* method){
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
		int32_t L_8 = m27987(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m27987_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Net.Security.SslPolicyErrors>
extern Il2CppType t107_0_0_1;
FieldInfo t3822_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3822_TI, offsetof(t3822, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3822_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3822_TI, offsetof(t3822, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3822_FIs[] =
{
	&t3822_f0_FieldInfo,
	&t3822_f1_FieldInfo,
	NULL
};
static PropertyInfo t3822____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3822_TI, "System.Collections.IEnumerator.Current", &m21796_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3822____Current_PropertyInfo = 
{
	&t3822_TI, "Current", &m21799_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3822_PIs[] =
{
	&t3822____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3822____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3822_m21795_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21795_GM;
MethodInfo m21795_MI = 
{
	".ctor", (methodPointerType)&m21795, &t3822_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3822_m21795_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21795_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21796_GM;
MethodInfo m21796_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21796, &t3822_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21796_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21797_GM;
MethodInfo m21797_MI = 
{
	"Dispose", (methodPointerType)&m21797, &t3822_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21797_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21798_GM;
MethodInfo m21798_MI = 
{
	"MoveNext", (methodPointerType)&m21798, &t3822_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21798_GM};
extern Il2CppType t1004_0_0_0;
extern void* RuntimeInvoker_t1004 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21799_GM;
MethodInfo m21799_MI = 
{
	"get_Current", (methodPointerType)&m21799, &t3822_TI, &t1004_0_0_0, RuntimeInvoker_t1004, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21799_GM};
static MethodInfo* t3822_MIs[] =
{
	&m21795_MI,
	&m21796_MI,
	&m21797_MI,
	&m21798_MI,
	&m21799_MI,
	NULL
};
static MethodInfo* t3822_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21796_MI,
	&m21798_MI,
	&m21797_MI,
	&m21799_MI,
};
static TypeInfo* t3822_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5298_TI,
};
static Il2CppInterfaceOffsetPair t3822_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5298_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3822_0_0_0;
extern Il2CppType t3822_1_0_0;
extern Il2CppGenericClass t3822_GC;
TypeInfo t3822_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3822_MIs, t3822_PIs, t3822_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3822_TI, t3822_ITIs, t3822_VT, &EmptyCustomAttributesCache, &t3822_TI, &t3822_0_0_0, &t3822_1_0_0, t3822_IOs, &t3822_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3822)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6687_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Net.Security.SslPolicyErrors>
extern MethodInfo m35911_MI;
static PropertyInfo t6687____Count_PropertyInfo = 
{
	&t6687_TI, "Count", &m35911_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35912_MI;
static PropertyInfo t6687____IsReadOnly_PropertyInfo = 
{
	&t6687_TI, "IsReadOnly", &m35912_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6687_PIs[] =
{
	&t6687____Count_PropertyInfo,
	&t6687____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35911_GM;
MethodInfo m35911_MI = 
{
	"get_Count", NULL, &t6687_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35911_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35912_GM;
MethodInfo m35912_MI = 
{
	"get_IsReadOnly", NULL, &t6687_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35912_GM};
extern Il2CppType t1004_0_0_0;
extern Il2CppType t1004_0_0_0;
static ParameterInfo t6687_m35913_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1004_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35913_GM;
MethodInfo m35913_MI = 
{
	"Add", NULL, &t6687_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6687_m35913_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35913_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35914_GM;
MethodInfo m35914_MI = 
{
	"Clear", NULL, &t6687_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35914_GM};
extern Il2CppType t1004_0_0_0;
static ParameterInfo t6687_m35915_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1004_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35915_GM;
MethodInfo m35915_MI = 
{
	"Contains", NULL, &t6687_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6687_m35915_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35915_GM};
extern Il2CppType t4577_0_0_0;
extern Il2CppType t4577_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6687_m35916_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4577_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35916_GM;
MethodInfo m35916_MI = 
{
	"CopyTo", NULL, &t6687_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6687_m35916_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35916_GM};
extern Il2CppType t1004_0_0_0;
static ParameterInfo t6687_m35917_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1004_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35917_GM;
MethodInfo m35917_MI = 
{
	"Remove", NULL, &t6687_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6687_m35917_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35917_GM};
static MethodInfo* t6687_MIs[] =
{
	&m35911_MI,
	&m35912_MI,
	&m35913_MI,
	&m35914_MI,
	&m35915_MI,
	&m35916_MI,
	&m35917_MI,
	NULL
};
extern TypeInfo t6689_TI;
static TypeInfo* t6687_ITIs[] = 
{
	&t739_TI,
	&t6689_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6687_0_0_0;
extern Il2CppType t6687_1_0_0;
struct t6687;
extern Il2CppGenericClass t6687_GC;
TypeInfo t6687_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6687_MIs, t6687_PIs, NULL, NULL, NULL, NULL, NULL, &t6687_TI, t6687_ITIs, NULL, &EmptyCustomAttributesCache, &t6687_TI, &t6687_0_0_0, &t6687_1_0_0, NULL, &t6687_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Net.Security.SslPolicyErrors>
extern Il2CppType t5298_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35918_GM;
MethodInfo m35918_MI = 
{
	"GetEnumerator", NULL, &t6689_TI, &t5298_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35918_GM};
static MethodInfo* t6689_MIs[] =
{
	&m35918_MI,
	NULL
};
static TypeInfo* t6689_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6689_0_0_0;
extern Il2CppType t6689_1_0_0;
struct t6689;
extern Il2CppGenericClass t6689_GC;
TypeInfo t6689_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6689_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6689_TI, t6689_ITIs, NULL, &EmptyCustomAttributesCache, &t6689_TI, &t6689_0_0_0, &t6689_1_0_0, NULL, &t6689_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6688_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Net.Security.SslPolicyErrors>
extern MethodInfo m35919_MI;
extern MethodInfo m35920_MI;
static PropertyInfo t6688____Item_PropertyInfo = 
{
	&t6688_TI, "Item", &m35919_MI, &m35920_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6688_PIs[] =
{
	&t6688____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1004_0_0_0;
static ParameterInfo t6688_m35921_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1004_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35921_GM;
MethodInfo m35921_MI = 
{
	"IndexOf", NULL, &t6688_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6688_m35921_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35921_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1004_0_0_0;
static ParameterInfo t6688_m35922_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1004_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35922_GM;
MethodInfo m35922_MI = 
{
	"Insert", NULL, &t6688_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6688_m35922_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35922_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6688_m35923_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35923_GM;
MethodInfo m35923_MI = 
{
	"RemoveAt", NULL, &t6688_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6688_m35923_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35923_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6688_m35919_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1004_0_0_0;
extern void* RuntimeInvoker_t1004_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35919_GM;
MethodInfo m35919_MI = 
{
	"get_Item", NULL, &t6688_TI, &t1004_0_0_0, RuntimeInvoker_t1004_t110, t6688_m35919_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35919_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1004_0_0_0;
static ParameterInfo t6688_m35920_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1004_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35920_GM;
MethodInfo m35920_MI = 
{
	"set_Item", NULL, &t6688_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6688_m35920_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35920_GM};
static MethodInfo* t6688_MIs[] =
{
	&m35921_MI,
	&m35922_MI,
	&m35923_MI,
	&m35919_MI,
	&m35920_MI,
	NULL
};
static TypeInfo* t6688_ITIs[] = 
{
	&t739_TI,
	&t6687_TI,
	&t6689_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6688_0_0_0;
extern Il2CppType t6688_1_0_0;
struct t6688;
extern Il2CppGenericClass t6688_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6688_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6688_MIs, t6688_PIs, NULL, NULL, NULL, NULL, NULL, &t6688_TI, t6688_ITIs, NULL, &t2240__CustomAttributeCache, &t6688_TI, &t6688_0_0_0, &t6688_1_0_0, NULL, &t6688_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5300_TI;

#include "t1005.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Net.Sockets.AddressFamily>
extern MethodInfo m35924_MI;
static PropertyInfo t5300____Current_PropertyInfo = 
{
	&t5300_TI, "Current", &m35924_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5300_PIs[] =
{
	&t5300____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1005_0_0_0;
extern void* RuntimeInvoker_t1005 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35924_GM;
MethodInfo m35924_MI = 
{
	"get_Current", NULL, &t5300_TI, &t1005_0_0_0, RuntimeInvoker_t1005, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35924_GM};
static MethodInfo* t5300_MIs[] =
{
	&m35924_MI,
	NULL
};
static TypeInfo* t5300_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5300_0_0_0;
extern Il2CppType t5300_1_0_0;
struct t5300;
extern Il2CppGenericClass t5300_GC;
TypeInfo t5300_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5300_MIs, t5300_PIs, NULL, NULL, NULL, NULL, NULL, &t5300_TI, t5300_ITIs, NULL, &EmptyCustomAttributesCache, &t5300_TI, &t5300_0_0_0, &t5300_1_0_0, NULL, &t5300_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3823.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3823_TI;
#include "t3823MD.h"

extern TypeInfo t1005_TI;
extern MethodInfo m21804_MI;
extern MethodInfo m27998_MI;
struct t107;
 int32_t m27998 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21800_MI;
 void m21800 (t3823 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21801_MI;
 t5 * m21801 (t3823 * __this, MethodInfo* method){
	{
		int32_t L_0 = m21804(__this, &m21804_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1005_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m21802_MI;
 void m21802 (t3823 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21803_MI;
 bool m21803 (t3823 * __this, MethodInfo* method){
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
 int32_t m21804 (t3823 * __this, MethodInfo* method){
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
		int32_t L_8 = m27998(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m27998_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Net.Sockets.AddressFamily>
extern Il2CppType t107_0_0_1;
FieldInfo t3823_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3823_TI, offsetof(t3823, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3823_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3823_TI, offsetof(t3823, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3823_FIs[] =
{
	&t3823_f0_FieldInfo,
	&t3823_f1_FieldInfo,
	NULL
};
static PropertyInfo t3823____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3823_TI, "System.Collections.IEnumerator.Current", &m21801_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3823____Current_PropertyInfo = 
{
	&t3823_TI, "Current", &m21804_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3823_PIs[] =
{
	&t3823____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3823____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3823_m21800_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21800_GM;
MethodInfo m21800_MI = 
{
	".ctor", (methodPointerType)&m21800, &t3823_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3823_m21800_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21800_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21801_GM;
MethodInfo m21801_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21801, &t3823_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21801_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21802_GM;
MethodInfo m21802_MI = 
{
	"Dispose", (methodPointerType)&m21802, &t3823_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21802_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21803_GM;
MethodInfo m21803_MI = 
{
	"MoveNext", (methodPointerType)&m21803, &t3823_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21803_GM};
extern Il2CppType t1005_0_0_0;
extern void* RuntimeInvoker_t1005 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21804_GM;
MethodInfo m21804_MI = 
{
	"get_Current", (methodPointerType)&m21804, &t3823_TI, &t1005_0_0_0, RuntimeInvoker_t1005, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21804_GM};
static MethodInfo* t3823_MIs[] =
{
	&m21800_MI,
	&m21801_MI,
	&m21802_MI,
	&m21803_MI,
	&m21804_MI,
	NULL
};
static MethodInfo* t3823_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21801_MI,
	&m21803_MI,
	&m21802_MI,
	&m21804_MI,
};
static TypeInfo* t3823_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5300_TI,
};
static Il2CppInterfaceOffsetPair t3823_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5300_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3823_0_0_0;
extern Il2CppType t3823_1_0_0;
extern Il2CppGenericClass t3823_GC;
TypeInfo t3823_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3823_MIs, t3823_PIs, t3823_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3823_TI, t3823_ITIs, t3823_VT, &EmptyCustomAttributesCache, &t3823_TI, &t3823_0_0_0, &t3823_1_0_0, t3823_IOs, &t3823_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3823)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6690_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Net.Sockets.AddressFamily>
extern MethodInfo m35925_MI;
static PropertyInfo t6690____Count_PropertyInfo = 
{
	&t6690_TI, "Count", &m35925_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35926_MI;
static PropertyInfo t6690____IsReadOnly_PropertyInfo = 
{
	&t6690_TI, "IsReadOnly", &m35926_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6690_PIs[] =
{
	&t6690____Count_PropertyInfo,
	&t6690____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35925_GM;
MethodInfo m35925_MI = 
{
	"get_Count", NULL, &t6690_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35925_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35926_GM;
MethodInfo m35926_MI = 
{
	"get_IsReadOnly", NULL, &t6690_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35926_GM};
extern Il2CppType t1005_0_0_0;
extern Il2CppType t1005_0_0_0;
static ParameterInfo t6690_m35927_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1005_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35927_GM;
MethodInfo m35927_MI = 
{
	"Add", NULL, &t6690_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6690_m35927_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35927_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35928_GM;
MethodInfo m35928_MI = 
{
	"Clear", NULL, &t6690_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35928_GM};
extern Il2CppType t1005_0_0_0;
static ParameterInfo t6690_m35929_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1005_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35929_GM;
MethodInfo m35929_MI = 
{
	"Contains", NULL, &t6690_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6690_m35929_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35929_GM};
extern Il2CppType t4578_0_0_0;
extern Il2CppType t4578_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6690_m35930_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4578_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35930_GM;
MethodInfo m35930_MI = 
{
	"CopyTo", NULL, &t6690_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6690_m35930_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35930_GM};
extern Il2CppType t1005_0_0_0;
static ParameterInfo t6690_m35931_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1005_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35931_GM;
MethodInfo m35931_MI = 
{
	"Remove", NULL, &t6690_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6690_m35931_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35931_GM};
static MethodInfo* t6690_MIs[] =
{
	&m35925_MI,
	&m35926_MI,
	&m35927_MI,
	&m35928_MI,
	&m35929_MI,
	&m35930_MI,
	&m35931_MI,
	NULL
};
extern TypeInfo t6692_TI;
static TypeInfo* t6690_ITIs[] = 
{
	&t739_TI,
	&t6692_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6690_0_0_0;
extern Il2CppType t6690_1_0_0;
struct t6690;
extern Il2CppGenericClass t6690_GC;
TypeInfo t6690_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6690_MIs, t6690_PIs, NULL, NULL, NULL, NULL, NULL, &t6690_TI, t6690_ITIs, NULL, &EmptyCustomAttributesCache, &t6690_TI, &t6690_0_0_0, &t6690_1_0_0, NULL, &t6690_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Net.Sockets.AddressFamily>
extern Il2CppType t5300_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35932_GM;
MethodInfo m35932_MI = 
{
	"GetEnumerator", NULL, &t6692_TI, &t5300_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35932_GM};
static MethodInfo* t6692_MIs[] =
{
	&m35932_MI,
	NULL
};
static TypeInfo* t6692_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6692_0_0_0;
extern Il2CppType t6692_1_0_0;
struct t6692;
extern Il2CppGenericClass t6692_GC;
TypeInfo t6692_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6692_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6692_TI, t6692_ITIs, NULL, &EmptyCustomAttributesCache, &t6692_TI, &t6692_0_0_0, &t6692_1_0_0, NULL, &t6692_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6691_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Net.Sockets.AddressFamily>
extern MethodInfo m35933_MI;
extern MethodInfo m35934_MI;
static PropertyInfo t6691____Item_PropertyInfo = 
{
	&t6691_TI, "Item", &m35933_MI, &m35934_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6691_PIs[] =
{
	&t6691____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1005_0_0_0;
static ParameterInfo t6691_m35935_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1005_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35935_GM;
MethodInfo m35935_MI = 
{
	"IndexOf", NULL, &t6691_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6691_m35935_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35935_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1005_0_0_0;
static ParameterInfo t6691_m35936_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1005_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35936_GM;
MethodInfo m35936_MI = 
{
	"Insert", NULL, &t6691_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6691_m35936_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35936_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6691_m35937_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35937_GM;
MethodInfo m35937_MI = 
{
	"RemoveAt", NULL, &t6691_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6691_m35937_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35937_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6691_m35933_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1005_0_0_0;
extern void* RuntimeInvoker_t1005_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35933_GM;
MethodInfo m35933_MI = 
{
	"get_Item", NULL, &t6691_TI, &t1005_0_0_0, RuntimeInvoker_t1005_t110, t6691_m35933_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35933_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1005_0_0_0;
static ParameterInfo t6691_m35934_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1005_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35934_GM;
MethodInfo m35934_MI = 
{
	"set_Item", NULL, &t6691_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6691_m35934_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35934_GM};
static MethodInfo* t6691_MIs[] =
{
	&m35935_MI,
	&m35936_MI,
	&m35937_MI,
	&m35933_MI,
	&m35934_MI,
	NULL
};
static TypeInfo* t6691_ITIs[] = 
{
	&t739_TI,
	&t6690_TI,
	&t6692_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6691_0_0_0;
extern Il2CppType t6691_1_0_0;
struct t6691;
extern Il2CppGenericClass t6691_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6691_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6691_MIs, t6691_PIs, NULL, NULL, NULL, NULL, NULL, &t6691_TI, t6691_ITIs, NULL, &t2240__CustomAttributeCache, &t6691_TI, &t6691_0_0_0, &t6691_1_0_0, NULL, &t6691_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5302_TI;

#include "t1014.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IO.FileAccess>
extern MethodInfo m35938_MI;
static PropertyInfo t5302____Current_PropertyInfo = 
{
	&t5302_TI, "Current", &m35938_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5302_PIs[] =
{
	&t5302____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1014_0_0_0;
extern void* RuntimeInvoker_t1014 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35938_GM;
MethodInfo m35938_MI = 
{
	"get_Current", NULL, &t5302_TI, &t1014_0_0_0, RuntimeInvoker_t1014, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35938_GM};
static MethodInfo* t5302_MIs[] =
{
	&m35938_MI,
	NULL
};
static TypeInfo* t5302_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5302_0_0_0;
extern Il2CppType t5302_1_0_0;
struct t5302;
extern Il2CppGenericClass t5302_GC;
TypeInfo t5302_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5302_MIs, t5302_PIs, NULL, NULL, NULL, NULL, NULL, &t5302_TI, t5302_ITIs, NULL, &EmptyCustomAttributesCache, &t5302_TI, &t5302_0_0_0, &t5302_1_0_0, NULL, &t5302_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3824.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3824_TI;
#include "t3824MD.h"

extern TypeInfo t1014_TI;
extern MethodInfo m21809_MI;
extern MethodInfo m28009_MI;
struct t107;
 int32_t m28009 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21805_MI;
 void m21805 (t3824 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21806_MI;
 t5 * m21806 (t3824 * __this, MethodInfo* method){
	{
		int32_t L_0 = m21809(__this, &m21809_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1014_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m21807_MI;
 void m21807 (t3824 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21808_MI;
 bool m21808 (t3824 * __this, MethodInfo* method){
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
 int32_t m21809 (t3824 * __this, MethodInfo* method){
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
		int32_t L_8 = m28009(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28009_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.FileAccess>
extern Il2CppType t107_0_0_1;
FieldInfo t3824_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3824_TI, offsetof(t3824, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3824_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3824_TI, offsetof(t3824, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3824_FIs[] =
{
	&t3824_f0_FieldInfo,
	&t3824_f1_FieldInfo,
	NULL
};
static PropertyInfo t3824____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3824_TI, "System.Collections.IEnumerator.Current", &m21806_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3824____Current_PropertyInfo = 
{
	&t3824_TI, "Current", &m21809_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3824_PIs[] =
{
	&t3824____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3824____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3824_m21805_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21805_GM;
MethodInfo m21805_MI = 
{
	".ctor", (methodPointerType)&m21805, &t3824_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3824_m21805_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21805_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21806_GM;
MethodInfo m21806_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21806, &t3824_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21806_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21807_GM;
MethodInfo m21807_MI = 
{
	"Dispose", (methodPointerType)&m21807, &t3824_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21807_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21808_GM;
MethodInfo m21808_MI = 
{
	"MoveNext", (methodPointerType)&m21808, &t3824_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21808_GM};
extern Il2CppType t1014_0_0_0;
extern void* RuntimeInvoker_t1014 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21809_GM;
MethodInfo m21809_MI = 
{
	"get_Current", (methodPointerType)&m21809, &t3824_TI, &t1014_0_0_0, RuntimeInvoker_t1014, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21809_GM};
static MethodInfo* t3824_MIs[] =
{
	&m21805_MI,
	&m21806_MI,
	&m21807_MI,
	&m21808_MI,
	&m21809_MI,
	NULL
};
static MethodInfo* t3824_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21806_MI,
	&m21808_MI,
	&m21807_MI,
	&m21809_MI,
};
static TypeInfo* t3824_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5302_TI,
};
static Il2CppInterfaceOffsetPair t3824_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5302_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3824_0_0_0;
extern Il2CppType t3824_1_0_0;
extern Il2CppGenericClass t3824_GC;
TypeInfo t3824_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3824_MIs, t3824_PIs, t3824_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3824_TI, t3824_ITIs, t3824_VT, &EmptyCustomAttributesCache, &t3824_TI, &t3824_0_0_0, &t3824_1_0_0, t3824_IOs, &t3824_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3824)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6693_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.FileAccess>
extern MethodInfo m35939_MI;
static PropertyInfo t6693____Count_PropertyInfo = 
{
	&t6693_TI, "Count", &m35939_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35940_MI;
static PropertyInfo t6693____IsReadOnly_PropertyInfo = 
{
	&t6693_TI, "IsReadOnly", &m35940_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6693_PIs[] =
{
	&t6693____Count_PropertyInfo,
	&t6693____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35939_GM;
MethodInfo m35939_MI = 
{
	"get_Count", NULL, &t6693_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35939_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35940_GM;
MethodInfo m35940_MI = 
{
	"get_IsReadOnly", NULL, &t6693_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35940_GM};
extern Il2CppType t1014_0_0_0;
extern Il2CppType t1014_0_0_0;
static ParameterInfo t6693_m35941_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1014_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35941_GM;
MethodInfo m35941_MI = 
{
	"Add", NULL, &t6693_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6693_m35941_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35941_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35942_GM;
MethodInfo m35942_MI = 
{
	"Clear", NULL, &t6693_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35942_GM};
extern Il2CppType t1014_0_0_0;
static ParameterInfo t6693_m35943_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1014_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35943_GM;
MethodInfo m35943_MI = 
{
	"Contains", NULL, &t6693_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6693_m35943_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35943_GM};
extern Il2CppType t4193_0_0_0;
extern Il2CppType t4193_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6693_m35944_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4193_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35944_GM;
MethodInfo m35944_MI = 
{
	"CopyTo", NULL, &t6693_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6693_m35944_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35944_GM};
extern Il2CppType t1014_0_0_0;
static ParameterInfo t6693_m35945_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1014_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35945_GM;
MethodInfo m35945_MI = 
{
	"Remove", NULL, &t6693_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6693_m35945_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35945_GM};
static MethodInfo* t6693_MIs[] =
{
	&m35939_MI,
	&m35940_MI,
	&m35941_MI,
	&m35942_MI,
	&m35943_MI,
	&m35944_MI,
	&m35945_MI,
	NULL
};
extern TypeInfo t6695_TI;
static TypeInfo* t6693_ITIs[] = 
{
	&t739_TI,
	&t6695_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6693_0_0_0;
extern Il2CppType t6693_1_0_0;
struct t6693;
extern Il2CppGenericClass t6693_GC;
TypeInfo t6693_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6693_MIs, t6693_PIs, NULL, NULL, NULL, NULL, NULL, &t6693_TI, t6693_ITIs, NULL, &EmptyCustomAttributesCache, &t6693_TI, &t6693_0_0_0, &t6693_1_0_0, NULL, &t6693_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.FileAccess>
extern Il2CppType t5302_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35946_GM;
MethodInfo m35946_MI = 
{
	"GetEnumerator", NULL, &t6695_TI, &t5302_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35946_GM};
static MethodInfo* t6695_MIs[] =
{
	&m35946_MI,
	NULL
};
static TypeInfo* t6695_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6695_0_0_0;
extern Il2CppType t6695_1_0_0;
struct t6695;
extern Il2CppGenericClass t6695_GC;
TypeInfo t6695_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6695_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6695_TI, t6695_ITIs, NULL, &EmptyCustomAttributesCache, &t6695_TI, &t6695_0_0_0, &t6695_1_0_0, NULL, &t6695_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6694_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IO.FileAccess>
extern MethodInfo m35947_MI;
extern MethodInfo m35948_MI;
static PropertyInfo t6694____Item_PropertyInfo = 
{
	&t6694_TI, "Item", &m35947_MI, &m35948_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6694_PIs[] =
{
	&t6694____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1014_0_0_0;
static ParameterInfo t6694_m35949_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1014_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35949_GM;
MethodInfo m35949_MI = 
{
	"IndexOf", NULL, &t6694_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6694_m35949_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35949_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1014_0_0_0;
static ParameterInfo t6694_m35950_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1014_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35950_GM;
MethodInfo m35950_MI = 
{
	"Insert", NULL, &t6694_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6694_m35950_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35950_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6694_m35951_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35951_GM;
MethodInfo m35951_MI = 
{
	"RemoveAt", NULL, &t6694_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6694_m35951_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35951_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6694_m35947_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1014_0_0_0;
extern void* RuntimeInvoker_t1014_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35947_GM;
MethodInfo m35947_MI = 
{
	"get_Item", NULL, &t6694_TI, &t1014_0_0_0, RuntimeInvoker_t1014_t110, t6694_m35947_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35947_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1014_0_0_0;
static ParameterInfo t6694_m35948_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1014_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35948_GM;
MethodInfo m35948_MI = 
{
	"set_Item", NULL, &t6694_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6694_m35948_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35948_GM};
static MethodInfo* t6694_MIs[] =
{
	&m35949_MI,
	&m35950_MI,
	&m35951_MI,
	&m35947_MI,
	&m35948_MI,
	NULL
};
static TypeInfo* t6694_ITIs[] = 
{
	&t739_TI,
	&t6693_TI,
	&t6695_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6694_0_0_0;
extern Il2CppType t6694_1_0_0;
struct t6694;
extern Il2CppGenericClass t6694_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6694_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6694_MIs, t6694_PIs, NULL, NULL, NULL, NULL, NULL, &t6694_TI, t6694_ITIs, NULL, &t2240__CustomAttributeCache, &t6694_TI, &t6694_0_0_0, &t6694_1_0_0, NULL, &t6694_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5303_TI;

#include "t764.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.UInt16>
extern MethodInfo m35952_MI;
static PropertyInfo t5303____Current_PropertyInfo = 
{
	&t5303_TI, "Current", &m35952_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5303_PIs[] =
{
	&t5303____Current_PropertyInfo,
	NULL
};
extern Il2CppType t764_0_0_0;
extern void* RuntimeInvoker_t764 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35952_GM;
MethodInfo m35952_MI = 
{
	"get_Current", NULL, &t5303_TI, &t764_0_0_0, RuntimeInvoker_t764, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35952_GM};
static MethodInfo* t5303_MIs[] =
{
	&m35952_MI,
	NULL
};
static TypeInfo* t5303_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5303_0_0_0;
extern Il2CppType t5303_1_0_0;
struct t5303;
extern Il2CppGenericClass t5303_GC;
TypeInfo t5303_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5303_MIs, t5303_PIs, NULL, NULL, NULL, NULL, NULL, &t5303_TI, t5303_ITIs, NULL, &EmptyCustomAttributesCache, &t5303_TI, &t5303_0_0_0, &t5303_1_0_0, NULL, &t5303_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3825.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3825_TI;
#include "t3825MD.h"

extern TypeInfo t764_TI;
extern MethodInfo m21814_MI;
extern MethodInfo m28020_MI;
struct t107;
 uint16_t m28020 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21810_MI;
 void m21810 (t3825 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21811_MI;
 t5 * m21811 (t3825 * __this, MethodInfo* method){
	{
		uint16_t L_0 = m21814(__this, &m21814_MI);
		uint16_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t764_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m21812_MI;
 void m21812 (t3825 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21813_MI;
 bool m21813 (t3825 * __this, MethodInfo* method){
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
 uint16_t m21814 (t3825 * __this, MethodInfo* method){
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
		uint16_t L_8 = m28020(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28020_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.UInt16>
extern Il2CppType t107_0_0_1;
FieldInfo t3825_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3825_TI, offsetof(t3825, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3825_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3825_TI, offsetof(t3825, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3825_FIs[] =
{
	&t3825_f0_FieldInfo,
	&t3825_f1_FieldInfo,
	NULL
};
static PropertyInfo t3825____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3825_TI, "System.Collections.IEnumerator.Current", &m21811_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3825____Current_PropertyInfo = 
{
	&t3825_TI, "Current", &m21814_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3825_PIs[] =
{
	&t3825____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3825____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3825_m21810_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21810_GM;
MethodInfo m21810_MI = 
{
	".ctor", (methodPointerType)&m21810, &t3825_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3825_m21810_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21810_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21811_GM;
MethodInfo m21811_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21811, &t3825_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21811_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21812_GM;
MethodInfo m21812_MI = 
{
	"Dispose", (methodPointerType)&m21812, &t3825_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21812_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21813_GM;
MethodInfo m21813_MI = 
{
	"MoveNext", (methodPointerType)&m21813, &t3825_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21813_GM};
extern Il2CppType t764_0_0_0;
extern void* RuntimeInvoker_t764 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21814_GM;
MethodInfo m21814_MI = 
{
	"get_Current", (methodPointerType)&m21814, &t3825_TI, &t764_0_0_0, RuntimeInvoker_t764, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21814_GM};
static MethodInfo* t3825_MIs[] =
{
	&m21810_MI,
	&m21811_MI,
	&m21812_MI,
	&m21813_MI,
	&m21814_MI,
	NULL
};
static MethodInfo* t3825_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21811_MI,
	&m21813_MI,
	&m21812_MI,
	&m21814_MI,
};
static TypeInfo* t3825_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5303_TI,
};
static Il2CppInterfaceOffsetPair t3825_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5303_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3825_0_0_0;
extern Il2CppType t3825_1_0_0;
extern Il2CppGenericClass t3825_GC;
TypeInfo t3825_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3825_MIs, t3825_PIs, t3825_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3825_TI, t3825_ITIs, t3825_VT, &EmptyCustomAttributesCache, &t3825_TI, &t3825_0_0_0, &t3825_1_0_0, t3825_IOs, &t3825_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3825)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6696_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.UInt16>
extern MethodInfo m35953_MI;
static PropertyInfo t6696____Count_PropertyInfo = 
{
	&t6696_TI, "Count", &m35953_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35954_MI;
static PropertyInfo t6696____IsReadOnly_PropertyInfo = 
{
	&t6696_TI, "IsReadOnly", &m35954_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6696_PIs[] =
{
	&t6696____Count_PropertyInfo,
	&t6696____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35953_GM;
MethodInfo m35953_MI = 
{
	"get_Count", NULL, &t6696_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35953_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35954_GM;
MethodInfo m35954_MI = 
{
	"get_IsReadOnly", NULL, &t6696_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35954_GM};
extern Il2CppType t764_0_0_0;
extern Il2CppType t764_0_0_0;
static ParameterInfo t6696_m35955_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t764_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t150 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35955_GM;
MethodInfo m35955_MI = 
{
	"Add", NULL, &t6696_TI, &t109_0_0_0, RuntimeInvoker_t109_t150, t6696_m35955_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35955_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35956_GM;
MethodInfo m35956_MI = 
{
	"Clear", NULL, &t6696_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35956_GM};
extern Il2CppType t764_0_0_0;
static ParameterInfo t6696_m35957_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t764_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t150 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35957_GM;
MethodInfo m35957_MI = 
{
	"Contains", NULL, &t6696_TI, &t108_0_0_0, RuntimeInvoker_t108_t150, t6696_m35957_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35957_GM};
extern Il2CppType t1027_0_0_0;
extern Il2CppType t1027_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6696_m35958_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1027_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35958_GM;
MethodInfo m35958_MI = 
{
	"CopyTo", NULL, &t6696_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6696_m35958_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35958_GM};
extern Il2CppType t764_0_0_0;
static ParameterInfo t6696_m35959_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t764_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t150 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35959_GM;
MethodInfo m35959_MI = 
{
	"Remove", NULL, &t6696_TI, &t108_0_0_0, RuntimeInvoker_t108_t150, t6696_m35959_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35959_GM};
static MethodInfo* t6696_MIs[] =
{
	&m35953_MI,
	&m35954_MI,
	&m35955_MI,
	&m35956_MI,
	&m35957_MI,
	&m35958_MI,
	&m35959_MI,
	NULL
};
extern TypeInfo t6698_TI;
static TypeInfo* t6696_ITIs[] = 
{
	&t739_TI,
	&t6698_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6696_0_0_0;
extern Il2CppType t6696_1_0_0;
struct t6696;
extern Il2CppGenericClass t6696_GC;
TypeInfo t6696_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6696_MIs, t6696_PIs, NULL, NULL, NULL, NULL, NULL, &t6696_TI, t6696_ITIs, NULL, &EmptyCustomAttributesCache, &t6696_TI, &t6696_0_0_0, &t6696_1_0_0, NULL, &t6696_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.UInt16>
extern Il2CppType t5303_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35960_GM;
MethodInfo m35960_MI = 
{
	"GetEnumerator", NULL, &t6698_TI, &t5303_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35960_GM};
static MethodInfo* t6698_MIs[] =
{
	&m35960_MI,
	NULL
};
static TypeInfo* t6698_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6698_0_0_0;
extern Il2CppType t6698_1_0_0;
struct t6698;
extern Il2CppGenericClass t6698_GC;
TypeInfo t6698_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6698_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6698_TI, t6698_ITIs, NULL, &EmptyCustomAttributesCache, &t6698_TI, &t6698_0_0_0, &t6698_1_0_0, NULL, &t6698_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6697_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.UInt16>
extern MethodInfo m35961_MI;
extern MethodInfo m35962_MI;
static PropertyInfo t6697____Item_PropertyInfo = 
{
	&t6697_TI, "Item", &m35961_MI, &m35962_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6697_PIs[] =
{
	&t6697____Item_PropertyInfo,
	NULL
};
extern Il2CppType t764_0_0_0;
static ParameterInfo t6697_m35963_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t764_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t150 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35963_GM;
MethodInfo m35963_MI = 
{
	"IndexOf", NULL, &t6697_TI, &t110_0_0_0, RuntimeInvoker_t110_t150, t6697_m35963_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35963_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t764_0_0_0;
static ParameterInfo t6697_m35964_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t764_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t150 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35964_GM;
MethodInfo m35964_MI = 
{
	"Insert", NULL, &t6697_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t150, t6697_m35964_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35964_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6697_m35965_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35965_GM;
MethodInfo m35965_MI = 
{
	"RemoveAt", NULL, &t6697_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6697_m35965_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35965_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6697_m35961_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t764_0_0_0;
extern void* RuntimeInvoker_t764_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35961_GM;
MethodInfo m35961_MI = 
{
	"get_Item", NULL, &t6697_TI, &t764_0_0_0, RuntimeInvoker_t764_t110, t6697_m35961_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35961_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t764_0_0_0;
static ParameterInfo t6697_m35962_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t764_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t150 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35962_GM;
MethodInfo m35962_MI = 
{
	"set_Item", NULL, &t6697_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t150, t6697_m35962_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35962_GM};
static MethodInfo* t6697_MIs[] =
{
	&m35963_MI,
	&m35964_MI,
	&m35965_MI,
	&m35961_MI,
	&m35962_MI,
	NULL
};
static TypeInfo* t6697_ITIs[] = 
{
	&t739_TI,
	&t6696_TI,
	&t6698_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6697_0_0_0;
extern Il2CppType t6697_1_0_0;
struct t6697;
extern Il2CppGenericClass t6697_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6697_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6697_MIs, t6697_PIs, NULL, NULL, NULL, NULL, NULL, &t6697_TI, t6697_ITIs, NULL, &t2240__CustomAttributeCache, &t6697_TI, &t6697_0_0_0, &t6697_1_0_0, NULL, &t6697_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6699_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt16>>
extern MethodInfo m35966_MI;
static PropertyInfo t6699____Count_PropertyInfo = 
{
	&t6699_TI, "Count", &m35966_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35967_MI;
static PropertyInfo t6699____IsReadOnly_PropertyInfo = 
{
	&t6699_TI, "IsReadOnly", &m35967_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6699_PIs[] =
{
	&t6699____Count_PropertyInfo,
	&t6699____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35966_GM;
MethodInfo m35966_MI = 
{
	"get_Count", NULL, &t6699_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35966_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35967_GM;
MethodInfo m35967_MI = 
{
	"get_IsReadOnly", NULL, &t6699_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35967_GM};
extern Il2CppType t2063_0_0_0;
extern Il2CppType t2063_0_0_0;
static ParameterInfo t6699_m35968_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2063_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35968_GM;
MethodInfo m35968_MI = 
{
	"Add", NULL, &t6699_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6699_m35968_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35968_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35969_GM;
MethodInfo m35969_MI = 
{
	"Clear", NULL, &t6699_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35969_GM};
extern Il2CppType t2063_0_0_0;
static ParameterInfo t6699_m35970_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2063_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35970_GM;
MethodInfo m35970_MI = 
{
	"Contains", NULL, &t6699_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6699_m35970_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35970_GM};
extern Il2CppType t4194_0_0_0;
extern Il2CppType t4194_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6699_m35971_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4194_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35971_GM;
MethodInfo m35971_MI = 
{
	"CopyTo", NULL, &t6699_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6699_m35971_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35971_GM};
extern Il2CppType t2063_0_0_0;
static ParameterInfo t6699_m35972_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2063_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35972_GM;
MethodInfo m35972_MI = 
{
	"Remove", NULL, &t6699_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6699_m35972_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35972_GM};
static MethodInfo* t6699_MIs[] =
{
	&m35966_MI,
	&m35967_MI,
	&m35968_MI,
	&m35969_MI,
	&m35970_MI,
	&m35971_MI,
	&m35972_MI,
	NULL
};
extern TypeInfo t6701_TI;
static TypeInfo* t6699_ITIs[] = 
{
	&t739_TI,
	&t6701_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6699_0_0_0;
extern Il2CppType t6699_1_0_0;
struct t6699;
extern Il2CppGenericClass t6699_GC;
TypeInfo t6699_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6699_MIs, t6699_PIs, NULL, NULL, NULL, NULL, NULL, &t6699_TI, t6699_ITIs, NULL, &EmptyCustomAttributesCache, &t6699_TI, &t6699_0_0_0, &t6699_1_0_0, NULL, &t6699_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.UInt16>>
extern Il2CppType t5305_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35973_GM;
MethodInfo m35973_MI = 
{
	"GetEnumerator", NULL, &t6701_TI, &t5305_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35973_GM};
static MethodInfo* t6701_MIs[] =
{
	&m35973_MI,
	NULL
};
static TypeInfo* t6701_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6701_0_0_0;
extern Il2CppType t6701_1_0_0;
struct t6701;
extern Il2CppGenericClass t6701_GC;
TypeInfo t6701_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6701_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6701_TI, t6701_ITIs, NULL, &EmptyCustomAttributesCache, &t6701_TI, &t6701_0_0_0, &t6701_1_0_0, NULL, &t6701_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5305_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.UInt16>>
extern MethodInfo m35974_MI;
static PropertyInfo t5305____Current_PropertyInfo = 
{
	&t5305_TI, "Current", &m35974_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5305_PIs[] =
{
	&t5305____Current_PropertyInfo,
	NULL
};
extern Il2CppType t2063_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35974_GM;
MethodInfo m35974_MI = 
{
	"get_Current", NULL, &t5305_TI, &t2063_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35974_GM};
static MethodInfo* t5305_MIs[] =
{
	&m35974_MI,
	NULL
};
static TypeInfo* t5305_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5305_0_0_0;
extern Il2CppType t5305_1_0_0;
struct t5305;
extern Il2CppGenericClass t5305_GC;
TypeInfo t5305_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5305_MIs, t5305_PIs, NULL, NULL, NULL, NULL, NULL, &t5305_TI, t5305_ITIs, NULL, &EmptyCustomAttributesCache, &t5305_TI, &t5305_0_0_0, &t5305_1_0_0, NULL, &t5305_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2063_TI;



// Metadata Definition System.IComparable`1<System.UInt16>
extern Il2CppType t764_0_0_0;
static ParameterInfo t2063_m35975_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t764_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t150 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35975_GM;
MethodInfo m35975_MI = 
{
	"CompareTo", NULL, &t2063_TI, &t110_0_0_0, RuntimeInvoker_t110_t150, t2063_m35975_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35975_GM};
static MethodInfo* t2063_MIs[] =
{
	&m35975_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2063_1_0_0;
struct t2063;
extern Il2CppGenericClass t2063_GC;
TypeInfo t2063_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t2063_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2063_TI, NULL, NULL, &EmptyCustomAttributesCache, &t2063_TI, &t2063_0_0_0, &t2063_1_0_0, NULL, &t2063_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t3826.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3826_TI;
#include "t3826MD.h"

extern MethodInfo m21819_MI;
extern MethodInfo m28031_MI;
struct t107;
#define m28031(__this, p0, method) (t5*)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt16>>
extern Il2CppType t107_0_0_1;
FieldInfo t3826_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3826_TI, offsetof(t3826, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3826_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3826_TI, offsetof(t3826, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3826_FIs[] =
{
	&t3826_f0_FieldInfo,
	&t3826_f1_FieldInfo,
	NULL
};
extern MethodInfo m21816_MI;
static PropertyInfo t3826____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3826_TI, "System.Collections.IEnumerator.Current", &m21816_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3826____Current_PropertyInfo = 
{
	&t3826_TI, "Current", &m21819_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3826_PIs[] =
{
	&t3826____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3826____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3826_m21815_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21815_GM;
MethodInfo m21815_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3826_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3826_m21815_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21815_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21816_GM;
MethodInfo m21816_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3826_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21816_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21817_GM;
MethodInfo m21817_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3826_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21817_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21818_GM;
MethodInfo m21818_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3826_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21818_GM};
extern Il2CppType t2063_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21819_GM;
MethodInfo m21819_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3826_TI, &t2063_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21819_GM};
static MethodInfo* t3826_MIs[] =
{
	&m21815_MI,
	&m21816_MI,
	&m21817_MI,
	&m21818_MI,
	&m21819_MI,
	NULL
};
extern MethodInfo m21818_MI;
extern MethodInfo m21817_MI;
static MethodInfo* t3826_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21816_MI,
	&m21818_MI,
	&m21817_MI,
	&m21819_MI,
};
static TypeInfo* t3826_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5305_TI,
};
static Il2CppInterfaceOffsetPair t3826_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5305_TI, 7},
};
extern TypeInfo t2063_TI;
static Il2CppRGCTXData t3826_RGCTXData[3] = 
{
	&m21819_MI/* Method Usage */,
	&t2063_TI/* Class Usage */,
	&m28031_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3826_0_0_0;
extern Il2CppType t3826_1_0_0;
extern Il2CppGenericClass t3826_GC;
TypeInfo t3826_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3826_MIs, t3826_PIs, t3826_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3826_TI, t3826_ITIs, t3826_VT, &EmptyCustomAttributesCache, &t3826_TI, &t3826_0_0_0, &t3826_1_0_0, t3826_IOs, &t3826_GC, NULL, NULL, NULL, t3826_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3826)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6700_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.UInt16>>
extern MethodInfo m35976_MI;
extern MethodInfo m35977_MI;
static PropertyInfo t6700____Item_PropertyInfo = 
{
	&t6700_TI, "Item", &m35976_MI, &m35977_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6700_PIs[] =
{
	&t6700____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2063_0_0_0;
static ParameterInfo t6700_m35978_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2063_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35978_GM;
MethodInfo m35978_MI = 
{
	"IndexOf", NULL, &t6700_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6700_m35978_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35978_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2063_0_0_0;
static ParameterInfo t6700_m35979_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2063_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35979_GM;
MethodInfo m35979_MI = 
{
	"Insert", NULL, &t6700_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6700_m35979_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35979_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6700_m35980_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35980_GM;
MethodInfo m35980_MI = 
{
	"RemoveAt", NULL, &t6700_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6700_m35980_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35980_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6700_m35976_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t2063_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35976_GM;
MethodInfo m35976_MI = 
{
	"get_Item", NULL, &t6700_TI, &t2063_0_0_0, RuntimeInvoker_t5_t110, t6700_m35976_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35976_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2063_0_0_0;
static ParameterInfo t6700_m35977_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2063_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35977_GM;
MethodInfo m35977_MI = 
{
	"set_Item", NULL, &t6700_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6700_m35977_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35977_GM};
static MethodInfo* t6700_MIs[] =
{
	&m35978_MI,
	&m35979_MI,
	&m35980_MI,
	&m35976_MI,
	&m35977_MI,
	NULL
};
static TypeInfo* t6700_ITIs[] = 
{
	&t739_TI,
	&t6699_TI,
	&t6701_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6700_0_0_0;
extern Il2CppType t6700_1_0_0;
struct t6700;
extern Il2CppGenericClass t6700_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6700_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6700_MIs, t6700_PIs, NULL, NULL, NULL, NULL, NULL, &t6700_TI, t6700_ITIs, NULL, &t2240__CustomAttributeCache, &t6700_TI, &t6700_0_0_0, &t6700_1_0_0, NULL, &t6700_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6702_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt16>>
extern MethodInfo m35981_MI;
static PropertyInfo t6702____Count_PropertyInfo = 
{
	&t6702_TI, "Count", &m35981_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35982_MI;
static PropertyInfo t6702____IsReadOnly_PropertyInfo = 
{
	&t6702_TI, "IsReadOnly", &m35982_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6702_PIs[] =
{
	&t6702____Count_PropertyInfo,
	&t6702____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35981_GM;
MethodInfo m35981_MI = 
{
	"get_Count", NULL, &t6702_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35981_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35982_GM;
MethodInfo m35982_MI = 
{
	"get_IsReadOnly", NULL, &t6702_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35982_GM};
extern Il2CppType t2064_0_0_0;
extern Il2CppType t2064_0_0_0;
static ParameterInfo t6702_m35983_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2064_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35983_GM;
MethodInfo m35983_MI = 
{
	"Add", NULL, &t6702_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6702_m35983_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35983_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35984_GM;
MethodInfo m35984_MI = 
{
	"Clear", NULL, &t6702_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35984_GM};
extern Il2CppType t2064_0_0_0;
static ParameterInfo t6702_m35985_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2064_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35985_GM;
MethodInfo m35985_MI = 
{
	"Contains", NULL, &t6702_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6702_m35985_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35985_GM};
extern Il2CppType t4195_0_0_0;
extern Il2CppType t4195_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6702_m35986_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4195_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35986_GM;
MethodInfo m35986_MI = 
{
	"CopyTo", NULL, &t6702_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6702_m35986_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35986_GM};
extern Il2CppType t2064_0_0_0;
static ParameterInfo t6702_m35987_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2064_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35987_GM;
MethodInfo m35987_MI = 
{
	"Remove", NULL, &t6702_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6702_m35987_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35987_GM};
static MethodInfo* t6702_MIs[] =
{
	&m35981_MI,
	&m35982_MI,
	&m35983_MI,
	&m35984_MI,
	&m35985_MI,
	&m35986_MI,
	&m35987_MI,
	NULL
};
extern TypeInfo t6704_TI;
static TypeInfo* t6702_ITIs[] = 
{
	&t739_TI,
	&t6704_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6702_0_0_0;
extern Il2CppType t6702_1_0_0;
struct t6702;
extern Il2CppGenericClass t6702_GC;
TypeInfo t6702_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6702_MIs, t6702_PIs, NULL, NULL, NULL, NULL, NULL, &t6702_TI, t6702_ITIs, NULL, &EmptyCustomAttributesCache, &t6702_TI, &t6702_0_0_0, &t6702_1_0_0, NULL, &t6702_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.UInt16>>
extern Il2CppType t5307_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35988_GM;
MethodInfo m35988_MI = 
{
	"GetEnumerator", NULL, &t6704_TI, &t5307_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35988_GM};
static MethodInfo* t6704_MIs[] =
{
	&m35988_MI,
	NULL
};
static TypeInfo* t6704_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6704_0_0_0;
extern Il2CppType t6704_1_0_0;
struct t6704;
extern Il2CppGenericClass t6704_GC;
TypeInfo t6704_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6704_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6704_TI, t6704_ITIs, NULL, &EmptyCustomAttributesCache, &t6704_TI, &t6704_0_0_0, &t6704_1_0_0, NULL, &t6704_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5307_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.UInt16>>
extern MethodInfo m35989_MI;
static PropertyInfo t5307____Current_PropertyInfo = 
{
	&t5307_TI, "Current", &m35989_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5307_PIs[] =
{
	&t5307____Current_PropertyInfo,
	NULL
};
extern Il2CppType t2064_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35989_GM;
MethodInfo m35989_MI = 
{
	"get_Current", NULL, &t5307_TI, &t2064_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35989_GM};
static MethodInfo* t5307_MIs[] =
{
	&m35989_MI,
	NULL
};
static TypeInfo* t5307_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5307_0_0_0;
extern Il2CppType t5307_1_0_0;
struct t5307;
extern Il2CppGenericClass t5307_GC;
TypeInfo t5307_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5307_MIs, t5307_PIs, NULL, NULL, NULL, NULL, NULL, &t5307_TI, t5307_ITIs, NULL, &EmptyCustomAttributesCache, &t5307_TI, &t5307_0_0_0, &t5307_1_0_0, NULL, &t5307_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2064_TI;



// Metadata Definition System.IEquatable`1<System.UInt16>
extern Il2CppType t764_0_0_0;
static ParameterInfo t2064_m35990_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t764_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t150 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35990_GM;
MethodInfo m35990_MI = 
{
	"Equals", NULL, &t2064_TI, &t108_0_0_0, RuntimeInvoker_t108_t150, t2064_m35990_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35990_GM};
static MethodInfo* t2064_MIs[] =
{
	&m35990_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2064_1_0_0;
struct t2064;
extern Il2CppGenericClass t2064_GC;
TypeInfo t2064_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t2064_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2064_TI, NULL, NULL, &EmptyCustomAttributesCache, &t2064_TI, &t2064_0_0_0, &t2064_1_0_0, NULL, &t2064_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t3827.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3827_TI;
#include "t3827MD.h"

extern MethodInfo m21824_MI;
extern MethodInfo m28042_MI;
struct t107;
#define m28042(__this, p0, method) (t5*)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt16>>
extern Il2CppType t107_0_0_1;
FieldInfo t3827_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3827_TI, offsetof(t3827, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3827_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3827_TI, offsetof(t3827, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3827_FIs[] =
{
	&t3827_f0_FieldInfo,
	&t3827_f1_FieldInfo,
	NULL
};
extern MethodInfo m21821_MI;
static PropertyInfo t3827____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3827_TI, "System.Collections.IEnumerator.Current", &m21821_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3827____Current_PropertyInfo = 
{
	&t3827_TI, "Current", &m21824_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3827_PIs[] =
{
	&t3827____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3827____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3827_m21820_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21820_GM;
MethodInfo m21820_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3827_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3827_m21820_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21820_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21821_GM;
MethodInfo m21821_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3827_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21821_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21822_GM;
MethodInfo m21822_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3827_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21822_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21823_GM;
MethodInfo m21823_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3827_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21823_GM};
extern Il2CppType t2064_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21824_GM;
MethodInfo m21824_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3827_TI, &t2064_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21824_GM};
static MethodInfo* t3827_MIs[] =
{
	&m21820_MI,
	&m21821_MI,
	&m21822_MI,
	&m21823_MI,
	&m21824_MI,
	NULL
};
extern MethodInfo m21823_MI;
extern MethodInfo m21822_MI;
static MethodInfo* t3827_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21821_MI,
	&m21823_MI,
	&m21822_MI,
	&m21824_MI,
};
static TypeInfo* t3827_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5307_TI,
};
static Il2CppInterfaceOffsetPair t3827_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5307_TI, 7},
};
extern TypeInfo t2064_TI;
static Il2CppRGCTXData t3827_RGCTXData[3] = 
{
	&m21824_MI/* Method Usage */,
	&t2064_TI/* Class Usage */,
	&m28042_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3827_0_0_0;
extern Il2CppType t3827_1_0_0;
extern Il2CppGenericClass t3827_GC;
TypeInfo t3827_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3827_MIs, t3827_PIs, t3827_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3827_TI, t3827_ITIs, t3827_VT, &EmptyCustomAttributesCache, &t3827_TI, &t3827_0_0_0, &t3827_1_0_0, t3827_IOs, &t3827_GC, NULL, NULL, NULL, t3827_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3827)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6703_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt16>>
extern MethodInfo m35991_MI;
extern MethodInfo m35992_MI;
static PropertyInfo t6703____Item_PropertyInfo = 
{
	&t6703_TI, "Item", &m35991_MI, &m35992_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6703_PIs[] =
{
	&t6703____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2064_0_0_0;
static ParameterInfo t6703_m35993_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2064_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35993_GM;
MethodInfo m35993_MI = 
{
	"IndexOf", NULL, &t6703_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6703_m35993_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35993_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2064_0_0_0;
static ParameterInfo t6703_m35994_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2064_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35994_GM;
MethodInfo m35994_MI = 
{
	"Insert", NULL, &t6703_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6703_m35994_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35994_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6703_m35995_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35995_GM;
MethodInfo m35995_MI = 
{
	"RemoveAt", NULL, &t6703_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6703_m35995_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35995_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6703_m35991_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t2064_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35991_GM;
MethodInfo m35991_MI = 
{
	"get_Item", NULL, &t6703_TI, &t2064_0_0_0, RuntimeInvoker_t5_t110, t6703_m35991_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35991_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2064_0_0_0;
static ParameterInfo t6703_m35992_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2064_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35992_GM;
MethodInfo m35992_MI = 
{
	"set_Item", NULL, &t6703_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6703_m35992_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m35992_GM};
static MethodInfo* t6703_MIs[] =
{
	&m35993_MI,
	&m35994_MI,
	&m35995_MI,
	&m35991_MI,
	&m35992_MI,
	NULL
};
static TypeInfo* t6703_ITIs[] = 
{
	&t739_TI,
	&t6702_TI,
	&t6704_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6703_0_0_0;
extern Il2CppType t6703_1_0_0;
struct t6703;
extern Il2CppGenericClass t6703_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6703_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6703_MIs, t6703_PIs, NULL, NULL, NULL, NULL, NULL, &t6703_TI, t6703_ITIs, NULL, &t2240__CustomAttributeCache, &t6703_TI, &t6703_0_0_0, &t6703_1_0_0, NULL, &t6703_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5309_TI;

#include "t1029.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Net.SecurityProtocolType>
extern MethodInfo m35996_MI;
static PropertyInfo t5309____Current_PropertyInfo = 
{
	&t5309_TI, "Current", &m35996_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5309_PIs[] =
{
	&t5309____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1029_0_0_0;
extern void* RuntimeInvoker_t1029 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35996_GM;
MethodInfo m35996_MI = 
{
	"get_Current", NULL, &t5309_TI, &t1029_0_0_0, RuntimeInvoker_t1029, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35996_GM};
static MethodInfo* t5309_MIs[] =
{
	&m35996_MI,
	NULL
};
static TypeInfo* t5309_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5309_0_0_0;
extern Il2CppType t5309_1_0_0;
struct t5309;
extern Il2CppGenericClass t5309_GC;
TypeInfo t5309_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5309_MIs, t5309_PIs, NULL, NULL, NULL, NULL, NULL, &t5309_TI, t5309_ITIs, NULL, &EmptyCustomAttributesCache, &t5309_TI, &t5309_0_0_0, &t5309_1_0_0, NULL, &t5309_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3828.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3828_TI;
#include "t3828MD.h"

extern TypeInfo t1029_TI;
extern MethodInfo m21829_MI;
extern MethodInfo m28053_MI;
struct t107;
 int32_t m28053 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21825_MI;
 void m21825 (t3828 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21826_MI;
 t5 * m21826 (t3828 * __this, MethodInfo* method){
	{
		int32_t L_0 = m21829(__this, &m21829_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1029_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m21827_MI;
 void m21827 (t3828 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m21828_MI;
 bool m21828 (t3828 * __this, MethodInfo* method){
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
 int32_t m21829 (t3828 * __this, MethodInfo* method){
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
		int32_t L_8 = m28053(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m28053_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Net.SecurityProtocolType>
extern Il2CppType t107_0_0_1;
FieldInfo t3828_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3828_TI, offsetof(t3828, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3828_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3828_TI, offsetof(t3828, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3828_FIs[] =
{
	&t3828_f0_FieldInfo,
	&t3828_f1_FieldInfo,
	NULL
};
static PropertyInfo t3828____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3828_TI, "System.Collections.IEnumerator.Current", &m21826_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3828____Current_PropertyInfo = 
{
	&t3828_TI, "Current", &m21829_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3828_PIs[] =
{
	&t3828____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3828____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3828_m21825_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21825_GM;
MethodInfo m21825_MI = 
{
	".ctor", (methodPointerType)&m21825, &t3828_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3828_m21825_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21825_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21826_GM;
MethodInfo m21826_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m21826, &t3828_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21826_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21827_GM;
MethodInfo m21827_MI = 
{
	"Dispose", (methodPointerType)&m21827, &t3828_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21827_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21828_GM;
MethodInfo m21828_MI = 
{
	"MoveNext", (methodPointerType)&m21828, &t3828_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21828_GM};
extern Il2CppType t1029_0_0_0;
extern void* RuntimeInvoker_t1029 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21829_GM;
MethodInfo m21829_MI = 
{
	"get_Current", (methodPointerType)&m21829, &t3828_TI, &t1029_0_0_0, RuntimeInvoker_t1029, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21829_GM};
static MethodInfo* t3828_MIs[] =
{
	&m21825_MI,
	&m21826_MI,
	&m21827_MI,
	&m21828_MI,
	&m21829_MI,
	NULL
};
static MethodInfo* t3828_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m21826_MI,
	&m21828_MI,
	&m21827_MI,
	&m21829_MI,
};
static TypeInfo* t3828_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5309_TI,
};
static Il2CppInterfaceOffsetPair t3828_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5309_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3828_0_0_0;
extern Il2CppType t3828_1_0_0;
extern Il2CppGenericClass t3828_GC;
TypeInfo t3828_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3828_MIs, t3828_PIs, t3828_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3828_TI, t3828_ITIs, t3828_VT, &EmptyCustomAttributesCache, &t3828_TI, &t3828_0_0_0, &t3828_1_0_0, t3828_IOs, &t3828_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3828)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6705_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Net.SecurityProtocolType>
extern MethodInfo m35997_MI;
static PropertyInfo t6705____Count_PropertyInfo = 
{
	&t6705_TI, "Count", &m35997_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m35998_MI;
static PropertyInfo t6705____IsReadOnly_PropertyInfo = 
{
	&t6705_TI, "IsReadOnly", &m35998_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6705_PIs[] =
{
	&t6705____Count_PropertyInfo,
	&t6705____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35997_GM;
MethodInfo m35997_MI = 
{
	"get_Count", NULL, &t6705_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35997_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35998_GM;
MethodInfo m35998_MI = 
{
	"get_IsReadOnly", NULL, &t6705_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m35998_GM};
extern Il2CppType t1029_0_0_0;
extern Il2CppType t1029_0_0_0;
static ParameterInfo t6705_m35999_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1029_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m35999_GM;
MethodInfo m35999_MI = 
{
	"Add", NULL, &t6705_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6705_m35999_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m35999_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36000_GM;
MethodInfo m36000_MI = 
{
	"Clear", NULL, &t6705_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36000_GM};
extern Il2CppType t1029_0_0_0;
static ParameterInfo t6705_m36001_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1029_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36001_GM;
MethodInfo m36001_MI = 
{
	"Contains", NULL, &t6705_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6705_m36001_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36001_GM};
extern Il2CppType t4579_0_0_0;
extern Il2CppType t4579_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6705_m36002_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4579_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36002_GM;
MethodInfo m36002_MI = 
{
	"CopyTo", NULL, &t6705_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6705_m36002_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36002_GM};
extern Il2CppType t1029_0_0_0;
static ParameterInfo t6705_m36003_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1029_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36003_GM;
MethodInfo m36003_MI = 
{
	"Remove", NULL, &t6705_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6705_m36003_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36003_GM};
static MethodInfo* t6705_MIs[] =
{
	&m35997_MI,
	&m35998_MI,
	&m35999_MI,
	&m36000_MI,
	&m36001_MI,
	&m36002_MI,
	&m36003_MI,
	NULL
};
extern TypeInfo t6707_TI;
static TypeInfo* t6705_ITIs[] = 
{
	&t739_TI,
	&t6707_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6705_0_0_0;
extern Il2CppType t6705_1_0_0;
struct t6705;
extern Il2CppGenericClass t6705_GC;
TypeInfo t6705_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6705_MIs, t6705_PIs, NULL, NULL, NULL, NULL, NULL, &t6705_TI, t6705_ITIs, NULL, &EmptyCustomAttributesCache, &t6705_TI, &t6705_0_0_0, &t6705_1_0_0, NULL, &t6705_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Net.SecurityProtocolType>
extern Il2CppType t5309_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36004_GM;
MethodInfo m36004_MI = 
{
	"GetEnumerator", NULL, &t6707_TI, &t5309_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36004_GM};
static MethodInfo* t6707_MIs[] =
{
	&m36004_MI,
	NULL
};
static TypeInfo* t6707_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6707_0_0_0;
extern Il2CppType t6707_1_0_0;
struct t6707;
extern Il2CppGenericClass t6707_GC;
TypeInfo t6707_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6707_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6707_TI, t6707_ITIs, NULL, &EmptyCustomAttributesCache, &t6707_TI, &t6707_0_0_0, &t6707_1_0_0, NULL, &t6707_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6706_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Net.SecurityProtocolType>
extern MethodInfo m36005_MI;
extern MethodInfo m36006_MI;
static PropertyInfo t6706____Item_PropertyInfo = 
{
	&t6706_TI, "Item", &m36005_MI, &m36006_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6706_PIs[] =
{
	&t6706____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1029_0_0_0;
static ParameterInfo t6706_m36007_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1029_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36007_GM;
MethodInfo m36007_MI = 
{
	"IndexOf", NULL, &t6706_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6706_m36007_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36007_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1029_0_0_0;
static ParameterInfo t6706_m36008_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1029_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36008_GM;
MethodInfo m36008_MI = 
{
	"Insert", NULL, &t6706_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6706_m36008_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36008_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6706_m36009_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36009_GM;
MethodInfo m36009_MI = 
{
	"RemoveAt", NULL, &t6706_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6706_m36009_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36009_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6706_m36005_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1029_0_0_0;
extern void* RuntimeInvoker_t1029_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36005_GM;
MethodInfo m36005_MI = 
{
	"get_Item", NULL, &t6706_TI, &t1029_0_0_0, RuntimeInvoker_t1029_t110, t6706_m36005_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36005_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1029_0_0_0;
static ParameterInfo t6706_m36006_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1029_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36006_GM;
MethodInfo m36006_MI = 
{
	"set_Item", NULL, &t6706_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6706_m36006_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36006_GM};
static MethodInfo* t6706_MIs[] =
{
	&m36007_MI,
	&m36008_MI,
	&m36009_MI,
	&m36005_MI,
	&m36006_MI,
	NULL
};
static TypeInfo* t6706_ITIs[] = 
{
	&t739_TI,
	&t6705_TI,
	&t6707_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6706_0_0_0;
extern Il2CppType t6706_1_0_0;
struct t6706;
extern Il2CppGenericClass t6706_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6706_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6706_MIs, t6706_PIs, NULL, NULL, NULL, NULL, NULL, &t6706_TI, t6706_ITIs, NULL, &t2240__CustomAttributeCache, &t6706_TI, &t6706_0_0_0, &t6706_1_0_0, NULL, &t6706_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t1033.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1033_TI;
#include "t1033MD.h"

#include "t1511.h"
#include "t1521.h"
#include "t3830.h"
#include "t3832.h"
#include "t990.h"
#include "t3829.h"
#include "t3839.h"
#include "t3834.h"
#include "t3840.h"
#include "t2619.h"
#include "t3841.h"
#include "t114.h"
#include "t115.h"
extern TypeInfo t11_TI;
extern TypeInfo t2437_TI;
extern TypeInfo t1511_TI;
extern TypeInfo t1521_TI;
extern TypeInfo t3830_TI;
extern TypeInfo t3831_TI;
extern TypeInfo t3832_TI;
extern TypeInfo t4182_TI;
extern TypeInfo t990_TI;
extern TypeInfo t3829_TI;
extern TypeInfo t3839_TI;
extern TypeInfo t3834_TI;
extern TypeInfo t3840_TI;
extern TypeInfo t2619_TI;
extern TypeInfo t2297_TI;
extern TypeInfo t585_TI;
extern TypeInfo t1034_TI;
extern TypeInfo t984_TI;
extern TypeInfo t3841_TI;
extern TypeInfo t7712_TI;
extern TypeInfo t114_TI;
#include "t1521MD.h"
#include "t3830MD.h"
#include "t3832MD.h"
#include "t3829MD.h"
#include "t3839MD.h"
#include "t3834MD.h"
#include "t3840MD.h"
#include "t2619MD.h"
#include "t984MD.h"
#include "t3841MD.h"
#include "t829MD.h"
#include "t114MD.h"
#include "t11MD.h"
#include "t990MD.h"
extern Il2CppType t2437_0_0_0;
extern Il2CppType t3831_0_0_0;
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_0_0_0;
extern MethodInfo m21859_MI;
extern MethodInfo m21866_MI;
extern MethodInfo m21849_MI;
extern MethodInfo m21867_MI;
extern MethodInfo m21850_MI;
extern MethodInfo m31856_MI;
extern MethodInfo m31855_MI;
extern MethodInfo m7379_MI;
extern MethodInfo m21857_MI;
extern MethodInfo m21882_MI;
extern MethodInfo m21851_MI;
extern MethodInfo m4823_MI;
extern MethodInfo m21863_MI;
extern MethodInfo m21872_MI;
extern MethodInfo m21874_MI;
extern MethodInfo m21868_MI;
extern MethodInfo m21856_MI;
extern MethodInfo m21853_MI;
extern MethodInfo m21870_MI;
extern MethodInfo m21917_MI;
extern MethodInfo m28077_MI;
extern MethodInfo m21854_MI;
extern MethodInfo m21921_MI;
extern MethodInfo m28079_MI;
extern MethodInfo m21901_MI;
extern MethodInfo m21925_MI;
extern MethodInfo m13086_MI;
extern MethodInfo m21852_MI;
extern MethodInfo m21848_MI;
extern MethodInfo m21871_MI;
extern MethodInfo m28080_MI;
extern MethodInfo m7558_MI;
extern MethodInfo m21935_MI;
extern MethodInfo m36010_MI;
extern MethodInfo m4776_MI;
extern MethodInfo m4789_MI;
extern MethodInfo m4788_MI;
extern MethodInfo m532_MI;
extern MethodInfo m4777_MI;
extern MethodInfo m6830_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m613_MI;
extern MethodInfo m6793_MI;
extern MethodInfo m21864_MI;
extern MethodInfo m36011_MI;
extern MethodInfo m4759_MI;
struct t1033;
 void m28077 (t1033 * __this, t4182* p0, int32_t p1, t3829 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t1033;
#include "t142.h"
 void m28079 (t1033 * __this, t107 * p0, int32_t p1, t3839 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t1033;
 void m28080 (t1033 * __this, t3831* p0, int32_t p1, t3839 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m21830_MI;
 void m21830 (t1033 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		m21851(__this, ((int32_t)10), (t5*)NULL, &m21851_MI);
		return;
	}
}
extern MethodInfo m4822_MI;
 void m4822 (t1033 * __this, t5* p0, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		m21851(__this, ((int32_t)10), p0, &m21851_MI);
		return;
	}
}
extern MethodInfo m21831_MI;
 void m21831 (t1033 * __this, int32_t p0, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		m21851(__this, p0, (t5*)NULL, &m21851_MI);
		return;
	}
}
extern MethodInfo m21832_MI;
 void m21832 (t1033 * __this, t829 * p0, t830  p1, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		__this->f13 = p0;
		return;
	}
}
extern MethodInfo m21833_MI;
 t5 * m21833 (t1033 * __this, t5 * p0, MethodInfo* method){
	{
		if (!((t11*)IsInst(p0, (&t11_TI))))
		{
			goto IL_0029;
		}
	}
	{
		bool L_0 = (bool)VirtFuncInvoker1< bool, t11* >::Invoke(&m21859_MI, __this, ((t11*)Castclass(p0, (&t11_TI))));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		t11* L_1 = m21866(__this, p0, &m21866_MI);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t11* >::Invoke(&m21849_MI, __this, L_1);
		bool L_3 = L_2;
		t5 * L_4 = Box(InitializedTypeInfo(&t108_TI), &L_3);
		return L_4;
	}

IL_0029:
	{
		return NULL;
	}
}
extern MethodInfo m21834_MI;
 void m21834 (t1033 * __this, t5 * p0, t5 * p1, MethodInfo* method){
	{
		t11* L_0 = m21866(__this, p0, &m21866_MI);
		bool L_1 = m21867(__this, p1, &m21867_MI);
		VirtActionInvoker2< t11*, bool >::Invoke(&m21850_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m21835_MI;
 void m21835 (t1033 * __this, t5 * p0, t5 * p1, MethodInfo* method){
	{
		t11* L_0 = m21866(__this, p0, &m21866_MI);
		bool L_1 = m21867(__this, p1, &m21867_MI);
		VirtActionInvoker2< t11*, bool >::Invoke(&m4823_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m21836_MI;
 void m21836 (t1033 * __this, t5 * p0, MethodInfo* method){
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
		if (!((t11*)IsInst(p0, (&t11_TI))))
		{
			goto IL_0023;
		}
	}
	{
		VirtFuncInvoker1< bool, t11* >::Invoke(&m21863_MI, __this, ((t11*)Castclass(p0, (&t11_TI))));
	}

IL_0023:
	{
		return;
	}
}
extern MethodInfo m21837_MI;
 bool m21837 (t1033 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m21838_MI;
 t5 * m21838 (t1033 * __this, MethodInfo* method){
	{
		return __this;
	}
}
extern MethodInfo m21839_MI;
 bool m21839 (t1033 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m21840_MI;
 void m21840 (t1033 * __this, t3832  p0, MethodInfo* method){
	{
		t11* L_0 = m21872((&p0), &m21872_MI);
		bool L_1 = m21874((&p0), &m21874_MI);
		VirtActionInvoker2< t11*, bool >::Invoke(&m4823_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m21841_MI;
 bool m21841 (t1033 * __this, t3832  p0, MethodInfo* method){
	{
		bool L_0 = m21868(__this, p0, &m21868_MI);
		return L_0;
	}
}
extern MethodInfo m21842_MI;
 void m21842 (t1033 * __this, t3831* p0, int32_t p1, MethodInfo* method){
	{
		m21856(__this, p0, p1, &m21856_MI);
		return;
	}
}
extern MethodInfo m21843_MI;
 bool m21843 (t1033 * __this, t3832  p0, MethodInfo* method){
	{
		bool L_0 = m21868(__this, p0, &m21868_MI);
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
		t11* L_1 = m21872((&p0), &m21872_MI);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t11* >::Invoke(&m21863_MI, __this, L_1);
		return L_2;
	}
}
extern MethodInfo m21844_MI;
 void m21844 (t1033 * __this, t107 * p0, int32_t p1, MethodInfo* method){
	t3831* V_0 = {0};
	t4182* V_1 = {0};
	int32_t G_B5_0 = 0;
	t4182* G_B5_1 = {0};
	t1033 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t4182* G_B4_1 = {0};
	t1033 * G_B4_2 = {0};
	{
		V_0 = ((t3831*)IsInst(p0, InitializedTypeInfo(&t3831_TI)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		m21856(__this, V_0, p1, &m21856_MI);
		return;
	}

IL_0013:
	{
		m21853(__this, p0, p1, &m21853_MI);
		V_1 = ((t4182*)IsInst(p0, InitializedTypeInfo(&t4182_TI)));
		if (!V_1)
		{
			goto IL_004b;
		}
	}
	{
		G_B4_0 = p1;
		G_B4_1 = V_1;
		G_B4_2 = ((t1033 *)(__this));
		if ((((t1033_SFs*)InitializedTypeInfo(&t1033_TI)->static_fields)->f15))
		{
			G_B5_0 = p1;
			G_B5_1 = V_1;
			G_B5_2 = ((t1033 *)(__this));
			goto IL_0040;
		}
	}
	{
		t124 L_0 = { &m21870_MI };
		t3829 * L_1 = (t3829 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t3829_TI));
		m21917(L_1, NULL, L_0, &m21917_MI);
		((t1033_SFs*)InitializedTypeInfo(&t1033_TI)->static_fields)->f15 = L_1;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((t1033 *)(G_B4_2));
	}

IL_0040:
	{
		m28077(G_B5_2, G_B5_1, G_B5_0, (((t1033_SFs*)InitializedTypeInfo(&t1033_TI)->static_fields)->f15), &m28077_MI);
		return;
	}

IL_004b:
	{
		t124 L_2 = { &m21854_MI };
		t3839 * L_3 = (t3839 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t3839_TI));
		m21921(L_3, NULL, L_2, &m21921_MI);
		m28079(__this, p0, p1, L_3, &m28079_MI);
		return;
	}
}
extern MethodInfo m21845_MI;
 t5 * m21845 (t1033 * __this, MethodInfo* method){
	{
		t3834  L_0 = {0};
		m21901(&L_0, __this, &m21901_MI);
		t3834  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t3834_TI), &L_1);
		return (t5 *)L_2;
	}
}
extern MethodInfo m21846_MI;
 t5* m21846 (t1033 * __this, MethodInfo* method){
	{
		t3834  L_0 = {0};
		m21901(&L_0, __this, &m21901_MI);
		t3834  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t3834_TI), &L_1);
		return (t5*)L_2;
	}
}
extern MethodInfo m21847_MI;
 t5 * m21847 (t1033 * __this, MethodInfo* method){
	{
		t3840 * L_0 = (t3840 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t3840_TI));
		m21925(L_0, __this, &m21925_MI);
		return L_0;
	}
}
 int32_t m21848 (t1033 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f10);
		return L_0;
	}
}
 bool m21849 (t1033 * __this, t11* p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t11* L_0 = p0;
		if (((t11*)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t484 * L_1 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3595(L_1, (t11*) &_stringLiteral238, &m3595_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t5* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t11* >::Invoke(&m31856_MI, L_2, p0);
		V_0 = ((int32_t)((int32_t)L_3|(int32_t)((int32_t)-2147483648)));
		t55* L_4 = (__this->f4);
		t55* L_5 = (__this->f4);
		int32_t L_6 = ((int32_t)(((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(((int32_t)(((t107 *)L_5)->max_length)))));
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-1));
		goto IL_008f;
	}

IL_0042:
	{
		t2297* L_7 = (__this->f5);
		int32_t L_8 = (((t1511 *)(t1511 *)SZArrayLdElema(L_7, V_1))->f0);
		if ((((uint32_t)L_8) != ((uint32_t)V_0)))
		{
			goto IL_007d;
		}
	}
	{
		t5* L_9 = (__this->f12);
		t585* L_10 = (__this->f6);
		int32_t L_11 = V_1;
		bool L_12 = (bool)InterfaceFuncInvoker2< bool, t11*, t11* >::Invoke(&m31855_MI, L_9, (*(t11**)(t11**)SZArrayLdElema(L_10, L_11)), p0);
		if (!L_12)
		{
			goto IL_007d;
		}
	}
	{
		t1034* L_13 = (__this->f7);
		int32_t L_14 = V_1;
		return (*(bool*)(bool*)SZArrayLdElema(L_13, L_14));
	}

IL_007d:
	{
		t2297* L_15 = (__this->f5);
		int32_t L_16 = (((t1511 *)(t1511 *)SZArrayLdElema(L_15, V_1))->f1);
		V_1 = L_16;
	}

IL_008f:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		t1521 * L_17 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m7379(L_17, &m7379_MI);
		il2cpp_codegen_raise_exception(L_17);
	}
}
 void m21850 (t1033 * __this, t11* p0, bool p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		t11* L_0 = p0;
		if (((t11*)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t484 * L_1 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3595(L_1, (t11*) &_stringLiteral238, &m3595_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t5* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t11* >::Invoke(&m31856_MI, L_2, p0);
		V_0 = ((int32_t)((int32_t)L_3|(int32_t)((int32_t)-2147483648)));
		t55* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(((int32_t)(((t107 *)L_4)->max_length)))));
		t55* L_5 = (__this->f4);
		int32_t L_6 = V_1;
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_6))-1));
		V_3 = (-1);
		if ((((int32_t)V_2) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		t2297* L_7 = (__this->f5);
		int32_t L_8 = (((t1511 *)(t1511 *)SZArrayLdElema(L_7, V_2))->f0);
		if ((((uint32_t)L_8) != ((uint32_t)V_0)))
		{
			goto IL_0078;
		}
	}
	{
		t5* L_9 = (__this->f12);
		t585* L_10 = (__this->f6);
		int32_t L_11 = V_2;
		bool L_12 = (bool)InterfaceFuncInvoker2< bool, t11*, t11* >::Invoke(&m31855_MI, L_9, (*(t11**)(t11**)SZArrayLdElema(L_10, L_11)), p0);
		if (!L_12)
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
		t2297* L_13 = (__this->f5);
		int32_t L_14 = (((t1511 *)(t1511 *)SZArrayLdElema(L_13, V_2))->f1);
		V_2 = L_14;
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
		int32_t L_15 = (__this->f10);
		int32_t L_16 = ((int32_t)(L_15+1));
		V_4 = L_16;
		__this->f10 = L_16;
		int32_t L_17 = (__this->f11);
		if ((((int32_t)V_4) <= ((int32_t)L_17)))
		{
			goto IL_00c9;
		}
	}
	{
		m21857(__this, &m21857_MI);
		t55* L_18 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(((int32_t)(((t107 *)L_18)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_19 = (__this->f9);
		V_2 = L_19;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_20 = (__this->f8);
		int32_t L_21 = L_20;
		V_4 = L_21;
		__this->f8 = ((int32_t)(L_21+1));
		V_2 = V_4;
		goto IL_0101;
	}

IL_00ea:
	{
		t2297* L_22 = (__this->f5);
		int32_t L_23 = (((t1511 *)(t1511 *)SZArrayLdElema(L_22, V_2))->f1);
		__this->f9 = L_23;
	}

IL_0101:
	{
		t2297* L_24 = (__this->f5);
		t55* L_25 = (__this->f4);
		int32_t L_26 = V_1;
		((t1511 *)(t1511 *)SZArrayLdElema(L_24, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_25, L_26))-1));
		t55* L_27 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_27, V_1)) = (int32_t)((int32_t)(V_2+1));
		t2297* L_28 = (__this->f5);
		((t1511 *)(t1511 *)SZArrayLdElema(L_28, V_2))->f0 = V_0;
		t585* L_29 = (__this->f6);
		*((t11**)(t11**)SZArrayLdElema(L_29, V_2)) = (t11*)p0;
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
		t2297* L_30 = (__this->f5);
		t2297* L_31 = (__this->f5);
		int32_t L_32 = (((t1511 *)(t1511 *)SZArrayLdElema(L_31, V_2))->f1);
		((t1511 *)(t1511 *)SZArrayLdElema(L_30, V_3))->f1 = L_32;
		t2297* L_33 = (__this->f5);
		t55* L_34 = (__this->f4);
		int32_t L_35 = V_1;
		((t1511 *)(t1511 *)SZArrayLdElema(L_33, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_34, L_35))-1));
		t55* L_36 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_36, V_1)) = (int32_t)((int32_t)(V_2+1));
	}

IL_0194:
	{
		t1034* L_37 = (__this->f7);
		*((bool*)(bool*)SZArrayLdElema(L_37, V_2)) = (bool)p1;
		int32_t L_38 = (__this->f14);
		__this->f14 = ((int32_t)(L_38+1));
		return;
	}
}
 void m21851 (t1033 * __this, int32_t p0, t5* p1, MethodInfo* method){
	t5* V_0 = {0};
	t1033 * G_B4_0 = {0};
	t1033 * G_B3_0 = {0};
	t5* G_B5_0 = {0};
	t1033 * G_B5_1 = {0};
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
		G_B3_0 = ((t1033 *)(__this));
		if (!p1)
		{
			G_B4_0 = ((t1033 *)(__this));
			goto IL_0018;
		}
	}
	{
		V_0 = p1;
		G_B5_0 = V_0;
		G_B5_1 = ((t1033 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2619_TI));
		t2619 * L_1 = m13086(NULL, &m13086_MI);
		G_B5_0 = ((t5*)(L_1));
		G_B5_1 = ((t1033 *)(G_B4_0));
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
		m21852(__this, p0, &m21852_MI);
		__this->f14 = 0;
		return;
	}
}
 void m21852 (t1033 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f4 = ((t55*)SZArrayNew(InitializedTypeInfo(&t55_TI), p0));
		__this->f5 = ((t2297*)SZArrayNew(InitializedTypeInfo(&t2297_TI), p0));
		__this->f9 = (-1);
		__this->f6 = ((t585*)SZArrayNew(InitializedTypeInfo(&t585_TI), p0));
		__this->f7 = ((t1034*)SZArrayNew(InitializedTypeInfo(&t1034_TI), p0));
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
 void m21853 (t1033 * __this, t107 * p0, int32_t p1, MethodInfo* method){
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
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m21848_MI, __this);
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
 t3832  m21854 (t5 * __this, t11* p0, bool p1, MethodInfo* method){
	{
		t3832  L_0 = {0};
		m21871(&L_0, p0, p1, &m21871_MI);
		return L_0;
	}
}
extern MethodInfo m21855_MI;
 bool m21855 (t5 * __this, t11* p0, bool p1, MethodInfo* method){
	{
		return p1;
	}
}
 void m21856 (t1033 * __this, t3831* p0, int32_t p1, MethodInfo* method){
	{
		m21853(__this, (t107 *)(t107 *)p0, p1, &m21853_MI);
		t124 L_0 = { &m21854_MI };
		t3839 * L_1 = (t3839 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t3839_TI));
		m21921(L_1, NULL, L_0, &m21921_MI);
		m28080(__this, p0, p1, L_1, &m28080_MI);
		return;
	}
}
 void m21857 (t1033 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	t55* V_1 = {0};
	t2297* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t585* V_7 = {0};
	t1034* V_8 = {0};
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
		t585* L_5 = (__this->f6);
		int32_t L_6 = V_4;
		int32_t L_7 = (int32_t)InterfaceFuncInvoker1< int32_t, t11* >::Invoke(&m31856_MI, L_4, (*(t11**)(t11**)SZArrayLdElema(L_5, L_6)));
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
		V_7 = ((t585*)SZArrayNew(InitializedTypeInfo(&t585_TI), V_0));
		V_8 = ((t1034*)SZArrayNew(InitializedTypeInfo(&t1034_TI), V_0));
		t585* L_13 = (__this->f6);
		int32_t L_14 = (__this->f8);
		m6741(NULL, (t107 *)(t107 *)L_13, 0, (t107 *)(t107 *)V_7, 0, L_14, &m6741_MI);
		t1034* L_15 = (__this->f7);
		int32_t L_16 = (__this->f8);
		m6741(NULL, (t107 *)(t107 *)L_15, 0, (t107 *)(t107 *)V_8, 0, L_16, &m6741_MI);
		__this->f6 = V_7;
		__this->f7 = V_8;
		__this->f11 = (((int32_t)((float)((float)(((float)V_0))*(float)(0.9f)))));
		return;
	}
}
 void m4823 (t1033 * __this, t11* p0, bool p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		t11* L_0 = p0;
		if (((t11*)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t484 * L_1 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3595(L_1, (t11*) &_stringLiteral238, &m3595_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t5* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t11* >::Invoke(&m31856_MI, L_2, p0);
		V_0 = ((int32_t)((int32_t)L_3|(int32_t)((int32_t)-2147483648)));
		t55* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(((int32_t)(((t107 *)L_4)->max_length)))));
		t55* L_5 = (__this->f4);
		int32_t L_6 = V_1;
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_6))-1));
		goto IL_008f;
	}

IL_0044:
	{
		t2297* L_7 = (__this->f5);
		int32_t L_8 = (((t1511 *)(t1511 *)SZArrayLdElema(L_7, V_2))->f0);
		if ((((uint32_t)L_8) != ((uint32_t)V_0)))
		{
			goto IL_007d;
		}
	}
	{
		t5* L_9 = (__this->f12);
		t585* L_10 = (__this->f6);
		int32_t L_11 = V_2;
		bool L_12 = (bool)InterfaceFuncInvoker2< bool, t11*, t11* >::Invoke(&m31855_MI, L_9, (*(t11**)(t11**)SZArrayLdElema(L_10, L_11)), p0);
		if (!L_12)
		{
			goto IL_007d;
		}
	}
	{
		t160 * L_13 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_13, (t11*) &_stringLiteral1210, &m2581_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_007d:
	{
		t2297* L_14 = (__this->f5);
		int32_t L_15 = (((t1511 *)(t1511 *)SZArrayLdElema(L_14, V_2))->f1);
		V_2 = L_15;
	}

IL_008f:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_16 = (__this->f10);
		int32_t L_17 = ((int32_t)(L_16+1));
		V_3 = L_17;
		__this->f10 = L_17;
		int32_t L_18 = (__this->f11);
		if ((((int32_t)V_3) <= ((int32_t)L_18)))
		{
			goto IL_00c3;
		}
	}
	{
		m21857(__this, &m21857_MI);
		t55* L_19 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(((int32_t)(((t107 *)L_19)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_20 = (__this->f9);
		V_2 = L_20;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_21 = (__this->f8);
		int32_t L_22 = L_21;
		V_3 = L_22;
		__this->f8 = ((int32_t)(L_22+1));
		V_2 = V_3;
		goto IL_00f9;
	}

IL_00e2:
	{
		t2297* L_23 = (__this->f5);
		int32_t L_24 = (((t1511 *)(t1511 *)SZArrayLdElema(L_23, V_2))->f1);
		__this->f9 = L_24;
	}

IL_00f9:
	{
		t2297* L_25 = (__this->f5);
		((t1511 *)(t1511 *)SZArrayLdElema(L_25, V_2))->f0 = V_0;
		t2297* L_26 = (__this->f5);
		t55* L_27 = (__this->f4);
		int32_t L_28 = V_1;
		((t1511 *)(t1511 *)SZArrayLdElema(L_26, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_27, L_28))-1));
		t55* L_29 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_29, V_1)) = (int32_t)((int32_t)(V_2+1));
		t585* L_30 = (__this->f6);
		*((t11**)(t11**)SZArrayLdElema(L_30, V_2)) = (t11*)p0;
		t1034* L_31 = (__this->f7);
		*((bool*)(bool*)SZArrayLdElema(L_31, V_2)) = (bool)p1;
		int32_t L_32 = (__this->f14);
		__this->f14 = ((int32_t)(L_32+1));
		return;
	}
}
extern MethodInfo m21858_MI;
 void m21858 (t1033 * __this, MethodInfo* method){
	{
		__this->f10 = 0;
		t55* L_0 = (__this->f4);
		t55* L_1 = (__this->f4);
		m5904(NULL, (t107 *)(t107 *)L_0, 0, (((int32_t)(((t107 *)L_1)->max_length))), &m5904_MI);
		t585* L_2 = (__this->f6);
		t585* L_3 = (__this->f6);
		m5904(NULL, (t107 *)(t107 *)L_2, 0, (((int32_t)(((t107 *)L_3)->max_length))), &m5904_MI);
		t1034* L_4 = (__this->f7);
		t1034* L_5 = (__this->f7);
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
 bool m21859 (t1033 * __this, t11* p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t11* L_0 = p0;
		if (((t11*)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t484 * L_1 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3595(L_1, (t11*) &_stringLiteral238, &m3595_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t5* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t11* >::Invoke(&m31856_MI, L_2, p0);
		V_0 = ((int32_t)((int32_t)L_3|(int32_t)((int32_t)-2147483648)));
		t55* L_4 = (__this->f4);
		t55* L_5 = (__this->f4);
		int32_t L_6 = ((int32_t)(((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(((int32_t)(((t107 *)L_5)->max_length)))));
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-1));
		goto IL_0084;
	}

IL_0042:
	{
		t2297* L_7 = (__this->f5);
		int32_t L_8 = (((t1511 *)(t1511 *)SZArrayLdElema(L_7, V_1))->f0);
		if ((((uint32_t)L_8) != ((uint32_t)V_0)))
		{
			goto IL_0072;
		}
	}
	{
		t5* L_9 = (__this->f12);
		t585* L_10 = (__this->f6);
		int32_t L_11 = V_1;
		bool L_12 = (bool)InterfaceFuncInvoker2< bool, t11*, t11* >::Invoke(&m31855_MI, L_9, (*(t11**)(t11**)SZArrayLdElema(L_10, L_11)), p0);
		if (!L_12)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		t2297* L_13 = (__this->f5);
		int32_t L_14 = (((t1511 *)(t1511 *)SZArrayLdElema(L_13, V_1))->f1);
		V_1 = L_14;
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
extern MethodInfo m21860_MI;
 bool m21860 (t1033 * __this, bool p0, MethodInfo* method){
	t5* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t3841_TI));
		t3841 * L_0 = m21935(NULL, &m21935_MI);
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
		t1034* L_3 = (__this->f7);
		int32_t L_4 = V_2;
		bool L_5 = (bool)InterfaceFuncInvoker2< bool, bool, bool >::Invoke(&m36010_MI, V_0, (*(bool*)(bool*)SZArrayLdElema(L_3, L_4)), p0);
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
extern MethodInfo m21861_MI;
 void m21861 (t1033 * __this, t829 * p0, t830  p1, MethodInfo* method){
	t3831* V_0 = {0};
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
		V_0 = (t3831*)NULL;
		int32_t L_3 = (__this->f10);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_4 = (__this->f10);
		V_0 = ((t3831*)SZArrayNew(InitializedTypeInfo(&t3831_TI), L_4));
		m21856(__this, V_0, 0, &m21856_MI);
	}

IL_004f:
	{
		t55* L_5 = (__this->f4);
		m4776(p0, (t11*) &_stringLiteral1211, (((int32_t)(((t107 *)L_5)->max_length))), &m4776_MI);
		m4789(p0, (t11*) &_stringLiteral1212, (t5 *)(t5 *)V_0, &m4789_MI);
		return;
	}
}
extern MethodInfo m21862_MI;
 void m21862 (t1033 * __this, t5 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	t3831* V_1 = {0};
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
		t114 * L_4 = m532(NULL, LoadTypeToken(&t2437_0_0_0), &m532_MI);
		t5 * L_5 = m4777(L_3, (t11*) &_stringLiteral251, L_4, &m4777_MI);
		__this->f12 = ((t5*)Castclass(L_5, InitializedTypeInfo(&t2437_TI)));
		t829 * L_6 = (__this->f13);
		int32_t L_7 = m4788(L_6, (t11*) &_stringLiteral1211, &m4788_MI);
		V_0 = L_7;
		t829 * L_8 = (__this->f13);
		t114 * L_9 = m532(NULL, LoadTypeToken(&t3831_0_0_0), &m532_MI);
		t5 * L_10 = m4777(L_8, (t11*) &_stringLiteral1212, L_9, &m4777_MI);
		V_1 = ((t3831*)Castclass(L_10, InitializedTypeInfo(&t3831_TI)));
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
		m21852(__this, V_0, &m21852_MI);
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
		t11* L_11 = m21872(((t3832 *)(t3832 *)SZArrayLdElema(V_1, V_2)), &m21872_MI);
		bool L_12 = m21874(((t3832 *)(t3832 *)SZArrayLdElema(V_1, V_2)), &m21874_MI);
		VirtActionInvoker2< t11*, bool >::Invoke(&m4823_MI, __this, L_11, L_12);
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
 bool m21863 (t1033 * __this, t11* p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t11* V_4 = {0};
	bool V_5 = false;
	{
		t11* L_0 = p0;
		if (((t11*)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t484 * L_1 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3595(L_1, (t11*) &_stringLiteral238, &m3595_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t5* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t11* >::Invoke(&m31856_MI, L_2, p0);
		V_0 = ((int32_t)((int32_t)L_3|(int32_t)((int32_t)-2147483648)));
		t55* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(((int32_t)(((t107 *)L_4)->max_length)))));
		t55* L_5 = (__this->f4);
		int32_t L_6 = V_1;
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_6))-1));
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
		t2297* L_7 = (__this->f5);
		int32_t L_8 = (((t1511 *)(t1511 *)SZArrayLdElema(L_7, V_2))->f0);
		if ((((uint32_t)L_8) != ((uint32_t)V_0)))
		{
			goto IL_007a;
		}
	}
	{
		t5* L_9 = (__this->f12);
		t585* L_10 = (__this->f6);
		int32_t L_11 = V_2;
		bool L_12 = (bool)InterfaceFuncInvoker2< bool, t11*, t11* >::Invoke(&m31855_MI, L_9, (*(t11**)(t11**)SZArrayLdElema(L_10, L_11)), p0);
		if (!L_12)
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
		t2297* L_13 = (__this->f5);
		int32_t L_14 = (((t1511 *)(t1511 *)SZArrayLdElema(L_13, V_2))->f1);
		V_2 = L_14;
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
		int32_t L_15 = (__this->f10);
		__this->f10 = ((int32_t)(L_15-1));
		if ((((uint32_t)V_3) != ((uint32_t)(-1))))
		{
			goto IL_00c7;
		}
	}
	{
		t55* L_16 = (__this->f4);
		t2297* L_17 = (__this->f5);
		int32_t L_18 = (((t1511 *)(t1511 *)SZArrayLdElema(L_17, V_2))->f1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_16, V_1)) = (int32_t)((int32_t)(L_18+1));
		goto IL_00e9;
	}

IL_00c7:
	{
		t2297* L_19 = (__this->f5);
		t2297* L_20 = (__this->f5);
		int32_t L_21 = (((t1511 *)(t1511 *)SZArrayLdElema(L_20, V_2))->f1);
		((t1511 *)(t1511 *)SZArrayLdElema(L_19, V_3))->f1 = L_21;
	}

IL_00e9:
	{
		t2297* L_22 = (__this->f5);
		int32_t L_23 = (__this->f9);
		((t1511 *)(t1511 *)SZArrayLdElema(L_22, V_2))->f1 = L_23;
		__this->f9 = V_2;
		t2297* L_24 = (__this->f5);
		((t1511 *)(t1511 *)SZArrayLdElema(L_24, V_2))->f0 = 0;
		t585* L_25 = (__this->f6);
		Initobj (&t11_TI, (&V_4));
		*((t11**)(t11**)SZArrayLdElema(L_25, V_2)) = (t11*)V_4;
		t1034* L_26 = (__this->f7);
		Initobj (&t108_TI, (&V_5));
		*((bool*)(bool*)SZArrayLdElema(L_26, V_2)) = (bool)V_5;
		int32_t L_27 = (__this->f14);
		__this->f14 = ((int32_t)(L_27+1));
		return 1;
	}
}
 bool m21864 (t1033 * __this, t11* p0, bool* p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		t11* L_0 = p0;
		if (((t11*)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t484 * L_1 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3595(L_1, (t11*) &_stringLiteral238, &m3595_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t5* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t11* >::Invoke(&m31856_MI, L_2, p0);
		V_0 = ((int32_t)((int32_t)L_3|(int32_t)((int32_t)-2147483648)));
		t55* L_4 = (__this->f4);
		t55* L_5 = (__this->f4);
		int32_t L_6 = ((int32_t)(((int32_t)((int32_t)V_0&(int32_t)((int32_t)2147483647)))%(((int32_t)(((t107 *)L_5)->max_length)))));
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-1));
		goto IL_0096;
	}

IL_0042:
	{
		t2297* L_7 = (__this->f5);
		int32_t L_8 = (((t1511 *)(t1511 *)SZArrayLdElema(L_7, V_1))->f0);
		if ((((uint32_t)L_8) != ((uint32_t)V_0)))
		{
			goto IL_0084;
		}
	}
	{
		t5* L_9 = (__this->f12);
		t585* L_10 = (__this->f6);
		int32_t L_11 = V_1;
		bool L_12 = (bool)InterfaceFuncInvoker2< bool, t11*, t11* >::Invoke(&m31855_MI, L_9, (*(t11**)(t11**)SZArrayLdElema(L_10, L_11)), p0);
		if (!L_12)
		{
			goto IL_0084;
		}
	}
	{
		t1034* L_13 = (__this->f7);
		int32_t L_14 = V_1;
		*p1 = (*(bool*)(bool*)SZArrayLdElema(L_13, L_14));
		return 1;
	}

IL_0084:
	{
		t2297* L_15 = (__this->f5);
		int32_t L_16 = (((t1511 *)(t1511 *)SZArrayLdElema(L_15, V_1))->f1);
		V_1 = L_16;
	}

IL_0096:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		Initobj (&t108_TI, (&V_2));
		*p1 = V_2;
		return 0;
	}
}
extern MethodInfo m21865_MI;
 t3830 * m21865 (t1033 * __this, MethodInfo* method){
	{
		t3830 * L_0 = (t3830 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t3830_TI));
		m21882(L_0, __this, &m21882_MI);
		return L_0;
	}
}
 t11* m21866 (t1033 * __this, t5 * p0, MethodInfo* method){
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
		if (((t11*)IsInst(p0, (&t11_TI))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_1 = m532(NULL, LoadTypeToken(&t11_0_0_0), &m532_MI);
		t11* L_2 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m6830_MI, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_3 = m2409(NULL, (t11*) &_stringLiteral1213, L_2, &m2409_MI);
		t160 * L_4 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m613(L_4, L_3, (t11*) &_stringLiteral238, &m613_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_003a:
	{
		return ((t11*)Castclass(p0, (&t11_TI)));
	}
}
 bool m21867 (t1033 * __this, t5 * p0, MethodInfo* method){
	bool V_0 = false;
	{
		if (p0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_0 = m532(NULL, LoadTypeToken(&t108_0_0_0), &m532_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6793_MI, L_0);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (&t108_TI, (&V_0));
		return V_0;
	}

IL_001e:
	{
		if (((t5 *)IsInst(p0, InitializedTypeInfo(&t108_TI))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_2 = m532(NULL, LoadTypeToken(&t108_0_0_0), &m532_MI);
		t11* L_3 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m6830_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_4 = m2409(NULL, (t11*) &_stringLiteral1213, L_3, &m2409_MI);
		t160 * L_5 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m613(L_5, L_4, (t11*) &_stringLiteral442, &m613_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_004a:
	{
		return ((*(bool*)((bool*)UnBox (p0, InitializedTypeInfo(&t108_TI)))));
	}
}
 bool m21868 (t1033 * __this, t3832  p0, MethodInfo* method){
	bool V_0 = false;
	{
		t11* L_0 = m21872((&p0), &m21872_MI);
		bool L_1 = (bool)VirtFuncInvoker2< bool, t11*, bool* >::Invoke(&m21864_MI, __this, L_0, (&V_0));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t3841_TI));
		t3841 * L_2 = m21935(NULL, &m21935_MI);
		bool L_3 = m21874((&p0), &m21874_MI);
		bool L_4 = (bool)VirtFuncInvoker2< bool, bool, bool >::Invoke(&m36011_MI, L_2, L_3, V_0);
		return L_4;
	}
}
extern MethodInfo m21869_MI;
 t3834  m21869 (t1033 * __this, MethodInfo* method){
	{
		t3834  L_0 = {0};
		m21901(&L_0, __this, &m21901_MI);
		return L_0;
	}
}
 t990  m21870 (t5 * __this, t11* p0, bool p1, MethodInfo* method){
	{
		t11* L_0 = p0;
		bool L_1 = p1;
		t5 * L_2 = Box(InitializedTypeInfo(&t108_TI), &L_1);
		t990  L_3 = {0};
		m4759(&L_3, ((t11*)L_0), L_2, &m4759_MI);
		return L_3;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
extern Il2CppType t110_0_0_32849;
FieldInfo t1033_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t110_0_0_32849, &t1033_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t116_0_0_32849;
FieldInfo t1033_f1_FieldInfo = 
{
	"DEFAULT_LOAD_FACTOR", &t116_0_0_32849, &t1033_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_32849;
FieldInfo t1033_f2_FieldInfo = 
{
	"NO_SLOT", &t110_0_0_32849, &t1033_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_32849;
FieldInfo t1033_f3_FieldInfo = 
{
	"HASH_FLAG", &t110_0_0_32849, &t1033_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t55_0_0_1;
FieldInfo t1033_f4_FieldInfo = 
{
	"table", &t55_0_0_1, &t1033_TI, offsetof(t1033, f4), &EmptyCustomAttributesCache};
extern Il2CppType t2297_0_0_1;
FieldInfo t1033_f5_FieldInfo = 
{
	"linkSlots", &t2297_0_0_1, &t1033_TI, offsetof(t1033, f5), &EmptyCustomAttributesCache};
extern Il2CppType t585_0_0_1;
FieldInfo t1033_f6_FieldInfo = 
{
	"keySlots", &t585_0_0_1, &t1033_TI, offsetof(t1033, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1034_0_0_1;
FieldInfo t1033_f7_FieldInfo = 
{
	"valueSlots", &t1034_0_0_1, &t1033_TI, offsetof(t1033, f7), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1033_f8_FieldInfo = 
{
	"touchedSlots", &t110_0_0_1, &t1033_TI, offsetof(t1033, f8), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1033_f9_FieldInfo = 
{
	"emptySlot", &t110_0_0_1, &t1033_TI, offsetof(t1033, f9), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1033_f10_FieldInfo = 
{
	"count", &t110_0_0_1, &t1033_TI, offsetof(t1033, f10), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1033_f11_FieldInfo = 
{
	"threshold", &t110_0_0_1, &t1033_TI, offsetof(t1033, f11), &EmptyCustomAttributesCache};
extern Il2CppType t2437_0_0_1;
FieldInfo t1033_f12_FieldInfo = 
{
	"hcp", &t2437_0_0_1, &t1033_TI, offsetof(t1033, f12), &EmptyCustomAttributesCache};
extern Il2CppType t829_0_0_1;
FieldInfo t1033_f13_FieldInfo = 
{
	"serialization_info", &t829_0_0_1, &t1033_TI, offsetof(t1033, f13), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1033_f14_FieldInfo = 
{
	"generation", &t110_0_0_1, &t1033_TI, offsetof(t1033, f14), &EmptyCustomAttributesCache};
extern Il2CppType t3829_0_0_17;
extern CustomAttributesCache t1517__CustomAttributeCache_U3CU3Ef__am$cacheB;
FieldInfo t1033_f15_FieldInfo = 
{
	"<>f__am$cacheB", &t3829_0_0_17, &t1033_TI, offsetof(t1033_SFs, f15), &t1517__CustomAttributeCache_U3CU3Ef__am$cacheB};
static FieldInfo* t1033_FIs[] =
{
	&t1033_f0_FieldInfo,
	&t1033_f1_FieldInfo,
	&t1033_f2_FieldInfo,
	&t1033_f3_FieldInfo,
	&t1033_f4_FieldInfo,
	&t1033_f5_FieldInfo,
	&t1033_f6_FieldInfo,
	&t1033_f7_FieldInfo,
	&t1033_f8_FieldInfo,
	&t1033_f9_FieldInfo,
	&t1033_f10_FieldInfo,
	&t1033_f11_FieldInfo,
	&t1033_f12_FieldInfo,
	&t1033_f13_FieldInfo,
	&t1033_f14_FieldInfo,
	&t1033_f15_FieldInfo,
	NULL
};
static const int32_t t1033_f0_DefaultValueData = 10;
static Il2CppFieldDefaultValueEntry t1033_f0_DefaultValue = 
{
	&t1033_f0_FieldInfo, { (char*)&t1033_f0_DefaultValueData, &t110_0_0_0 }};
static const float t1033_f1_DefaultValueData = 0.9f;
extern Il2CppType t116_0_0_0;
static Il2CppFieldDefaultValueEntry t1033_f1_DefaultValue = 
{
	&t1033_f1_FieldInfo, { (char*)&t1033_f1_DefaultValueData, &t116_0_0_0 }};
static const int32_t t1033_f2_DefaultValueData = -1;
static Il2CppFieldDefaultValueEntry t1033_f2_DefaultValue = 
{
	&t1033_f2_FieldInfo, { (char*)&t1033_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1033_f3_DefaultValueData = -2147483648;
static Il2CppFieldDefaultValueEntry t1033_f3_DefaultValue = 
{
	&t1033_f3_FieldInfo, { (char*)&t1033_f3_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1033_FDVs[] = 
{
	&t1033_f0_DefaultValue,
	&t1033_f1_DefaultValue,
	&t1033_f2_DefaultValue,
	&t1033_f3_DefaultValue,
	NULL
};
static PropertyInfo t1033____System_Collections_IDictionary_Item_PropertyInfo = 
{
	&t1033_TI, "System.Collections.IDictionary.Item", &m21833_MI, &m21834_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1033____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1033_TI, "System.Collections.ICollection.IsSynchronized", &m21837_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1033____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1033_TI, "System.Collections.ICollection.SyncRoot", &m21838_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1033____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo = 
{
	&t1033_TI, "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.IsReadOnly", &m21839_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1033____Count_PropertyInfo = 
{
	&t1033_TI, "Count", &m21848_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1033____Item_PropertyInfo = 
{
	&t1033_TI, "Item", &m21849_MI, &m21850_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1033____Values_PropertyInfo = 
{
	&t1033_TI, "Values", &m21865_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1033_PIs[] =
{
	&t1033____System_Collections_IDictionary_Item_PropertyInfo,
	&t1033____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1033____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1033____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo,
	&t1033____Count_PropertyInfo,
	&t1033____Item_PropertyInfo,
	&t1033____Values_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21830_GM;
MethodInfo m21830_MI = 
{
	".ctor", (methodPointerType)&m21830, &t1033_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21830_GM};
extern Il2CppType t2437_0_0_0;
static ParameterInfo t1033_m4822_ParameterInfos[] = 
{
	{"comparer", 0, 134217728, &EmptyCustomAttributesCache, &t2437_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m4822_GM;
MethodInfo m4822_MI = 
{
	".ctor", (methodPointerType)&m4822, &t1033_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1033_m4822_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m4822_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1033_m21831_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21831_GM;
MethodInfo m21831_MI = 
{
	".ctor", (methodPointerType)&m21831, &t1033_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1033_m21831_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21831_GM};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1033_m21832_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21832_GM;
MethodInfo m21832_MI = 
{
	".ctor", (methodPointerType)&m21832, &t1033_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1033_m21832_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21832_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1033_m21833_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21833_GM;
MethodInfo m21833_MI = 
{
	"System.Collections.IDictionary.get_Item", (methodPointerType)&m21833, &t1033_TI, &t5_0_0_0, RuntimeInvoker_t5_t5, t1033_m21833_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21833_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1033_m21834_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21834_GM;
MethodInfo m21834_MI = 
{
	"System.Collections.IDictionary.set_Item", (methodPointerType)&m21834, &t1033_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t1033_m21834_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 20, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21834_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1033_m21835_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21835_GM;
MethodInfo m21835_MI = 
{
	"System.Collections.IDictionary.Add", (methodPointerType)&m21835, &t1033_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t1033_m21835_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 21, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21835_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1033_m21836_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21836_GM;
MethodInfo m21836_MI = 
{
	"System.Collections.IDictionary.Remove", (methodPointerType)&m21836, &t1033_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1033_m21836_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 23, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21836_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21837_GM;
MethodInfo m21837_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m21837, &t1033_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21837_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21838_GM;
MethodInfo m21838_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m21838, &t1033_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21838_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21839_GM;
MethodInfo m21839_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly", (methodPointerType)&m21839, &t1033_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 11, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21839_GM};
extern Il2CppType t3832_0_0_0;
extern Il2CppType t3832_0_0_0;
static ParameterInfo t1033_m21840_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t3832_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t3832 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21840_GM;
MethodInfo m21840_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add", (methodPointerType)&m21840, &t1033_TI, &t109_0_0_0, RuntimeInvoker_t109_t3832, t1033_m21840_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21840_GM};
extern Il2CppType t3832_0_0_0;
static ParameterInfo t1033_m21841_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t3832_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t3832 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21841_GM;
MethodInfo m21841_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains", (methodPointerType)&m21841, &t1033_TI, &t108_0_0_0, RuntimeInvoker_t108_t3832, t1033_m21841_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 14, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21841_GM};
extern Il2CppType t3831_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1033_m21842_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3831_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21842_GM;
MethodInfo m21842_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo", (methodPointerType)&m21842, &t1033_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t1033_m21842_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21842_GM};
extern Il2CppType t3832_0_0_0;
static ParameterInfo t1033_m21843_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t3832_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t3832 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21843_GM;
MethodInfo m21843_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove", (methodPointerType)&m21843, &t1033_TI, &t108_0_0_0, RuntimeInvoker_t108_t3832, t1033_m21843_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21843_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1033_m21844_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21844_GM;
MethodInfo m21844_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m21844, &t1033_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t1033_m21844_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21844_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21845_GM;
MethodInfo m21845_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m21845, &t1033_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21845_GM};
extern Il2CppType t3833_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21846_GM;
MethodInfo m21846_MI = 
{
	"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator", (methodPointerType)&m21846, &t1033_TI, &t3833_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 17, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21846_GM};
extern Il2CppType t987_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21847_GM;
MethodInfo m21847_MI = 
{
	"System.Collections.IDictionary.GetEnumerator", (methodPointerType)&m21847, &t1033_TI, &t987_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 22, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21847_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21848_GM;
MethodInfo m21848_MI = 
{
	"get_Count", (methodPointerType)&m21848, &t1033_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21848_GM};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1033_m21849_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21849_GM;
MethodInfo m21849_MI = 
{
	"get_Item", (methodPointerType)&m21849, &t1033_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t1033_m21849_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 25, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21849_GM};
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1033_m21850_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21850_GM;
MethodInfo m21850_MI = 
{
	"set_Item", (methodPointerType)&m21850, &t1033_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t111, t1033_m21850_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 26, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21850_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2437_0_0_0;
static ParameterInfo t1033_m21851_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"hcp", 1, 134217728, &EmptyCustomAttributesCache, &t2437_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21851_GM;
MethodInfo m21851_MI = 
{
	"Init", (methodPointerType)&m21851, &t1033_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t1033_m21851_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21851_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1033_m21852_ParameterInfos[] = 
{
	{"size", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21852_GM;
MethodInfo m21852_MI = 
{
	"InitArrays", (methodPointerType)&m21852, &t1033_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1033_m21852_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21852_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1033_m21853_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21853_GM;
MethodInfo m21853_MI = 
{
	"CopyToCheck", (methodPointerType)&m21853, &t1033_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t1033_m21853_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21853_GM};
extern Il2CppType t2289_0_0_0;
extern Il2CppType t2289_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t7713_0_0_0;
extern Il2CppType t7713_0_0_0;
static ParameterInfo t1033_m36012_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2289_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"transform", 2, 134217728, &EmptyCustomAttributesCache, &t7713_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericContainer m36012_IGC;
extern TypeInfo m36012_gp_TRet_0_TI;
Il2CppGenericParamFull m36012_gp_TRet_0_TI_GenericParamFull = { { &m36012_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
extern TypeInfo m36012_gp_TElem_1_TI;
Il2CppGenericParamFull m36012_gp_TElem_1_TI_GenericParamFull = { { &m36012_IGC, 1}, {NULL, "TElem", 0, 0, NULL} };
static Il2CppGenericParamFull* m36012_IGPA[2] = 
{
	&m36012_gp_TRet_0_TI_GenericParamFull,
	&m36012_gp_TElem_1_TI_GenericParamFull,
};
extern MethodInfo m36012_MI;
Il2CppGenericContainer m36012_IGC = { { NULL, NULL }, NULL, &m36012_MI, 2, 1, m36012_IGPA };
extern Il2CppGenericMethod m36013_GM;
extern Il2CppType m11290_gp_0_0_0_0;
extern Il2CppType m11290_gp_1_0_0_0;
static Il2CppRGCTXDefinition m36012_RGCTXData[4] = 
{
	{ IL2CPP_RGCTX_DATA_METHOD, &m36013_GM }/* Method Definition */,
	{ IL2CPP_RGCTX_DATA_CLASS, &m11290_gp_0_0_0_0 }/* Class Definition */,
	{ IL2CPP_RGCTX_DATA_CLASS, &m11290_gp_1_0_0_0 }/* Class Definition */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
extern Il2CppGenericMethod m36012_GM;
MethodInfo m36012_MI = 
{
	"Do_CopyTo", NULL, &t1033_TI, &t109_0_0_0, NULL, t1033_m36012_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, true, true, 0, m36012_RGCTXData, (methodPointerType)NULL, &m36012_GM};
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1033_m21854_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t3832_0_0_0;
extern void* RuntimeInvoker_t3832_t5_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21854_GM;
MethodInfo m21854_MI = 
{
	"make_pair", (methodPointerType)&m21854, &t1033_TI, &t3832_0_0_0, RuntimeInvoker_t3832_t5_t111, t1033_m21854_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21854_GM};
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1033_m21855_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21855_GM;
MethodInfo m21855_MI = 
{
	"pick_value", (methodPointerType)&m21855, &t1033_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t111, t1033_m21855_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21855_GM};
extern Il2CppType t3831_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1033_m21856_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3831_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21856_GM;
MethodInfo m21856_MI = 
{
	"CopyTo", (methodPointerType)&m21856, &t1033_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t1033_m21856_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21856_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t7716_0_0_0;
extern Il2CppType t7716_0_0_0;
static ParameterInfo t1033_m36014_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"transform", 2, 134217728, &EmptyCustomAttributesCache, &t7716_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericContainer m36014_IGC;
extern TypeInfo m36014_gp_TRet_0_TI;
Il2CppGenericParamFull m36014_gp_TRet_0_TI_GenericParamFull = { { &m36014_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
static Il2CppGenericParamFull* m36014_IGPA[1] = 
{
	&m36014_gp_TRet_0_TI_GenericParamFull,
};
extern MethodInfo m36014_MI;
Il2CppGenericContainer m36014_IGC = { { NULL, NULL }, NULL, &m36014_MI, 1, 1, m36014_IGPA };
extern Il2CppType m11295_gp_0_0_0_0;
extern Il2CppGenericMethod m36015_GM;
static Il2CppRGCTXDefinition m36014_RGCTXData[3] = 
{
	{ IL2CPP_RGCTX_DATA_TYPE, &m11295_gp_0_0_0_0 }/* Type Definition */,
	{ IL2CPP_RGCTX_DATA_METHOD, &m36015_GM }/* Method Definition */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
extern Il2CppGenericMethod m36014_GM;
MethodInfo m36014_MI = 
{
	"Do_ICollectionCopyTo", NULL, &t1033_TI, &t109_0_0_0, NULL, t1033_m36014_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, true, true, 0, m36014_RGCTXData, (methodPointerType)NULL, &m36014_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21857_GM;
MethodInfo m21857_MI = 
{
	"Resize", (methodPointerType)&m21857, &t1033_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21857_GM};
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1033_m4823_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m4823_GM;
MethodInfo m4823_MI = 
{
	"Add", (methodPointerType)&m4823, &t1033_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t111, t1033_m4823_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 2, false, true, 0, NULL, (methodPointerType)NULL, &m4823_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21858_GM;
MethodInfo m21858_MI = 
{
	"Clear", (methodPointerType)&m21858, &t1033_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 13, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21858_GM};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1033_m21859_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21859_GM;
MethodInfo m21859_MI = 
{
	"ContainsKey", (methodPointerType)&m21859, &t1033_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t1033_m21859_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21859_GM};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1033_m21860_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t111 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21860_GM;
MethodInfo m21860_MI = 
{
	"ContainsValue", (methodPointerType)&m21860, &t1033_TI, &t108_0_0_0, RuntimeInvoker_t108_t111, t1033_m21860_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21860_GM};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1033_m21861_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21861_GM;
MethodInfo m21861_MI = 
{
	"GetObjectData", (methodPointerType)&m21861, &t1033_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1033_m21861_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21861_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1033_m21862_ParameterInfos[] = 
{
	{"sender", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21862_GM;
MethodInfo m21862_MI = 
{
	"OnDeserialization", (methodPointerType)&m21862, &t1033_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1033_m21862_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21862_GM};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1033_m21863_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21863_GM;
MethodInfo m21863_MI = 
{
	"Remove", (methodPointerType)&m21863, &t1033_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t1033_m21863_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21863_GM};
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_1_0_2;
extern Il2CppType t108_1_0_0;
static ParameterInfo t1033_m21864_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t108_1_0_2},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t169 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21864_GM;
MethodInfo m21864_MI = 
{
	"TryGetValue", (methodPointerType)&m21864, &t1033_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t169, t1033_m21864_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21864_GM};
extern Il2CppType t3830_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21865_GM;
MethodInfo m21865_MI = 
{
	"get_Values", (methodPointerType)&m21865, &t1033_TI, &t3830_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21865_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1033_m21866_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21866_GM;
MethodInfo m21866_MI = 
{
	"ToTKey", (methodPointerType)&m21866, &t1033_TI, &t11_0_0_0, RuntimeInvoker_t5_t5, t1033_m21866_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21866_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1033_m21867_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21867_GM;
MethodInfo m21867_MI = 
{
	"ToTValue", (methodPointerType)&m21867, &t1033_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t1033_m21867_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21867_GM};
extern Il2CppType t3832_0_0_0;
static ParameterInfo t1033_m21868_ParameterInfos[] = 
{
	{"pair", 0, 134217728, &EmptyCustomAttributesCache, &t3832_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t3832 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21868_GM;
MethodInfo m21868_MI = 
{
	"ContainsKeyValuePair", (methodPointerType)&m21868, &t1033_TI, &t108_0_0_0, RuntimeInvoker_t108_t3832, t1033_m21868_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m21868_GM};
extern Il2CppType t3834_0_0_0;
extern void* RuntimeInvoker_t3834 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m21869_GM;
MethodInfo m21869_MI = 
{
	"GetEnumerator", (methodPointerType)&m21869, &t1033_TI, &t3834_0_0_0, RuntimeInvoker_t3834, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m21869_GM};
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1033_m21870_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t990_0_0_0;
extern void* RuntimeInvoker_t990_t5_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1517__CustomAttributeCache_m11311;
extern Il2CppGenericMethod m21870_GM;
MethodInfo m21870_MI = 
{
	"<CopyTo>m__0", (methodPointerType)&m21870, &t1033_TI, &t990_0_0_0, RuntimeInvoker_t990_t5_t111, t1033_m21870_ParameterInfos, &t1517__CustomAttributeCache_m11311, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m21870_GM};
static MethodInfo* t1033_MIs[] =
{
	&m21830_MI,
	&m4822_MI,
	&m21831_MI,
	&m21832_MI,
	&m21833_MI,
	&m21834_MI,
	&m21835_MI,
	&m21836_MI,
	&m21837_MI,
	&m21838_MI,
	&m21839_MI,
	&m21840_MI,
	&m21841_MI,
	&m21842_MI,
	&m21843_MI,
	&m21844_MI,
	&m21845_MI,
	&m21846_MI,
	&m21847_MI,
	&m21848_MI,
	&m21849_MI,
	&m21850_MI,
	&m21851_MI,
	&m21852_MI,
	&m21853_MI,
	&m36012_MI,
	&m21854_MI,
	&m21855_MI,
	&m21856_MI,
	&m36014_MI,
	&m21857_MI,
	&m4823_MI,
	&m21858_MI,
	&m21859_MI,
	&m21860_MI,
	&m21861_MI,
	&m21862_MI,
	&m21863_MI,
	&m21864_MI,
	&m21865_MI,
	&m21866_MI,
	&m21867_MI,
	&m21868_MI,
	&m21869_MI,
	&m21870_MI,
	NULL
};
static MethodInfo* t1033_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m21845_MI,
	&m21861_MI,
	&m21848_MI,
	&m21837_MI,
	&m21838_MI,
	&m21844_MI,
	&m21848_MI,
	&m21839_MI,
	&m21840_MI,
	&m21858_MI,
	&m21841_MI,
	&m21842_MI,
	&m21843_MI,
	&m21846_MI,
	&m21863_MI,
	&m21833_MI,
	&m21834_MI,
	&m21835_MI,
	&m21847_MI,
	&m21836_MI,
	&m21862_MI,
	&m21849_MI,
	&m21850_MI,
	&m4823_MI,
	&m21859_MI,
	&m21861_MI,
	&m21862_MI,
	&m21864_MI,
};
extern TypeInfo t811_TI;
extern TypeInfo t6708_TI;
extern TypeInfo t6710_TI;
extern TypeInfo t7718_TI;
extern TypeInfo t986_TI;
static TypeInfo* t1033_ITIs[] = 
{
	&t739_TI,
	&t517_TI,
	&t811_TI,
	&t6708_TI,
	&t6710_TI,
	&t7718_TI,
	&t986_TI,
	&t1184_TI,
};
static Il2CppInterfaceOffsetPair t1033_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t517_TI, 5},
	{ &t811_TI, 6},
	{ &t6708_TI, 10},
	{ &t6710_TI, 17},
	{ &t7718_TI, 18},
	{ &t986_TI, 19},
	{ &t1184_TI, 24},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1033_0_0_0;
extern Il2CppType t1033_1_0_0;
struct t1033;
extern Il2CppGenericClass t1033_GC;
extern CustomAttributesCache t1517__CustomAttributeCache;
extern CustomAttributesCache t1517__CustomAttributeCache_U3CU3Ef__am$cacheB;
extern CustomAttributesCache t1517__CustomAttributeCache_m11311;
TypeInfo t1033_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Dictionary`2", "System.Collections.Generic", t1033_MIs, t1033_PIs, t1033_FIs, NULL, &t5_TI, NULL, NULL, &t1033_TI, t1033_ITIs, t1033_VT, &t1517__CustomAttributeCache, &t1033_TI, &t1033_0_0_0, &t1033_1_0_0, t1033_IOs, &t1033_GC, NULL, t1033_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1033), 0, -1, sizeof(t1033_SFs), 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 45, 7, 16, 0, 0, 32, 8, 8};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
extern MethodInfo m36016_MI;
static PropertyInfo t6708____Count_PropertyInfo = 
{
	&t6708_TI, "Count", &m36016_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m36017_MI;
static PropertyInfo t6708____IsReadOnly_PropertyInfo = 
{
	&t6708_TI, "IsReadOnly", &m36017_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6708_PIs[] =
{
	&t6708____Count_PropertyInfo,
	&t6708____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36016_GM;
MethodInfo m36016_MI = 
{
	"get_Count", NULL, &t6708_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36016_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36017_GM;
MethodInfo m36017_MI = 
{
	"get_IsReadOnly", NULL, &t6708_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36017_GM};
extern Il2CppType t3832_0_0_0;
static ParameterInfo t6708_m36018_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t3832_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t3832 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36018_GM;
MethodInfo m36018_MI = 
{
	"Add", NULL, &t6708_TI, &t109_0_0_0, RuntimeInvoker_t109_t3832, t6708_m36018_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36018_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36019_GM;
MethodInfo m36019_MI = 
{
	"Clear", NULL, &t6708_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36019_GM};
extern Il2CppType t3832_0_0_0;
static ParameterInfo t6708_m36020_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t3832_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t3832 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36020_GM;
MethodInfo m36020_MI = 
{
	"Contains", NULL, &t6708_TI, &t108_0_0_0, RuntimeInvoker_t108_t3832, t6708_m36020_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36020_GM};
extern Il2CppType t3831_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6708_m36021_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3831_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36021_GM;
MethodInfo m36021_MI = 
{
	"CopyTo", NULL, &t6708_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6708_m36021_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m36021_GM};
extern Il2CppType t3832_0_0_0;
static ParameterInfo t6708_m36022_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t3832_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t3832 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36022_GM;
MethodInfo m36022_MI = 
{
	"Remove", NULL, &t6708_TI, &t108_0_0_0, RuntimeInvoker_t108_t3832, t6708_m36022_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m36022_GM};
static MethodInfo* t6708_MIs[] =
{
	&m36016_MI,
	&m36017_MI,
	&m36018_MI,
	&m36019_MI,
	&m36020_MI,
	&m36021_MI,
	&m36022_MI,
	NULL
};
static TypeInfo* t6708_ITIs[] = 
{
	&t739_TI,
	&t6710_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6708_0_0_0;
extern Il2CppType t6708_1_0_0;
struct t6708;
extern Il2CppGenericClass t6708_GC;
TypeInfo t6708_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6708_MIs, t6708_PIs, NULL, NULL, NULL, NULL, NULL, &t6708_TI, t6708_ITIs, NULL, &EmptyCustomAttributesCache, &t6708_TI, &t6708_0_0_0, &t6708_1_0_0, NULL, &t6708_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
extern Il2CppType t3833_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36023_GM;
MethodInfo m36023_MI = 
{
	"GetEnumerator", NULL, &t6710_TI, &t3833_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36023_GM};
static MethodInfo* t6710_MIs[] =
{
	&m36023_MI,
	NULL
};
static TypeInfo* t6710_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6710_0_0_0;
extern Il2CppType t6710_1_0_0;
struct t6710;
extern Il2CppGenericClass t6710_GC;
TypeInfo t6710_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6710_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6710_TI, t6710_ITIs, NULL, &EmptyCustomAttributesCache, &t6710_TI, &t6710_0_0_0, &t6710_1_0_0, NULL, &t6710_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3833_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
extern MethodInfo m36024_MI;
static PropertyInfo t3833____Current_PropertyInfo = 
{
	&t3833_TI, "Current", &m36024_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3833_PIs[] =
{
	&t3833____Current_PropertyInfo,
	NULL
};
extern Il2CppType t3832_0_0_0;
extern void* RuntimeInvoker_t3832 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m36024_GM;
MethodInfo m36024_MI = 
{
	"get_Current", NULL, &t3833_TI, &t3832_0_0_0, RuntimeInvoker_t3832, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m36024_GM};
static MethodInfo* t3833_MIs[] =
{
	&m36024_MI,
	NULL
};
static TypeInfo* t3833_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3833_0_0_0;
extern Il2CppType t3833_1_0_0;
struct t3833;
extern Il2CppGenericClass t3833_GC;
TypeInfo t3833_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3833_MIs, t3833_PIs, NULL, NULL, NULL, NULL, NULL, &t3833_TI, t3833_ITIs, NULL, &EmptyCustomAttributesCache, &t3833_TI, &t3833_0_0_0, &t3833_1_0_0, NULL, &t3833_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
