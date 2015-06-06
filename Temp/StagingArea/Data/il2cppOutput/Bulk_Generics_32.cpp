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
extern TypeInfo t6933_TI;

#include "t110.h"
#include "t108.h"
#include "t109.h"
#include "t774.h"
#include "mscorlib_ArrayTypes.h"

#include "t107.h"

// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>
extern MethodInfo m37081_MI;
static PropertyInfo t6933____Count_PropertyInfo = 
{
	&t6933_TI, "Count", &m37081_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m37082_MI;
static PropertyInfo t6933____IsReadOnly_PropertyInfo = 
{
	&t6933_TI, "IsReadOnly", &m37082_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6933_PIs[] =
{
	&t6933____Count_PropertyInfo,
	&t6933____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37081_GM;
MethodInfo m37081_MI = 
{
	"get_Count", NULL, &t6933_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37081_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37082_GM;
MethodInfo m37082_MI = 
{
	"get_IsReadOnly", NULL, &t6933_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37082_GM};
extern Il2CppType t774_0_0_0;
extern Il2CppType t774_0_0_0;
static ParameterInfo t6933_m37083_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t774_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37083_GM;
MethodInfo m37083_MI = 
{
	"Add", NULL, &t6933_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6933_m37083_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37083_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37084_GM;
MethodInfo m37084_MI = 
{
	"Clear", NULL, &t6933_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37084_GM};
extern Il2CppType t774_0_0_0;
static ParameterInfo t6933_m37085_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t774_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37085_GM;
MethodInfo m37085_MI = 
{
	"Contains", NULL, &t6933_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6933_m37085_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37085_GM};
extern Il2CppType t1661_0_0_0;
extern Il2CppType t1661_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6933_m37086_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1661_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37086_GM;
MethodInfo m37086_MI = 
{
	"CopyTo", NULL, &t6933_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6933_m37086_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37086_GM};
extern Il2CppType t774_0_0_0;
static ParameterInfo t6933_m37087_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t774_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37087_GM;
MethodInfo m37087_MI = 
{
	"Remove", NULL, &t6933_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6933_m37087_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37087_GM};
static MethodInfo* t6933_MIs[] =
{
	&m37081_MI,
	&m37082_MI,
	&m37083_MI,
	&m37084_MI,
	&m37085_MI,
	&m37086_MI,
	&m37087_MI,
	NULL
};
extern TypeInfo t739_TI;
extern TypeInfo t6935_TI;
static TypeInfo* t6933_ITIs[] = 
{
	&t739_TI,
	&t6935_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6933_0_0_0;
extern Il2CppType t6933_1_0_0;
struct t6933;
extern Il2CppGenericClass t6933_GC;
TypeInfo t6933_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6933_MIs, t6933_PIs, NULL, NULL, NULL, NULL, NULL, &t6933_TI, t6933_ITIs, NULL, &EmptyCustomAttributesCache, &t6933_TI, &t6933_0_0_0, &t6933_1_0_0, NULL, &t6933_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.MethodBase>
extern Il2CppType t5452_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37088_GM;
MethodInfo m37088_MI = 
{
	"GetEnumerator", NULL, &t6935_TI, &t5452_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37088_GM};
static MethodInfo* t6935_MIs[] =
{
	&m37088_MI,
	NULL
};
static TypeInfo* t6935_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6935_0_0_0;
extern Il2CppType t6935_1_0_0;
struct t6935;
extern Il2CppGenericClass t6935_GC;
TypeInfo t6935_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6935_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6935_TI, t6935_ITIs, NULL, &EmptyCustomAttributesCache, &t6935_TI, &t6935_0_0_0, &t6935_1_0_0, NULL, &t6935_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5452_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.MethodBase>
extern MethodInfo m37089_MI;
static PropertyInfo t5452____Current_PropertyInfo = 
{
	&t5452_TI, "Current", &m37089_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5452_PIs[] =
{
	&t5452____Current_PropertyInfo,
	NULL
};
extern Il2CppType t774_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37089_GM;
MethodInfo m37089_MI = 
{
	"get_Current", NULL, &t5452_TI, &t774_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37089_GM};
static MethodInfo* t5452_MIs[] =
{
	&m37089_MI,
	NULL
};
extern TypeInfo t196_TI;
extern TypeInfo t132_TI;
static TypeInfo* t5452_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5452_0_0_0;
extern Il2CppType t5452_1_0_0;
struct t5452;
extern Il2CppGenericClass t5452_GC;
TypeInfo t5452_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5452_MIs, t5452_PIs, NULL, NULL, NULL, NULL, NULL, &t5452_TI, t5452_ITIs, NULL, &EmptyCustomAttributesCache, &t5452_TI, &t5452_0_0_0, &t5452_1_0_0, NULL, &t5452_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3921.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3921_TI;
#include "t3921MD.h"

#include "t5.h"
#include "t11.h"
#include "t133.h"
extern TypeInfo t774_TI;
extern TypeInfo t133_TI;
#include "t133MD.h"
#include "t107MD.h"
extern MethodInfo m22341_MI;
extern MethodInfo m4759_MI;
extern MethodInfo m4764_MI;
extern MethodInfo m28925_MI;
struct t107;
#include "t1181.h"
struct t107;
 t5 * m23596_gshared (t107 * __this, int32_t p0, MethodInfo* method);
#define m23596(__this, p0, method) (t5 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
#define m28925(__this, p0, method) (t774 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.MethodBase>
extern Il2CppType t107_0_0_1;
FieldInfo t3921_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3921_TI, offsetof(t3921, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3921_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3921_TI, offsetof(t3921, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3921_FIs[] =
{
	&t3921_f0_FieldInfo,
	&t3921_f1_FieldInfo,
	NULL
};
extern MethodInfo m22338_MI;
static PropertyInfo t3921____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3921_TI, "System.Collections.IEnumerator.Current", &m22338_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3921____Current_PropertyInfo = 
{
	&t3921_TI, "Current", &m22341_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3921_PIs[] =
{
	&t3921____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3921____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
extern Il2CppType t107_0_0_0;
static ParameterInfo t3921_m22337_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22337_GM;
MethodInfo m22337_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3921_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3921_m22337_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22337_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22338_GM;
MethodInfo m22338_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3921_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22338_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22339_GM;
MethodInfo m22339_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3921_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22339_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22340_GM;
MethodInfo m22340_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3921_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22340_GM};
extern Il2CppType t774_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22341_GM;
MethodInfo m22341_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3921_TI, &t774_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22341_GM};
static MethodInfo* t3921_MIs[] =
{
	&m22337_MI,
	&m22338_MI,
	&m22339_MI,
	&m22340_MI,
	&m22341_MI,
	NULL
};
extern MethodInfo m2042_MI;
extern MethodInfo m465_MI;
extern MethodInfo m2043_MI;
extern MethodInfo m2148_MI;
extern MethodInfo m22340_MI;
extern MethodInfo m22339_MI;
static MethodInfo* t3921_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m22338_MI,
	&m22340_MI,
	&m22339_MI,
	&m22341_MI,
};
static TypeInfo* t3921_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5452_TI,
};
static Il2CppInterfaceOffsetPair t3921_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5452_TI, 7},
};
extern TypeInfo t774_TI;
static Il2CppRGCTXData t3921_RGCTXData[3] = 
{
	&m22341_MI/* Method Usage */,
	&t774_TI/* Class Usage */,
	&m28925_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3921_0_0_0;
extern Il2CppType t3921_1_0_0;
extern TypeInfo t267_TI;
extern Il2CppGenericClass t3921_GC;
extern TypeInfo t107_TI;
TypeInfo t3921_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3921_MIs, t3921_PIs, t3921_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3921_TI, t3921_ITIs, t3921_VT, &EmptyCustomAttributesCache, &t3921_TI, &t3921_0_0_0, &t3921_1_0_0, t3921_IOs, &t3921_GC, NULL, NULL, NULL, t3921_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3921)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6934_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.MethodBase>
extern MethodInfo m37090_MI;
extern MethodInfo m37091_MI;
static PropertyInfo t6934____Item_PropertyInfo = 
{
	&t6934_TI, "Item", &m37090_MI, &m37091_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6934_PIs[] =
{
	&t6934____Item_PropertyInfo,
	NULL
};
extern Il2CppType t774_0_0_0;
static ParameterInfo t6934_m37092_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t774_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37092_GM;
MethodInfo m37092_MI = 
{
	"IndexOf", NULL, &t6934_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6934_m37092_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37092_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t774_0_0_0;
static ParameterInfo t6934_m37093_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t774_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37093_GM;
MethodInfo m37093_MI = 
{
	"Insert", NULL, &t6934_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6934_m37093_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37093_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6934_m37094_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37094_GM;
MethodInfo m37094_MI = 
{
	"RemoveAt", NULL, &t6934_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6934_m37094_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37094_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6934_m37090_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t774_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37090_GM;
MethodInfo m37090_MI = 
{
	"get_Item", NULL, &t6934_TI, &t774_0_0_0, RuntimeInvoker_t5_t110, t6934_m37090_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37090_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t774_0_0_0;
static ParameterInfo t6934_m37091_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t774_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37091_GM;
MethodInfo m37091_MI = 
{
	"set_Item", NULL, &t6934_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6934_m37091_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37091_GM};
static MethodInfo* t6934_MIs[] =
{
	&m37092_MI,
	&m37093_MI,
	&m37094_MI,
	&m37090_MI,
	&m37091_MI,
	NULL
};
static TypeInfo* t6934_ITIs[] = 
{
	&t739_TI,
	&t6933_TI,
	&t6935_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6934_0_0_0;
extern Il2CppType t6934_1_0_0;
struct t6934;
extern Il2CppGenericClass t6934_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6934_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6934_MIs, t6934_PIs, NULL, NULL, NULL, NULL, NULL, &t6934_TI, t6934_ITIs, NULL, &t2240__CustomAttributeCache, &t6934_TI, &t6934_0_0_0, &t6934_1_0_0, NULL, &t6934_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6936_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>
extern MethodInfo m37095_MI;
static PropertyInfo t6936____Count_PropertyInfo = 
{
	&t6936_TI, "Count", &m37095_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m37096_MI;
static PropertyInfo t6936____IsReadOnly_PropertyInfo = 
{
	&t6936_TI, "IsReadOnly", &m37096_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6936_PIs[] =
{
	&t6936____Count_PropertyInfo,
	&t6936____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37095_GM;
MethodInfo m37095_MI = 
{
	"get_Count", NULL, &t6936_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37095_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37096_GM;
MethodInfo m37096_MI = 
{
	"get_IsReadOnly", NULL, &t6936_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37096_GM};
extern Il2CppType t2343_0_0_0;
extern Il2CppType t2343_0_0_0;
static ParameterInfo t6936_m37097_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2343_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37097_GM;
MethodInfo m37097_MI = 
{
	"Add", NULL, &t6936_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6936_m37097_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37097_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37098_GM;
MethodInfo m37098_MI = 
{
	"Clear", NULL, &t6936_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37098_GM};
extern Il2CppType t2343_0_0_0;
static ParameterInfo t6936_m37099_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2343_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37099_GM;
MethodInfo m37099_MI = 
{
	"Contains", NULL, &t6936_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6936_m37099_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37099_GM};
extern Il2CppType t4216_0_0_0;
extern Il2CppType t4216_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6936_m37100_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4216_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37100_GM;
MethodInfo m37100_MI = 
{
	"CopyTo", NULL, &t6936_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6936_m37100_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37100_GM};
extern Il2CppType t2343_0_0_0;
static ParameterInfo t6936_m37101_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2343_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37101_GM;
MethodInfo m37101_MI = 
{
	"Remove", NULL, &t6936_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6936_m37101_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37101_GM};
static MethodInfo* t6936_MIs[] =
{
	&m37095_MI,
	&m37096_MI,
	&m37097_MI,
	&m37098_MI,
	&m37099_MI,
	&m37100_MI,
	&m37101_MI,
	NULL
};
extern TypeInfo t6938_TI;
static TypeInfo* t6936_ITIs[] = 
{
	&t739_TI,
	&t6938_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6936_0_0_0;
extern Il2CppType t6936_1_0_0;
struct t6936;
extern Il2CppGenericClass t6936_GC;
TypeInfo t6936_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6936_MIs, t6936_PIs, NULL, NULL, NULL, NULL, NULL, &t6936_TI, t6936_ITIs, NULL, &EmptyCustomAttributesCache, &t6936_TI, &t6936_0_0_0, &t6936_1_0_0, NULL, &t6936_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodBase>
extern Il2CppType t5454_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37102_GM;
MethodInfo m37102_MI = 
{
	"GetEnumerator", NULL, &t6938_TI, &t5454_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37102_GM};
static MethodInfo* t6938_MIs[] =
{
	&m37102_MI,
	NULL
};
static TypeInfo* t6938_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6938_0_0_0;
extern Il2CppType t6938_1_0_0;
struct t6938;
extern Il2CppGenericClass t6938_GC;
TypeInfo t6938_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6938_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6938_TI, t6938_ITIs, NULL, &EmptyCustomAttributesCache, &t6938_TI, &t6938_0_0_0, &t6938_1_0_0, NULL, &t6938_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5454_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodBase>
extern MethodInfo m37103_MI;
static PropertyInfo t5454____Current_PropertyInfo = 
{
	&t5454_TI, "Current", &m37103_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5454_PIs[] =
{
	&t5454____Current_PropertyInfo,
	NULL
};
extern Il2CppType t2343_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37103_GM;
MethodInfo m37103_MI = 
{
	"get_Current", NULL, &t5454_TI, &t2343_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37103_GM};
static MethodInfo* t5454_MIs[] =
{
	&m37103_MI,
	NULL
};
static TypeInfo* t5454_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5454_0_0_0;
extern Il2CppType t5454_1_0_0;
struct t5454;
extern Il2CppGenericClass t5454_GC;
TypeInfo t5454_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5454_MIs, t5454_PIs, NULL, NULL, NULL, NULL, NULL, &t5454_TI, t5454_ITIs, NULL, &EmptyCustomAttributesCache, &t5454_TI, &t5454_0_0_0, &t5454_1_0_0, NULL, &t5454_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3922.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3922_TI;
#include "t3922MD.h"

extern TypeInfo t2343_TI;
extern MethodInfo m22346_MI;
extern MethodInfo m28936_MI;
struct t107;
#define m28936(__this, p0, method) (t5 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>
extern Il2CppType t107_0_0_1;
FieldInfo t3922_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3922_TI, offsetof(t3922, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3922_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3922_TI, offsetof(t3922, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3922_FIs[] =
{
	&t3922_f0_FieldInfo,
	&t3922_f1_FieldInfo,
	NULL
};
extern MethodInfo m22343_MI;
static PropertyInfo t3922____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3922_TI, "System.Collections.IEnumerator.Current", &m22343_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3922____Current_PropertyInfo = 
{
	&t3922_TI, "Current", &m22346_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3922_PIs[] =
{
	&t3922____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3922____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3922_m22342_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22342_GM;
MethodInfo m22342_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3922_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3922_m22342_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22342_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22343_GM;
MethodInfo m22343_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3922_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22343_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22344_GM;
MethodInfo m22344_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3922_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22344_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22345_GM;
MethodInfo m22345_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3922_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22345_GM};
extern Il2CppType t2343_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22346_GM;
MethodInfo m22346_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3922_TI, &t2343_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22346_GM};
static MethodInfo* t3922_MIs[] =
{
	&m22342_MI,
	&m22343_MI,
	&m22344_MI,
	&m22345_MI,
	&m22346_MI,
	NULL
};
extern MethodInfo m22345_MI;
extern MethodInfo m22344_MI;
static MethodInfo* t3922_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m22343_MI,
	&m22345_MI,
	&m22344_MI,
	&m22346_MI,
};
static TypeInfo* t3922_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5454_TI,
};
static Il2CppInterfaceOffsetPair t3922_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5454_TI, 7},
};
extern TypeInfo t2343_TI;
static Il2CppRGCTXData t3922_RGCTXData[3] = 
{
	&m22346_MI/* Method Usage */,
	&t2343_TI/* Class Usage */,
	&m28936_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3922_0_0_0;
extern Il2CppType t3922_1_0_0;
extern Il2CppGenericClass t3922_GC;
TypeInfo t3922_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3922_MIs, t3922_PIs, t3922_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3922_TI, t3922_ITIs, t3922_VT, &EmptyCustomAttributesCache, &t3922_TI, &t3922_0_0_0, &t3922_1_0_0, t3922_IOs, &t3922_GC, NULL, NULL, NULL, t3922_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3922)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6937_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>
extern MethodInfo m37104_MI;
extern MethodInfo m37105_MI;
static PropertyInfo t6937____Item_PropertyInfo = 
{
	&t6937_TI, "Item", &m37104_MI, &m37105_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6937_PIs[] =
{
	&t6937____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2343_0_0_0;
static ParameterInfo t6937_m37106_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2343_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37106_GM;
MethodInfo m37106_MI = 
{
	"IndexOf", NULL, &t6937_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6937_m37106_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37106_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2343_0_0_0;
static ParameterInfo t6937_m37107_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2343_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37107_GM;
MethodInfo m37107_MI = 
{
	"Insert", NULL, &t6937_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6937_m37107_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37107_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6937_m37108_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37108_GM;
MethodInfo m37108_MI = 
{
	"RemoveAt", NULL, &t6937_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6937_m37108_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37108_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6937_m37104_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t2343_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37104_GM;
MethodInfo m37104_MI = 
{
	"get_Item", NULL, &t6937_TI, &t2343_0_0_0, RuntimeInvoker_t5_t110, t6937_m37104_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37104_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2343_0_0_0;
static ParameterInfo t6937_m37105_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2343_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37105_GM;
MethodInfo m37105_MI = 
{
	"set_Item", NULL, &t6937_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6937_m37105_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37105_GM};
static MethodInfo* t6937_MIs[] =
{
	&m37106_MI,
	&m37107_MI,
	&m37108_MI,
	&m37104_MI,
	&m37105_MI,
	NULL
};
static TypeInfo* t6937_ITIs[] = 
{
	&t739_TI,
	&t6936_TI,
	&t6938_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6937_0_0_0;
extern Il2CppType t6937_1_0_0;
struct t6937;
extern Il2CppGenericClass t6937_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6937_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6937_MIs, t6937_PIs, NULL, NULL, NULL, NULL, NULL, &t6937_TI, t6937_ITIs, NULL, &t2240__CustomAttributeCache, &t6937_TI, &t6937_0_0_0, &t6937_1_0_0, NULL, &t6937_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5456_TI;

#include "t797.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>
extern MethodInfo m37109_MI;
static PropertyInfo t5456____Current_PropertyInfo = 
{
	&t5456_TI, "Current", &m37109_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5456_PIs[] =
{
	&t5456____Current_PropertyInfo,
	NULL
};
extern Il2CppType t797_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37109_GM;
MethodInfo m37109_MI = 
{
	"get_Current", NULL, &t5456_TI, &t797_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37109_GM};
static MethodInfo* t5456_MIs[] =
{
	&m37109_MI,
	NULL
};
static TypeInfo* t5456_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5456_0_0_0;
extern Il2CppType t5456_1_0_0;
struct t5456;
extern Il2CppGenericClass t5456_GC;
TypeInfo t5456_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5456_MIs, t5456_PIs, NULL, NULL, NULL, NULL, NULL, &t5456_TI, t5456_ITIs, NULL, &EmptyCustomAttributesCache, &t5456_TI, &t5456_0_0_0, &t5456_1_0_0, NULL, &t5456_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3923.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3923_TI;
#include "t3923MD.h"

extern TypeInfo t797_TI;
extern MethodInfo m22351_MI;
extern MethodInfo m28947_MI;
struct t107;
#define m28947(__this, p0, method) (t797 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>
extern Il2CppType t107_0_0_1;
FieldInfo t3923_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3923_TI, offsetof(t3923, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3923_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3923_TI, offsetof(t3923, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3923_FIs[] =
{
	&t3923_f0_FieldInfo,
	&t3923_f1_FieldInfo,
	NULL
};
extern MethodInfo m22348_MI;
static PropertyInfo t3923____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3923_TI, "System.Collections.IEnumerator.Current", &m22348_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3923____Current_PropertyInfo = 
{
	&t3923_TI, "Current", &m22351_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3923_PIs[] =
{
	&t3923____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3923____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3923_m22347_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22347_GM;
MethodInfo m22347_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3923_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3923_m22347_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22347_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22348_GM;
MethodInfo m22348_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3923_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22348_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22349_GM;
MethodInfo m22349_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3923_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22349_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22350_GM;
MethodInfo m22350_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3923_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22350_GM};
extern Il2CppType t797_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22351_GM;
MethodInfo m22351_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3923_TI, &t797_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22351_GM};
static MethodInfo* t3923_MIs[] =
{
	&m22347_MI,
	&m22348_MI,
	&m22349_MI,
	&m22350_MI,
	&m22351_MI,
	NULL
};
extern MethodInfo m22350_MI;
extern MethodInfo m22349_MI;
static MethodInfo* t3923_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m22348_MI,
	&m22350_MI,
	&m22349_MI,
	&m22351_MI,
};
static TypeInfo* t3923_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5456_TI,
};
static Il2CppInterfaceOffsetPair t3923_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5456_TI, 7},
};
extern TypeInfo t797_TI;
static Il2CppRGCTXData t3923_RGCTXData[3] = 
{
	&m22351_MI/* Method Usage */,
	&t797_TI/* Class Usage */,
	&m28947_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3923_0_0_0;
extern Il2CppType t3923_1_0_0;
extern Il2CppGenericClass t3923_GC;
TypeInfo t3923_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3923_MIs, t3923_PIs, t3923_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3923_TI, t3923_ITIs, t3923_VT, &EmptyCustomAttributesCache, &t3923_TI, &t3923_0_0_0, &t3923_1_0_0, t3923_IOs, &t3923_GC, NULL, NULL, NULL, t3923_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3923)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6939_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>
extern MethodInfo m37110_MI;
static PropertyInfo t6939____Count_PropertyInfo = 
{
	&t6939_TI, "Count", &m37110_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m37111_MI;
static PropertyInfo t6939____IsReadOnly_PropertyInfo = 
{
	&t6939_TI, "IsReadOnly", &m37111_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6939_PIs[] =
{
	&t6939____Count_PropertyInfo,
	&t6939____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37110_GM;
MethodInfo m37110_MI = 
{
	"get_Count", NULL, &t6939_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37110_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37111_GM;
MethodInfo m37111_MI = 
{
	"get_IsReadOnly", NULL, &t6939_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37111_GM};
extern Il2CppType t797_0_0_0;
extern Il2CppType t797_0_0_0;
static ParameterInfo t6939_m37112_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t797_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37112_GM;
MethodInfo m37112_MI = 
{
	"Add", NULL, &t6939_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6939_m37112_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37112_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37113_GM;
MethodInfo m37113_MI = 
{
	"Clear", NULL, &t6939_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37113_GM};
extern Il2CppType t797_0_0_0;
static ParameterInfo t6939_m37114_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t797_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37114_GM;
MethodInfo m37114_MI = 
{
	"Contains", NULL, &t6939_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6939_m37114_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37114_GM};
extern Il2CppType t1408_0_0_0;
extern Il2CppType t1408_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6939_m37115_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1408_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37115_GM;
MethodInfo m37115_MI = 
{
	"CopyTo", NULL, &t6939_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6939_m37115_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37115_GM};
extern Il2CppType t797_0_0_0;
static ParameterInfo t6939_m37116_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t797_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37116_GM;
MethodInfo m37116_MI = 
{
	"Remove", NULL, &t6939_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6939_m37116_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37116_GM};
static MethodInfo* t6939_MIs[] =
{
	&m37110_MI,
	&m37111_MI,
	&m37112_MI,
	&m37113_MI,
	&m37114_MI,
	&m37115_MI,
	&m37116_MI,
	NULL
};
extern TypeInfo t6941_TI;
static TypeInfo* t6939_ITIs[] = 
{
	&t739_TI,
	&t6941_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6939_0_0_0;
extern Il2CppType t6939_1_0_0;
struct t6939;
extern Il2CppGenericClass t6939_GC;
TypeInfo t6939_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6939_MIs, t6939_PIs, NULL, NULL, NULL, NULL, NULL, &t6939_TI, t6939_ITIs, NULL, &EmptyCustomAttributesCache, &t6939_TI, &t6939_0_0_0, &t6939_1_0_0, NULL, &t6939_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>
extern Il2CppType t5456_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37117_GM;
MethodInfo m37117_MI = 
{
	"GetEnumerator", NULL, &t6941_TI, &t5456_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37117_GM};
static MethodInfo* t6941_MIs[] =
{
	&m37117_MI,
	NULL
};
static TypeInfo* t6941_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6941_0_0_0;
extern Il2CppType t6941_1_0_0;
struct t6941;
extern Il2CppGenericClass t6941_GC;
TypeInfo t6941_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6941_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6941_TI, t6941_ITIs, NULL, &EmptyCustomAttributesCache, &t6941_TI, &t6941_0_0_0, &t6941_1_0_0, NULL, &t6941_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6940_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>
extern MethodInfo m37118_MI;
extern MethodInfo m37119_MI;
static PropertyInfo t6940____Item_PropertyInfo = 
{
	&t6940_TI, "Item", &m37118_MI, &m37119_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6940_PIs[] =
{
	&t6940____Item_PropertyInfo,
	NULL
};
extern Il2CppType t797_0_0_0;
static ParameterInfo t6940_m37120_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t797_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37120_GM;
MethodInfo m37120_MI = 
{
	"IndexOf", NULL, &t6940_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6940_m37120_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37120_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t797_0_0_0;
static ParameterInfo t6940_m37121_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t797_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37121_GM;
MethodInfo m37121_MI = 
{
	"Insert", NULL, &t6940_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6940_m37121_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37121_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6940_m37122_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37122_GM;
MethodInfo m37122_MI = 
{
	"RemoveAt", NULL, &t6940_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6940_m37122_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37122_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6940_m37118_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t797_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37118_GM;
MethodInfo m37118_MI = 
{
	"get_Item", NULL, &t6940_TI, &t797_0_0_0, RuntimeInvoker_t5_t110, t6940_m37118_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37118_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t797_0_0_0;
static ParameterInfo t6940_m37119_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t797_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37119_GM;
MethodInfo m37119_MI = 
{
	"set_Item", NULL, &t6940_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6940_m37119_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37119_GM};
static MethodInfo* t6940_MIs[] =
{
	&m37120_MI,
	&m37121_MI,
	&m37122_MI,
	&m37118_MI,
	&m37119_MI,
	NULL
};
static TypeInfo* t6940_ITIs[] = 
{
	&t739_TI,
	&t6939_TI,
	&t6941_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6940_0_0_0;
extern Il2CppType t6940_1_0_0;
struct t6940;
extern Il2CppGenericClass t6940_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6940_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6940_MIs, t6940_PIs, NULL, NULL, NULL, NULL, NULL, &t6940_TI, t6940_ITIs, NULL, &t2240__CustomAttributeCache, &t6940_TI, &t6940_0_0_0, &t6940_1_0_0, NULL, &t6940_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6942_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>
extern MethodInfo m37123_MI;
static PropertyInfo t6942____Count_PropertyInfo = 
{
	&t6942_TI, "Count", &m37123_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m37124_MI;
static PropertyInfo t6942____IsReadOnly_PropertyInfo = 
{
	&t6942_TI, "IsReadOnly", &m37124_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6942_PIs[] =
{
	&t6942____Count_PropertyInfo,
	&t6942____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37123_GM;
MethodInfo m37123_MI = 
{
	"get_Count", NULL, &t6942_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37123_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37124_GM;
MethodInfo m37124_MI = 
{
	"get_IsReadOnly", NULL, &t6942_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37124_GM};
extern Il2CppType t2342_0_0_0;
extern Il2CppType t2342_0_0_0;
static ParameterInfo t6942_m37125_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2342_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37125_GM;
MethodInfo m37125_MI = 
{
	"Add", NULL, &t6942_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6942_m37125_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37125_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37126_GM;
MethodInfo m37126_MI = 
{
	"Clear", NULL, &t6942_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37126_GM};
extern Il2CppType t2342_0_0_0;
static ParameterInfo t6942_m37127_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2342_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37127_GM;
MethodInfo m37127_MI = 
{
	"Contains", NULL, &t6942_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6942_m37127_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37127_GM};
extern Il2CppType t4217_0_0_0;
extern Il2CppType t4217_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6942_m37128_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4217_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37128_GM;
MethodInfo m37128_MI = 
{
	"CopyTo", NULL, &t6942_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6942_m37128_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37128_GM};
extern Il2CppType t2342_0_0_0;
static ParameterInfo t6942_m37129_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2342_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37129_GM;
MethodInfo m37129_MI = 
{
	"Remove", NULL, &t6942_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6942_m37129_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37129_GM};
static MethodInfo* t6942_MIs[] =
{
	&m37123_MI,
	&m37124_MI,
	&m37125_MI,
	&m37126_MI,
	&m37127_MI,
	&m37128_MI,
	&m37129_MI,
	NULL
};
extern TypeInfo t6944_TI;
static TypeInfo* t6942_ITIs[] = 
{
	&t739_TI,
	&t6944_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6942_0_0_0;
extern Il2CppType t6942_1_0_0;
struct t6942;
extern Il2CppGenericClass t6942_GC;
TypeInfo t6942_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6942_MIs, t6942_PIs, NULL, NULL, NULL, NULL, NULL, &t6942_TI, t6942_ITIs, NULL, &EmptyCustomAttributesCache, &t6942_TI, &t6942_0_0_0, &t6942_1_0_0, NULL, &t6942_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ConstructorInfo>
extern Il2CppType t5458_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37130_GM;
MethodInfo m37130_MI = 
{
	"GetEnumerator", NULL, &t6944_TI, &t5458_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37130_GM};
static MethodInfo* t6944_MIs[] =
{
	&m37130_MI,
	NULL
};
static TypeInfo* t6944_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6944_0_0_0;
extern Il2CppType t6944_1_0_0;
struct t6944;
extern Il2CppGenericClass t6944_GC;
TypeInfo t6944_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6944_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6944_TI, t6944_ITIs, NULL, &EmptyCustomAttributesCache, &t6944_TI, &t6944_0_0_0, &t6944_1_0_0, NULL, &t6944_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5458_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>
extern MethodInfo m37131_MI;
static PropertyInfo t5458____Current_PropertyInfo = 
{
	&t5458_TI, "Current", &m37131_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5458_PIs[] =
{
	&t5458____Current_PropertyInfo,
	NULL
};
extern Il2CppType t2342_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37131_GM;
MethodInfo m37131_MI = 
{
	"get_Current", NULL, &t5458_TI, &t2342_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37131_GM};
static MethodInfo* t5458_MIs[] =
{
	&m37131_MI,
	NULL
};
static TypeInfo* t5458_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5458_0_0_0;
extern Il2CppType t5458_1_0_0;
struct t5458;
extern Il2CppGenericClass t5458_GC;
TypeInfo t5458_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5458_MIs, t5458_PIs, NULL, NULL, NULL, NULL, NULL, &t5458_TI, t5458_ITIs, NULL, &EmptyCustomAttributesCache, &t5458_TI, &t5458_0_0_0, &t5458_1_0_0, NULL, &t5458_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3924.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3924_TI;
#include "t3924MD.h"

extern TypeInfo t2342_TI;
extern MethodInfo m22356_MI;
extern MethodInfo m28958_MI;
struct t107;
#define m28958(__this, p0, method) (t5 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>
extern Il2CppType t107_0_0_1;
FieldInfo t3924_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3924_TI, offsetof(t3924, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3924_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3924_TI, offsetof(t3924, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3924_FIs[] =
{
	&t3924_f0_FieldInfo,
	&t3924_f1_FieldInfo,
	NULL
};
extern MethodInfo m22353_MI;
static PropertyInfo t3924____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3924_TI, "System.Collections.IEnumerator.Current", &m22353_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3924____Current_PropertyInfo = 
{
	&t3924_TI, "Current", &m22356_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3924_PIs[] =
{
	&t3924____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3924____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3924_m22352_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22352_GM;
MethodInfo m22352_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3924_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3924_m22352_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22352_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22353_GM;
MethodInfo m22353_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3924_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22353_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22354_GM;
MethodInfo m22354_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3924_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22354_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22355_GM;
MethodInfo m22355_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3924_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22355_GM};
extern Il2CppType t2342_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22356_GM;
MethodInfo m22356_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3924_TI, &t2342_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22356_GM};
static MethodInfo* t3924_MIs[] =
{
	&m22352_MI,
	&m22353_MI,
	&m22354_MI,
	&m22355_MI,
	&m22356_MI,
	NULL
};
extern MethodInfo m22355_MI;
extern MethodInfo m22354_MI;
static MethodInfo* t3924_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m22353_MI,
	&m22355_MI,
	&m22354_MI,
	&m22356_MI,
};
static TypeInfo* t3924_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5458_TI,
};
static Il2CppInterfaceOffsetPair t3924_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5458_TI, 7},
};
extern TypeInfo t2342_TI;
static Il2CppRGCTXData t3924_RGCTXData[3] = 
{
	&m22356_MI/* Method Usage */,
	&t2342_TI/* Class Usage */,
	&m28958_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3924_0_0_0;
extern Il2CppType t3924_1_0_0;
extern Il2CppGenericClass t3924_GC;
TypeInfo t3924_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3924_MIs, t3924_PIs, t3924_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3924_TI, t3924_ITIs, t3924_VT, &EmptyCustomAttributesCache, &t3924_TI, &t3924_0_0_0, &t3924_1_0_0, t3924_IOs, &t3924_GC, NULL, NULL, NULL, t3924_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3924)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6943_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>
extern MethodInfo m37132_MI;
extern MethodInfo m37133_MI;
static PropertyInfo t6943____Item_PropertyInfo = 
{
	&t6943_TI, "Item", &m37132_MI, &m37133_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6943_PIs[] =
{
	&t6943____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2342_0_0_0;
static ParameterInfo t6943_m37134_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2342_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37134_GM;
MethodInfo m37134_MI = 
{
	"IndexOf", NULL, &t6943_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6943_m37134_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37134_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2342_0_0_0;
static ParameterInfo t6943_m37135_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2342_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37135_GM;
MethodInfo m37135_MI = 
{
	"Insert", NULL, &t6943_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6943_m37135_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37135_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6943_m37136_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37136_GM;
MethodInfo m37136_MI = 
{
	"RemoveAt", NULL, &t6943_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6943_m37136_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37136_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6943_m37132_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t2342_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37132_GM;
MethodInfo m37132_MI = 
{
	"get_Item", NULL, &t6943_TI, &t2342_0_0_0, RuntimeInvoker_t5_t110, t6943_m37132_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37132_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2342_0_0_0;
static ParameterInfo t6943_m37133_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2342_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37133_GM;
MethodInfo m37133_MI = 
{
	"set_Item", NULL, &t6943_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6943_m37133_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37133_GM};
static MethodInfo* t6943_MIs[] =
{
	&m37134_MI,
	&m37135_MI,
	&m37136_MI,
	&m37132_MI,
	&m37133_MI,
	NULL
};
static TypeInfo* t6943_ITIs[] = 
{
	&t739_TI,
	&t6942_TI,
	&t6944_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6943_0_0_0;
extern Il2CppType t6943_1_0_0;
struct t6943;
extern Il2CppGenericClass t6943_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6943_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6943_MIs, t6943_PIs, NULL, NULL, NULL, NULL, NULL, &t6943_TI, t6943_ITIs, NULL, &t2240__CustomAttributeCache, &t6943_TI, &t6943_0_0_0, &t6943_1_0_0, NULL, &t6943_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5460_TI;

#include "t1993.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.MonoType>
extern MethodInfo m37137_MI;
static PropertyInfo t5460____Current_PropertyInfo = 
{
	&t5460_TI, "Current", &m37137_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5460_PIs[] =
{
	&t5460____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1993_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37137_GM;
MethodInfo m37137_MI = 
{
	"get_Current", NULL, &t5460_TI, &t1993_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37137_GM};
static MethodInfo* t5460_MIs[] =
{
	&m37137_MI,
	NULL
};
static TypeInfo* t5460_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5460_0_0_0;
extern Il2CppType t5460_1_0_0;
struct t5460;
extern Il2CppGenericClass t5460_GC;
TypeInfo t5460_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5460_MIs, t5460_PIs, NULL, NULL, NULL, NULL, NULL, &t5460_TI, t5460_ITIs, NULL, &EmptyCustomAttributesCache, &t5460_TI, &t5460_0_0_0, &t5460_1_0_0, NULL, &t5460_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3925.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3925_TI;
#include "t3925MD.h"

extern TypeInfo t1993_TI;
extern MethodInfo m22361_MI;
extern MethodInfo m28969_MI;
struct t107;
#define m28969(__this, p0, method) (t1993 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.MonoType>
extern Il2CppType t107_0_0_1;
FieldInfo t3925_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3925_TI, offsetof(t3925, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3925_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3925_TI, offsetof(t3925, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3925_FIs[] =
{
	&t3925_f0_FieldInfo,
	&t3925_f1_FieldInfo,
	NULL
};
extern MethodInfo m22358_MI;
static PropertyInfo t3925____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3925_TI, "System.Collections.IEnumerator.Current", &m22358_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3925____Current_PropertyInfo = 
{
	&t3925_TI, "Current", &m22361_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3925_PIs[] =
{
	&t3925____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3925____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3925_m22357_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22357_GM;
MethodInfo m22357_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3925_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3925_m22357_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22357_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22358_GM;
MethodInfo m22358_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3925_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22358_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22359_GM;
MethodInfo m22359_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3925_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22359_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22360_GM;
MethodInfo m22360_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3925_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22360_GM};
extern Il2CppType t1993_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22361_GM;
MethodInfo m22361_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3925_TI, &t1993_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22361_GM};
static MethodInfo* t3925_MIs[] =
{
	&m22357_MI,
	&m22358_MI,
	&m22359_MI,
	&m22360_MI,
	&m22361_MI,
	NULL
};
extern MethodInfo m22360_MI;
extern MethodInfo m22359_MI;
static MethodInfo* t3925_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m22358_MI,
	&m22360_MI,
	&m22359_MI,
	&m22361_MI,
};
static TypeInfo* t3925_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5460_TI,
};
static Il2CppInterfaceOffsetPair t3925_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5460_TI, 7},
};
extern TypeInfo t1993_TI;
static Il2CppRGCTXData t3925_RGCTXData[3] = 
{
	&m22361_MI/* Method Usage */,
	&t1993_TI/* Class Usage */,
	&m28969_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3925_0_0_0;
extern Il2CppType t3925_1_0_0;
extern Il2CppGenericClass t3925_GC;
TypeInfo t3925_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3925_MIs, t3925_PIs, t3925_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3925_TI, t3925_ITIs, t3925_VT, &EmptyCustomAttributesCache, &t3925_TI, &t3925_0_0_0, &t3925_1_0_0, t3925_IOs, &t3925_GC, NULL, NULL, NULL, t3925_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3925)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6945_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.MonoType>
extern MethodInfo m37138_MI;
static PropertyInfo t6945____Count_PropertyInfo = 
{
	&t6945_TI, "Count", &m37138_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m37139_MI;
static PropertyInfo t6945____IsReadOnly_PropertyInfo = 
{
	&t6945_TI, "IsReadOnly", &m37139_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6945_PIs[] =
{
	&t6945____Count_PropertyInfo,
	&t6945____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37138_GM;
MethodInfo m37138_MI = 
{
	"get_Count", NULL, &t6945_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37138_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37139_GM;
MethodInfo m37139_MI = 
{
	"get_IsReadOnly", NULL, &t6945_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37139_GM};
extern Il2CppType t1993_0_0_0;
extern Il2CppType t1993_0_0_0;
static ParameterInfo t6945_m37140_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1993_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37140_GM;
MethodInfo m37140_MI = 
{
	"Add", NULL, &t6945_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6945_m37140_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37140_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37141_GM;
MethodInfo m37141_MI = 
{
	"Clear", NULL, &t6945_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37141_GM};
extern Il2CppType t1993_0_0_0;
static ParameterInfo t6945_m37142_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1993_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37142_GM;
MethodInfo m37142_MI = 
{
	"Contains", NULL, &t6945_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6945_m37142_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37142_GM};
extern Il2CppType t2393_0_0_0;
extern Il2CppType t2393_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6945_m37143_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2393_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37143_GM;
MethodInfo m37143_MI = 
{
	"CopyTo", NULL, &t6945_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6945_m37143_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37143_GM};
extern Il2CppType t1993_0_0_0;
static ParameterInfo t6945_m37144_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1993_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37144_GM;
MethodInfo m37144_MI = 
{
	"Remove", NULL, &t6945_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6945_m37144_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37144_GM};
static MethodInfo* t6945_MIs[] =
{
	&m37138_MI,
	&m37139_MI,
	&m37140_MI,
	&m37141_MI,
	&m37142_MI,
	&m37143_MI,
	&m37144_MI,
	NULL
};
extern TypeInfo t6947_TI;
static TypeInfo* t6945_ITIs[] = 
{
	&t739_TI,
	&t6947_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6945_0_0_0;
extern Il2CppType t6945_1_0_0;
struct t6945;
extern Il2CppGenericClass t6945_GC;
TypeInfo t6945_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6945_MIs, t6945_PIs, NULL, NULL, NULL, NULL, NULL, &t6945_TI, t6945_ITIs, NULL, &EmptyCustomAttributesCache, &t6945_TI, &t6945_0_0_0, &t6945_1_0_0, NULL, &t6945_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.MonoType>
extern Il2CppType t5460_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37145_GM;
MethodInfo m37145_MI = 
{
	"GetEnumerator", NULL, &t6947_TI, &t5460_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37145_GM};
static MethodInfo* t6947_MIs[] =
{
	&m37145_MI,
	NULL
};
static TypeInfo* t6947_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6947_0_0_0;
extern Il2CppType t6947_1_0_0;
struct t6947;
extern Il2CppGenericClass t6947_GC;
TypeInfo t6947_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6947_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6947_TI, t6947_ITIs, NULL, &EmptyCustomAttributesCache, &t6947_TI, &t6947_0_0_0, &t6947_1_0_0, NULL, &t6947_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6946_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.MonoType>
extern MethodInfo m37146_MI;
extern MethodInfo m37147_MI;
static PropertyInfo t6946____Item_PropertyInfo = 
{
	&t6946_TI, "Item", &m37146_MI, &m37147_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6946_PIs[] =
{
	&t6946____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1993_0_0_0;
static ParameterInfo t6946_m37148_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1993_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37148_GM;
MethodInfo m37148_MI = 
{
	"IndexOf", NULL, &t6946_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6946_m37148_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37148_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1993_0_0_0;
static ParameterInfo t6946_m37149_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1993_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37149_GM;
MethodInfo m37149_MI = 
{
	"Insert", NULL, &t6946_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6946_m37149_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37149_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6946_m37150_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37150_GM;
MethodInfo m37150_MI = 
{
	"RemoveAt", NULL, &t6946_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6946_m37150_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37150_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6946_m37146_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1993_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37146_GM;
MethodInfo m37146_MI = 
{
	"get_Item", NULL, &t6946_TI, &t1993_0_0_0, RuntimeInvoker_t5_t110, t6946_m37146_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37146_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1993_0_0_0;
static ParameterInfo t6946_m37147_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1993_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37147_GM;
MethodInfo m37147_MI = 
{
	"set_Item", NULL, &t6946_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6946_m37147_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37147_GM};
static MethodInfo* t6946_MIs[] =
{
	&m37148_MI,
	&m37149_MI,
	&m37150_MI,
	&m37146_MI,
	&m37147_MI,
	NULL
};
static TypeInfo* t6946_ITIs[] = 
{
	&t739_TI,
	&t6945_TI,
	&t6947_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6946_0_0_0;
extern Il2CppType t6946_1_0_0;
struct t6946;
extern Il2CppGenericClass t6946_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6946_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6946_MIs, t6946_PIs, NULL, NULL, NULL, NULL, NULL, &t6946_TI, t6946_ITIs, NULL, &t2240__CustomAttributeCache, &t6946_TI, &t6946_0_0_0, &t6946_1_0_0, NULL, &t6946_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5462_TI;

#include "t143.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ParamArrayAttribute>
extern MethodInfo m37151_MI;
static PropertyInfo t5462____Current_PropertyInfo = 
{
	&t5462_TI, "Current", &m37151_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5462_PIs[] =
{
	&t5462____Current_PropertyInfo,
	NULL
};
extern Il2CppType t143_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37151_GM;
MethodInfo m37151_MI = 
{
	"get_Current", NULL, &t5462_TI, &t143_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37151_GM};
static MethodInfo* t5462_MIs[] =
{
	&m37151_MI,
	NULL
};
static TypeInfo* t5462_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5462_0_0_0;
extern Il2CppType t5462_1_0_0;
struct t5462;
extern Il2CppGenericClass t5462_GC;
TypeInfo t5462_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5462_MIs, t5462_PIs, NULL, NULL, NULL, NULL, NULL, &t5462_TI, t5462_ITIs, NULL, &EmptyCustomAttributesCache, &t5462_TI, &t5462_0_0_0, &t5462_1_0_0, NULL, &t5462_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3926.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3926_TI;
#include "t3926MD.h"

extern TypeInfo t143_TI;
extern MethodInfo m22366_MI;
extern MethodInfo m28980_MI;
struct t107;
#define m28980(__this, p0, method) (t143 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.ParamArrayAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3926_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3926_TI, offsetof(t3926, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3926_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3926_TI, offsetof(t3926, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3926_FIs[] =
{
	&t3926_f0_FieldInfo,
	&t3926_f1_FieldInfo,
	NULL
};
extern MethodInfo m22363_MI;
static PropertyInfo t3926____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3926_TI, "System.Collections.IEnumerator.Current", &m22363_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3926____Current_PropertyInfo = 
{
	&t3926_TI, "Current", &m22366_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3926_PIs[] =
{
	&t3926____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3926____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3926_m22362_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22362_GM;
MethodInfo m22362_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3926_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3926_m22362_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22362_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22363_GM;
MethodInfo m22363_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3926_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22363_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22364_GM;
MethodInfo m22364_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3926_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22364_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22365_GM;
MethodInfo m22365_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3926_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22365_GM};
extern Il2CppType t143_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22366_GM;
MethodInfo m22366_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3926_TI, &t143_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22366_GM};
static MethodInfo* t3926_MIs[] =
{
	&m22362_MI,
	&m22363_MI,
	&m22364_MI,
	&m22365_MI,
	&m22366_MI,
	NULL
};
extern MethodInfo m22365_MI;
extern MethodInfo m22364_MI;
static MethodInfo* t3926_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m22363_MI,
	&m22365_MI,
	&m22364_MI,
	&m22366_MI,
};
static TypeInfo* t3926_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5462_TI,
};
static Il2CppInterfaceOffsetPair t3926_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5462_TI, 7},
};
extern TypeInfo t143_TI;
static Il2CppRGCTXData t3926_RGCTXData[3] = 
{
	&m22366_MI/* Method Usage */,
	&t143_TI/* Class Usage */,
	&m28980_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3926_0_0_0;
extern Il2CppType t3926_1_0_0;
extern Il2CppGenericClass t3926_GC;
TypeInfo t3926_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3926_MIs, t3926_PIs, t3926_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3926_TI, t3926_ITIs, t3926_VT, &EmptyCustomAttributesCache, &t3926_TI, &t3926_0_0_0, &t3926_1_0_0, t3926_IOs, &t3926_GC, NULL, NULL, NULL, t3926_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3926)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6948_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>
extern MethodInfo m37152_MI;
static PropertyInfo t6948____Count_PropertyInfo = 
{
	&t6948_TI, "Count", &m37152_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m37153_MI;
static PropertyInfo t6948____IsReadOnly_PropertyInfo = 
{
	&t6948_TI, "IsReadOnly", &m37153_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6948_PIs[] =
{
	&t6948____Count_PropertyInfo,
	&t6948____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37152_GM;
MethodInfo m37152_MI = 
{
	"get_Count", NULL, &t6948_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37152_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37153_GM;
MethodInfo m37153_MI = 
{
	"get_IsReadOnly", NULL, &t6948_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37153_GM};
extern Il2CppType t143_0_0_0;
extern Il2CppType t143_0_0_0;
static ParameterInfo t6948_m37154_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t143_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37154_GM;
MethodInfo m37154_MI = 
{
	"Add", NULL, &t6948_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6948_m37154_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37154_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37155_GM;
MethodInfo m37155_MI = 
{
	"Clear", NULL, &t6948_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37155_GM};
extern Il2CppType t143_0_0_0;
static ParameterInfo t6948_m37156_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t143_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37156_GM;
MethodInfo m37156_MI = 
{
	"Contains", NULL, &t6948_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6948_m37156_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37156_GM};
extern Il2CppType t4218_0_0_0;
extern Il2CppType t4218_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6948_m37157_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4218_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37157_GM;
MethodInfo m37157_MI = 
{
	"CopyTo", NULL, &t6948_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6948_m37157_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37157_GM};
extern Il2CppType t143_0_0_0;
static ParameterInfo t6948_m37158_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t143_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37158_GM;
MethodInfo m37158_MI = 
{
	"Remove", NULL, &t6948_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6948_m37158_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37158_GM};
static MethodInfo* t6948_MIs[] =
{
	&m37152_MI,
	&m37153_MI,
	&m37154_MI,
	&m37155_MI,
	&m37156_MI,
	&m37157_MI,
	&m37158_MI,
	NULL
};
extern TypeInfo t6950_TI;
static TypeInfo* t6948_ITIs[] = 
{
	&t739_TI,
	&t6950_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6948_0_0_0;
extern Il2CppType t6948_1_0_0;
struct t6948;
extern Il2CppGenericClass t6948_GC;
TypeInfo t6948_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6948_MIs, t6948_PIs, NULL, NULL, NULL, NULL, NULL, &t6948_TI, t6948_ITIs, NULL, &EmptyCustomAttributesCache, &t6948_TI, &t6948_0_0_0, &t6948_1_0_0, NULL, &t6948_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ParamArrayAttribute>
extern Il2CppType t5462_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37159_GM;
MethodInfo m37159_MI = 
{
	"GetEnumerator", NULL, &t6950_TI, &t5462_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37159_GM};
static MethodInfo* t6950_MIs[] =
{
	&m37159_MI,
	NULL
};
static TypeInfo* t6950_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6950_0_0_0;
extern Il2CppType t6950_1_0_0;
struct t6950;
extern Il2CppGenericClass t6950_GC;
TypeInfo t6950_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6950_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6950_TI, t6950_ITIs, NULL, &EmptyCustomAttributesCache, &t6950_TI, &t6950_0_0_0, &t6950_1_0_0, NULL, &t6950_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6949_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.ParamArrayAttribute>
extern MethodInfo m37160_MI;
extern MethodInfo m37161_MI;
static PropertyInfo t6949____Item_PropertyInfo = 
{
	&t6949_TI, "Item", &m37160_MI, &m37161_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6949_PIs[] =
{
	&t6949____Item_PropertyInfo,
	NULL
};
extern Il2CppType t143_0_0_0;
static ParameterInfo t6949_m37162_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t143_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37162_GM;
MethodInfo m37162_MI = 
{
	"IndexOf", NULL, &t6949_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6949_m37162_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37162_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t143_0_0_0;
static ParameterInfo t6949_m37163_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t143_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37163_GM;
MethodInfo m37163_MI = 
{
	"Insert", NULL, &t6949_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6949_m37163_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37163_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6949_m37164_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37164_GM;
MethodInfo m37164_MI = 
{
	"RemoveAt", NULL, &t6949_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6949_m37164_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37164_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6949_m37160_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t143_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37160_GM;
MethodInfo m37160_MI = 
{
	"get_Item", NULL, &t6949_TI, &t143_0_0_0, RuntimeInvoker_t5_t110, t6949_m37160_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37160_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t143_0_0_0;
static ParameterInfo t6949_m37161_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t143_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37161_GM;
MethodInfo m37161_MI = 
{
	"set_Item", NULL, &t6949_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6949_m37161_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37161_GM};
static MethodInfo* t6949_MIs[] =
{
	&m37162_MI,
	&m37163_MI,
	&m37164_MI,
	&m37160_MI,
	&m37161_MI,
	NULL
};
static TypeInfo* t6949_ITIs[] = 
{
	&t739_TI,
	&t6948_TI,
	&t6950_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6949_0_0_0;
extern Il2CppType t6949_1_0_0;
struct t6949;
extern Il2CppGenericClass t6949_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6949_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6949_MIs, t6949_PIs, NULL, NULL, NULL, NULL, NULL, &t6949_TI, t6949_ITIs, NULL, &t2240__CustomAttributeCache, &t6949_TI, &t6949_0_0_0, &t6949_1_0_0, NULL, &t6949_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5464_TI;

#include "t1412.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.OutAttribute>
extern MethodInfo m37165_MI;
static PropertyInfo t5464____Current_PropertyInfo = 
{
	&t5464_TI, "Current", &m37165_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5464_PIs[] =
{
	&t5464____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1412_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37165_GM;
MethodInfo m37165_MI = 
{
	"get_Current", NULL, &t5464_TI, &t1412_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37165_GM};
static MethodInfo* t5464_MIs[] =
{
	&m37165_MI,
	NULL
};
static TypeInfo* t5464_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5464_0_0_0;
extern Il2CppType t5464_1_0_0;
struct t5464;
extern Il2CppGenericClass t5464_GC;
TypeInfo t5464_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5464_MIs, t5464_PIs, NULL, NULL, NULL, NULL, NULL, &t5464_TI, t5464_ITIs, NULL, &EmptyCustomAttributesCache, &t5464_TI, &t5464_0_0_0, &t5464_1_0_0, NULL, &t5464_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3927.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3927_TI;
#include "t3927MD.h"

extern TypeInfo t1412_TI;
extern MethodInfo m22371_MI;
extern MethodInfo m28991_MI;
struct t107;
#define m28991(__this, p0, method) (t1412 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3927_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3927_TI, offsetof(t3927, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3927_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3927_TI, offsetof(t3927, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3927_FIs[] =
{
	&t3927_f0_FieldInfo,
	&t3927_f1_FieldInfo,
	NULL
};
extern MethodInfo m22368_MI;
static PropertyInfo t3927____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3927_TI, "System.Collections.IEnumerator.Current", &m22368_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3927____Current_PropertyInfo = 
{
	&t3927_TI, "Current", &m22371_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3927_PIs[] =
{
	&t3927____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3927____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3927_m22367_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22367_GM;
MethodInfo m22367_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3927_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3927_m22367_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22367_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22368_GM;
MethodInfo m22368_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3927_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22368_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22369_GM;
MethodInfo m22369_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3927_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22369_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22370_GM;
MethodInfo m22370_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3927_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22370_GM};
extern Il2CppType t1412_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22371_GM;
MethodInfo m22371_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3927_TI, &t1412_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22371_GM};
static MethodInfo* t3927_MIs[] =
{
	&m22367_MI,
	&m22368_MI,
	&m22369_MI,
	&m22370_MI,
	&m22371_MI,
	NULL
};
extern MethodInfo m22370_MI;
extern MethodInfo m22369_MI;
static MethodInfo* t3927_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m22368_MI,
	&m22370_MI,
	&m22369_MI,
	&m22371_MI,
};
static TypeInfo* t3927_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5464_TI,
};
static Il2CppInterfaceOffsetPair t3927_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5464_TI, 7},
};
extern TypeInfo t1412_TI;
static Il2CppRGCTXData t3927_RGCTXData[3] = 
{
	&m22371_MI/* Method Usage */,
	&t1412_TI/* Class Usage */,
	&m28991_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3927_0_0_0;
extern Il2CppType t3927_1_0_0;
extern Il2CppGenericClass t3927_GC;
TypeInfo t3927_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3927_MIs, t3927_PIs, t3927_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3927_TI, t3927_ITIs, t3927_VT, &EmptyCustomAttributesCache, &t3927_TI, &t3927_0_0_0, &t3927_1_0_0, t3927_IOs, &t3927_GC, NULL, NULL, NULL, t3927_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3927)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6951_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>
extern MethodInfo m37166_MI;
static PropertyInfo t6951____Count_PropertyInfo = 
{
	&t6951_TI, "Count", &m37166_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m37167_MI;
static PropertyInfo t6951____IsReadOnly_PropertyInfo = 
{
	&t6951_TI, "IsReadOnly", &m37167_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6951_PIs[] =
{
	&t6951____Count_PropertyInfo,
	&t6951____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37166_GM;
MethodInfo m37166_MI = 
{
	"get_Count", NULL, &t6951_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37166_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37167_GM;
MethodInfo m37167_MI = 
{
	"get_IsReadOnly", NULL, &t6951_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37167_GM};
extern Il2CppType t1412_0_0_0;
extern Il2CppType t1412_0_0_0;
static ParameterInfo t6951_m37168_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1412_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37168_GM;
MethodInfo m37168_MI = 
{
	"Add", NULL, &t6951_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6951_m37168_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37168_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37169_GM;
MethodInfo m37169_MI = 
{
	"Clear", NULL, &t6951_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37169_GM};
extern Il2CppType t1412_0_0_0;
static ParameterInfo t6951_m37170_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1412_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37170_GM;
MethodInfo m37170_MI = 
{
	"Contains", NULL, &t6951_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6951_m37170_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37170_GM};
extern Il2CppType t4219_0_0_0;
extern Il2CppType t4219_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6951_m37171_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4219_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37171_GM;
MethodInfo m37171_MI = 
{
	"CopyTo", NULL, &t6951_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6951_m37171_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37171_GM};
extern Il2CppType t1412_0_0_0;
static ParameterInfo t6951_m37172_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1412_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37172_GM;
MethodInfo m37172_MI = 
{
	"Remove", NULL, &t6951_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6951_m37172_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37172_GM};
static MethodInfo* t6951_MIs[] =
{
	&m37166_MI,
	&m37167_MI,
	&m37168_MI,
	&m37169_MI,
	&m37170_MI,
	&m37171_MI,
	&m37172_MI,
	NULL
};
extern TypeInfo t6953_TI;
static TypeInfo* t6951_ITIs[] = 
{
	&t739_TI,
	&t6953_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6951_0_0_0;
extern Il2CppType t6951_1_0_0;
struct t6951;
extern Il2CppGenericClass t6951_GC;
TypeInfo t6951_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6951_MIs, t6951_PIs, NULL, NULL, NULL, NULL, NULL, &t6951_TI, t6951_ITIs, NULL, &EmptyCustomAttributesCache, &t6951_TI, &t6951_0_0_0, &t6951_1_0_0, NULL, &t6951_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.OutAttribute>
extern Il2CppType t5464_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37173_GM;
MethodInfo m37173_MI = 
{
	"GetEnumerator", NULL, &t6953_TI, &t5464_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37173_GM};
static MethodInfo* t6953_MIs[] =
{
	&m37173_MI,
	NULL
};
static TypeInfo* t6953_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6953_0_0_0;
extern Il2CppType t6953_1_0_0;
struct t6953;
extern Il2CppGenericClass t6953_GC;
TypeInfo t6953_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6953_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6953_TI, t6953_ITIs, NULL, &EmptyCustomAttributesCache, &t6953_TI, &t6953_0_0_0, &t6953_1_0_0, NULL, &t6953_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6952_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>
extern MethodInfo m37174_MI;
extern MethodInfo m37175_MI;
static PropertyInfo t6952____Item_PropertyInfo = 
{
	&t6952_TI, "Item", &m37174_MI, &m37175_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6952_PIs[] =
{
	&t6952____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1412_0_0_0;
static ParameterInfo t6952_m37176_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1412_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37176_GM;
MethodInfo m37176_MI = 
{
	"IndexOf", NULL, &t6952_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6952_m37176_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37176_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1412_0_0_0;
static ParameterInfo t6952_m37177_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1412_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37177_GM;
MethodInfo m37177_MI = 
{
	"Insert", NULL, &t6952_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6952_m37177_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37177_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6952_m37178_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37178_GM;
MethodInfo m37178_MI = 
{
	"RemoveAt", NULL, &t6952_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6952_m37178_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37178_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6952_m37174_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1412_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37174_GM;
MethodInfo m37174_MI = 
{
	"get_Item", NULL, &t6952_TI, &t1412_0_0_0, RuntimeInvoker_t5_t110, t6952_m37174_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37174_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1412_0_0_0;
static ParameterInfo t6952_m37175_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1412_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37175_GM;
MethodInfo m37175_MI = 
{
	"set_Item", NULL, &t6952_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6952_m37175_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37175_GM};
static MethodInfo* t6952_MIs[] =
{
	&m37176_MI,
	&m37177_MI,
	&m37178_MI,
	&m37174_MI,
	&m37175_MI,
	NULL
};
static TypeInfo* t6952_ITIs[] = 
{
	&t739_TI,
	&t6951_TI,
	&t6953_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6952_0_0_0;
extern Il2CppType t6952_1_0_0;
struct t6952;
extern Il2CppGenericClass t6952_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6952_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6952_MIs, t6952_PIs, NULL, NULL, NULL, NULL, NULL, &t6952_TI, t6952_ITIs, NULL, &t2240__CustomAttributeCache, &t6952_TI, &t6952_0_0_0, &t6952_1_0_0, NULL, &t6952_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5466_TI;

#include "t475.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ObsoleteAttribute>
extern MethodInfo m37179_MI;
static PropertyInfo t5466____Current_PropertyInfo = 
{
	&t5466_TI, "Current", &m37179_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5466_PIs[] =
{
	&t5466____Current_PropertyInfo,
	NULL
};
extern Il2CppType t475_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37179_GM;
MethodInfo m37179_MI = 
{
	"get_Current", NULL, &t5466_TI, &t475_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37179_GM};
static MethodInfo* t5466_MIs[] =
{
	&m37179_MI,
	NULL
};
static TypeInfo* t5466_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5466_0_0_0;
extern Il2CppType t5466_1_0_0;
struct t5466;
extern Il2CppGenericClass t5466_GC;
TypeInfo t5466_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5466_MIs, t5466_PIs, NULL, NULL, NULL, NULL, NULL, &t5466_TI, t5466_ITIs, NULL, &EmptyCustomAttributesCache, &t5466_TI, &t5466_0_0_0, &t5466_1_0_0, NULL, &t5466_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3928.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3928_TI;
#include "t3928MD.h"

extern TypeInfo t475_TI;
extern MethodInfo m22376_MI;
extern MethodInfo m29002_MI;
struct t107;
#define m29002(__this, p0, method) (t475 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.ObsoleteAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3928_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3928_TI, offsetof(t3928, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3928_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3928_TI, offsetof(t3928, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3928_FIs[] =
{
	&t3928_f0_FieldInfo,
	&t3928_f1_FieldInfo,
	NULL
};
extern MethodInfo m22373_MI;
static PropertyInfo t3928____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3928_TI, "System.Collections.IEnumerator.Current", &m22373_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3928____Current_PropertyInfo = 
{
	&t3928_TI, "Current", &m22376_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3928_PIs[] =
{
	&t3928____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3928____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3928_m22372_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22372_GM;
MethodInfo m22372_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3928_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3928_m22372_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22372_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22373_GM;
MethodInfo m22373_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3928_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22373_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22374_GM;
MethodInfo m22374_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3928_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22374_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22375_GM;
MethodInfo m22375_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3928_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22375_GM};
extern Il2CppType t475_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22376_GM;
MethodInfo m22376_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3928_TI, &t475_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22376_GM};
static MethodInfo* t3928_MIs[] =
{
	&m22372_MI,
	&m22373_MI,
	&m22374_MI,
	&m22375_MI,
	&m22376_MI,
	NULL
};
extern MethodInfo m22375_MI;
extern MethodInfo m22374_MI;
static MethodInfo* t3928_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m22373_MI,
	&m22375_MI,
	&m22374_MI,
	&m22376_MI,
};
static TypeInfo* t3928_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5466_TI,
};
static Il2CppInterfaceOffsetPair t3928_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5466_TI, 7},
};
extern TypeInfo t475_TI;
static Il2CppRGCTXData t3928_RGCTXData[3] = 
{
	&m22376_MI/* Method Usage */,
	&t475_TI/* Class Usage */,
	&m29002_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3928_0_0_0;
extern Il2CppType t3928_1_0_0;
extern Il2CppGenericClass t3928_GC;
TypeInfo t3928_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3928_MIs, t3928_PIs, t3928_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3928_TI, t3928_ITIs, t3928_VT, &EmptyCustomAttributesCache, &t3928_TI, &t3928_0_0_0, &t3928_1_0_0, t3928_IOs, &t3928_GC, NULL, NULL, NULL, t3928_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3928)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6954_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>
extern MethodInfo m37180_MI;
static PropertyInfo t6954____Count_PropertyInfo = 
{
	&t6954_TI, "Count", &m37180_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m37181_MI;
static PropertyInfo t6954____IsReadOnly_PropertyInfo = 
{
	&t6954_TI, "IsReadOnly", &m37181_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6954_PIs[] =
{
	&t6954____Count_PropertyInfo,
	&t6954____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37180_GM;
MethodInfo m37180_MI = 
{
	"get_Count", NULL, &t6954_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37180_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37181_GM;
MethodInfo m37181_MI = 
{
	"get_IsReadOnly", NULL, &t6954_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37181_GM};
extern Il2CppType t475_0_0_0;
extern Il2CppType t475_0_0_0;
static ParameterInfo t6954_m37182_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t475_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37182_GM;
MethodInfo m37182_MI = 
{
	"Add", NULL, &t6954_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6954_m37182_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37182_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37183_GM;
MethodInfo m37183_MI = 
{
	"Clear", NULL, &t6954_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37183_GM};
extern Il2CppType t475_0_0_0;
static ParameterInfo t6954_m37184_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t475_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37184_GM;
MethodInfo m37184_MI = 
{
	"Contains", NULL, &t6954_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6954_m37184_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37184_GM};
extern Il2CppType t4220_0_0_0;
extern Il2CppType t4220_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6954_m37185_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4220_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37185_GM;
MethodInfo m37185_MI = 
{
	"CopyTo", NULL, &t6954_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6954_m37185_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37185_GM};
extern Il2CppType t475_0_0_0;
static ParameterInfo t6954_m37186_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t475_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37186_GM;
MethodInfo m37186_MI = 
{
	"Remove", NULL, &t6954_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6954_m37186_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37186_GM};
static MethodInfo* t6954_MIs[] =
{
	&m37180_MI,
	&m37181_MI,
	&m37182_MI,
	&m37183_MI,
	&m37184_MI,
	&m37185_MI,
	&m37186_MI,
	NULL
};
extern TypeInfo t6956_TI;
static TypeInfo* t6954_ITIs[] = 
{
	&t739_TI,
	&t6956_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6954_0_0_0;
extern Il2CppType t6954_1_0_0;
struct t6954;
extern Il2CppGenericClass t6954_GC;
TypeInfo t6954_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6954_MIs, t6954_PIs, NULL, NULL, NULL, NULL, NULL, &t6954_TI, t6954_ITIs, NULL, &EmptyCustomAttributesCache, &t6954_TI, &t6954_0_0_0, &t6954_1_0_0, NULL, &t6954_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ObsoleteAttribute>
extern Il2CppType t5466_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37187_GM;
MethodInfo m37187_MI = 
{
	"GetEnumerator", NULL, &t6956_TI, &t5466_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37187_GM};
static MethodInfo* t6956_MIs[] =
{
	&m37187_MI,
	NULL
};
static TypeInfo* t6956_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6956_0_0_0;
extern Il2CppType t6956_1_0_0;
struct t6956;
extern Il2CppGenericClass t6956_GC;
TypeInfo t6956_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6956_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6956_TI, t6956_ITIs, NULL, &EmptyCustomAttributesCache, &t6956_TI, &t6956_0_0_0, &t6956_1_0_0, NULL, &t6956_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6955_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.ObsoleteAttribute>
extern MethodInfo m37188_MI;
extern MethodInfo m37189_MI;
static PropertyInfo t6955____Item_PropertyInfo = 
{
	&t6955_TI, "Item", &m37188_MI, &m37189_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6955_PIs[] =
{
	&t6955____Item_PropertyInfo,
	NULL
};
extern Il2CppType t475_0_0_0;
static ParameterInfo t6955_m37190_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t475_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37190_GM;
MethodInfo m37190_MI = 
{
	"IndexOf", NULL, &t6955_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6955_m37190_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37190_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t475_0_0_0;
static ParameterInfo t6955_m37191_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t475_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37191_GM;
MethodInfo m37191_MI = 
{
	"Insert", NULL, &t6955_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6955_m37191_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37191_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6955_m37192_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37192_GM;
MethodInfo m37192_MI = 
{
	"RemoveAt", NULL, &t6955_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6955_m37192_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37192_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6955_m37188_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t475_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37188_GM;
MethodInfo m37188_MI = 
{
	"get_Item", NULL, &t6955_TI, &t475_0_0_0, RuntimeInvoker_t5_t110, t6955_m37188_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37188_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t475_0_0_0;
static ParameterInfo t6955_m37189_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t475_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37189_GM;
MethodInfo m37189_MI = 
{
	"set_Item", NULL, &t6955_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6955_m37189_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37189_GM};
static MethodInfo* t6955_MIs[] =
{
	&m37190_MI,
	&m37191_MI,
	&m37192_MI,
	&m37188_MI,
	&m37189_MI,
	NULL
};
static TypeInfo* t6955_ITIs[] = 
{
	&t739_TI,
	&t6954_TI,
	&t6956_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6955_0_0_0;
extern Il2CppType t6955_1_0_0;
struct t6955;
extern Il2CppGenericClass t6955_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6955_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6955_MIs, t6955_PIs, NULL, NULL, NULL, NULL, NULL, &t6955_TI, t6955_ITIs, NULL, &t2240__CustomAttributeCache, &t6955_TI, &t6955_0_0_0, &t6955_1_0_0, NULL, &t6955_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5468_TI;

#include "t1413.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>
extern MethodInfo m37193_MI;
static PropertyInfo t5468____Current_PropertyInfo = 
{
	&t5468_TI, "Current", &m37193_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5468_PIs[] =
{
	&t5468____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1413_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37193_GM;
MethodInfo m37193_MI = 
{
	"get_Current", NULL, &t5468_TI, &t1413_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37193_GM};
static MethodInfo* t5468_MIs[] =
{
	&m37193_MI,
	NULL
};
static TypeInfo* t5468_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5468_0_0_0;
extern Il2CppType t5468_1_0_0;
struct t5468;
extern Il2CppGenericClass t5468_GC;
TypeInfo t5468_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5468_MIs, t5468_PIs, NULL, NULL, NULL, NULL, NULL, &t5468_TI, t5468_ITIs, NULL, &EmptyCustomAttributesCache, &t5468_TI, &t5468_0_0_0, &t5468_1_0_0, NULL, &t5468_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3929.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3929_TI;
#include "t3929MD.h"

extern TypeInfo t1413_TI;
extern MethodInfo m22381_MI;
extern MethodInfo m29013_MI;
struct t107;
#define m29013(__this, p0, method) (t1413 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3929_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3929_TI, offsetof(t3929, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3929_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3929_TI, offsetof(t3929, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3929_FIs[] =
{
	&t3929_f0_FieldInfo,
	&t3929_f1_FieldInfo,
	NULL
};
extern MethodInfo m22378_MI;
static PropertyInfo t3929____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3929_TI, "System.Collections.IEnumerator.Current", &m22378_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3929____Current_PropertyInfo = 
{
	&t3929_TI, "Current", &m22381_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3929_PIs[] =
{
	&t3929____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3929____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3929_m22377_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22377_GM;
MethodInfo m22377_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3929_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3929_m22377_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22377_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22378_GM;
MethodInfo m22378_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3929_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22378_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22379_GM;
MethodInfo m22379_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3929_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22379_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22380_GM;
MethodInfo m22380_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3929_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22380_GM};
extern Il2CppType t1413_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22381_GM;
MethodInfo m22381_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3929_TI, &t1413_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22381_GM};
static MethodInfo* t3929_MIs[] =
{
	&m22377_MI,
	&m22378_MI,
	&m22379_MI,
	&m22380_MI,
	&m22381_MI,
	NULL
};
extern MethodInfo m22380_MI;
extern MethodInfo m22379_MI;
static MethodInfo* t3929_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m22378_MI,
	&m22380_MI,
	&m22379_MI,
	&m22381_MI,
};
static TypeInfo* t3929_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5468_TI,
};
static Il2CppInterfaceOffsetPair t3929_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5468_TI, 7},
};
extern TypeInfo t1413_TI;
static Il2CppRGCTXData t3929_RGCTXData[3] = 
{
	&m22381_MI/* Method Usage */,
	&t1413_TI/* Class Usage */,
	&m29013_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3929_0_0_0;
extern Il2CppType t3929_1_0_0;
extern Il2CppGenericClass t3929_GC;
TypeInfo t3929_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3929_MIs, t3929_PIs, t3929_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3929_TI, t3929_ITIs, t3929_VT, &EmptyCustomAttributesCache, &t3929_TI, &t3929_0_0_0, &t3929_1_0_0, t3929_IOs, &t3929_GC, NULL, NULL, NULL, t3929_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3929)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6957_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>
extern MethodInfo m37194_MI;
static PropertyInfo t6957____Count_PropertyInfo = 
{
	&t6957_TI, "Count", &m37194_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m37195_MI;
static PropertyInfo t6957____IsReadOnly_PropertyInfo = 
{
	&t6957_TI, "IsReadOnly", &m37195_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6957_PIs[] =
{
	&t6957____Count_PropertyInfo,
	&t6957____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37194_GM;
MethodInfo m37194_MI = 
{
	"get_Count", NULL, &t6957_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37194_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37195_GM;
MethodInfo m37195_MI = 
{
	"get_IsReadOnly", NULL, &t6957_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37195_GM};
extern Il2CppType t1413_0_0_0;
extern Il2CppType t1413_0_0_0;
static ParameterInfo t6957_m37196_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1413_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37196_GM;
MethodInfo m37196_MI = 
{
	"Add", NULL, &t6957_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6957_m37196_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37196_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37197_GM;
MethodInfo m37197_MI = 
{
	"Clear", NULL, &t6957_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37197_GM};
extern Il2CppType t1413_0_0_0;
static ParameterInfo t6957_m37198_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1413_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37198_GM;
MethodInfo m37198_MI = 
{
	"Contains", NULL, &t6957_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6957_m37198_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37198_GM};
extern Il2CppType t4221_0_0_0;
extern Il2CppType t4221_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6957_m37199_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4221_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37199_GM;
MethodInfo m37199_MI = 
{
	"CopyTo", NULL, &t6957_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6957_m37199_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37199_GM};
extern Il2CppType t1413_0_0_0;
static ParameterInfo t6957_m37200_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1413_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37200_GM;
MethodInfo m37200_MI = 
{
	"Remove", NULL, &t6957_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6957_m37200_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37200_GM};
static MethodInfo* t6957_MIs[] =
{
	&m37194_MI,
	&m37195_MI,
	&m37196_MI,
	&m37197_MI,
	&m37198_MI,
	&m37199_MI,
	&m37200_MI,
	NULL
};
extern TypeInfo t6959_TI;
static TypeInfo* t6957_ITIs[] = 
{
	&t739_TI,
	&t6959_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6957_0_0_0;
extern Il2CppType t6957_1_0_0;
struct t6957;
extern Il2CppGenericClass t6957_GC;
TypeInfo t6957_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6957_MIs, t6957_PIs, NULL, NULL, NULL, NULL, NULL, &t6957_TI, t6957_ITIs, NULL, &EmptyCustomAttributesCache, &t6957_TI, &t6957_0_0_0, &t6957_1_0_0, NULL, &t6957_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.DllImportAttribute>
extern Il2CppType t5468_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37201_GM;
MethodInfo m37201_MI = 
{
	"GetEnumerator", NULL, &t6959_TI, &t5468_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37201_GM};
static MethodInfo* t6959_MIs[] =
{
	&m37201_MI,
	NULL
};
static TypeInfo* t6959_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6959_0_0_0;
extern Il2CppType t6959_1_0_0;
struct t6959;
extern Il2CppGenericClass t6959_GC;
TypeInfo t6959_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6959_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6959_TI, t6959_ITIs, NULL, &EmptyCustomAttributesCache, &t6959_TI, &t6959_0_0_0, &t6959_1_0_0, NULL, &t6959_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6958_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.DllImportAttribute>
extern MethodInfo m37202_MI;
extern MethodInfo m37203_MI;
static PropertyInfo t6958____Item_PropertyInfo = 
{
	&t6958_TI, "Item", &m37202_MI, &m37203_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6958_PIs[] =
{
	&t6958____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1413_0_0_0;
static ParameterInfo t6958_m37204_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1413_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37204_GM;
MethodInfo m37204_MI = 
{
	"IndexOf", NULL, &t6958_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6958_m37204_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37204_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1413_0_0_0;
static ParameterInfo t6958_m37205_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1413_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37205_GM;
MethodInfo m37205_MI = 
{
	"Insert", NULL, &t6958_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6958_m37205_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37205_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6958_m37206_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37206_GM;
MethodInfo m37206_MI = 
{
	"RemoveAt", NULL, &t6958_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6958_m37206_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37206_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6958_m37202_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1413_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37202_GM;
MethodInfo m37202_MI = 
{
	"get_Item", NULL, &t6958_TI, &t1413_0_0_0, RuntimeInvoker_t5_t110, t6958_m37202_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37202_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1413_0_0_0;
static ParameterInfo t6958_m37203_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1413_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37203_GM;
MethodInfo m37203_MI = 
{
	"set_Item", NULL, &t6958_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6958_m37203_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37203_GM};
static MethodInfo* t6958_MIs[] =
{
	&m37204_MI,
	&m37205_MI,
	&m37206_MI,
	&m37202_MI,
	&m37203_MI,
	NULL
};
static TypeInfo* t6958_ITIs[] = 
{
	&t739_TI,
	&t6957_TI,
	&t6959_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6958_0_0_0;
extern Il2CppType t6958_1_0_0;
struct t6958;
extern Il2CppGenericClass t6958_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6958_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6958_MIs, t6958_PIs, NULL, NULL, NULL, NULL, NULL, &t6958_TI, t6958_ITIs, NULL, &t2240__CustomAttributeCache, &t6958_TI, &t6958_0_0_0, &t6958_1_0_0, NULL, &t6958_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5470_TI;

#include "t1416.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>
extern MethodInfo m37207_MI;
static PropertyInfo t5470____Current_PropertyInfo = 
{
	&t5470_TI, "Current", &m37207_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5470_PIs[] =
{
	&t5470____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1416_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37207_GM;
MethodInfo m37207_MI = 
{
	"get_Current", NULL, &t5470_TI, &t1416_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37207_GM};
static MethodInfo* t5470_MIs[] =
{
	&m37207_MI,
	NULL
};
static TypeInfo* t5470_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5470_0_0_0;
extern Il2CppType t5470_1_0_0;
struct t5470;
extern Il2CppGenericClass t5470_GC;
TypeInfo t5470_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5470_MIs, t5470_PIs, NULL, NULL, NULL, NULL, NULL, &t5470_TI, t5470_ITIs, NULL, &EmptyCustomAttributesCache, &t5470_TI, &t5470_0_0_0, &t5470_1_0_0, NULL, &t5470_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3930.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3930_TI;
#include "t3930MD.h"

extern TypeInfo t1416_TI;
extern MethodInfo m22386_MI;
extern MethodInfo m29024_MI;
struct t107;
#define m29024(__this, p0, method) (t1416 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3930_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3930_TI, offsetof(t3930, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3930_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3930_TI, offsetof(t3930, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3930_FIs[] =
{
	&t3930_f0_FieldInfo,
	&t3930_f1_FieldInfo,
	NULL
};
extern MethodInfo m22383_MI;
static PropertyInfo t3930____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3930_TI, "System.Collections.IEnumerator.Current", &m22383_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3930____Current_PropertyInfo = 
{
	&t3930_TI, "Current", &m22386_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3930_PIs[] =
{
	&t3930____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3930____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3930_m22382_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22382_GM;
MethodInfo m22382_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3930_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3930_m22382_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22382_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22383_GM;
MethodInfo m22383_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3930_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22383_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22384_GM;
MethodInfo m22384_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3930_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22384_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22385_GM;
MethodInfo m22385_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3930_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22385_GM};
extern Il2CppType t1416_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22386_GM;
MethodInfo m22386_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3930_TI, &t1416_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22386_GM};
static MethodInfo* t3930_MIs[] =
{
	&m22382_MI,
	&m22383_MI,
	&m22384_MI,
	&m22385_MI,
	&m22386_MI,
	NULL
};
extern MethodInfo m22385_MI;
extern MethodInfo m22384_MI;
static MethodInfo* t3930_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m22383_MI,
	&m22385_MI,
	&m22384_MI,
	&m22386_MI,
};
static TypeInfo* t3930_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5470_TI,
};
static Il2CppInterfaceOffsetPair t3930_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5470_TI, 7},
};
extern TypeInfo t1416_TI;
static Il2CppRGCTXData t3930_RGCTXData[3] = 
{
	&m22386_MI/* Method Usage */,
	&t1416_TI/* Class Usage */,
	&m29024_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3930_0_0_0;
extern Il2CppType t3930_1_0_0;
extern Il2CppGenericClass t3930_GC;
TypeInfo t3930_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3930_MIs, t3930_PIs, t3930_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3930_TI, t3930_ITIs, t3930_VT, &EmptyCustomAttributesCache, &t3930_TI, &t3930_0_0_0, &t3930_1_0_0, t3930_IOs, &t3930_GC, NULL, NULL, NULL, t3930_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3930)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6960_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>
extern MethodInfo m37208_MI;
static PropertyInfo t6960____Count_PropertyInfo = 
{
	&t6960_TI, "Count", &m37208_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m37209_MI;
static PropertyInfo t6960____IsReadOnly_PropertyInfo = 
{
	&t6960_TI, "IsReadOnly", &m37209_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6960_PIs[] =
{
	&t6960____Count_PropertyInfo,
	&t6960____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37208_GM;
MethodInfo m37208_MI = 
{
	"get_Count", NULL, &t6960_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37208_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37209_GM;
MethodInfo m37209_MI = 
{
	"get_IsReadOnly", NULL, &t6960_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37209_GM};
extern Il2CppType t1416_0_0_0;
extern Il2CppType t1416_0_0_0;
static ParameterInfo t6960_m37210_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1416_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37210_GM;
MethodInfo m37210_MI = 
{
	"Add", NULL, &t6960_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6960_m37210_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37210_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37211_GM;
MethodInfo m37211_MI = 
{
	"Clear", NULL, &t6960_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37211_GM};
extern Il2CppType t1416_0_0_0;
static ParameterInfo t6960_m37212_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1416_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37212_GM;
MethodInfo m37212_MI = 
{
	"Contains", NULL, &t6960_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6960_m37212_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37212_GM};
extern Il2CppType t4222_0_0_0;
extern Il2CppType t4222_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6960_m37213_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4222_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37213_GM;
MethodInfo m37213_MI = 
{
	"CopyTo", NULL, &t6960_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6960_m37213_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37213_GM};
extern Il2CppType t1416_0_0_0;
static ParameterInfo t6960_m37214_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1416_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37214_GM;
MethodInfo m37214_MI = 
{
	"Remove", NULL, &t6960_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6960_m37214_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37214_GM};
static MethodInfo* t6960_MIs[] =
{
	&m37208_MI,
	&m37209_MI,
	&m37210_MI,
	&m37211_MI,
	&m37212_MI,
	&m37213_MI,
	&m37214_MI,
	NULL
};
extern TypeInfo t6962_TI;
static TypeInfo* t6960_ITIs[] = 
{
	&t739_TI,
	&t6962_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6960_0_0_0;
extern Il2CppType t6960_1_0_0;
struct t6960;
extern Il2CppGenericClass t6960_GC;
TypeInfo t6960_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6960_MIs, t6960_PIs, NULL, NULL, NULL, NULL, NULL, &t6960_TI, t6960_ITIs, NULL, &EmptyCustomAttributesCache, &t6960_TI, &t6960_0_0_0, &t6960_1_0_0, NULL, &t6960_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.MarshalAsAttribute>
extern Il2CppType t5470_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37215_GM;
MethodInfo m37215_MI = 
{
	"GetEnumerator", NULL, &t6962_TI, &t5470_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37215_GM};
static MethodInfo* t6962_MIs[] =
{
	&m37215_MI,
	NULL
};
static TypeInfo* t6962_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6962_0_0_0;
extern Il2CppType t6962_1_0_0;
struct t6962;
extern Il2CppGenericClass t6962_GC;
TypeInfo t6962_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6962_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6962_TI, t6962_ITIs, NULL, &EmptyCustomAttributesCache, &t6962_TI, &t6962_0_0_0, &t6962_1_0_0, NULL, &t6962_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6961_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.MarshalAsAttribute>
extern MethodInfo m37216_MI;
extern MethodInfo m37217_MI;
static PropertyInfo t6961____Item_PropertyInfo = 
{
	&t6961_TI, "Item", &m37216_MI, &m37217_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6961_PIs[] =
{
	&t6961____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1416_0_0_0;
static ParameterInfo t6961_m37218_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1416_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37218_GM;
MethodInfo m37218_MI = 
{
	"IndexOf", NULL, &t6961_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6961_m37218_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37218_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1416_0_0_0;
static ParameterInfo t6961_m37219_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1416_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37219_GM;
MethodInfo m37219_MI = 
{
	"Insert", NULL, &t6961_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6961_m37219_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37219_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6961_m37220_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37220_GM;
MethodInfo m37220_MI = 
{
	"RemoveAt", NULL, &t6961_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6961_m37220_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37220_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6961_m37216_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1416_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37216_GM;
MethodInfo m37216_MI = 
{
	"get_Item", NULL, &t6961_TI, &t1416_0_0_0, RuntimeInvoker_t5_t110, t6961_m37216_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37216_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1416_0_0_0;
static ParameterInfo t6961_m37217_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1416_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37217_GM;
MethodInfo m37217_MI = 
{
	"set_Item", NULL, &t6961_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6961_m37217_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37217_GM};
static MethodInfo* t6961_MIs[] =
{
	&m37218_MI,
	&m37219_MI,
	&m37220_MI,
	&m37216_MI,
	&m37217_MI,
	NULL
};
static TypeInfo* t6961_ITIs[] = 
{
	&t739_TI,
	&t6960_TI,
	&t6962_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6961_0_0_0;
extern Il2CppType t6961_1_0_0;
struct t6961;
extern Il2CppGenericClass t6961_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6961_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6961_MIs, t6961_PIs, NULL, NULL, NULL, NULL, NULL, &t6961_TI, t6961_ITIs, NULL, &t2240__CustomAttributeCache, &t6961_TI, &t6961_0_0_0, &t6961_1_0_0, NULL, &t6961_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5472_TI;

#include "t1418.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.InAttribute>
extern MethodInfo m37221_MI;
static PropertyInfo t5472____Current_PropertyInfo = 
{
	&t5472_TI, "Current", &m37221_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5472_PIs[] =
{
	&t5472____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1418_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37221_GM;
MethodInfo m37221_MI = 
{
	"get_Current", NULL, &t5472_TI, &t1418_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37221_GM};
static MethodInfo* t5472_MIs[] =
{
	&m37221_MI,
	NULL
};
static TypeInfo* t5472_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5472_0_0_0;
extern Il2CppType t5472_1_0_0;
struct t5472;
extern Il2CppGenericClass t5472_GC;
TypeInfo t5472_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5472_MIs, t5472_PIs, NULL, NULL, NULL, NULL, NULL, &t5472_TI, t5472_ITIs, NULL, &EmptyCustomAttributesCache, &t5472_TI, &t5472_0_0_0, &t5472_1_0_0, NULL, &t5472_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3931.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3931_TI;
#include "t3931MD.h"

extern TypeInfo t1418_TI;
extern MethodInfo m22391_MI;
extern MethodInfo m29035_MI;
struct t107;
#define m29035(__this, p0, method) (t1418 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3931_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3931_TI, offsetof(t3931, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3931_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3931_TI, offsetof(t3931, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3931_FIs[] =
{
	&t3931_f0_FieldInfo,
	&t3931_f1_FieldInfo,
	NULL
};
extern MethodInfo m22388_MI;
static PropertyInfo t3931____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3931_TI, "System.Collections.IEnumerator.Current", &m22388_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3931____Current_PropertyInfo = 
{
	&t3931_TI, "Current", &m22391_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3931_PIs[] =
{
	&t3931____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3931____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3931_m22387_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22387_GM;
MethodInfo m22387_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3931_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3931_m22387_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22387_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22388_GM;
MethodInfo m22388_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3931_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22388_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22389_GM;
MethodInfo m22389_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3931_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22389_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22390_GM;
MethodInfo m22390_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3931_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22390_GM};
extern Il2CppType t1418_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22391_GM;
MethodInfo m22391_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3931_TI, &t1418_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22391_GM};
static MethodInfo* t3931_MIs[] =
{
	&m22387_MI,
	&m22388_MI,
	&m22389_MI,
	&m22390_MI,
	&m22391_MI,
	NULL
};
extern MethodInfo m22390_MI;
extern MethodInfo m22389_MI;
static MethodInfo* t3931_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m22388_MI,
	&m22390_MI,
	&m22389_MI,
	&m22391_MI,
};
static TypeInfo* t3931_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5472_TI,
};
static Il2CppInterfaceOffsetPair t3931_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5472_TI, 7},
};
extern TypeInfo t1418_TI;
static Il2CppRGCTXData t3931_RGCTXData[3] = 
{
	&m22391_MI/* Method Usage */,
	&t1418_TI/* Class Usage */,
	&m29035_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3931_0_0_0;
extern Il2CppType t3931_1_0_0;
extern Il2CppGenericClass t3931_GC;
TypeInfo t3931_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3931_MIs, t3931_PIs, t3931_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3931_TI, t3931_ITIs, t3931_VT, &EmptyCustomAttributesCache, &t3931_TI, &t3931_0_0_0, &t3931_1_0_0, t3931_IOs, &t3931_GC, NULL, NULL, NULL, t3931_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3931)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6963_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>
extern MethodInfo m37222_MI;
static PropertyInfo t6963____Count_PropertyInfo = 
{
	&t6963_TI, "Count", &m37222_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m37223_MI;
static PropertyInfo t6963____IsReadOnly_PropertyInfo = 
{
	&t6963_TI, "IsReadOnly", &m37223_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6963_PIs[] =
{
	&t6963____Count_PropertyInfo,
	&t6963____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37222_GM;
MethodInfo m37222_MI = 
{
	"get_Count", NULL, &t6963_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37222_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37223_GM;
MethodInfo m37223_MI = 
{
	"get_IsReadOnly", NULL, &t6963_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37223_GM};
extern Il2CppType t1418_0_0_0;
extern Il2CppType t1418_0_0_0;
static ParameterInfo t6963_m37224_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1418_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37224_GM;
MethodInfo m37224_MI = 
{
	"Add", NULL, &t6963_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6963_m37224_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37224_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37225_GM;
MethodInfo m37225_MI = 
{
	"Clear", NULL, &t6963_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37225_GM};
extern Il2CppType t1418_0_0_0;
static ParameterInfo t6963_m37226_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1418_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37226_GM;
MethodInfo m37226_MI = 
{
	"Contains", NULL, &t6963_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6963_m37226_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37226_GM};
extern Il2CppType t4223_0_0_0;
extern Il2CppType t4223_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6963_m37227_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4223_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37227_GM;
MethodInfo m37227_MI = 
{
	"CopyTo", NULL, &t6963_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6963_m37227_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37227_GM};
extern Il2CppType t1418_0_0_0;
static ParameterInfo t6963_m37228_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1418_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37228_GM;
MethodInfo m37228_MI = 
{
	"Remove", NULL, &t6963_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6963_m37228_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37228_GM};
static MethodInfo* t6963_MIs[] =
{
	&m37222_MI,
	&m37223_MI,
	&m37224_MI,
	&m37225_MI,
	&m37226_MI,
	&m37227_MI,
	&m37228_MI,
	NULL
};
extern TypeInfo t6965_TI;
static TypeInfo* t6963_ITIs[] = 
{
	&t739_TI,
	&t6965_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6963_0_0_0;
extern Il2CppType t6963_1_0_0;
struct t6963;
extern Il2CppGenericClass t6963_GC;
TypeInfo t6963_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6963_MIs, t6963_PIs, NULL, NULL, NULL, NULL, NULL, &t6963_TI, t6963_ITIs, NULL, &EmptyCustomAttributesCache, &t6963_TI, &t6963_0_0_0, &t6963_1_0_0, NULL, &t6963_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.InAttribute>
extern Il2CppType t5472_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37229_GM;
MethodInfo m37229_MI = 
{
	"GetEnumerator", NULL, &t6965_TI, &t5472_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37229_GM};
static MethodInfo* t6965_MIs[] =
{
	&m37229_MI,
	NULL
};
static TypeInfo* t6965_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6965_0_0_0;
extern Il2CppType t6965_1_0_0;
struct t6965;
extern Il2CppGenericClass t6965_GC;
TypeInfo t6965_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6965_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6965_TI, t6965_ITIs, NULL, &EmptyCustomAttributesCache, &t6965_TI, &t6965_0_0_0, &t6965_1_0_0, NULL, &t6965_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6964_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.InAttribute>
extern MethodInfo m37230_MI;
extern MethodInfo m37231_MI;
static PropertyInfo t6964____Item_PropertyInfo = 
{
	&t6964_TI, "Item", &m37230_MI, &m37231_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6964_PIs[] =
{
	&t6964____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1418_0_0_0;
static ParameterInfo t6964_m37232_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1418_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37232_GM;
MethodInfo m37232_MI = 
{
	"IndexOf", NULL, &t6964_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6964_m37232_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37232_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1418_0_0_0;
static ParameterInfo t6964_m37233_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1418_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37233_GM;
MethodInfo m37233_MI = 
{
	"Insert", NULL, &t6964_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6964_m37233_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37233_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6964_m37234_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37234_GM;
MethodInfo m37234_MI = 
{
	"RemoveAt", NULL, &t6964_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6964_m37234_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37234_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6964_m37230_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1418_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37230_GM;
MethodInfo m37230_MI = 
{
	"get_Item", NULL, &t6964_TI, &t1418_0_0_0, RuntimeInvoker_t5_t110, t6964_m37230_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37230_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1418_0_0_0;
static ParameterInfo t6964_m37231_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1418_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37231_GM;
MethodInfo m37231_MI = 
{
	"set_Item", NULL, &t6964_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6964_m37231_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37231_GM};
static MethodInfo* t6964_MIs[] =
{
	&m37232_MI,
	&m37233_MI,
	&m37234_MI,
	&m37230_MI,
	&m37231_MI,
	NULL
};
static TypeInfo* t6964_ITIs[] = 
{
	&t739_TI,
	&t6963_TI,
	&t6965_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6964_0_0_0;
extern Il2CppType t6964_1_0_0;
struct t6964;
extern Il2CppGenericClass t6964_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6964_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6964_MIs, t6964_PIs, NULL, NULL, NULL, NULL, NULL, &t6964_TI, t6964_ITIs, NULL, &t2240__CustomAttributeCache, &t6964_TI, &t6964_0_0_0, &t6964_1_0_0, NULL, &t6964_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5474_TI;

#include "t575.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.GuidAttribute>
extern MethodInfo m37235_MI;
static PropertyInfo t5474____Current_PropertyInfo = 
{
	&t5474_TI, "Current", &m37235_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5474_PIs[] =
{
	&t5474____Current_PropertyInfo,
	NULL
};
extern Il2CppType t575_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37235_GM;
MethodInfo m37235_MI = 
{
	"get_Current", NULL, &t5474_TI, &t575_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37235_GM};
static MethodInfo* t5474_MIs[] =
{
	&m37235_MI,
	NULL
};
static TypeInfo* t5474_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5474_0_0_0;
extern Il2CppType t5474_1_0_0;
struct t5474;
extern Il2CppGenericClass t5474_GC;
TypeInfo t5474_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5474_MIs, t5474_PIs, NULL, NULL, NULL, NULL, NULL, &t5474_TI, t5474_ITIs, NULL, &EmptyCustomAttributesCache, &t5474_TI, &t5474_0_0_0, &t5474_1_0_0, NULL, &t5474_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3932.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3932_TI;
#include "t3932MD.h"

extern TypeInfo t575_TI;
extern MethodInfo m22396_MI;
extern MethodInfo m29046_MI;
struct t107;
#define m29046(__this, p0, method) (t575 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3932_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3932_TI, offsetof(t3932, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3932_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3932_TI, offsetof(t3932, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3932_FIs[] =
{
	&t3932_f0_FieldInfo,
	&t3932_f1_FieldInfo,
	NULL
};
extern MethodInfo m22393_MI;
static PropertyInfo t3932____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3932_TI, "System.Collections.IEnumerator.Current", &m22393_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3932____Current_PropertyInfo = 
{
	&t3932_TI, "Current", &m22396_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3932_PIs[] =
{
	&t3932____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3932____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3932_m22392_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22392_GM;
MethodInfo m22392_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3932_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3932_m22392_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22392_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22393_GM;
MethodInfo m22393_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3932_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22393_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22394_GM;
MethodInfo m22394_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3932_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22394_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22395_GM;
MethodInfo m22395_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3932_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22395_GM};
extern Il2CppType t575_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22396_GM;
MethodInfo m22396_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3932_TI, &t575_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22396_GM};
static MethodInfo* t3932_MIs[] =
{
	&m22392_MI,
	&m22393_MI,
	&m22394_MI,
	&m22395_MI,
	&m22396_MI,
	NULL
};
extern MethodInfo m22395_MI;
extern MethodInfo m22394_MI;
static MethodInfo* t3932_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m22393_MI,
	&m22395_MI,
	&m22394_MI,
	&m22396_MI,
};
static TypeInfo* t3932_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5474_TI,
};
static Il2CppInterfaceOffsetPair t3932_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5474_TI, 7},
};
extern TypeInfo t575_TI;
static Il2CppRGCTXData t3932_RGCTXData[3] = 
{
	&m22396_MI/* Method Usage */,
	&t575_TI/* Class Usage */,
	&m29046_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3932_0_0_0;
extern Il2CppType t3932_1_0_0;
extern Il2CppGenericClass t3932_GC;
TypeInfo t3932_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3932_MIs, t3932_PIs, t3932_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3932_TI, t3932_ITIs, t3932_VT, &EmptyCustomAttributesCache, &t3932_TI, &t3932_0_0_0, &t3932_1_0_0, t3932_IOs, &t3932_GC, NULL, NULL, NULL, t3932_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3932)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6966_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>
extern MethodInfo m37236_MI;
static PropertyInfo t6966____Count_PropertyInfo = 
{
	&t6966_TI, "Count", &m37236_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m37237_MI;
static PropertyInfo t6966____IsReadOnly_PropertyInfo = 
{
	&t6966_TI, "IsReadOnly", &m37237_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6966_PIs[] =
{
	&t6966____Count_PropertyInfo,
	&t6966____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37236_GM;
MethodInfo m37236_MI = 
{
	"get_Count", NULL, &t6966_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37236_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37237_GM;
MethodInfo m37237_MI = 
{
	"get_IsReadOnly", NULL, &t6966_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37237_GM};
extern Il2CppType t575_0_0_0;
extern Il2CppType t575_0_0_0;
static ParameterInfo t6966_m37238_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t575_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37238_GM;
MethodInfo m37238_MI = 
{
	"Add", NULL, &t6966_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6966_m37238_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37238_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37239_GM;
MethodInfo m37239_MI = 
{
	"Clear", NULL, &t6966_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37239_GM};
extern Il2CppType t575_0_0_0;
static ParameterInfo t6966_m37240_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t575_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37240_GM;
MethodInfo m37240_MI = 
{
	"Contains", NULL, &t6966_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6966_m37240_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37240_GM};
extern Il2CppType t4224_0_0_0;
extern Il2CppType t4224_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6966_m37241_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4224_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37241_GM;
MethodInfo m37241_MI = 
{
	"CopyTo", NULL, &t6966_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6966_m37241_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37241_GM};
extern Il2CppType t575_0_0_0;
static ParameterInfo t6966_m37242_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t575_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37242_GM;
MethodInfo m37242_MI = 
{
	"Remove", NULL, &t6966_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6966_m37242_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37242_GM};
static MethodInfo* t6966_MIs[] =
{
	&m37236_MI,
	&m37237_MI,
	&m37238_MI,
	&m37239_MI,
	&m37240_MI,
	&m37241_MI,
	&m37242_MI,
	NULL
};
extern TypeInfo t6968_TI;
static TypeInfo* t6966_ITIs[] = 
{
	&t739_TI,
	&t6968_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6966_0_0_0;
extern Il2CppType t6966_1_0_0;
struct t6966;
extern Il2CppGenericClass t6966_GC;
TypeInfo t6966_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6966_MIs, t6966_PIs, NULL, NULL, NULL, NULL, NULL, &t6966_TI, t6966_ITIs, NULL, &EmptyCustomAttributesCache, &t6966_TI, &t6966_0_0_0, &t6966_1_0_0, NULL, &t6966_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.GuidAttribute>
extern Il2CppType t5474_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37243_GM;
MethodInfo m37243_MI = 
{
	"GetEnumerator", NULL, &t6968_TI, &t5474_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37243_GM};
static MethodInfo* t6968_MIs[] =
{
	&m37243_MI,
	NULL
};
static TypeInfo* t6968_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6968_0_0_0;
extern Il2CppType t6968_1_0_0;
struct t6968;
extern Il2CppGenericClass t6968_GC;
TypeInfo t6968_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6968_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6968_TI, t6968_ITIs, NULL, &EmptyCustomAttributesCache, &t6968_TI, &t6968_0_0_0, &t6968_1_0_0, NULL, &t6968_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6967_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>
extern MethodInfo m37244_MI;
extern MethodInfo m37245_MI;
static PropertyInfo t6967____Item_PropertyInfo = 
{
	&t6967_TI, "Item", &m37244_MI, &m37245_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6967_PIs[] =
{
	&t6967____Item_PropertyInfo,
	NULL
};
extern Il2CppType t575_0_0_0;
static ParameterInfo t6967_m37246_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t575_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37246_GM;
MethodInfo m37246_MI = 
{
	"IndexOf", NULL, &t6967_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6967_m37246_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37246_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t575_0_0_0;
static ParameterInfo t6967_m37247_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t575_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37247_GM;
MethodInfo m37247_MI = 
{
	"Insert", NULL, &t6967_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6967_m37247_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37247_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6967_m37248_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37248_GM;
MethodInfo m37248_MI = 
{
	"RemoveAt", NULL, &t6967_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6967_m37248_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37248_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6967_m37244_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t575_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37244_GM;
MethodInfo m37244_MI = 
{
	"get_Item", NULL, &t6967_TI, &t575_0_0_0, RuntimeInvoker_t5_t110, t6967_m37244_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37244_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t575_0_0_0;
static ParameterInfo t6967_m37245_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t575_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37245_GM;
MethodInfo m37245_MI = 
{
	"set_Item", NULL, &t6967_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6967_m37245_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37245_GM};
static MethodInfo* t6967_MIs[] =
{
	&m37246_MI,
	&m37247_MI,
	&m37248_MI,
	&m37244_MI,
	&m37245_MI,
	NULL
};
static TypeInfo* t6967_ITIs[] = 
{
	&t739_TI,
	&t6966_TI,
	&t6968_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6967_0_0_0;
extern Il2CppType t6967_1_0_0;
struct t6967;
extern Il2CppGenericClass t6967_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6967_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6967_MIs, t6967_PIs, NULL, NULL, NULL, NULL, NULL, &t6967_TI, t6967_ITIs, NULL, &t2240__CustomAttributeCache, &t6967_TI, &t6967_0_0_0, &t6967_1_0_0, NULL, &t6967_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5476_TI;

#include "t1419.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>
extern MethodInfo m37249_MI;
static PropertyInfo t5476____Current_PropertyInfo = 
{
	&t5476_TI, "Current", &m37249_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5476_PIs[] =
{
	&t5476____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1419_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37249_GM;
MethodInfo m37249_MI = 
{
	"get_Current", NULL, &t5476_TI, &t1419_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37249_GM};
static MethodInfo* t5476_MIs[] =
{
	&m37249_MI,
	NULL
};
static TypeInfo* t5476_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5476_0_0_0;
extern Il2CppType t5476_1_0_0;
struct t5476;
extern Il2CppGenericClass t5476_GC;
TypeInfo t5476_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5476_MIs, t5476_PIs, NULL, NULL, NULL, NULL, NULL, &t5476_TI, t5476_ITIs, NULL, &EmptyCustomAttributesCache, &t5476_TI, &t5476_0_0_0, &t5476_1_0_0, NULL, &t5476_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3933.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3933_TI;
#include "t3933MD.h"

extern TypeInfo t1419_TI;
extern MethodInfo m22401_MI;
extern MethodInfo m29057_MI;
struct t107;
#define m29057(__this, p0, method) (t1419 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3933_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3933_TI, offsetof(t3933, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3933_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3933_TI, offsetof(t3933, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3933_FIs[] =
{
	&t3933_f0_FieldInfo,
	&t3933_f1_FieldInfo,
	NULL
};
extern MethodInfo m22398_MI;
static PropertyInfo t3933____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3933_TI, "System.Collections.IEnumerator.Current", &m22398_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3933____Current_PropertyInfo = 
{
	&t3933_TI, "Current", &m22401_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3933_PIs[] =
{
	&t3933____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3933____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3933_m22397_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22397_GM;
MethodInfo m22397_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3933_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3933_m22397_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22397_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22398_GM;
MethodInfo m22398_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3933_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22398_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22399_GM;
MethodInfo m22399_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3933_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22399_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22400_GM;
MethodInfo m22400_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3933_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22400_GM};
extern Il2CppType t1419_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22401_GM;
MethodInfo m22401_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3933_TI, &t1419_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22401_GM};
static MethodInfo* t3933_MIs[] =
{
	&m22397_MI,
	&m22398_MI,
	&m22399_MI,
	&m22400_MI,
	&m22401_MI,
	NULL
};
extern MethodInfo m22400_MI;
extern MethodInfo m22399_MI;
static MethodInfo* t3933_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m22398_MI,
	&m22400_MI,
	&m22399_MI,
	&m22401_MI,
};
static TypeInfo* t3933_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5476_TI,
};
static Il2CppInterfaceOffsetPair t3933_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5476_TI, 7},
};
extern TypeInfo t1419_TI;
static Il2CppRGCTXData t3933_RGCTXData[3] = 
{
	&m22401_MI/* Method Usage */,
	&t1419_TI/* Class Usage */,
	&m29057_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3933_0_0_0;
extern Il2CppType t3933_1_0_0;
extern Il2CppGenericClass t3933_GC;
TypeInfo t3933_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3933_MIs, t3933_PIs, t3933_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3933_TI, t3933_ITIs, t3933_VT, &EmptyCustomAttributesCache, &t3933_TI, &t3933_0_0_0, &t3933_1_0_0, t3933_IOs, &t3933_GC, NULL, NULL, NULL, t3933_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3933)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6969_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>
extern MethodInfo m37250_MI;
static PropertyInfo t6969____Count_PropertyInfo = 
{
	&t6969_TI, "Count", &m37250_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m37251_MI;
static PropertyInfo t6969____IsReadOnly_PropertyInfo = 
{
	&t6969_TI, "IsReadOnly", &m37251_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6969_PIs[] =
{
	&t6969____Count_PropertyInfo,
	&t6969____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37250_GM;
MethodInfo m37250_MI = 
{
	"get_Count", NULL, &t6969_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37250_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37251_GM;
MethodInfo m37251_MI = 
{
	"get_IsReadOnly", NULL, &t6969_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37251_GM};
extern Il2CppType t1419_0_0_0;
extern Il2CppType t1419_0_0_0;
static ParameterInfo t6969_m37252_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1419_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37252_GM;
MethodInfo m37252_MI = 
{
	"Add", NULL, &t6969_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6969_m37252_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37252_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37253_GM;
MethodInfo m37253_MI = 
{
	"Clear", NULL, &t6969_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37253_GM};
extern Il2CppType t1419_0_0_0;
static ParameterInfo t6969_m37254_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1419_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37254_GM;
MethodInfo m37254_MI = 
{
	"Contains", NULL, &t6969_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6969_m37254_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37254_GM};
extern Il2CppType t4225_0_0_0;
extern Il2CppType t4225_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6969_m37255_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4225_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37255_GM;
MethodInfo m37255_MI = 
{
	"CopyTo", NULL, &t6969_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6969_m37255_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37255_GM};
extern Il2CppType t1419_0_0_0;
static ParameterInfo t6969_m37256_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1419_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37256_GM;
MethodInfo m37256_MI = 
{
	"Remove", NULL, &t6969_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6969_m37256_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37256_GM};
static MethodInfo* t6969_MIs[] =
{
	&m37250_MI,
	&m37251_MI,
	&m37252_MI,
	&m37253_MI,
	&m37254_MI,
	&m37255_MI,
	&m37256_MI,
	NULL
};
extern TypeInfo t6971_TI;
static TypeInfo* t6969_ITIs[] = 
{
	&t739_TI,
	&t6971_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6969_0_0_0;
extern Il2CppType t6969_1_0_0;
struct t6969;
extern Il2CppGenericClass t6969_GC;
TypeInfo t6969_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6969_MIs, t6969_PIs, NULL, NULL, NULL, NULL, NULL, &t6969_TI, t6969_ITIs, NULL, &EmptyCustomAttributesCache, &t6969_TI, &t6969_0_0_0, &t6969_1_0_0, NULL, &t6969_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComImportAttribute>
extern Il2CppType t5476_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37257_GM;
MethodInfo m37257_MI = 
{
	"GetEnumerator", NULL, &t6971_TI, &t5476_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37257_GM};
static MethodInfo* t6971_MIs[] =
{
	&m37257_MI,
	NULL
};
static TypeInfo* t6971_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6971_0_0_0;
extern Il2CppType t6971_1_0_0;
struct t6971;
extern Il2CppGenericClass t6971_GC;
TypeInfo t6971_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6971_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6971_TI, t6971_ITIs, NULL, &EmptyCustomAttributesCache, &t6971_TI, &t6971_0_0_0, &t6971_1_0_0, NULL, &t6971_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6970_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>
extern MethodInfo m37258_MI;
extern MethodInfo m37259_MI;
static PropertyInfo t6970____Item_PropertyInfo = 
{
	&t6970_TI, "Item", &m37258_MI, &m37259_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6970_PIs[] =
{
	&t6970____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1419_0_0_0;
static ParameterInfo t6970_m37260_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1419_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37260_GM;
MethodInfo m37260_MI = 
{
	"IndexOf", NULL, &t6970_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6970_m37260_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37260_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1419_0_0_0;
static ParameterInfo t6970_m37261_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1419_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37261_GM;
MethodInfo m37261_MI = 
{
	"Insert", NULL, &t6970_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6970_m37261_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37261_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6970_m37262_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37262_GM;
MethodInfo m37262_MI = 
{
	"RemoveAt", NULL, &t6970_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6970_m37262_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37262_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6970_m37258_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1419_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37258_GM;
MethodInfo m37258_MI = 
{
	"get_Item", NULL, &t6970_TI, &t1419_0_0_0, RuntimeInvoker_t5_t110, t6970_m37258_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37258_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1419_0_0_0;
static ParameterInfo t6970_m37259_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1419_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37259_GM;
MethodInfo m37259_MI = 
{
	"set_Item", NULL, &t6970_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6970_m37259_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37259_GM};
static MethodInfo* t6970_MIs[] =
{
	&m37260_MI,
	&m37261_MI,
	&m37262_MI,
	&m37258_MI,
	&m37259_MI,
	NULL
};
static TypeInfo* t6970_ITIs[] = 
{
	&t739_TI,
	&t6969_TI,
	&t6971_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6970_0_0_0;
extern Il2CppType t6970_1_0_0;
struct t6970;
extern Il2CppGenericClass t6970_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6970_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6970_MIs, t6970_PIs, NULL, NULL, NULL, NULL, NULL, &t6970_TI, t6970_ITIs, NULL, &t2240__CustomAttributeCache, &t6970_TI, &t6970_0_0_0, &t6970_1_0_0, NULL, &t6970_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5478_TI;

#include "t1420.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>
extern MethodInfo m37263_MI;
static PropertyInfo t5478____Current_PropertyInfo = 
{
	&t5478_TI, "Current", &m37263_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5478_PIs[] =
{
	&t5478____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1420_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37263_GM;
MethodInfo m37263_MI = 
{
	"get_Current", NULL, &t5478_TI, &t1420_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37263_GM};
static MethodInfo* t5478_MIs[] =
{
	&m37263_MI,
	NULL
};
static TypeInfo* t5478_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5478_0_0_0;
extern Il2CppType t5478_1_0_0;
struct t5478;
extern Il2CppGenericClass t5478_GC;
TypeInfo t5478_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5478_MIs, t5478_PIs, NULL, NULL, NULL, NULL, NULL, &t5478_TI, t5478_ITIs, NULL, &EmptyCustomAttributesCache, &t5478_TI, &t5478_0_0_0, &t5478_1_0_0, NULL, &t5478_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3934.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3934_TI;
#include "t3934MD.h"

extern TypeInfo t1420_TI;
extern MethodInfo m22406_MI;
extern MethodInfo m29068_MI;
struct t107;
#define m29068(__this, p0, method) (t1420 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3934_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3934_TI, offsetof(t3934, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3934_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3934_TI, offsetof(t3934, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3934_FIs[] =
{
	&t3934_f0_FieldInfo,
	&t3934_f1_FieldInfo,
	NULL
};
extern MethodInfo m22403_MI;
static PropertyInfo t3934____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3934_TI, "System.Collections.IEnumerator.Current", &m22403_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3934____Current_PropertyInfo = 
{
	&t3934_TI, "Current", &m22406_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3934_PIs[] =
{
	&t3934____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3934____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3934_m22402_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22402_GM;
MethodInfo m22402_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3934_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3934_m22402_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22402_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22403_GM;
MethodInfo m22403_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3934_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22403_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22404_GM;
MethodInfo m22404_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3934_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22404_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22405_GM;
MethodInfo m22405_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3934_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22405_GM};
extern Il2CppType t1420_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22406_GM;
MethodInfo m22406_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3934_TI, &t1420_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22406_GM};
static MethodInfo* t3934_MIs[] =
{
	&m22402_MI,
	&m22403_MI,
	&m22404_MI,
	&m22405_MI,
	&m22406_MI,
	NULL
};
extern MethodInfo m22405_MI;
extern MethodInfo m22404_MI;
static MethodInfo* t3934_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m22403_MI,
	&m22405_MI,
	&m22404_MI,
	&m22406_MI,
};
static TypeInfo* t3934_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5478_TI,
};
static Il2CppInterfaceOffsetPair t3934_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5478_TI, 7},
};
extern TypeInfo t1420_TI;
static Il2CppRGCTXData t3934_RGCTXData[3] = 
{
	&m22406_MI/* Method Usage */,
	&t1420_TI/* Class Usage */,
	&m29068_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3934_0_0_0;
extern Il2CppType t3934_1_0_0;
extern Il2CppGenericClass t3934_GC;
TypeInfo t3934_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3934_MIs, t3934_PIs, t3934_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3934_TI, t3934_ITIs, t3934_VT, &EmptyCustomAttributesCache, &t3934_TI, &t3934_0_0_0, &t3934_1_0_0, t3934_IOs, &t3934_GC, NULL, NULL, NULL, t3934_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3934)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6972_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>
extern MethodInfo m37264_MI;
static PropertyInfo t6972____Count_PropertyInfo = 
{
	&t6972_TI, "Count", &m37264_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m37265_MI;
static PropertyInfo t6972____IsReadOnly_PropertyInfo = 
{
	&t6972_TI, "IsReadOnly", &m37265_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6972_PIs[] =
{
	&t6972____Count_PropertyInfo,
	&t6972____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37264_GM;
MethodInfo m37264_MI = 
{
	"get_Count", NULL, &t6972_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37264_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37265_GM;
MethodInfo m37265_MI = 
{
	"get_IsReadOnly", NULL, &t6972_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37265_GM};
extern Il2CppType t1420_0_0_0;
extern Il2CppType t1420_0_0_0;
static ParameterInfo t6972_m37266_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1420_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37266_GM;
MethodInfo m37266_MI = 
{
	"Add", NULL, &t6972_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6972_m37266_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37266_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37267_GM;
MethodInfo m37267_MI = 
{
	"Clear", NULL, &t6972_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37267_GM};
extern Il2CppType t1420_0_0_0;
static ParameterInfo t6972_m37268_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1420_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37268_GM;
MethodInfo m37268_MI = 
{
	"Contains", NULL, &t6972_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6972_m37268_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37268_GM};
extern Il2CppType t4226_0_0_0;
extern Il2CppType t4226_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6972_m37269_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4226_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37269_GM;
MethodInfo m37269_MI = 
{
	"CopyTo", NULL, &t6972_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6972_m37269_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37269_GM};
extern Il2CppType t1420_0_0_0;
static ParameterInfo t6972_m37270_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1420_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37270_GM;
MethodInfo m37270_MI = 
{
	"Remove", NULL, &t6972_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6972_m37270_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37270_GM};
static MethodInfo* t6972_MIs[] =
{
	&m37264_MI,
	&m37265_MI,
	&m37266_MI,
	&m37267_MI,
	&m37268_MI,
	&m37269_MI,
	&m37270_MI,
	NULL
};
extern TypeInfo t6974_TI;
static TypeInfo* t6972_ITIs[] = 
{
	&t739_TI,
	&t6974_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6972_0_0_0;
extern Il2CppType t6972_1_0_0;
struct t6972;
extern Il2CppGenericClass t6972_GC;
TypeInfo t6972_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6972_MIs, t6972_PIs, NULL, NULL, NULL, NULL, NULL, &t6972_TI, t6972_ITIs, NULL, &EmptyCustomAttributesCache, &t6972_TI, &t6972_0_0_0, &t6972_1_0_0, NULL, &t6972_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.OptionalAttribute>
extern Il2CppType t5478_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37271_GM;
MethodInfo m37271_MI = 
{
	"GetEnumerator", NULL, &t6974_TI, &t5478_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37271_GM};
static MethodInfo* t6974_MIs[] =
{
	&m37271_MI,
	NULL
};
static TypeInfo* t6974_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6974_0_0_0;
extern Il2CppType t6974_1_0_0;
struct t6974;
extern Il2CppGenericClass t6974_GC;
TypeInfo t6974_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6974_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6974_TI, t6974_ITIs, NULL, &EmptyCustomAttributesCache, &t6974_TI, &t6974_0_0_0, &t6974_1_0_0, NULL, &t6974_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6973_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>
extern MethodInfo m37272_MI;
extern MethodInfo m37273_MI;
static PropertyInfo t6973____Item_PropertyInfo = 
{
	&t6973_TI, "Item", &m37272_MI, &m37273_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6973_PIs[] =
{
	&t6973____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1420_0_0_0;
static ParameterInfo t6973_m37274_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1420_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37274_GM;
MethodInfo m37274_MI = 
{
	"IndexOf", NULL, &t6973_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6973_m37274_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37274_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1420_0_0_0;
static ParameterInfo t6973_m37275_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1420_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37275_GM;
MethodInfo m37275_MI = 
{
	"Insert", NULL, &t6973_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6973_m37275_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37275_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6973_m37276_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37276_GM;
MethodInfo m37276_MI = 
{
	"RemoveAt", NULL, &t6973_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6973_m37276_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37276_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6973_m37272_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1420_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37272_GM;
MethodInfo m37272_MI = 
{
	"get_Item", NULL, &t6973_TI, &t1420_0_0_0, RuntimeInvoker_t5_t110, t6973_m37272_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37272_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1420_0_0_0;
static ParameterInfo t6973_m37273_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1420_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37273_GM;
MethodInfo m37273_MI = 
{
	"set_Item", NULL, &t6973_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6973_m37273_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37273_GM};
static MethodInfo* t6973_MIs[] =
{
	&m37274_MI,
	&m37275_MI,
	&m37276_MI,
	&m37272_MI,
	&m37273_MI,
	NULL
};
static TypeInfo* t6973_ITIs[] = 
{
	&t739_TI,
	&t6972_TI,
	&t6974_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6973_0_0_0;
extern Il2CppType t6973_1_0_0;
struct t6973;
extern Il2CppGenericClass t6973_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6973_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6973_MIs, t6973_PIs, NULL, NULL, NULL, NULL, NULL, &t6973_TI, t6973_ITIs, NULL, &t2240__CustomAttributeCache, &t6973_TI, &t6973_0_0_0, &t6973_1_0_0, NULL, &t6973_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5480_TI;

#include "t112.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
extern MethodInfo m37277_MI;
static PropertyInfo t5480____Current_PropertyInfo = 
{
	&t5480_TI, "Current", &m37277_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5480_PIs[] =
{
	&t5480____Current_PropertyInfo,
	NULL
};
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37277_GM;
MethodInfo m37277_MI = 
{
	"get_Current", NULL, &t5480_TI, &t112_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37277_GM};
static MethodInfo* t5480_MIs[] =
{
	&m37277_MI,
	NULL
};
static TypeInfo* t5480_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5480_0_0_0;
extern Il2CppType t5480_1_0_0;
struct t5480;
extern Il2CppGenericClass t5480_GC;
TypeInfo t5480_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5480_MIs, t5480_PIs, NULL, NULL, NULL, NULL, NULL, &t5480_TI, t5480_ITIs, NULL, &EmptyCustomAttributesCache, &t5480_TI, &t5480_0_0_0, &t5480_1_0_0, NULL, &t5480_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3935.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3935_TI;
#include "t3935MD.h"

extern TypeInfo t112_TI;
extern MethodInfo m22411_MI;
extern MethodInfo m29079_MI;
struct t107;
#define m29079(__this, p0, method) (t112 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3935_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3935_TI, offsetof(t3935, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3935_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3935_TI, offsetof(t3935, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3935_FIs[] =
{
	&t3935_f0_FieldInfo,
	&t3935_f1_FieldInfo,
	NULL
};
extern MethodInfo m22408_MI;
static PropertyInfo t3935____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3935_TI, "System.Collections.IEnumerator.Current", &m22408_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3935____Current_PropertyInfo = 
{
	&t3935_TI, "Current", &m22411_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3935_PIs[] =
{
	&t3935____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3935____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3935_m22407_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22407_GM;
MethodInfo m22407_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3935_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3935_m22407_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22407_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22408_GM;
MethodInfo m22408_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3935_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22408_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22409_GM;
MethodInfo m22409_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3935_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22409_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22410_GM;
MethodInfo m22410_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3935_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22410_GM};
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22411_GM;
MethodInfo m22411_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3935_TI, &t112_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22411_GM};
static MethodInfo* t3935_MIs[] =
{
	&m22407_MI,
	&m22408_MI,
	&m22409_MI,
	&m22410_MI,
	&m22411_MI,
	NULL
};
extern MethodInfo m22410_MI;
extern MethodInfo m22409_MI;
static MethodInfo* t3935_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m22408_MI,
	&m22410_MI,
	&m22409_MI,
	&m22411_MI,
};
static TypeInfo* t3935_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5480_TI,
};
static Il2CppInterfaceOffsetPair t3935_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5480_TI, 7},
};
extern TypeInfo t112_TI;
static Il2CppRGCTXData t3935_RGCTXData[3] = 
{
	&m22411_MI/* Method Usage */,
	&t112_TI/* Class Usage */,
	&m29079_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3935_0_0_0;
extern Il2CppType t3935_1_0_0;
extern Il2CppGenericClass t3935_GC;
TypeInfo t3935_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3935_MIs, t3935_PIs, t3935_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3935_TI, t3935_ITIs, t3935_VT, &EmptyCustomAttributesCache, &t3935_TI, &t3935_0_0_0, &t3935_1_0_0, t3935_IOs, &t3935_GC, NULL, NULL, NULL, t3935_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3935)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6975_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
extern MethodInfo m37278_MI;
static PropertyInfo t6975____Count_PropertyInfo = 
{
	&t6975_TI, "Count", &m37278_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m37279_MI;
static PropertyInfo t6975____IsReadOnly_PropertyInfo = 
{
	&t6975_TI, "IsReadOnly", &m37279_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6975_PIs[] =
{
	&t6975____Count_PropertyInfo,
	&t6975____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37278_GM;
MethodInfo m37278_MI = 
{
	"get_Count", NULL, &t6975_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37278_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37279_GM;
MethodInfo m37279_MI = 
{
	"get_IsReadOnly", NULL, &t6975_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37279_GM};
extern Il2CppType t112_0_0_0;
extern Il2CppType t112_0_0_0;
static ParameterInfo t6975_m37280_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37280_GM;
MethodInfo m37280_MI = 
{
	"Add", NULL, &t6975_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6975_m37280_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37280_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37281_GM;
MethodInfo m37281_MI = 
{
	"Clear", NULL, &t6975_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37281_GM};
extern Il2CppType t112_0_0_0;
static ParameterInfo t6975_m37282_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37282_GM;
MethodInfo m37282_MI = 
{
	"Contains", NULL, &t6975_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6975_m37282_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37282_GM};
extern Il2CppType t4227_0_0_0;
extern Il2CppType t4227_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6975_m37283_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4227_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37283_GM;
MethodInfo m37283_MI = 
{
	"CopyTo", NULL, &t6975_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6975_m37283_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37283_GM};
extern Il2CppType t112_0_0_0;
static ParameterInfo t6975_m37284_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37284_GM;
MethodInfo m37284_MI = 
{
	"Remove", NULL, &t6975_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6975_m37284_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37284_GM};
static MethodInfo* t6975_MIs[] =
{
	&m37278_MI,
	&m37279_MI,
	&m37280_MI,
	&m37281_MI,
	&m37282_MI,
	&m37283_MI,
	&m37284_MI,
	NULL
};
extern TypeInfo t6977_TI;
static TypeInfo* t6975_ITIs[] = 
{
	&t739_TI,
	&t6977_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6975_0_0_0;
extern Il2CppType t6975_1_0_0;
struct t6975;
extern Il2CppGenericClass t6975_GC;
TypeInfo t6975_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6975_MIs, t6975_PIs, NULL, NULL, NULL, NULL, NULL, &t6975_TI, t6975_ITIs, NULL, &EmptyCustomAttributesCache, &t6975_TI, &t6975_0_0_0, &t6975_1_0_0, NULL, &t6975_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
extern Il2CppType t5480_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37285_GM;
MethodInfo m37285_MI = 
{
	"GetEnumerator", NULL, &t6977_TI, &t5480_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37285_GM};
static MethodInfo* t6977_MIs[] =
{
	&m37285_MI,
	NULL
};
static TypeInfo* t6977_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6977_0_0_0;
extern Il2CppType t6977_1_0_0;
struct t6977;
extern Il2CppGenericClass t6977_GC;
TypeInfo t6977_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6977_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6977_TI, t6977_ITIs, NULL, &EmptyCustomAttributesCache, &t6977_TI, &t6977_0_0_0, &t6977_1_0_0, NULL, &t6977_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6976_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
extern MethodInfo m37286_MI;
extern MethodInfo m37287_MI;
static PropertyInfo t6976____Item_PropertyInfo = 
{
	&t6976_TI, "Item", &m37286_MI, &m37287_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6976_PIs[] =
{
	&t6976____Item_PropertyInfo,
	NULL
};
extern Il2CppType t112_0_0_0;
static ParameterInfo t6976_m37288_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37288_GM;
MethodInfo m37288_MI = 
{
	"IndexOf", NULL, &t6976_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6976_m37288_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37288_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t112_0_0_0;
static ParameterInfo t6976_m37289_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37289_GM;
MethodInfo m37289_MI = 
{
	"Insert", NULL, &t6976_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6976_m37289_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37289_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6976_m37290_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37290_GM;
MethodInfo m37290_MI = 
{
	"RemoveAt", NULL, &t6976_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6976_m37290_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37290_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6976_m37286_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37286_GM;
MethodInfo m37286_MI = 
{
	"get_Item", NULL, &t6976_TI, &t112_0_0_0, RuntimeInvoker_t5_t110, t6976_m37286_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37286_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t112_0_0_0;
static ParameterInfo t6976_m37287_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37287_GM;
MethodInfo m37287_MI = 
{
	"set_Item", NULL, &t6976_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6976_m37287_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37287_GM};
static MethodInfo* t6976_MIs[] =
{
	&m37288_MI,
	&m37289_MI,
	&m37290_MI,
	&m37286_MI,
	&m37287_MI,
	NULL
};
static TypeInfo* t6976_ITIs[] = 
{
	&t739_TI,
	&t6975_TI,
	&t6977_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6976_0_0_0;
extern Il2CppType t6976_1_0_0;
struct t6976;
extern Il2CppGenericClass t6976_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6976_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6976_MIs, t6976_PIs, NULL, NULL, NULL, NULL, NULL, &t6976_TI, t6976_ITIs, NULL, &t2240__CustomAttributeCache, &t6976_TI, &t6976_0_0_0, &t6976_1_0_0, NULL, &t6976_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5482_TI;

#include "t822.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
extern MethodInfo m37291_MI;
static PropertyInfo t5482____Current_PropertyInfo = 
{
	&t5482_TI, "Current", &m37291_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5482_PIs[] =
{
	&t5482____Current_PropertyInfo,
	NULL
};
extern Il2CppType t822_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37291_GM;
MethodInfo m37291_MI = 
{
	"get_Current", NULL, &t5482_TI, &t822_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37291_GM};
static MethodInfo* t5482_MIs[] =
{
	&m37291_MI,
	NULL
};
static TypeInfo* t5482_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5482_0_0_0;
extern Il2CppType t5482_1_0_0;
struct t5482;
extern Il2CppGenericClass t5482_GC;
TypeInfo t5482_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5482_MIs, t5482_PIs, NULL, NULL, NULL, NULL, NULL, &t5482_TI, t5482_ITIs, NULL, &EmptyCustomAttributesCache, &t5482_TI, &t5482_0_0_0, &t5482_1_0_0, NULL, &t5482_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3936.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3936_TI;
#include "t3936MD.h"

extern TypeInfo t822_TI;
extern MethodInfo m22416_MI;
extern MethodInfo m29090_MI;
struct t107;
#define m29090(__this, p0, method) (t822 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3936_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3936_TI, offsetof(t3936, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3936_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3936_TI, offsetof(t3936, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3936_FIs[] =
{
	&t3936_f0_FieldInfo,
	&t3936_f1_FieldInfo,
	NULL
};
extern MethodInfo m22413_MI;
static PropertyInfo t3936____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3936_TI, "System.Collections.IEnumerator.Current", &m22413_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3936____Current_PropertyInfo = 
{
	&t3936_TI, "Current", &m22416_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3936_PIs[] =
{
	&t3936____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3936____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3936_m22412_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22412_GM;
MethodInfo m22412_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3936_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3936_m22412_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22412_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22413_GM;
MethodInfo m22413_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3936_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22413_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22414_GM;
MethodInfo m22414_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3936_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22414_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22415_GM;
MethodInfo m22415_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3936_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22415_GM};
extern Il2CppType t822_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22416_GM;
MethodInfo m22416_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3936_TI, &t822_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22416_GM};
static MethodInfo* t3936_MIs[] =
{
	&m22412_MI,
	&m22413_MI,
	&m22414_MI,
	&m22415_MI,
	&m22416_MI,
	NULL
};
extern MethodInfo m22415_MI;
extern MethodInfo m22414_MI;
static MethodInfo* t3936_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m22413_MI,
	&m22415_MI,
	&m22414_MI,
	&m22416_MI,
};
static TypeInfo* t3936_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5482_TI,
};
static Il2CppInterfaceOffsetPair t3936_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5482_TI, 7},
};
extern TypeInfo t822_TI;
static Il2CppRGCTXData t3936_RGCTXData[3] = 
{
	&m22416_MI/* Method Usage */,
	&t822_TI/* Class Usage */,
	&m29090_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3936_0_0_0;
extern Il2CppType t3936_1_0_0;
extern Il2CppGenericClass t3936_GC;
TypeInfo t3936_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3936_MIs, t3936_PIs, t3936_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3936_TI, t3936_ITIs, t3936_VT, &EmptyCustomAttributesCache, &t3936_TI, &t3936_0_0_0, &t3936_1_0_0, t3936_IOs, &t3936_GC, NULL, NULL, NULL, t3936_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3936)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6978_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
extern MethodInfo m37292_MI;
static PropertyInfo t6978____Count_PropertyInfo = 
{
	&t6978_TI, "Count", &m37292_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m37293_MI;
static PropertyInfo t6978____IsReadOnly_PropertyInfo = 
{
	&t6978_TI, "IsReadOnly", &m37293_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6978_PIs[] =
{
	&t6978____Count_PropertyInfo,
	&t6978____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37292_GM;
MethodInfo m37292_MI = 
{
	"get_Count", NULL, &t6978_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37292_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37293_GM;
MethodInfo m37293_MI = 
{
	"get_IsReadOnly", NULL, &t6978_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37293_GM};
extern Il2CppType t822_0_0_0;
extern Il2CppType t822_0_0_0;
static ParameterInfo t6978_m37294_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t822_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37294_GM;
MethodInfo m37294_MI = 
{
	"Add", NULL, &t6978_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6978_m37294_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37294_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37295_GM;
MethodInfo m37295_MI = 
{
	"Clear", NULL, &t6978_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37295_GM};
extern Il2CppType t822_0_0_0;
static ParameterInfo t6978_m37296_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t822_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37296_GM;
MethodInfo m37296_MI = 
{
	"Contains", NULL, &t6978_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6978_m37296_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37296_GM};
extern Il2CppType t4228_0_0_0;
extern Il2CppType t4228_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6978_m37297_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4228_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37297_GM;
MethodInfo m37297_MI = 
{
	"CopyTo", NULL, &t6978_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6978_m37297_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37297_GM};
extern Il2CppType t822_0_0_0;
static ParameterInfo t6978_m37298_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t822_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37298_GM;
MethodInfo m37298_MI = 
{
	"Remove", NULL, &t6978_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6978_m37298_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37298_GM};
static MethodInfo* t6978_MIs[] =
{
	&m37292_MI,
	&m37293_MI,
	&m37294_MI,
	&m37295_MI,
	&m37296_MI,
	&m37297_MI,
	&m37298_MI,
	NULL
};
extern TypeInfo t6980_TI;
static TypeInfo* t6978_ITIs[] = 
{
	&t739_TI,
	&t6980_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6978_0_0_0;
extern Il2CppType t6978_1_0_0;
struct t6978;
extern Il2CppGenericClass t6978_GC;
TypeInfo t6978_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6978_MIs, t6978_PIs, NULL, NULL, NULL, NULL, NULL, &t6978_TI, t6978_ITIs, NULL, &EmptyCustomAttributesCache, &t6978_TI, &t6978_0_0_0, &t6978_1_0_0, NULL, &t6978_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
extern Il2CppType t5482_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37299_GM;
MethodInfo m37299_MI = 
{
	"GetEnumerator", NULL, &t6980_TI, &t5482_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37299_GM};
static MethodInfo* t6980_MIs[] =
{
	&m37299_MI,
	NULL
};
static TypeInfo* t6980_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6980_0_0_0;
extern Il2CppType t6980_1_0_0;
struct t6980;
extern Il2CppGenericClass t6980_GC;
TypeInfo t6980_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6980_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6980_TI, t6980_ITIs, NULL, &EmptyCustomAttributesCache, &t6980_TI, &t6980_0_0_0, &t6980_1_0_0, NULL, &t6980_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6979_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
extern MethodInfo m37300_MI;
extern MethodInfo m37301_MI;
static PropertyInfo t6979____Item_PropertyInfo = 
{
	&t6979_TI, "Item", &m37300_MI, &m37301_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6979_PIs[] =
{
	&t6979____Item_PropertyInfo,
	NULL
};
extern Il2CppType t822_0_0_0;
static ParameterInfo t6979_m37302_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t822_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37302_GM;
MethodInfo m37302_MI = 
{
	"IndexOf", NULL, &t6979_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6979_m37302_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37302_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t822_0_0_0;
static ParameterInfo t6979_m37303_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t822_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37303_GM;
MethodInfo m37303_MI = 
{
	"Insert", NULL, &t6979_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6979_m37303_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37303_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6979_m37304_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37304_GM;
MethodInfo m37304_MI = 
{
	"RemoveAt", NULL, &t6979_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6979_m37304_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37304_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6979_m37300_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t822_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37300_GM;
MethodInfo m37300_MI = 
{
	"get_Item", NULL, &t6979_TI, &t822_0_0_0, RuntimeInvoker_t5_t110, t6979_m37300_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37300_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t822_0_0_0;
static ParameterInfo t6979_m37301_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t822_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37301_GM;
MethodInfo m37301_MI = 
{
	"set_Item", NULL, &t6979_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6979_m37301_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37301_GM};
static MethodInfo* t6979_MIs[] =
{
	&m37302_MI,
	&m37303_MI,
	&m37304_MI,
	&m37300_MI,
	&m37301_MI,
	NULL
};
static TypeInfo* t6979_ITIs[] = 
{
	&t739_TI,
	&t6978_TI,
	&t6980_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6979_0_0_0;
extern Il2CppType t6979_1_0_0;
struct t6979;
extern Il2CppGenericClass t6979_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6979_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6979_MIs, t6979_PIs, NULL, NULL, NULL, NULL, NULL, &t6979_TI, t6979_ITIs, NULL, &t2240__CustomAttributeCache, &t6979_TI, &t6979_0_0_0, &t6979_1_0_0, NULL, &t6979_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5484_TI;

#include "t201.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>
extern MethodInfo m37305_MI;
static PropertyInfo t5484____Current_PropertyInfo = 
{
	&t5484_TI, "Current", &m37305_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5484_PIs[] =
{
	&t5484____Current_PropertyInfo,
	NULL
};
extern Il2CppType t201_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37305_GM;
MethodInfo m37305_MI = 
{
	"get_Current", NULL, &t5484_TI, &t201_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37305_GM};
static MethodInfo* t5484_MIs[] =
{
	&m37305_MI,
	NULL
};
static TypeInfo* t5484_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5484_0_0_0;
extern Il2CppType t5484_1_0_0;
struct t5484;
extern Il2CppGenericClass t5484_GC;
TypeInfo t5484_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5484_MIs, t5484_PIs, NULL, NULL, NULL, NULL, NULL, &t5484_TI, t5484_ITIs, NULL, &EmptyCustomAttributesCache, &t5484_TI, &t5484_0_0_0, &t5484_1_0_0, NULL, &t5484_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3937.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3937_TI;
#include "t3937MD.h"

extern TypeInfo t201_TI;
extern MethodInfo m22421_MI;
extern MethodInfo m29101_MI;
struct t107;
#define m29101(__this, p0, method) (t201 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3937_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3937_TI, offsetof(t3937, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3937_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3937_TI, offsetof(t3937, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3937_FIs[] =
{
	&t3937_f0_FieldInfo,
	&t3937_f1_FieldInfo,
	NULL
};
extern MethodInfo m22418_MI;
static PropertyInfo t3937____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3937_TI, "System.Collections.IEnumerator.Current", &m22418_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3937____Current_PropertyInfo = 
{
	&t3937_TI, "Current", &m22421_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3937_PIs[] =
{
	&t3937____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3937____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3937_m22417_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22417_GM;
MethodInfo m22417_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3937_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3937_m22417_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22417_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22418_GM;
MethodInfo m22418_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3937_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22418_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22419_GM;
MethodInfo m22419_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3937_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22419_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22420_GM;
MethodInfo m22420_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3937_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22420_GM};
extern Il2CppType t201_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22421_GM;
MethodInfo m22421_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3937_TI, &t201_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22421_GM};
static MethodInfo* t3937_MIs[] =
{
	&m22417_MI,
	&m22418_MI,
	&m22419_MI,
	&m22420_MI,
	&m22421_MI,
	NULL
};
extern MethodInfo m22420_MI;
extern MethodInfo m22419_MI;
static MethodInfo* t3937_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m22418_MI,
	&m22420_MI,
	&m22419_MI,
	&m22421_MI,
};
static TypeInfo* t3937_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5484_TI,
};
static Il2CppInterfaceOffsetPair t3937_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5484_TI, 7},
};
extern TypeInfo t201_TI;
static Il2CppRGCTXData t3937_RGCTXData[3] = 
{
	&m22421_MI/* Method Usage */,
	&t201_TI/* Class Usage */,
	&m29101_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3937_0_0_0;
extern Il2CppType t3937_1_0_0;
extern Il2CppGenericClass t3937_GC;
TypeInfo t3937_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3937_MIs, t3937_PIs, t3937_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3937_TI, t3937_ITIs, t3937_VT, &EmptyCustomAttributesCache, &t3937_TI, &t3937_0_0_0, &t3937_1_0_0, t3937_IOs, &t3937_GC, NULL, NULL, NULL, t3937_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3937)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6981_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>
extern MethodInfo m37306_MI;
static PropertyInfo t6981____Count_PropertyInfo = 
{
	&t6981_TI, "Count", &m37306_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m37307_MI;
static PropertyInfo t6981____IsReadOnly_PropertyInfo = 
{
	&t6981_TI, "IsReadOnly", &m37307_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6981_PIs[] =
{
	&t6981____Count_PropertyInfo,
	&t6981____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37306_GM;
MethodInfo m37306_MI = 
{
	"get_Count", NULL, &t6981_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37306_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37307_GM;
MethodInfo m37307_MI = 
{
	"get_IsReadOnly", NULL, &t6981_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37307_GM};
extern Il2CppType t201_0_0_0;
extern Il2CppType t201_0_0_0;
static ParameterInfo t6981_m37308_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t201_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37308_GM;
MethodInfo m37308_MI = 
{
	"Add", NULL, &t6981_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6981_m37308_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37308_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37309_GM;
MethodInfo m37309_MI = 
{
	"Clear", NULL, &t6981_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37309_GM};
extern Il2CppType t201_0_0_0;
static ParameterInfo t6981_m37310_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t201_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37310_GM;
MethodInfo m37310_MI = 
{
	"Contains", NULL, &t6981_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6981_m37310_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37310_GM};
extern Il2CppType t4229_0_0_0;
extern Il2CppType t4229_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6981_m37311_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4229_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37311_GM;
MethodInfo m37311_MI = 
{
	"CopyTo", NULL, &t6981_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6981_m37311_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37311_GM};
extern Il2CppType t201_0_0_0;
static ParameterInfo t6981_m37312_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t201_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37312_GM;
MethodInfo m37312_MI = 
{
	"Remove", NULL, &t6981_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6981_m37312_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37312_GM};
static MethodInfo* t6981_MIs[] =
{
	&m37306_MI,
	&m37307_MI,
	&m37308_MI,
	&m37309_MI,
	&m37310_MI,
	&m37311_MI,
	&m37312_MI,
	NULL
};
extern TypeInfo t6983_TI;
static TypeInfo* t6981_ITIs[] = 
{
	&t739_TI,
	&t6983_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6981_0_0_0;
extern Il2CppType t6981_1_0_0;
struct t6981;
extern Il2CppGenericClass t6981_GC;
TypeInfo t6981_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6981_MIs, t6981_PIs, NULL, NULL, NULL, NULL, NULL, &t6981_TI, t6981_ITIs, NULL, &EmptyCustomAttributesCache, &t6981_TI, &t6981_0_0_0, &t6981_1_0_0, NULL, &t6981_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>
extern Il2CppType t5484_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37313_GM;
MethodInfo m37313_MI = 
{
	"GetEnumerator", NULL, &t6983_TI, &t5484_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37313_GM};
static MethodInfo* t6983_MIs[] =
{
	&m37313_MI,
	NULL
};
static TypeInfo* t6983_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6983_0_0_0;
extern Il2CppType t6983_1_0_0;
struct t6983;
extern Il2CppGenericClass t6983_GC;
TypeInfo t6983_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6983_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6983_TI, t6983_ITIs, NULL, &EmptyCustomAttributesCache, &t6983_TI, &t6983_0_0_0, &t6983_1_0_0, NULL, &t6983_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6982_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>
extern MethodInfo m37314_MI;
extern MethodInfo m37315_MI;
static PropertyInfo t6982____Item_PropertyInfo = 
{
	&t6982_TI, "Item", &m37314_MI, &m37315_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6982_PIs[] =
{
	&t6982____Item_PropertyInfo,
	NULL
};
extern Il2CppType t201_0_0_0;
static ParameterInfo t6982_m37316_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t201_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37316_GM;
MethodInfo m37316_MI = 
{
	"IndexOf", NULL, &t6982_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6982_m37316_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37316_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t201_0_0_0;
static ParameterInfo t6982_m37317_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t201_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37317_GM;
MethodInfo m37317_MI = 
{
	"Insert", NULL, &t6982_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6982_m37317_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37317_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6982_m37318_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37318_GM;
MethodInfo m37318_MI = 
{
	"RemoveAt", NULL, &t6982_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6982_m37318_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37318_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6982_m37314_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t201_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37314_GM;
MethodInfo m37314_MI = 
{
	"get_Item", NULL, &t6982_TI, &t201_0_0_0, RuntimeInvoker_t5_t110, t6982_m37314_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37314_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t201_0_0_0;
static ParameterInfo t6982_m37315_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t201_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37315_GM;
MethodInfo m37315_MI = 
{
	"set_Item", NULL, &t6982_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6982_m37315_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37315_GM};
static MethodInfo* t6982_MIs[] =
{
	&m37316_MI,
	&m37317_MI,
	&m37318_MI,
	&m37314_MI,
	&m37315_MI,
	NULL
};
static TypeInfo* t6982_ITIs[] = 
{
	&t739_TI,
	&t6981_TI,
	&t6983_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6982_0_0_0;
extern Il2CppType t6982_1_0_0;
struct t6982;
extern Il2CppGenericClass t6982_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6982_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6982_MIs, t6982_PIs, NULL, NULL, NULL, NULL, NULL, &t6982_TI, t6982_ITIs, NULL, &t2240__CustomAttributeCache, &t6982_TI, &t6982_0_0_0, &t6982_1_0_0, NULL, &t6982_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5486_TI;

#include "t488.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>
extern MethodInfo m37319_MI;
static PropertyInfo t5486____Current_PropertyInfo = 
{
	&t5486_TI, "Current", &m37319_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5486_PIs[] =
{
	&t5486____Current_PropertyInfo,
	NULL
};
extern Il2CppType t488_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37319_GM;
MethodInfo m37319_MI = 
{
	"get_Current", NULL, &t5486_TI, &t488_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37319_GM};
static MethodInfo* t5486_MIs[] =
{
	&m37319_MI,
	NULL
};
static TypeInfo* t5486_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5486_0_0_0;
extern Il2CppType t5486_1_0_0;
struct t5486;
extern Il2CppGenericClass t5486_GC;
TypeInfo t5486_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5486_MIs, t5486_PIs, NULL, NULL, NULL, NULL, NULL, &t5486_TI, t5486_ITIs, NULL, &EmptyCustomAttributesCache, &t5486_TI, &t5486_0_0_0, &t5486_1_0_0, NULL, &t5486_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3938.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3938_TI;
#include "t3938MD.h"

extern TypeInfo t488_TI;
extern MethodInfo m22426_MI;
extern MethodInfo m29112_MI;
struct t107;
#define m29112(__this, p0, method) (t488 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3938_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3938_TI, offsetof(t3938, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3938_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3938_TI, offsetof(t3938, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3938_FIs[] =
{
	&t3938_f0_FieldInfo,
	&t3938_f1_FieldInfo,
	NULL
};
extern MethodInfo m22423_MI;
static PropertyInfo t3938____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3938_TI, "System.Collections.IEnumerator.Current", &m22423_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3938____Current_PropertyInfo = 
{
	&t3938_TI, "Current", &m22426_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3938_PIs[] =
{
	&t3938____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3938____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3938_m22422_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22422_GM;
MethodInfo m22422_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3938_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3938_m22422_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22422_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22423_GM;
MethodInfo m22423_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3938_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22423_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22424_GM;
MethodInfo m22424_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3938_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22424_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22425_GM;
MethodInfo m22425_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3938_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22425_GM};
extern Il2CppType t488_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22426_GM;
MethodInfo m22426_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3938_TI, &t488_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22426_GM};
static MethodInfo* t3938_MIs[] =
{
	&m22422_MI,
	&m22423_MI,
	&m22424_MI,
	&m22425_MI,
	&m22426_MI,
	NULL
};
extern MethodInfo m22425_MI;
extern MethodInfo m22424_MI;
static MethodInfo* t3938_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m22423_MI,
	&m22425_MI,
	&m22424_MI,
	&m22426_MI,
};
static TypeInfo* t3938_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5486_TI,
};
static Il2CppInterfaceOffsetPair t3938_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5486_TI, 7},
};
extern TypeInfo t488_TI;
static Il2CppRGCTXData t3938_RGCTXData[3] = 
{
	&m22426_MI/* Method Usage */,
	&t488_TI/* Class Usage */,
	&m29112_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3938_0_0_0;
extern Il2CppType t3938_1_0_0;
extern Il2CppGenericClass t3938_GC;
TypeInfo t3938_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3938_MIs, t3938_PIs, t3938_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3938_TI, t3938_ITIs, t3938_VT, &EmptyCustomAttributesCache, &t3938_TI, &t3938_0_0_0, &t3938_1_0_0, t3938_IOs, &t3938_GC, NULL, NULL, NULL, t3938_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3938)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6984_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>
extern MethodInfo m37320_MI;
static PropertyInfo t6984____Count_PropertyInfo = 
{
	&t6984_TI, "Count", &m37320_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m37321_MI;
static PropertyInfo t6984____IsReadOnly_PropertyInfo = 
{
	&t6984_TI, "IsReadOnly", &m37321_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6984_PIs[] =
{
	&t6984____Count_PropertyInfo,
	&t6984____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37320_GM;
MethodInfo m37320_MI = 
{
	"get_Count", NULL, &t6984_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37320_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37321_GM;
MethodInfo m37321_MI = 
{
	"get_IsReadOnly", NULL, &t6984_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37321_GM};
extern Il2CppType t488_0_0_0;
extern Il2CppType t488_0_0_0;
static ParameterInfo t6984_m37322_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t488_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37322_GM;
MethodInfo m37322_MI = 
{
	"Add", NULL, &t6984_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6984_m37322_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37322_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37323_GM;
MethodInfo m37323_MI = 
{
	"Clear", NULL, &t6984_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37323_GM};
extern Il2CppType t488_0_0_0;
static ParameterInfo t6984_m37324_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t488_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37324_GM;
MethodInfo m37324_MI = 
{
	"Contains", NULL, &t6984_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6984_m37324_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37324_GM};
extern Il2CppType t4230_0_0_0;
extern Il2CppType t4230_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6984_m37325_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4230_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37325_GM;
MethodInfo m37325_MI = 
{
	"CopyTo", NULL, &t6984_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6984_m37325_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37325_GM};
extern Il2CppType t488_0_0_0;
static ParameterInfo t6984_m37326_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t488_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37326_GM;
MethodInfo m37326_MI = 
{
	"Remove", NULL, &t6984_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6984_m37326_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37326_GM};
static MethodInfo* t6984_MIs[] =
{
	&m37320_MI,
	&m37321_MI,
	&m37322_MI,
	&m37323_MI,
	&m37324_MI,
	&m37325_MI,
	&m37326_MI,
	NULL
};
extern TypeInfo t6986_TI;
static TypeInfo* t6984_ITIs[] = 
{
	&t739_TI,
	&t6986_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6984_0_0_0;
extern Il2CppType t6984_1_0_0;
struct t6984;
extern Il2CppGenericClass t6984_GC;
TypeInfo t6984_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6984_MIs, t6984_PIs, NULL, NULL, NULL, NULL, NULL, &t6984_TI, t6984_ITIs, NULL, &EmptyCustomAttributesCache, &t6984_TI, &t6984_0_0_0, &t6984_1_0_0, NULL, &t6984_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerHiddenAttribute>
extern Il2CppType t5486_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37327_GM;
MethodInfo m37327_MI = 
{
	"GetEnumerator", NULL, &t6986_TI, &t5486_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37327_GM};
static MethodInfo* t6986_MIs[] =
{
	&m37327_MI,
	NULL
};
static TypeInfo* t6986_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6986_0_0_0;
extern Il2CppType t6986_1_0_0;
struct t6986;
extern Il2CppGenericClass t6986_GC;
TypeInfo t6986_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6986_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6986_TI, t6986_ITIs, NULL, &EmptyCustomAttributesCache, &t6986_TI, &t6986_0_0_0, &t6986_1_0_0, NULL, &t6986_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6985_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>
extern MethodInfo m37328_MI;
extern MethodInfo m37329_MI;
static PropertyInfo t6985____Item_PropertyInfo = 
{
	&t6985_TI, "Item", &m37328_MI, &m37329_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6985_PIs[] =
{
	&t6985____Item_PropertyInfo,
	NULL
};
extern Il2CppType t488_0_0_0;
static ParameterInfo t6985_m37330_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t488_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37330_GM;
MethodInfo m37330_MI = 
{
	"IndexOf", NULL, &t6985_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6985_m37330_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37330_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t488_0_0_0;
static ParameterInfo t6985_m37331_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t488_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37331_GM;
MethodInfo m37331_MI = 
{
	"Insert", NULL, &t6985_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6985_m37331_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37331_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6985_m37332_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37332_GM;
MethodInfo m37332_MI = 
{
	"RemoveAt", NULL, &t6985_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6985_m37332_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37332_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6985_m37328_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t488_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37328_GM;
MethodInfo m37328_MI = 
{
	"get_Item", NULL, &t6985_TI, &t488_0_0_0, RuntimeInvoker_t5_t110, t6985_m37328_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37328_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t488_0_0_0;
static ParameterInfo t6985_m37329_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t488_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37329_GM;
MethodInfo m37329_MI = 
{
	"set_Item", NULL, &t6985_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6985_m37329_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37329_GM};
static MethodInfo* t6985_MIs[] =
{
	&m37330_MI,
	&m37331_MI,
	&m37332_MI,
	&m37328_MI,
	&m37329_MI,
	NULL
};
static TypeInfo* t6985_ITIs[] = 
{
	&t739_TI,
	&t6984_TI,
	&t6986_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6985_0_0_0;
extern Il2CppType t6985_1_0_0;
struct t6985;
extern Il2CppGenericClass t6985_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6985_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6985_MIs, t6985_PIs, NULL, NULL, NULL, NULL, NULL, &t6985_TI, t6985_ITIs, NULL, &t2240__CustomAttributeCache, &t6985_TI, &t6985_0_0_0, &t6985_1_0_0, NULL, &t6985_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5488_TI;

#include "t172.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.DefaultMemberAttribute>
extern MethodInfo m37333_MI;
static PropertyInfo t5488____Current_PropertyInfo = 
{
	&t5488_TI, "Current", &m37333_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5488_PIs[] =
{
	&t5488____Current_PropertyInfo,
	NULL
};
extern Il2CppType t172_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37333_GM;
MethodInfo m37333_MI = 
{
	"get_Current", NULL, &t5488_TI, &t172_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37333_GM};
static MethodInfo* t5488_MIs[] =
{
	&m37333_MI,
	NULL
};
static TypeInfo* t5488_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5488_0_0_0;
extern Il2CppType t5488_1_0_0;
struct t5488;
extern Il2CppGenericClass t5488_GC;
TypeInfo t5488_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5488_MIs, t5488_PIs, NULL, NULL, NULL, NULL, NULL, &t5488_TI, t5488_ITIs, NULL, &EmptyCustomAttributesCache, &t5488_TI, &t5488_0_0_0, &t5488_1_0_0, NULL, &t5488_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3939.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3939_TI;
#include "t3939MD.h"

extern TypeInfo t172_TI;
extern MethodInfo m22431_MI;
extern MethodInfo m29123_MI;
struct t107;
#define m29123(__this, p0, method) (t172 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3939_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3939_TI, offsetof(t3939, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3939_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3939_TI, offsetof(t3939, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3939_FIs[] =
{
	&t3939_f0_FieldInfo,
	&t3939_f1_FieldInfo,
	NULL
};
extern MethodInfo m22428_MI;
static PropertyInfo t3939____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3939_TI, "System.Collections.IEnumerator.Current", &m22428_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3939____Current_PropertyInfo = 
{
	&t3939_TI, "Current", &m22431_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3939_PIs[] =
{
	&t3939____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3939____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3939_m22427_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22427_GM;
MethodInfo m22427_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3939_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3939_m22427_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22427_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22428_GM;
MethodInfo m22428_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3939_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22428_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22429_GM;
MethodInfo m22429_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3939_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22429_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22430_GM;
MethodInfo m22430_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3939_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22430_GM};
extern Il2CppType t172_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22431_GM;
MethodInfo m22431_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3939_TI, &t172_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22431_GM};
static MethodInfo* t3939_MIs[] =
{
	&m22427_MI,
	&m22428_MI,
	&m22429_MI,
	&m22430_MI,
	&m22431_MI,
	NULL
};
extern MethodInfo m22430_MI;
extern MethodInfo m22429_MI;
static MethodInfo* t3939_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m22428_MI,
	&m22430_MI,
	&m22429_MI,
	&m22431_MI,
};
static TypeInfo* t3939_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5488_TI,
};
static Il2CppInterfaceOffsetPair t3939_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5488_TI, 7},
};
extern TypeInfo t172_TI;
static Il2CppRGCTXData t3939_RGCTXData[3] = 
{
	&m22431_MI/* Method Usage */,
	&t172_TI/* Class Usage */,
	&m29123_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3939_0_0_0;
extern Il2CppType t3939_1_0_0;
extern Il2CppGenericClass t3939_GC;
TypeInfo t3939_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3939_MIs, t3939_PIs, t3939_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3939_TI, t3939_ITIs, t3939_VT, &EmptyCustomAttributesCache, &t3939_TI, &t3939_0_0_0, &t3939_1_0_0, t3939_IOs, &t3939_GC, NULL, NULL, NULL, t3939_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3939)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6987_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>
extern MethodInfo m37334_MI;
static PropertyInfo t6987____Count_PropertyInfo = 
{
	&t6987_TI, "Count", &m37334_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m37335_MI;
static PropertyInfo t6987____IsReadOnly_PropertyInfo = 
{
	&t6987_TI, "IsReadOnly", &m37335_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6987_PIs[] =
{
	&t6987____Count_PropertyInfo,
	&t6987____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37334_GM;
MethodInfo m37334_MI = 
{
	"get_Count", NULL, &t6987_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37334_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37335_GM;
MethodInfo m37335_MI = 
{
	"get_IsReadOnly", NULL, &t6987_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37335_GM};
extern Il2CppType t172_0_0_0;
extern Il2CppType t172_0_0_0;
static ParameterInfo t6987_m37336_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t172_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37336_GM;
MethodInfo m37336_MI = 
{
	"Add", NULL, &t6987_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6987_m37336_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37336_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37337_GM;
MethodInfo m37337_MI = 
{
	"Clear", NULL, &t6987_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37337_GM};
extern Il2CppType t172_0_0_0;
static ParameterInfo t6987_m37338_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t172_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37338_GM;
MethodInfo m37338_MI = 
{
	"Contains", NULL, &t6987_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6987_m37338_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37338_GM};
extern Il2CppType t4231_0_0_0;
extern Il2CppType t4231_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6987_m37339_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4231_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37339_GM;
MethodInfo m37339_MI = 
{
	"CopyTo", NULL, &t6987_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6987_m37339_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37339_GM};
extern Il2CppType t172_0_0_0;
static ParameterInfo t6987_m37340_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t172_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37340_GM;
MethodInfo m37340_MI = 
{
	"Remove", NULL, &t6987_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6987_m37340_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37340_GM};
static MethodInfo* t6987_MIs[] =
{
	&m37334_MI,
	&m37335_MI,
	&m37336_MI,
	&m37337_MI,
	&m37338_MI,
	&m37339_MI,
	&m37340_MI,
	NULL
};
extern TypeInfo t6989_TI;
static TypeInfo* t6987_ITIs[] = 
{
	&t739_TI,
	&t6989_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6987_0_0_0;
extern Il2CppType t6987_1_0_0;
struct t6987;
extern Il2CppGenericClass t6987_GC;
TypeInfo t6987_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6987_MIs, t6987_PIs, NULL, NULL, NULL, NULL, NULL, &t6987_TI, t6987_ITIs, NULL, &EmptyCustomAttributesCache, &t6987_TI, &t6987_0_0_0, &t6987_1_0_0, NULL, &t6987_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.DefaultMemberAttribute>
extern Il2CppType t5488_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37341_GM;
MethodInfo m37341_MI = 
{
	"GetEnumerator", NULL, &t6989_TI, &t5488_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37341_GM};
static MethodInfo* t6989_MIs[] =
{
	&m37341_MI,
	NULL
};
static TypeInfo* t6989_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6989_0_0_0;
extern Il2CppType t6989_1_0_0;
struct t6989;
extern Il2CppGenericClass t6989_GC;
TypeInfo t6989_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6989_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6989_TI, t6989_ITIs, NULL, &EmptyCustomAttributesCache, &t6989_TI, &t6989_0_0_0, &t6989_1_0_0, NULL, &t6989_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6988_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>
extern MethodInfo m37342_MI;
extern MethodInfo m37343_MI;
static PropertyInfo t6988____Item_PropertyInfo = 
{
	&t6988_TI, "Item", &m37342_MI, &m37343_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6988_PIs[] =
{
	&t6988____Item_PropertyInfo,
	NULL
};
extern Il2CppType t172_0_0_0;
static ParameterInfo t6988_m37344_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t172_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37344_GM;
MethodInfo m37344_MI = 
{
	"IndexOf", NULL, &t6988_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6988_m37344_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37344_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t172_0_0_0;
static ParameterInfo t6988_m37345_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t172_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37345_GM;
MethodInfo m37345_MI = 
{
	"Insert", NULL, &t6988_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6988_m37345_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37345_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6988_m37346_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37346_GM;
MethodInfo m37346_MI = 
{
	"RemoveAt", NULL, &t6988_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6988_m37346_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37346_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6988_m37342_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t172_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37342_GM;
MethodInfo m37342_MI = 
{
	"get_Item", NULL, &t6988_TI, &t172_0_0_0, RuntimeInvoker_t5_t110, t6988_m37342_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37342_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t172_0_0_0;
static ParameterInfo t6988_m37343_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t172_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37343_GM;
MethodInfo m37343_MI = 
{
	"set_Item", NULL, &t6988_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6988_m37343_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37343_GM};
static MethodInfo* t6988_MIs[] =
{
	&m37344_MI,
	&m37345_MI,
	&m37346_MI,
	&m37342_MI,
	&m37343_MI,
	NULL
};
static TypeInfo* t6988_ITIs[] = 
{
	&t739_TI,
	&t6987_TI,
	&t6989_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6988_0_0_0;
extern Il2CppType t6988_1_0_0;
struct t6988;
extern Il2CppGenericClass t6988_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6988_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6988_MIs, t6988_PIs, NULL, NULL, NULL, NULL, NULL, &t6988_TI, t6988_ITIs, NULL, &t2240__CustomAttributeCache, &t6988_TI, &t6988_0_0_0, &t6988_1_0_0, NULL, &t6988_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5490_TI;

#include "t1421.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>
extern MethodInfo m37347_MI;
static PropertyInfo t5490____Current_PropertyInfo = 
{
	&t5490_TI, "Current", &m37347_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5490_PIs[] =
{
	&t5490____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1421_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37347_GM;
MethodInfo m37347_MI = 
{
	"get_Current", NULL, &t5490_TI, &t1421_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37347_GM};
static MethodInfo* t5490_MIs[] =
{
	&m37347_MI,
	NULL
};
static TypeInfo* t5490_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5490_0_0_0;
extern Il2CppType t5490_1_0_0;
struct t5490;
extern Il2CppGenericClass t5490_GC;
TypeInfo t5490_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5490_MIs, t5490_PIs, NULL, NULL, NULL, NULL, NULL, &t5490_TI, t5490_ITIs, NULL, &EmptyCustomAttributesCache, &t5490_TI, &t5490_0_0_0, &t5490_1_0_0, NULL, &t5490_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t3940.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3940_TI;
#include "t3940MD.h"

extern TypeInfo t1421_TI;
extern MethodInfo m22436_MI;
extern MethodInfo m29134_MI;
struct t107;
#define m29134(__this, p0, method) (t1421 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t3940_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t3940_TI, offsetof(t3940, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t3940_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t3940_TI, offsetof(t3940, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t3940_FIs[] =
{
	&t3940_f0_FieldInfo,
	&t3940_f1_FieldInfo,
	NULL
};
extern MethodInfo m22433_MI;
static PropertyInfo t3940____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t3940_TI, "System.Collections.IEnumerator.Current", &m22433_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t3940____Current_PropertyInfo = 
{
	&t3940_TI, "Current", &m22436_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3940_PIs[] =
{
	&t3940____System_Collections_IEnumerator_Current_PropertyInfo,
	&t3940____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t3940_m22432_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22432_GM;
MethodInfo m22432_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t3940_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t3940_m22432_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m22432_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22433_GM;
MethodInfo m22433_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t3940_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22433_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22434_GM;
MethodInfo m22434_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t3940_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22434_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22435_GM;
MethodInfo m22435_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t3940_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22435_GM};
extern Il2CppType t1421_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m22436_GM;
MethodInfo m22436_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t3940_TI, &t1421_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m22436_GM};
static MethodInfo* t3940_MIs[] =
{
	&m22432_MI,
	&m22433_MI,
	&m22434_MI,
	&m22435_MI,
	&m22436_MI,
	NULL
};
extern MethodInfo m22435_MI;
extern MethodInfo m22434_MI;
static MethodInfo* t3940_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m22433_MI,
	&m22435_MI,
	&m22434_MI,
	&m22436_MI,
};
static TypeInfo* t3940_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5490_TI,
};
static Il2CppInterfaceOffsetPair t3940_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5490_TI, 7},
};
extern TypeInfo t1421_TI;
static Il2CppRGCTXData t3940_RGCTXData[3] = 
{
	&m22436_MI/* Method Usage */,
	&t1421_TI/* Class Usage */,
	&m29134_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3940_0_0_0;
extern Il2CppType t3940_1_0_0;
extern Il2CppGenericClass t3940_GC;
TypeInfo t3940_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t3940_MIs, t3940_PIs, t3940_FIs, NULL, &t267_TI, NULL, &t107_TI, &t3940_TI, t3940_ITIs, t3940_VT, &EmptyCustomAttributesCache, &t3940_TI, &t3940_0_0_0, &t3940_1_0_0, t3940_IOs, &t3940_GC, NULL, NULL, NULL, t3940_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3940)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6990_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>
extern MethodInfo m37348_MI;
static PropertyInfo t6990____Count_PropertyInfo = 
{
	&t6990_TI, "Count", &m37348_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m37349_MI;
static PropertyInfo t6990____IsReadOnly_PropertyInfo = 
{
	&t6990_TI, "IsReadOnly", &m37349_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6990_PIs[] =
{
	&t6990____Count_PropertyInfo,
	&t6990____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37348_GM;
MethodInfo m37348_MI = 
{
	"get_Count", NULL, &t6990_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37348_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37349_GM;
MethodInfo m37349_MI = 
{
	"get_IsReadOnly", NULL, &t6990_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37349_GM};
extern Il2CppType t1421_0_0_0;
extern Il2CppType t1421_0_0_0;
static ParameterInfo t6990_m37350_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1421_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37350_GM;
MethodInfo m37350_MI = 
{
	"Add", NULL, &t6990_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6990_m37350_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37350_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37351_GM;
MethodInfo m37351_MI = 
{
	"Clear", NULL, &t6990_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37351_GM};
extern Il2CppType t1421_0_0_0;
static ParameterInfo t6990_m37352_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1421_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37352_GM;
MethodInfo m37352_MI = 
{
	"Contains", NULL, &t6990_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6990_m37352_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37352_GM};
extern Il2CppType t4232_0_0_0;
extern Il2CppType t4232_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t6990_m37353_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4232_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37353_GM;
MethodInfo m37353_MI = 
{
	"CopyTo", NULL, &t6990_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t6990_m37353_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37353_GM};
extern Il2CppType t1421_0_0_0;
static ParameterInfo t6990_m37354_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1421_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37354_GM;
MethodInfo m37354_MI = 
{
	"Remove", NULL, &t6990_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t6990_m37354_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37354_GM};
static MethodInfo* t6990_MIs[] =
{
	&m37348_MI,
	&m37349_MI,
	&m37350_MI,
	&m37351_MI,
	&m37352_MI,
	&m37353_MI,
	&m37354_MI,
	NULL
};
extern TypeInfo t6992_TI;
static TypeInfo* t6990_ITIs[] = 
{
	&t739_TI,
	&t6992_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6990_0_0_0;
extern Il2CppType t6990_1_0_0;
struct t6990;
extern Il2CppGenericClass t6990_GC;
TypeInfo t6990_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t6990_MIs, t6990_PIs, NULL, NULL, NULL, NULL, NULL, &t6990_TI, t6990_ITIs, NULL, &EmptyCustomAttributesCache, &t6990_TI, &t6990_0_0_0, &t6990_1_0_0, NULL, &t6990_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.DecimalConstantAttribute>
extern Il2CppType t5490_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37355_GM;
MethodInfo m37355_MI = 
{
	"GetEnumerator", NULL, &t6992_TI, &t5490_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m37355_GM};
static MethodInfo* t6992_MIs[] =
{
	&m37355_MI,
	NULL
};
static TypeInfo* t6992_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6992_0_0_0;
extern Il2CppType t6992_1_0_0;
struct t6992;
extern Il2CppGenericClass t6992_GC;
TypeInfo t6992_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t6992_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t6992_TI, t6992_ITIs, NULL, &EmptyCustomAttributesCache, &t6992_TI, &t6992_0_0_0, &t6992_1_0_0, NULL, &t6992_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6991_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>
extern MethodInfo m37356_MI;
extern MethodInfo m37357_MI;
static PropertyInfo t6991____Item_PropertyInfo = 
{
	&t6991_TI, "Item", &m37356_MI, &m37357_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6991_PIs[] =
{
	&t6991____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1421_0_0_0;
static ParameterInfo t6991_m37358_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1421_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37358_GM;
MethodInfo m37358_MI = 
{
	"IndexOf", NULL, &t6991_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t6991_m37358_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37358_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1421_0_0_0;
static ParameterInfo t6991_m37359_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1421_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37359_GM;
MethodInfo m37359_MI = 
{
	"Insert", NULL, &t6991_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6991_m37359_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37359_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6991_m37360_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37360_GM;
MethodInfo m37360_MI = 
{
	"RemoveAt", NULL, &t6991_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t6991_m37360_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37360_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t6991_m37356_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1421_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37356_GM;
MethodInfo m37356_MI = 
{
	"get_Item", NULL, &t6991_TI, &t1421_0_0_0, RuntimeInvoker_t5_t110, t6991_m37356_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m37356_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1421_0_0_0;
static ParameterInfo t6991_m37357_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1421_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m37357_GM;
MethodInfo m37357_MI = 
{
	"set_Item", NULL, &t6991_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t6991_m37357_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m37357_GM};
static MethodInfo* t6991_MIs[] =
{
	&m37358_MI,
	&m37359_MI,
	&m37360_MI,
	&m37356_MI,
	&m37357_MI,
	NULL
};
static TypeInfo* t6991_ITIs[] = 
{
	&t739_TI,
	&t6990_TI,
	&t6992_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t6991_0_0_0;
extern Il2CppType t6991_1_0_0;
struct t6991;
extern Il2CppGenericClass t6991_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t6991_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t6991_MIs, t6991_PIs, NULL, NULL, NULL, NULL, NULL, &t6991_TI, t6991_ITIs, NULL, &t2240__CustomAttributeCache, &t6991_TI, &t6991_0_0_0, &t6991_1_0_0, NULL, &t6991_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
