#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t2750.h"
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
extern TypeInfo t2750_TI;
#include "t2750MD.h"

#include "t5.h"
#include "t88.h"
#include "t110.h"
#include "t11.h"
#include "t133.h"
#include "t109.h"
#include "t107.h"
#include "t108.h"
extern TypeInfo t88_TI;
extern TypeInfo t133_TI;
#include "t133MD.h"
#include "t107MD.h"
extern MethodInfo m14263_MI;
extern MethodInfo m4758_MI;
extern MethodInfo m4763_MI;
extern MethodInfo m24550_MI;
struct t107;
#include "t1181.h"
struct t107;
 t5 * m23596_gshared (t107 * __this, int32_t p0, MethodInfo* method);
#define m23596(__this, p0, method) (t5 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
#define m24550(__this, p0, method) (t88 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<GameMessage>
extern Il2CppType t107_0_0_1;
FieldInfo t2750_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t2750_TI, offsetof(t2750, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2750_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2750_TI, offsetof(t2750, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2750_FIs[] =
{
	&t2750_f0_FieldInfo,
	&t2750_f1_FieldInfo,
	NULL
};
extern MethodInfo m14260_MI;
static PropertyInfo t2750____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2750_TI, "System.Collections.IEnumerator.Current", &m14260_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2750____Current_PropertyInfo = 
{
	&t2750_TI, "Current", &m14263_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2750_PIs[] =
{
	&t2750____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2750____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
extern Il2CppType t107_0_0_0;
static ParameterInfo t2750_m14259_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14259_GM;
MethodInfo m14259_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t2750_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2750_m14259_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14259_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14260_GM;
MethodInfo m14260_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t2750_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14260_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14261_GM;
MethodInfo m14261_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t2750_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14261_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14262_GM;
MethodInfo m14262_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t2750_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14262_GM};
extern Il2CppType t88_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14263_GM;
MethodInfo m14263_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t2750_TI, &t88_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14263_GM};
static MethodInfo* t2750_MIs[] =
{
	&m14259_MI,
	&m14260_MI,
	&m14261_MI,
	&m14262_MI,
	&m14263_MI,
	NULL
};
extern MethodInfo m2041_MI;
extern MethodInfo m465_MI;
extern MethodInfo m2042_MI;
extern MethodInfo m2147_MI;
extern MethodInfo m14262_MI;
extern MethodInfo m14261_MI;
static MethodInfo* t2750_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m14260_MI,
	&m14262_MI,
	&m14261_MI,
	&m14263_MI,
};
extern TypeInfo t196_TI;
extern TypeInfo t132_TI;
extern TypeInfo t2744_TI;
static TypeInfo* t2750_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t2744_TI,
};
static Il2CppInterfaceOffsetPair t2750_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t2744_TI, 7},
};
extern TypeInfo t88_TI;
static Il2CppRGCTXData t2750_RGCTXData[3] = 
{
	&m14263_MI/* Method Usage */,
	&t88_TI/* Class Usage */,
	&m24550_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2750_0_0_0;
extern Il2CppType t2750_1_0_0;
extern TypeInfo t267_TI;
extern Il2CppGenericClass t2750_GC;
extern TypeInfo t107_TI;
TypeInfo t2750_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2750_MIs, t2750_PIs, t2750_FIs, NULL, &t267_TI, NULL, &t107_TI, &t2750_TI, t2750_ITIs, t2750_VT, &EmptyCustomAttributesCache, &t2750_TI, &t2750_0_0_0, &t2750_1_0_0, t2750_IOs, &t2750_GC, NULL, NULL, NULL, t2750_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2750)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2751_TI;



// Metadata Definition System.Collections.Generic.IList`1<GameMessage>
extern MethodInfo m32141_MI;
extern MethodInfo m32142_MI;
static PropertyInfo t2751____Item_PropertyInfo = 
{
	&t2751_TI, "Item", &m32141_MI, &m32142_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2751_PIs[] =
{
	&t2751____Item_PropertyInfo,
	NULL
};
extern Il2CppType t88_0_0_0;
extern Il2CppType t88_0_0_0;
static ParameterInfo t2751_m32143_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32143_GM;
MethodInfo m32143_MI = 
{
	"IndexOf", NULL, &t2751_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2751_m32143_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32143_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t88_0_0_0;
static ParameterInfo t2751_m32144_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32144_GM;
MethodInfo m32144_MI = 
{
	"Insert", NULL, &t2751_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2751_m32144_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32144_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2751_m32145_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32145_GM;
MethodInfo m32145_MI = 
{
	"RemoveAt", NULL, &t2751_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2751_m32145_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32145_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2751_m32141_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t88_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32141_GM;
MethodInfo m32141_MI = 
{
	"get_Item", NULL, &t2751_TI, &t88_0_0_0, RuntimeInvoker_t5_t110, t2751_m32141_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32141_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t88_0_0_0;
static ParameterInfo t2751_m32142_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32142_GM;
MethodInfo m32142_MI = 
{
	"set_Item", NULL, &t2751_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2751_m32142_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32142_GM};
static MethodInfo* t2751_MIs[] =
{
	&m32143_MI,
	&m32144_MI,
	&m32145_MI,
	&m32141_MI,
	&m32142_MI,
	NULL
};
extern TypeInfo t739_TI;
extern TypeInfo t2745_TI;
extern TypeInfo t2743_TI;
static TypeInfo* t2751_ITIs[] = 
{
	&t739_TI,
	&t2745_TI,
	&t2743_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2751_0_0_0;
extern Il2CppType t2751_1_0_0;
struct t2751;
extern Il2CppGenericClass t2751_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t2751_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t2751_MIs, t2751_PIs, NULL, NULL, NULL, NULL, NULL, &t2751_TI, t2751_ITIs, NULL, &t2240__CustomAttributeCache, &t2751_TI, &t2751_0_0_0, &t2751_1_0_0, NULL, &t2751_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2749.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2749_TI;
#include "t2749MD.h"

#include "t92.h"
#include "t114.h"
#include "t1363.h"
#include "Assembly-CSharp_ArrayTypes.h"
extern TypeInfo t92_TI;
extern TypeInfo t114_TI;
extern TypeInfo t11_TI;
extern TypeInfo t1363_TI;
#include "t5MD.h"
#include "t114MD.h"
#include "t1363MD.h"
extern MethodInfo m14267_MI;
extern MethodInfo m4766_MI;
extern MethodInfo m531_MI;
extern MethodInfo m3643_MI;
extern MethodInfo m5942_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<GameMessage>
extern Il2CppType t92_0_0_1;
FieldInfo t2749_f0_FieldInfo = 
{
	"l", &t92_0_0_1, &t2749_TI, offsetof(t2749, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2749_f1_FieldInfo = 
{
	"next", &t110_0_0_1, &t2749_TI, offsetof(t2749, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2749_f2_FieldInfo = 
{
	"ver", &t110_0_0_1, &t2749_TI, offsetof(t2749, f2) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t88_0_0_1;
FieldInfo t2749_f3_FieldInfo = 
{
	"current", &t88_0_0_1, &t2749_TI, offsetof(t2749, f3) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2749_FIs[] =
{
	&t2749_f0_FieldInfo,
	&t2749_f1_FieldInfo,
	&t2749_f2_FieldInfo,
	&t2749_f3_FieldInfo,
	NULL
};
extern MethodInfo m14265_MI;
static PropertyInfo t2749____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2749_TI, "System.Collections.IEnumerator.Current", &m14265_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14269_MI;
static PropertyInfo t2749____Current_PropertyInfo = 
{
	&t2749_TI, "Current", &m14269_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2749_PIs[] =
{
	&t2749____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2749____Current_PropertyInfo,
	NULL
};
extern Il2CppType t92_0_0_0;
extern Il2CppType t92_0_0_0;
static ParameterInfo t2749_m14264_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t92_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14264_GM;
MethodInfo m14264_MI = 
{
	".ctor", (methodPointerType)&m11749_gshared, &t2749_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2749_m14264_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14264_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14265_GM;
MethodInfo m14265_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11750_gshared, &t2749_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14265_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14266_GM;
MethodInfo m14266_MI = 
{
	"Dispose", (methodPointerType)&m11751_gshared, &t2749_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14266_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14267_GM;
MethodInfo m14267_MI = 
{
	"VerifyState", (methodPointerType)&m11752_gshared, &t2749_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14267_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14268_GM;
MethodInfo m14268_MI = 
{
	"MoveNext", (methodPointerType)&m11753_gshared, &t2749_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14268_GM};
extern Il2CppType t88_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14269_GM;
MethodInfo m14269_MI = 
{
	"get_Current", (methodPointerType)&m11754_gshared, &t2749_TI, &t88_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14269_GM};
static MethodInfo* t2749_MIs[] =
{
	&m14264_MI,
	&m14265_MI,
	&m14266_MI,
	&m14267_MI,
	&m14268_MI,
	&m14269_MI,
	NULL
};
extern MethodInfo m14268_MI;
extern MethodInfo m14266_MI;
static MethodInfo* t2749_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m14265_MI,
	&m14268_MI,
	&m14266_MI,
	&m14269_MI,
};
static TypeInfo* t2749_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t2744_TI,
};
static Il2CppInterfaceOffsetPair t2749_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t2744_TI, 7},
};
extern TypeInfo t88_TI;
extern TypeInfo t2749_TI;
static Il2CppRGCTXData t2749_RGCTXData[3] = 
{
	&m14267_MI/* Method Usage */,
	&t88_TI/* Class Usage */,
	&t2749_TI/* Class Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2749_0_0_0;
extern Il2CppType t2749_1_0_0;
extern Il2CppGenericClass t2749_GC;
extern TypeInfo t1524_TI;
TypeInfo t2749_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2749_MIs, t2749_PIs, t2749_FIs, NULL, &t267_TI, NULL, &t1524_TI, &t2749_TI, t2749_ITIs, t2749_VT, &EmptyCustomAttributesCache, &t2749_TI, &t2749_0_0_0, &t2749_1_0_0, t2749_IOs, &t2749_GC, NULL, NULL, NULL, t2749_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2749)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#include "t2746.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2746_TI;
#include "t2746MD.h"

#include "t491.h"
#include "t484.h"
extern TypeInfo t110_TI;
extern TypeInfo t491_TI;
extern TypeInfo t484_TI;
extern TypeInfo t811_TI;
extern TypeInfo t109_TI;
extern TypeInfo t108_TI;
extern TypeInfo t90_TI;
#include "t491MD.h"
#include "t484MD.h"
#include "t2752MD.h"
extern MethodInfo m14299_MI;
extern MethodInfo m2163_MI;
extern MethodInfo m24576_MI;
extern MethodInfo m460_MI;
extern MethodInfo m3595_MI;
extern MethodInfo m4754_MI;
extern MethodInfo m4947_MI;
extern MethodInfo m14331_MI;
extern MethodInfo m24578_MI;
extern MethodInfo m32143_MI;
extern MethodInfo m24577_MI;
extern MethodInfo m24580_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<GameMessage>
extern Il2CppType t2751_0_0_1;
FieldInfo t2746_f0_FieldInfo = 
{
	"list", &t2751_0_0_1, &t2746_TI, offsetof(t2746, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2746_FIs[] =
{
	&t2746_f0_FieldInfo,
	NULL
};
extern MethodInfo m14276_MI;
extern MethodInfo m14277_MI;
static PropertyInfo t2746____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t2746_TI, "System.Collections.Generic.IList<T>.Item", &m14276_MI, &m14277_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14278_MI;
static PropertyInfo t2746____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2746_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m14278_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14288_MI;
static PropertyInfo t2746____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2746_TI, "System.Collections.ICollection.IsSynchronized", &m14288_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14289_MI;
static PropertyInfo t2746____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2746_TI, "System.Collections.ICollection.SyncRoot", &m14289_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14290_MI;
static PropertyInfo t2746____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2746_TI, "System.Collections.IList.IsFixedSize", &m14290_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14291_MI;
static PropertyInfo t2746____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2746_TI, "System.Collections.IList.IsReadOnly", &m14291_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14292_MI;
extern MethodInfo m14293_MI;
static PropertyInfo t2746____System_Collections_IList_Item_PropertyInfo = 
{
	&t2746_TI, "System.Collections.IList.Item", &m14292_MI, &m14293_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14298_MI;
static PropertyInfo t2746____Count_PropertyInfo = 
{
	&t2746_TI, "Count", &m14298_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2746____Item_PropertyInfo = 
{
	&t2746_TI, "Item", &m14299_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2746_PIs[] =
{
	&t2746____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t2746____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2746____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2746____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2746____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2746____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2746____System_Collections_IList_Item_PropertyInfo,
	&t2746____Count_PropertyInfo,
	&t2746____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2751_0_0_0;
static ParameterInfo t2746_m14270_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2751_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14270_GM;
MethodInfo m14270_MI = 
{
	".ctor", (methodPointerType)&m11755_gshared, &t2746_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2746_m14270_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14270_GM};
extern Il2CppType t88_0_0_0;
static ParameterInfo t2746_m14271_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14271_GM;
MethodInfo m14271_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m11756_gshared, &t2746_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2746_m14271_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14271_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14272_GM;
MethodInfo m14272_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m11757_gshared, &t2746_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14272_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t88_0_0_0;
static ParameterInfo t2746_m14273_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14273_GM;
MethodInfo m14273_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m11758_gshared, &t2746_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2746_m14273_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14273_GM};
extern Il2CppType t88_0_0_0;
static ParameterInfo t2746_m14274_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14274_GM;
MethodInfo m14274_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m11759_gshared, &t2746_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2746_m14274_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14274_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2746_m14275_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14275_GM;
MethodInfo m14275_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m11760_gshared, &t2746_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2746_m14275_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14275_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2746_m14276_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t88_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14276_GM;
MethodInfo m14276_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m11761_gshared, &t2746_TI, &t88_0_0_0, RuntimeInvoker_t5_t110, t2746_m14276_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14276_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t88_0_0_0;
static ParameterInfo t2746_m14277_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14277_GM;
MethodInfo m14277_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m11762_gshared, &t2746_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2746_m14277_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14277_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14278_GM;
MethodInfo m14278_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11763_gshared, &t2746_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14278_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2746_m14279_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14279_GM;
MethodInfo m14279_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11764_gshared, &t2746_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2746_m14279_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14279_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14280_GM;
MethodInfo m14280_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11765_gshared, &t2746_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14280_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2746_m14281_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14281_GM;
MethodInfo m14281_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11766_gshared, &t2746_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2746_m14281_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14281_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14282_GM;
MethodInfo m14282_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m11767_gshared, &t2746_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14282_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2746_m14283_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14283_GM;
MethodInfo m14283_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11768_gshared, &t2746_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2746_m14283_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14283_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2746_m14284_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14284_GM;
MethodInfo m14284_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11769_gshared, &t2746_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2746_m14284_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14284_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2746_m14285_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14285_GM;
MethodInfo m14285_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11770_gshared, &t2746_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2746_m14285_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14285_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2746_m14286_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14286_GM;
MethodInfo m14286_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11771_gshared, &t2746_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2746_m14286_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14286_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2746_m14287_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14287_GM;
MethodInfo m14287_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m11772_gshared, &t2746_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2746_m14287_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14287_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14288_GM;
MethodInfo m14288_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11773_gshared, &t2746_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14288_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14289_GM;
MethodInfo m14289_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11774_gshared, &t2746_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14289_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14290_GM;
MethodInfo m14290_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11775_gshared, &t2746_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14290_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14291_GM;
MethodInfo m14291_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11776_gshared, &t2746_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14291_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2746_m14292_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14292_GM;
MethodInfo m14292_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11777_gshared, &t2746_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t2746_m14292_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14292_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2746_m14293_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14293_GM;
MethodInfo m14293_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11778_gshared, &t2746_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2746_m14293_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14293_GM};
extern Il2CppType t88_0_0_0;
static ParameterInfo t2746_m14294_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14294_GM;
MethodInfo m14294_MI = 
{
	"Contains", (methodPointerType)&m11779_gshared, &t2746_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2746_m14294_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14294_GM};
extern Il2CppType t90_0_0_0;
extern Il2CppType t90_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2746_m14295_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14295_GM;
MethodInfo m14295_MI = 
{
	"CopyTo", (methodPointerType)&m11780_gshared, &t2746_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2746_m14295_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14295_GM};
extern Il2CppType t2744_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14296_GM;
MethodInfo m14296_MI = 
{
	"GetEnumerator", (methodPointerType)&m11781_gshared, &t2746_TI, &t2744_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14296_GM};
extern Il2CppType t88_0_0_0;
static ParameterInfo t2746_m14297_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14297_GM;
MethodInfo m14297_MI = 
{
	"IndexOf", (methodPointerType)&m11782_gshared, &t2746_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2746_m14297_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14297_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14298_GM;
MethodInfo m14298_MI = 
{
	"get_Count", (methodPointerType)&m11783_gshared, &t2746_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14298_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2746_m14299_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t88_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14299_GM;
MethodInfo m14299_MI = 
{
	"get_Item", (methodPointerType)&m11784_gshared, &t2746_TI, &t88_0_0_0, RuntimeInvoker_t5_t110, t2746_m14299_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14299_GM};
static MethodInfo* t2746_MIs[] =
{
	&m14270_MI,
	&m14271_MI,
	&m14272_MI,
	&m14273_MI,
	&m14274_MI,
	&m14275_MI,
	&m14276_MI,
	&m14277_MI,
	&m14278_MI,
	&m14279_MI,
	&m14280_MI,
	&m14281_MI,
	&m14282_MI,
	&m14283_MI,
	&m14284_MI,
	&m14285_MI,
	&m14286_MI,
	&m14287_MI,
	&m14288_MI,
	&m14289_MI,
	&m14290_MI,
	&m14291_MI,
	&m14292_MI,
	&m14293_MI,
	&m14294_MI,
	&m14295_MI,
	&m14296_MI,
	&m14297_MI,
	&m14298_MI,
	&m14299_MI,
	NULL
};
extern MethodInfo m464_MI;
extern MethodInfo m466_MI;
extern MethodInfo m467_MI;
extern MethodInfo m14280_MI;
extern MethodInfo m14279_MI;
extern MethodInfo m14281_MI;
extern MethodInfo m14282_MI;
extern MethodInfo m14283_MI;
extern MethodInfo m14284_MI;
extern MethodInfo m14285_MI;
extern MethodInfo m14286_MI;
extern MethodInfo m14287_MI;
extern MethodInfo m14271_MI;
extern MethodInfo m14272_MI;
extern MethodInfo m14294_MI;
extern MethodInfo m14295_MI;
extern MethodInfo m14274_MI;
extern MethodInfo m14297_MI;
extern MethodInfo m14273_MI;
extern MethodInfo m14275_MI;
extern MethodInfo m14296_MI;
static MethodInfo* t2746_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14280_MI,
	&m14298_MI,
	&m14288_MI,
	&m14289_MI,
	&m14279_MI,
	&m14290_MI,
	&m14291_MI,
	&m14292_MI,
	&m14293_MI,
	&m14281_MI,
	&m14282_MI,
	&m14283_MI,
	&m14284_MI,
	&m14285_MI,
	&m14286_MI,
	&m14287_MI,
	&m14298_MI,
	&m14278_MI,
	&m14271_MI,
	&m14272_MI,
	&m14294_MI,
	&m14295_MI,
	&m14274_MI,
	&m14297_MI,
	&m14273_MI,
	&m14275_MI,
	&m14276_MI,
	&m14277_MI,
	&m14296_MI,
	&m14299_MI,
};
extern TypeInfo t1129_TI;
static TypeInfo* t2746_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t2745_TI,
	&t2751_TI,
	&t2743_TI,
};
static Il2CppInterfaceOffsetPair t2746_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t2745_TI, 20},
	{ &t2751_TI, 27},
	{ &t2743_TI, 32},
};
extern TypeInfo t88_TI;
static Il2CppRGCTXData t2746_RGCTXData[9] = 
{
	&m14299_MI/* Method Usage */,
	&m14331_MI/* Method Usage */,
	&t88_TI/* Class Usage */,
	&m24578_MI/* Method Usage */,
	&m32143_MI/* Method Usage */,
	&m32141_MI/* Method Usage */,
	&m24577_MI/* Method Usage */,
	&m24580_MI/* Method Usage */,
	&m24576_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2746_0_0_0;
extern Il2CppType t2746_1_0_0;
extern TypeInfo t5_TI;
struct t2746;
extern Il2CppGenericClass t2746_GC;
extern CustomAttributesCache t1526__CustomAttributeCache;
TypeInfo t2746_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t2746_MIs, t2746_PIs, t2746_FIs, NULL, &t5_TI, NULL, NULL, &t2746_TI, t2746_ITIs, t2746_VT, &t1526__CustomAttributeCache, &t2746_TI, &t2746_0_0_0, &t2746_1_0_0, t2746_IOs, &t2746_GC, NULL, NULL, NULL, t2746_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2746), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t2752.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2752_TI;

#include "t115.h"
#include "t160.h"
extern TypeInfo t160_TI;
#include "t92MD.h"
#include "t160MD.h"
extern MethodInfo m32137_MI;
extern MethodInfo m14334_MI;
extern MethodInfo m14335_MI;
extern MethodInfo m14332_MI;
extern MethodInfo m14330_MI;
extern MethodInfo m672_MI;
extern MethodInfo m11151_MI;
extern MethodInfo m14323_MI;
extern MethodInfo m14333_MI;
extern MethodInfo m14321_MI;
extern MethodInfo m14326_MI;
extern MethodInfo m14317_MI;
extern MethodInfo m32139_MI;
extern MethodInfo m32144_MI;
extern MethodInfo m32145_MI;
extern MethodInfo m532_MI;
extern MethodInfo m6793_MI;
extern MethodInfo m2581_MI;
extern MethodInfo m11150_MI;
extern MethodInfo m11152_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<GameMessage>
extern Il2CppType t2751_0_0_1;
FieldInfo t2752_f0_FieldInfo = 
{
	"list", &t2751_0_0_1, &t2752_TI, offsetof(t2752, f0), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_1;
FieldInfo t2752_f1_FieldInfo = 
{
	"syncRoot", &t5_0_0_1, &t2752_TI, offsetof(t2752, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2752_FIs[] =
{
	&t2752_f0_FieldInfo,
	&t2752_f1_FieldInfo,
	NULL
};
extern MethodInfo m14301_MI;
static PropertyInfo t2752____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2752_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m14301_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14309_MI;
static PropertyInfo t2752____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2752_TI, "System.Collections.ICollection.IsSynchronized", &m14309_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14310_MI;
static PropertyInfo t2752____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2752_TI, "System.Collections.ICollection.SyncRoot", &m14310_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14311_MI;
static PropertyInfo t2752____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2752_TI, "System.Collections.IList.IsFixedSize", &m14311_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14312_MI;
static PropertyInfo t2752____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2752_TI, "System.Collections.IList.IsReadOnly", &m14312_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14313_MI;
extern MethodInfo m14314_MI;
static PropertyInfo t2752____System_Collections_IList_Item_PropertyInfo = 
{
	&t2752_TI, "System.Collections.IList.Item", &m14313_MI, &m14314_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14327_MI;
static PropertyInfo t2752____Count_PropertyInfo = 
{
	&t2752_TI, "Count", &m14327_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14328_MI;
extern MethodInfo m14329_MI;
static PropertyInfo t2752____Item_PropertyInfo = 
{
	&t2752_TI, "Item", &m14328_MI, &m14329_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2752_PIs[] =
{
	&t2752____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2752____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2752____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2752____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2752____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2752____System_Collections_IList_Item_PropertyInfo,
	&t2752____Count_PropertyInfo,
	&t2752____Item_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14300_GM;
MethodInfo m14300_MI = 
{
	".ctor", (methodPointerType)&m11785_gshared, &t2752_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14300_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14301_GM;
MethodInfo m14301_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11786_gshared, &t2752_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14301_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2752_m14302_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14302_GM;
MethodInfo m14302_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11787_gshared, &t2752_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2752_m14302_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14302_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14303_GM;
MethodInfo m14303_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11788_gshared, &t2752_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14303_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2752_m14304_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14304_GM;
MethodInfo m14304_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11789_gshared, &t2752_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2752_m14304_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14304_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2752_m14305_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14305_GM;
MethodInfo m14305_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11790_gshared, &t2752_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2752_m14305_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14305_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2752_m14306_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14306_GM;
MethodInfo m14306_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11791_gshared, &t2752_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2752_m14306_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14306_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2752_m14307_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14307_GM;
MethodInfo m14307_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11792_gshared, &t2752_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2752_m14307_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14307_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2752_m14308_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14308_GM;
MethodInfo m14308_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11793_gshared, &t2752_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2752_m14308_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14308_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14309_GM;
MethodInfo m14309_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11794_gshared, &t2752_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14309_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14310_GM;
MethodInfo m14310_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11795_gshared, &t2752_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14310_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14311_GM;
MethodInfo m14311_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11796_gshared, &t2752_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14311_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14312_GM;
MethodInfo m14312_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11797_gshared, &t2752_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14312_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2752_m14313_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14313_GM;
MethodInfo m14313_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11798_gshared, &t2752_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t2752_m14313_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14313_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2752_m14314_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14314_GM;
MethodInfo m14314_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11799_gshared, &t2752_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2752_m14314_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14314_GM};
extern Il2CppType t88_0_0_0;
static ParameterInfo t2752_m14315_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14315_GM;
MethodInfo m14315_MI = 
{
	"Add", (methodPointerType)&m11800_gshared, &t2752_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2752_m14315_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14315_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14316_GM;
MethodInfo m14316_MI = 
{
	"Clear", (methodPointerType)&m11801_gshared, &t2752_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14316_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14317_GM;
MethodInfo m14317_MI = 
{
	"ClearItems", (methodPointerType)&m11802_gshared, &t2752_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14317_GM};
extern Il2CppType t88_0_0_0;
static ParameterInfo t2752_m14318_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14318_GM;
MethodInfo m14318_MI = 
{
	"Contains", (methodPointerType)&m11803_gshared, &t2752_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2752_m14318_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14318_GM};
extern Il2CppType t90_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2752_m14319_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14319_GM;
MethodInfo m14319_MI = 
{
	"CopyTo", (methodPointerType)&m11804_gshared, &t2752_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2752_m14319_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14319_GM};
extern Il2CppType t2744_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14320_GM;
MethodInfo m14320_MI = 
{
	"GetEnumerator", (methodPointerType)&m11805_gshared, &t2752_TI, &t2744_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14320_GM};
extern Il2CppType t88_0_0_0;
static ParameterInfo t2752_m14321_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14321_GM;
MethodInfo m14321_MI = 
{
	"IndexOf", (methodPointerType)&m11806_gshared, &t2752_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2752_m14321_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14321_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t88_0_0_0;
static ParameterInfo t2752_m14322_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14322_GM;
MethodInfo m14322_MI = 
{
	"Insert", (methodPointerType)&m11807_gshared, &t2752_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2752_m14322_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14322_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t88_0_0_0;
static ParameterInfo t2752_m14323_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14323_GM;
MethodInfo m14323_MI = 
{
	"InsertItem", (methodPointerType)&m11808_gshared, &t2752_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2752_m14323_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14323_GM};
extern Il2CppType t88_0_0_0;
static ParameterInfo t2752_m14324_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14324_GM;
MethodInfo m14324_MI = 
{
	"Remove", (methodPointerType)&m11809_gshared, &t2752_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2752_m14324_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14324_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2752_m14325_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14325_GM;
MethodInfo m14325_MI = 
{
	"RemoveAt", (methodPointerType)&m11810_gshared, &t2752_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2752_m14325_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14325_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2752_m14326_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14326_GM;
MethodInfo m14326_MI = 
{
	"RemoveItem", (methodPointerType)&m11811_gshared, &t2752_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2752_m14326_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14326_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14327_GM;
MethodInfo m14327_MI = 
{
	"get_Count", (methodPointerType)&m11812_gshared, &t2752_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14327_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2752_m14328_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t88_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14328_GM;
MethodInfo m14328_MI = 
{
	"get_Item", (methodPointerType)&m11813_gshared, &t2752_TI, &t88_0_0_0, RuntimeInvoker_t5_t110, t2752_m14328_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14328_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t88_0_0_0;
static ParameterInfo t2752_m14329_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14329_GM;
MethodInfo m14329_MI = 
{
	"set_Item", (methodPointerType)&m11814_gshared, &t2752_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2752_m14329_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14329_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t88_0_0_0;
static ParameterInfo t2752_m14330_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14330_GM;
MethodInfo m14330_MI = 
{
	"SetItem", (methodPointerType)&m11815_gshared, &t2752_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2752_m14330_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14330_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2752_m14331_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14331_GM;
MethodInfo m14331_MI = 
{
	"IsValidItem", (methodPointerType)&m11816_gshared, &t2752_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2752_m14331_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14331_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2752_m14332_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t88_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14332_GM;
MethodInfo m14332_MI = 
{
	"ConvertItem", (methodPointerType)&m11817_gshared, &t2752_TI, &t88_0_0_0, RuntimeInvoker_t5_t5, t2752_m14332_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14332_GM};
extern Il2CppType t2751_0_0_0;
static ParameterInfo t2752_m14333_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2751_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14333_GM;
MethodInfo m14333_MI = 
{
	"CheckWritable", (methodPointerType)&m11818_gshared, &t2752_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2752_m14333_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14333_GM};
extern Il2CppType t2751_0_0_0;
static ParameterInfo t2752_m14334_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2751_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14334_GM;
MethodInfo m14334_MI = 
{
	"IsSynchronized", (methodPointerType)&m11819_gshared, &t2752_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2752_m14334_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14334_GM};
extern Il2CppType t2751_0_0_0;
static ParameterInfo t2752_m14335_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2751_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14335_GM;
MethodInfo m14335_MI = 
{
	"IsFixedSize", (methodPointerType)&m11820_gshared, &t2752_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2752_m14335_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14335_GM};
static MethodInfo* t2752_MIs[] =
{
	&m14300_MI,
	&m14301_MI,
	&m14302_MI,
	&m14303_MI,
	&m14304_MI,
	&m14305_MI,
	&m14306_MI,
	&m14307_MI,
	&m14308_MI,
	&m14309_MI,
	&m14310_MI,
	&m14311_MI,
	&m14312_MI,
	&m14313_MI,
	&m14314_MI,
	&m14315_MI,
	&m14316_MI,
	&m14317_MI,
	&m14318_MI,
	&m14319_MI,
	&m14320_MI,
	&m14321_MI,
	&m14322_MI,
	&m14323_MI,
	&m14324_MI,
	&m14325_MI,
	&m14326_MI,
	&m14327_MI,
	&m14328_MI,
	&m14329_MI,
	&m14330_MI,
	&m14331_MI,
	&m14332_MI,
	&m14333_MI,
	&m14334_MI,
	&m14335_MI,
	NULL
};
extern MethodInfo m14303_MI;
extern MethodInfo m14302_MI;
extern MethodInfo m14304_MI;
extern MethodInfo m14316_MI;
extern MethodInfo m14305_MI;
extern MethodInfo m14306_MI;
extern MethodInfo m14307_MI;
extern MethodInfo m14308_MI;
extern MethodInfo m14325_MI;
extern MethodInfo m14315_MI;
extern MethodInfo m14318_MI;
extern MethodInfo m14319_MI;
extern MethodInfo m14324_MI;
extern MethodInfo m14322_MI;
extern MethodInfo m14320_MI;
static MethodInfo* t2752_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14303_MI,
	&m14327_MI,
	&m14309_MI,
	&m14310_MI,
	&m14302_MI,
	&m14311_MI,
	&m14312_MI,
	&m14313_MI,
	&m14314_MI,
	&m14304_MI,
	&m14316_MI,
	&m14305_MI,
	&m14306_MI,
	&m14307_MI,
	&m14308_MI,
	&m14325_MI,
	&m14327_MI,
	&m14301_MI,
	&m14315_MI,
	&m14316_MI,
	&m14318_MI,
	&m14319_MI,
	&m14324_MI,
	&m14321_MI,
	&m14322_MI,
	&m14325_MI,
	&m14328_MI,
	&m14329_MI,
	&m14320_MI,
	&m14317_MI,
	&m14323_MI,
	&m14326_MI,
	&m14330_MI,
};
static TypeInfo* t2752_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t2745_TI,
	&t2751_TI,
	&t2743_TI,
};
static Il2CppInterfaceOffsetPair t2752_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t2745_TI, 20},
	{ &t2751_TI, 27},
	{ &t2743_TI, 32},
};
extern TypeInfo t92_TI;
extern TypeInfo t88_TI;
static Il2CppRGCTXData t2752_RGCTXData[25] = 
{
	&t92_TI/* Class Usage */,
	&m672_MI/* Method Usage */,
	&m32137_MI/* Method Usage */,
	&m24580_MI/* Method Usage */,
	&m24576_MI/* Method Usage */,
	&m14332_MI/* Method Usage */,
	&m14323_MI/* Method Usage */,
	&m14331_MI/* Method Usage */,
	&t88_TI/* Class Usage */,
	&m24578_MI/* Method Usage */,
	&m32143_MI/* Method Usage */,
	&m14333_MI/* Method Usage */,
	&m14321_MI/* Method Usage */,
	&m14326_MI/* Method Usage */,
	&m14334_MI/* Method Usage */,
	&m14335_MI/* Method Usage */,
	&m32141_MI/* Method Usage */,
	&m14330_MI/* Method Usage */,
	&m14317_MI/* Method Usage */,
	&m32139_MI/* Method Usage */,
	&m24577_MI/* Method Usage */,
	&m32144_MI/* Method Usage */,
	&m32145_MI/* Method Usage */,
	&m32142_MI/* Method Usage */,
	&t88_0_0_0/* Type Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2752_0_0_0;
extern Il2CppType t2752_1_0_0;
struct t2752;
extern Il2CppGenericClass t2752_GC;
extern CustomAttributesCache t1525__CustomAttributeCache;
TypeInfo t2752_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t2752_MIs, t2752_PIs, t2752_FIs, NULL, &t5_TI, NULL, NULL, &t2752_TI, t2752_ITIs, t2752_VT, &t1525__CustomAttributeCache, &t2752_TI, &t2752_0_0_0, &t2752_1_0_0, t2752_IOs, &t2752_GC, NULL, NULL, NULL, t2752_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2752), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#include "t2753.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2753_TI;
#include "t2753MD.h"

#include "t1520.h"
#include "mscorlib_ArrayTypes.h"
#include "t2754.h"
extern TypeInfo t7571_TI;
extern TypeInfo t1520_TI;
extern TypeInfo t675_TI;
extern TypeInfo t2754_TI;
#include "t1196MD.h"
#include "t2754MD.h"
extern Il2CppType t7571_0_0_0;
extern Il2CppType t1520_0_0_0;
extern MethodInfo m3626_MI;
extern MethodInfo m3624_MI;
extern MethodInfo m10126_MI;
extern MethodInfo m14341_MI;
extern MethodInfo m32146_MI;
extern MethodInfo m24562_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<GameMessage>
extern Il2CppType t2753_0_0_49;
FieldInfo t2753_f0_FieldInfo = 
{
	"_default", &t2753_0_0_49, &t2753_TI, offsetof(t2753_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2753_FIs[] =
{
	&t2753_f0_FieldInfo,
	NULL
};
extern MethodInfo m14340_MI;
static PropertyInfo t2753____Default_PropertyInfo = 
{
	&t2753_TI, "Default", &m14340_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2753_PIs[] =
{
	&t2753____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14336_GM;
MethodInfo m14336_MI = 
{
	".ctor", (methodPointerType)&m11821_gshared, &t2753_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14336_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14337_GM;
MethodInfo m14337_MI = 
{
	".cctor", (methodPointerType)&m11822_gshared, &t2753_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14337_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2753_m14338_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14338_GM;
MethodInfo m14338_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m11823_gshared, &t2753_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2753_m14338_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14338_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2753_m14339_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14339_GM;
MethodInfo m14339_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m11824_gshared, &t2753_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2753_m14339_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14339_GM};
extern Il2CppType t88_0_0_0;
static ParameterInfo t2753_m32146_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32146_GM;
MethodInfo m32146_MI = 
{
	"GetHashCode", NULL, &t2753_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2753_m32146_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32146_GM};
extern Il2CppType t88_0_0_0;
extern Il2CppType t88_0_0_0;
static ParameterInfo t2753_m24562_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m24562_GM;
MethodInfo m24562_MI = 
{
	"Equals", NULL, &t2753_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2753_m24562_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m24562_GM};
extern Il2CppType t2753_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14340_GM;
MethodInfo m14340_MI = 
{
	"get_Default", (methodPointerType)&m11825_gshared, &t2753_TI, &t2753_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14340_GM};
static MethodInfo* t2753_MIs[] =
{
	&m14336_MI,
	&m14337_MI,
	&m14338_MI,
	&m14339_MI,
	&m32146_MI,
	&m24562_MI,
	&m14340_MI,
	NULL
};
extern MethodInfo m14339_MI;
extern MethodInfo m14338_MI;
static MethodInfo* t2753_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m24562_MI,
	&m32146_MI,
	&m14339_MI,
	&m14338_MI,
	NULL,
	NULL,
};
extern TypeInfo t4757_TI;
extern TypeInfo t998_TI;
static TypeInfo* t2753_ITIs[] = 
{
	&t4757_TI,
	&t998_TI,
};
static Il2CppInterfaceOffsetPair t2753_IOs[] = 
{
	{ &t4757_TI, 4},
	{ &t998_TI, 6},
};
extern TypeInfo t2753_TI;
extern TypeInfo t2753_TI;
extern TypeInfo t2754_TI;
extern TypeInfo t88_TI;
static Il2CppRGCTXData t2753_RGCTXData[9] = 
{
	&t7571_0_0_0/* Type Usage */,
	&t88_0_0_0/* Type Usage */,
	&t2753_TI/* Class Usage */,
	&t2753_TI/* Static Usage */,
	&t2754_TI/* Class Usage */,
	&m14341_MI/* Method Usage */,
	&t88_TI/* Class Usage */,
	&m32146_MI/* Method Usage */,
	&m24562_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2753_0_0_0;
extern Il2CppType t2753_1_0_0;
struct t2753;
extern Il2CppGenericClass t2753_GC;
TypeInfo t2753_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2753_MIs, t2753_PIs, t2753_FIs, NULL, &t5_TI, NULL, NULL, &t2753_TI, t2753_ITIs, t2753_VT, &EmptyCustomAttributesCache, &t2753_TI, &t2753_0_0_0, &t2753_1_0_0, t2753_IOs, &t2753_GC, NULL, NULL, NULL, t2753_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2753), 0, -1, sizeof(t2753_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<GameMessage>
extern Il2CppType t88_0_0_0;
extern Il2CppType t88_0_0_0;
static ParameterInfo t4757_m24582_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m24582_GM;
MethodInfo m24582_MI = 
{
	"Equals", NULL, &t4757_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t4757_m24582_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m24582_GM};
extern Il2CppType t88_0_0_0;
static ParameterInfo t4757_m32147_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32147_GM;
MethodInfo m32147_MI = 
{
	"GetHashCode", NULL, &t4757_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t4757_m32147_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32147_GM};
static MethodInfo* t4757_MIs[] =
{
	&m24582_MI,
	&m32147_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4757_0_0_0;
extern Il2CppType t4757_1_0_0;
struct t4757;
extern Il2CppGenericClass t4757_GC;
TypeInfo t4757_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t4757_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4757_TI, NULL, NULL, &EmptyCustomAttributesCache, &t4757_TI, &t4757_0_0_0, &t4757_1_0_0, NULL, &t4757_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.IEquatable`1<GameMessage>
extern Il2CppType t88_0_0_0;
static ParameterInfo t7571_m32148_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32148_GM;
MethodInfo m32148_MI = 
{
	"Equals", NULL, &t7571_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7571_m32148_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32148_GM};
static MethodInfo* t7571_MIs[] =
{
	&m32148_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7571_1_0_0;
struct t7571;
extern Il2CppGenericClass t7571_GC;
TypeInfo t7571_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t7571_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7571_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7571_TI, &t7571_0_0_0, &t7571_1_0_0, NULL, &t7571_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m14336_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<GameMessage>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14341_GM;
MethodInfo m14341_MI = 
{
	".ctor", (methodPointerType)&m11856_gshared, &t2754_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14341_GM};
extern Il2CppType t88_0_0_0;
static ParameterInfo t2754_m14342_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14342_GM;
MethodInfo m14342_MI = 
{
	"GetHashCode", (methodPointerType)&m11857_gshared, &t2754_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2754_m14342_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14342_GM};
extern Il2CppType t88_0_0_0;
extern Il2CppType t88_0_0_0;
static ParameterInfo t2754_m14343_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14343_GM;
MethodInfo m14343_MI = 
{
	"Equals", (methodPointerType)&m11858_gshared, &t2754_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2754_m14343_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14343_GM};
static MethodInfo* t2754_MIs[] =
{
	&m14341_MI,
	&m14342_MI,
	&m14343_MI,
	NULL
};
extern MethodInfo m14343_MI;
extern MethodInfo m14342_MI;
static MethodInfo* t2754_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14343_MI,
	&m14342_MI,
	&m14339_MI,
	&m14338_MI,
	&m14342_MI,
	&m14343_MI,
};
static Il2CppInterfaceOffsetPair t2754_IOs[] = 
{
	{ &t4757_TI, 4},
	{ &t998_TI, 6},
};
extern TypeInfo t2753_TI;
extern TypeInfo t2753_TI;
extern TypeInfo t2754_TI;
extern TypeInfo t88_TI;
extern TypeInfo t88_TI;
static Il2CppRGCTXData t2754_RGCTXData[11] = 
{
	&t7571_0_0_0/* Type Usage */,
	&t88_0_0_0/* Type Usage */,
	&t2753_TI/* Class Usage */,
	&t2753_TI/* Static Usage */,
	&t2754_TI/* Class Usage */,
	&m14341_MI/* Method Usage */,
	&t88_TI/* Class Usage */,
	&m32146_MI/* Method Usage */,
	&m24562_MI/* Method Usage */,
	&m14336_MI/* Method Usage */,
	&t88_TI/* Class Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2754_0_0_0;
extern Il2CppType t2754_1_0_0;
struct t2754;
extern Il2CppGenericClass t2754_GC;
extern TypeInfo t1519_TI;
TypeInfo t2754_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2754_MIs, NULL, NULL, NULL, &t2753_TI, NULL, &t1519_TI, &t2754_TI, NULL, t2754_VT, &EmptyCustomAttributesCache, &t2754_TI, &t2754_0_0_0, &t2754_1_0_0, t2754_IOs, &t2754_GC, NULL, NULL, NULL, t2754_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2754), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t178.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t178_TI;
#include "t178MD.h"

#include "t124.h"
#include "t222.h"


// Metadata Definition System.Predicate`1<GameMessage>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t178_m677_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m677_GM;
MethodInfo m677_MI = 
{
	".ctor", (methodPointerType)&m11859_gshared, &t178_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t178_m677_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m677_GM};
extern Il2CppType t88_0_0_0;
static ParameterInfo t178_m14344_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14344_GM;
MethodInfo m14344_MI = 
{
	"Invoke", (methodPointerType)&m11860_gshared, &t178_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t178_m14344_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14344_GM};
extern Il2CppType t88_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t178_m14345_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14345_GM;
MethodInfo m14345_MI = 
{
	"BeginInvoke", (methodPointerType)&m11861_gshared, &t178_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t178_m14345_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m14345_GM};
extern Il2CppType t221_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t178_m14346_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14346_GM;
MethodInfo m14346_MI = 
{
	"EndInvoke", (methodPointerType)&m11862_gshared, &t178_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t178_m14346_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14346_GM};
static MethodInfo* t178_MIs[] =
{
	&m677_MI,
	&m14344_MI,
	&m14345_MI,
	&m14346_MI,
	NULL
};
extern MethodInfo m2341_MI;
extern MethodInfo m2342_MI;
extern MethodInfo m2343_MI;
extern MethodInfo m2344_MI;
extern MethodInfo m2345_MI;
extern MethodInfo m2346_MI;
extern MethodInfo m2347_MI;
extern MethodInfo m14344_MI;
extern MethodInfo m14345_MI;
extern MethodInfo m14346_MI;
static MethodInfo* t178_VT[] =
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
	&m14344_MI,
	&m14345_MI,
	&m14346_MI,
};
extern TypeInfo t516_TI;
extern TypeInfo t517_TI;
static Il2CppInterfaceOffsetPair t178_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t178_0_0_0;
extern Il2CppType t178_1_0_0;
extern TypeInfo t353_TI;
struct t178;
extern Il2CppGenericClass t178_GC;
TypeInfo t178_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t178_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t178_TI, NULL, t178_VT, &EmptyCustomAttributesCache, &t178_TI, &t178_0_0_0, &t178_1_0_0, t178_IOs, &t178_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t178), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2747.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2747_TI;
#include "t2747MD.h"



// Metadata Definition System.Action`1<GameMessage>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2747_m14347_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14347_GM;
MethodInfo m14347_MI = 
{
	".ctor", (methodPointerType)&m11863_gshared, &t2747_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2747_m14347_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14347_GM};
extern Il2CppType t88_0_0_0;
static ParameterInfo t2747_m14348_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14348_GM;
MethodInfo m14348_MI = 
{
	"Invoke", (methodPointerType)&m11864_gshared, &t2747_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2747_m14348_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14348_GM};
extern Il2CppType t88_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2747_m14349_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14349_GM;
MethodInfo m14349_MI = 
{
	"BeginInvoke", (methodPointerType)&m11865_gshared, &t2747_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t2747_m14349_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m14349_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2747_m14350_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14350_GM;
MethodInfo m14350_MI = 
{
	"EndInvoke", (methodPointerType)&m11866_gshared, &t2747_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2747_m14350_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14350_GM};
static MethodInfo* t2747_MIs[] =
{
	&m14347_MI,
	&m14348_MI,
	&m14349_MI,
	&m14350_MI,
	NULL
};
extern MethodInfo m14348_MI;
extern MethodInfo m14349_MI;
extern MethodInfo m14350_MI;
static MethodInfo* t2747_VT[] =
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
	&m14348_MI,
	&m14349_MI,
	&m14350_MI,
};
static Il2CppInterfaceOffsetPair t2747_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2747_0_0_0;
extern Il2CppType t2747_1_0_0;
struct t2747;
extern Il2CppGenericClass t2747_GC;
TypeInfo t2747_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Action`1", "System", t2747_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t2747_TI, NULL, t2747_VT, &EmptyCustomAttributesCache, &t2747_TI, &t2747_0_0_0, &t2747_1_0_0, t2747_IOs, &t2747_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2747), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2755.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2755_TI;
#include "t2755MD.h"

#include "t1510.h"
#include "t2756.h"
extern TypeInfo t4756_TI;
extern TypeInfo t1510_TI;
extern TypeInfo t2756_TI;
#include "t2756MD.h"
extern Il2CppType t4756_0_0_0;
extern Il2CppType t1510_0_0_0;
extern MethodInfo m14355_MI;
extern MethodInfo m32149_MI;
extern MethodInfo m10152_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<GameMessage>
extern Il2CppType t2755_0_0_49;
FieldInfo t2755_f0_FieldInfo = 
{
	"_default", &t2755_0_0_49, &t2755_TI, offsetof(t2755_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2755_FIs[] =
{
	&t2755_f0_FieldInfo,
	NULL
};
extern MethodInfo m14354_MI;
static PropertyInfo t2755____Default_PropertyInfo = 
{
	&t2755_TI, "Default", &m14354_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2755_PIs[] =
{
	&t2755____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14351_GM;
MethodInfo m14351_MI = 
{
	".ctor", (methodPointerType)&m11867_gshared, &t2755_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14351_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14352_GM;
MethodInfo m14352_MI = 
{
	".cctor", (methodPointerType)&m11868_gshared, &t2755_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14352_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2755_m14353_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14353_GM;
MethodInfo m14353_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m11869_gshared, &t2755_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t2755_m14353_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14353_GM};
extern Il2CppType t88_0_0_0;
extern Il2CppType t88_0_0_0;
static ParameterInfo t2755_m32149_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32149_GM;
MethodInfo m32149_MI = 
{
	"Compare", NULL, &t2755_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t2755_m32149_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32149_GM};
extern Il2CppType t2755_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14354_GM;
MethodInfo m14354_MI = 
{
	"get_Default", (methodPointerType)&m11870_gshared, &t2755_TI, &t2755_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14354_GM};
static MethodInfo* t2755_MIs[] =
{
	&m14351_MI,
	&m14352_MI,
	&m14353_MI,
	&m32149_MI,
	&m14354_MI,
	NULL
};
extern MethodInfo m14353_MI;
static MethodInfo* t2755_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m32149_MI,
	&m14353_MI,
	NULL,
};
extern TypeInfo t4755_TI;
extern TypeInfo t991_TI;
static TypeInfo* t2755_ITIs[] = 
{
	&t4755_TI,
	&t991_TI,
};
static Il2CppInterfaceOffsetPair t2755_IOs[] = 
{
	{ &t4755_TI, 4},
	{ &t991_TI, 5},
};
extern TypeInfo t2755_TI;
extern TypeInfo t2755_TI;
extern TypeInfo t2756_TI;
extern TypeInfo t88_TI;
static Il2CppRGCTXData t2755_RGCTXData[8] = 
{
	&t4756_0_0_0/* Type Usage */,
	&t88_0_0_0/* Type Usage */,
	&t2755_TI/* Class Usage */,
	&t2755_TI/* Static Usage */,
	&t2756_TI/* Class Usage */,
	&m14355_MI/* Method Usage */,
	&t88_TI/* Class Usage */,
	&m32149_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2755_0_0_0;
extern Il2CppType t2755_1_0_0;
struct t2755;
extern Il2CppGenericClass t2755_GC;
TypeInfo t2755_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2755_MIs, t2755_PIs, t2755_FIs, NULL, &t5_TI, NULL, NULL, &t2755_TI, t2755_ITIs, t2755_VT, &EmptyCustomAttributesCache, &t2755_TI, &t2755_0_0_0, &t2755_1_0_0, t2755_IOs, &t2755_GC, NULL, NULL, NULL, t2755_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2755), 0, -1, sizeof(t2755_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IComparer`1<GameMessage>
extern Il2CppType t88_0_0_0;
extern Il2CppType t88_0_0_0;
static ParameterInfo t4755_m24570_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m24570_GM;
MethodInfo m24570_MI = 
{
	"Compare", NULL, &t4755_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t4755_m24570_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m24570_GM};
static MethodInfo* t4755_MIs[] =
{
	&m24570_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4755_0_0_0;
extern Il2CppType t4755_1_0_0;
struct t4755;
extern Il2CppGenericClass t4755_GC;
TypeInfo t4755_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t4755_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4755_TI, NULL, NULL, &EmptyCustomAttributesCache, &t4755_TI, &t4755_0_0_0, &t4755_1_0_0, NULL, &t4755_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.IComparable`1<GameMessage>
extern Il2CppType t88_0_0_0;
static ParameterInfo t4756_m24571_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m24571_GM;
MethodInfo m24571_MI = 
{
	"CompareTo", NULL, &t4756_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t4756_m24571_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m24571_GM};
static MethodInfo* t4756_MIs[] =
{
	&m24571_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4756_1_0_0;
struct t4756;
extern Il2CppGenericClass t4756_GC;
TypeInfo t4756_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t4756_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4756_TI, NULL, NULL, &EmptyCustomAttributesCache, &t4756_TI, &t4756_0_0_0, &t4756_1_0_0, NULL, &t4756_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t122_TI;
extern MethodInfo m14351_MI;
extern MethodInfo m24571_MI;
extern MethodInfo m11009_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<GameMessage>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14355_GM;
MethodInfo m14355_MI = 
{
	".ctor", (methodPointerType)&m11871_gshared, &t2756_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14355_GM};
extern Il2CppType t88_0_0_0;
extern Il2CppType t88_0_0_0;
static ParameterInfo t2756_m14356_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14356_GM;
MethodInfo m14356_MI = 
{
	"Compare", (methodPointerType)&m11872_gshared, &t2756_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t2756_m14356_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14356_GM};
static MethodInfo* t2756_MIs[] =
{
	&m14355_MI,
	&m14356_MI,
	NULL
};
extern MethodInfo m14356_MI;
static MethodInfo* t2756_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14356_MI,
	&m14353_MI,
	&m14356_MI,
};
static Il2CppInterfaceOffsetPair t2756_IOs[] = 
{
	{ &t4755_TI, 4},
	{ &t991_TI, 5},
};
extern TypeInfo t2755_TI;
extern TypeInfo t2755_TI;
extern TypeInfo t2756_TI;
extern TypeInfo t88_TI;
extern TypeInfo t88_TI;
extern TypeInfo t4756_TI;
static Il2CppRGCTXData t2756_RGCTXData[12] = 
{
	&t4756_0_0_0/* Type Usage */,
	&t88_0_0_0/* Type Usage */,
	&t2755_TI/* Class Usage */,
	&t2755_TI/* Static Usage */,
	&t2756_TI/* Class Usage */,
	&m14355_MI/* Method Usage */,
	&t88_TI/* Class Usage */,
	&m32149_MI/* Method Usage */,
	&m14351_MI/* Method Usage */,
	&t88_TI/* Class Usage */,
	&t4756_TI/* Class Usage */,
	&m24571_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2756_0_0_0;
extern Il2CppType t2756_1_0_0;
struct t2756;
extern Il2CppGenericClass t2756_GC;
extern TypeInfo t1509_TI;
TypeInfo t2756_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2756_MIs, NULL, NULL, NULL, &t2755_TI, NULL, &t1509_TI, &t2756_TI, NULL, t2756_VT, &EmptyCustomAttributesCache, &t2756_TI, &t2756_0_0_0, &t2756_1_0_0, t2756_IOs, &t2756_GC, NULL, NULL, NULL, t2756_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2756), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t2748.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2748_TI;
#include "t2748MD.h"



// Metadata Definition System.Comparison`1<GameMessage>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2748_m14357_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14357_GM;
MethodInfo m14357_MI = 
{
	".ctor", (methodPointerType)&m11938_gshared, &t2748_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2748_m14357_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14357_GM};
extern Il2CppType t88_0_0_0;
extern Il2CppType t88_0_0_0;
static ParameterInfo t2748_m14358_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14358_GM;
MethodInfo m14358_MI = 
{
	"Invoke", (methodPointerType)&m11939_gshared, &t2748_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t2748_m14358_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14358_GM};
extern Il2CppType t88_0_0_0;
extern Il2CppType t88_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2748_m14359_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14359_GM;
MethodInfo m14359_MI = 
{
	"BeginInvoke", (methodPointerType)&m11940_gshared, &t2748_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5_t5, t2748_m14359_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL, &m14359_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2748_m14360_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14360_GM;
MethodInfo m14360_MI = 
{
	"EndInvoke", (methodPointerType)&m11941_gshared, &t2748_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2748_m14360_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14360_GM};
static MethodInfo* t2748_MIs[] =
{
	&m14357_MI,
	&m14358_MI,
	&m14359_MI,
	&m14360_MI,
	NULL
};
extern MethodInfo m14358_MI;
extern MethodInfo m14359_MI;
extern MethodInfo m14360_MI;
static MethodInfo* t2748_VT[] =
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
	&m14358_MI,
	&m14359_MI,
	&m14360_MI,
};
static Il2CppInterfaceOffsetPair t2748_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2748_0_0_0;
extern Il2CppType t2748_1_0_0;
struct t2748;
extern Il2CppGenericClass t2748_GC;
TypeInfo t2748_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t2748_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t2748_TI, NULL, t2748_VT, &EmptyCustomAttributesCache, &t2748_TI, &t2748_0_0_0, &t2748_1_0_0, t2748_IOs, &t2748_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2748), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t93.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t93_TI;
#include "t93MD.h"

#include "t2757.h"
extern TypeInfo t1181_TI;
extern TypeInfo t1956_TI;
extern TypeInfo t2757_TI;
#include "t1181MD.h"
#include "t166MD.h"
#include "t2757MD.h"
extern MethodInfo m10158_MI;
extern MethodInfo m4991_MI;
extern MethodInfo m10604_MI;
extern MethodInfo m6741_MI;
extern MethodInfo m14381_MI;
extern MethodInfo m14375_MI;
extern MethodInfo m5931_MI;
extern MethodInfo m14378_MI;
extern MethodInfo m14372_MI;
extern MethodInfo m14388_MI;


 t2757  m14381 (t93 * __this, MethodInfo* method){
	{
		t2757  L_0 = {0};
		m14388(&L_0, __this, &m14388_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.Queue`1<GameMessage>
extern Il2CppType t90_0_0_1;
FieldInfo t93_f0_FieldInfo = 
{
	"_array", &t90_0_0_1, &t93_TI, offsetof(t93, f0), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t93_f1_FieldInfo = 
{
	"_head", &t110_0_0_1, &t93_TI, offsetof(t93, f1), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t93_f2_FieldInfo = 
{
	"_tail", &t110_0_0_1, &t93_TI, offsetof(t93, f2), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t93_f3_FieldInfo = 
{
	"_size", &t110_0_0_1, &t93_TI, offsetof(t93, f3), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t93_f4_FieldInfo = 
{
	"_version", &t110_0_0_1, &t93_TI, offsetof(t93, f4), &EmptyCustomAttributesCache};
static FieldInfo* t93_FIs[] =
{
	&t93_f0_FieldInfo,
	&t93_f1_FieldInfo,
	&t93_f2_FieldInfo,
	&t93_f3_FieldInfo,
	&t93_f4_FieldInfo,
	NULL
};
extern MethodInfo m14364_MI;
static PropertyInfo t93____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t93_TI, "System.Collections.ICollection.IsSynchronized", &m14364_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14366_MI;
static PropertyInfo t93____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t93_TI, "System.Collections.ICollection.SyncRoot", &m14366_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m683_MI;
static PropertyInfo t93____Count_PropertyInfo = 
{
	&t93_TI, "Count", &m683_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t93_PIs[] =
{
	&t93____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t93____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t93____Count_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m673_GM;
MethodInfo m673_MI = 
{
	".ctor", (methodPointerType)&m14361_gshared, &t93_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m673_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t93_m14362_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"idx", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14362_GM;
MethodInfo m14362_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m14363_gshared, &t93_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t93_m14362_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14362_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14364_GM;
MethodInfo m14364_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m14365_gshared, &t93_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14364_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14366_GM;
MethodInfo m14366_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m14367_gshared, &t93_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14366_GM};
extern Il2CppType t2744_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14368_GM;
MethodInfo m14368_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m14369_gshared, &t93_TI, &t2744_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14368_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14370_GM;
MethodInfo m14370_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m14371_gshared, &t93_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14370_GM};
extern Il2CppType t90_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t93_m14372_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
	{"idx", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14372_GM;
MethodInfo m14372_MI = 
{
	"CopyTo", (methodPointerType)&m14373_gshared, &t93_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t93_m14372_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14372_GM};
extern Il2CppType t88_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m686_GM;
MethodInfo m686_MI = 
{
	"Dequeue", (methodPointerType)&m14374_gshared, &t93_TI, &t88_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m686_GM};
extern Il2CppType t88_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14375_GM;
MethodInfo m14375_MI = 
{
	"Peek", (methodPointerType)&m14376_gshared, &t93_TI, &t88_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14375_GM};
extern Il2CppType t88_0_0_0;
static ParameterInfo t93_m681_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m681_GM;
MethodInfo m681_MI = 
{
	"Enqueue", (methodPointerType)&m14377_gshared, &t93_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t93_m681_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m681_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t93_m14378_ParameterInfos[] = 
{
	{"new_size", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14378_GM;
MethodInfo m14378_MI = 
{
	"SetCapacity", (methodPointerType)&m14379_gshared, &t93_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t93_m14378_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14378_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m683_GM;
MethodInfo m683_MI = 
{
	"get_Count", (methodPointerType)&m14380_gshared, &t93_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m683_GM};
extern Il2CppType t2757_0_0_0;
extern void* RuntimeInvoker_t2757 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14381_GM;
MethodInfo m14381_MI = 
{
	"GetEnumerator", (methodPointerType)&m14381, &t93_TI, &t2757_0_0_0, RuntimeInvoker_t2757, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14381_GM};
static MethodInfo* t93_MIs[] =
{
	&m673_MI,
	&m14362_MI,
	&m14364_MI,
	&m14366_MI,
	&m14368_MI,
	&m14370_MI,
	&m14372_MI,
	&m686_MI,
	&m14375_MI,
	&m681_MI,
	&m14378_MI,
	&m683_MI,
	&m14381_MI,
	NULL
};
extern MethodInfo m14368_MI;
extern MethodInfo m14362_MI;
extern MethodInfo m14370_MI;
static MethodInfo* t93_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14368_MI,
	&m683_MI,
	&m14364_MI,
	&m14366_MI,
	&m14362_MI,
	&m14370_MI,
};
static TypeInfo* t93_ITIs[] = 
{
	&t2743_TI,
	&t811_TI,
	&t739_TI,
};
static Il2CppInterfaceOffsetPair t93_IOs[] = 
{
	{ &t2743_TI, 4},
	{ &t811_TI, 5},
	{ &t739_TI, 9},
};
extern TypeInfo t90_TI;
extern TypeInfo t2757_TI;
static Il2CppRGCTXData t93_RGCTXData[7] = 
{
	&t90_TI/* Array Usage */,
	&m14381_MI/* Method Usage */,
	&t2757_TI/* Class Usage */,
	&m14375_MI/* Method Usage */,
	&m14378_MI/* Method Usage */,
	&m14372_MI/* Method Usage */,
	&m14388_MI/* Method Usage */,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t93_0_0_0;
extern Il2CppType t93_1_0_0;
struct t93;
extern Il2CppGenericClass t93_GC;
extern CustomAttributesCache t980__CustomAttributeCache;
TypeInfo t93_TI = 
{
	&g_System_dll_Image, NULL, "Queue`1", "System.Collections.Generic", t93_MIs, t93_PIs, t93_FIs, NULL, &t5_TI, NULL, NULL, &t93_TI, t93_ITIs, t93_VT, &t980__CustomAttributeCache, &t93_TI, &t93_0_0_0, &t93_1_0_0, t93_IOs, &t93_GC, NULL, NULL, NULL, t93_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t93), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 13, 3, 5, 0, 0, 10, 3, 3};
#include "t2758.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2758_TI;
#include "t2758MD.h"

#include "t2759.h"
extern TypeInfo t168_TI;
extern TypeInfo t2759_TI;
#include "t2759MD.h"
extern MethodInfo m14382_MI;
extern MethodInfo m14376_MI;
extern MethodInfo m14379_MI;
extern MethodInfo m14373_MI;
extern MethodInfo m14383_MI;


extern MethodInfo m14361_MI;
 void m14361_gshared (t2758 * __this, MethodInfo* method)
{
	{
		m460(__this, &m460_MI);
		__this->f0 = ((t168*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), 0));
		return;
	}
}
extern MethodInfo m14363_MI;
 void m14363_gshared (t2758 * __this, t107 * p0, int32_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		if (p0)
		{
			goto IL_000c;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m10158(L_0, &m10158_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000c:
	{
		int32_t L_1 = m4763(p0, &m4763_MI);
		if ((((uint32_t)p1) <= ((uint32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		t1181 * L_2 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4991(L_2, &m4991_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001e:
	{
		int32_t L_3 = m4763(p0, &m4763_MI);
		int32_t L_4 = (__this->f3);
		if ((((int32_t)((int32_t)(L_3-p1))) >= ((int32_t)L_4)))
		{
			goto IL_0037;
		}
	}
	{
		t1181 * L_5 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4991(L_5, &m4991_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0037:
	{
		int32_t L_6 = (__this->f3);
		if (L_6)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			t168* L_7 = (__this->f0);
			V_0 = (((int32_t)(((t107 *)L_7)->max_length)));
			int32_t L_8 = (__this->f1);
			V_1 = ((int32_t)(V_0-L_8));
			t168* L_9 = (__this->f0);
			int32_t L_10 = (__this->f1);
			int32_t L_11 = (__this->f3);
			int32_t L_12 = m10604(NULL, L_11, V_1, &m10604_MI);
			m6741(NULL, (t107 *)(t107 *)L_9, L_10, p0, p1, L_12, &m6741_MI);
			int32_t L_13 = (__this->f3);
			if ((((int32_t)L_13) <= ((int32_t)V_1)))
			{
				goto IL_0098;
			}
		}

IL_0080:
		{
			t168* L_14 = (__this->f0);
			int32_t L_15 = (__this->f3);
			m6741(NULL, (t107 *)(t107 *)L_14, 0, p0, ((int32_t)(p1+V_1)), ((int32_t)(L_15-V_1)), &m6741_MI);
		}

IL_0098:
		{
			// IL_0098: leave IL_00a9
			goto IL_00a9;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t142 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t1956_TI, e.ex->object.klass))
			goto IL_009d;
		throw e;
	}

IL_009d:
	{ // begin catch(System.ArrayTypeMismatchException)
		t160 * L_16 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m10152(L_16, &m10152_MI);
		il2cpp_codegen_raise_exception(L_16);
		// IL_00a4: leave IL_00a9
		goto IL_00a9;
	} // end catch (depth: 1)

IL_00a9:
	{
		return;
	}
}
extern MethodInfo m14365_MI;
 bool m14365_gshared (t2758 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m14367_MI;
 t5 * m14367_gshared (t2758 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m14369_MI;
 t5* m14369_gshared (t2758 * __this, MethodInfo* method)
{
	{
		t2759  L_0 = (( t2759  (*) (t2758 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2759  L_1 = L_0;
		t5 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t5*)L_2;
	}
}
extern MethodInfo m14371_MI;
 t5 * m14371_gshared (t2758 * __this, MethodInfo* method)
{
	{
		t2759  L_0 = (( t2759  (*) (t2758 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2759  L_1 = L_0;
		t5 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t5 *)L_2;
	}
}
 void m14373_gshared (t2758 * __this, t168* p0, int32_t p1, MethodInfo* method)
{
	{
		if (p0)
		{
			goto IL_000c;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m10158(L_0, &m10158_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000c:
	{
		InterfaceActionInvoker2< t107 *, int32_t >::Invoke(&m4754_MI, __this, (t107 *)(t107 *)p0, p1);
		return;
	}
}
extern MethodInfo m14374_MI;
 t5 * m14374_gshared (t2758 * __this, MethodInfo* method)
{
	t5 * V_0 = {0};
	t5 * V_1 = {0};
	int32_t V_2 = 0;
	{
		t5 * L_0 = (( t5 * (*) (t2758 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_0;
		t168* L_1 = (__this->f0);
		int32_t L_2 = (__this->f1);
		Initobj (&t5_TI, (&V_1));
		*((t5 **)(t5 **)SZArrayLdElema(L_1, L_2)) = (t5 *)V_1;
		int32_t L_3 = (__this->f1);
		int32_t L_4 = ((int32_t)(L_3+1));
		V_2 = L_4;
		__this->f1 = L_4;
		t168* L_5 = (__this->f0);
		if ((((uint32_t)V_2) != ((uint32_t)(((int32_t)(((t107 *)L_5)->max_length))))))
		{
			goto IL_0046;
		}
	}
	{
		__this->f1 = 0;
	}

IL_0046:
	{
		int32_t L_6 = (__this->f3);
		__this->f3 = ((int32_t)(L_6-1));
		int32_t L_7 = (__this->f4);
		__this->f4 = ((int32_t)(L_7+1));
		return V_0;
	}
}
 t5 * m14376_gshared (t2758 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
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
		t168* L_2 = (__this->f0);
		int32_t L_3 = (__this->f1);
		int32_t L_4 = L_3;
		return (*(t5 **)(t5 **)SZArrayLdElema(L_2, L_4));
	}
}
extern MethodInfo m14377_MI;
 void m14377_gshared (t2758 * __this, t5 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f3);
		t168* L_1 = (__this->f0);
		if ((((int32_t)L_0) == ((int32_t)(((int32_t)(((t107 *)L_1)->max_length))))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_2 = (__this->f2);
		t168* L_3 = (__this->f0);
		if ((((uint32_t)L_2) != ((uint32_t)(((int32_t)(((t107 *)L_3)->max_length))))))
		{
			goto IL_0045;
		}
	}

IL_0026:
	{
		int32_t L_4 = (__this->f3);
		int32_t L_5 = (__this->f2);
		int32_t L_6 = m5931(NULL, L_4, L_5, &m5931_MI);
		int32_t L_7 = m5931(NULL, ((int32_t)((int32_t)L_6*(int32_t)2)), 4, &m5931_MI);
		(( void (*) (t2758 * __this, int32_t p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, L_7, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}

IL_0045:
	{
		t168* L_8 = (__this->f0);
		int32_t L_9 = (__this->f2);
		*((t5 **)(t5 **)SZArrayLdElema(L_8, L_9)) = (t5 *)p0;
		int32_t L_10 = (__this->f2);
		int32_t L_11 = ((int32_t)(L_10+1));
		V_0 = L_11;
		__this->f2 = L_11;
		t168* L_12 = (__this->f0);
		if ((((uint32_t)V_0) != ((uint32_t)(((int32_t)(((t107 *)L_12)->max_length))))))
		{
			goto IL_007c;
		}
	}
	{
		__this->f2 = 0;
	}

IL_007c:
	{
		int32_t L_13 = (__this->f3);
		__this->f3 = ((int32_t)(L_13+1));
		int32_t L_14 = (__this->f4);
		__this->f4 = ((int32_t)(L_14+1));
		return;
	}
}
 void m14379_gshared (t2758 * __this, int32_t p0, MethodInfo* method)
{
	t168* V_0 = {0};
	{
		t168* L_0 = (__this->f0);
		if ((((uint32_t)p0) != ((uint32_t)(((int32_t)(((t107 *)L_0)->max_length))))))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		int32_t L_1 = (__this->f3);
		if ((((int32_t)p0) >= ((int32_t)L_1)))
		{
			goto IL_0026;
		}
	}
	{
		t133 * L_2 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4758(L_2, (t11*) &_stringLiteral237, &m4758_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0026:
	{
		V_0 = ((t168*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), p0));
		int32_t L_3 = (__this->f3);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		(( void (*) (t2758 * __this, t168* p0, int32_t p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(__this, V_0, 0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	}

IL_0041:
	{
		__this->f0 = V_0;
		int32_t L_4 = (__this->f3);
		__this->f2 = L_4;
		__this->f1 = 0;
		int32_t L_5 = (__this->f4);
		__this->f4 = ((int32_t)(L_5+1));
		return;
	}
}
extern MethodInfo m14380_MI;
 int32_t m14380_gshared (t2758 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
 t2759  m14382 (t2758 * __this, MethodInfo* method){
	{
		t2759  L_0 = {0};
		m14383(&L_0, __this, &m14383_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.Queue`1<System.Object>
extern Il2CppType t168_0_0_1;
FieldInfo t2758_f0_FieldInfo = 
{
	"_array", &t168_0_0_1, &t2758_TI, offsetof(t2758, f0), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2758_f1_FieldInfo = 
{
	"_head", &t110_0_0_1, &t2758_TI, offsetof(t2758, f1), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2758_f2_FieldInfo = 
{
	"_tail", &t110_0_0_1, &t2758_TI, offsetof(t2758, f2), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2758_f3_FieldInfo = 
{
	"_size", &t110_0_0_1, &t2758_TI, offsetof(t2758, f3), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2758_f4_FieldInfo = 
{
	"_version", &t110_0_0_1, &t2758_TI, offsetof(t2758, f4), &EmptyCustomAttributesCache};
static FieldInfo* t2758_FIs[] =
{
	&t2758_f0_FieldInfo,
	&t2758_f1_FieldInfo,
	&t2758_f2_FieldInfo,
	&t2758_f3_FieldInfo,
	&t2758_f4_FieldInfo,
	NULL
};
static PropertyInfo t2758____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2758_TI, "System.Collections.ICollection.IsSynchronized", &m14365_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2758____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2758_TI, "System.Collections.ICollection.SyncRoot", &m14367_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2758____Count_PropertyInfo = 
{
	&t2758_TI, "Count", &m14380_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2758_PIs[] =
{
	&t2758____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2758____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2758____Count_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14361_GM;
MethodInfo m14361_MI = 
{
	".ctor", (methodPointerType)&m14361_gshared, &t2758_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14361_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2758_m14363_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"idx", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14363_GM;
MethodInfo m14363_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m14363_gshared, &t2758_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2758_m14363_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14363_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14365_GM;
MethodInfo m14365_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m14365_gshared, &t2758_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14365_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14367_GM;
MethodInfo m14367_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m14367_gshared, &t2758_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14367_GM};
extern Il2CppType t492_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14369_GM;
MethodInfo m14369_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m14369_gshared, &t2758_TI, &t492_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14369_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14371_GM;
MethodInfo m14371_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m14371_gshared, &t2758_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14371_GM};
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2758_m14373_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"idx", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14373_GM;
MethodInfo m14373_MI = 
{
	"CopyTo", (methodPointerType)&m14373_gshared, &t2758_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2758_m14373_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14373_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14374_GM;
MethodInfo m14374_MI = 
{
	"Dequeue", (methodPointerType)&m14374_gshared, &t2758_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14374_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14376_GM;
MethodInfo m14376_MI = 
{
	"Peek", (methodPointerType)&m14376_gshared, &t2758_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14376_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2758_m14377_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14377_GM;
MethodInfo m14377_MI = 
{
	"Enqueue", (methodPointerType)&m14377_gshared, &t2758_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2758_m14377_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14377_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2758_m14379_ParameterInfos[] = 
{
	{"new_size", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14379_GM;
MethodInfo m14379_MI = 
{
	"SetCapacity", (methodPointerType)&m14379_gshared, &t2758_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2758_m14379_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14379_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14380_GM;
MethodInfo m14380_MI = 
{
	"get_Count", (methodPointerType)&m14380_gshared, &t2758_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14380_GM};
extern Il2CppType t2759_0_0_0;
extern void* RuntimeInvoker_t2759 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14382_GM;
MethodInfo m14382_MI = 
{
	"GetEnumerator", (methodPointerType)&m14382, &t2758_TI, &t2759_0_0_0, RuntimeInvoker_t2759, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14382_GM};
static MethodInfo* t2758_MIs[] =
{
	&m14361_MI,
	&m14363_MI,
	&m14365_MI,
	&m14367_MI,
	&m14369_MI,
	&m14371_MI,
	&m14373_MI,
	&m14374_MI,
	&m14376_MI,
	&m14377_MI,
	&m14379_MI,
	&m14380_MI,
	&m14382_MI,
	NULL
};
static MethodInfo* t2758_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14369_MI,
	&m14380_MI,
	&m14365_MI,
	&m14367_MI,
	&m14363_MI,
	&m14371_MI,
};
extern TypeInfo t2459_TI;
static TypeInfo* t2758_ITIs[] = 
{
	&t2459_TI,
	&t811_TI,
	&t739_TI,
};
static Il2CppInterfaceOffsetPair t2758_IOs[] = 
{
	{ &t2459_TI, 4},
	{ &t811_TI, 5},
	{ &t739_TI, 9},
};
extern TypeInfo t168_TI;
extern TypeInfo t2759_TI;
static Il2CppRGCTXData t2758_RGCTXData[7] = 
{
	&t168_TI/* Array Usage */,
	&m14382_MI/* Method Usage */,
	&t2759_TI/* Class Usage */,
	&m14376_MI/* Method Usage */,
	&m14379_MI/* Method Usage */,
	&m14373_MI/* Method Usage */,
	&m14383_MI/* Method Usage */,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t2758_0_0_0;
extern Il2CppType t2758_1_0_0;
struct t2758;
extern Il2CppGenericClass t2758_GC;
extern CustomAttributesCache t980__CustomAttributeCache;
TypeInfo t2758_TI = 
{
	&g_System_dll_Image, NULL, "Queue`1", "System.Collections.Generic", t2758_MIs, t2758_PIs, t2758_FIs, NULL, &t5_TI, NULL, NULL, &t2758_TI, t2758_ITIs, t2758_VT, &t980__CustomAttributeCache, &t2758_TI, &t2758_0_0_0, &t2758_1_0_0, t2758_IOs, &t2758_GC, NULL, NULL, NULL, t2758_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2758), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 13, 3, 5, 0, 0, 10, 3, 3};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m14387_MI;


 void m14383_gshared (t2759 * __this, t2758 * p0, MethodInfo* method)
{
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		int32_t L_0 = (p0->f4);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m14384_MI;
 t5 * m14384_gshared (t2759 * __this, MethodInfo* method)
{
	{
		t5 * L_0 = (( t5 * (*) (t2759 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t5 * L_1 = L_0;
		return ((t5 *)L_1);
	}
}
extern MethodInfo m14385_MI;
 void m14385_gshared (t2759 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14386_MI;
 bool m14386_gshared (t2759 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B7_0 = 0;
	{
		int32_t L_0 = (__this->f2);
		t2758 * L_1 = (__this->f0);
		int32_t L_2 = (L_1->f4);
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
		t2758 * L_5 = (__this->f0);
		int32_t L_6 = (L_5->f3);
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
 t5 * m14387_gshared (t2759 * __this, MethodInfo* method)
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
		t2758 * L_2 = (__this->f0);
		t168* L_3 = (L_2->f0);
		t2758 * L_4 = (__this->f0);
		int32_t L_5 = (L_4->f3);
		int32_t L_6 = (__this->f1);
		t2758 * L_7 = (__this->f0);
		int32_t L_8 = (L_7->f1);
		t2758 * L_9 = (__this->f0);
		t168* L_10 = (L_9->f0);
		int32_t L_11 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_5-1))-L_6))+L_8))%(((int32_t)(((t107 *)L_10)->max_length)))));
		return (*(t5 **)(t5 **)SZArrayLdElema(L_3, L_11));
	}
}
// Metadata Definition System.Collections.Generic.Queue`1/Enumerator<System.Object>
extern Il2CppType t2758_0_0_1;
FieldInfo t2759_f0_FieldInfo = 
{
	"q", &t2758_0_0_1, &t2759_TI, offsetof(t2759, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2759_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2759_TI, offsetof(t2759, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2759_f2_FieldInfo = 
{
	"ver", &t110_0_0_1, &t2759_TI, offsetof(t2759, f2) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2759_FIs[] =
{
	&t2759_f0_FieldInfo,
	&t2759_f1_FieldInfo,
	&t2759_f2_FieldInfo,
	NULL
};
static PropertyInfo t2759____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2759_TI, "System.Collections.IEnumerator.Current", &m14384_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2759____Current_PropertyInfo = 
{
	&t2759_TI, "Current", &m14387_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2759_PIs[] =
{
	&t2759____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2759____Current_PropertyInfo,
	NULL
};
extern Il2CppType t2758_0_0_0;
static ParameterInfo t2759_m14383_ParameterInfos[] = 
{
	{"q", 0, 134217728, &EmptyCustomAttributesCache, &t2758_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14383_GM;
MethodInfo m14383_MI = 
{
	".ctor", (methodPointerType)&m14383_gshared, &t2759_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2759_m14383_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14383_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14384_GM;
MethodInfo m14384_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14384_gshared, &t2759_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14384_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14385_GM;
MethodInfo m14385_MI = 
{
	"Dispose", (methodPointerType)&m14385_gshared, &t2759_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14385_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14386_GM;
MethodInfo m14386_MI = 
{
	"MoveNext", (methodPointerType)&m14386_gshared, &t2759_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14386_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14387_GM;
MethodInfo m14387_MI = 
{
	"get_Current", (methodPointerType)&m14387_gshared, &t2759_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14387_GM};
static MethodInfo* t2759_MIs[] =
{
	&m14383_MI,
	&m14384_MI,
	&m14385_MI,
	&m14386_MI,
	&m14387_MI,
	NULL
};
static MethodInfo* t2759_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m14384_MI,
	&m14386_MI,
	&m14385_MI,
	&m14387_MI,
};
extern TypeInfo t492_TI;
static TypeInfo* t2759_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t492_TI,
};
static Il2CppInterfaceOffsetPair t2759_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t492_TI, 7},
};
extern TypeInfo t5_TI;
static Il2CppRGCTXData t2759_RGCTXData[2] = 
{
	&m14387_MI/* Method Usage */,
	&t5_TI/* Class Usage */,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t2759_0_0_0;
extern Il2CppType t2759_1_0_0;
extern Il2CppGenericClass t2759_GC;
extern TypeInfo t980_TI;
TypeInfo t2759_TI = 
{
	&g_System_dll_Image, NULL, "Enumerator", "", t2759_MIs, t2759_PIs, t2759_FIs, NULL, &t267_TI, NULL, &t980_TI, &t2759_TI, t2759_ITIs, t2759_VT, &EmptyCustomAttributesCache, &t2759_TI, &t2759_0_0_0, &t2759_1_0_0, t2759_IOs, &t2759_GC, NULL, NULL, NULL, t2759_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2759)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 3, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m14392_MI;


// Metadata Definition System.Collections.Generic.Queue`1/Enumerator<GameMessage>
extern Il2CppType t93_0_0_1;
FieldInfo t2757_f0_FieldInfo = 
{
	"q", &t93_0_0_1, &t2757_TI, offsetof(t2757, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2757_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2757_TI, offsetof(t2757, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2757_f2_FieldInfo = 
{
	"ver", &t110_0_0_1, &t2757_TI, offsetof(t2757, f2) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2757_FIs[] =
{
	&t2757_f0_FieldInfo,
	&t2757_f1_FieldInfo,
	&t2757_f2_FieldInfo,
	NULL
};
extern MethodInfo m14389_MI;
static PropertyInfo t2757____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2757_TI, "System.Collections.IEnumerator.Current", &m14389_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2757____Current_PropertyInfo = 
{
	&t2757_TI, "Current", &m14392_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2757_PIs[] =
{
	&t2757____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2757____Current_PropertyInfo,
	NULL
};
extern Il2CppType t93_0_0_0;
static ParameterInfo t2757_m14388_ParameterInfos[] = 
{
	{"q", 0, 134217728, &EmptyCustomAttributesCache, &t93_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14388_GM;
MethodInfo m14388_MI = 
{
	".ctor", (methodPointerType)&m14383_gshared, &t2757_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2757_m14388_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14388_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14389_GM;
MethodInfo m14389_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14384_gshared, &t2757_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14389_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14390_GM;
MethodInfo m14390_MI = 
{
	"Dispose", (methodPointerType)&m14385_gshared, &t2757_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14390_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14391_GM;
MethodInfo m14391_MI = 
{
	"MoveNext", (methodPointerType)&m14386_gshared, &t2757_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14391_GM};
extern Il2CppType t88_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14392_GM;
MethodInfo m14392_MI = 
{
	"get_Current", (methodPointerType)&m14387_gshared, &t2757_TI, &t88_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14392_GM};
static MethodInfo* t2757_MIs[] =
{
	&m14388_MI,
	&m14389_MI,
	&m14390_MI,
	&m14391_MI,
	&m14392_MI,
	NULL
};
extern MethodInfo m14391_MI;
extern MethodInfo m14390_MI;
static MethodInfo* t2757_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m14389_MI,
	&m14391_MI,
	&m14390_MI,
	&m14392_MI,
};
static TypeInfo* t2757_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t2744_TI,
};
static Il2CppInterfaceOffsetPair t2757_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t2744_TI, 7},
};
extern TypeInfo t88_TI;
static Il2CppRGCTXData t2757_RGCTXData[2] = 
{
	&m14392_MI/* Method Usage */,
	&t88_TI/* Class Usage */,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t2757_0_0_0;
extern Il2CppType t2757_1_0_0;
extern Il2CppGenericClass t2757_GC;
TypeInfo t2757_TI = 
{
	&g_System_dll_Image, NULL, "Enumerator", "", t2757_MIs, t2757_PIs, t2757_FIs, NULL, &t267_TI, NULL, &t980_TI, &t2757_TI, t2757_ITIs, t2757_VT, &EmptyCustomAttributesCache, &t2757_TI, &t2757_0_0_0, &t2757_1_0_0, t2757_IOs, &t2757_GC, NULL, NULL, NULL, t2757_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2757)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 3, 0, 0, 8, 3, 3};
#include "t94.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t94_TI;
#include "t94MD.h"



extern MethodInfo m674_MI;
 void m674 (t94 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m14393_MI;
 bool m14393 (t94 * __this, t88 * p0, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m14393((t94 *)__this->f9,p0, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t5 *, t5 * __this, t88 * p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t5 * __this, t88 * p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (t5 * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern MethodInfo m14394_MI;
 t5 * m14394 (t94 * __this, t88 * p0, t222 * p1, t5 * p2, MethodInfo* method){
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m14395_MI;
 bool m14395 (t94 * __this, t5 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Func`2<GameMessage,System.Boolean>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t94_m674_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m674_GM;
MethodInfo m674_MI = 
{
	".ctor", (methodPointerType)&m674, &t94_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t94_m674_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m674_GM};
extern Il2CppType t88_0_0_0;
static ParameterInfo t94_m14393_ParameterInfos[] = 
{
	{"arg1", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14393_GM;
MethodInfo m14393_MI = 
{
	"Invoke", (methodPointerType)&m14393, &t94_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t94_m14393_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14393_GM};
extern Il2CppType t88_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t94_m14394_ParameterInfos[] = 
{
	{"arg1", 0, 134217728, &EmptyCustomAttributesCache, &t88_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14394_GM;
MethodInfo m14394_MI = 
{
	"BeginInvoke", (methodPointerType)&m14394, &t94_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t94_m14394_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m14394_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t94_m14395_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14395_GM;
MethodInfo m14395_MI = 
{
	"EndInvoke", (methodPointerType)&m14395, &t94_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t94_m14395_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14395_GM};
static MethodInfo* t94_MIs[] =
{
	&m674_MI,
	&m14393_MI,
	&m14394_MI,
	&m14395_MI,
	NULL
};
static MethodInfo* t94_VT[] =
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
	&m14393_MI,
	&m14394_MI,
	&m14395_MI,
};
static Il2CppInterfaceOffsetPair t94_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t94_0_0_0;
extern Il2CppType t94_1_0_0;
struct t94;
extern Il2CppGenericClass t94_GC;
TypeInfo t94_TI = 
{
	&g_System_Core_dll_Image, NULL, "Func`2", "System", t94_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t94_TI, NULL, t94_VT, &EmptyCustomAttributesCache, &t94_TI, &t94_0_0_0, &t94_1_0_0, t94_IOs, &t94_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t94), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2760.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2760_TI;
#include "t2760MD.h"

#include "t490.h"
#include "t1927MD.h"
extern MethodInfo m14400_MI;
extern MethodInfo m10031_MI;
extern MethodInfo m14396_MI;
extern MethodInfo m24581_MI;
extern MethodInfo m746_MI;
extern MethodInfo m516_MI;


// Metadata Definition System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<GameMessage>
extern Il2CppType t2743_0_0_3;
FieldInfo t2760_f0_FieldInfo = 
{
	"source", &t2743_0_0_3, &t2760_TI, offsetof(t2760, f0), &EmptyCustomAttributesCache};
extern Il2CppType t2744_0_0_3;
FieldInfo t2760_f1_FieldInfo = 
{
	"<$s_97>__0", &t2744_0_0_3, &t2760_TI, offsetof(t2760, f1), &EmptyCustomAttributesCache};
extern Il2CppType t88_0_0_3;
FieldInfo t2760_f2_FieldInfo = 
{
	"<element>__1", &t88_0_0_3, &t2760_TI, offsetof(t2760, f2), &EmptyCustomAttributesCache};
extern Il2CppType t94_0_0_3;
FieldInfo t2760_f3_FieldInfo = 
{
	"predicate", &t94_0_0_3, &t2760_TI, offsetof(t2760, f3), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_3;
FieldInfo t2760_f4_FieldInfo = 
{
	"$PC", &t110_0_0_3, &t2760_TI, offsetof(t2760, f4), &EmptyCustomAttributesCache};
extern Il2CppType t88_0_0_3;
FieldInfo t2760_f5_FieldInfo = 
{
	"$current", &t88_0_0_3, &t2760_TI, offsetof(t2760, f5), &EmptyCustomAttributesCache};
extern Il2CppType t2743_0_0_3;
FieldInfo t2760_f6_FieldInfo = 
{
	"<$>source", &t2743_0_0_3, &t2760_TI, offsetof(t2760, f6), &EmptyCustomAttributesCache};
extern Il2CppType t94_0_0_3;
FieldInfo t2760_f7_FieldInfo = 
{
	"<$>predicate", &t94_0_0_3, &t2760_TI, offsetof(t2760, f7), &EmptyCustomAttributesCache};
static FieldInfo* t2760_FIs[] =
{
	&t2760_f0_FieldInfo,
	&t2760_f1_FieldInfo,
	&t2760_f2_FieldInfo,
	&t2760_f3_FieldInfo,
	&t2760_f4_FieldInfo,
	&t2760_f5_FieldInfo,
	&t2760_f6_FieldInfo,
	&t2760_f7_FieldInfo,
	NULL
};
extern MethodInfo m14397_MI;
static PropertyInfo t2760____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo = 
{
	&t2760_TI, "System.Collections.Generic.IEnumerator<TSource>.Current", &m14397_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14398_MI;
static PropertyInfo t2760____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2760_TI, "System.Collections.IEnumerator.Current", &m14398_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2760_PIs[] =
{
	&t2760____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo,
	&t2760____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14396_GM;
MethodInfo m14396_MI = 
{
	".ctor", (methodPointerType)&m13242_gshared, &t2760_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14396_GM};
extern Il2CppType t88_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t834__CustomAttributeCache_m3738;
extern Il2CppGenericMethod m14397_GM;
MethodInfo m14397_MI = 
{
	"System.Collections.Generic.IEnumerator<TSource>.get_Current", (methodPointerType)&m13243_gshared, &t2760_TI, &t88_0_0_0, RuntimeInvoker_t5, NULL, &t834__CustomAttributeCache_m3738, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14397_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t834__CustomAttributeCache_m3739;
extern Il2CppGenericMethod m14398_GM;
MethodInfo m14398_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13244_gshared, &t2760_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &t834__CustomAttributeCache_m3739, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14398_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t834__CustomAttributeCache_m3740;
extern Il2CppGenericMethod m14399_GM;
MethodInfo m14399_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m13245_gshared, &t2760_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &t834__CustomAttributeCache_m3740, 481, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14399_GM};
extern Il2CppType t2744_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t834__CustomAttributeCache_m3741;
extern Il2CppGenericMethod m14400_GM;
MethodInfo m14400_MI = 
{
	"System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", (methodPointerType)&m13246_gshared, &t2760_TI, &t2744_0_0_0, RuntimeInvoker_t5, NULL, &t834__CustomAttributeCache_m3741, 481, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14400_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14401_GM;
MethodInfo m14401_MI = 
{
	"MoveNext", (methodPointerType)&m13247_gshared, &t2760_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14401_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t834__CustomAttributeCache_m3743;
extern Il2CppGenericMethod m14402_GM;
MethodInfo m14402_MI = 
{
	"Dispose", (methodPointerType)&m13248_gshared, &t2760_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &t834__CustomAttributeCache_m3743, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14402_GM};
static MethodInfo* t2760_MIs[] =
{
	&m14396_MI,
	&m14397_MI,
	&m14398_MI,
	&m14399_MI,
	&m14400_MI,
	&m14401_MI,
	&m14402_MI,
	NULL
};
extern MethodInfo m14401_MI;
extern MethodInfo m14402_MI;
extern MethodInfo m14399_MI;
static MethodInfo* t2760_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14398_MI,
	&m14401_MI,
	&m14402_MI,
	&m14399_MI,
	&m14400_MI,
	&m14397_MI,
};
static TypeInfo* t2760_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t739_TI,
	&t2743_TI,
	&t2744_TI,
};
static Il2CppInterfaceOffsetPair t2760_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t739_TI, 7},
	{ &t2743_TI, 8},
	{ &t2744_TI, 9},
};
extern TypeInfo t88_TI;
extern TypeInfo t2760_TI;
static Il2CppRGCTXData t2760_RGCTXData[7] = 
{
	&t88_TI/* Class Usage */,
	&m14400_MI/* Method Usage */,
	&t2760_TI/* Class Usage */,
	&m14396_MI/* Method Usage */,
	&m24580_MI/* Method Usage */,
	&m24581_MI/* Method Usage */,
	&m14393_MI/* Method Usage */,
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t2760_0_0_0;
extern Il2CppType t2760_1_0_0;
struct t2760;
extern Il2CppGenericClass t2760_GC;
extern TypeInfo t125_TI;
extern CustomAttributesCache t834__CustomAttributeCache;
extern CustomAttributesCache t834__CustomAttributeCache_m3738;
extern CustomAttributesCache t834__CustomAttributeCache_m3739;
extern CustomAttributesCache t834__CustomAttributeCache_m3740;
extern CustomAttributesCache t834__CustomAttributeCache_m3741;
extern CustomAttributesCache t834__CustomAttributeCache_m3743;
TypeInfo t2760_TI = 
{
	&g_System_Core_dll_Image, NULL, "<CreateWhereIterator>c__Iterator1D`1", "", t2760_MIs, t2760_PIs, t2760_FIs, NULL, &t5_TI, NULL, &t125_TI, &t2760_TI, t2760_ITIs, t2760_VT, &t834__CustomAttributeCache, &t2760_TI, &t2760_0_0_0, &t2760_1_0_0, t2760_IOs, &t2760_GC, NULL, NULL, NULL, t2760_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2760), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 8, 0, 0, 10, 5, 5};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4759_TI;

#include "t95.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<JewelMaterial>
extern MethodInfo m32150_MI;
static PropertyInfo t4759____Current_PropertyInfo = 
{
	&t4759_TI, "Current", &m32150_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4759_PIs[] =
{
	&t4759____Current_PropertyInfo,
	NULL
};
extern Il2CppType t95_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32150_GM;
MethodInfo m32150_MI = 
{
	"get_Current", NULL, &t4759_TI, &t95_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32150_GM};
static MethodInfo* t4759_MIs[] =
{
	&m32150_MI,
	NULL
};
static TypeInfo* t4759_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4759_0_0_0;
extern Il2CppType t4759_1_0_0;
struct t4759;
extern Il2CppGenericClass t4759_GC;
TypeInfo t4759_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4759_MIs, t4759_PIs, NULL, NULL, NULL, NULL, NULL, &t4759_TI, t4759_ITIs, NULL, &EmptyCustomAttributesCache, &t4759_TI, &t4759_0_0_0, &t4759_1_0_0, NULL, &t4759_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2761.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2761_TI;
#include "t2761MD.h"

extern TypeInfo t95_TI;
extern MethodInfo m14407_MI;
extern MethodInfo m24584_MI;
struct t107;
#define m24584(__this, p0, method) (t95 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<JewelMaterial>
extern Il2CppType t107_0_0_1;
FieldInfo t2761_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t2761_TI, offsetof(t2761, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2761_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2761_TI, offsetof(t2761, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2761_FIs[] =
{
	&t2761_f0_FieldInfo,
	&t2761_f1_FieldInfo,
	NULL
};
extern MethodInfo m14404_MI;
static PropertyInfo t2761____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2761_TI, "System.Collections.IEnumerator.Current", &m14404_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2761____Current_PropertyInfo = 
{
	&t2761_TI, "Current", &m14407_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2761_PIs[] =
{
	&t2761____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2761____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t2761_m14403_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14403_GM;
MethodInfo m14403_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t2761_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2761_m14403_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14403_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14404_GM;
MethodInfo m14404_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t2761_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14404_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14405_GM;
MethodInfo m14405_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t2761_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14405_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14406_GM;
MethodInfo m14406_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t2761_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14406_GM};
extern Il2CppType t95_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14407_GM;
MethodInfo m14407_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t2761_TI, &t95_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14407_GM};
static MethodInfo* t2761_MIs[] =
{
	&m14403_MI,
	&m14404_MI,
	&m14405_MI,
	&m14406_MI,
	&m14407_MI,
	NULL
};
extern MethodInfo m14406_MI;
extern MethodInfo m14405_MI;
static MethodInfo* t2761_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m14404_MI,
	&m14406_MI,
	&m14405_MI,
	&m14407_MI,
};
static TypeInfo* t2761_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t4759_TI,
};
static Il2CppInterfaceOffsetPair t2761_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t4759_TI, 7},
};
extern TypeInfo t95_TI;
static Il2CppRGCTXData t2761_RGCTXData[3] = 
{
	&m14407_MI/* Method Usage */,
	&t95_TI/* Class Usage */,
	&m24584_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2761_0_0_0;
extern Il2CppType t2761_1_0_0;
extern Il2CppGenericClass t2761_GC;
TypeInfo t2761_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2761_MIs, t2761_PIs, t2761_FIs, NULL, &t267_TI, NULL, &t107_TI, &t2761_TI, t2761_ITIs, t2761_VT, &EmptyCustomAttributesCache, &t2761_TI, &t2761_0_0_0, &t2761_1_0_0, t2761_IOs, &t2761_GC, NULL, NULL, NULL, t2761_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2761)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5994_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<JewelMaterial>
extern MethodInfo m32151_MI;
static PropertyInfo t5994____Count_PropertyInfo = 
{
	&t5994_TI, "Count", &m32151_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m32152_MI;
static PropertyInfo t5994____IsReadOnly_PropertyInfo = 
{
	&t5994_TI, "IsReadOnly", &m32152_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5994_PIs[] =
{
	&t5994____Count_PropertyInfo,
	&t5994____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32151_GM;
MethodInfo m32151_MI = 
{
	"get_Count", NULL, &t5994_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32151_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32152_GM;
MethodInfo m32152_MI = 
{
	"get_IsReadOnly", NULL, &t5994_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32152_GM};
extern Il2CppType t95_0_0_0;
extern Il2CppType t95_0_0_0;
static ParameterInfo t5994_m32153_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t95_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32153_GM;
MethodInfo m32153_MI = 
{
	"Add", NULL, &t5994_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t5994_m32153_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32153_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32154_GM;
MethodInfo m32154_MI = 
{
	"Clear", NULL, &t5994_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32154_GM};
extern Il2CppType t95_0_0_0;
static ParameterInfo t5994_m32155_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t95_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32155_GM;
MethodInfo m32155_MI = 
{
	"Contains", NULL, &t5994_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t5994_m32155_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32155_GM};
extern Il2CppType t4396_0_0_0;
extern Il2CppType t4396_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t5994_m32156_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4396_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32156_GM;
MethodInfo m32156_MI = 
{
	"CopyTo", NULL, &t5994_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t5994_m32156_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32156_GM};
extern Il2CppType t95_0_0_0;
static ParameterInfo t5994_m32157_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t95_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32157_GM;
MethodInfo m32157_MI = 
{
	"Remove", NULL, &t5994_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t5994_m32157_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32157_GM};
static MethodInfo* t5994_MIs[] =
{
	&m32151_MI,
	&m32152_MI,
	&m32153_MI,
	&m32154_MI,
	&m32155_MI,
	&m32156_MI,
	&m32157_MI,
	NULL
};
extern TypeInfo t5996_TI;
static TypeInfo* t5994_ITIs[] = 
{
	&t739_TI,
	&t5996_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5994_0_0_0;
extern Il2CppType t5994_1_0_0;
struct t5994;
extern Il2CppGenericClass t5994_GC;
TypeInfo t5994_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5994_MIs, t5994_PIs, NULL, NULL, NULL, NULL, NULL, &t5994_TI, t5994_ITIs, NULL, &EmptyCustomAttributesCache, &t5994_TI, &t5994_0_0_0, &t5994_1_0_0, NULL, &t5994_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<JewelMaterial>
extern Il2CppType t4759_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32158_GM;
MethodInfo m32158_MI = 
{
	"GetEnumerator", NULL, &t5996_TI, &t4759_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32158_GM};
static MethodInfo* t5996_MIs[] =
{
	&m32158_MI,
	NULL
};
static TypeInfo* t5996_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5996_0_0_0;
extern Il2CppType t5996_1_0_0;
struct t5996;
extern Il2CppGenericClass t5996_GC;
TypeInfo t5996_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5996_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5996_TI, t5996_ITIs, NULL, &EmptyCustomAttributesCache, &t5996_TI, &t5996_0_0_0, &t5996_1_0_0, NULL, &t5996_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5995_TI;



// Metadata Definition System.Collections.Generic.IList`1<JewelMaterial>
extern MethodInfo m32159_MI;
extern MethodInfo m32160_MI;
static PropertyInfo t5995____Item_PropertyInfo = 
{
	&t5995_TI, "Item", &m32159_MI, &m32160_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5995_PIs[] =
{
	&t5995____Item_PropertyInfo,
	NULL
};
extern Il2CppType t95_0_0_0;
static ParameterInfo t5995_m32161_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t95_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32161_GM;
MethodInfo m32161_MI = 
{
	"IndexOf", NULL, &t5995_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t5995_m32161_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32161_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t95_0_0_0;
static ParameterInfo t5995_m32162_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t95_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32162_GM;
MethodInfo m32162_MI = 
{
	"Insert", NULL, &t5995_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t5995_m32162_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32162_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t5995_m32163_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32163_GM;
MethodInfo m32163_MI = 
{
	"RemoveAt", NULL, &t5995_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t5995_m32163_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32163_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t5995_m32159_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t95_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32159_GM;
MethodInfo m32159_MI = 
{
	"get_Item", NULL, &t5995_TI, &t95_0_0_0, RuntimeInvoker_t5_t110, t5995_m32159_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32159_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t95_0_0_0;
static ParameterInfo t5995_m32160_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t95_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32160_GM;
MethodInfo m32160_MI = 
{
	"set_Item", NULL, &t5995_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t5995_m32160_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32160_GM};
static MethodInfo* t5995_MIs[] =
{
	&m32161_MI,
	&m32162_MI,
	&m32163_MI,
	&m32159_MI,
	&m32160_MI,
	NULL
};
static TypeInfo* t5995_ITIs[] = 
{
	&t739_TI,
	&t5994_TI,
	&t5996_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5995_0_0_0;
extern Il2CppType t5995_1_0_0;
struct t5995;
extern Il2CppGenericClass t5995_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t5995_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5995_MIs, t5995_PIs, NULL, NULL, NULL, NULL, NULL, &t5995_TI, t5995_ITIs, NULL, &t2240__CustomAttributeCache, &t5995_TI, &t5995_0_0_0, &t5995_1_0_0, NULL, &t5995_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2762.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2762_TI;
#include "t2762MD.h"

#include "t117.h"
#include "t695.h"
#include "t2763.h"
extern TypeInfo t2763_TI;
#include "t2763MD.h"
extern MethodInfo m14410_MI;
extern MethodInfo m14412_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<JewelMaterial>
extern Il2CppType t168_0_0_33;
FieldInfo t2762_f1_FieldInfo = 
{
	"m_Arg1", &t168_0_0_33, &t2762_TI, offsetof(t2762, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2762_FIs[] =
{
	&t2762_f1_FieldInfo,
	NULL
};
extern Il2CppType t117_0_0_0;
extern Il2CppType t117_0_0_0;
extern Il2CppType t695_0_0_0;
extern Il2CppType t695_0_0_0;
extern Il2CppType t95_0_0_0;
static ParameterInfo t2762_m14408_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t117_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t95_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14408_GM;
MethodInfo m14408_MI = 
{
	".ctor", (methodPointerType)&m12070_gshared, &t2762_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t5, t2762_m14408_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL, &m14408_GM};
extern Il2CppType t168_0_0_0;
static ParameterInfo t2762_m14409_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14409_GM;
MethodInfo m14409_MI = 
{
	"Invoke", (methodPointerType)&m12072_gshared, &t2762_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2762_m14409_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14409_GM};
static MethodInfo* t2762_MIs[] =
{
	&m14408_MI,
	&m14409_MI,
	NULL
};
extern MethodInfo m14409_MI;
extern MethodInfo m14413_MI;
static MethodInfo* t2762_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14409_MI,
	&m14413_MI,
};
extern Il2CppType t2764_0_0_0;
extern TypeInfo t2764_TI;
extern MethodInfo m24594_MI;
extern TypeInfo t95_TI;
extern MethodInfo m14415_MI;
extern TypeInfo t95_TI;
static Il2CppRGCTXData t2762_RGCTXData[8] = 
{
	&t2764_0_0_0/* Type Usage */,
	&t2764_TI/* Class Usage */,
	&m24594_MI/* Method Usage */,
	&t95_TI/* Class Usage */,
	&m14415_MI/* Method Usage */,
	&m14410_MI/* Method Usage */,
	&t95_TI/* Class Usage */,
	&m14412_MI/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2762_0_0_0;
extern Il2CppType t2762_1_0_0;
struct t2762;
extern Il2CppGenericClass t2762_GC;
TypeInfo t2762_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2762_MIs, NULL, t2762_FIs, NULL, &t2763_TI, NULL, NULL, &t2762_TI, NULL, t2762_VT, &EmptyCustomAttributesCache, &t2762_TI, &t2762_0_0_0, &t2762_1_0_0, NULL, &t2762_GC, NULL, NULL, NULL, t2762_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2762), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif

#include "t2764.h"
#include "t183.h"
extern TypeInfo t2764_TI;
#include "t694MD.h"
#include "t183MD.h"
#include "t2764MD.h"
extern MethodInfo m3437_MI;
extern MethodInfo m3602_MI;
extern MethodInfo m706_MI;
extern MethodInfo m3436_MI;
extern MethodInfo m3438_MI;
extern MethodInfo m3598_MI;
extern MethodInfo m3596_MI;
struct t694;
#include "t694.h"
struct t694;
 void m23910_gshared (t5 * __this, t5 * p0, MethodInfo* method);
#define m23910(__this, p0, method) (void)m23910_gshared((t5 *)__this, (t5 *)p0, method)
#define m24594(__this, p0, method) (void)m23910_gshared((t5 *)__this, (t5 *)p0, method)


// Metadata Definition UnityEngine.Events.InvokableCall`1<JewelMaterial>
extern Il2CppType t2764_0_0_1;
FieldInfo t2763_f0_FieldInfo = 
{
	"Delegate", &t2764_0_0_1, &t2763_TI, offsetof(t2763, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2763_FIs[] =
{
	&t2763_f0_FieldInfo,
	NULL
};
extern Il2CppType t5_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t2763_m14410_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14410_GM;
MethodInfo m14410_MI = 
{
	".ctor", (methodPointerType)&m12073_gshared, &t2763_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t2763_m14410_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14410_GM};
extern Il2CppType t2764_0_0_0;
static ParameterInfo t2763_m14411_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2764_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14411_GM;
MethodInfo m14411_MI = 
{
	".ctor", (methodPointerType)&m12074_gshared, &t2763_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2763_m14411_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14411_GM};
extern Il2CppType t168_0_0_0;
static ParameterInfo t2763_m14412_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14412_GM;
MethodInfo m14412_MI = 
{
	"Invoke", (methodPointerType)&m12075_gshared, &t2763_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2763_m14412_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14412_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t2763_m14413_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14413_GM;
MethodInfo m14413_MI = 
{
	"Find", (methodPointerType)&m12076_gshared, &t2763_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2763_m14413_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14413_GM};
static MethodInfo* t2763_MIs[] =
{
	&m14410_MI,
	&m14411_MI,
	&m14412_MI,
	&m14413_MI,
	NULL
};
static MethodInfo* t2763_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14412_MI,
	&m14413_MI,
};
extern TypeInfo t2764_TI;
extern TypeInfo t95_TI;
static Il2CppRGCTXData t2763_RGCTXData[5] = 
{
	&t2764_0_0_0/* Type Usage */,
	&t2764_TI/* Class Usage */,
	&m24594_MI/* Method Usage */,
	&t95_TI/* Class Usage */,
	&m14415_MI/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2763_0_0_0;
extern Il2CppType t2763_1_0_0;
extern TypeInfo t694_TI;
struct t2763;
extern Il2CppGenericClass t2763_GC;
TypeInfo t2763_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2763_MIs, NULL, t2763_FIs, NULL, &t694_TI, NULL, NULL, &t2763_TI, NULL, t2763_VT, &EmptyCustomAttributesCache, &t2763_TI, &t2763_0_0_0, &t2763_1_0_0, NULL, &t2763_GC, NULL, NULL, NULL, t2763_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2763), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition UnityEngine.Events.UnityAction`1<JewelMaterial>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2764_m14414_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14414_GM;
MethodInfo m14414_MI = 
{
	".ctor", (methodPointerType)&m12077_gshared, &t2764_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2764_m14414_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14414_GM};
extern Il2CppType t95_0_0_0;
static ParameterInfo t2764_m14415_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t95_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14415_GM;
MethodInfo m14415_MI = 
{
	"Invoke", (methodPointerType)&m12078_gshared, &t2764_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2764_m14415_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14415_GM};
extern Il2CppType t95_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2764_m14416_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t95_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14416_GM;
MethodInfo m14416_MI = 
{
	"BeginInvoke", (methodPointerType)&m12079_gshared, &t2764_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t2764_m14416_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m14416_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2764_m14417_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14417_GM;
MethodInfo m14417_MI = 
{
	"EndInvoke", (methodPointerType)&m12080_gshared, &t2764_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2764_m14417_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14417_GM};
static MethodInfo* t2764_MIs[] =
{
	&m14414_MI,
	&m14415_MI,
	&m14416_MI,
	&m14417_MI,
	NULL
};
extern MethodInfo m14416_MI;
extern MethodInfo m14417_MI;
static MethodInfo* t2764_VT[] =
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
	&m14415_MI,
	&m14416_MI,
	&m14417_MI,
};
static Il2CppInterfaceOffsetPair t2764_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2764_1_0_0;
struct t2764;
extern Il2CppGenericClass t2764_GC;
TypeInfo t2764_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2764_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t2764_TI, NULL, t2764_VT, &EmptyCustomAttributesCache, &t2764_TI, &t2764_0_0_0, &t2764_1_0_0, t2764_IOs, &t2764_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2764), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4761_TI;

#include "t96.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<JewelTag>
extern MethodInfo m32164_MI;
static PropertyInfo t4761____Current_PropertyInfo = 
{
	&t4761_TI, "Current", &m32164_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4761_PIs[] =
{
	&t4761____Current_PropertyInfo,
	NULL
};
extern Il2CppType t96_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32164_GM;
MethodInfo m32164_MI = 
{
	"get_Current", NULL, &t4761_TI, &t96_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32164_GM};
static MethodInfo* t4761_MIs[] =
{
	&m32164_MI,
	NULL
};
static TypeInfo* t4761_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4761_0_0_0;
extern Il2CppType t4761_1_0_0;
struct t4761;
extern Il2CppGenericClass t4761_GC;
TypeInfo t4761_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4761_MIs, t4761_PIs, NULL, NULL, NULL, NULL, NULL, &t4761_TI, t4761_ITIs, NULL, &EmptyCustomAttributesCache, &t4761_TI, &t4761_0_0_0, &t4761_1_0_0, NULL, &t4761_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2765.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2765_TI;
#include "t2765MD.h"

extern TypeInfo t96_TI;
extern MethodInfo m14422_MI;
extern MethodInfo m24596_MI;
struct t107;
#define m24596(__this, p0, method) (t96 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<JewelTag>
extern Il2CppType t107_0_0_1;
FieldInfo t2765_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t2765_TI, offsetof(t2765, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2765_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2765_TI, offsetof(t2765, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2765_FIs[] =
{
	&t2765_f0_FieldInfo,
	&t2765_f1_FieldInfo,
	NULL
};
extern MethodInfo m14419_MI;
static PropertyInfo t2765____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2765_TI, "System.Collections.IEnumerator.Current", &m14419_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2765____Current_PropertyInfo = 
{
	&t2765_TI, "Current", &m14422_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2765_PIs[] =
{
	&t2765____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2765____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t2765_m14418_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14418_GM;
MethodInfo m14418_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t2765_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2765_m14418_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14418_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14419_GM;
MethodInfo m14419_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t2765_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14419_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14420_GM;
MethodInfo m14420_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t2765_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14420_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14421_GM;
MethodInfo m14421_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t2765_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14421_GM};
extern Il2CppType t96_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14422_GM;
MethodInfo m14422_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t2765_TI, &t96_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14422_GM};
static MethodInfo* t2765_MIs[] =
{
	&m14418_MI,
	&m14419_MI,
	&m14420_MI,
	&m14421_MI,
	&m14422_MI,
	NULL
};
extern MethodInfo m14421_MI;
extern MethodInfo m14420_MI;
static MethodInfo* t2765_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m14419_MI,
	&m14421_MI,
	&m14420_MI,
	&m14422_MI,
};
static TypeInfo* t2765_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t4761_TI,
};
static Il2CppInterfaceOffsetPair t2765_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t4761_TI, 7},
};
extern TypeInfo t96_TI;
static Il2CppRGCTXData t2765_RGCTXData[3] = 
{
	&m14422_MI/* Method Usage */,
	&t96_TI/* Class Usage */,
	&m24596_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2765_0_0_0;
extern Il2CppType t2765_1_0_0;
extern Il2CppGenericClass t2765_GC;
TypeInfo t2765_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2765_MIs, t2765_PIs, t2765_FIs, NULL, &t267_TI, NULL, &t107_TI, &t2765_TI, t2765_ITIs, t2765_VT, &EmptyCustomAttributesCache, &t2765_TI, &t2765_0_0_0, &t2765_1_0_0, t2765_IOs, &t2765_GC, NULL, NULL, NULL, t2765_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2765)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5997_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<JewelTag>
extern MethodInfo m32165_MI;
static PropertyInfo t5997____Count_PropertyInfo = 
{
	&t5997_TI, "Count", &m32165_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m32166_MI;
static PropertyInfo t5997____IsReadOnly_PropertyInfo = 
{
	&t5997_TI, "IsReadOnly", &m32166_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5997_PIs[] =
{
	&t5997____Count_PropertyInfo,
	&t5997____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32165_GM;
MethodInfo m32165_MI = 
{
	"get_Count", NULL, &t5997_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32165_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32166_GM;
MethodInfo m32166_MI = 
{
	"get_IsReadOnly", NULL, &t5997_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32166_GM};
extern Il2CppType t96_0_0_0;
extern Il2CppType t96_0_0_0;
static ParameterInfo t5997_m32167_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t96_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32167_GM;
MethodInfo m32167_MI = 
{
	"Add", NULL, &t5997_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t5997_m32167_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32167_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32168_GM;
MethodInfo m32168_MI = 
{
	"Clear", NULL, &t5997_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32168_GM};
extern Il2CppType t96_0_0_0;
static ParameterInfo t5997_m32169_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t96_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32169_GM;
MethodInfo m32169_MI = 
{
	"Contains", NULL, &t5997_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t5997_m32169_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32169_GM};
extern Il2CppType t4397_0_0_0;
extern Il2CppType t4397_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t5997_m32170_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4397_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32170_GM;
MethodInfo m32170_MI = 
{
	"CopyTo", NULL, &t5997_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t5997_m32170_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32170_GM};
extern Il2CppType t96_0_0_0;
static ParameterInfo t5997_m32171_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t96_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32171_GM;
MethodInfo m32171_MI = 
{
	"Remove", NULL, &t5997_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t5997_m32171_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32171_GM};
static MethodInfo* t5997_MIs[] =
{
	&m32165_MI,
	&m32166_MI,
	&m32167_MI,
	&m32168_MI,
	&m32169_MI,
	&m32170_MI,
	&m32171_MI,
	NULL
};
extern TypeInfo t5999_TI;
static TypeInfo* t5997_ITIs[] = 
{
	&t739_TI,
	&t5999_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5997_0_0_0;
extern Il2CppType t5997_1_0_0;
struct t5997;
extern Il2CppGenericClass t5997_GC;
TypeInfo t5997_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5997_MIs, t5997_PIs, NULL, NULL, NULL, NULL, NULL, &t5997_TI, t5997_ITIs, NULL, &EmptyCustomAttributesCache, &t5997_TI, &t5997_0_0_0, &t5997_1_0_0, NULL, &t5997_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<JewelTag>
extern Il2CppType t4761_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32172_GM;
MethodInfo m32172_MI = 
{
	"GetEnumerator", NULL, &t5999_TI, &t4761_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32172_GM};
static MethodInfo* t5999_MIs[] =
{
	&m32172_MI,
	NULL
};
static TypeInfo* t5999_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5999_0_0_0;
extern Il2CppType t5999_1_0_0;
struct t5999;
extern Il2CppGenericClass t5999_GC;
TypeInfo t5999_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5999_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5999_TI, t5999_ITIs, NULL, &EmptyCustomAttributesCache, &t5999_TI, &t5999_0_0_0, &t5999_1_0_0, NULL, &t5999_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5998_TI;



// Metadata Definition System.Collections.Generic.IList`1<JewelTag>
extern MethodInfo m32173_MI;
extern MethodInfo m32174_MI;
static PropertyInfo t5998____Item_PropertyInfo = 
{
	&t5998_TI, "Item", &m32173_MI, &m32174_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5998_PIs[] =
{
	&t5998____Item_PropertyInfo,
	NULL
};
extern Il2CppType t96_0_0_0;
static ParameterInfo t5998_m32175_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t96_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32175_GM;
MethodInfo m32175_MI = 
{
	"IndexOf", NULL, &t5998_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t5998_m32175_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32175_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t96_0_0_0;
static ParameterInfo t5998_m32176_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t96_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32176_GM;
MethodInfo m32176_MI = 
{
	"Insert", NULL, &t5998_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t5998_m32176_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32176_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t5998_m32177_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32177_GM;
MethodInfo m32177_MI = 
{
	"RemoveAt", NULL, &t5998_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t5998_m32177_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32177_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t5998_m32173_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t96_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32173_GM;
MethodInfo m32173_MI = 
{
	"get_Item", NULL, &t5998_TI, &t96_0_0_0, RuntimeInvoker_t5_t110, t5998_m32173_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32173_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t96_0_0_0;
static ParameterInfo t5998_m32174_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t96_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32174_GM;
MethodInfo m32174_MI = 
{
	"set_Item", NULL, &t5998_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t5998_m32174_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32174_GM};
static MethodInfo* t5998_MIs[] =
{
	&m32175_MI,
	&m32176_MI,
	&m32177_MI,
	&m32173_MI,
	&m32174_MI,
	NULL
};
static TypeInfo* t5998_ITIs[] = 
{
	&t739_TI,
	&t5997_TI,
	&t5999_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5998_0_0_0;
extern Il2CppType t5998_1_0_0;
struct t5998;
extern Il2CppGenericClass t5998_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t5998_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5998_MIs, t5998_PIs, NULL, NULL, NULL, NULL, NULL, &t5998_TI, t5998_ITIs, NULL, &t2240__CustomAttributeCache, &t5998_TI, &t5998_0_0_0, &t5998_1_0_0, NULL, &t5998_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2766.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2766_TI;
#include "t2766MD.h"

#include "t2767.h"
extern TypeInfo t2767_TI;
#include "t2767MD.h"
extern MethodInfo m14425_MI;
extern MethodInfo m14427_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<JewelTag>
extern Il2CppType t168_0_0_33;
FieldInfo t2766_f1_FieldInfo = 
{
	"m_Arg1", &t168_0_0_33, &t2766_TI, offsetof(t2766, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2766_FIs[] =
{
	&t2766_f1_FieldInfo,
	NULL
};
extern Il2CppType t117_0_0_0;
extern Il2CppType t695_0_0_0;
extern Il2CppType t96_0_0_0;
static ParameterInfo t2766_m14423_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t117_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t96_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14423_GM;
MethodInfo m14423_MI = 
{
	".ctor", (methodPointerType)&m12070_gshared, &t2766_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t5, t2766_m14423_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL, &m14423_GM};
extern Il2CppType t168_0_0_0;
static ParameterInfo t2766_m14424_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14424_GM;
MethodInfo m14424_MI = 
{
	"Invoke", (methodPointerType)&m12072_gshared, &t2766_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2766_m14424_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14424_GM};
static MethodInfo* t2766_MIs[] =
{
	&m14423_MI,
	&m14424_MI,
	NULL
};
extern MethodInfo m14424_MI;
extern MethodInfo m14428_MI;
static MethodInfo* t2766_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14424_MI,
	&m14428_MI,
};
extern Il2CppType t2768_0_0_0;
extern TypeInfo t2768_TI;
extern MethodInfo m24606_MI;
extern TypeInfo t96_TI;
extern MethodInfo m14430_MI;
extern TypeInfo t96_TI;
static Il2CppRGCTXData t2766_RGCTXData[8] = 
{
	&t2768_0_0_0/* Type Usage */,
	&t2768_TI/* Class Usage */,
	&m24606_MI/* Method Usage */,
	&t96_TI/* Class Usage */,
	&m14430_MI/* Method Usage */,
	&m14425_MI/* Method Usage */,
	&t96_TI/* Class Usage */,
	&m14427_MI/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2766_0_0_0;
extern Il2CppType t2766_1_0_0;
struct t2766;
extern Il2CppGenericClass t2766_GC;
TypeInfo t2766_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2766_MIs, NULL, t2766_FIs, NULL, &t2767_TI, NULL, NULL, &t2766_TI, NULL, t2766_VT, &EmptyCustomAttributesCache, &t2766_TI, &t2766_0_0_0, &t2766_1_0_0, NULL, &t2766_GC, NULL, NULL, NULL, t2766_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2766), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif

#include "t2768.h"
extern TypeInfo t2768_TI;
#include "t2768MD.h"
struct t694;
#define m24606(__this, p0, method) (void)m23910_gshared((t5 *)__this, (t5 *)p0, method)


// Metadata Definition UnityEngine.Events.InvokableCall`1<JewelTag>
extern Il2CppType t2768_0_0_1;
FieldInfo t2767_f0_FieldInfo = 
{
	"Delegate", &t2768_0_0_1, &t2767_TI, offsetof(t2767, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2767_FIs[] =
{
	&t2767_f0_FieldInfo,
	NULL
};
extern Il2CppType t5_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t2767_m14425_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14425_GM;
MethodInfo m14425_MI = 
{
	".ctor", (methodPointerType)&m12073_gshared, &t2767_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t2767_m14425_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14425_GM};
extern Il2CppType t2768_0_0_0;
static ParameterInfo t2767_m14426_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2768_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14426_GM;
MethodInfo m14426_MI = 
{
	".ctor", (methodPointerType)&m12074_gshared, &t2767_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2767_m14426_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14426_GM};
extern Il2CppType t168_0_0_0;
static ParameterInfo t2767_m14427_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14427_GM;
MethodInfo m14427_MI = 
{
	"Invoke", (methodPointerType)&m12075_gshared, &t2767_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2767_m14427_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14427_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t2767_m14428_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14428_GM;
MethodInfo m14428_MI = 
{
	"Find", (methodPointerType)&m12076_gshared, &t2767_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2767_m14428_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14428_GM};
static MethodInfo* t2767_MIs[] =
{
	&m14425_MI,
	&m14426_MI,
	&m14427_MI,
	&m14428_MI,
	NULL
};
static MethodInfo* t2767_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14427_MI,
	&m14428_MI,
};
extern TypeInfo t2768_TI;
extern TypeInfo t96_TI;
static Il2CppRGCTXData t2767_RGCTXData[5] = 
{
	&t2768_0_0_0/* Type Usage */,
	&t2768_TI/* Class Usage */,
	&m24606_MI/* Method Usage */,
	&t96_TI/* Class Usage */,
	&m14430_MI/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2767_0_0_0;
extern Il2CppType t2767_1_0_0;
struct t2767;
extern Il2CppGenericClass t2767_GC;
TypeInfo t2767_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2767_MIs, NULL, t2767_FIs, NULL, &t694_TI, NULL, NULL, &t2767_TI, NULL, t2767_VT, &EmptyCustomAttributesCache, &t2767_TI, &t2767_0_0_0, &t2767_1_0_0, NULL, &t2767_GC, NULL, NULL, NULL, t2767_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2767), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition UnityEngine.Events.UnityAction`1<JewelTag>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2768_m14429_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14429_GM;
MethodInfo m14429_MI = 
{
	".ctor", (methodPointerType)&m12077_gshared, &t2768_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2768_m14429_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14429_GM};
extern Il2CppType t96_0_0_0;
static ParameterInfo t2768_m14430_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t96_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14430_GM;
MethodInfo m14430_MI = 
{
	"Invoke", (methodPointerType)&m12078_gshared, &t2768_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2768_m14430_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14430_GM};
extern Il2CppType t96_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2768_m14431_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t96_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14431_GM;
MethodInfo m14431_MI = 
{
	"BeginInvoke", (methodPointerType)&m12079_gshared, &t2768_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t2768_m14431_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m14431_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2768_m14432_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14432_GM;
MethodInfo m14432_MI = 
{
	"EndInvoke", (methodPointerType)&m12080_gshared, &t2768_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2768_m14432_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14432_GM};
static MethodInfo* t2768_MIs[] =
{
	&m14429_MI,
	&m14430_MI,
	&m14431_MI,
	&m14432_MI,
	NULL
};
extern MethodInfo m14431_MI;
extern MethodInfo m14432_MI;
static MethodInfo* t2768_VT[] =
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
	&m14430_MI,
	&m14431_MI,
	&m14432_MI,
};
static Il2CppInterfaceOffsetPair t2768_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2768_1_0_0;
struct t2768;
extern Il2CppGenericClass t2768_GC;
TypeInfo t2768_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2768_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t2768_TI, NULL, t2768_VT, &EmptyCustomAttributesCache, &t2768_TI, &t2768_0_0_0, &t2768_1_0_0, t2768_IOs, &t2768_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2768), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4763_TI;

#include "t86.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<OptionsController>
extern MethodInfo m32178_MI;
static PropertyInfo t4763____Current_PropertyInfo = 
{
	&t4763_TI, "Current", &m32178_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4763_PIs[] =
{
	&t4763____Current_PropertyInfo,
	NULL
};
extern Il2CppType t86_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32178_GM;
MethodInfo m32178_MI = 
{
	"get_Current", NULL, &t4763_TI, &t86_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32178_GM};
static MethodInfo* t4763_MIs[] =
{
	&m32178_MI,
	NULL
};
static TypeInfo* t4763_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4763_0_0_0;
extern Il2CppType t4763_1_0_0;
struct t4763;
extern Il2CppGenericClass t4763_GC;
TypeInfo t4763_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4763_MIs, t4763_PIs, NULL, NULL, NULL, NULL, NULL, &t4763_TI, t4763_ITIs, NULL, &EmptyCustomAttributesCache, &t4763_TI, &t4763_0_0_0, &t4763_1_0_0, NULL, &t4763_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2769.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2769_TI;
#include "t2769MD.h"

extern TypeInfo t86_TI;
extern MethodInfo m14437_MI;
extern MethodInfo m24608_MI;
struct t107;
#define m24608(__this, p0, method) (t86 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<OptionsController>
extern Il2CppType t107_0_0_1;
FieldInfo t2769_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t2769_TI, offsetof(t2769, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2769_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2769_TI, offsetof(t2769, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2769_FIs[] =
{
	&t2769_f0_FieldInfo,
	&t2769_f1_FieldInfo,
	NULL
};
extern MethodInfo m14434_MI;
static PropertyInfo t2769____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2769_TI, "System.Collections.IEnumerator.Current", &m14434_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2769____Current_PropertyInfo = 
{
	&t2769_TI, "Current", &m14437_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2769_PIs[] =
{
	&t2769____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2769____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t2769_m14433_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14433_GM;
MethodInfo m14433_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t2769_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2769_m14433_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14433_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14434_GM;
MethodInfo m14434_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t2769_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14434_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14435_GM;
MethodInfo m14435_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t2769_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14435_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14436_GM;
MethodInfo m14436_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t2769_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14436_GM};
extern Il2CppType t86_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14437_GM;
MethodInfo m14437_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t2769_TI, &t86_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14437_GM};
static MethodInfo* t2769_MIs[] =
{
	&m14433_MI,
	&m14434_MI,
	&m14435_MI,
	&m14436_MI,
	&m14437_MI,
	NULL
};
extern MethodInfo m14436_MI;
extern MethodInfo m14435_MI;
static MethodInfo* t2769_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m14434_MI,
	&m14436_MI,
	&m14435_MI,
	&m14437_MI,
};
static TypeInfo* t2769_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t4763_TI,
};
static Il2CppInterfaceOffsetPair t2769_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t4763_TI, 7},
};
extern TypeInfo t86_TI;
static Il2CppRGCTXData t2769_RGCTXData[3] = 
{
	&m14437_MI/* Method Usage */,
	&t86_TI/* Class Usage */,
	&m24608_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2769_0_0_0;
extern Il2CppType t2769_1_0_0;
extern Il2CppGenericClass t2769_GC;
TypeInfo t2769_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2769_MIs, t2769_PIs, t2769_FIs, NULL, &t267_TI, NULL, &t107_TI, &t2769_TI, t2769_ITIs, t2769_VT, &EmptyCustomAttributesCache, &t2769_TI, &t2769_0_0_0, &t2769_1_0_0, t2769_IOs, &t2769_GC, NULL, NULL, NULL, t2769_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2769)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6000_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<OptionsController>
extern MethodInfo m32179_MI;
static PropertyInfo t6000____Count_PropertyInfo = 
{
	&t6000_TI, "Count", &m32179_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m32180_MI;
static PropertyInfo t6000____IsReadOnly_PropertyInfo = 
{
	&t6000_TI, "IsReadOnly", &m32180_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6000_PIs[] =
{
	&t6000____Count_PropertyInfo,
	&t6000____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32179_GM;
MethodInfo m32179_MI = 
{
	"get_Count", NULL, &t6000_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32179_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32180_GM;
MethodInfo m32180_MI = 
{
	"get_IsReadOnly", NULL, &t6000_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32180_GM};
extern Il2CppType t86_0_0_0;
extern Il2CppType t86_0_0_0;
static ParameterInfo t6000_m32181_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t86_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32181_GM;
MethodInfo m32181_MI = 
{
	"Add", NULL, &t6000_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6000_m32181_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32181_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32182_GM;
MethodInfo m32182_MI = 
{
	"Clear", NULL, &t6000_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32182_GM};
extern Il2CppType t86_0_0_0;
static ParameterInfo t6000_m32183_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t86_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32183_GM;
MethodInfo m32183_MI = 
{
	"Contains", NULL, &t6000_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6000_m32183_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32183_GM};
extern Il2CppType t4398_0_0_0;
extern Il2CppType t4398_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6000_m32184_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4398_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32184_GM;
MethodInfo m32184_MI = 
{
	"CopyTo", NULL, &t6000_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6000_m32184_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32184_GM};
extern Il2CppType t86_0_0_0;
static ParameterInfo t6000_m32185_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t86_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32185_GM;
MethodInfo m32185_MI = 
{
	"Remove", NULL, &t6000_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6000_m32185_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32185_GM};
static MethodInfo* t6000_MIs[] =
{
	&m32179_MI,
	&m32180_MI,
	&m32181_MI,
	&m32182_MI,
	&m32183_MI,
	&m32184_MI,
	&m32185_MI,
	NULL
};
extern TypeInfo t6002_TI;
static TypeInfo* t6000_ITIs[] = 
{
	&t739_TI,
	&t6002_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6000_0_0_0;
extern Il2CppType t6000_1_0_0;
struct t6000;
extern Il2CppGenericClass t6000_GC;
TypeInfo t6000_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6000_MIs, t6000_PIs, NULL, NULL, NULL, NULL, NULL, &t6000_TI, t6000_ITIs, NULL, &EmptyCustomAttributesCache, &t6000_TI, &t6000_0_0_0, &t6000_1_0_0, NULL, &t6000_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<OptionsController>
extern Il2CppType t4763_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32186_GM;
MethodInfo m32186_MI = 
{
	"GetEnumerator", NULL, &t6002_TI, &t4763_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32186_GM};
static MethodInfo* t6002_MIs[] =
{
	&m32186_MI,
	NULL
};
static TypeInfo* t6002_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6002_0_0_0;
extern Il2CppType t6002_1_0_0;
struct t6002;
extern Il2CppGenericClass t6002_GC;
TypeInfo t6002_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6002_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6002_TI, t6002_ITIs, NULL, &EmptyCustomAttributesCache, &t6002_TI, &t6002_0_0_0, &t6002_1_0_0, NULL, &t6002_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6001_TI;



// Metadata Definition System.Collections.Generic.IList`1<OptionsController>
extern MethodInfo m32187_MI;
extern MethodInfo m32188_MI;
static PropertyInfo t6001____Item_PropertyInfo = 
{
	&t6001_TI, "Item", &m32187_MI, &m32188_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6001_PIs[] =
{
	&t6001____Item_PropertyInfo,
	NULL
};
extern Il2CppType t86_0_0_0;
static ParameterInfo t6001_m32189_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t86_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32189_GM;
MethodInfo m32189_MI = 
{
	"IndexOf", NULL, &t6001_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6001_m32189_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32189_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t86_0_0_0;
static ParameterInfo t6001_m32190_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t86_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32190_GM;
MethodInfo m32190_MI = 
{
	"Insert", NULL, &t6001_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6001_m32190_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32190_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6001_m32191_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32191_GM;
MethodInfo m32191_MI = 
{
	"RemoveAt", NULL, &t6001_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6001_m32191_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32191_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6001_m32187_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t86_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32187_GM;
MethodInfo m32187_MI = 
{
	"get_Item", NULL, &t6001_TI, &t86_0_0_0, RuntimeInvoker_t5_t110, t6001_m32187_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32187_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t86_0_0_0;
static ParameterInfo t6001_m32188_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t86_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32188_GM;
MethodInfo m32188_MI = 
{
	"set_Item", NULL, &t6001_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6001_m32188_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32188_GM};
static MethodInfo* t6001_MIs[] =
{
	&m32189_MI,
	&m32190_MI,
	&m32191_MI,
	&m32187_MI,
	&m32188_MI,
	NULL
};
static TypeInfo* t6001_ITIs[] = 
{
	&t739_TI,
	&t6000_TI,
	&t6002_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6001_0_0_0;
extern Il2CppType t6001_1_0_0;
struct t6001;
extern Il2CppGenericClass t6001_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6001_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6001_MIs, t6001_PIs, NULL, NULL, NULL, NULL, NULL, &t6001_TI, t6001_ITIs, NULL, &t2240__CustomAttributeCache, &t6001_TI, &t6001_0_0_0, &t6001_1_0_0, NULL, &t6001_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2770.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2770_TI;
#include "t2770MD.h"

#include "t2771.h"
extern TypeInfo t2771_TI;
#include "t2771MD.h"
extern MethodInfo m14440_MI;
extern MethodInfo m14442_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<OptionsController>
extern Il2CppType t168_0_0_33;
FieldInfo t2770_f1_FieldInfo = 
{
	"m_Arg1", &t168_0_0_33, &t2770_TI, offsetof(t2770, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2770_FIs[] =
{
	&t2770_f1_FieldInfo,
	NULL
};
extern Il2CppType t117_0_0_0;
extern Il2CppType t695_0_0_0;
extern Il2CppType t86_0_0_0;
static ParameterInfo t2770_m14438_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t117_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t86_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14438_GM;
MethodInfo m14438_MI = 
{
	".ctor", (methodPointerType)&m12070_gshared, &t2770_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t5, t2770_m14438_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL, &m14438_GM};
extern Il2CppType t168_0_0_0;
static ParameterInfo t2770_m14439_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14439_GM;
MethodInfo m14439_MI = 
{
	"Invoke", (methodPointerType)&m12072_gshared, &t2770_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2770_m14439_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14439_GM};
static MethodInfo* t2770_MIs[] =
{
	&m14438_MI,
	&m14439_MI,
	NULL
};
extern MethodInfo m14439_MI;
extern MethodInfo m14443_MI;
static MethodInfo* t2770_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14439_MI,
	&m14443_MI,
};
extern Il2CppType t2772_0_0_0;
extern TypeInfo t2772_TI;
extern MethodInfo m24618_MI;
extern TypeInfo t86_TI;
extern MethodInfo m14445_MI;
extern TypeInfo t86_TI;
static Il2CppRGCTXData t2770_RGCTXData[8] = 
{
	&t2772_0_0_0/* Type Usage */,
	&t2772_TI/* Class Usage */,
	&m24618_MI/* Method Usage */,
	&t86_TI/* Class Usage */,
	&m14445_MI/* Method Usage */,
	&m14440_MI/* Method Usage */,
	&t86_TI/* Class Usage */,
	&m14442_MI/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2770_0_0_0;
extern Il2CppType t2770_1_0_0;
struct t2770;
extern Il2CppGenericClass t2770_GC;
TypeInfo t2770_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2770_MIs, NULL, t2770_FIs, NULL, &t2771_TI, NULL, NULL, &t2770_TI, NULL, t2770_VT, &EmptyCustomAttributesCache, &t2770_TI, &t2770_0_0_0, &t2770_1_0_0, NULL, &t2770_GC, NULL, NULL, NULL, t2770_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2770), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif

#include "t2772.h"
extern TypeInfo t2772_TI;
#include "t2772MD.h"
struct t694;
#define m24618(__this, p0, method) (void)m23910_gshared((t5 *)__this, (t5 *)p0, method)


// Metadata Definition UnityEngine.Events.InvokableCall`1<OptionsController>
extern Il2CppType t2772_0_0_1;
FieldInfo t2771_f0_FieldInfo = 
{
	"Delegate", &t2772_0_0_1, &t2771_TI, offsetof(t2771, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2771_FIs[] =
{
	&t2771_f0_FieldInfo,
	NULL
};
extern Il2CppType t5_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t2771_m14440_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14440_GM;
MethodInfo m14440_MI = 
{
	".ctor", (methodPointerType)&m12073_gshared, &t2771_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t2771_m14440_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14440_GM};
extern Il2CppType t2772_0_0_0;
static ParameterInfo t2771_m14441_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2772_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14441_GM;
MethodInfo m14441_MI = 
{
	".ctor", (methodPointerType)&m12074_gshared, &t2771_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2771_m14441_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14441_GM};
extern Il2CppType t168_0_0_0;
static ParameterInfo t2771_m14442_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14442_GM;
MethodInfo m14442_MI = 
{
	"Invoke", (methodPointerType)&m12075_gshared, &t2771_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2771_m14442_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14442_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t2771_m14443_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14443_GM;
MethodInfo m14443_MI = 
{
	"Find", (methodPointerType)&m12076_gshared, &t2771_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2771_m14443_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14443_GM};
static MethodInfo* t2771_MIs[] =
{
	&m14440_MI,
	&m14441_MI,
	&m14442_MI,
	&m14443_MI,
	NULL
};
static MethodInfo* t2771_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14442_MI,
	&m14443_MI,
};
extern TypeInfo t2772_TI;
extern TypeInfo t86_TI;
static Il2CppRGCTXData t2771_RGCTXData[5] = 
{
	&t2772_0_0_0/* Type Usage */,
	&t2772_TI/* Class Usage */,
	&m24618_MI/* Method Usage */,
	&t86_TI/* Class Usage */,
	&m14445_MI/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2771_0_0_0;
extern Il2CppType t2771_1_0_0;
struct t2771;
extern Il2CppGenericClass t2771_GC;
TypeInfo t2771_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2771_MIs, NULL, t2771_FIs, NULL, &t694_TI, NULL, NULL, &t2771_TI, NULL, t2771_VT, &EmptyCustomAttributesCache, &t2771_TI, &t2771_0_0_0, &t2771_1_0_0, NULL, &t2771_GC, NULL, NULL, NULL, t2771_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2771), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition UnityEngine.Events.UnityAction`1<OptionsController>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2772_m14444_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14444_GM;
MethodInfo m14444_MI = 
{
	".ctor", (methodPointerType)&m12077_gshared, &t2772_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2772_m14444_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14444_GM};
extern Il2CppType t86_0_0_0;
static ParameterInfo t2772_m14445_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t86_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14445_GM;
MethodInfo m14445_MI = 
{
	"Invoke", (methodPointerType)&m12078_gshared, &t2772_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2772_m14445_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14445_GM};
extern Il2CppType t86_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2772_m14446_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t86_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14446_GM;
MethodInfo m14446_MI = 
{
	"BeginInvoke", (methodPointerType)&m12079_gshared, &t2772_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t2772_m14446_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m14446_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2772_m14447_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14447_GM;
MethodInfo m14447_MI = 
{
	"EndInvoke", (methodPointerType)&m12080_gshared, &t2772_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2772_m14447_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14447_GM};
static MethodInfo* t2772_MIs[] =
{
	&m14444_MI,
	&m14445_MI,
	&m14446_MI,
	&m14447_MI,
	NULL
};
extern MethodInfo m14446_MI;
extern MethodInfo m14447_MI;
static MethodInfo* t2772_VT[] =
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
	&m14445_MI,
	&m14446_MI,
	&m14447_MI,
};
static Il2CppInterfaceOffsetPair t2772_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2772_1_0_0;
struct t2772;
extern Il2CppGenericClass t2772_GC;
TypeInfo t2772_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2772_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t2772_TI, NULL, t2772_VT, &EmptyCustomAttributesCache, &t2772_TI, &t2772_0_0_0, &t2772_1_0_0, t2772_IOs, &t2772_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2772), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4765_TI;

#include "t3.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<SoundEffects>
extern MethodInfo m32192_MI;
static PropertyInfo t4765____Current_PropertyInfo = 
{
	&t4765_TI, "Current", &m32192_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4765_PIs[] =
{
	&t4765____Current_PropertyInfo,
	NULL
};
extern Il2CppType t3_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32192_GM;
MethodInfo m32192_MI = 
{
	"get_Current", NULL, &t4765_TI, &t3_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32192_GM};
static MethodInfo* t4765_MIs[] =
{
	&m32192_MI,
	NULL
};
static TypeInfo* t4765_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4765_0_0_0;
extern Il2CppType t4765_1_0_0;
struct t4765;
extern Il2CppGenericClass t4765_GC;
TypeInfo t4765_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4765_MIs, t4765_PIs, NULL, NULL, NULL, NULL, NULL, &t4765_TI, t4765_ITIs, NULL, &EmptyCustomAttributesCache, &t4765_TI, &t4765_0_0_0, &t4765_1_0_0, NULL, &t4765_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2773.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2773_TI;
#include "t2773MD.h"

extern TypeInfo t3_TI;
extern MethodInfo m14452_MI;
extern MethodInfo m24620_MI;
struct t107;
#define m24620(__this, p0, method) (t3 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<SoundEffects>
extern Il2CppType t107_0_0_1;
FieldInfo t2773_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t2773_TI, offsetof(t2773, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2773_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2773_TI, offsetof(t2773, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2773_FIs[] =
{
	&t2773_f0_FieldInfo,
	&t2773_f1_FieldInfo,
	NULL
};
extern MethodInfo m14449_MI;
static PropertyInfo t2773____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2773_TI, "System.Collections.IEnumerator.Current", &m14449_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2773____Current_PropertyInfo = 
{
	&t2773_TI, "Current", &m14452_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2773_PIs[] =
{
	&t2773____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2773____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t2773_m14448_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14448_GM;
MethodInfo m14448_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t2773_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2773_m14448_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14448_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14449_GM;
MethodInfo m14449_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t2773_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14449_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14450_GM;
MethodInfo m14450_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t2773_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14450_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14451_GM;
MethodInfo m14451_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t2773_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14451_GM};
extern Il2CppType t3_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14452_GM;
MethodInfo m14452_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t2773_TI, &t3_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14452_GM};
static MethodInfo* t2773_MIs[] =
{
	&m14448_MI,
	&m14449_MI,
	&m14450_MI,
	&m14451_MI,
	&m14452_MI,
	NULL
};
extern MethodInfo m14451_MI;
extern MethodInfo m14450_MI;
static MethodInfo* t2773_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m14449_MI,
	&m14451_MI,
	&m14450_MI,
	&m14452_MI,
};
static TypeInfo* t2773_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t4765_TI,
};
static Il2CppInterfaceOffsetPair t2773_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t4765_TI, 7},
};
extern TypeInfo t3_TI;
static Il2CppRGCTXData t2773_RGCTXData[3] = 
{
	&m14452_MI/* Method Usage */,
	&t3_TI/* Class Usage */,
	&m24620_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2773_0_0_0;
extern Il2CppType t2773_1_0_0;
extern Il2CppGenericClass t2773_GC;
TypeInfo t2773_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2773_MIs, t2773_PIs, t2773_FIs, NULL, &t267_TI, NULL, &t107_TI, &t2773_TI, t2773_ITIs, t2773_VT, &EmptyCustomAttributesCache, &t2773_TI, &t2773_0_0_0, &t2773_1_0_0, t2773_IOs, &t2773_GC, NULL, NULL, NULL, t2773_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2773)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6003_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<SoundEffects>
extern MethodInfo m32193_MI;
static PropertyInfo t6003____Count_PropertyInfo = 
{
	&t6003_TI, "Count", &m32193_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m32194_MI;
static PropertyInfo t6003____IsReadOnly_PropertyInfo = 
{
	&t6003_TI, "IsReadOnly", &m32194_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6003_PIs[] =
{
	&t6003____Count_PropertyInfo,
	&t6003____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32193_GM;
MethodInfo m32193_MI = 
{
	"get_Count", NULL, &t6003_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32193_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32194_GM;
MethodInfo m32194_MI = 
{
	"get_IsReadOnly", NULL, &t6003_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32194_GM};
extern Il2CppType t3_0_0_0;
extern Il2CppType t3_0_0_0;
static ParameterInfo t6003_m32195_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t3_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32195_GM;
MethodInfo m32195_MI = 
{
	"Add", NULL, &t6003_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6003_m32195_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32195_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32196_GM;
MethodInfo m32196_MI = 
{
	"Clear", NULL, &t6003_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32196_GM};
extern Il2CppType t3_0_0_0;
static ParameterInfo t6003_m32197_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t3_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32197_GM;
MethodInfo m32197_MI = 
{
	"Contains", NULL, &t6003_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6003_m32197_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32197_GM};
extern Il2CppType t4399_0_0_0;
extern Il2CppType t4399_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6003_m32198_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4399_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32198_GM;
MethodInfo m32198_MI = 
{
	"CopyTo", NULL, &t6003_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6003_m32198_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32198_GM};
extern Il2CppType t3_0_0_0;
static ParameterInfo t6003_m32199_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t3_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32199_GM;
MethodInfo m32199_MI = 
{
	"Remove", NULL, &t6003_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6003_m32199_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32199_GM};
static MethodInfo* t6003_MIs[] =
{
	&m32193_MI,
	&m32194_MI,
	&m32195_MI,
	&m32196_MI,
	&m32197_MI,
	&m32198_MI,
	&m32199_MI,
	NULL
};
extern TypeInfo t6005_TI;
static TypeInfo* t6003_ITIs[] = 
{
	&t739_TI,
	&t6005_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6003_0_0_0;
extern Il2CppType t6003_1_0_0;
struct t6003;
extern Il2CppGenericClass t6003_GC;
TypeInfo t6003_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6003_MIs, t6003_PIs, NULL, NULL, NULL, NULL, NULL, &t6003_TI, t6003_ITIs, NULL, &EmptyCustomAttributesCache, &t6003_TI, &t6003_0_0_0, &t6003_1_0_0, NULL, &t6003_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<SoundEffects>
extern Il2CppType t4765_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32200_GM;
MethodInfo m32200_MI = 
{
	"GetEnumerator", NULL, &t6005_TI, &t4765_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32200_GM};
static MethodInfo* t6005_MIs[] =
{
	&m32200_MI,
	NULL
};
static TypeInfo* t6005_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6005_0_0_0;
extern Il2CppType t6005_1_0_0;
struct t6005;
extern Il2CppGenericClass t6005_GC;
TypeInfo t6005_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6005_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6005_TI, t6005_ITIs, NULL, &EmptyCustomAttributesCache, &t6005_TI, &t6005_0_0_0, &t6005_1_0_0, NULL, &t6005_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6004_TI;



// Metadata Definition System.Collections.Generic.IList`1<SoundEffects>
extern MethodInfo m32201_MI;
extern MethodInfo m32202_MI;
static PropertyInfo t6004____Item_PropertyInfo = 
{
	&t6004_TI, "Item", &m32201_MI, &m32202_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6004_PIs[] =
{
	&t6004____Item_PropertyInfo,
	NULL
};
extern Il2CppType t3_0_0_0;
static ParameterInfo t6004_m32203_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t3_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32203_GM;
MethodInfo m32203_MI = 
{
	"IndexOf", NULL, &t6004_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6004_m32203_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32203_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t3_0_0_0;
static ParameterInfo t6004_m32204_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t3_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32204_GM;
MethodInfo m32204_MI = 
{
	"Insert", NULL, &t6004_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6004_m32204_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32204_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6004_m32205_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32205_GM;
MethodInfo m32205_MI = 
{
	"RemoveAt", NULL, &t6004_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6004_m32205_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32205_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6004_m32201_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t3_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32201_GM;
MethodInfo m32201_MI = 
{
	"get_Item", NULL, &t6004_TI, &t3_0_0_0, RuntimeInvoker_t5_t110, t6004_m32201_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32201_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t3_0_0_0;
static ParameterInfo t6004_m32202_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t3_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32202_GM;
MethodInfo m32202_MI = 
{
	"set_Item", NULL, &t6004_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6004_m32202_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32202_GM};
static MethodInfo* t6004_MIs[] =
{
	&m32203_MI,
	&m32204_MI,
	&m32205_MI,
	&m32201_MI,
	&m32202_MI,
	NULL
};
static TypeInfo* t6004_ITIs[] = 
{
	&t739_TI,
	&t6003_TI,
	&t6005_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6004_0_0_0;
extern Il2CppType t6004_1_0_0;
struct t6004;
extern Il2CppGenericClass t6004_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6004_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6004_MIs, t6004_PIs, NULL, NULL, NULL, NULL, NULL, &t6004_TI, t6004_ITIs, NULL, &t2240__CustomAttributeCache, &t6004_TI, &t6004_0_0_0, &t6004_1_0_0, NULL, &t6004_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2774.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2774_TI;
#include "t2774MD.h"

#include "t2775.h"
extern TypeInfo t2775_TI;
#include "t2775MD.h"
extern MethodInfo m14455_MI;
extern MethodInfo m14457_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<SoundEffects>
extern Il2CppType t168_0_0_33;
FieldInfo t2774_f1_FieldInfo = 
{
	"m_Arg1", &t168_0_0_33, &t2774_TI, offsetof(t2774, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2774_FIs[] =
{
	&t2774_f1_FieldInfo,
	NULL
};
extern Il2CppType t117_0_0_0;
extern Il2CppType t695_0_0_0;
extern Il2CppType t3_0_0_0;
static ParameterInfo t2774_m14453_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t117_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t3_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14453_GM;
MethodInfo m14453_MI = 
{
	".ctor", (methodPointerType)&m12070_gshared, &t2774_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t5, t2774_m14453_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL, &m14453_GM};
extern Il2CppType t168_0_0_0;
static ParameterInfo t2774_m14454_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14454_GM;
MethodInfo m14454_MI = 
{
	"Invoke", (methodPointerType)&m12072_gshared, &t2774_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2774_m14454_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14454_GM};
static MethodInfo* t2774_MIs[] =
{
	&m14453_MI,
	&m14454_MI,
	NULL
};
extern MethodInfo m14454_MI;
extern MethodInfo m14458_MI;
static MethodInfo* t2774_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14454_MI,
	&m14458_MI,
};
extern Il2CppType t2776_0_0_0;
extern TypeInfo t2776_TI;
extern MethodInfo m24630_MI;
extern TypeInfo t3_TI;
extern MethodInfo m14460_MI;
extern TypeInfo t3_TI;
static Il2CppRGCTXData t2774_RGCTXData[8] = 
{
	&t2776_0_0_0/* Type Usage */,
	&t2776_TI/* Class Usage */,
	&m24630_MI/* Method Usage */,
	&t3_TI/* Class Usage */,
	&m14460_MI/* Method Usage */,
	&m14455_MI/* Method Usage */,
	&t3_TI/* Class Usage */,
	&m14457_MI/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2774_0_0_0;
extern Il2CppType t2774_1_0_0;
struct t2774;
extern Il2CppGenericClass t2774_GC;
TypeInfo t2774_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2774_MIs, NULL, t2774_FIs, NULL, &t2775_TI, NULL, NULL, &t2774_TI, NULL, t2774_VT, &EmptyCustomAttributesCache, &t2774_TI, &t2774_0_0_0, &t2774_1_0_0, NULL, &t2774_GC, NULL, NULL, NULL, t2774_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2774), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif

#include "t2776.h"
extern TypeInfo t2776_TI;
#include "t2776MD.h"
struct t694;
#define m24630(__this, p0, method) (void)m23910_gshared((t5 *)__this, (t5 *)p0, method)


// Metadata Definition UnityEngine.Events.InvokableCall`1<SoundEffects>
extern Il2CppType t2776_0_0_1;
FieldInfo t2775_f0_FieldInfo = 
{
	"Delegate", &t2776_0_0_1, &t2775_TI, offsetof(t2775, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2775_FIs[] =
{
	&t2775_f0_FieldInfo,
	NULL
};
extern Il2CppType t5_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t2775_m14455_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14455_GM;
MethodInfo m14455_MI = 
{
	".ctor", (methodPointerType)&m12073_gshared, &t2775_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t2775_m14455_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14455_GM};
extern Il2CppType t2776_0_0_0;
static ParameterInfo t2775_m14456_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2776_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14456_GM;
MethodInfo m14456_MI = 
{
	".ctor", (methodPointerType)&m12074_gshared, &t2775_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2775_m14456_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14456_GM};
extern Il2CppType t168_0_0_0;
static ParameterInfo t2775_m14457_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14457_GM;
MethodInfo m14457_MI = 
{
	"Invoke", (methodPointerType)&m12075_gshared, &t2775_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2775_m14457_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14457_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t2775_m14458_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14458_GM;
MethodInfo m14458_MI = 
{
	"Find", (methodPointerType)&m12076_gshared, &t2775_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2775_m14458_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14458_GM};
static MethodInfo* t2775_MIs[] =
{
	&m14455_MI,
	&m14456_MI,
	&m14457_MI,
	&m14458_MI,
	NULL
};
static MethodInfo* t2775_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14457_MI,
	&m14458_MI,
};
extern TypeInfo t2776_TI;
extern TypeInfo t3_TI;
static Il2CppRGCTXData t2775_RGCTXData[5] = 
{
	&t2776_0_0_0/* Type Usage */,
	&t2776_TI/* Class Usage */,
	&m24630_MI/* Method Usage */,
	&t3_TI/* Class Usage */,
	&m14460_MI/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2775_0_0_0;
extern Il2CppType t2775_1_0_0;
struct t2775;
extern Il2CppGenericClass t2775_GC;
TypeInfo t2775_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2775_MIs, NULL, t2775_FIs, NULL, &t694_TI, NULL, NULL, &t2775_TI, NULL, t2775_VT, &EmptyCustomAttributesCache, &t2775_TI, &t2775_0_0_0, &t2775_1_0_0, NULL, &t2775_GC, NULL, NULL, NULL, t2775_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2775), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition UnityEngine.Events.UnityAction`1<SoundEffects>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2776_m14459_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14459_GM;
MethodInfo m14459_MI = 
{
	".ctor", (methodPointerType)&m12077_gshared, &t2776_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2776_m14459_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14459_GM};
extern Il2CppType t3_0_0_0;
static ParameterInfo t2776_m14460_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t3_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14460_GM;
MethodInfo m14460_MI = 
{
	"Invoke", (methodPointerType)&m12078_gshared, &t2776_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2776_m14460_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14460_GM};
extern Il2CppType t3_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2776_m14461_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t3_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14461_GM;
MethodInfo m14461_MI = 
{
	"BeginInvoke", (methodPointerType)&m12079_gshared, &t2776_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t2776_m14461_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m14461_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2776_m14462_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14462_GM;
MethodInfo m14462_MI = 
{
	"EndInvoke", (methodPointerType)&m12080_gshared, &t2776_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2776_m14462_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14462_GM};
static MethodInfo* t2776_MIs[] =
{
	&m14459_MI,
	&m14460_MI,
	&m14461_MI,
	&m14462_MI,
	NULL
};
extern MethodInfo m14461_MI;
extern MethodInfo m14462_MI;
static MethodInfo* t2776_VT[] =
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
	&m14460_MI,
	&m14461_MI,
	&m14462_MI,
};
static Il2CppInterfaceOffsetPair t2776_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2776_1_0_0;
struct t2776;
extern Il2CppGenericClass t2776_GC;
TypeInfo t2776_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2776_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t2776_TI, NULL, t2776_VT, &EmptyCustomAttributesCache, &t2776_TI, &t2776_0_0_0, &t2776_1_0_0, t2776_IOs, &t2776_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2776), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t99.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t99_TI;
#include "t99MD.h"

#include "t8.h"
#include "UnityEngine_ArrayTypes.h"
#include "t182.h"
#include "t2781.h"
#include "t2782.h"
#include "t2783.h"
#include "t2790.h"
#include "t2784.h"
extern TypeInfo t8_TI;
extern TypeInfo t723_TI;
extern TypeInfo t1982_TI;
extern TypeInfo t2780_TI;
extern TypeInfo t2777_TI;
extern TypeInfo t182_TI;
extern TypeInfo t2778_TI;
extern TypeInfo t2779_TI;
extern TypeInfo t2781_TI;
extern TypeInfo t2782_TI;
extern TypeInfo t2783_TI;
extern TypeInfo t2790_TI;
#include "t2781MD.h"
#include "t2782MD.h"
#include "t2783MD.h"
#include "t182MD.h"
#include "t2790MD.h"
extern MethodInfo m14511_MI;
extern MethodInfo m14512_MI;
extern MethodInfo m24643_MI;
extern MethodInfo m4767_MI;
extern MethodInfo m14497_MI;
extern MethodInfo m14499_MI;
extern MethodInfo m14485_MI;
extern MethodInfo m32206_MI;
extern MethodInfo m14484_MI;
extern MethodInfo m698_MI;
extern MethodInfo m14482_MI;
extern MethodInfo m14489_MI;
extern MethodInfo m14495_MI;
extern MethodInfo m14498_MI;
extern MethodInfo m14500_MI;
extern MethodInfo m14483_MI;
extern MethodInfo m14508_MI;
extern MethodInfo m14509_MI;
extern MethodInfo m32207_MI;
extern MethodInfo m32208_MI;
extern MethodInfo m32209_MI;
extern MethodInfo m14522_MI;
extern MethodInfo m5904_MI;
extern MethodInfo m24645_MI;
extern MethodInfo m14492_MI;
extern MethodInfo m14493_MI;
extern MethodInfo m14597_MI;
extern MethodInfo m14601_MI;
extern MethodInfo m14518_MI;
extern MethodInfo m14496_MI;
extern MethodInfo m14502_MI;
extern MethodInfo m5963_MI;
extern MethodInfo m14607_MI;
extern MethodInfo m24647_MI;
extern MethodInfo m24655_MI;
extern MethodInfo m6740_MI;
struct t107;
struct t107;
 void m23607_gshared (t5 * __this, t168** p0, int32_t p1, MethodInfo* method);
#define m23607(__this, p0, p1, method) (void)m23607_gshared((t5 *)__this, (t168**)p0, (int32_t)p1, method)
#define m24643(__this, p0, p1, method) (void)m23607_gshared((t5 *)__this, (t168**)p0, (int32_t)p1, method)
struct t107;
#include "t2788.h"
struct t107;
#include "t2334.h"
 int32_t m11458_gshared (t5 * __this, t168* p0, t5 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m11458(__this, p0, p1, p2, p3, method) (int32_t)m11458_gshared((t5 *)__this, (t168*)p0, (t5 *)p1, (int32_t)p2, (int32_t)p3, method)
#define m24645(__this, p0, p1, p2, p3, method) (int32_t)m11458_gshared((t5 *)__this, (t168*)p0, (t5 *)p1, (int32_t)p2, (int32_t)p3, method)
struct t107;
struct t107;
 void m23676_gshared (t5 * __this, t168* p0, int32_t p1, int32_t p2, t5* p3, MethodInfo* method);
#define m23676(__this, p0, p1, p2, p3, method) (void)m23676_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (int32_t)p2, (t5*)p3, method)
#define m24647(__this, p0, p1, p2, p3, method) (void)m23676_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (int32_t)p2, (t5*)p3, method)
struct t107;
#include "t142.h"
struct t107;
#include "t2458.h"
 void m23827_gshared (t5 * __this, t168* p0, int32_t p1, t2458 * p2, MethodInfo* method);
#define m23827(__this, p0, p1, p2, method) (void)m23827_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (t2458 *)p2, method)
#define m24655(__this, p0, p1, p2, method) (void)m23827_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (t2458 *)p2, method)


 t182  m698 (t99 * __this, MethodInfo* method){
	{
		t182  L_0 = {0};
		m14518(&L_0, __this, &m14518_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.AudioClip>
extern Il2CppType t110_0_0_32849;
FieldInfo t99_f0_FieldInfo = 
{
	"DefaultCapacity", &t110_0_0_32849, &t99_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2777_0_0_1;
FieldInfo t99_f1_FieldInfo = 
{
	"_items", &t2777_0_0_1, &t99_TI, offsetof(t99, f1), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t99_f2_FieldInfo = 
{
	"_size", &t110_0_0_1, &t99_TI, offsetof(t99, f2), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t99_f3_FieldInfo = 
{
	"_version", &t110_0_0_1, &t99_TI, offsetof(t99, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2777_0_0_49;
FieldInfo t99_f4_FieldInfo = 
{
	"EmptyArray", &t2777_0_0_49, &t99_TI, offsetof(t99_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t99_FIs[] =
{
	&t99_f0_FieldInfo,
	&t99_f1_FieldInfo,
	&t99_f2_FieldInfo,
	&t99_f3_FieldInfo,
	&t99_f4_FieldInfo,
	NULL
};
static const int32_t t99_f0_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t99_f0_DefaultValue = 
{
	&t99_f0_FieldInfo, { (char*)&t99_f0_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t99_FDVs[] = 
{
	&t99_f0_DefaultValue,
	NULL
};
extern MethodInfo m14475_MI;
static PropertyInfo t99____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t99_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m14475_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14476_MI;
static PropertyInfo t99____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t99_TI, "System.Collections.ICollection.IsSynchronized", &m14476_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14477_MI;
static PropertyInfo t99____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t99_TI, "System.Collections.ICollection.SyncRoot", &m14477_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14478_MI;
static PropertyInfo t99____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t99_TI, "System.Collections.IList.IsFixedSize", &m14478_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14479_MI;
static PropertyInfo t99____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t99_TI, "System.Collections.IList.IsReadOnly", &m14479_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14480_MI;
extern MethodInfo m14481_MI;
static PropertyInfo t99____System_Collections_IList_Item_PropertyInfo = 
{
	&t99_TI, "System.Collections.IList.Item", &m14480_MI, &m14481_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t99____Capacity_PropertyInfo = 
{
	&t99_TI, "Capacity", &m14508_MI, &m14509_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14510_MI;
static PropertyInfo t99____Count_PropertyInfo = 
{
	&t99_TI, "Count", &m14510_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t99____Item_PropertyInfo = 
{
	&t99_TI, "Item", &m14511_MI, &m14512_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t99_PIs[] =
{
	&t99____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t99____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t99____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t99____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t99____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t99____System_Collections_IList_Item_PropertyInfo,
	&t99____Capacity_PropertyInfo,
	&t99____Count_PropertyInfo,
	&t99____Item_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14463_GM;
MethodInfo m14463_MI = 
{
	".ctor", (methodPointerType)&m11648_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14463_GM};
extern Il2CppType t2778_0_0_0;
extern Il2CppType t2778_0_0_0;
static ParameterInfo t99_m14464_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2778_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14464_GM;
MethodInfo m14464_MI = 
{
	".ctor", (methodPointerType)&m11650_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t99_m14464_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14464_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t99_m14465_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14465_GM;
MethodInfo m14465_MI = 
{
	".ctor", (methodPointerType)&m11652_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t99_m14465_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14465_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14466_GM;
MethodInfo m14466_MI = 
{
	".cctor", (methodPointerType)&m11654_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14466_GM};
extern Il2CppType t2779_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14467_GM;
MethodInfo m14467_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m11656_gshared, &t99_TI, &t2779_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14467_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t99_m14468_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14468_GM;
MethodInfo m14468_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11658_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t99_m14468_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14468_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14469_GM;
MethodInfo m14469_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11660_gshared, &t99_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14469_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t99_m14470_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14470_GM;
MethodInfo m14470_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11662_gshared, &t99_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t99_m14470_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14470_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t99_m14471_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14471_GM;
MethodInfo m14471_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11664_gshared, &t99_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t99_m14471_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14471_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t99_m14472_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14472_GM;
MethodInfo m14472_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11666_gshared, &t99_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t99_m14472_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14472_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t99_m14473_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14473_GM;
MethodInfo m14473_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11668_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t99_m14473_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14473_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t99_m14474_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14474_GM;
MethodInfo m14474_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11670_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t99_m14474_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14474_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14475_GM;
MethodInfo m14475_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11672_gshared, &t99_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14475_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14476_GM;
MethodInfo m14476_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11674_gshared, &t99_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14476_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14477_GM;
MethodInfo m14477_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11676_gshared, &t99_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14477_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14478_GM;
MethodInfo m14478_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11678_gshared, &t99_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14478_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14479_GM;
MethodInfo m14479_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11680_gshared, &t99_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14479_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t99_m14480_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14480_GM;
MethodInfo m14480_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11682_gshared, &t99_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t99_m14480_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14480_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t99_m14481_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14481_GM;
MethodInfo m14481_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11684_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t99_m14481_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14481_GM};
extern Il2CppType t8_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t99_m14482_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14482_GM;
MethodInfo m14482_MI = 
{
	"Add", (methodPointerType)&m11686_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t99_m14482_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14482_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t99_m14483_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14483_GM;
MethodInfo m14483_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m11688_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t99_m14483_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14483_GM};
extern Il2CppType t2780_0_0_0;
extern Il2CppType t2780_0_0_0;
static ParameterInfo t99_m14484_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2780_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14484_GM;
MethodInfo m14484_MI = 
{
	"AddCollection", (methodPointerType)&m11690_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t99_m14484_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14484_GM};
extern Il2CppType t2778_0_0_0;
static ParameterInfo t99_m14485_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t2778_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14485_GM;
MethodInfo m14485_MI = 
{
	"AddEnumerable", (methodPointerType)&m11692_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t99_m14485_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14485_GM};
extern Il2CppType t2778_0_0_0;
static ParameterInfo t99_m14486_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2778_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14486_GM;
MethodInfo m14486_MI = 
{
	"AddRange", (methodPointerType)&m11693_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t99_m14486_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14486_GM};
extern Il2CppType t2781_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14487_GM;
MethodInfo m14487_MI = 
{
	"AsReadOnly", (methodPointerType)&m11695_gshared, &t99_TI, &t2781_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14487_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14488_GM;
MethodInfo m14488_MI = 
{
	"Clear", (methodPointerType)&m11696_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14488_GM};
extern Il2CppType t8_0_0_0;
static ParameterInfo t99_m14489_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14489_GM;
MethodInfo m14489_MI = 
{
	"Contains", (methodPointerType)&m11698_gshared, &t99_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t99_m14489_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14489_GM};
extern Il2CppType t2777_0_0_0;
extern Il2CppType t2777_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t99_m14490_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2777_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14490_GM;
MethodInfo m14490_MI = 
{
	"CopyTo", (methodPointerType)&m11700_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t99_m14490_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14490_GM};
extern Il2CppType t2782_0_0_0;
extern Il2CppType t2782_0_0_0;
static ParameterInfo t99_m14491_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2782_0_0_0},
};
extern Il2CppType t8_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14491_GM;
MethodInfo m14491_MI = 
{
	"Find", (methodPointerType)&m11702_gshared, &t99_TI, &t8_0_0_0, RuntimeInvoker_t5_t5, t99_m14491_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14491_GM};
extern Il2CppType t2782_0_0_0;
static ParameterInfo t99_m14492_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2782_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14492_GM;
MethodInfo m14492_MI = 
{
	"CheckMatch", (methodPointerType)&m11704_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t99_m14492_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14492_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2782_0_0_0;
static ParameterInfo t99_m14493_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t2782_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14493_GM;
MethodInfo m14493_MI = 
{
	"GetIndex", (methodPointerType)&m11706_gshared, &t99_TI, &t110_0_0_0, RuntimeInvoker_t110_t110_t110_t5, t99_m14493_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL, &m14493_GM};
extern Il2CppType t2783_0_0_0;
extern Il2CppType t2783_0_0_0;
static ParameterInfo t99_m14494_ParameterInfos[] = 
{
	{"action", 0, 134217728, &EmptyCustomAttributesCache, &t2783_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14494_GM;
MethodInfo m14494_MI = 
{
	"ForEach", (methodPointerType)&m11707_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t99_m14494_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14494_GM};
extern Il2CppType t182_0_0_0;
extern void* RuntimeInvoker_t182 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m698_GM;
MethodInfo m698_MI = 
{
	"GetEnumerator", (methodPointerType)&m698, &t99_TI, &t182_0_0_0, RuntimeInvoker_t182, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m698_GM};
extern Il2CppType t8_0_0_0;
static ParameterInfo t99_m14495_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14495_GM;
MethodInfo m14495_MI = 
{
	"IndexOf", (methodPointerType)&m11709_gshared, &t99_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t99_m14495_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14495_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t99_m14496_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14496_GM;
MethodInfo m14496_MI = 
{
	"Shift", (methodPointerType)&m11711_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t99_m14496_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14496_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t99_m14497_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14497_GM;
MethodInfo m14497_MI = 
{
	"CheckIndex", (methodPointerType)&m11713_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t99_m14497_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14497_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t99_m14498_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14498_GM;
MethodInfo m14498_MI = 
{
	"Insert", (methodPointerType)&m11715_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t99_m14498_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14498_GM};
extern Il2CppType t2778_0_0_0;
static ParameterInfo t99_m14499_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2778_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14499_GM;
MethodInfo m14499_MI = 
{
	"CheckCollection", (methodPointerType)&m11717_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t99_m14499_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14499_GM};
extern Il2CppType t8_0_0_0;
static ParameterInfo t99_m14500_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14500_GM;
MethodInfo m14500_MI = 
{
	"Remove", (methodPointerType)&m11719_gshared, &t99_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t99_m14500_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14500_GM};
extern Il2CppType t2782_0_0_0;
static ParameterInfo t99_m14501_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2782_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14501_GM;
MethodInfo m14501_MI = 
{
	"RemoveAll", (methodPointerType)&m11721_gshared, &t99_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t99_m14501_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14501_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t99_m14502_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14502_GM;
MethodInfo m14502_MI = 
{
	"RemoveAt", (methodPointerType)&m11723_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t99_m14502_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14502_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14503_GM;
MethodInfo m14503_MI = 
{
	"Reverse", (methodPointerType)&m11725_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14503_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14504_GM;
MethodInfo m14504_MI = 
{
	"Sort", (methodPointerType)&m11727_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14504_GM};
extern Il2CppType t2784_0_0_0;
extern Il2CppType t2784_0_0_0;
static ParameterInfo t99_m14505_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t2784_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14505_GM;
MethodInfo m14505_MI = 
{
	"Sort", (methodPointerType)&m11729_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t99_m14505_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14505_GM};
extern Il2CppType t2777_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14506_GM;
MethodInfo m14506_MI = 
{
	"ToArray", (methodPointerType)&m11731_gshared, &t99_TI, &t2777_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14506_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14507_GM;
MethodInfo m14507_MI = 
{
	"TrimExcess", (methodPointerType)&m11733_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14507_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14508_GM;
MethodInfo m14508_MI = 
{
	"get_Capacity", (methodPointerType)&m11735_gshared, &t99_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14508_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t99_m14509_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14509_GM;
MethodInfo m14509_MI = 
{
	"set_Capacity", (methodPointerType)&m11737_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t99_m14509_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14509_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14510_GM;
MethodInfo m14510_MI = 
{
	"get_Count", (methodPointerType)&m11738_gshared, &t99_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14510_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t99_m14511_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t8_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14511_GM;
MethodInfo m14511_MI = 
{
	"get_Item", (methodPointerType)&m11740_gshared, &t99_TI, &t8_0_0_0, RuntimeInvoker_t5_t110, t99_m14511_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14511_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t99_m14512_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14512_GM;
MethodInfo m14512_MI = 
{
	"set_Item", (methodPointerType)&m11742_gshared, &t99_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t99_m14512_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14512_GM};
static MethodInfo* t99_MIs[] =
{
	&m14463_MI,
	&m14464_MI,
	&m14465_MI,
	&m14466_MI,
	&m14467_MI,
	&m14468_MI,
	&m14469_MI,
	&m14470_MI,
	&m14471_MI,
	&m14472_MI,
	&m14473_MI,
	&m14474_MI,
	&m14475_MI,
	&m14476_MI,
	&m14477_MI,
	&m14478_MI,
	&m14479_MI,
	&m14480_MI,
	&m14481_MI,
	&m14482_MI,
	&m14483_MI,
	&m14484_MI,
	&m14485_MI,
	&m14486_MI,
	&m14487_MI,
	&m14488_MI,
	&m14489_MI,
	&m14490_MI,
	&m14491_MI,
	&m14492_MI,
	&m14493_MI,
	&m14494_MI,
	&m698_MI,
	&m14495_MI,
	&m14496_MI,
	&m14497_MI,
	&m14498_MI,
	&m14499_MI,
	&m14500_MI,
	&m14501_MI,
	&m14502_MI,
	&m14503_MI,
	&m14504_MI,
	&m14505_MI,
	&m14506_MI,
	&m14507_MI,
	&m14508_MI,
	&m14509_MI,
	&m14510_MI,
	&m14511_MI,
	&m14512_MI,
	NULL
};
extern MethodInfo m14469_MI;
extern MethodInfo m14468_MI;
extern MethodInfo m14470_MI;
extern MethodInfo m14488_MI;
extern MethodInfo m14471_MI;
extern MethodInfo m14472_MI;
extern MethodInfo m14473_MI;
extern MethodInfo m14474_MI;
extern MethodInfo m14490_MI;
extern MethodInfo m14467_MI;
static MethodInfo* t99_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14469_MI,
	&m14510_MI,
	&m14476_MI,
	&m14477_MI,
	&m14468_MI,
	&m14478_MI,
	&m14479_MI,
	&m14480_MI,
	&m14481_MI,
	&m14470_MI,
	&m14488_MI,
	&m14471_MI,
	&m14472_MI,
	&m14473_MI,
	&m14474_MI,
	&m14502_MI,
	&m14510_MI,
	&m14475_MI,
	&m14482_MI,
	&m14488_MI,
	&m14489_MI,
	&m14490_MI,
	&m14500_MI,
	&m14467_MI,
	&m14495_MI,
	&m14498_MI,
	&m14502_MI,
	&m14511_MI,
	&m14512_MI,
};
extern TypeInfo t2786_TI;
static TypeInfo* t99_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t2780_TI,
	&t2778_TI,
	&t2786_TI,
};
static Il2CppInterfaceOffsetPair t99_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t2780_TI, 20},
	{ &t2778_TI, 27},
	{ &t2786_TI, 28},
};
extern TypeInfo t99_TI;
extern TypeInfo t2780_TI;
extern TypeInfo t2777_TI;
extern TypeInfo t182_TI;
extern TypeInfo t8_TI;
extern TypeInfo t2781_TI;
static Il2CppRGCTXData t99_RGCTXData[38] = 
{
	&t99_TI/* Static Usage */,
	&m14499_MI/* Method Usage */,
	&t2780_TI/* Class Usage */,
	&m14485_MI/* Method Usage */,
	&m32206_MI/* Method Usage */,
	&t2777_TI/* Array Usage */,
	&m14484_MI/* Method Usage */,
	&m698_MI/* Method Usage */,
	&t182_TI/* Class Usage */,
	&t8_TI/* Class Usage */,
	&m14482_MI/* Method Usage */,
	&m14489_MI/* Method Usage */,
	&m14495_MI/* Method Usage */,
	&m14497_MI/* Method Usage */,
	&m14498_MI/* Method Usage */,
	&m14500_MI/* Method Usage */,
	&m14511_MI/* Method Usage */,
	&m14512_MI/* Method Usage */,
	&m14483_MI/* Method Usage */,
	&m14508_MI/* Method Usage */,
	&m14509_MI/* Method Usage */,
	&m32207_MI/* Method Usage */,
	&m32208_MI/* Method Usage */,
	&m32209_MI/* Method Usage */,
	&t2781_TI/* Class Usage */,
	&m14522_MI/* Method Usage */,
	&m24645_MI/* Method Usage */,
	&m14492_MI/* Method Usage */,
	&m14493_MI/* Method Usage */,
	&m14597_MI/* Method Usage */,
	&m14601_MI/* Method Usage */,
	&m14518_MI/* Method Usage */,
	&m14496_MI/* Method Usage */,
	&m14502_MI/* Method Usage */,
	&m14607_MI/* Method Usage */,
	&m24647_MI/* Method Usage */,
	&m24655_MI/* Method Usage */,
	&m24643_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t99_0_0_0;
extern Il2CppType t99_1_0_0;
struct t99;
extern Il2CppGenericClass t99_GC;
extern CustomAttributesCache t1524__CustomAttributeCache;
TypeInfo t99_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t99_MIs, t99_PIs, t99_FIs, NULL, &t5_TI, NULL, NULL, &t99_TI, t99_ITIs, t99_VT, &t1524__CustomAttributeCache, &t99_TI, &t99_0_0_0, &t99_1_0_0, t99_IOs, &t99_GC, NULL, t99_FDVs, NULL, t99_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t99), 0, -1, sizeof(t99_SFs), 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, true, false, false, 51, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.AudioClip>
static PropertyInfo t2780____Count_PropertyInfo = 
{
	&t2780_TI, "Count", &m32206_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m32210_MI;
static PropertyInfo t2780____IsReadOnly_PropertyInfo = 
{
	&t2780_TI, "IsReadOnly", &m32210_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2780_PIs[] =
{
	&t2780____Count_PropertyInfo,
	&t2780____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32206_GM;
MethodInfo m32206_MI = 
{
	"get_Count", NULL, &t2780_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32206_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32210_GM;
MethodInfo m32210_MI = 
{
	"get_IsReadOnly", NULL, &t2780_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32210_GM};
extern Il2CppType t8_0_0_0;
static ParameterInfo t2780_m32211_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32211_GM;
MethodInfo m32211_MI = 
{
	"Add", NULL, &t2780_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2780_m32211_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32211_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32212_GM;
MethodInfo m32212_MI = 
{
	"Clear", NULL, &t2780_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32212_GM};
extern Il2CppType t8_0_0_0;
static ParameterInfo t2780_m32213_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32213_GM;
MethodInfo m32213_MI = 
{
	"Contains", NULL, &t2780_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2780_m32213_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32213_GM};
extern Il2CppType t2777_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2780_m32207_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2777_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32207_GM;
MethodInfo m32207_MI = 
{
	"CopyTo", NULL, &t2780_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2780_m32207_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32207_GM};
extern Il2CppType t8_0_0_0;
static ParameterInfo t2780_m32214_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32214_GM;
MethodInfo m32214_MI = 
{
	"Remove", NULL, &t2780_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2780_m32214_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32214_GM};
static MethodInfo* t2780_MIs[] =
{
	&m32206_MI,
	&m32210_MI,
	&m32211_MI,
	&m32212_MI,
	&m32213_MI,
	&m32207_MI,
	&m32214_MI,
	NULL
};
static TypeInfo* t2780_ITIs[] = 
{
	&t739_TI,
	&t2778_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2780_1_0_0;
struct t2780;
extern Il2CppGenericClass t2780_GC;
TypeInfo t2780_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t2780_MIs, t2780_PIs, NULL, NULL, NULL, NULL, NULL, &t2780_TI, t2780_ITIs, NULL, &EmptyCustomAttributesCache, &t2780_TI, &t2780_0_0_0, &t2780_1_0_0, NULL, &t2780_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.AudioClip>
extern Il2CppType t2779_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32208_GM;
MethodInfo m32208_MI = 
{
	"GetEnumerator", NULL, &t2778_TI, &t2779_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32208_GM};
static MethodInfo* t2778_MIs[] =
{
	&m32208_MI,
	NULL
};
static TypeInfo* t2778_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2778_1_0_0;
struct t2778;
extern Il2CppGenericClass t2778_GC;
TypeInfo t2778_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t2778_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2778_TI, t2778_ITIs, NULL, &EmptyCustomAttributesCache, &t2778_TI, &t2778_0_0_0, &t2778_1_0_0, NULL, &t2778_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.AudioClip>
static PropertyInfo t2779____Current_PropertyInfo = 
{
	&t2779_TI, "Current", &m32209_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2779_PIs[] =
{
	&t2779____Current_PropertyInfo,
	NULL
};
extern Il2CppType t8_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32209_GM;
MethodInfo m32209_MI = 
{
	"get_Current", NULL, &t2779_TI, &t8_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32209_GM};
static MethodInfo* t2779_MIs[] =
{
	&m32209_MI,
	NULL
};
static TypeInfo* t2779_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2779_0_0_0;
extern Il2CppType t2779_1_0_0;
struct t2779;
extern Il2CppGenericClass t2779_GC;
TypeInfo t2779_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2779_MIs, t2779_PIs, NULL, NULL, NULL, NULL, NULL, &t2779_TI, t2779_ITIs, NULL, &EmptyCustomAttributesCache, &t2779_TI, &t2779_0_0_0, &t2779_1_0_0, NULL, &t2779_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2785.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2785_TI;
#include "t2785MD.h"

extern MethodInfo m14517_MI;
extern MethodInfo m24632_MI;
struct t107;
#define m24632(__this, p0, method) (t8 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.AudioClip>
extern Il2CppType t107_0_0_1;
FieldInfo t2785_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t2785_TI, offsetof(t2785, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2785_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2785_TI, offsetof(t2785, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2785_FIs[] =
{
	&t2785_f0_FieldInfo,
	&t2785_f1_FieldInfo,
	NULL
};
extern MethodInfo m14514_MI;
static PropertyInfo t2785____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2785_TI, "System.Collections.IEnumerator.Current", &m14514_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2785____Current_PropertyInfo = 
{
	&t2785_TI, "Current", &m14517_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2785_PIs[] =
{
	&t2785____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2785____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t2785_m14513_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14513_GM;
MethodInfo m14513_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t2785_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2785_m14513_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14513_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14514_GM;
MethodInfo m14514_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t2785_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14514_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14515_GM;
MethodInfo m14515_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t2785_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14515_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14516_GM;
MethodInfo m14516_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t2785_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14516_GM};
extern Il2CppType t8_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14517_GM;
MethodInfo m14517_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t2785_TI, &t8_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14517_GM};
static MethodInfo* t2785_MIs[] =
{
	&m14513_MI,
	&m14514_MI,
	&m14515_MI,
	&m14516_MI,
	&m14517_MI,
	NULL
};
extern MethodInfo m14516_MI;
extern MethodInfo m14515_MI;
static MethodInfo* t2785_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m14514_MI,
	&m14516_MI,
	&m14515_MI,
	&m14517_MI,
};
static TypeInfo* t2785_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t2779_TI,
};
static Il2CppInterfaceOffsetPair t2785_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t2779_TI, 7},
};
extern TypeInfo t8_TI;
static Il2CppRGCTXData t2785_RGCTXData[3] = 
{
	&m14517_MI/* Method Usage */,
	&t8_TI/* Class Usage */,
	&m24632_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2785_0_0_0;
extern Il2CppType t2785_1_0_0;
extern Il2CppGenericClass t2785_GC;
TypeInfo t2785_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2785_MIs, t2785_PIs, t2785_FIs, NULL, &t267_TI, NULL, &t107_TI, &t2785_TI, t2785_ITIs, t2785_VT, &EmptyCustomAttributesCache, &t2785_TI, &t2785_0_0_0, &t2785_1_0_0, t2785_IOs, &t2785_GC, NULL, NULL, NULL, t2785_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2785)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.AudioClip>
extern MethodInfo m32215_MI;
extern MethodInfo m32216_MI;
static PropertyInfo t2786____Item_PropertyInfo = 
{
	&t2786_TI, "Item", &m32215_MI, &m32216_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2786_PIs[] =
{
	&t2786____Item_PropertyInfo,
	NULL
};
extern Il2CppType t8_0_0_0;
static ParameterInfo t2786_m32217_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32217_GM;
MethodInfo m32217_MI = 
{
	"IndexOf", NULL, &t2786_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2786_m32217_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32217_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t2786_m32218_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32218_GM;
MethodInfo m32218_MI = 
{
	"Insert", NULL, &t2786_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2786_m32218_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32218_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2786_m32219_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32219_GM;
MethodInfo m32219_MI = 
{
	"RemoveAt", NULL, &t2786_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2786_m32219_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32219_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2786_m32215_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t8_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32215_GM;
MethodInfo m32215_MI = 
{
	"get_Item", NULL, &t2786_TI, &t8_0_0_0, RuntimeInvoker_t5_t110, t2786_m32215_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32215_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t2786_m32216_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32216_GM;
MethodInfo m32216_MI = 
{
	"set_Item", NULL, &t2786_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2786_m32216_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32216_GM};
static MethodInfo* t2786_MIs[] =
{
	&m32217_MI,
	&m32218_MI,
	&m32219_MI,
	&m32215_MI,
	&m32216_MI,
	NULL
};
static TypeInfo* t2786_ITIs[] = 
{
	&t739_TI,
	&t2780_TI,
	&t2778_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2786_0_0_0;
extern Il2CppType t2786_1_0_0;
struct t2786;
extern Il2CppGenericClass t2786_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t2786_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t2786_MIs, t2786_PIs, NULL, NULL, NULL, NULL, NULL, &t2786_TI, t2786_ITIs, NULL, &t2240__CustomAttributeCache, &t2786_TI, &t2786_0_0_0, &t2786_1_0_0, NULL, &t2786_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m14521_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioClip>
extern Il2CppType t99_0_0_1;
FieldInfo t182_f0_FieldInfo = 
{
	"l", &t99_0_0_1, &t182_TI, offsetof(t182, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t182_f1_FieldInfo = 
{
	"next", &t110_0_0_1, &t182_TI, offsetof(t182, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t182_f2_FieldInfo = 
{
	"ver", &t110_0_0_1, &t182_TI, offsetof(t182, f2) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t8_0_0_1;
FieldInfo t182_f3_FieldInfo = 
{
	"current", &t8_0_0_1, &t182_TI, offsetof(t182, f3) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t182_FIs[] =
{
	&t182_f0_FieldInfo,
	&t182_f1_FieldInfo,
	&t182_f2_FieldInfo,
	&t182_f3_FieldInfo,
	NULL
};
extern MethodInfo m14519_MI;
static PropertyInfo t182____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t182_TI, "System.Collections.IEnumerator.Current", &m14519_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m699_MI;
static PropertyInfo t182____Current_PropertyInfo = 
{
	&t182_TI, "Current", &m699_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t182_PIs[] =
{
	&t182____System_Collections_IEnumerator_Current_PropertyInfo,
	&t182____Current_PropertyInfo,
	NULL
};
extern Il2CppType t99_0_0_0;
static ParameterInfo t182_m14518_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t99_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14518_GM;
MethodInfo m14518_MI = 
{
	".ctor", (methodPointerType)&m11749_gshared, &t182_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t182_m14518_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14518_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14519_GM;
MethodInfo m14519_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11750_gshared, &t182_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14519_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14520_GM;
MethodInfo m14520_MI = 
{
	"Dispose", (methodPointerType)&m11751_gshared, &t182_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14520_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14521_GM;
MethodInfo m14521_MI = 
{
	"VerifyState", (methodPointerType)&m11752_gshared, &t182_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14521_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m703_GM;
MethodInfo m703_MI = 
{
	"MoveNext", (methodPointerType)&m11753_gshared, &t182_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m703_GM};
extern Il2CppType t8_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m699_GM;
MethodInfo m699_MI = 
{
	"get_Current", (methodPointerType)&m11754_gshared, &t182_TI, &t8_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m699_GM};
static MethodInfo* t182_MIs[] =
{
	&m14518_MI,
	&m14519_MI,
	&m14520_MI,
	&m14521_MI,
	&m703_MI,
	&m699_MI,
	NULL
};
extern MethodInfo m703_MI;
extern MethodInfo m14520_MI;
static MethodInfo* t182_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m14519_MI,
	&m703_MI,
	&m14520_MI,
	&m699_MI,
};
static TypeInfo* t182_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t2779_TI,
};
static Il2CppInterfaceOffsetPair t182_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t2779_TI, 7},
};
extern TypeInfo t8_TI;
extern TypeInfo t182_TI;
static Il2CppRGCTXData t182_RGCTXData[3] = 
{
	&m14521_MI/* Method Usage */,
	&t8_TI/* Class Usage */,
	&t182_TI/* Class Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t182_0_0_0;
extern Il2CppType t182_1_0_0;
extern Il2CppGenericClass t182_GC;
TypeInfo t182_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t182_MIs, t182_PIs, t182_FIs, NULL, &t267_TI, NULL, &t1524_TI, &t182_TI, t182_ITIs, t182_VT, &EmptyCustomAttributesCache, &t182_TI, &t182_0_0_0, &t182_1_0_0, t182_IOs, &t182_GC, NULL, NULL, NULL, t182_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t182)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif

#include "t2787MD.h"
extern MethodInfo m14551_MI;
extern MethodInfo m14583_MI;
extern MethodInfo m32213_MI;
extern MethodInfo m32217_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.AudioClip>
extern Il2CppType t2786_0_0_1;
FieldInfo t2781_f0_FieldInfo = 
{
	"list", &t2786_0_0_1, &t2781_TI, offsetof(t2781, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2781_FIs[] =
{
	&t2781_f0_FieldInfo,
	NULL
};
extern MethodInfo m14528_MI;
extern MethodInfo m14529_MI;
static PropertyInfo t2781____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t2781_TI, "System.Collections.Generic.IList<T>.Item", &m14528_MI, &m14529_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14530_MI;
static PropertyInfo t2781____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2781_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m14530_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14540_MI;
static PropertyInfo t2781____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2781_TI, "System.Collections.ICollection.IsSynchronized", &m14540_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14541_MI;
static PropertyInfo t2781____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2781_TI, "System.Collections.ICollection.SyncRoot", &m14541_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14542_MI;
static PropertyInfo t2781____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2781_TI, "System.Collections.IList.IsFixedSize", &m14542_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14543_MI;
static PropertyInfo t2781____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2781_TI, "System.Collections.IList.IsReadOnly", &m14543_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14544_MI;
extern MethodInfo m14545_MI;
static PropertyInfo t2781____System_Collections_IList_Item_PropertyInfo = 
{
	&t2781_TI, "System.Collections.IList.Item", &m14544_MI, &m14545_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14550_MI;
static PropertyInfo t2781____Count_PropertyInfo = 
{
	&t2781_TI, "Count", &m14550_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2781____Item_PropertyInfo = 
{
	&t2781_TI, "Item", &m14551_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2781_PIs[] =
{
	&t2781____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t2781____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2781____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2781____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2781____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2781____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2781____System_Collections_IList_Item_PropertyInfo,
	&t2781____Count_PropertyInfo,
	&t2781____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2786_0_0_0;
static ParameterInfo t2781_m14522_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2786_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14522_GM;
MethodInfo m14522_MI = 
{
	".ctor", (methodPointerType)&m11755_gshared, &t2781_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2781_m14522_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14522_GM};
extern Il2CppType t8_0_0_0;
static ParameterInfo t2781_m14523_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14523_GM;
MethodInfo m14523_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m11756_gshared, &t2781_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2781_m14523_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14523_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14524_GM;
MethodInfo m14524_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m11757_gshared, &t2781_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14524_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t2781_m14525_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14525_GM;
MethodInfo m14525_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m11758_gshared, &t2781_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2781_m14525_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14525_GM};
extern Il2CppType t8_0_0_0;
static ParameterInfo t2781_m14526_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14526_GM;
MethodInfo m14526_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m11759_gshared, &t2781_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2781_m14526_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14526_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2781_m14527_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14527_GM;
MethodInfo m14527_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m11760_gshared, &t2781_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2781_m14527_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14527_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2781_m14528_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t8_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14528_GM;
MethodInfo m14528_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m11761_gshared, &t2781_TI, &t8_0_0_0, RuntimeInvoker_t5_t110, t2781_m14528_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14528_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t2781_m14529_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14529_GM;
MethodInfo m14529_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m11762_gshared, &t2781_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2781_m14529_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14529_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14530_GM;
MethodInfo m14530_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11763_gshared, &t2781_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14530_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2781_m14531_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14531_GM;
MethodInfo m14531_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11764_gshared, &t2781_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2781_m14531_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14531_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14532_GM;
MethodInfo m14532_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11765_gshared, &t2781_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14532_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2781_m14533_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14533_GM;
MethodInfo m14533_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11766_gshared, &t2781_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2781_m14533_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14533_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14534_GM;
MethodInfo m14534_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m11767_gshared, &t2781_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14534_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2781_m14535_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14535_GM;
MethodInfo m14535_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11768_gshared, &t2781_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2781_m14535_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14535_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2781_m14536_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14536_GM;
MethodInfo m14536_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11769_gshared, &t2781_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2781_m14536_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14536_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2781_m14537_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14537_GM;
MethodInfo m14537_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11770_gshared, &t2781_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2781_m14537_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14537_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2781_m14538_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14538_GM;
MethodInfo m14538_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11771_gshared, &t2781_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2781_m14538_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14538_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2781_m14539_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14539_GM;
MethodInfo m14539_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m11772_gshared, &t2781_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2781_m14539_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14539_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14540_GM;
MethodInfo m14540_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11773_gshared, &t2781_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14540_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14541_GM;
MethodInfo m14541_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11774_gshared, &t2781_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14541_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14542_GM;
MethodInfo m14542_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11775_gshared, &t2781_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14542_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14543_GM;
MethodInfo m14543_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11776_gshared, &t2781_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14543_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2781_m14544_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14544_GM;
MethodInfo m14544_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11777_gshared, &t2781_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t2781_m14544_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14544_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2781_m14545_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14545_GM;
MethodInfo m14545_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11778_gshared, &t2781_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2781_m14545_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14545_GM};
extern Il2CppType t8_0_0_0;
static ParameterInfo t2781_m14546_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14546_GM;
MethodInfo m14546_MI = 
{
	"Contains", (methodPointerType)&m11779_gshared, &t2781_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2781_m14546_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14546_GM};
extern Il2CppType t2777_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2781_m14547_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2777_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14547_GM;
MethodInfo m14547_MI = 
{
	"CopyTo", (methodPointerType)&m11780_gshared, &t2781_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2781_m14547_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14547_GM};
extern Il2CppType t2779_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14548_GM;
MethodInfo m14548_MI = 
{
	"GetEnumerator", (methodPointerType)&m11781_gshared, &t2781_TI, &t2779_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14548_GM};
extern Il2CppType t8_0_0_0;
static ParameterInfo t2781_m14549_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14549_GM;
MethodInfo m14549_MI = 
{
	"IndexOf", (methodPointerType)&m11782_gshared, &t2781_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2781_m14549_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14549_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14550_GM;
MethodInfo m14550_MI = 
{
	"get_Count", (methodPointerType)&m11783_gshared, &t2781_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14550_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2781_m14551_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t8_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14551_GM;
MethodInfo m14551_MI = 
{
	"get_Item", (methodPointerType)&m11784_gshared, &t2781_TI, &t8_0_0_0, RuntimeInvoker_t5_t110, t2781_m14551_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14551_GM};
static MethodInfo* t2781_MIs[] =
{
	&m14522_MI,
	&m14523_MI,
	&m14524_MI,
	&m14525_MI,
	&m14526_MI,
	&m14527_MI,
	&m14528_MI,
	&m14529_MI,
	&m14530_MI,
	&m14531_MI,
	&m14532_MI,
	&m14533_MI,
	&m14534_MI,
	&m14535_MI,
	&m14536_MI,
	&m14537_MI,
	&m14538_MI,
	&m14539_MI,
	&m14540_MI,
	&m14541_MI,
	&m14542_MI,
	&m14543_MI,
	&m14544_MI,
	&m14545_MI,
	&m14546_MI,
	&m14547_MI,
	&m14548_MI,
	&m14549_MI,
	&m14550_MI,
	&m14551_MI,
	NULL
};
extern MethodInfo m14532_MI;
extern MethodInfo m14531_MI;
extern MethodInfo m14533_MI;
extern MethodInfo m14534_MI;
extern MethodInfo m14535_MI;
extern MethodInfo m14536_MI;
extern MethodInfo m14537_MI;
extern MethodInfo m14538_MI;
extern MethodInfo m14539_MI;
extern MethodInfo m14523_MI;
extern MethodInfo m14524_MI;
extern MethodInfo m14546_MI;
extern MethodInfo m14547_MI;
extern MethodInfo m14526_MI;
extern MethodInfo m14549_MI;
extern MethodInfo m14525_MI;
extern MethodInfo m14527_MI;
extern MethodInfo m14548_MI;
static MethodInfo* t2781_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14532_MI,
	&m14550_MI,
	&m14540_MI,
	&m14541_MI,
	&m14531_MI,
	&m14542_MI,
	&m14543_MI,
	&m14544_MI,
	&m14545_MI,
	&m14533_MI,
	&m14534_MI,
	&m14535_MI,
	&m14536_MI,
	&m14537_MI,
	&m14538_MI,
	&m14539_MI,
	&m14550_MI,
	&m14530_MI,
	&m14523_MI,
	&m14524_MI,
	&m14546_MI,
	&m14547_MI,
	&m14526_MI,
	&m14549_MI,
	&m14525_MI,
	&m14527_MI,
	&m14528_MI,
	&m14529_MI,
	&m14548_MI,
	&m14551_MI,
};
static TypeInfo* t2781_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t2780_TI,
	&t2786_TI,
	&t2778_TI,
};
static Il2CppInterfaceOffsetPair t2781_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t2780_TI, 20},
	{ &t2786_TI, 27},
	{ &t2778_TI, 32},
};
extern TypeInfo t8_TI;
static Il2CppRGCTXData t2781_RGCTXData[9] = 
{
	&m14551_MI/* Method Usage */,
	&m14583_MI/* Method Usage */,
	&t8_TI/* Class Usage */,
	&m32213_MI/* Method Usage */,
	&m32217_MI/* Method Usage */,
	&m32215_MI/* Method Usage */,
	&m32207_MI/* Method Usage */,
	&m32208_MI/* Method Usage */,
	&m32206_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2781_0_0_0;
extern Il2CppType t2781_1_0_0;
struct t2781;
extern Il2CppGenericClass t2781_GC;
extern CustomAttributesCache t1526__CustomAttributeCache;
TypeInfo t2781_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t2781_MIs, t2781_PIs, t2781_FIs, NULL, &t5_TI, NULL, NULL, &t2781_TI, t2781_ITIs, t2781_VT, &t1526__CustomAttributeCache, &t2781_TI, &t2781_0_0_0, &t2781_1_0_0, t2781_IOs, &t2781_GC, NULL, NULL, NULL, t2781_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2781), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t2787.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2787_TI;

extern MethodInfo m14586_MI;
extern MethodInfo m14587_MI;
extern MethodInfo m14584_MI;
extern MethodInfo m14582_MI;
extern MethodInfo m14463_MI;
extern MethodInfo m14575_MI;
extern MethodInfo m14585_MI;
extern MethodInfo m14573_MI;
extern MethodInfo m14578_MI;
extern MethodInfo m14569_MI;
extern MethodInfo m32212_MI;
extern MethodInfo m32218_MI;
extern MethodInfo m32219_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.AudioClip>
extern Il2CppType t2786_0_0_1;
FieldInfo t2787_f0_FieldInfo = 
{
	"list", &t2786_0_0_1, &t2787_TI, offsetof(t2787, f0), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_1;
FieldInfo t2787_f1_FieldInfo = 
{
	"syncRoot", &t5_0_0_1, &t2787_TI, offsetof(t2787, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2787_FIs[] =
{
	&t2787_f0_FieldInfo,
	&t2787_f1_FieldInfo,
	NULL
};
extern MethodInfo m14553_MI;
static PropertyInfo t2787____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2787_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m14553_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14561_MI;
static PropertyInfo t2787____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2787_TI, "System.Collections.ICollection.IsSynchronized", &m14561_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14562_MI;
static PropertyInfo t2787____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2787_TI, "System.Collections.ICollection.SyncRoot", &m14562_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14563_MI;
static PropertyInfo t2787____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2787_TI, "System.Collections.IList.IsFixedSize", &m14563_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14564_MI;
static PropertyInfo t2787____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2787_TI, "System.Collections.IList.IsReadOnly", &m14564_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14565_MI;
extern MethodInfo m14566_MI;
static PropertyInfo t2787____System_Collections_IList_Item_PropertyInfo = 
{
	&t2787_TI, "System.Collections.IList.Item", &m14565_MI, &m14566_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14579_MI;
static PropertyInfo t2787____Count_PropertyInfo = 
{
	&t2787_TI, "Count", &m14579_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14580_MI;
extern MethodInfo m14581_MI;
static PropertyInfo t2787____Item_PropertyInfo = 
{
	&t2787_TI, "Item", &m14580_MI, &m14581_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2787_PIs[] =
{
	&t2787____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2787____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2787____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2787____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2787____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2787____System_Collections_IList_Item_PropertyInfo,
	&t2787____Count_PropertyInfo,
	&t2787____Item_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14552_GM;
MethodInfo m14552_MI = 
{
	".ctor", (methodPointerType)&m11785_gshared, &t2787_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14552_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14553_GM;
MethodInfo m14553_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11786_gshared, &t2787_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14553_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2787_m14554_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14554_GM;
MethodInfo m14554_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11787_gshared, &t2787_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2787_m14554_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14554_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14555_GM;
MethodInfo m14555_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11788_gshared, &t2787_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14555_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2787_m14556_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14556_GM;
MethodInfo m14556_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11789_gshared, &t2787_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2787_m14556_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14556_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2787_m14557_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14557_GM;
MethodInfo m14557_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11790_gshared, &t2787_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2787_m14557_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14557_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2787_m14558_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14558_GM;
MethodInfo m14558_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11791_gshared, &t2787_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2787_m14558_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14558_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2787_m14559_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14559_GM;
MethodInfo m14559_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11792_gshared, &t2787_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2787_m14559_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14559_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2787_m14560_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14560_GM;
MethodInfo m14560_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11793_gshared, &t2787_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2787_m14560_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14560_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14561_GM;
MethodInfo m14561_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11794_gshared, &t2787_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14561_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14562_GM;
MethodInfo m14562_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11795_gshared, &t2787_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14562_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14563_GM;
MethodInfo m14563_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11796_gshared, &t2787_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14563_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14564_GM;
MethodInfo m14564_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11797_gshared, &t2787_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14564_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2787_m14565_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14565_GM;
MethodInfo m14565_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11798_gshared, &t2787_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t2787_m14565_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14565_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2787_m14566_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14566_GM;
MethodInfo m14566_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11799_gshared, &t2787_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2787_m14566_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14566_GM};
extern Il2CppType t8_0_0_0;
static ParameterInfo t2787_m14567_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14567_GM;
MethodInfo m14567_MI = 
{
	"Add", (methodPointerType)&m11800_gshared, &t2787_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2787_m14567_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14567_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14568_GM;
MethodInfo m14568_MI = 
{
	"Clear", (methodPointerType)&m11801_gshared, &t2787_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14568_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14569_GM;
MethodInfo m14569_MI = 
{
	"ClearItems", (methodPointerType)&m11802_gshared, &t2787_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14569_GM};
extern Il2CppType t8_0_0_0;
static ParameterInfo t2787_m14570_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14570_GM;
MethodInfo m14570_MI = 
{
	"Contains", (methodPointerType)&m11803_gshared, &t2787_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2787_m14570_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14570_GM};
extern Il2CppType t2777_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2787_m14571_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2777_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14571_GM;
MethodInfo m14571_MI = 
{
	"CopyTo", (methodPointerType)&m11804_gshared, &t2787_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2787_m14571_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14571_GM};
extern Il2CppType t2779_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14572_GM;
MethodInfo m14572_MI = 
{
	"GetEnumerator", (methodPointerType)&m11805_gshared, &t2787_TI, &t2779_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14572_GM};
extern Il2CppType t8_0_0_0;
static ParameterInfo t2787_m14573_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14573_GM;
MethodInfo m14573_MI = 
{
	"IndexOf", (methodPointerType)&m11806_gshared, &t2787_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2787_m14573_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14573_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t2787_m14574_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14574_GM;
MethodInfo m14574_MI = 
{
	"Insert", (methodPointerType)&m11807_gshared, &t2787_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2787_m14574_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14574_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t2787_m14575_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14575_GM;
MethodInfo m14575_MI = 
{
	"InsertItem", (methodPointerType)&m11808_gshared, &t2787_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2787_m14575_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14575_GM};
extern Il2CppType t8_0_0_0;
static ParameterInfo t2787_m14576_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14576_GM;
MethodInfo m14576_MI = 
{
	"Remove", (methodPointerType)&m11809_gshared, &t2787_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2787_m14576_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14576_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2787_m14577_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14577_GM;
MethodInfo m14577_MI = 
{
	"RemoveAt", (methodPointerType)&m11810_gshared, &t2787_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2787_m14577_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14577_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2787_m14578_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14578_GM;
MethodInfo m14578_MI = 
{
	"RemoveItem", (methodPointerType)&m11811_gshared, &t2787_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2787_m14578_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14578_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14579_GM;
MethodInfo m14579_MI = 
{
	"get_Count", (methodPointerType)&m11812_gshared, &t2787_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14579_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2787_m14580_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t8_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14580_GM;
MethodInfo m14580_MI = 
{
	"get_Item", (methodPointerType)&m11813_gshared, &t2787_TI, &t8_0_0_0, RuntimeInvoker_t5_t110, t2787_m14580_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14580_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t2787_m14581_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14581_GM;
MethodInfo m14581_MI = 
{
	"set_Item", (methodPointerType)&m11814_gshared, &t2787_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2787_m14581_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14581_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t2787_m14582_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14582_GM;
MethodInfo m14582_MI = 
{
	"SetItem", (methodPointerType)&m11815_gshared, &t2787_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2787_m14582_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14582_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2787_m14583_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14583_GM;
MethodInfo m14583_MI = 
{
	"IsValidItem", (methodPointerType)&m11816_gshared, &t2787_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2787_m14583_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14583_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2787_m14584_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t8_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14584_GM;
MethodInfo m14584_MI = 
{
	"ConvertItem", (methodPointerType)&m11817_gshared, &t2787_TI, &t8_0_0_0, RuntimeInvoker_t5_t5, t2787_m14584_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14584_GM};
extern Il2CppType t2786_0_0_0;
static ParameterInfo t2787_m14585_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2786_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14585_GM;
MethodInfo m14585_MI = 
{
	"CheckWritable", (methodPointerType)&m11818_gshared, &t2787_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2787_m14585_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14585_GM};
extern Il2CppType t2786_0_0_0;
static ParameterInfo t2787_m14586_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2786_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14586_GM;
MethodInfo m14586_MI = 
{
	"IsSynchronized", (methodPointerType)&m11819_gshared, &t2787_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2787_m14586_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14586_GM};
extern Il2CppType t2786_0_0_0;
static ParameterInfo t2787_m14587_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2786_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14587_GM;
MethodInfo m14587_MI = 
{
	"IsFixedSize", (methodPointerType)&m11820_gshared, &t2787_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2787_m14587_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14587_GM};
static MethodInfo* t2787_MIs[] =
{
	&m14552_MI,
	&m14553_MI,
	&m14554_MI,
	&m14555_MI,
	&m14556_MI,
	&m14557_MI,
	&m14558_MI,
	&m14559_MI,
	&m14560_MI,
	&m14561_MI,
	&m14562_MI,
	&m14563_MI,
	&m14564_MI,
	&m14565_MI,
	&m14566_MI,
	&m14567_MI,
	&m14568_MI,
	&m14569_MI,
	&m14570_MI,
	&m14571_MI,
	&m14572_MI,
	&m14573_MI,
	&m14574_MI,
	&m14575_MI,
	&m14576_MI,
	&m14577_MI,
	&m14578_MI,
	&m14579_MI,
	&m14580_MI,
	&m14581_MI,
	&m14582_MI,
	&m14583_MI,
	&m14584_MI,
	&m14585_MI,
	&m14586_MI,
	&m14587_MI,
	NULL
};
extern MethodInfo m14555_MI;
extern MethodInfo m14554_MI;
extern MethodInfo m14556_MI;
extern MethodInfo m14568_MI;
extern MethodInfo m14557_MI;
extern MethodInfo m14558_MI;
extern MethodInfo m14559_MI;
extern MethodInfo m14560_MI;
extern MethodInfo m14577_MI;
extern MethodInfo m14567_MI;
extern MethodInfo m14570_MI;
extern MethodInfo m14571_MI;
extern MethodInfo m14576_MI;
extern MethodInfo m14574_MI;
extern MethodInfo m14572_MI;
static MethodInfo* t2787_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14555_MI,
	&m14579_MI,
	&m14561_MI,
	&m14562_MI,
	&m14554_MI,
	&m14563_MI,
	&m14564_MI,
	&m14565_MI,
	&m14566_MI,
	&m14556_MI,
	&m14568_MI,
	&m14557_MI,
	&m14558_MI,
	&m14559_MI,
	&m14560_MI,
	&m14577_MI,
	&m14579_MI,
	&m14553_MI,
	&m14567_MI,
	&m14568_MI,
	&m14570_MI,
	&m14571_MI,
	&m14576_MI,
	&m14573_MI,
	&m14574_MI,
	&m14577_MI,
	&m14580_MI,
	&m14581_MI,
	&m14572_MI,
	&m14569_MI,
	&m14575_MI,
	&m14578_MI,
	&m14582_MI,
};
static TypeInfo* t2787_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t2780_TI,
	&t2786_TI,
	&t2778_TI,
};
static Il2CppInterfaceOffsetPair t2787_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t2780_TI, 20},
	{ &t2786_TI, 27},
	{ &t2778_TI, 32},
};
extern TypeInfo t99_TI;
extern TypeInfo t8_TI;
static Il2CppRGCTXData t2787_RGCTXData[25] = 
{
	&t99_TI/* Class Usage */,
	&m14463_MI/* Method Usage */,
	&m32210_MI/* Method Usage */,
	&m32208_MI/* Method Usage */,
	&m32206_MI/* Method Usage */,
	&m14584_MI/* Method Usage */,
	&m14575_MI/* Method Usage */,
	&m14583_MI/* Method Usage */,
	&t8_TI/* Class Usage */,
	&m32213_MI/* Method Usage */,
	&m32217_MI/* Method Usage */,
	&m14585_MI/* Method Usage */,
	&m14573_MI/* Method Usage */,
	&m14578_MI/* Method Usage */,
	&m14586_MI/* Method Usage */,
	&m14587_MI/* Method Usage */,
	&m32215_MI/* Method Usage */,
	&m14582_MI/* Method Usage */,
	&m14569_MI/* Method Usage */,
	&m32212_MI/* Method Usage */,
	&m32207_MI/* Method Usage */,
	&m32218_MI/* Method Usage */,
	&m32219_MI/* Method Usage */,
	&m32216_MI/* Method Usage */,
	&t8_0_0_0/* Type Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2787_0_0_0;
extern Il2CppType t2787_1_0_0;
struct t2787;
extern Il2CppGenericClass t2787_GC;
extern CustomAttributesCache t1525__CustomAttributeCache;
TypeInfo t2787_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t2787_MIs, t2787_PIs, t2787_FIs, NULL, &t5_TI, NULL, NULL, &t2787_TI, t2787_ITIs, t2787_VT, &t1525__CustomAttributeCache, &t2787_TI, &t2787_0_0_0, &t2787_1_0_0, t2787_IOs, &t2787_GC, NULL, NULL, NULL, t2787_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2787), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2788_TI;
#include "t2788MD.h"

#include "t2789.h"
extern TypeInfo t7572_TI;
extern TypeInfo t2789_TI;
#include "t2789MD.h"
extern Il2CppType t7572_0_0_0;
extern MethodInfo m14593_MI;
extern MethodInfo m32220_MI;
extern MethodInfo m24644_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.AudioClip>
extern Il2CppType t2788_0_0_49;
FieldInfo t2788_f0_FieldInfo = 
{
	"_default", &t2788_0_0_49, &t2788_TI, offsetof(t2788_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2788_FIs[] =
{
	&t2788_f0_FieldInfo,
	NULL
};
extern MethodInfo m14592_MI;
static PropertyInfo t2788____Default_PropertyInfo = 
{
	&t2788_TI, "Default", &m14592_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2788_PIs[] =
{
	&t2788____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14588_GM;
MethodInfo m14588_MI = 
{
	".ctor", (methodPointerType)&m11821_gshared, &t2788_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14588_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14589_GM;
MethodInfo m14589_MI = 
{
	".cctor", (methodPointerType)&m11822_gshared, &t2788_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14589_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2788_m14590_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14590_GM;
MethodInfo m14590_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m11823_gshared, &t2788_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2788_m14590_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14590_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2788_m14591_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14591_GM;
MethodInfo m14591_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m11824_gshared, &t2788_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2788_m14591_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14591_GM};
extern Il2CppType t8_0_0_0;
static ParameterInfo t2788_m32220_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32220_GM;
MethodInfo m32220_MI = 
{
	"GetHashCode", NULL, &t2788_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2788_m32220_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32220_GM};
extern Il2CppType t8_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t2788_m24644_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m24644_GM;
MethodInfo m24644_MI = 
{
	"Equals", NULL, &t2788_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2788_m24644_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m24644_GM};
extern Il2CppType t2788_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14592_GM;
MethodInfo m14592_MI = 
{
	"get_Default", (methodPointerType)&m11825_gshared, &t2788_TI, &t2788_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14592_GM};
static MethodInfo* t2788_MIs[] =
{
	&m14588_MI,
	&m14589_MI,
	&m14590_MI,
	&m14591_MI,
	&m32220_MI,
	&m24644_MI,
	&m14592_MI,
	NULL
};
extern MethodInfo m14591_MI;
extern MethodInfo m14590_MI;
static MethodInfo* t2788_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m24644_MI,
	&m32220_MI,
	&m14591_MI,
	&m14590_MI,
	NULL,
	NULL,
};
extern TypeInfo t7573_TI;
static TypeInfo* t2788_ITIs[] = 
{
	&t7573_TI,
	&t998_TI,
};
static Il2CppInterfaceOffsetPair t2788_IOs[] = 
{
	{ &t7573_TI, 4},
	{ &t998_TI, 6},
};
extern TypeInfo t2788_TI;
extern TypeInfo t2788_TI;
extern TypeInfo t2789_TI;
extern TypeInfo t8_TI;
static Il2CppRGCTXData t2788_RGCTXData[9] = 
{
	&t7572_0_0_0/* Type Usage */,
	&t8_0_0_0/* Type Usage */,
	&t2788_TI/* Class Usage */,
	&t2788_TI/* Static Usage */,
	&t2789_TI/* Class Usage */,
	&m14593_MI/* Method Usage */,
	&t8_TI/* Class Usage */,
	&m32220_MI/* Method Usage */,
	&m24644_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2788_0_0_0;
extern Il2CppType t2788_1_0_0;
struct t2788;
extern Il2CppGenericClass t2788_GC;
TypeInfo t2788_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2788_MIs, t2788_PIs, t2788_FIs, NULL, &t5_TI, NULL, NULL, &t2788_TI, t2788_ITIs, t2788_VT, &EmptyCustomAttributesCache, &t2788_TI, &t2788_0_0_0, &t2788_1_0_0, t2788_IOs, &t2788_GC, NULL, NULL, NULL, t2788_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2788), 0, -1, sizeof(t2788_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.AudioClip>
extern Il2CppType t8_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t7573_m32221_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32221_GM;
MethodInfo m32221_MI = 
{
	"Equals", NULL, &t7573_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t7573_m32221_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32221_GM};
extern Il2CppType t8_0_0_0;
static ParameterInfo t7573_m32222_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32222_GM;
MethodInfo m32222_MI = 
{
	"GetHashCode", NULL, &t7573_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7573_m32222_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32222_GM};
static MethodInfo* t7573_MIs[] =
{
	&m32221_MI,
	&m32222_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7573_0_0_0;
extern Il2CppType t7573_1_0_0;
struct t7573;
extern Il2CppGenericClass t7573_GC;
TypeInfo t7573_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t7573_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7573_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7573_TI, &t7573_0_0_0, &t7573_1_0_0, NULL, &t7573_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.IEquatable`1<UnityEngine.AudioClip>
extern Il2CppType t8_0_0_0;
static ParameterInfo t7572_m32223_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32223_GM;
MethodInfo m32223_MI = 
{
	"Equals", NULL, &t7572_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7572_m32223_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32223_GM};
static MethodInfo* t7572_MIs[] =
{
	&m32223_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7572_1_0_0;
struct t7572;
extern Il2CppGenericClass t7572_GC;
TypeInfo t7572_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t7572_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7572_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7572_TI, &t7572_0_0_0, &t7572_1_0_0, NULL, &t7572_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m14588_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.AudioClip>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14593_GM;
MethodInfo m14593_MI = 
{
	".ctor", (methodPointerType)&m11856_gshared, &t2789_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14593_GM};
extern Il2CppType t8_0_0_0;
static ParameterInfo t2789_m14594_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14594_GM;
MethodInfo m14594_MI = 
{
	"GetHashCode", (methodPointerType)&m11857_gshared, &t2789_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2789_m14594_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14594_GM};
extern Il2CppType t8_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t2789_m14595_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14595_GM;
MethodInfo m14595_MI = 
{
	"Equals", (methodPointerType)&m11858_gshared, &t2789_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2789_m14595_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14595_GM};
static MethodInfo* t2789_MIs[] =
{
	&m14593_MI,
	&m14594_MI,
	&m14595_MI,
	NULL
};
extern MethodInfo m14595_MI;
extern MethodInfo m14594_MI;
static MethodInfo* t2789_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14595_MI,
	&m14594_MI,
	&m14591_MI,
	&m14590_MI,
	&m14594_MI,
	&m14595_MI,
};
static Il2CppInterfaceOffsetPair t2789_IOs[] = 
{
	{ &t7573_TI, 4},
	{ &t998_TI, 6},
};
extern TypeInfo t2788_TI;
extern TypeInfo t2788_TI;
extern TypeInfo t2789_TI;
extern TypeInfo t8_TI;
extern TypeInfo t8_TI;
static Il2CppRGCTXData t2789_RGCTXData[11] = 
{
	&t7572_0_0_0/* Type Usage */,
	&t8_0_0_0/* Type Usage */,
	&t2788_TI/* Class Usage */,
	&t2788_TI/* Static Usage */,
	&t2789_TI/* Class Usage */,
	&m14593_MI/* Method Usage */,
	&t8_TI/* Class Usage */,
	&m32220_MI/* Method Usage */,
	&m24644_MI/* Method Usage */,
	&m14588_MI/* Method Usage */,
	&t8_TI/* Class Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2789_0_0_0;
extern Il2CppType t2789_1_0_0;
struct t2789;
extern Il2CppGenericClass t2789_GC;
TypeInfo t2789_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2789_MIs, NULL, NULL, NULL, &t2788_TI, NULL, &t1519_TI, &t2789_TI, NULL, t2789_VT, &EmptyCustomAttributesCache, &t2789_TI, &t2789_0_0_0, &t2789_1_0_0, t2789_IOs, &t2789_GC, NULL, NULL, NULL, t2789_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2789), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Predicate`1<UnityEngine.AudioClip>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2782_m14596_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14596_GM;
MethodInfo m14596_MI = 
{
	".ctor", (methodPointerType)&m11859_gshared, &t2782_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2782_m14596_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14596_GM};
extern Il2CppType t8_0_0_0;
static ParameterInfo t2782_m14597_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14597_GM;
MethodInfo m14597_MI = 
{
	"Invoke", (methodPointerType)&m11860_gshared, &t2782_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2782_m14597_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14597_GM};
extern Il2CppType t8_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2782_m14598_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14598_GM;
MethodInfo m14598_MI = 
{
	"BeginInvoke", (methodPointerType)&m11861_gshared, &t2782_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t2782_m14598_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m14598_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2782_m14599_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14599_GM;
MethodInfo m14599_MI = 
{
	"EndInvoke", (methodPointerType)&m11862_gshared, &t2782_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2782_m14599_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14599_GM};
static MethodInfo* t2782_MIs[] =
{
	&m14596_MI,
	&m14597_MI,
	&m14598_MI,
	&m14599_MI,
	NULL
};
extern MethodInfo m14598_MI;
extern MethodInfo m14599_MI;
static MethodInfo* t2782_VT[] =
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
	&m14597_MI,
	&m14598_MI,
	&m14599_MI,
};
static Il2CppInterfaceOffsetPair t2782_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2782_1_0_0;
struct t2782;
extern Il2CppGenericClass t2782_GC;
TypeInfo t2782_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t2782_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t2782_TI, NULL, t2782_VT, &EmptyCustomAttributesCache, &t2782_TI, &t2782_0_0_0, &t2782_1_0_0, t2782_IOs, &t2782_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2782), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Action`1<UnityEngine.AudioClip>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2783_m14600_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14600_GM;
MethodInfo m14600_MI = 
{
	".ctor", (methodPointerType)&m11863_gshared, &t2783_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2783_m14600_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14600_GM};
extern Il2CppType t8_0_0_0;
static ParameterInfo t2783_m14601_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14601_GM;
MethodInfo m14601_MI = 
{
	"Invoke", (methodPointerType)&m11864_gshared, &t2783_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2783_m14601_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14601_GM};
extern Il2CppType t8_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2783_m14602_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14602_GM;
MethodInfo m14602_MI = 
{
	"BeginInvoke", (methodPointerType)&m11865_gshared, &t2783_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t2783_m14602_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m14602_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2783_m14603_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14603_GM;
MethodInfo m14603_MI = 
{
	"EndInvoke", (methodPointerType)&m11866_gshared, &t2783_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2783_m14603_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14603_GM};
static MethodInfo* t2783_MIs[] =
{
	&m14600_MI,
	&m14601_MI,
	&m14602_MI,
	&m14603_MI,
	NULL
};
extern MethodInfo m14602_MI;
extern MethodInfo m14603_MI;
static MethodInfo* t2783_VT[] =
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
	&m14601_MI,
	&m14602_MI,
	&m14603_MI,
};
static Il2CppInterfaceOffsetPair t2783_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2783_1_0_0;
struct t2783;
extern Il2CppGenericClass t2783_GC;
TypeInfo t2783_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Action`1", "System", t2783_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t2783_TI, NULL, t2783_VT, &EmptyCustomAttributesCache, &t2783_TI, &t2783_0_0_0, &t2783_1_0_0, t2783_IOs, &t2783_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2783), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif

#include "t2791.h"
extern TypeInfo t4769_TI;
extern TypeInfo t2791_TI;
#include "t2791MD.h"
extern Il2CppType t4769_0_0_0;
extern MethodInfo m14608_MI;
extern MethodInfo m32224_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.AudioClip>
extern Il2CppType t2790_0_0_49;
FieldInfo t2790_f0_FieldInfo = 
{
	"_default", &t2790_0_0_49, &t2790_TI, offsetof(t2790_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2790_FIs[] =
{
	&t2790_f0_FieldInfo,
	NULL
};
static PropertyInfo t2790____Default_PropertyInfo = 
{
	&t2790_TI, "Default", &m14607_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2790_PIs[] =
{
	&t2790____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14604_GM;
MethodInfo m14604_MI = 
{
	".ctor", (methodPointerType)&m11867_gshared, &t2790_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14604_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14605_GM;
MethodInfo m14605_MI = 
{
	".cctor", (methodPointerType)&m11868_gshared, &t2790_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14605_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2790_m14606_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14606_GM;
MethodInfo m14606_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m11869_gshared, &t2790_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t2790_m14606_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14606_GM};
extern Il2CppType t8_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t2790_m32224_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32224_GM;
MethodInfo m32224_MI = 
{
	"Compare", NULL, &t2790_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t2790_m32224_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32224_GM};
extern Il2CppType t2790_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14607_GM;
MethodInfo m14607_MI = 
{
	"get_Default", (methodPointerType)&m11870_gshared, &t2790_TI, &t2790_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14607_GM};
static MethodInfo* t2790_MIs[] =
{
	&m14604_MI,
	&m14605_MI,
	&m14606_MI,
	&m32224_MI,
	&m14607_MI,
	NULL
};
extern MethodInfo m14606_MI;
static MethodInfo* t2790_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m32224_MI,
	&m14606_MI,
	NULL,
};
extern TypeInfo t4768_TI;
static TypeInfo* t2790_ITIs[] = 
{
	&t4768_TI,
	&t991_TI,
};
static Il2CppInterfaceOffsetPair t2790_IOs[] = 
{
	{ &t4768_TI, 4},
	{ &t991_TI, 5},
};
extern TypeInfo t2790_TI;
extern TypeInfo t2790_TI;
extern TypeInfo t2791_TI;
extern TypeInfo t8_TI;
static Il2CppRGCTXData t2790_RGCTXData[8] = 
{
	&t4769_0_0_0/* Type Usage */,
	&t8_0_0_0/* Type Usage */,
	&t2790_TI/* Class Usage */,
	&t2790_TI/* Static Usage */,
	&t2791_TI/* Class Usage */,
	&m14608_MI/* Method Usage */,
	&t8_TI/* Class Usage */,
	&m32224_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2790_0_0_0;
extern Il2CppType t2790_1_0_0;
struct t2790;
extern Il2CppGenericClass t2790_GC;
TypeInfo t2790_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2790_MIs, t2790_PIs, t2790_FIs, NULL, &t5_TI, NULL, NULL, &t2790_TI, t2790_ITIs, t2790_VT, &EmptyCustomAttributesCache, &t2790_TI, &t2790_0_0_0, &t2790_1_0_0, t2790_IOs, &t2790_GC, NULL, NULL, NULL, t2790_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2790), 0, -1, sizeof(t2790_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.AudioClip>
extern Il2CppType t8_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t4768_m24652_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m24652_GM;
MethodInfo m24652_MI = 
{
	"Compare", NULL, &t4768_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t4768_m24652_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m24652_GM};
static MethodInfo* t4768_MIs[] =
{
	&m24652_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4768_0_0_0;
extern Il2CppType t4768_1_0_0;
struct t4768;
extern Il2CppGenericClass t4768_GC;
TypeInfo t4768_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t4768_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4768_TI, NULL, NULL, &EmptyCustomAttributesCache, &t4768_TI, &t4768_0_0_0, &t4768_1_0_0, NULL, &t4768_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.IComparable`1<UnityEngine.AudioClip>
extern Il2CppType t8_0_0_0;
static ParameterInfo t4769_m24653_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m24653_GM;
MethodInfo m24653_MI = 
{
	"CompareTo", NULL, &t4769_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t4769_m24653_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m24653_GM};
static MethodInfo* t4769_MIs[] =
{
	&m24653_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4769_1_0_0;
struct t4769;
extern Il2CppGenericClass t4769_GC;
TypeInfo t4769_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t4769_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4769_TI, NULL, NULL, &EmptyCustomAttributesCache, &t4769_TI, &t4769_0_0_0, &t4769_1_0_0, NULL, &t4769_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m14604_MI;
extern MethodInfo m24653_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.AudioClip>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14608_GM;
MethodInfo m14608_MI = 
{
	".ctor", (methodPointerType)&m11871_gshared, &t2791_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14608_GM};
extern Il2CppType t8_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t2791_m14609_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14609_GM;
MethodInfo m14609_MI = 
{
	"Compare", (methodPointerType)&m11872_gshared, &t2791_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t2791_m14609_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14609_GM};
static MethodInfo* t2791_MIs[] =
{
	&m14608_MI,
	&m14609_MI,
	NULL
};
extern MethodInfo m14609_MI;
static MethodInfo* t2791_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14609_MI,
	&m14606_MI,
	&m14609_MI,
};
static Il2CppInterfaceOffsetPair t2791_IOs[] = 
{
	{ &t4768_TI, 4},
	{ &t991_TI, 5},
};
extern TypeInfo t2790_TI;
extern TypeInfo t2790_TI;
extern TypeInfo t2791_TI;
extern TypeInfo t8_TI;
extern TypeInfo t8_TI;
extern TypeInfo t4769_TI;
static Il2CppRGCTXData t2791_RGCTXData[12] = 
{
	&t4769_0_0_0/* Type Usage */,
	&t8_0_0_0/* Type Usage */,
	&t2790_TI/* Class Usage */,
	&t2790_TI/* Static Usage */,
	&t2791_TI/* Class Usage */,
	&m14608_MI/* Method Usage */,
	&t8_TI/* Class Usage */,
	&m32224_MI/* Method Usage */,
	&m14604_MI/* Method Usage */,
	&t8_TI/* Class Usage */,
	&t4769_TI/* Class Usage */,
	&m24653_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2791_0_0_0;
extern Il2CppType t2791_1_0_0;
struct t2791;
extern Il2CppGenericClass t2791_GC;
TypeInfo t2791_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2791_MIs, NULL, NULL, NULL, &t2790_TI, NULL, &t1509_TI, &t2791_TI, NULL, t2791_VT, &EmptyCustomAttributesCache, &t2791_TI, &t2791_0_0_0, &t2791_1_0_0, t2791_IOs, &t2791_GC, NULL, NULL, NULL, t2791_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2791), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2784_TI;
#include "t2784MD.h"



// Metadata Definition System.Comparison`1<UnityEngine.AudioClip>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2784_m14610_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14610_GM;
MethodInfo m14610_MI = 
{
	".ctor", (methodPointerType)&m11938_gshared, &t2784_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2784_m14610_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14610_GM};
extern Il2CppType t8_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t2784_m14611_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14611_GM;
MethodInfo m14611_MI = 
{
	"Invoke", (methodPointerType)&m11939_gshared, &t2784_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t2784_m14611_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14611_GM};
extern Il2CppType t8_0_0_0;
extern Il2CppType t8_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2784_m14612_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14612_GM;
MethodInfo m14612_MI = 
{
	"BeginInvoke", (methodPointerType)&m11940_gshared, &t2784_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5_t5, t2784_m14612_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL, &m14612_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2784_m14613_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14613_GM;
MethodInfo m14613_MI = 
{
	"EndInvoke", (methodPointerType)&m11941_gshared, &t2784_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2784_m14613_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14613_GM};
static MethodInfo* t2784_MIs[] =
{
	&m14610_MI,
	&m14611_MI,
	&m14612_MI,
	&m14613_MI,
	NULL
};
extern MethodInfo m14611_MI;
extern MethodInfo m14612_MI;
extern MethodInfo m14613_MI;
static MethodInfo* t2784_VT[] =
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
	&m14611_MI,
	&m14612_MI,
	&m14613_MI,
};
static Il2CppInterfaceOffsetPair t2784_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2784_1_0_0;
struct t2784;
extern Il2CppGenericClass t2784_GC;
TypeInfo t2784_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t2784_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t2784_TI, NULL, t2784_VT, &EmptyCustomAttributesCache, &t2784_TI, &t2784_0_0_0, &t2784_1_0_0, t2784_IOs, &t2784_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2784), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t100.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t100_TI;
#include "t100MD.h"

#include "t98.h"
#include "t1511.h"
#include "t1521.h"
#include "t2795.h"
#include "t829.h"
#include "t830.h"
#include "t2797.h"
#include "t990.h"
#include "t2794.h"
#include "t2804.h"
#include "t2799.h"
#include "t2805.h"
#include "t2806.h"
extern TypeInfo t98_TI;
extern TypeInfo t2793_TI;
extern TypeInfo t1511_TI;
extern TypeInfo t1521_TI;
extern TypeInfo t2795_TI;
extern TypeInfo t2796_TI;
extern TypeInfo t2797_TI;
extern TypeInfo t4182_TI;
extern TypeInfo t990_TI;
extern TypeInfo t2794_TI;
extern TypeInfo t2804_TI;
extern TypeInfo t2799_TI;
extern TypeInfo t2805_TI;
extern TypeInfo t2806_TI;
extern TypeInfo t55_TI;
extern TypeInfo t2297_TI;
extern TypeInfo t2792_TI;
extern TypeInfo t984_TI;
#include "t1521MD.h"
#include "t2795MD.h"
#include "t2797MD.h"
#include "t2794MD.h"
#include "t2804MD.h"
#include "t2799MD.h"
#include "t2805MD.h"
#include "t2806MD.h"
#include "t984MD.h"
#include "t829MD.h"
#include "t11MD.h"
#include "t990MD.h"
extern Il2CppType t2793_0_0_0;
extern Il2CppType t2796_0_0_0;
extern Il2CppType t98_0_0_0;
extern MethodInfo m14642_MI;
extern MethodInfo m14649_MI;
extern MethodInfo m704_MI;
extern MethodInfo m14650_MI;
extern MethodInfo m14633_MI;
extern MethodInfo m32225_MI;
extern MethodInfo m32226_MI;
extern MethodInfo m7379_MI;
extern MethodInfo m14640_MI;
extern MethodInfo m14670_MI;
extern MethodInfo m14634_MI;
extern MethodInfo m702_MI;
extern MethodInfo m14646_MI;
extern MethodInfo m14655_MI;
extern MethodInfo m14657_MI;
extern MethodInfo m14651_MI;
extern MethodInfo m14639_MI;
extern MethodInfo m14636_MI;
extern MethodInfo m14653_MI;
extern MethodInfo m14705_MI;
extern MethodInfo m24682_MI;
extern MethodInfo m14637_MI;
extern MethodInfo m14709_MI;
extern MethodInfo m24684_MI;
extern MethodInfo m14689_MI;
extern MethodInfo m14713_MI;
extern MethodInfo m14723_MI;
extern MethodInfo m14635_MI;
extern MethodInfo m14632_MI;
extern MethodInfo m14654_MI;
extern MethodInfo m24685_MI;
extern MethodInfo m7558_MI;
extern MethodInfo m32221_MI;
extern MethodInfo m4776_MI;
extern MethodInfo m4789_MI;
extern MethodInfo m4788_MI;
extern MethodInfo m4777_MI;
extern MethodInfo m6830_MI;
extern MethodInfo m2409_MI;
extern MethodInfo m613_MI;
extern MethodInfo m14647_MI;
extern MethodInfo m4759_MI;
struct t100;
 void m24682 (t100 * __this, t4182* p0, int32_t p1, t2794 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t100;
 void m24684 (t100 * __this, t107 * p0, int32_t p1, t2804 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t100;
 void m24685 (t100 * __this, t2796* p0, int32_t p1, t2804 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m697_MI;
 void m697 (t100 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		m14634(__this, ((int32_t)10), (t5*)NULL, &m14634_MI);
		return;
	}
}
extern MethodInfo m14614_MI;
 void m14614 (t100 * __this, t5* p0, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		m14634(__this, ((int32_t)10), p0, &m14634_MI);
		return;
	}
}
extern MethodInfo m14615_MI;
 void m14615 (t100 * __this, int32_t p0, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		m14634(__this, p0, (t5*)NULL, &m14634_MI);
		return;
	}
}
extern MethodInfo m14616_MI;
 void m14616 (t100 * __this, t829 * p0, t830  p1, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		__this->f13 = p0;
		return;
	}
}
extern MethodInfo m14617_MI;
 t5 * m14617 (t100 * __this, t5 * p0, MethodInfo* method){
	{
		if (!((t5 *)IsInst(p0, InitializedTypeInfo(&t98_TI))))
		{
			goto IL_0029;
		}
	}
	{
		bool L_0 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(&m14642_MI, __this, ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t98_TI))))));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1 = m14649(__this, p0, &m14649_MI);
		t8 * L_2 = (t8 *)VirtFuncInvoker1< t8 *, int32_t >::Invoke(&m704_MI, __this, L_1);
		t8 * L_3 = L_2;
		return ((t8 *)L_3);
	}

IL_0029:
	{
		return NULL;
	}
}
extern MethodInfo m14618_MI;
 void m14618 (t100 * __this, t5 * p0, t5 * p1, MethodInfo* method){
	{
		int32_t L_0 = m14649(__this, p0, &m14649_MI);
		t8 * L_1 = m14650(__this, p1, &m14650_MI);
		VirtActionInvoker2< int32_t, t8 * >::Invoke(&m14633_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m14619_MI;
 void m14619 (t100 * __this, t5 * p0, t5 * p1, MethodInfo* method){
	{
		int32_t L_0 = m14649(__this, p0, &m14649_MI);
		t8 * L_1 = m14650(__this, p1, &m14650_MI);
		VirtActionInvoker2< int32_t, t8 * >::Invoke(&m702_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m14620_MI;
 void m14620 (t100 * __this, t5 * p0, MethodInfo* method){
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
		if (!((t5 *)IsInst(p0, InitializedTypeInfo(&t98_TI))))
		{
			goto IL_0023;
		}
	}
	{
		VirtFuncInvoker1< bool, int32_t >::Invoke(&m14646_MI, __this, ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t98_TI))))));
	}

IL_0023:
	{
		return;
	}
}
extern MethodInfo m14621_MI;
 bool m14621 (t100 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m14622_MI;
 t5 * m14622 (t100 * __this, MethodInfo* method){
	{
		return __this;
	}
}
extern MethodInfo m14623_MI;
 bool m14623 (t100 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m14624_MI;
 void m14624 (t100 * __this, t2797  p0, MethodInfo* method){
	{
		int32_t L_0 = m14655((&p0), &m14655_MI);
		t8 * L_1 = m14657((&p0), &m14657_MI);
		VirtActionInvoker2< int32_t, t8 * >::Invoke(&m702_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m14625_MI;
 bool m14625 (t100 * __this, t2797  p0, MethodInfo* method){
	{
		bool L_0 = m14651(__this, p0, &m14651_MI);
		return L_0;
	}
}
extern MethodInfo m14626_MI;
 void m14626 (t100 * __this, t2796* p0, int32_t p1, MethodInfo* method){
	{
		m14639(__this, p0, p1, &m14639_MI);
		return;
	}
}
extern MethodInfo m14627_MI;
 bool m14627 (t100 * __this, t2797  p0, MethodInfo* method){
	{
		bool L_0 = m14651(__this, p0, &m14651_MI);
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
		int32_t L_1 = m14655((&p0), &m14655_MI);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(&m14646_MI, __this, L_1);
		return L_2;
	}
}
extern MethodInfo m14628_MI;
 void m14628 (t100 * __this, t107 * p0, int32_t p1, MethodInfo* method){
	t2796* V_0 = {0};
	t4182* V_1 = {0};
	int32_t G_B5_0 = 0;
	t4182* G_B5_1 = {0};
	t100 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t4182* G_B4_1 = {0};
	t100 * G_B4_2 = {0};
	{
		V_0 = ((t2796*)IsInst(p0, InitializedTypeInfo(&t2796_TI)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		m14639(__this, V_0, p1, &m14639_MI);
		return;
	}

IL_0013:
	{
		m14636(__this, p0, p1, &m14636_MI);
		V_1 = ((t4182*)IsInst(p0, InitializedTypeInfo(&t4182_TI)));
		if (!V_1)
		{
			goto IL_004b;
		}
	}
	{
		G_B4_0 = p1;
		G_B4_1 = V_1;
		G_B4_2 = ((t100 *)(__this));
		if ((((t100_SFs*)InitializedTypeInfo(&t100_TI)->static_fields)->f15))
		{
			G_B5_0 = p1;
			G_B5_1 = V_1;
			G_B5_2 = ((t100 *)(__this));
			goto IL_0040;
		}
	}
	{
		t124 L_0 = { &m14653_MI };
		t2794 * L_1 = (t2794 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2794_TI));
		m14705(L_1, NULL, L_0, &m14705_MI);
		((t100_SFs*)InitializedTypeInfo(&t100_TI)->static_fields)->f15 = L_1;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((t100 *)(G_B4_2));
	}

IL_0040:
	{
		m24682(G_B5_2, G_B5_1, G_B5_0, (((t100_SFs*)InitializedTypeInfo(&t100_TI)->static_fields)->f15), &m24682_MI);
		return;
	}

IL_004b:
	{
		t124 L_2 = { &m14637_MI };
		t2804 * L_3 = (t2804 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2804_TI));
		m14709(L_3, NULL, L_2, &m14709_MI);
		m24684(__this, p0, p1, L_3, &m24684_MI);
		return;
	}
}
extern MethodInfo m14629_MI;
 t5 * m14629 (t100 * __this, MethodInfo* method){
	{
		t2799  L_0 = {0};
		m14689(&L_0, __this, &m14689_MI);
		t2799  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t2799_TI), &L_1);
		return (t5 *)L_2;
	}
}
extern MethodInfo m14630_MI;
 t5* m14630 (t100 * __this, MethodInfo* method){
	{
		t2799  L_0 = {0};
		m14689(&L_0, __this, &m14689_MI);
		t2799  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t2799_TI), &L_1);
		return (t5*)L_2;
	}
}
extern MethodInfo m14631_MI;
 t5 * m14631 (t100 * __this, MethodInfo* method){
	{
		t2805 * L_0 = (t2805 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2805_TI));
		m14713(L_0, __this, &m14713_MI);
		return L_0;
	}
}
 int32_t m14632 (t100 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f10);
		return L_0;
	}
}
 t8 * m704 (t100 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t98_TI), &L_0);
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
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m32225_MI, L_3, p0);
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
		t2792* L_11 = (__this->f6);
		int32_t L_12 = V_1;
		bool L_13 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m32226_MI, L_10, (*(int32_t*)(int32_t*)SZArrayLdElema(L_11, L_12)), p0);
		if (!L_13)
		{
			goto IL_007d;
		}
	}
	{
		t2777* L_14 = (__this->f7);
		int32_t L_15 = V_1;
		return (*(t8 **)(t8 **)SZArrayLdElema(L_14, L_15));
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
 void m14633 (t100 * __this, int32_t p0, t8 * p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t98_TI), &L_0);
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
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m32225_MI, L_3, p0);
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
		t2792* L_11 = (__this->f6);
		int32_t L_12 = V_2;
		bool L_13 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m32226_MI, L_10, (*(int32_t*)(int32_t*)SZArrayLdElema(L_11, L_12)), p0);
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
		m14640(__this, &m14640_MI);
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
		t2792* L_30 = (__this->f6);
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
		t2777* L_38 = (__this->f7);
		*((t8 **)(t8 **)SZArrayLdElema(L_38, V_2)) = (t8 *)p1;
		int32_t L_39 = (__this->f14);
		__this->f14 = ((int32_t)(L_39+1));
		return;
	}
}
 void m14634 (t100 * __this, int32_t p0, t5* p1, MethodInfo* method){
	t5* V_0 = {0};
	t100 * G_B4_0 = {0};
	t100 * G_B3_0 = {0};
	t5* G_B5_0 = {0};
	t100 * G_B5_1 = {0};
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
		G_B3_0 = ((t100 *)(__this));
		if (!p1)
		{
			G_B4_0 = ((t100 *)(__this));
			goto IL_0018;
		}
	}
	{
		V_0 = p1;
		G_B5_0 = V_0;
		G_B5_1 = ((t100 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2806_TI));
		t2806 * L_1 = m14723(NULL, &m14723_MI);
		G_B5_0 = ((t5*)(L_1));
		G_B5_1 = ((t100 *)(G_B4_0));
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
		m14635(__this, p0, &m14635_MI);
		__this->f14 = 0;
		return;
	}
}
 void m14635 (t100 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f4 = ((t55*)SZArrayNew(InitializedTypeInfo(&t55_TI), p0));
		__this->f5 = ((t2297*)SZArrayNew(InitializedTypeInfo(&t2297_TI), p0));
		__this->f9 = (-1);
		__this->f6 = ((t2792*)SZArrayNew(InitializedTypeInfo(&t2792_TI), p0));
		__this->f7 = ((t2777*)SZArrayNew(InitializedTypeInfo(&t2777_TI), p0));
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
 void m14636 (t100 * __this, t107 * p0, int32_t p1, MethodInfo* method){
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
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m14632_MI, __this);
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
 t2797  m14637 (t5 * __this, int32_t p0, t8 * p1, MethodInfo* method){
	{
		t2797  L_0 = {0};
		m14654(&L_0, p0, p1, &m14654_MI);
		return L_0;
	}
}
extern MethodInfo m14638_MI;
 t8 * m14638 (t5 * __this, int32_t p0, t8 * p1, MethodInfo* method){
	{
		return p1;
	}
}
 void m14639 (t100 * __this, t2796* p0, int32_t p1, MethodInfo* method){
	{
		m14636(__this, (t107 *)(t107 *)p0, p1, &m14636_MI);
		t124 L_0 = { &m14637_MI };
		t2804 * L_1 = (t2804 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2804_TI));
		m14709(L_1, NULL, L_0, &m14709_MI);
		m24685(__this, p0, p1, L_1, &m24685_MI);
		return;
	}
}
 void m14640 (t100 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	t55* V_1 = {0};
	t2297* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t2792* V_7 = {0};
	t2777* V_8 = {0};
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
		t2792* L_5 = (__this->f6);
		int32_t L_6 = V_4;
		int32_t L_7 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m32225_MI, L_4, (*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_6)));
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
		V_7 = ((t2792*)SZArrayNew(InitializedTypeInfo(&t2792_TI), V_0));
		V_8 = ((t2777*)SZArrayNew(InitializedTypeInfo(&t2777_TI), V_0));
		t2792* L_13 = (__this->f6);
		int32_t L_14 = (__this->f8);
		m6741(NULL, (t107 *)(t107 *)L_13, 0, (t107 *)(t107 *)V_7, 0, L_14, &m6741_MI);
		t2777* L_15 = (__this->f7);
		int32_t L_16 = (__this->f8);
		m6741(NULL, (t107 *)(t107 *)L_15, 0, (t107 *)(t107 *)V_8, 0, L_16, &m6741_MI);
		__this->f6 = V_7;
		__this->f7 = V_8;
		__this->f11 = (((int32_t)((float)((float)(((float)V_0))*(float)(0.9f)))));
		return;
	}
}
 void m702 (t100 * __this, int32_t p0, t8 * p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t98_TI), &L_0);
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
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m32225_MI, L_3, p0);
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
		t2792* L_11 = (__this->f6);
		int32_t L_12 = V_2;
		bool L_13 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m32226_MI, L_10, (*(int32_t*)(int32_t*)SZArrayLdElema(L_11, L_12)), p0);
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
		m14640(__this, &m14640_MI);
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
		t2792* L_31 = (__this->f6);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_31, V_2)) = (int32_t)p0;
		t2777* L_32 = (__this->f7);
		*((t8 **)(t8 **)SZArrayLdElema(L_32, V_2)) = (t8 *)p1;
		int32_t L_33 = (__this->f14);
		__this->f14 = ((int32_t)(L_33+1));
		return;
	}
}
extern MethodInfo m14641_MI;
 void m14641 (t100 * __this, MethodInfo* method){
	{
		__this->f10 = 0;
		t55* L_0 = (__this->f4);
		t55* L_1 = (__this->f4);
		m5904(NULL, (t107 *)(t107 *)L_0, 0, (((int32_t)(((t107 *)L_1)->max_length))), &m5904_MI);
		t2792* L_2 = (__this->f6);
		t2792* L_3 = (__this->f6);
		m5904(NULL, (t107 *)(t107 *)L_2, 0, (((int32_t)(((t107 *)L_3)->max_length))), &m5904_MI);
		t2777* L_4 = (__this->f7);
		t2777* L_5 = (__this->f7);
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
 bool m14642 (t100 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t98_TI), &L_0);
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
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m32225_MI, L_3, p0);
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
		t2792* L_11 = (__this->f6);
		int32_t L_12 = V_1;
		bool L_13 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m32226_MI, L_10, (*(int32_t*)(int32_t*)SZArrayLdElema(L_11, L_12)), p0);
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
extern MethodInfo m14643_MI;
 bool m14643 (t100 * __this, t8 * p0, MethodInfo* method){
	t5* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2788_TI));
		t2788 * L_0 = m14592(NULL, &m14592_MI);
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
		t2777* L_3 = (__this->f7);
		int32_t L_4 = V_2;
		bool L_5 = (bool)InterfaceFuncInvoker2< bool, t8 *, t8 * >::Invoke(&m32221_MI, V_0, (*(t8 **)(t8 **)SZArrayLdElema(L_3, L_4)), p0);
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
extern MethodInfo m14644_MI;
 void m14644 (t100 * __this, t829 * p0, t830  p1, MethodInfo* method){
	t2796* V_0 = {0};
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
		V_0 = (t2796*)NULL;
		int32_t L_3 = (__this->f10);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_4 = (__this->f10);
		V_0 = ((t2796*)SZArrayNew(InitializedTypeInfo(&t2796_TI), L_4));
		m14639(__this, V_0, 0, &m14639_MI);
	}

IL_004f:
	{
		t55* L_5 = (__this->f4);
		m4776(p0, (t11*) &_stringLiteral1211, (((int32_t)(((t107 *)L_5)->max_length))), &m4776_MI);
		m4789(p0, (t11*) &_stringLiteral1212, (t5 *)(t5 *)V_0, &m4789_MI);
		return;
	}
}
extern MethodInfo m14645_MI;
 void m14645 (t100 * __this, t5 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	t2796* V_1 = {0};
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
		t114 * L_4 = m532(NULL, LoadTypeToken(&t2793_0_0_0), &m532_MI);
		t5 * L_5 = m4777(L_3, (t11*) &_stringLiteral251, L_4, &m4777_MI);
		__this->f12 = ((t5*)Castclass(L_5, InitializedTypeInfo(&t2793_TI)));
		t829 * L_6 = (__this->f13);
		int32_t L_7 = m4788(L_6, (t11*) &_stringLiteral1211, &m4788_MI);
		V_0 = L_7;
		t829 * L_8 = (__this->f13);
		t114 * L_9 = m532(NULL, LoadTypeToken(&t2796_0_0_0), &m532_MI);
		t5 * L_10 = m4777(L_8, (t11*) &_stringLiteral1212, L_9, &m4777_MI);
		V_1 = ((t2796*)Castclass(L_10, InitializedTypeInfo(&t2796_TI)));
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
		m14635(__this, V_0, &m14635_MI);
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
		int32_t L_11 = m14655(((t2797 *)(t2797 *)SZArrayLdElema(V_1, V_2)), &m14655_MI);
		t8 * L_12 = m14657(((t2797 *)(t2797 *)SZArrayLdElema(V_1, V_2)), &m14657_MI);
		VirtActionInvoker2< int32_t, t8 * >::Invoke(&m702_MI, __this, L_11, L_12);
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
 bool m14646 (t100 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = {0};
	t8 * V_5 = {0};
	{
		int32_t L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t98_TI), &L_0);
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
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m32225_MI, L_3, p0);
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
		t2792* L_11 = (__this->f6);
		int32_t L_12 = V_2;
		bool L_13 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m32226_MI, L_10, (*(int32_t*)(int32_t*)SZArrayLdElema(L_11, L_12)), p0);
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
		t2792* L_26 = (__this->f6);
		Initobj (&t98_TI, (&V_4));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_26, V_2)) = (int32_t)V_4;
		t2777* L_27 = (__this->f7);
		Initobj (&t8_TI, (&V_5));
		*((t8 **)(t8 **)SZArrayLdElema(L_27, V_2)) = (t8 *)V_5;
		int32_t L_28 = (__this->f14);
		__this->f14 = ((int32_t)(L_28+1));
		return 1;
	}
}
 bool m14647 (t100 * __this, int32_t p0, t8 ** p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t8 * V_2 = {0};
	{
		int32_t L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t98_TI), &L_0);
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
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m32225_MI, L_3, p0);
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
		t2792* L_11 = (__this->f6);
		int32_t L_12 = V_1;
		bool L_13 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m32226_MI, L_10, (*(int32_t*)(int32_t*)SZArrayLdElema(L_11, L_12)), p0);
		if (!L_13)
		{
			goto IL_0084;
		}
	}
	{
		t2777* L_14 = (__this->f7);
		int32_t L_15 = V_1;
		*p1 = (*(t8 **)(t8 **)SZArrayLdElema(L_14, L_15));
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
		Initobj (&t8_TI, (&V_2));
		*p1 = V_2;
		return 0;
	}
}
extern MethodInfo m14648_MI;
 t2795 * m14648 (t100 * __this, MethodInfo* method){
	{
		t2795 * L_0 = (t2795 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2795_TI));
		m14670(L_0, __this, &m14670_MI);
		return L_0;
	}
}
 int32_t m14649 (t100 * __this, t5 * p0, MethodInfo* method){
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
		if (((t5 *)IsInst(p0, InitializedTypeInfo(&t98_TI))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_1 = m532(NULL, LoadTypeToken(&t98_0_0_0), &m532_MI);
		t11* L_2 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m6830_MI, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_3 = m2409(NULL, (t11*) &_stringLiteral1213, L_2, &m2409_MI);
		t160 * L_4 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m613(L_4, L_3, (t11*) &_stringLiteral238, &m613_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_003a:
	{
		return ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t98_TI)))));
	}
}
 t8 * m14650 (t100 * __this, t5 * p0, MethodInfo* method){
	t8 * V_0 = {0};
	{
		if (p0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_0 = m532(NULL, LoadTypeToken(&t8_0_0_0), &m532_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6793_MI, L_0);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (&t8_TI, (&V_0));
		return V_0;
	}

IL_001e:
	{
		if (((t8 *)IsInst(p0, InitializedTypeInfo(&t8_TI))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_2 = m532(NULL, LoadTypeToken(&t8_0_0_0), &m532_MI);
		t11* L_3 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m6830_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_4 = m2409(NULL, (t11*) &_stringLiteral1213, L_3, &m2409_MI);
		t160 * L_5 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m613(L_5, L_4, (t11*) &_stringLiteral442, &m613_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_004a:
	{
		return ((t8 *)Castclass(p0, InitializedTypeInfo(&t8_TI)));
	}
}
 bool m14651 (t100 * __this, t2797  p0, MethodInfo* method){
	t8 * V_0 = {0};
	{
		int32_t L_0 = m14655((&p0), &m14655_MI);
		bool L_1 = (bool)VirtFuncInvoker2< bool, int32_t, t8 ** >::Invoke(&m14647_MI, __this, L_0, (&V_0));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2788_TI));
		t2788 * L_2 = m14592(NULL, &m14592_MI);
		t8 * L_3 = m14657((&p0), &m14657_MI);
		bool L_4 = (bool)VirtFuncInvoker2< bool, t8 *, t8 * >::Invoke(&m24644_MI, L_2, L_3, V_0);
		return L_4;
	}
}
extern MethodInfo m14652_MI;
 t2799  m14652 (t100 * __this, MethodInfo* method){
	{
		t2799  L_0 = {0};
		m14689(&L_0, __this, &m14689_MI);
		return L_0;
	}
}
 t990  m14653 (t5 * __this, int32_t p0, t8 * p1, MethodInfo* method){
	{
		int32_t L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t98_TI), &L_0);
		t8 * L_2 = p1;
		t990  L_3 = {0};
		m4759(&L_3, L_1, ((t8 *)L_2), &m4759_MI);
		return L_3;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2<SoundEffects/AudioClipType,UnityEngine.AudioClip>
extern Il2CppType t110_0_0_32849;
FieldInfo t100_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t110_0_0_32849, &t100_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t116_0_0_32849;
FieldInfo t100_f1_FieldInfo = 
{
	"DEFAULT_LOAD_FACTOR", &t116_0_0_32849, &t100_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_32849;
FieldInfo t100_f2_FieldInfo = 
{
	"NO_SLOT", &t110_0_0_32849, &t100_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_32849;
FieldInfo t100_f3_FieldInfo = 
{
	"HASH_FLAG", &t110_0_0_32849, &t100_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t55_0_0_1;
FieldInfo t100_f4_FieldInfo = 
{
	"table", &t55_0_0_1, &t100_TI, offsetof(t100, f4), &EmptyCustomAttributesCache};
extern Il2CppType t2297_0_0_1;
FieldInfo t100_f5_FieldInfo = 
{
	"linkSlots", &t2297_0_0_1, &t100_TI, offsetof(t100, f5), &EmptyCustomAttributesCache};
extern Il2CppType t2792_0_0_1;
FieldInfo t100_f6_FieldInfo = 
{
	"keySlots", &t2792_0_0_1, &t100_TI, offsetof(t100, f6), &EmptyCustomAttributesCache};
extern Il2CppType t2777_0_0_1;
FieldInfo t100_f7_FieldInfo = 
{
	"valueSlots", &t2777_0_0_1, &t100_TI, offsetof(t100, f7), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t100_f8_FieldInfo = 
{
	"touchedSlots", &t110_0_0_1, &t100_TI, offsetof(t100, f8), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t100_f9_FieldInfo = 
{
	"emptySlot", &t110_0_0_1, &t100_TI, offsetof(t100, f9), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t100_f10_FieldInfo = 
{
	"count", &t110_0_0_1, &t100_TI, offsetof(t100, f10), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t100_f11_FieldInfo = 
{
	"threshold", &t110_0_0_1, &t100_TI, offsetof(t100, f11), &EmptyCustomAttributesCache};
extern Il2CppType t2793_0_0_1;
FieldInfo t100_f12_FieldInfo = 
{
	"hcp", &t2793_0_0_1, &t100_TI, offsetof(t100, f12), &EmptyCustomAttributesCache};
extern Il2CppType t829_0_0_1;
FieldInfo t100_f13_FieldInfo = 
{
	"serialization_info", &t829_0_0_1, &t100_TI, offsetof(t100, f13), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t100_f14_FieldInfo = 
{
	"generation", &t110_0_0_1, &t100_TI, offsetof(t100, f14), &EmptyCustomAttributesCache};
extern Il2CppType t2794_0_0_17;
extern CustomAttributesCache t1517__CustomAttributeCache_U3CU3Ef__am$cacheB;
FieldInfo t100_f15_FieldInfo = 
{
	"<>f__am$cacheB", &t2794_0_0_17, &t100_TI, offsetof(t100_SFs, f15), &t1517__CustomAttributeCache_U3CU3Ef__am$cacheB};
static FieldInfo* t100_FIs[] =
{
	&t100_f0_FieldInfo,
	&t100_f1_FieldInfo,
	&t100_f2_FieldInfo,
	&t100_f3_FieldInfo,
	&t100_f4_FieldInfo,
	&t100_f5_FieldInfo,
	&t100_f6_FieldInfo,
	&t100_f7_FieldInfo,
	&t100_f8_FieldInfo,
	&t100_f9_FieldInfo,
	&t100_f10_FieldInfo,
	&t100_f11_FieldInfo,
	&t100_f12_FieldInfo,
	&t100_f13_FieldInfo,
	&t100_f14_FieldInfo,
	&t100_f15_FieldInfo,
	NULL
};
static const int32_t t100_f0_DefaultValueData = 10;
static Il2CppFieldDefaultValueEntry t100_f0_DefaultValue = 
{
	&t100_f0_FieldInfo, { (char*)&t100_f0_DefaultValueData, &t110_0_0_0 }};
static const float t100_f1_DefaultValueData = 0.9f;
extern Il2CppType t116_0_0_0;
static Il2CppFieldDefaultValueEntry t100_f1_DefaultValue = 
{
	&t100_f1_FieldInfo, { (char*)&t100_f1_DefaultValueData, &t116_0_0_0 }};
static const int32_t t100_f2_DefaultValueData = -1;
static Il2CppFieldDefaultValueEntry t100_f2_DefaultValue = 
{
	&t100_f2_FieldInfo, { (char*)&t100_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t100_f3_DefaultValueData = -2147483648;
static Il2CppFieldDefaultValueEntry t100_f3_DefaultValue = 
{
	&t100_f3_FieldInfo, { (char*)&t100_f3_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t100_FDVs[] = 
{
	&t100_f0_DefaultValue,
	&t100_f1_DefaultValue,
	&t100_f2_DefaultValue,
	&t100_f3_DefaultValue,
	NULL
};
static PropertyInfo t100____System_Collections_IDictionary_Item_PropertyInfo = 
{
	&t100_TI, "System.Collections.IDictionary.Item", &m14617_MI, &m14618_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t100____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t100_TI, "System.Collections.ICollection.IsSynchronized", &m14621_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t100____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t100_TI, "System.Collections.ICollection.SyncRoot", &m14622_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t100____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo = 
{
	&t100_TI, "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.IsReadOnly", &m14623_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t100____Count_PropertyInfo = 
{
	&t100_TI, "Count", &m14632_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t100____Item_PropertyInfo = 
{
	&t100_TI, "Item", &m704_MI, &m14633_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t100____Values_PropertyInfo = 
{
	&t100_TI, "Values", &m14648_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t100_PIs[] =
{
	&t100____System_Collections_IDictionary_Item_PropertyInfo,
	&t100____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t100____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t100____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo,
	&t100____Count_PropertyInfo,
	&t100____Item_PropertyInfo,
	&t100____Values_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m697_GM;
MethodInfo m697_MI = 
{
	".ctor", (methodPointerType)&m697, &t100_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m697_GM};
extern Il2CppType t2793_0_0_0;
static ParameterInfo t100_m14614_ParameterInfos[] = 
{
	{"comparer", 0, 134217728, &EmptyCustomAttributesCache, &t2793_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14614_GM;
MethodInfo m14614_MI = 
{
	".ctor", (methodPointerType)&m14614, &t100_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t100_m14614_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14614_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t100_m14615_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14615_GM;
MethodInfo m14615_MI = 
{
	".ctor", (methodPointerType)&m14615, &t100_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t100_m14615_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14615_GM};
extern Il2CppType t829_0_0_0;
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t100_m14616_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14616_GM;
MethodInfo m14616_MI = 
{
	".ctor", (methodPointerType)&m14616, &t100_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t100_m14616_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14616_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t100_m14617_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14617_GM;
MethodInfo m14617_MI = 
{
	"System.Collections.IDictionary.get_Item", (methodPointerType)&m14617, &t100_TI, &t5_0_0_0, RuntimeInvoker_t5_t5, t100_m14617_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14617_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t100_m14618_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14618_GM;
MethodInfo m14618_MI = 
{
	"System.Collections.IDictionary.set_Item", (methodPointerType)&m14618, &t100_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t100_m14618_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 20, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14618_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t100_m14619_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14619_GM;
MethodInfo m14619_MI = 
{
	"System.Collections.IDictionary.Add", (methodPointerType)&m14619, &t100_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t100_m14619_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 21, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14619_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t100_m14620_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14620_GM;
MethodInfo m14620_MI = 
{
	"System.Collections.IDictionary.Remove", (methodPointerType)&m14620, &t100_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t100_m14620_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 23, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14620_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14621_GM;
MethodInfo m14621_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m14621, &t100_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14621_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14622_GM;
MethodInfo m14622_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m14622, &t100_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14622_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14623_GM;
MethodInfo m14623_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly", (methodPointerType)&m14623, &t100_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 11, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14623_GM};
extern Il2CppType t2797_0_0_0;
extern Il2CppType t2797_0_0_0;
static ParameterInfo t100_m14624_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t2797_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t2797 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14624_GM;
MethodInfo m14624_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add", (methodPointerType)&m14624, &t100_TI, &t109_0_0_0, RuntimeInvoker_t109_t2797, t100_m14624_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14624_GM};
extern Il2CppType t2797_0_0_0;
static ParameterInfo t100_m14625_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t2797_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t2797 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14625_GM;
MethodInfo m14625_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains", (methodPointerType)&m14625, &t100_TI, &t108_0_0_0, RuntimeInvoker_t108_t2797, t100_m14625_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 14, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14625_GM};
extern Il2CppType t2796_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t100_m14626_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2796_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14626_GM;
MethodInfo m14626_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo", (methodPointerType)&m14626, &t100_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t100_m14626_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14626_GM};
extern Il2CppType t2797_0_0_0;
static ParameterInfo t100_m14627_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t2797_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t2797 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14627_GM;
MethodInfo m14627_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove", (methodPointerType)&m14627, &t100_TI, &t108_0_0_0, RuntimeInvoker_t108_t2797, t100_m14627_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14627_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t100_m14628_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14628_GM;
MethodInfo m14628_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m14628, &t100_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t100_m14628_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14628_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14629_GM;
MethodInfo m14629_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m14629, &t100_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14629_GM};
extern Il2CppType t2798_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14630_GM;
MethodInfo m14630_MI = 
{
	"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator", (methodPointerType)&m14630, &t100_TI, &t2798_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 17, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14630_GM};
extern Il2CppType t987_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14631_GM;
MethodInfo m14631_MI = 
{
	"System.Collections.IDictionary.GetEnumerator", (methodPointerType)&m14631, &t100_TI, &t987_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 22, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14631_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14632_GM;
MethodInfo m14632_MI = 
{
	"get_Count", (methodPointerType)&m14632, &t100_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14632_GM};
extern Il2CppType t98_0_0_0;
static ParameterInfo t100_m704_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern Il2CppType t8_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m704_GM;
MethodInfo m704_MI = 
{
	"get_Item", (methodPointerType)&m704, &t100_TI, &t8_0_0_0, RuntimeInvoker_t5_t110, t100_m704_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 25, 1, false, true, 0, NULL, (methodPointerType)NULL, &m704_GM};
extern Il2CppType t98_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t100_m14633_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14633_GM;
MethodInfo m14633_MI = 
{
	"set_Item", (methodPointerType)&m14633, &t100_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t100_m14633_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 26, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14633_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2793_0_0_0;
static ParameterInfo t100_m14634_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"hcp", 1, 134217728, &EmptyCustomAttributesCache, &t2793_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14634_GM;
MethodInfo m14634_MI = 
{
	"Init", (methodPointerType)&m14634, &t100_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t100_m14634_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14634_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t100_m14635_ParameterInfos[] = 
{
	{"size", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14635_GM;
MethodInfo m14635_MI = 
{
	"InitArrays", (methodPointerType)&m14635, &t100_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t100_m14635_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14635_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t100_m14636_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14636_GM;
MethodInfo m14636_MI = 
{
	"CopyToCheck", (methodPointerType)&m14636, &t100_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t100_m14636_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14636_GM};
extern Il2CppType t2289_0_0_0;
extern Il2CppType t2289_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t7574_0_0_0;
extern Il2CppType t7574_0_0_0;
static ParameterInfo t100_m32227_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2289_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"transform", 2, 134217728, &EmptyCustomAttributesCache, &t7574_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericContainer m32227_IGC;
extern TypeInfo m32227_gp_TRet_0_TI;
Il2CppGenericParamFull m32227_gp_TRet_0_TI_GenericParamFull = { { &m32227_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
extern TypeInfo m32227_gp_TElem_1_TI;
Il2CppGenericParamFull m32227_gp_TElem_1_TI_GenericParamFull = { { &m32227_IGC, 1}, {NULL, "TElem", 0, 0, NULL} };
static Il2CppGenericParamFull* m32227_IGPA[2] = 
{
	&m32227_gp_TRet_0_TI_GenericParamFull,
	&m32227_gp_TElem_1_TI_GenericParamFull,
};
extern MethodInfo m32227_MI;
Il2CppGenericContainer m32227_IGC = { { NULL, NULL }, NULL, &m32227_MI, 2, 1, m32227_IGPA };
extern Il2CppGenericMethod m32228_GM;
extern Il2CppType m11290_gp_0_0_0_0;
extern Il2CppType m11290_gp_1_0_0_0;
static Il2CppRGCTXDefinition m32227_RGCTXData[4] = 
{
	{ IL2CPP_RGCTX_DATA_METHOD, &m32228_GM }/* Method Definition */,
	{ IL2CPP_RGCTX_DATA_CLASS, &m11290_gp_0_0_0_0 }/* Class Definition */,
	{ IL2CPP_RGCTX_DATA_CLASS, &m11290_gp_1_0_0_0 }/* Class Definition */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
extern Il2CppGenericMethod m32227_GM;
MethodInfo m32227_MI = 
{
	"Do_CopyTo", NULL, &t100_TI, &t109_0_0_0, NULL, t100_m32227_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, true, true, 0, m32227_RGCTXData, (methodPointerType)NULL, &m32227_GM};
extern Il2CppType t98_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t100_m14637_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t2797_0_0_0;
extern void* RuntimeInvoker_t2797_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14637_GM;
MethodInfo m14637_MI = 
{
	"make_pair", (methodPointerType)&m14637, &t100_TI, &t2797_0_0_0, RuntimeInvoker_t2797_t110_t5, t100_m14637_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14637_GM};
extern Il2CppType t98_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t100_m14638_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t8_0_0_0;
extern void* RuntimeInvoker_t5_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14638_GM;
MethodInfo m14638_MI = 
{
	"pick_value", (methodPointerType)&m14638, &t100_TI, &t8_0_0_0, RuntimeInvoker_t5_t110_t5, t100_m14638_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14638_GM};
extern Il2CppType t2796_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t100_m14639_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2796_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14639_GM;
MethodInfo m14639_MI = 
{
	"CopyTo", (methodPointerType)&m14639, &t100_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t100_m14639_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14639_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t7577_0_0_0;
extern Il2CppType t7577_0_0_0;
static ParameterInfo t100_m32229_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"transform", 2, 134217728, &EmptyCustomAttributesCache, &t7577_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericContainer m32229_IGC;
extern TypeInfo m32229_gp_TRet_0_TI;
Il2CppGenericParamFull m32229_gp_TRet_0_TI_GenericParamFull = { { &m32229_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
static Il2CppGenericParamFull* m32229_IGPA[1] = 
{
	&m32229_gp_TRet_0_TI_GenericParamFull,
};
extern MethodInfo m32229_MI;
Il2CppGenericContainer m32229_IGC = { { NULL, NULL }, NULL, &m32229_MI, 1, 1, m32229_IGPA };
extern Il2CppType m11295_gp_0_0_0_0;
extern Il2CppGenericMethod m32230_GM;
static Il2CppRGCTXDefinition m32229_RGCTXData[3] = 
{
	{ IL2CPP_RGCTX_DATA_TYPE, &m11295_gp_0_0_0_0 }/* Type Definition */,
	{ IL2CPP_RGCTX_DATA_METHOD, &m32230_GM }/* Method Definition */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
extern Il2CppGenericMethod m32229_GM;
MethodInfo m32229_MI = 
{
	"Do_ICollectionCopyTo", NULL, &t100_TI, &t109_0_0_0, NULL, t100_m32229_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, true, true, 0, m32229_RGCTXData, (methodPointerType)NULL, &m32229_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14640_GM;
MethodInfo m14640_MI = 
{
	"Resize", (methodPointerType)&m14640, &t100_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14640_GM};
extern Il2CppType t98_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t100_m702_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m702_GM;
MethodInfo m702_MI = 
{
	"Add", (methodPointerType)&m702, &t100_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t100_m702_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 2, false, true, 0, NULL, (methodPointerType)NULL, &m702_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14641_GM;
MethodInfo m14641_MI = 
{
	"Clear", (methodPointerType)&m14641, &t100_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 13, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14641_GM};
extern Il2CppType t98_0_0_0;
static ParameterInfo t100_m14642_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14642_GM;
MethodInfo m14642_MI = 
{
	"ContainsKey", (methodPointerType)&m14642, &t100_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t100_m14642_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14642_GM};
extern Il2CppType t8_0_0_0;
static ParameterInfo t100_m14643_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14643_GM;
MethodInfo m14643_MI = 
{
	"ContainsValue", (methodPointerType)&m14643, &t100_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t100_m14643_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14643_GM};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t100_m14644_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14644_GM;
MethodInfo m14644_MI = 
{
	"GetObjectData", (methodPointerType)&m14644, &t100_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t100_m14644_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14644_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t100_m14645_ParameterInfos[] = 
{
	{"sender", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14645_GM;
MethodInfo m14645_MI = 
{
	"OnDeserialization", (methodPointerType)&m14645, &t100_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t100_m14645_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14645_GM};
extern Il2CppType t98_0_0_0;
static ParameterInfo t100_m14646_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14646_GM;
MethodInfo m14646_MI = 
{
	"Remove", (methodPointerType)&m14646, &t100_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t100_m14646_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14646_GM};
extern Il2CppType t98_0_0_0;
extern Il2CppType t8_1_0_2;
extern Il2CppType t8_1_0_0;
static ParameterInfo t100_m14647_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t8_1_0_2},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110_t4766 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14647_GM;
MethodInfo m14647_MI = 
{
	"TryGetValue", (methodPointerType)&m14647, &t100_TI, &t108_0_0_0, RuntimeInvoker_t108_t110_t4766, t100_m14647_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14647_GM};
extern Il2CppType t2795_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14648_GM;
MethodInfo m14648_MI = 
{
	"get_Values", (methodPointerType)&m14648, &t100_TI, &t2795_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14648_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t100_m14649_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t98_0_0_0;
extern void* RuntimeInvoker_t98_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14649_GM;
MethodInfo m14649_MI = 
{
	"ToTKey", (methodPointerType)&m14649, &t100_TI, &t98_0_0_0, RuntimeInvoker_t98_t5, t100_m14649_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14649_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t100_m14650_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t8_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14650_GM;
MethodInfo m14650_MI = 
{
	"ToTValue", (methodPointerType)&m14650, &t100_TI, &t8_0_0_0, RuntimeInvoker_t5_t5, t100_m14650_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14650_GM};
extern Il2CppType t2797_0_0_0;
static ParameterInfo t100_m14651_ParameterInfos[] = 
{
	{"pair", 0, 134217728, &EmptyCustomAttributesCache, &t2797_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t2797 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14651_GM;
MethodInfo m14651_MI = 
{
	"ContainsKeyValuePair", (methodPointerType)&m14651, &t100_TI, &t108_0_0_0, RuntimeInvoker_t108_t2797, t100_m14651_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14651_GM};
extern Il2CppType t2799_0_0_0;
extern void* RuntimeInvoker_t2799 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14652_GM;
MethodInfo m14652_MI = 
{
	"GetEnumerator", (methodPointerType)&m14652, &t100_TI, &t2799_0_0_0, RuntimeInvoker_t2799, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14652_GM};
extern Il2CppType t98_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t100_m14653_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t990_0_0_0;
extern void* RuntimeInvoker_t990_t110_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1517__CustomAttributeCache_m11311;
extern Il2CppGenericMethod m14653_GM;
MethodInfo m14653_MI = 
{
	"<CopyTo>m__0", (methodPointerType)&m14653, &t100_TI, &t990_0_0_0, RuntimeInvoker_t990_t110_t5, t100_m14653_ParameterInfos, &t1517__CustomAttributeCache_m11311, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14653_GM};
static MethodInfo* t100_MIs[] =
{
	&m697_MI,
	&m14614_MI,
	&m14615_MI,
	&m14616_MI,
	&m14617_MI,
	&m14618_MI,
	&m14619_MI,
	&m14620_MI,
	&m14621_MI,
	&m14622_MI,
	&m14623_MI,
	&m14624_MI,
	&m14625_MI,
	&m14626_MI,
	&m14627_MI,
	&m14628_MI,
	&m14629_MI,
	&m14630_MI,
	&m14631_MI,
	&m14632_MI,
	&m704_MI,
	&m14633_MI,
	&m14634_MI,
	&m14635_MI,
	&m14636_MI,
	&m32227_MI,
	&m14637_MI,
	&m14638_MI,
	&m14639_MI,
	&m32229_MI,
	&m14640_MI,
	&m702_MI,
	&m14641_MI,
	&m14642_MI,
	&m14643_MI,
	&m14644_MI,
	&m14645_MI,
	&m14646_MI,
	&m14647_MI,
	&m14648_MI,
	&m14649_MI,
	&m14650_MI,
	&m14651_MI,
	&m14652_MI,
	&m14653_MI,
	NULL
};
static MethodInfo* t100_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14629_MI,
	&m14644_MI,
	&m14632_MI,
	&m14621_MI,
	&m14622_MI,
	&m14628_MI,
	&m14632_MI,
	&m14623_MI,
	&m14624_MI,
	&m14641_MI,
	&m14625_MI,
	&m14626_MI,
	&m14627_MI,
	&m14630_MI,
	&m14646_MI,
	&m14617_MI,
	&m14618_MI,
	&m14619_MI,
	&m14631_MI,
	&m14620_MI,
	&m14645_MI,
	&m704_MI,
	&m14633_MI,
	&m702_MI,
	&m14642_MI,
	&m14644_MI,
	&m14645_MI,
	&m14647_MI,
};
extern TypeInfo t6006_TI;
extern TypeInfo t6008_TI;
extern TypeInfo t7579_TI;
extern TypeInfo t986_TI;
extern TypeInfo t1184_TI;
static TypeInfo* t100_ITIs[] = 
{
	&t739_TI,
	&t517_TI,
	&t811_TI,
	&t6006_TI,
	&t6008_TI,
	&t7579_TI,
	&t986_TI,
	&t1184_TI,
};
static Il2CppInterfaceOffsetPair t100_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t517_TI, 5},
	{ &t811_TI, 6},
	{ &t6006_TI, 10},
	{ &t6008_TI, 17},
	{ &t7579_TI, 18},
	{ &t986_TI, 19},
	{ &t1184_TI, 24},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t100_0_0_0;
extern Il2CppType t100_1_0_0;
struct t100;
extern Il2CppGenericClass t100_GC;
extern CustomAttributesCache t1517__CustomAttributeCache;
extern CustomAttributesCache t1517__CustomAttributeCache_U3CU3Ef__am$cacheB;
extern CustomAttributesCache t1517__CustomAttributeCache_m11311;
TypeInfo t100_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Dictionary`2", "System.Collections.Generic", t100_MIs, t100_PIs, t100_FIs, NULL, &t5_TI, NULL, NULL, &t100_TI, t100_ITIs, t100_VT, &t1517__CustomAttributeCache, &t100_TI, &t100_0_0_0, &t100_1_0_0, t100_IOs, &t100_GC, NULL, t100_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t100), 0, -1, sizeof(t100_SFs), 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 45, 7, 16, 0, 0, 32, 8, 8};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<SoundEffects/AudioClipType,UnityEngine.AudioClip>>
extern MethodInfo m32231_MI;
static PropertyInfo t6006____Count_PropertyInfo = 
{
	&t6006_TI, "Count", &m32231_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m32232_MI;
static PropertyInfo t6006____IsReadOnly_PropertyInfo = 
{
	&t6006_TI, "IsReadOnly", &m32232_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6006_PIs[] =
{
	&t6006____Count_PropertyInfo,
	&t6006____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32231_GM;
MethodInfo m32231_MI = 
{
	"get_Count", NULL, &t6006_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32231_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32232_GM;
MethodInfo m32232_MI = 
{
	"get_IsReadOnly", NULL, &t6006_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32232_GM};
extern Il2CppType t2797_0_0_0;
static ParameterInfo t6006_m32233_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2797_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t2797 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32233_GM;
MethodInfo m32233_MI = 
{
	"Add", NULL, &t6006_TI, &t109_0_0_0, RuntimeInvoker_t109_t2797, t6006_m32233_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32233_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32234_GM;
MethodInfo m32234_MI = 
{
	"Clear", NULL, &t6006_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32234_GM};
extern Il2CppType t2797_0_0_0;
static ParameterInfo t6006_m32235_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2797_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t2797 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32235_GM;
MethodInfo m32235_MI = 
{
	"Contains", NULL, &t6006_TI, &t108_0_0_0, RuntimeInvoker_t108_t2797, t6006_m32235_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32235_GM};
extern Il2CppType t2796_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6006_m32236_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2796_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32236_GM;
MethodInfo m32236_MI = 
{
	"CopyTo", NULL, &t6006_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6006_m32236_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32236_GM};
extern Il2CppType t2797_0_0_0;
static ParameterInfo t6006_m32237_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2797_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t2797 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32237_GM;
MethodInfo m32237_MI = 
{
	"Remove", NULL, &t6006_TI, &t108_0_0_0, RuntimeInvoker_t108_t2797, t6006_m32237_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32237_GM};
static MethodInfo* t6006_MIs[] =
{
	&m32231_MI,
	&m32232_MI,
	&m32233_MI,
	&m32234_MI,
	&m32235_MI,
	&m32236_MI,
	&m32237_MI,
	NULL
};
static TypeInfo* t6006_ITIs[] = 
{
	&t739_TI,
	&t6008_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6006_0_0_0;
extern Il2CppType t6006_1_0_0;
struct t6006;
extern Il2CppGenericClass t6006_GC;
TypeInfo t6006_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6006_MIs, t6006_PIs, NULL, NULL, NULL, NULL, NULL, &t6006_TI, t6006_ITIs, NULL, &EmptyCustomAttributesCache, &t6006_TI, &t6006_0_0_0, &t6006_1_0_0, NULL, &t6006_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<SoundEffects/AudioClipType,UnityEngine.AudioClip>>
extern Il2CppType t2798_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32238_GM;
MethodInfo m32238_MI = 
{
	"GetEnumerator", NULL, &t6008_TI, &t2798_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32238_GM};
static MethodInfo* t6008_MIs[] =
{
	&m32238_MI,
	NULL
};
static TypeInfo* t6008_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6008_0_0_0;
extern Il2CppType t6008_1_0_0;
struct t6008;
extern Il2CppGenericClass t6008_GC;
TypeInfo t6008_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6008_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6008_TI, t6008_ITIs, NULL, &EmptyCustomAttributesCache, &t6008_TI, &t6008_0_0_0, &t6008_1_0_0, NULL, &t6008_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2798_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<SoundEffects/AudioClipType,UnityEngine.AudioClip>>
extern MethodInfo m32239_MI;
static PropertyInfo t2798____Current_PropertyInfo = 
{
	&t2798_TI, "Current", &m32239_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2798_PIs[] =
{
	&t2798____Current_PropertyInfo,
	NULL
};
extern Il2CppType t2797_0_0_0;
extern void* RuntimeInvoker_t2797 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32239_GM;
MethodInfo m32239_MI = 
{
	"get_Current", NULL, &t2798_TI, &t2797_0_0_0, RuntimeInvoker_t2797, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32239_GM};
static MethodInfo* t2798_MIs[] =
{
	&m32239_MI,
	NULL
};
static TypeInfo* t2798_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2798_0_0_0;
extern Il2CppType t2798_1_0_0;
struct t2798;
extern Il2CppGenericClass t2798_GC;
TypeInfo t2798_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2798_MIs, t2798_PIs, NULL, NULL, NULL, NULL, NULL, &t2798_TI, t2798_ITIs, NULL, &EmptyCustomAttributesCache, &t2798_TI, &t2798_0_0_0, &t2798_1_0_0, NULL, &t2798_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t585_TI;
extern MethodInfo m14656_MI;
extern MethodInfo m14658_MI;
extern MethodInfo m4802_MI;


 void m14654 (t2797 * __this, int32_t p0, t8 * p1, MethodInfo* method){
	{
		m14656(__this, p0, &m14656_MI);
		m14658(__this, p1, &m14658_MI);
		return;
	}
}
 int32_t m14655 (t2797 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
 void m14656 (t2797 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
 t8 * m14657 (t2797 * __this, MethodInfo* method){
	{
		t8 * L_0 = (__this->f1);
		return L_0;
	}
}
 void m14658 (t2797 * __this, t8 * p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m14659_MI;
 t11* m14659 (t2797 * __this, MethodInfo* method){
	int32_t V_0 = {0};
	t8 * V_1 = {0};
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
		int32_t L_2 = m14655(__this, &m14655_MI);
		int32_t L_3 = L_2;
		t5 * L_4 = Box(InitializedTypeInfo(&t98_TI), &L_3);
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
		int32_t L_5 = m14655(__this, &m14655_MI);
		V_0 = L_5;
		t11* L_6 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m467_MI, Box(InitializedTypeInfo(&t98_TI), &(*(&V_0))));
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
		t8 * L_9 = m14657(__this, &m14657_MI);
		t8 * L_10 = L_9;
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!((t8 *)L_10))
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0066;
		}
	}
	{
		t8 * L_11 = m14657(__this, &m14657_MI);
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
// Metadata Definition System.Collections.Generic.KeyValuePair`2<SoundEffects/AudioClipType,UnityEngine.AudioClip>
extern Il2CppType t98_0_0_1;
FieldInfo t2797_f0_FieldInfo = 
{
	"key", &t98_0_0_1, &t2797_TI, offsetof(t2797, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t8_0_0_1;
FieldInfo t2797_f1_FieldInfo = 
{
	"value", &t8_0_0_1, &t2797_TI, offsetof(t2797, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2797_FIs[] =
{
	&t2797_f0_FieldInfo,
	&t2797_f1_FieldInfo,
	NULL
};
static PropertyInfo t2797____Key_PropertyInfo = 
{
	&t2797_TI, "Key", &m14655_MI, &m14656_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2797____Value_PropertyInfo = 
{
	&t2797_TI, "Value", &m14657_MI, &m14658_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2797_PIs[] =
{
	&t2797____Key_PropertyInfo,
	&t2797____Value_PropertyInfo,
	NULL
};
extern Il2CppType t98_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t2797_m14654_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14654_GM;
MethodInfo m14654_MI = 
{
	".ctor", (methodPointerType)&m14654, &t2797_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2797_m14654_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14654_GM};
extern Il2CppType t98_0_0_0;
extern void* RuntimeInvoker_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14655_GM;
MethodInfo m14655_MI = 
{
	"get_Key", (methodPointerType)&m14655, &t2797_TI, &t98_0_0_0, RuntimeInvoker_t98, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14655_GM};
extern Il2CppType t98_0_0_0;
static ParameterInfo t2797_m14656_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14656_GM;
MethodInfo m14656_MI = 
{
	"set_Key", (methodPointerType)&m14656, &t2797_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2797_m14656_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14656_GM};
extern Il2CppType t8_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14657_GM;
MethodInfo m14657_MI = 
{
	"get_Value", (methodPointerType)&m14657, &t2797_TI, &t8_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14657_GM};
extern Il2CppType t8_0_0_0;
static ParameterInfo t2797_m14658_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14658_GM;
MethodInfo m14658_MI = 
{
	"set_Value", (methodPointerType)&m14658, &t2797_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2797_m14658_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14658_GM};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14659_GM;
MethodInfo m14659_MI = 
{
	"ToString", (methodPointerType)&m14659, &t2797_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14659_GM};
static MethodInfo* t2797_MIs[] =
{
	&m14654_MI,
	&m14655_MI,
	&m14656_MI,
	&m14657_MI,
	&m14658_MI,
	&m14659_MI,
	NULL
};
static MethodInfo* t2797_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m14659_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2797_1_0_0;
extern Il2CppGenericClass t2797_GC;
extern CustomAttributesCache t1522__CustomAttributeCache;
TypeInfo t2797_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeyValuePair`2", "System.Collections.Generic", t2797_MIs, t2797_PIs, t2797_FIs, NULL, &t267_TI, NULL, NULL, &t2797_TI, NULL, t2797_VT, &t1522__CustomAttributeCache, &t2797_TI, &t2797_0_0_0, &t2797_1_0_0, NULL, &t2797_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2797)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 4, 0, 0};
#include "t2800.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2800_TI;
#include "t2800MD.h"

extern MethodInfo m14664_MI;
extern MethodInfo m24658_MI;
struct t107;
 t2797  m24658 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m14660_MI;
 void m14660 (t2800 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14661_MI;
 t5 * m14661 (t2800 * __this, MethodInfo* method){
	{
		t2797  L_0 = m14664(__this, &m14664_MI);
		t2797  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t2797_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14662_MI;
 void m14662 (t2800 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14663_MI;
 bool m14663 (t2800 * __this, MethodInfo* method){
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
 t2797  m14664 (t2800 * __this, MethodInfo* method){
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
		t2797  L_8 = m24658(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m24658_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<SoundEffects/AudioClipType,UnityEngine.AudioClip>>
extern Il2CppType t107_0_0_1;
FieldInfo t2800_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t2800_TI, offsetof(t2800, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2800_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2800_TI, offsetof(t2800, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2800_FIs[] =
{
	&t2800_f0_FieldInfo,
	&t2800_f1_FieldInfo,
	NULL
};
static PropertyInfo t2800____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2800_TI, "System.Collections.IEnumerator.Current", &m14661_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2800____Current_PropertyInfo = 
{
	&t2800_TI, "Current", &m14664_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2800_PIs[] =
{
	&t2800____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2800____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t2800_m14660_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14660_GM;
MethodInfo m14660_MI = 
{
	".ctor", (methodPointerType)&m14660, &t2800_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2800_m14660_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14660_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14661_GM;
MethodInfo m14661_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14661, &t2800_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14661_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14662_GM;
MethodInfo m14662_MI = 
{
	"Dispose", (methodPointerType)&m14662, &t2800_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14662_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14663_GM;
MethodInfo m14663_MI = 
{
	"MoveNext", (methodPointerType)&m14663, &t2800_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14663_GM};
extern Il2CppType t2797_0_0_0;
extern void* RuntimeInvoker_t2797 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14664_GM;
MethodInfo m14664_MI = 
{
	"get_Current", (methodPointerType)&m14664, &t2800_TI, &t2797_0_0_0, RuntimeInvoker_t2797, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14664_GM};
static MethodInfo* t2800_MIs[] =
{
	&m14660_MI,
	&m14661_MI,
	&m14662_MI,
	&m14663_MI,
	&m14664_MI,
	NULL
};
static MethodInfo* t2800_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m14661_MI,
	&m14663_MI,
	&m14662_MI,
	&m14664_MI,
};
static TypeInfo* t2800_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t2798_TI,
};
static Il2CppInterfaceOffsetPair t2800_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t2798_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2800_0_0_0;
extern Il2CppType t2800_1_0_0;
extern Il2CppGenericClass t2800_GC;
TypeInfo t2800_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2800_MIs, t2800_PIs, t2800_FIs, NULL, &t267_TI, NULL, &t107_TI, &t2800_TI, t2800_ITIs, t2800_VT, &EmptyCustomAttributesCache, &t2800_TI, &t2800_0_0_0, &t2800_1_0_0, t2800_IOs, &t2800_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2800)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6007_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<SoundEffects/AudioClipType,UnityEngine.AudioClip>>
extern MethodInfo m32240_MI;
extern MethodInfo m32241_MI;
static PropertyInfo t6007____Item_PropertyInfo = 
{
	&t6007_TI, "Item", &m32240_MI, &m32241_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6007_PIs[] =
{
	&t6007____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2797_0_0_0;
static ParameterInfo t6007_m32242_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2797_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t2797 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32242_GM;
MethodInfo m32242_MI = 
{
	"IndexOf", NULL, &t6007_TI, &t110_0_0_0, RuntimeInvoker_t110_t2797, t6007_m32242_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32242_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2797_0_0_0;
static ParameterInfo t6007_m32243_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2797_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t2797 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32243_GM;
MethodInfo m32243_MI = 
{
	"Insert", NULL, &t6007_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t2797, t6007_m32243_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32243_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6007_m32244_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32244_GM;
MethodInfo m32244_MI = 
{
	"RemoveAt", NULL, &t6007_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6007_m32244_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32244_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6007_m32240_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t2797_0_0_0;
extern void* RuntimeInvoker_t2797_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32240_GM;
MethodInfo m32240_MI = 
{
	"get_Item", NULL, &t6007_TI, &t2797_0_0_0, RuntimeInvoker_t2797_t110, t6007_m32240_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32240_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2797_0_0_0;
static ParameterInfo t6007_m32241_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2797_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t2797 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32241_GM;
MethodInfo m32241_MI = 
{
	"set_Item", NULL, &t6007_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t2797, t6007_m32241_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32241_GM};
static MethodInfo* t6007_MIs[] =
{
	&m32242_MI,
	&m32243_MI,
	&m32244_MI,
	&m32240_MI,
	&m32241_MI,
	NULL
};
static TypeInfo* t6007_ITIs[] = 
{
	&t739_TI,
	&t6006_TI,
	&t6008_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6007_0_0_0;
extern Il2CppType t6007_1_0_0;
struct t6007;
extern Il2CppGenericClass t6007_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6007_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6007_MIs, t6007_PIs, NULL, NULL, NULL, NULL, NULL, &t6007_TI, t6007_ITIs, NULL, &t2240__CustomAttributeCache, &t6007_TI, &t6007_0_0_0, &t6007_1_0_0, NULL, &t6007_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IDictionary`2<SoundEffects/AudioClipType,UnityEngine.AudioClip>
extern Il2CppType t98_0_0_0;
static ParameterInfo t7579_m32245_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32245_GM;
MethodInfo m32245_MI = 
{
	"Remove", NULL, &t7579_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7579_m32245_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32245_GM};
static MethodInfo* t7579_MIs[] =
{
	&m32245_MI,
	NULL
};
static TypeInfo* t7579_ITIs[] = 
{
	&t739_TI,
	&t6006_TI,
	&t6008_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7579_0_0_0;
extern Il2CppType t7579_1_0_0;
struct t7579;
extern Il2CppGenericClass t7579_GC;
extern CustomAttributesCache t2307__CustomAttributeCache;
TypeInfo t7579_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionary`2", "System.Collections.Generic", t7579_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7579_TI, t7579_ITIs, NULL, &t2307__CustomAttributeCache, &t7579_TI, &t7579_0_0_0, &t7579_1_0_0, NULL, &t7579_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<SoundEffects/AudioClipType>
extern Il2CppType t98_0_0_0;
extern Il2CppType t98_0_0_0;
static ParameterInfo t2793_m32226_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32226_GM;
MethodInfo m32226_MI = 
{
	"Equals", NULL, &t2793_TI, &t108_0_0_0, RuntimeInvoker_t108_t110_t110, t2793_m32226_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32226_GM};
extern Il2CppType t98_0_0_0;
static ParameterInfo t2793_m32225_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32225_GM;
MethodInfo m32225_MI = 
{
	"GetHashCode", NULL, &t2793_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t2793_m32225_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32225_GM};
static MethodInfo* t2793_MIs[] =
{
	&m32226_MI,
	&m32225_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2793_1_0_0;
struct t2793;
extern Il2CppGenericClass t2793_GC;
TypeInfo t2793_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t2793_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2793_TI, NULL, NULL, &EmptyCustomAttributesCache, &t2793_TI, &t2793_0_0_0, &t2793_1_0_0, NULL, &t2793_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4772_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<SoundEffects/AudioClipType>
extern MethodInfo m32246_MI;
static PropertyInfo t4772____Current_PropertyInfo = 
{
	&t4772_TI, "Current", &m32246_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4772_PIs[] =
{
	&t4772____Current_PropertyInfo,
	NULL
};
extern Il2CppType t98_0_0_0;
extern void* RuntimeInvoker_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32246_GM;
MethodInfo m32246_MI = 
{
	"get_Current", NULL, &t4772_TI, &t98_0_0_0, RuntimeInvoker_t98, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32246_GM};
static MethodInfo* t4772_MIs[] =
{
	&m32246_MI,
	NULL
};
static TypeInfo* t4772_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4772_0_0_0;
extern Il2CppType t4772_1_0_0;
struct t4772;
extern Il2CppGenericClass t4772_GC;
TypeInfo t4772_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4772_MIs, t4772_PIs, NULL, NULL, NULL, NULL, NULL, &t4772_TI, t4772_ITIs, NULL, &EmptyCustomAttributesCache, &t4772_TI, &t4772_0_0_0, &t4772_1_0_0, NULL, &t4772_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2801.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2801_TI;
#include "t2801MD.h"

extern MethodInfo m14669_MI;
extern MethodInfo m24669_MI;
struct t107;
 int32_t m24669 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m14665_MI;
 void m14665 (t2801 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14666_MI;
 t5 * m14666 (t2801 * __this, MethodInfo* method){
	{
		int32_t L_0 = m14669(__this, &m14669_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t98_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14667_MI;
 void m14667 (t2801 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14668_MI;
 bool m14668 (t2801 * __this, MethodInfo* method){
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
 int32_t m14669 (t2801 * __this, MethodInfo* method){
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
		int32_t L_8 = m24669(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m24669_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<SoundEffects/AudioClipType>
extern Il2CppType t107_0_0_1;
FieldInfo t2801_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t2801_TI, offsetof(t2801, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2801_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2801_TI, offsetof(t2801, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2801_FIs[] =
{
	&t2801_f0_FieldInfo,
	&t2801_f1_FieldInfo,
	NULL
};
static PropertyInfo t2801____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2801_TI, "System.Collections.IEnumerator.Current", &m14666_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2801____Current_PropertyInfo = 
{
	&t2801_TI, "Current", &m14669_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2801_PIs[] =
{
	&t2801____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2801____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t2801_m14665_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14665_GM;
MethodInfo m14665_MI = 
{
	".ctor", (methodPointerType)&m14665, &t2801_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2801_m14665_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14665_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14666_GM;
MethodInfo m14666_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14666, &t2801_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14666_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14667_GM;
MethodInfo m14667_MI = 
{
	"Dispose", (methodPointerType)&m14667, &t2801_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14667_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14668_GM;
MethodInfo m14668_MI = 
{
	"MoveNext", (methodPointerType)&m14668, &t2801_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14668_GM};
extern Il2CppType t98_0_0_0;
extern void* RuntimeInvoker_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14669_GM;
MethodInfo m14669_MI = 
{
	"get_Current", (methodPointerType)&m14669, &t2801_TI, &t98_0_0_0, RuntimeInvoker_t98, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14669_GM};
static MethodInfo* t2801_MIs[] =
{
	&m14665_MI,
	&m14666_MI,
	&m14667_MI,
	&m14668_MI,
	&m14669_MI,
	NULL
};
static MethodInfo* t2801_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m14666_MI,
	&m14668_MI,
	&m14667_MI,
	&m14669_MI,
};
static TypeInfo* t2801_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t4772_TI,
};
static Il2CppInterfaceOffsetPair t2801_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t4772_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2801_0_0_0;
extern Il2CppType t2801_1_0_0;
extern Il2CppGenericClass t2801_GC;
TypeInfo t2801_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2801_MIs, t2801_PIs, t2801_FIs, NULL, &t267_TI, NULL, &t107_TI, &t2801_TI, t2801_ITIs, t2801_VT, &EmptyCustomAttributesCache, &t2801_TI, &t2801_0_0_0, &t2801_1_0_0, t2801_IOs, &t2801_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2801)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6009_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<SoundEffects/AudioClipType>
extern MethodInfo m32247_MI;
static PropertyInfo t6009____Count_PropertyInfo = 
{
	&t6009_TI, "Count", &m32247_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m32248_MI;
static PropertyInfo t6009____IsReadOnly_PropertyInfo = 
{
	&t6009_TI, "IsReadOnly", &m32248_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6009_PIs[] =
{
	&t6009____Count_PropertyInfo,
	&t6009____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32247_GM;
MethodInfo m32247_MI = 
{
	"get_Count", NULL, &t6009_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32247_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32248_GM;
MethodInfo m32248_MI = 
{
	"get_IsReadOnly", NULL, &t6009_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32248_GM};
extern Il2CppType t98_0_0_0;
static ParameterInfo t6009_m32249_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32249_GM;
MethodInfo m32249_MI = 
{
	"Add", NULL, &t6009_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6009_m32249_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32249_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32250_GM;
MethodInfo m32250_MI = 
{
	"Clear", NULL, &t6009_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32250_GM};
extern Il2CppType t98_0_0_0;
static ParameterInfo t6009_m32251_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32251_GM;
MethodInfo m32251_MI = 
{
	"Contains", NULL, &t6009_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6009_m32251_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32251_GM};
extern Il2CppType t2792_0_0_0;
extern Il2CppType t2792_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6009_m32252_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2792_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32252_GM;
MethodInfo m32252_MI = 
{
	"CopyTo", NULL, &t6009_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6009_m32252_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32252_GM};
extern Il2CppType t98_0_0_0;
static ParameterInfo t6009_m32253_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32253_GM;
MethodInfo m32253_MI = 
{
	"Remove", NULL, &t6009_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t6009_m32253_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32253_GM};
static MethodInfo* t6009_MIs[] =
{
	&m32247_MI,
	&m32248_MI,
	&m32249_MI,
	&m32250_MI,
	&m32251_MI,
	&m32252_MI,
	&m32253_MI,
	NULL
};
extern TypeInfo t6011_TI;
static TypeInfo* t6009_ITIs[] = 
{
	&t739_TI,
	&t6011_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6009_0_0_0;
extern Il2CppType t6009_1_0_0;
struct t6009;
extern Il2CppGenericClass t6009_GC;
TypeInfo t6009_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6009_MIs, t6009_PIs, NULL, NULL, NULL, NULL, NULL, &t6009_TI, t6009_ITIs, NULL, &EmptyCustomAttributesCache, &t6009_TI, &t6009_0_0_0, &t6009_1_0_0, NULL, &t6009_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<SoundEffects/AudioClipType>
extern Il2CppType t4772_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32254_GM;
MethodInfo m32254_MI = 
{
	"GetEnumerator", NULL, &t6011_TI, &t4772_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32254_GM};
static MethodInfo* t6011_MIs[] =
{
	&m32254_MI,
	NULL
};
static TypeInfo* t6011_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6011_0_0_0;
extern Il2CppType t6011_1_0_0;
struct t6011;
extern Il2CppGenericClass t6011_GC;
TypeInfo t6011_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6011_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6011_TI, t6011_ITIs, NULL, &EmptyCustomAttributesCache, &t6011_TI, &t6011_0_0_0, &t6011_1_0_0, NULL, &t6011_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6010_TI;



// Metadata Definition System.Collections.Generic.IList`1<SoundEffects/AudioClipType>
extern MethodInfo m32255_MI;
extern MethodInfo m32256_MI;
static PropertyInfo t6010____Item_PropertyInfo = 
{
	&t6010_TI, "Item", &m32255_MI, &m32256_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6010_PIs[] =
{
	&t6010____Item_PropertyInfo,
	NULL
};
extern Il2CppType t98_0_0_0;
static ParameterInfo t6010_m32257_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32257_GM;
MethodInfo m32257_MI = 
{
	"IndexOf", NULL, &t6010_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t6010_m32257_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32257_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t98_0_0_0;
static ParameterInfo t6010_m32258_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32258_GM;
MethodInfo m32258_MI = 
{
	"Insert", NULL, &t6010_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6010_m32258_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32258_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6010_m32259_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32259_GM;
MethodInfo m32259_MI = 
{
	"RemoveAt", NULL, &t6010_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6010_m32259_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32259_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6010_m32255_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t98_0_0_0;
extern void* RuntimeInvoker_t98_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32255_GM;
MethodInfo m32255_MI = 
{
	"get_Item", NULL, &t6010_TI, &t98_0_0_0, RuntimeInvoker_t98_t110, t6010_m32255_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32255_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t98_0_0_0;
static ParameterInfo t6010_m32256_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32256_GM;
MethodInfo m32256_MI = 
{
	"set_Item", NULL, &t6010_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t6010_m32256_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32256_GM};
static MethodInfo* t6010_MIs[] =
{
	&m32257_MI,
	&m32258_MI,
	&m32259_MI,
	&m32255_MI,
	&m32256_MI,
	NULL
};
static TypeInfo* t6010_ITIs[] = 
{
	&t739_TI,
	&t6009_TI,
	&t6011_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6010_0_0_0;
extern Il2CppType t6010_1_0_0;
struct t6010;
extern Il2CppGenericClass t6010_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6010_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6010_MIs, t6010_PIs, NULL, NULL, NULL, NULL, NULL, &t6010_TI, t6010_ITIs, NULL, &t2240__CustomAttributeCache, &t6010_TI, &t6010_0_0_0, &t6010_1_0_0, NULL, &t6010_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif

#include "t2802.h"
#include "t2803.h"
extern TypeInfo t2802_TI;
extern TypeInfo t2803_TI;
#include "t2803MD.h"
#include "t2802MD.h"
extern MethodInfo m4780_MI;
extern MethodInfo m14682_MI;
extern MethodInfo m14681_MI;
extern MethodInfo m14701_MI;
extern MethodInfo m24680_MI;
extern MethodInfo m24681_MI;
extern MethodInfo m14684_MI;
struct t100;
 void m24680 (t100 * __this, t107 * p0, int32_t p1, t2803 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t100;
 void m24681 (t100 * __this, t2777* p0, int32_t p1, t2803 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;


 void m14670 (t2795 * __this, t100 * p0, MethodInfo* method){
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
extern MethodInfo m14671_MI;
 void m14671 (t2795 * __this, t8 * p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral1216, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m14672_MI;
 void m14672 (t2795 * __this, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral1216, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m14673_MI;
 bool m14673 (t2795 * __this, t8 * p0, MethodInfo* method){
	{
		t100 * L_0 = (__this->f0);
		bool L_1 = m14643(L_0, p0, &m14643_MI);
		return L_1;
	}
}
extern MethodInfo m14674_MI;
 bool m14674 (t2795 * __this, t8 * p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral1216, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m14675_MI;
 t5* m14675 (t2795 * __this, MethodInfo* method){
	{
		t2802  L_0 = m14682(__this, &m14682_MI);
		t2802  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t2802_TI), &L_1);
		return (t5*)L_2;
	}
}
extern MethodInfo m14676_MI;
 void m14676 (t2795 * __this, t107 * p0, int32_t p1, MethodInfo* method){
	t2777* V_0 = {0};
	{
		V_0 = ((t2777*)IsInst(p0, InitializedTypeInfo(&t2777_TI)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker2< t2777*, int32_t >::Invoke(&m14681_MI, __this, V_0, p1);
		return;
	}

IL_0013:
	{
		t100 * L_0 = (__this->f0);
		m14636(L_0, p0, p1, &m14636_MI);
		t100 * L_1 = (__this->f0);
		t124 L_2 = { &m14638_MI };
		t2803 * L_3 = (t2803 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2803_TI));
		m14701(L_3, NULL, L_2, &m14701_MI);
		m24680(L_1, p0, p1, L_3, &m24680_MI);
		return;
	}
}
extern MethodInfo m14677_MI;
 t5 * m14677 (t2795 * __this, MethodInfo* method){
	{
		t2802  L_0 = m14682(__this, &m14682_MI);
		t2802  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t2802_TI), &L_1);
		return (t5 *)L_2;
	}
}
extern MethodInfo m14678_MI;
 bool m14678 (t2795 * __this, MethodInfo* method){
	{
		return 1;
	}
}
extern MethodInfo m14679_MI;
 bool m14679 (t2795 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m14680_MI;
 t5 * m14680 (t2795 * __this, MethodInfo* method){
	{
		t100 * L_0 = (__this->f0);
		t5 * L_1 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m11151_MI, L_0);
		return L_1;
	}
}
 void m14681 (t2795 * __this, t2777* p0, int32_t p1, MethodInfo* method){
	{
		t100 * L_0 = (__this->f0);
		m14636(L_0, (t107 *)(t107 *)p0, p1, &m14636_MI);
		t100 * L_1 = (__this->f0);
		t124 L_2 = { &m14638_MI };
		t2803 * L_3 = (t2803 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2803_TI));
		m14701(L_3, NULL, L_2, &m14701_MI);
		m24681(L_1, p0, p1, L_3, &m24681_MI);
		return;
	}
}
 t2802  m14682 (t2795 * __this, MethodInfo* method){
	{
		t100 * L_0 = (__this->f0);
		t2802  L_1 = {0};
		m14684(&L_1, L_0, &m14684_MI);
		return L_1;
	}
}
extern MethodInfo m14683_MI;
 int32_t m14683 (t2795 * __this, MethodInfo* method){
	{
		t100 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m14632_MI, L_0);
		return L_1;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection<SoundEffects/AudioClipType,UnityEngine.AudioClip>
extern Il2CppType t100_0_0_1;
FieldInfo t2795_f0_FieldInfo = 
{
	"dictionary", &t100_0_0_1, &t2795_TI, offsetof(t2795, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2795_FIs[] =
{
	&t2795_f0_FieldInfo,
	NULL
};
static PropertyInfo t2795____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo = 
{
	&t2795_TI, "System.Collections.Generic.ICollection<TValue>.IsReadOnly", &m14678_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2795____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2795_TI, "System.Collections.ICollection.IsSynchronized", &m14679_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2795____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2795_TI, "System.Collections.ICollection.SyncRoot", &m14680_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2795____Count_PropertyInfo = 
{
	&t2795_TI, "Count", &m14683_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2795_PIs[] =
{
	&t2795____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo,
	&t2795____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2795____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2795____Count_PropertyInfo,
	NULL
};
extern Il2CppType t100_0_0_0;
static ParameterInfo t2795_m14670_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14670_GM;
MethodInfo m14670_MI = 
{
	".ctor", (methodPointerType)&m14670, &t2795_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2795_m14670_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14670_GM};
extern Il2CppType t8_0_0_0;
static ParameterInfo t2795_m14671_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14671_GM;
MethodInfo m14671_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Add", (methodPointerType)&m14671, &t2795_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2795_m14671_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14671_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14672_GM;
MethodInfo m14672_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Clear", (methodPointerType)&m14672, &t2795_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 481, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14672_GM};
extern Il2CppType t8_0_0_0;
static ParameterInfo t2795_m14673_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14673_GM;
MethodInfo m14673_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Contains", (methodPointerType)&m14673, &t2795_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2795_m14673_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14673_GM};
extern Il2CppType t8_0_0_0;
static ParameterInfo t2795_m14674_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14674_GM;
MethodInfo m14674_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Remove", (methodPointerType)&m14674, &t2795_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2795_m14674_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14674_GM};
extern Il2CppType t2779_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14675_GM;
MethodInfo m14675_MI = 
{
	"System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", (methodPointerType)&m14675, &t2795_TI, &t2779_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14675_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2795_m14676_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14676_GM;
MethodInfo m14676_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m14676, &t2795_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2795_m14676_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14676_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14677_GM;
MethodInfo m14677_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m14677, &t2795_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14677_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14678_GM;
MethodInfo m14678_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.get_IsReadOnly", (methodPointerType)&m14678, &t2795_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14678_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14679_GM;
MethodInfo m14679_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m14679, &t2795_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14679_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14680_GM;
MethodInfo m14680_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m14680, &t2795_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14680_GM};
extern Il2CppType t2777_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2795_m14681_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2777_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14681_GM;
MethodInfo m14681_MI = 
{
	"CopyTo", (methodPointerType)&m14681, &t2795_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2795_m14681_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14681_GM};
extern Il2CppType t2802_0_0_0;
extern void* RuntimeInvoker_t2802 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14682_GM;
MethodInfo m14682_MI = 
{
	"GetEnumerator", (methodPointerType)&m14682, &t2795_TI, &t2802_0_0_0, RuntimeInvoker_t2802, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14682_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14683_GM;
MethodInfo m14683_MI = 
{
	"get_Count", (methodPointerType)&m14683, &t2795_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14683_GM};
static MethodInfo* t2795_MIs[] =
{
	&m14670_MI,
	&m14671_MI,
	&m14672_MI,
	&m14673_MI,
	&m14674_MI,
	&m14675_MI,
	&m14676_MI,
	&m14677_MI,
	&m14678_MI,
	&m14679_MI,
	&m14680_MI,
	&m14681_MI,
	&m14682_MI,
	&m14683_MI,
	NULL
};
static MethodInfo* t2795_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14677_MI,
	&m14683_MI,
	&m14679_MI,
	&m14680_MI,
	&m14676_MI,
	&m14683_MI,
	&m14678_MI,
	&m14671_MI,
	&m14672_MI,
	&m14673_MI,
	&m14681_MI,
	&m14674_MI,
	&m14675_MI,
};
static TypeInfo* t2795_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t2780_TI,
	&t2778_TI,
};
static Il2CppInterfaceOffsetPair t2795_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t2780_TI, 9},
	{ &t2778_TI, 16},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2795_0_0_0;
extern Il2CppType t2795_1_0_0;
struct t2795;
extern Il2CppGenericClass t2795_GC;
extern TypeInfo t1517_TI;
extern CustomAttributesCache t1515__CustomAttributeCache;
TypeInfo t2795_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ValueCollection", "", t2795_MIs, t2795_PIs, t2795_FIs, NULL, &t5_TI, NULL, &t1517_TI, &t2795_TI, t2795_ITIs, t2795_VT, &t1515__CustomAttributeCache, &t2795_TI, &t2795_0_0_0, &t2795_1_0_0, t2795_IOs, &t2795_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2795), 0, -1, 0, 0, -1, 1057026, 0, false, false, false, false, true, false, false, false, false, false, false, false, 14, 4, 1, 0, 0, 17, 4, 4};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m14697_MI;
extern MethodInfo m14700_MI;
extern MethodInfo m14694_MI;


 void m14684 (t2802 * __this, t100 * p0, MethodInfo* method){
	{
		t2799  L_0 = m14652(p0, &m14652_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m14685_MI;
 t5 * m14685 (t2802 * __this, MethodInfo* method){
	{
		t2799 * L_0 = &(__this->f0);
		t8 * L_1 = m14697(L_0, &m14697_MI);
		t8 * L_2 = L_1;
		return ((t8 *)L_2);
	}
}
extern MethodInfo m14686_MI;
 void m14686 (t2802 * __this, MethodInfo* method){
	{
		t2799 * L_0 = &(__this->f0);
		m14700(L_0, &m14700_MI);
		return;
	}
}
extern MethodInfo m14687_MI;
 bool m14687 (t2802 * __this, MethodInfo* method){
	{
		t2799 * L_0 = &(__this->f0);
		bool L_1 = m14694(L_0, &m14694_MI);
		return L_1;
	}
}
extern MethodInfo m14688_MI;
 t8 * m14688 (t2802 * __this, MethodInfo* method){
	{
		t2799 * L_0 = &(__this->f0);
		t2797 * L_1 = &(L_0->f3);
		t8 * L_2 = m14657(L_1, &m14657_MI);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<SoundEffects/AudioClipType,UnityEngine.AudioClip>
extern Il2CppType t2799_0_0_1;
FieldInfo t2802_f0_FieldInfo = 
{
	"host_enumerator", &t2799_0_0_1, &t2802_TI, offsetof(t2802, f0) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2802_FIs[] =
{
	&t2802_f0_FieldInfo,
	NULL
};
static PropertyInfo t2802____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2802_TI, "System.Collections.IEnumerator.Current", &m14685_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2802____Current_PropertyInfo = 
{
	&t2802_TI, "Current", &m14688_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2802_PIs[] =
{
	&t2802____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2802____Current_PropertyInfo,
	NULL
};
extern Il2CppType t100_0_0_0;
static ParameterInfo t2802_m14684_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14684_GM;
MethodInfo m14684_MI = 
{
	".ctor", (methodPointerType)&m14684, &t2802_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2802_m14684_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14684_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14685_GM;
MethodInfo m14685_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14685, &t2802_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14685_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14686_GM;
MethodInfo m14686_MI = 
{
	"Dispose", (methodPointerType)&m14686, &t2802_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14686_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14687_GM;
MethodInfo m14687_MI = 
{
	"MoveNext", (methodPointerType)&m14687, &t2802_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14687_GM};
extern Il2CppType t8_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14688_GM;
MethodInfo m14688_MI = 
{
	"get_Current", (methodPointerType)&m14688, &t2802_TI, &t8_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14688_GM};
static MethodInfo* t2802_MIs[] =
{
	&m14684_MI,
	&m14685_MI,
	&m14686_MI,
	&m14687_MI,
	&m14688_MI,
	NULL
};
static MethodInfo* t2802_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m14685_MI,
	&m14687_MI,
	&m14686_MI,
	&m14688_MI,
};
static TypeInfo* t2802_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t2779_TI,
};
static Il2CppInterfaceOffsetPair t2802_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t2779_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2802_0_0_0;
extern Il2CppType t2802_1_0_0;
extern Il2CppGenericClass t2802_GC;
extern TypeInfo t1515_TI;
TypeInfo t2802_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2802_MIs, t2802_PIs, t2802_FIs, NULL, &t267_TI, NULL, &t1515_TI, &t2802_TI, t2802_ITIs, t2802_VT, &EmptyCustomAttributesCache, &t2802_TI, &t2802_0_0_0, &t2802_1_0_0, t2802_IOs, &t2802_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2802)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m14699_MI;
extern MethodInfo m14696_MI;
extern MethodInfo m14698_MI;


 void m14689 (t2799 * __this, t100 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		int32_t L_0 = (p0->f14);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m14690_MI;
 t5 * m14690 (t2799 * __this, MethodInfo* method){
	{
		m14699(__this, &m14699_MI);
		t2797  L_0 = (__this->f3);
		t2797  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t2797_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14691_MI;
 t990  m14691 (t2799 * __this, MethodInfo* method){
	{
		m14699(__this, &m14699_MI);
		t2797 * L_0 = &(__this->f3);
		int32_t L_1 = m14655(L_0, &m14655_MI);
		int32_t L_2 = L_1;
		t5 * L_3 = Box(InitializedTypeInfo(&t98_TI), &L_2);
		t2797 * L_4 = &(__this->f3);
		t8 * L_5 = m14657(L_4, &m14657_MI);
		t8 * L_6 = L_5;
		t990  L_7 = {0};
		m4759(&L_7, L_3, ((t8 *)L_6), &m4759_MI);
		return L_7;
	}
}
extern MethodInfo m14692_MI;
 t5 * m14692 (t2799 * __this, MethodInfo* method){
	{
		int32_t L_0 = m14696(__this, &m14696_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t98_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14693_MI;
 t5 * m14693 (t2799 * __this, MethodInfo* method){
	{
		t8 * L_0 = m14697(__this, &m14697_MI);
		t8 * L_1 = L_0;
		return ((t8 *)L_1);
	}
}
 bool m14694 (t2799 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		m14698(__this, &m14698_MI);
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
		t100 * L_3 = (__this->f0);
		t2297* L_4 = (L_3->f5);
		int32_t L_5 = (((t1511 *)(t1511 *)SZArrayLdElema(L_4, V_0))->f0);
		if (!((int32_t)((int32_t)L_5&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		t100 * L_6 = (__this->f0);
		t2792* L_7 = (L_6->f6);
		int32_t L_8 = V_0;
		t100 * L_9 = (__this->f0);
		t2777* L_10 = (L_9->f7);
		int32_t L_11 = V_0;
		t2797  L_12 = {0};
		m14654(&L_12, (*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_8)), (*(t8 **)(t8 **)SZArrayLdElema(L_10, L_11)), &m14654_MI);
		__this->f3 = L_12;
		return 1;
	}

IL_0072:
	{
		int32_t L_13 = (__this->f1);
		t100 * L_14 = (__this->f0);
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
extern MethodInfo m14695_MI;
 t2797  m14695 (t2799 * __this, MethodInfo* method){
	{
		t2797  L_0 = (__this->f3);
		return L_0;
	}
}
 int32_t m14696 (t2799 * __this, MethodInfo* method){
	{
		m14699(__this, &m14699_MI);
		t2797 * L_0 = &(__this->f3);
		int32_t L_1 = m14655(L_0, &m14655_MI);
		return L_1;
	}
}
 t8 * m14697 (t2799 * __this, MethodInfo* method){
	{
		m14699(__this, &m14699_MI);
		t2797 * L_0 = &(__this->f3);
		t8 * L_1 = m14657(L_0, &m14657_MI);
		return L_1;
	}
}
 void m14698 (t2799 * __this, MethodInfo* method){
	{
		t100 * L_0 = (__this->f0);
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
		t100 * L_2 = (__this->f0);
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
 void m14699 (t2799 * __this, MethodInfo* method){
	{
		m14698(__this, &m14698_MI);
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
 void m14700 (t2799 * __this, MethodInfo* method){
	{
		__this->f0 = (t100 *)NULL;
		return;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Enumerator<SoundEffects/AudioClipType,UnityEngine.AudioClip>
extern Il2CppType t100_0_0_1;
FieldInfo t2799_f0_FieldInfo = 
{
	"dictionary", &t100_0_0_1, &t2799_TI, offsetof(t2799, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2799_f1_FieldInfo = 
{
	"next", &t110_0_0_1, &t2799_TI, offsetof(t2799, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2799_f2_FieldInfo = 
{
	"stamp", &t110_0_0_1, &t2799_TI, offsetof(t2799, f2) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t2797_0_0_3;
FieldInfo t2799_f3_FieldInfo = 
{
	"current", &t2797_0_0_3, &t2799_TI, offsetof(t2799, f3) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2799_FIs[] =
{
	&t2799_f0_FieldInfo,
	&t2799_f1_FieldInfo,
	&t2799_f2_FieldInfo,
	&t2799_f3_FieldInfo,
	NULL
};
static PropertyInfo t2799____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2799_TI, "System.Collections.IEnumerator.Current", &m14690_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2799____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo = 
{
	&t2799_TI, "System.Collections.IDictionaryEnumerator.Entry", &m14691_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2799____System_Collections_IDictionaryEnumerator_Key_PropertyInfo = 
{
	&t2799_TI, "System.Collections.IDictionaryEnumerator.Key", &m14692_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2799____System_Collections_IDictionaryEnumerator_Value_PropertyInfo = 
{
	&t2799_TI, "System.Collections.IDictionaryEnumerator.Value", &m14693_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2799____Current_PropertyInfo = 
{
	&t2799_TI, "Current", &m14695_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2799____CurrentKey_PropertyInfo = 
{
	&t2799_TI, "CurrentKey", &m14696_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2799____CurrentValue_PropertyInfo = 
{
	&t2799_TI, "CurrentValue", &m14697_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2799_PIs[] =
{
	&t2799____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2799____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo,
	&t2799____System_Collections_IDictionaryEnumerator_Key_PropertyInfo,
	&t2799____System_Collections_IDictionaryEnumerator_Value_PropertyInfo,
	&t2799____Current_PropertyInfo,
	&t2799____CurrentKey_PropertyInfo,
	&t2799____CurrentValue_PropertyInfo,
	NULL
};
extern Il2CppType t100_0_0_0;
static ParameterInfo t2799_m14689_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14689_GM;
MethodInfo m14689_MI = 
{
	".ctor", (methodPointerType)&m14689, &t2799_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2799_m14689_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14689_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14690_GM;
MethodInfo m14690_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14690, &t2799_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14690_GM};
extern Il2CppType t990_0_0_0;
extern void* RuntimeInvoker_t990 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14691_GM;
MethodInfo m14691_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Entry", (methodPointerType)&m14691, &t2799_TI, &t990_0_0_0, RuntimeInvoker_t990, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14691_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14692_GM;
MethodInfo m14692_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Key", (methodPointerType)&m14692, &t2799_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14692_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14693_GM;
MethodInfo m14693_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Value", (methodPointerType)&m14693, &t2799_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14693_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14694_GM;
MethodInfo m14694_MI = 
{
	"MoveNext", (methodPointerType)&m14694, &t2799_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14694_GM};
extern Il2CppType t2797_0_0_0;
extern void* RuntimeInvoker_t2797 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14695_GM;
MethodInfo m14695_MI = 
{
	"get_Current", (methodPointerType)&m14695, &t2799_TI, &t2797_0_0_0, RuntimeInvoker_t2797, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14695_GM};
extern Il2CppType t98_0_0_0;
extern void* RuntimeInvoker_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14696_GM;
MethodInfo m14696_MI = 
{
	"get_CurrentKey", (methodPointerType)&m14696, &t2799_TI, &t98_0_0_0, RuntimeInvoker_t98, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14696_GM};
extern Il2CppType t8_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14697_GM;
MethodInfo m14697_MI = 
{
	"get_CurrentValue", (methodPointerType)&m14697, &t2799_TI, &t8_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14697_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14698_GM;
MethodInfo m14698_MI = 
{
	"VerifyState", (methodPointerType)&m14698, &t2799_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14698_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14699_GM;
MethodInfo m14699_MI = 
{
	"VerifyCurrent", (methodPointerType)&m14699, &t2799_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14699_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14700_GM;
MethodInfo m14700_MI = 
{
	"Dispose", (methodPointerType)&m14700, &t2799_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14700_GM};
static MethodInfo* t2799_MIs[] =
{
	&m14689_MI,
	&m14690_MI,
	&m14691_MI,
	&m14692_MI,
	&m14693_MI,
	&m14694_MI,
	&m14695_MI,
	&m14696_MI,
	&m14697_MI,
	&m14698_MI,
	&m14699_MI,
	&m14700_MI,
	NULL
};
static MethodInfo* t2799_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m14690_MI,
	&m14694_MI,
	&m14700_MI,
	&m14695_MI,
	&m14691_MI,
	&m14692_MI,
	&m14693_MI,
};
extern TypeInfo t987_TI;
static TypeInfo* t2799_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t2798_TI,
	&t987_TI,
};
static Il2CppInterfaceOffsetPair t2799_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t2798_TI, 7},
	{ &t987_TI, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2799_0_0_0;
extern Il2CppType t2799_1_0_0;
extern Il2CppGenericClass t2799_GC;
TypeInfo t2799_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2799_MIs, t2799_PIs, t2799_FIs, NULL, &t267_TI, NULL, &t1517_TI, &t2799_TI, t2799_ITIs, t2799_VT, &EmptyCustomAttributesCache, &t2799_TI, &t2799_0_0_0, &t2799_1_0_0, t2799_IOs, &t2799_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2799)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, true, false, false, false, false, false, false, false, 12, 7, 4, 0, 0, 11, 4, 4};
#ifndef _MSC_VER
#else
#endif



 void m14701 (t2803 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m14702_MI;
 t8 * m14702 (t2803 * __this, int32_t p0, t8 * p1, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m14702((t2803 *)__this->f9,p0, p1, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t8 * (*FunctionPointerType) (t5 *, t5 * __this, int32_t p0, t8 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	typedef t8 * (*FunctionPointerType) (t5 * __this, int32_t p0, t8 * p1, MethodInfo* method);
	return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m14703_MI;
 t5 * m14703 (t2803 * __this, int32_t p0, t8 * p1, t222 * p2, t5 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t98_TI), &p0);
	__d_args[1] = p1;
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m14704_MI;
 t8 * m14704 (t2803 * __this, t5 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t8 *)__result;
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<SoundEffects/AudioClipType,UnityEngine.AudioClip,UnityEngine.AudioClip>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2803_m14701_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14701_GM;
MethodInfo m14701_MI = 
{
	".ctor", (methodPointerType)&m14701, &t2803_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2803_m14701_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14701_GM};
extern Il2CppType t98_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t2803_m14702_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t8_0_0_0;
extern void* RuntimeInvoker_t5_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14702_GM;
MethodInfo m14702_MI = 
{
	"Invoke", (methodPointerType)&m14702, &t2803_TI, &t8_0_0_0, RuntimeInvoker_t5_t110_t5, t2803_m14702_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14702_GM};
extern Il2CppType t98_0_0_0;
extern Il2CppType t8_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2803_m14703_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t110_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14703_GM;
MethodInfo m14703_MI = 
{
	"BeginInvoke", (methodPointerType)&m14703, &t2803_TI, &t221_0_0_0, RuntimeInvoker_t5_t110_t5_t5_t5, t2803_m14703_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL, &m14703_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2803_m14704_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t8_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14704_GM;
MethodInfo m14704_MI = 
{
	"EndInvoke", (methodPointerType)&m14704, &t2803_TI, &t8_0_0_0, RuntimeInvoker_t5_t5, t2803_m14704_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14704_GM};
static MethodInfo* t2803_MIs[] =
{
	&m14701_MI,
	&m14702_MI,
	&m14703_MI,
	&m14704_MI,
	NULL
};
static MethodInfo* t2803_VT[] =
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
	&m14702_MI,
	&m14703_MI,
	&m14704_MI,
};
static Il2CppInterfaceOffsetPair t2803_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2803_0_0_0;
extern Il2CppType t2803_1_0_0;
struct t2803;
extern Il2CppGenericClass t2803_GC;
TypeInfo t2803_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2803_MIs, NULL, NULL, NULL, &t353_TI, NULL, &t1517_TI, &t2803_TI, NULL, t2803_VT, &EmptyCustomAttributesCache, &t2803_TI, &t2803_0_0_0, &t2803_1_0_0, t2803_IOs, &t2803_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2803), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif



 void m14705 (t2794 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m14706_MI;
 t990  m14706 (t2794 * __this, int32_t p0, t8 * p1, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m14706((t2794 *)__this->f9,p0, p1, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t990  (*FunctionPointerType) (t5 *, t5 * __this, int32_t p0, t8 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	typedef t990  (*FunctionPointerType) (t5 * __this, int32_t p0, t8 * p1, MethodInfo* method);
	return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m14707_MI;
 t5 * m14707 (t2794 * __this, int32_t p0, t8 * p1, t222 * p2, t5 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t98_TI), &p0);
	__d_args[1] = p1;
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m14708_MI;
 t990  m14708 (t2794 * __this, t5 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t990 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<SoundEffects/AudioClipType,UnityEngine.AudioClip,System.Collections.DictionaryEntry>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2794_m14705_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14705_GM;
MethodInfo m14705_MI = 
{
	".ctor", (methodPointerType)&m14705, &t2794_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2794_m14705_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14705_GM};
extern Il2CppType t98_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t2794_m14706_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t990_0_0_0;
extern void* RuntimeInvoker_t990_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14706_GM;
MethodInfo m14706_MI = 
{
	"Invoke", (methodPointerType)&m14706, &t2794_TI, &t990_0_0_0, RuntimeInvoker_t990_t110_t5, t2794_m14706_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14706_GM};
extern Il2CppType t98_0_0_0;
extern Il2CppType t8_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2794_m14707_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t110_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14707_GM;
MethodInfo m14707_MI = 
{
	"BeginInvoke", (methodPointerType)&m14707, &t2794_TI, &t221_0_0_0, RuntimeInvoker_t5_t110_t5_t5_t5, t2794_m14707_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL, &m14707_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2794_m14708_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t990_0_0_0;
extern void* RuntimeInvoker_t990_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14708_GM;
MethodInfo m14708_MI = 
{
	"EndInvoke", (methodPointerType)&m14708, &t2794_TI, &t990_0_0_0, RuntimeInvoker_t990_t5, t2794_m14708_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14708_GM};
static MethodInfo* t2794_MIs[] =
{
	&m14705_MI,
	&m14706_MI,
	&m14707_MI,
	&m14708_MI,
	NULL
};
static MethodInfo* t2794_VT[] =
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
	&m14706_MI,
	&m14707_MI,
	&m14708_MI,
};
static Il2CppInterfaceOffsetPair t2794_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2794_0_0_0;
extern Il2CppType t2794_1_0_0;
struct t2794;
extern Il2CppGenericClass t2794_GC;
TypeInfo t2794_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2794_MIs, NULL, NULL, NULL, &t353_TI, NULL, &t1517_TI, &t2794_TI, NULL, t2794_VT, &EmptyCustomAttributesCache, &t2794_TI, &t2794_0_0_0, &t2794_1_0_0, t2794_IOs, &t2794_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2794), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif



 void m14709 (t2804 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m14710_MI;
 t2797  m14710 (t2804 * __this, int32_t p0, t8 * p1, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m14710((t2804 *)__this->f9,p0, p1, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t2797  (*FunctionPointerType) (t5 *, t5 * __this, int32_t p0, t8 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	typedef t2797  (*FunctionPointerType) (t5 * __this, int32_t p0, t8 * p1, MethodInfo* method);
	return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m14711_MI;
 t5 * m14711 (t2804 * __this, int32_t p0, t8 * p1, t222 * p2, t5 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t98_TI), &p0);
	__d_args[1] = p1;
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m14712_MI;
 t2797  m14712 (t2804 * __this, t5 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t2797 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<SoundEffects/AudioClipType,UnityEngine.AudioClip,System.Collections.Generic.KeyValuePair`2<SoundEffects/AudioClipType,UnityEngine.AudioClip>>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t2804_m14709_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14709_GM;
MethodInfo m14709_MI = 
{
	".ctor", (methodPointerType)&m14709, &t2804_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t2804_m14709_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14709_GM};
extern Il2CppType t98_0_0_0;
extern Il2CppType t8_0_0_0;
static ParameterInfo t2804_m14710_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
};
extern Il2CppType t2797_0_0_0;
extern void* RuntimeInvoker_t2797_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14710_GM;
MethodInfo m14710_MI = 
{
	"Invoke", (methodPointerType)&m14710, &t2804_TI, &t2797_0_0_0, RuntimeInvoker_t2797_t110_t5, t2804_m14710_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14710_GM};
extern Il2CppType t98_0_0_0;
extern Il2CppType t8_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2804_m14711_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t8_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t110_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14711_GM;
MethodInfo m14711_MI = 
{
	"BeginInvoke", (methodPointerType)&m14711, &t2804_TI, &t221_0_0_0, RuntimeInvoker_t5_t110_t5_t5_t5, t2804_m14711_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL, &m14711_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t2804_m14712_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t2797_0_0_0;
extern void* RuntimeInvoker_t2797_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14712_GM;
MethodInfo m14712_MI = 
{
	"EndInvoke", (methodPointerType)&m14712, &t2804_TI, &t2797_0_0_0, RuntimeInvoker_t2797_t5, t2804_m14712_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14712_GM};
static MethodInfo* t2804_MIs[] =
{
	&m14709_MI,
	&m14710_MI,
	&m14711_MI,
	&m14712_MI,
	NULL
};
static MethodInfo* t2804_VT[] =
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
	&m14710_MI,
	&m14711_MI,
	&m14712_MI,
};
static Il2CppInterfaceOffsetPair t2804_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2804_0_0_0;
extern Il2CppType t2804_1_0_0;
struct t2804;
extern Il2CppGenericClass t2804_GC;
TypeInfo t2804_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2804_MIs, NULL, NULL, NULL, &t353_TI, NULL, &t1517_TI, &t2804_TI, NULL, t2804_VT, &EmptyCustomAttributesCache, &t2804_TI, &t2804_0_0_0, &t2804_1_0_0, t2804_IOs, &t2804_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2804), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m11460_MI;
extern MethodInfo m14715_MI;


 void m14713 (t2805 * __this, t100 * p0, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		t2799  L_0 = m14652(p0, &m14652_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m14714_MI;
 bool m14714 (t2805 * __this, MethodInfo* method){
	{
		t2799 * L_0 = &(__this->f0);
		bool L_1 = m14694(L_0, &m14694_MI);
		return L_1;
	}
}
 t990  m14715 (t2805 * __this, MethodInfo* method){
	{
		t2799  L_0 = (__this->f0);
		t2799  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t2799_TI), &L_1);
		t990  L_3 = (t990 )InterfaceFuncInvoker0< t990  >::Invoke(&m11460_MI, L_2);
		return L_3;
	}
}
extern MethodInfo m14716_MI;
 t5 * m14716 (t2805 * __this, MethodInfo* method){
	t2797  V_0 = {0};
	{
		t2799 * L_0 = &(__this->f0);
		t2797  L_1 = m14695(L_0, &m14695_MI);
		V_0 = L_1;
		int32_t L_2 = m14655((&V_0), &m14655_MI);
		int32_t L_3 = L_2;
		t5 * L_4 = Box(InitializedTypeInfo(&t98_TI), &L_3);
		return L_4;
	}
}
extern MethodInfo m14717_MI;
 t5 * m14717 (t2805 * __this, MethodInfo* method){
	t2797  V_0 = {0};
	{
		t2799 * L_0 = &(__this->f0);
		t2797  L_1 = m14695(L_0, &m14695_MI);
		V_0 = L_1;
		t8 * L_2 = m14657((&V_0), &m14657_MI);
		t8 * L_3 = L_2;
		return ((t8 *)L_3);
	}
}
extern MethodInfo m14718_MI;
 t5 * m14718 (t2805 * __this, MethodInfo* method){
	{
		t990  L_0 = (t990 )VirtFuncInvoker0< t990  >::Invoke(&m14715_MI, __this);
		t990  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t990_TI), &L_1);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ShimEnumerator<SoundEffects/AudioClipType,UnityEngine.AudioClip>
extern Il2CppType t2799_0_0_1;
FieldInfo t2805_f0_FieldInfo = 
{
	"host_enumerator", &t2799_0_0_1, &t2805_TI, offsetof(t2805, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2805_FIs[] =
{
	&t2805_f0_FieldInfo,
	NULL
};
static PropertyInfo t2805____Entry_PropertyInfo = 
{
	&t2805_TI, "Entry", &m14715_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2805____Key_PropertyInfo = 
{
	&t2805_TI, "Key", &m14716_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2805____Value_PropertyInfo = 
{
	&t2805_TI, "Value", &m14717_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2805____Current_PropertyInfo = 
{
	&t2805_TI, "Current", &m14718_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2805_PIs[] =
{
	&t2805____Entry_PropertyInfo,
	&t2805____Key_PropertyInfo,
	&t2805____Value_PropertyInfo,
	&t2805____Current_PropertyInfo,
	NULL
};
extern Il2CppType t100_0_0_0;
static ParameterInfo t2805_m14713_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14713_GM;
MethodInfo m14713_MI = 
{
	".ctor", (methodPointerType)&m14713, &t2805_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2805_m14713_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14713_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14714_GM;
MethodInfo m14714_MI = 
{
	"MoveNext", (methodPointerType)&m14714, &t2805_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14714_GM};
extern Il2CppType t990_0_0_0;
extern void* RuntimeInvoker_t990 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14715_GM;
MethodInfo m14715_MI = 
{
	"get_Entry", (methodPointerType)&m14715, &t2805_TI, &t990_0_0_0, RuntimeInvoker_t990, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14715_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14716_GM;
MethodInfo m14716_MI = 
{
	"get_Key", (methodPointerType)&m14716, &t2805_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14716_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14717_GM;
MethodInfo m14717_MI = 
{
	"get_Value", (methodPointerType)&m14717, &t2805_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14717_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14718_GM;
MethodInfo m14718_MI = 
{
	"get_Current", (methodPointerType)&m14718, &t2805_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14718_GM};
static MethodInfo* t2805_MIs[] =
{
	&m14713_MI,
	&m14714_MI,
	&m14715_MI,
	&m14716_MI,
	&m14717_MI,
	&m14718_MI,
	NULL
};
static MethodInfo* t2805_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14718_MI,
	&m14714_MI,
	&m14715_MI,
	&m14716_MI,
	&m14717_MI,
};
static TypeInfo* t2805_ITIs[] = 
{
	&t196_TI,
	&t987_TI,
};
static Il2CppInterfaceOffsetPair t2805_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t987_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2805_0_0_0;
extern Il2CppType t2805_1_0_0;
struct t2805;
extern Il2CppGenericClass t2805_GC;
TypeInfo t2805_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ShimEnumerator", "", t2805_MIs, t2805_PIs, t2805_FIs, NULL, &t5_TI, NULL, &t1517_TI, &t2805_TI, t2805_ITIs, t2805_VT, &EmptyCustomAttributesCache, &t2805_TI, &t2805_0_0_0, &t2805_1_0_0, t2805_IOs, &t2805_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2805), 0, -1, 0, 0, -1, 1056771, 0, false, false, false, false, true, false, false, false, false, false, false, false, 6, 4, 1, 0, 0, 9, 2, 2};
#ifndef _MSC_VER
#else
#endif

#include "t2807.h"
extern TypeInfo t7580_TI;
extern TypeInfo t2807_TI;
#include "t2807MD.h"
extern Il2CppType t7580_0_0_0;
extern MethodInfo m14724_MI;
extern MethodInfo m32260_MI;
extern MethodInfo m32261_MI;


extern MethodInfo m14719_MI;
 void m14719 (t2806 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m14720_MI;
 void m14720 (t5 * __this, MethodInfo* method){
	t2807 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2807 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t2807_TI));
	m14724(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m14724_MI);
	((t2806_SFs*)InitializedTypeInfo(&t2806_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern MethodInfo m14721_MI;
 int32_t m14721 (t2806 * __this, t5 * p0, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&m32260_MI, __this, ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t98_TI))))));
		return L_0;
	}
}
extern MethodInfo m14722_MI;
 bool m14722 (t2806 * __this, t5 * p0, t5 * p1, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m32261_MI, __this, ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t98_TI))))), ((*(int32_t*)((int32_t*)UnBox (p1, InitializedTypeInfo(&t98_TI))))));
		return L_0;
	}
}
 t2806 * m14723 (t5 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2806_TI));
		return (((t2806_SFs*)InitializedTypeInfo(&t2806_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<SoundEffects/AudioClipType>
extern Il2CppType t2806_0_0_49;
FieldInfo t2806_f0_FieldInfo = 
{
	"_default", &t2806_0_0_49, &t2806_TI, offsetof(t2806_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2806_FIs[] =
{
	&t2806_f0_FieldInfo,
	NULL
};
static PropertyInfo t2806____Default_PropertyInfo = 
{
	&t2806_TI, "Default", &m14723_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2806_PIs[] =
{
	&t2806____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14719_GM;
MethodInfo m14719_MI = 
{
	".ctor", (methodPointerType)&m14719, &t2806_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14719_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14720_GM;
MethodInfo m14720_MI = 
{
	".cctor", (methodPointerType)&m14720, &t2806_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14720_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2806_m14721_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14721_GM;
MethodInfo m14721_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m14721, &t2806_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2806_m14721_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14721_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2806_m14722_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14722_GM;
MethodInfo m14722_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m14722, &t2806_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2806_m14722_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14722_GM};
extern Il2CppType t98_0_0_0;
static ParameterInfo t2806_m32260_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32260_GM;
MethodInfo m32260_MI = 
{
	"GetHashCode", NULL, &t2806_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t2806_m32260_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32260_GM};
extern Il2CppType t98_0_0_0;
extern Il2CppType t98_0_0_0;
static ParameterInfo t2806_m32261_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32261_GM;
MethodInfo m32261_MI = 
{
	"Equals", NULL, &t2806_TI, &t108_0_0_0, RuntimeInvoker_t108_t110_t110, t2806_m32261_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m32261_GM};
extern Il2CppType t2806_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14723_GM;
MethodInfo m14723_MI = 
{
	"get_Default", (methodPointerType)&m14723, &t2806_TI, &t2806_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14723_GM};
static MethodInfo* t2806_MIs[] =
{
	&m14719_MI,
	&m14720_MI,
	&m14721_MI,
	&m14722_MI,
	&m32260_MI,
	&m32261_MI,
	&m14723_MI,
	NULL
};
static MethodInfo* t2806_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m32261_MI,
	&m32260_MI,
	&m14722_MI,
	&m14721_MI,
	NULL,
	NULL,
};
static TypeInfo* t2806_ITIs[] = 
{
	&t2793_TI,
	&t998_TI,
};
static Il2CppInterfaceOffsetPair t2806_IOs[] = 
{
	{ &t2793_TI, 4},
	{ &t998_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2806_0_0_0;
extern Il2CppType t2806_1_0_0;
struct t2806;
extern Il2CppGenericClass t2806_GC;
TypeInfo t2806_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2806_MIs, t2806_PIs, t2806_FIs, NULL, &t5_TI, NULL, NULL, &t2806_TI, t2806_ITIs, t2806_VT, &EmptyCustomAttributesCache, &t2806_TI, &t2806_0_0_0, &t2806_1_0_0, t2806_IOs, &t2806_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2806), 0, -1, sizeof(t2806_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.IEquatable`1<SoundEffects/AudioClipType>
extern Il2CppType t98_0_0_0;
static ParameterInfo t7580_m32262_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32262_GM;
MethodInfo m32262_MI = 
{
	"Equals", NULL, &t7580_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7580_m32262_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m32262_GM};
static MethodInfo* t7580_MIs[] =
{
	&m32262_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7580_1_0_0;
struct t7580;
extern Il2CppGenericClass t7580_GC;
TypeInfo t7580_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t7580_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7580_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7580_TI, &t7580_0_0_0, &t7580_1_0_0, NULL, &t7580_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



 void m14724 (t2807 * __this, MethodInfo* method){
	{
		m14719(__this, &m14719_MI);
		return;
	}
}
extern MethodInfo m14725_MI;
 int32_t m14725 (t2807 * __this, int32_t p0, MethodInfo* method){
	{
		int32_t L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t98_TI), &L_0);
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m466_MI, Box(InitializedTypeInfo(&t98_TI), &(*(&p0))));
		return L_2;
	}
}
extern MethodInfo m14726_MI;
 bool m14726 (t2807 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		int32_t L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t98_TI), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t98_TI), &L_2);
		return ((((t5 *)L_3) == ((t5 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		int32_t L_4 = p1;
		t5 * L_5 = Box(InitializedTypeInfo(&t98_TI), &L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t98_TI), &(*(&p0))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<SoundEffects/AudioClipType>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14724_GM;
MethodInfo m14724_MI = 
{
	".ctor", (methodPointerType)&m14724, &t2807_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14724_GM};
extern Il2CppType t98_0_0_0;
static ParameterInfo t2807_m14725_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14725_GM;
MethodInfo m14725_MI = 
{
	"GetHashCode", (methodPointerType)&m14725, &t2807_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t2807_m14725_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14725_GM};
extern Il2CppType t98_0_0_0;
extern Il2CppType t98_0_0_0;
static ParameterInfo t2807_m14726_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14726_GM;
MethodInfo m14726_MI = 
{
	"Equals", (methodPointerType)&m14726, &t2807_TI, &t108_0_0_0, RuntimeInvoker_t108_t110_t110, t2807_m14726_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m14726_GM};
static MethodInfo* t2807_MIs[] =
{
	&m14724_MI,
	&m14725_MI,
	&m14726_MI,
	NULL
};
static MethodInfo* t2807_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m14726_MI,
	&m14725_MI,
	&m14722_MI,
	&m14721_MI,
	&m14725_MI,
	&m14726_MI,
};
static Il2CppInterfaceOffsetPair t2807_IOs[] = 
{
	{ &t2793_TI, 4},
	{ &t998_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2807_0_0_0;
extern Il2CppType t2807_1_0_0;
struct t2807;
extern Il2CppGenericClass t2807_GC;
TypeInfo t2807_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2807_MIs, NULL, NULL, NULL, &t2806_TI, NULL, &t1519_TI, &t2807_TI, NULL, t2807_VT, &EmptyCustomAttributesCache, &t2807_TI, &t2807_0_0_0, &t2807_1_0_0, t2807_IOs, &t2807_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2807), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4774_TI;

#include "t82.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<SwipeInput>
extern MethodInfo m32263_MI;
static PropertyInfo t4774____Current_PropertyInfo = 
{
	&t4774_TI, "Current", &m32263_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4774_PIs[] =
{
	&t4774____Current_PropertyInfo,
	NULL
};
extern Il2CppType t82_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m32263_GM;
MethodInfo m32263_MI = 
{
	"get_Current", NULL, &t4774_TI, &t82_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m32263_GM};
static MethodInfo* t4774_MIs[] =
{
	&m32263_MI,
	NULL
};
static TypeInfo* t4774_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4774_0_0_0;
extern Il2CppType t4774_1_0_0;
struct t4774;
extern Il2CppGenericClass t4774_GC;
TypeInfo t4774_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4774_MIs, t4774_PIs, NULL, NULL, NULL, NULL, NULL, &t4774_TI, t4774_ITIs, NULL, &EmptyCustomAttributesCache, &t4774_TI, &t4774_0_0_0, &t4774_1_0_0, NULL, &t4774_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2808.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2808_TI;
#include "t2808MD.h"

extern TypeInfo t82_TI;
extern MethodInfo m14731_MI;
extern MethodInfo m24687_MI;
struct t107;
#define m24687(__this, p0, method) (t82 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<SwipeInput>
extern Il2CppType t107_0_0_1;
FieldInfo t2808_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t2808_TI, offsetof(t2808, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2808_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t2808_TI, offsetof(t2808, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t2808_FIs[] =
{
	&t2808_f0_FieldInfo,
	&t2808_f1_FieldInfo,
	NULL
};
extern MethodInfo m14728_MI;
static PropertyInfo t2808____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2808_TI, "System.Collections.IEnumerator.Current", &m14728_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2808____Current_PropertyInfo = 
{
	&t2808_TI, "Current", &m14731_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2808_PIs[] =
{
	&t2808____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2808____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t2808_m14727_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14727_GM;
MethodInfo m14727_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t2808_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2808_m14727_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m14727_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14728_GM;
MethodInfo m14728_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t2808_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14728_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14729_GM;
MethodInfo m14729_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t2808_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14729_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14730_GM;
MethodInfo m14730_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t2808_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14730_GM};
extern Il2CppType t82_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m14731_GM;
MethodInfo m14731_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t2808_TI, &t82_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m14731_GM};
static MethodInfo* t2808_MIs[] =
{
	&m14727_MI,
	&m14728_MI,
	&m14729_MI,
	&m14730_MI,
	&m14731_MI,
	NULL
};
extern MethodInfo m14730_MI;
extern MethodInfo m14729_MI;
static MethodInfo* t2808_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m14728_MI,
	&m14730_MI,
	&m14729_MI,
	&m14731_MI,
};
static TypeInfo* t2808_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t4774_TI,
};
static Il2CppInterfaceOffsetPair t2808_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t4774_TI, 7},
};
extern TypeInfo t82_TI;
static Il2CppRGCTXData t2808_RGCTXData[3] = 
{
	&m14731_MI/* Method Usage */,
	&t82_TI/* Class Usage */,
	&m24687_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2808_0_0_0;
extern Il2CppType t2808_1_0_0;
extern Il2CppGenericClass t2808_GC;
TypeInfo t2808_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2808_MIs, t2808_PIs, t2808_FIs, NULL, &t267_TI, NULL, &t107_TI, &t2808_TI, t2808_ITIs, t2808_VT, &EmptyCustomAttributesCache, &t2808_TI, &t2808_0_0_0, &t2808_1_0_0, t2808_IOs, &t2808_GC, NULL, NULL, NULL, t2808_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2808)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
