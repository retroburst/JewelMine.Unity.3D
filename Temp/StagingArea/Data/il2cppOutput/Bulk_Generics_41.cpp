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
extern TypeInfo t7467_TI;

#include "t110.h"
#include "t108.h"
#include "t109.h"
#include "t1878.h"
#include "mscorlib_ArrayTypes.h"

#include "t107.h"

// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Permissions.SecurityPermissionFlag>
extern MethodInfo m39578_MI;
static PropertyInfo t7467____Count_PropertyInfo = 
{
	&t7467_TI, "Count", &m39578_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39579_MI;
static PropertyInfo t7467____IsReadOnly_PropertyInfo = 
{
	&t7467_TI, "IsReadOnly", &m39579_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7467_PIs[] =
{
	&t7467____Count_PropertyInfo,
	&t7467____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39578_GM;
MethodInfo m39578_MI = 
{
	"get_Count", NULL, &t7467_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39578_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39579_GM;
MethodInfo m39579_MI = 
{
	"get_IsReadOnly", NULL, &t7467_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39579_GM};
extern Il2CppType t1878_0_0_0;
extern Il2CppType t1878_0_0_0;
static ParameterInfo t7467_m39580_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1878_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39580_GM;
MethodInfo m39580_MI = 
{
	"Add", NULL, &t7467_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7467_m39580_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39580_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39581_GM;
MethodInfo m39581_MI = 
{
	"Clear", NULL, &t7467_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39581_GM};
extern Il2CppType t1878_0_0_0;
static ParameterInfo t7467_m39582_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1878_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39582_GM;
MethodInfo m39582_MI = 
{
	"Contains", NULL, &t7467_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7467_m39582_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39582_GM};
extern Il2CppType t4360_0_0_0;
extern Il2CppType t4360_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7467_m39583_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4360_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39583_GM;
MethodInfo m39583_MI = 
{
	"CopyTo", NULL, &t7467_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7467_m39583_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39583_GM};
extern Il2CppType t1878_0_0_0;
static ParameterInfo t7467_m39584_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1878_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39584_GM;
MethodInfo m39584_MI = 
{
	"Remove", NULL, &t7467_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7467_m39584_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39584_GM};
static MethodInfo* t7467_MIs[] =
{
	&m39578_MI,
	&m39579_MI,
	&m39580_MI,
	&m39581_MI,
	&m39582_MI,
	&m39583_MI,
	&m39584_MI,
	NULL
};
extern TypeInfo t739_TI;
extern TypeInfo t7469_TI;
static TypeInfo* t7467_ITIs[] = 
{
	&t739_TI,
	&t7469_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7467_0_0_0;
extern Il2CppType t7467_1_0_0;
struct t7467;
extern Il2CppGenericClass t7467_GC;
TypeInfo t7467_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7467_MIs, t7467_PIs, NULL, NULL, NULL, NULL, NULL, &t7467_TI, t7467_ITIs, NULL, &EmptyCustomAttributesCache, &t7467_TI, &t7467_0_0_0, &t7467_1_0_0, NULL, &t7467_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Permissions.SecurityPermissionFlag>
extern Il2CppType t5802_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39585_GM;
MethodInfo m39585_MI = 
{
	"GetEnumerator", NULL, &t7469_TI, &t5802_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39585_GM};
static MethodInfo* t7469_MIs[] =
{
	&m39585_MI,
	NULL
};
static TypeInfo* t7469_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7469_0_0_0;
extern Il2CppType t7469_1_0_0;
struct t7469;
extern Il2CppGenericClass t7469_GC;
TypeInfo t7469_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7469_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7469_TI, t7469_ITIs, NULL, &EmptyCustomAttributesCache, &t7469_TI, &t7469_0_0_0, &t7469_1_0_0, NULL, &t7469_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7468_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Permissions.SecurityPermissionFlag>
extern MethodInfo m39586_MI;
extern MethodInfo m39587_MI;
static PropertyInfo t7468____Item_PropertyInfo = 
{
	&t7468_TI, "Item", &m39586_MI, &m39587_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7468_PIs[] =
{
	&t7468____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1878_0_0_0;
static ParameterInfo t7468_m39588_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1878_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39588_GM;
MethodInfo m39588_MI = 
{
	"IndexOf", NULL, &t7468_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t7468_m39588_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39588_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1878_0_0_0;
static ParameterInfo t7468_m39589_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1878_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39589_GM;
MethodInfo m39589_MI = 
{
	"Insert", NULL, &t7468_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7468_m39589_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39589_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7468_m39590_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39590_GM;
MethodInfo m39590_MI = 
{
	"RemoveAt", NULL, &t7468_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7468_m39590_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39590_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7468_m39586_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1878_0_0_0;
extern void* RuntimeInvoker_t1878_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39586_GM;
MethodInfo m39586_MI = 
{
	"get_Item", NULL, &t7468_TI, &t1878_0_0_0, RuntimeInvoker_t1878_t110, t7468_m39586_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39586_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1878_0_0_0;
static ParameterInfo t7468_m39587_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1878_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39587_GM;
MethodInfo m39587_MI = 
{
	"set_Item", NULL, &t7468_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7468_m39587_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39587_GM};
static MethodInfo* t7468_MIs[] =
{
	&m39588_MI,
	&m39589_MI,
	&m39590_MI,
	&m39586_MI,
	&m39587_MI,
	NULL
};
static TypeInfo* t7468_ITIs[] = 
{
	&t739_TI,
	&t7467_TI,
	&t7469_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7468_0_0_0;
extern Il2CppType t7468_1_0_0;
struct t7468;
extern Il2CppGenericClass t7468_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7468_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7468_MIs, t7468_PIs, NULL, NULL, NULL, NULL, NULL, &t7468_TI, t7468_ITIs, NULL, &t2240__CustomAttributeCache, &t7468_TI, &t7468_0_0_0, &t7468_1_0_0, NULL, &t7468_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1882_TI;

#include "t1885.h"


// Metadata Definition System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
extern MethodInfo m39591_MI;
extern MethodInfo m39592_MI;
static PropertyInfo t1882____Item_PropertyInfo = 
{
	&t1882_TI, "Item", &m39591_MI, &m39592_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1882_PIs[] =
{
	&t1882____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1885_0_0_0;
extern Il2CppType t1885_0_0_0;
static ParameterInfo t1882_m39593_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39593_GM;
MethodInfo m39593_MI = 
{
	"IndexOf", NULL, &t1882_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t1882_m39593_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39593_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1885_0_0_0;
static ParameterInfo t1882_m39594_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39594_GM;
MethodInfo m39594_MI = 
{
	"Insert", NULL, &t1882_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t1882_m39594_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39594_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1882_m39595_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39595_GM;
MethodInfo m39595_MI = 
{
	"RemoveAt", NULL, &t1882_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1882_m39595_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39595_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1882_m39591_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1885_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39591_GM;
MethodInfo m39591_MI = 
{
	"get_Item", NULL, &t1882_TI, &t1885_0_0_0, RuntimeInvoker_t5_t110, t1882_m39591_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39591_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1885_0_0_0;
static ParameterInfo t1882_m39592_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39592_GM;
MethodInfo m39592_MI = 
{
	"set_Item", NULL, &t1882_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t1882_m39592_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39592_GM};
static MethodInfo* t1882_MIs[] =
{
	&m39593_MI,
	&m39594_MI,
	&m39595_MI,
	&m39591_MI,
	&m39592_MI,
	NULL
};
extern TypeInfo t4110_TI;
extern TypeInfo t4108_TI;
static TypeInfo* t1882_ITIs[] = 
{
	&t739_TI,
	&t4110_TI,
	&t4108_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1882_0_0_0;
extern Il2CppType t1882_1_0_0;
struct t1882;
extern Il2CppGenericClass t1882_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t1882_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t1882_MIs, t1882_PIs, NULL, NULL, NULL, NULL, NULL, &t1882_TI, t1882_ITIs, NULL, &t2240__CustomAttributeCache, &t1882_TI, &t1882_0_0_0, &t1882_1_0_0, NULL, &t1882_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>
extern MethodInfo m39596_MI;
static PropertyInfo t4110____Count_PropertyInfo = 
{
	&t4110_TI, "Count", &m39596_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39597_MI;
static PropertyInfo t4110____IsReadOnly_PropertyInfo = 
{
	&t4110_TI, "IsReadOnly", &m39597_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4110_PIs[] =
{
	&t4110____Count_PropertyInfo,
	&t4110____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39596_GM;
MethodInfo m39596_MI = 
{
	"get_Count", NULL, &t4110_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39596_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39597_GM;
MethodInfo m39597_MI = 
{
	"get_IsReadOnly", NULL, &t4110_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39597_GM};
extern Il2CppType t1885_0_0_0;
static ParameterInfo t4110_m39598_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39598_GM;
MethodInfo m39598_MI = 
{
	"Add", NULL, &t4110_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4110_m39598_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39598_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39599_GM;
MethodInfo m39599_MI = 
{
	"Clear", NULL, &t4110_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39599_GM};
extern Il2CppType t1885_0_0_0;
static ParameterInfo t4110_m39600_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39600_GM;
MethodInfo m39600_MI = 
{
	"Contains", NULL, &t4110_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t4110_m39600_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39600_GM};
extern Il2CppType t4107_0_0_0;
extern Il2CppType t4107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t4110_m39601_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4107_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39601_GM;
MethodInfo m39601_MI = 
{
	"CopyTo", NULL, &t4110_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t4110_m39601_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39601_GM};
extern Il2CppType t1885_0_0_0;
static ParameterInfo t4110_m39602_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39602_GM;
MethodInfo m39602_MI = 
{
	"Remove", NULL, &t4110_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t4110_m39602_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39602_GM};
static MethodInfo* t4110_MIs[] =
{
	&m39596_MI,
	&m39597_MI,
	&m39598_MI,
	&m39599_MI,
	&m39600_MI,
	&m39601_MI,
	&m39602_MI,
	NULL
};
static TypeInfo* t4110_ITIs[] = 
{
	&t739_TI,
	&t4108_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4110_0_0_0;
extern Il2CppType t4110_1_0_0;
struct t4110;
extern Il2CppGenericClass t4110_GC;
TypeInfo t4110_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4110_MIs, t4110_PIs, NULL, NULL, NULL, NULL, NULL, &t4110_TI, t4110_ITIs, NULL, &EmptyCustomAttributesCache, &t4110_TI, &t4110_0_0_0, &t4110_1_0_0, NULL, &t4110_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Policy.StrongName>
extern Il2CppType t4109_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39603_GM;
MethodInfo m39603_MI = 
{
	"GetEnumerator", NULL, &t4108_TI, &t4109_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39603_GM};
static MethodInfo* t4108_MIs[] =
{
	&m39603_MI,
	NULL
};
static TypeInfo* t4108_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4108_0_0_0;
extern Il2CppType t4108_1_0_0;
struct t4108;
extern Il2CppGenericClass t4108_GC;
TypeInfo t4108_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4108_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4108_TI, t4108_ITIs, NULL, &EmptyCustomAttributesCache, &t4108_TI, &t4108_0_0_0, &t4108_1_0_0, NULL, &t4108_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4109_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Policy.StrongName>
extern MethodInfo m39604_MI;
static PropertyInfo t4109____Current_PropertyInfo = 
{
	&t4109_TI, "Current", &m39604_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4109_PIs[] =
{
	&t4109____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1885_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39604_GM;
MethodInfo m39604_MI = 
{
	"get_Current", NULL, &t4109_TI, &t1885_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39604_GM};
static MethodInfo* t4109_MIs[] =
{
	&m39604_MI,
	NULL
};
extern TypeInfo t196_TI;
extern TypeInfo t132_TI;
static TypeInfo* t4109_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4109_0_0_0;
extern Il2CppType t4109_1_0_0;
struct t4109;
extern Il2CppGenericClass t4109_GC;
TypeInfo t4109_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t4109_MIs, t4109_PIs, NULL, NULL, NULL, NULL, NULL, &t4109_TI, t4109_ITIs, NULL, &EmptyCustomAttributesCache, &t4109_TI, &t4109_0_0_0, &t4109_1_0_0, NULL, &t4109_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4104.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4104_TI;
#include "t4104MD.h"

#include "t5.h"
#include "t11.h"
#include "t133.h"
extern TypeInfo t1885_TI;
extern TypeInfo t133_TI;
#include "t133MD.h"
#include "t107MD.h"
extern MethodInfo m23244_MI;
extern MethodInfo m4758_MI;
extern MethodInfo m4763_MI;
extern MethodInfo m30896_MI;
struct t107;
#include "t1181.h"
struct t107;
 t5 * m23596_gshared (t107 * __this, int32_t p0, MethodInfo* method);
#define m23596(__this, p0, method) (t5 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
#define m30896(__this, p0, method) (t1885 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Policy.StrongName>
extern Il2CppType t107_0_0_1;
FieldInfo t4104_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4104_TI, offsetof(t4104, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4104_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4104_TI, offsetof(t4104, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4104_FIs[] =
{
	&t4104_f0_FieldInfo,
	&t4104_f1_FieldInfo,
	NULL
};
extern MethodInfo m23241_MI;
static PropertyInfo t4104____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4104_TI, "System.Collections.IEnumerator.Current", &m23241_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4104____Current_PropertyInfo = 
{
	&t4104_TI, "Current", &m23244_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4104_PIs[] =
{
	&t4104____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4104____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
extern Il2CppType t107_0_0_0;
static ParameterInfo t4104_m23240_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23240_GM;
MethodInfo m23240_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t4104_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4104_m23240_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23240_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23241_GM;
MethodInfo m23241_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t4104_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23241_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23242_GM;
MethodInfo m23242_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t4104_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23242_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23243_GM;
MethodInfo m23243_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t4104_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23243_GM};
extern Il2CppType t1885_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23244_GM;
MethodInfo m23244_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t4104_TI, &t1885_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23244_GM};
static MethodInfo* t4104_MIs[] =
{
	&m23240_MI,
	&m23241_MI,
	&m23242_MI,
	&m23243_MI,
	&m23244_MI,
	NULL
};
extern MethodInfo m2041_MI;
extern MethodInfo m465_MI;
extern MethodInfo m2042_MI;
extern MethodInfo m2147_MI;
extern MethodInfo m23243_MI;
extern MethodInfo m23242_MI;
static MethodInfo* t4104_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m23241_MI,
	&m23243_MI,
	&m23242_MI,
	&m23244_MI,
};
static TypeInfo* t4104_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t4109_TI,
};
static Il2CppInterfaceOffsetPair t4104_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t4109_TI, 7},
};
extern TypeInfo t1885_TI;
static Il2CppRGCTXData t4104_RGCTXData[3] = 
{
	&m23244_MI/* Method Usage */,
	&t1885_TI/* Class Usage */,
	&m30896_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4104_0_0_0;
extern Il2CppType t4104_1_0_0;
extern TypeInfo t267_TI;
extern Il2CppGenericClass t4104_GC;
extern TypeInfo t107_TI;
TypeInfo t4104_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4104_MIs, t4104_PIs, t4104_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4104_TI, t4104_ITIs, t4104_VT, &EmptyCustomAttributesCache, &t4104_TI, &t4104_0_0_0, &t4104_1_0_0, t4104_IOs, &t4104_GC, NULL, NULL, NULL, t4104_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4104)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7470_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Policy.IBuiltInEvidence>
extern MethodInfo m39605_MI;
static PropertyInfo t7470____Count_PropertyInfo = 
{
	&t7470_TI, "Count", &m39605_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39606_MI;
static PropertyInfo t7470____IsReadOnly_PropertyInfo = 
{
	&t7470_TI, "IsReadOnly", &m39606_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7470_PIs[] =
{
	&t7470____Count_PropertyInfo,
	&t7470____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39605_GM;
MethodInfo m39605_MI = 
{
	"get_Count", NULL, &t7470_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39605_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39606_GM;
MethodInfo m39606_MI = 
{
	"get_IsReadOnly", NULL, &t7470_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39606_GM};
extern Il2CppType t2403_0_0_0;
extern Il2CppType t2403_0_0_0;
static ParameterInfo t7470_m39607_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2403_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39607_GM;
MethodInfo m39607_MI = 
{
	"Add", NULL, &t7470_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t7470_m39607_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39607_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39608_GM;
MethodInfo m39608_MI = 
{
	"Clear", NULL, &t7470_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39608_GM};
extern Il2CppType t2403_0_0_0;
static ParameterInfo t7470_m39609_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2403_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39609_GM;
MethodInfo m39609_MI = 
{
	"Contains", NULL, &t7470_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7470_m39609_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39609_GM};
extern Il2CppType t4361_0_0_0;
extern Il2CppType t4361_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7470_m39610_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4361_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39610_GM;
MethodInfo m39610_MI = 
{
	"CopyTo", NULL, &t7470_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7470_m39610_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39610_GM};
extern Il2CppType t2403_0_0_0;
static ParameterInfo t7470_m39611_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2403_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39611_GM;
MethodInfo m39611_MI = 
{
	"Remove", NULL, &t7470_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7470_m39611_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39611_GM};
static MethodInfo* t7470_MIs[] =
{
	&m39605_MI,
	&m39606_MI,
	&m39607_MI,
	&m39608_MI,
	&m39609_MI,
	&m39610_MI,
	&m39611_MI,
	NULL
};
extern TypeInfo t7472_TI;
static TypeInfo* t7470_ITIs[] = 
{
	&t739_TI,
	&t7472_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7470_0_0_0;
extern Il2CppType t7470_1_0_0;
struct t7470;
extern Il2CppGenericClass t7470_GC;
TypeInfo t7470_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7470_MIs, t7470_PIs, NULL, NULL, NULL, NULL, NULL, &t7470_TI, t7470_ITIs, NULL, &EmptyCustomAttributesCache, &t7470_TI, &t7470_0_0_0, &t7470_1_0_0, NULL, &t7470_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Policy.IBuiltInEvidence>
extern Il2CppType t5805_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39612_GM;
MethodInfo m39612_MI = 
{
	"GetEnumerator", NULL, &t7472_TI, &t5805_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39612_GM};
static MethodInfo* t7472_MIs[] =
{
	&m39612_MI,
	NULL
};
static TypeInfo* t7472_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7472_0_0_0;
extern Il2CppType t7472_1_0_0;
struct t7472;
extern Il2CppGenericClass t7472_GC;
TypeInfo t7472_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7472_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7472_TI, t7472_ITIs, NULL, &EmptyCustomAttributesCache, &t7472_TI, &t7472_0_0_0, &t7472_1_0_0, NULL, &t7472_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5805_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Policy.IBuiltInEvidence>
extern MethodInfo m39613_MI;
static PropertyInfo t5805____Current_PropertyInfo = 
{
	&t5805_TI, "Current", &m39613_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5805_PIs[] =
{
	&t5805____Current_PropertyInfo,
	NULL
};
extern Il2CppType t2403_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39613_GM;
MethodInfo m39613_MI = 
{
	"get_Current", NULL, &t5805_TI, &t2403_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39613_GM};
static MethodInfo* t5805_MIs[] =
{
	&m39613_MI,
	NULL
};
static TypeInfo* t5805_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5805_0_0_0;
extern Il2CppType t5805_1_0_0;
struct t5805;
extern Il2CppGenericClass t5805_GC;
TypeInfo t5805_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5805_MIs, t5805_PIs, NULL, NULL, NULL, NULL, NULL, &t5805_TI, t5805_ITIs, NULL, &EmptyCustomAttributesCache, &t5805_TI, &t5805_0_0_0, &t5805_1_0_0, NULL, &t5805_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4105.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4105_TI;
#include "t4105MD.h"

extern TypeInfo t2403_TI;
extern MethodInfo m23249_MI;
extern MethodInfo m30907_MI;
struct t107;
#define m30907(__this, p0, method) (t5 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Policy.IBuiltInEvidence>
extern Il2CppType t107_0_0_1;
FieldInfo t4105_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4105_TI, offsetof(t4105, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4105_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4105_TI, offsetof(t4105, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4105_FIs[] =
{
	&t4105_f0_FieldInfo,
	&t4105_f1_FieldInfo,
	NULL
};
extern MethodInfo m23246_MI;
static PropertyInfo t4105____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4105_TI, "System.Collections.IEnumerator.Current", &m23246_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4105____Current_PropertyInfo = 
{
	&t4105_TI, "Current", &m23249_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4105_PIs[] =
{
	&t4105____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4105____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4105_m23245_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23245_GM;
MethodInfo m23245_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t4105_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4105_m23245_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23245_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23246_GM;
MethodInfo m23246_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t4105_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23246_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23247_GM;
MethodInfo m23247_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t4105_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23247_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23248_GM;
MethodInfo m23248_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t4105_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23248_GM};
extern Il2CppType t2403_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23249_GM;
MethodInfo m23249_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t4105_TI, &t2403_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23249_GM};
static MethodInfo* t4105_MIs[] =
{
	&m23245_MI,
	&m23246_MI,
	&m23247_MI,
	&m23248_MI,
	&m23249_MI,
	NULL
};
extern MethodInfo m23248_MI;
extern MethodInfo m23247_MI;
static MethodInfo* t4105_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m23246_MI,
	&m23248_MI,
	&m23247_MI,
	&m23249_MI,
};
static TypeInfo* t4105_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5805_TI,
};
static Il2CppInterfaceOffsetPair t4105_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5805_TI, 7},
};
extern TypeInfo t2403_TI;
static Il2CppRGCTXData t4105_RGCTXData[3] = 
{
	&m23249_MI/* Method Usage */,
	&t2403_TI/* Class Usage */,
	&m30907_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4105_0_0_0;
extern Il2CppType t4105_1_0_0;
extern Il2CppGenericClass t4105_GC;
TypeInfo t4105_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4105_MIs, t4105_PIs, t4105_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4105_TI, t4105_ITIs, t4105_VT, &EmptyCustomAttributesCache, &t4105_TI, &t4105_0_0_0, &t4105_1_0_0, t4105_IOs, &t4105_GC, NULL, NULL, NULL, t4105_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4105)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7471_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Policy.IBuiltInEvidence>
extern MethodInfo m39614_MI;
extern MethodInfo m39615_MI;
static PropertyInfo t7471____Item_PropertyInfo = 
{
	&t7471_TI, "Item", &m39614_MI, &m39615_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7471_PIs[] =
{
	&t7471____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2403_0_0_0;
static ParameterInfo t7471_m39616_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2403_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39616_GM;
MethodInfo m39616_MI = 
{
	"IndexOf", NULL, &t7471_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7471_m39616_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39616_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2403_0_0_0;
static ParameterInfo t7471_m39617_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2403_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39617_GM;
MethodInfo m39617_MI = 
{
	"Insert", NULL, &t7471_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7471_m39617_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39617_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7471_m39618_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39618_GM;
MethodInfo m39618_MI = 
{
	"RemoveAt", NULL, &t7471_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7471_m39618_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39618_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7471_m39614_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t2403_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39614_GM;
MethodInfo m39614_MI = 
{
	"get_Item", NULL, &t7471_TI, &t2403_0_0_0, RuntimeInvoker_t5_t110, t7471_m39614_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39614_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2403_0_0_0;
static ParameterInfo t7471_m39615_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2403_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39615_GM;
MethodInfo m39615_MI = 
{
	"set_Item", NULL, &t7471_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7471_m39615_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39615_GM};
static MethodInfo* t7471_MIs[] =
{
	&m39616_MI,
	&m39617_MI,
	&m39618_MI,
	&m39614_MI,
	&m39615_MI,
	NULL
};
static TypeInfo* t7471_ITIs[] = 
{
	&t739_TI,
	&t7470_TI,
	&t7472_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7471_0_0_0;
extern Il2CppType t7471_1_0_0;
struct t7471;
extern Il2CppGenericClass t7471_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7471_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7471_MIs, t7471_PIs, NULL, NULL, NULL, NULL, NULL, &t7471_TI, t7471_ITIs, NULL, &t2240__CustomAttributeCache, &t7471_TI, &t7471_0_0_0, &t7471_1_0_0, NULL, &t7471_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7473_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Policy.IIdentityPermissionFactory>
extern MethodInfo m39619_MI;
static PropertyInfo t7473____Count_PropertyInfo = 
{
	&t7473_TI, "Count", &m39619_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39620_MI;
static PropertyInfo t7473____IsReadOnly_PropertyInfo = 
{
	&t7473_TI, "IsReadOnly", &m39620_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7473_PIs[] =
{
	&t7473____Count_PropertyInfo,
	&t7473____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39619_GM;
MethodInfo m39619_MI = 
{
	"get_Count", NULL, &t7473_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39619_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39620_GM;
MethodInfo m39620_MI = 
{
	"get_IsReadOnly", NULL, &t7473_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39620_GM};
extern Il2CppType t2404_0_0_0;
extern Il2CppType t2404_0_0_0;
static ParameterInfo t7473_m39621_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2404_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39621_GM;
MethodInfo m39621_MI = 
{
	"Add", NULL, &t7473_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t7473_m39621_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39621_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39622_GM;
MethodInfo m39622_MI = 
{
	"Clear", NULL, &t7473_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39622_GM};
extern Il2CppType t2404_0_0_0;
static ParameterInfo t7473_m39623_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2404_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39623_GM;
MethodInfo m39623_MI = 
{
	"Contains", NULL, &t7473_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7473_m39623_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39623_GM};
extern Il2CppType t4362_0_0_0;
extern Il2CppType t4362_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7473_m39624_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4362_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39624_GM;
MethodInfo m39624_MI = 
{
	"CopyTo", NULL, &t7473_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7473_m39624_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39624_GM};
extern Il2CppType t2404_0_0_0;
static ParameterInfo t7473_m39625_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2404_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39625_GM;
MethodInfo m39625_MI = 
{
	"Remove", NULL, &t7473_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7473_m39625_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39625_GM};
static MethodInfo* t7473_MIs[] =
{
	&m39619_MI,
	&m39620_MI,
	&m39621_MI,
	&m39622_MI,
	&m39623_MI,
	&m39624_MI,
	&m39625_MI,
	NULL
};
extern TypeInfo t7475_TI;
static TypeInfo* t7473_ITIs[] = 
{
	&t739_TI,
	&t7475_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7473_0_0_0;
extern Il2CppType t7473_1_0_0;
struct t7473;
extern Il2CppGenericClass t7473_GC;
TypeInfo t7473_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7473_MIs, t7473_PIs, NULL, NULL, NULL, NULL, NULL, &t7473_TI, t7473_ITIs, NULL, &EmptyCustomAttributesCache, &t7473_TI, &t7473_0_0_0, &t7473_1_0_0, NULL, &t7473_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Policy.IIdentityPermissionFactory>
extern Il2CppType t5807_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39626_GM;
MethodInfo m39626_MI = 
{
	"GetEnumerator", NULL, &t7475_TI, &t5807_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39626_GM};
static MethodInfo* t7475_MIs[] =
{
	&m39626_MI,
	NULL
};
static TypeInfo* t7475_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7475_0_0_0;
extern Il2CppType t7475_1_0_0;
struct t7475;
extern Il2CppGenericClass t7475_GC;
TypeInfo t7475_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7475_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7475_TI, t7475_ITIs, NULL, &EmptyCustomAttributesCache, &t7475_TI, &t7475_0_0_0, &t7475_1_0_0, NULL, &t7475_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5807_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Policy.IIdentityPermissionFactory>
extern MethodInfo m39627_MI;
static PropertyInfo t5807____Current_PropertyInfo = 
{
	&t5807_TI, "Current", &m39627_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5807_PIs[] =
{
	&t5807____Current_PropertyInfo,
	NULL
};
extern Il2CppType t2404_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39627_GM;
MethodInfo m39627_MI = 
{
	"get_Current", NULL, &t5807_TI, &t2404_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39627_GM};
static MethodInfo* t5807_MIs[] =
{
	&m39627_MI,
	NULL
};
static TypeInfo* t5807_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5807_0_0_0;
extern Il2CppType t5807_1_0_0;
struct t5807;
extern Il2CppGenericClass t5807_GC;
TypeInfo t5807_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5807_MIs, t5807_PIs, NULL, NULL, NULL, NULL, NULL, &t5807_TI, t5807_ITIs, NULL, &EmptyCustomAttributesCache, &t5807_TI, &t5807_0_0_0, &t5807_1_0_0, NULL, &t5807_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4106.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4106_TI;
#include "t4106MD.h"

extern TypeInfo t2404_TI;
extern MethodInfo m23254_MI;
extern MethodInfo m30918_MI;
struct t107;
#define m30918(__this, p0, method) (t5 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Policy.IIdentityPermissionFactory>
extern Il2CppType t107_0_0_1;
FieldInfo t4106_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4106_TI, offsetof(t4106, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4106_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4106_TI, offsetof(t4106, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4106_FIs[] =
{
	&t4106_f0_FieldInfo,
	&t4106_f1_FieldInfo,
	NULL
};
extern MethodInfo m23251_MI;
static PropertyInfo t4106____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4106_TI, "System.Collections.IEnumerator.Current", &m23251_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4106____Current_PropertyInfo = 
{
	&t4106_TI, "Current", &m23254_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4106_PIs[] =
{
	&t4106____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4106____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4106_m23250_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23250_GM;
MethodInfo m23250_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t4106_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4106_m23250_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23250_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23251_GM;
MethodInfo m23251_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t4106_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23251_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23252_GM;
MethodInfo m23252_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t4106_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23252_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23253_GM;
MethodInfo m23253_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t4106_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23253_GM};
extern Il2CppType t2404_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23254_GM;
MethodInfo m23254_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t4106_TI, &t2404_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23254_GM};
static MethodInfo* t4106_MIs[] =
{
	&m23250_MI,
	&m23251_MI,
	&m23252_MI,
	&m23253_MI,
	&m23254_MI,
	NULL
};
extern MethodInfo m23253_MI;
extern MethodInfo m23252_MI;
static MethodInfo* t4106_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m23251_MI,
	&m23253_MI,
	&m23252_MI,
	&m23254_MI,
};
static TypeInfo* t4106_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5807_TI,
};
static Il2CppInterfaceOffsetPair t4106_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5807_TI, 7},
};
extern TypeInfo t2404_TI;
static Il2CppRGCTXData t4106_RGCTXData[3] = 
{
	&m23254_MI/* Method Usage */,
	&t2404_TI/* Class Usage */,
	&m30918_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4106_0_0_0;
extern Il2CppType t4106_1_0_0;
extern Il2CppGenericClass t4106_GC;
TypeInfo t4106_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4106_MIs, t4106_PIs, t4106_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4106_TI, t4106_ITIs, t4106_VT, &EmptyCustomAttributesCache, &t4106_TI, &t4106_0_0_0, &t4106_1_0_0, t4106_IOs, &t4106_GC, NULL, NULL, NULL, t4106_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4106)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7474_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Policy.IIdentityPermissionFactory>
extern MethodInfo m39628_MI;
extern MethodInfo m39629_MI;
static PropertyInfo t7474____Item_PropertyInfo = 
{
	&t7474_TI, "Item", &m39628_MI, &m39629_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7474_PIs[] =
{
	&t7474____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2404_0_0_0;
static ParameterInfo t7474_m39630_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2404_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39630_GM;
MethodInfo m39630_MI = 
{
	"IndexOf", NULL, &t7474_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7474_m39630_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39630_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2404_0_0_0;
static ParameterInfo t7474_m39631_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2404_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39631_GM;
MethodInfo m39631_MI = 
{
	"Insert", NULL, &t7474_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7474_m39631_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39631_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7474_m39632_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39632_GM;
MethodInfo m39632_MI = 
{
	"RemoveAt", NULL, &t7474_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7474_m39632_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39632_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7474_m39628_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t2404_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39628_GM;
MethodInfo m39628_MI = 
{
	"get_Item", NULL, &t7474_TI, &t2404_0_0_0, RuntimeInvoker_t5_t110, t7474_m39628_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39628_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t2404_0_0_0;
static ParameterInfo t7474_m39629_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2404_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39629_GM;
MethodInfo m39629_MI = 
{
	"set_Item", NULL, &t7474_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7474_m39629_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39629_GM};
static MethodInfo* t7474_MIs[] =
{
	&m39630_MI,
	&m39631_MI,
	&m39632_MI,
	&m39628_MI,
	&m39629_MI,
	NULL
};
static TypeInfo* t7474_ITIs[] = 
{
	&t739_TI,
	&t7473_TI,
	&t7475_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7474_0_0_0;
extern Il2CppType t7474_1_0_0;
struct t7474;
extern Il2CppGenericClass t7474_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7474_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7474_MIs, t7474_PIs, NULL, NULL, NULL, NULL, NULL, &t7474_TI, t7474_ITIs, NULL, &t2240__CustomAttributeCache, &t7474_TI, &t7474_0_0_0, &t7474_1_0_0, NULL, &t7474_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2402.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2402_TI;
#include "t2402MD.h"

#include "t160.h"
#include "t4115.h"
#include "t4111.h"
#include "t4112.h"
#include "t484.h"
#include "t4113.h"
#include "t4119.h"
#include "t4114.h"
extern TypeInfo t110_TI;
extern TypeInfo t109_TI;
extern TypeInfo t160_TI;
extern TypeInfo t723_TI;
extern TypeInfo t1982_TI;
extern TypeInfo t1181_TI;
extern TypeInfo t4107_TI;
extern TypeInfo t4115_TI;
extern TypeInfo t108_TI;
extern TypeInfo t4111_TI;
extern TypeInfo t484_TI;
extern TypeInfo t4112_TI;
extern TypeInfo t4113_TI;
extern TypeInfo t4119_TI;
#include "t160MD.h"
#include "t1181MD.h"
#include "t5MD.h"
#include "t166MD.h"
#include "t4111MD.h"
#include "t484MD.h"
#include "t4112MD.h"
#include "t4113MD.h"
#include "t4115MD.h"
#include "t4119MD.h"
extern MethodInfo m23303_MI;
extern MethodInfo m23304_MI;
extern MethodInfo m2581_MI;
extern MethodInfo m4991_MI;
extern MethodInfo m30929_MI;
extern MethodInfo m4767_MI;
extern MethodInfo m23289_MI;
extern MethodInfo m460_MI;
extern MethodInfo m23291_MI;
extern MethodInfo m23276_MI;
extern MethodInfo m23275_MI;
extern MethodInfo m23286_MI;
extern MethodInfo m6741_MI;
extern MethodInfo m23273_MI;
extern MethodInfo m23280_MI;
extern MethodInfo m23287_MI;
extern MethodInfo m23290_MI;
extern MethodInfo m23292_MI;
extern MethodInfo m23274_MI;
extern MethodInfo m23300_MI;
extern MethodInfo m5931_MI;
extern MethodInfo m23301_MI;
extern MethodInfo m39601_MI;
extern MethodInfo m39603_MI;
extern MethodInfo m746_MI;
extern MethodInfo m516_MI;
extern MethodInfo m23311_MI;
extern MethodInfo m5904_MI;
extern MethodInfo m30931_MI;
extern MethodInfo m23283_MI;
extern MethodInfo m23284_MI;
extern MethodInfo m3595_MI;
extern MethodInfo m23386_MI;
extern MethodInfo m23390_MI;
extern MethodInfo m23305_MI;
extern MethodInfo m23288_MI;
extern MethodInfo m23294_MI;
extern MethodInfo m5963_MI;
extern MethodInfo m23396_MI;
extern MethodInfo m30933_MI;
extern MethodInfo m30941_MI;
extern MethodInfo m6740_MI;
struct t107;
struct t107;
 void m23607_gshared (t5 * __this, t168** p0, int32_t p1, MethodInfo* method);
#define m23607(__this, p0, p1, method) (void)m23607_gshared((t5 *)__this, (t168**)p0, (int32_t)p1, method)
#define m30929(__this, p0, p1, method) (void)m23607_gshared((t5 *)__this, (t168**)p0, (int32_t)p1, method)
struct t107;
#include "t4117.h"
struct t107;
#include "t2334.h"
 int32_t m11458_gshared (t5 * __this, t168* p0, t5 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m11458(__this, p0, p1, p2, p3, method) (int32_t)m11458_gshared((t5 *)__this, (t168*)p0, (t5 *)p1, (int32_t)p2, (int32_t)p3, method)
#define m30931(__this, p0, p1, p2, p3, method) (int32_t)m11458_gshared((t5 *)__this, (t168*)p0, (t5 *)p1, (int32_t)p2, (int32_t)p3, method)
struct t107;
struct t107;
 void m23676_gshared (t5 * __this, t168* p0, int32_t p1, int32_t p2, t5* p3, MethodInfo* method);
#define m23676(__this, p0, p1, p2, p3, method) (void)m23676_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (int32_t)p2, (t5*)p3, method)
#define m30933(__this, p0, p1, p2, p3, method) (void)m23676_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (int32_t)p2, (t5*)p3, method)
struct t107;
#include "t142.h"
struct t107;
#include "t2458.h"
 void m23827_gshared (t5 * __this, t168* p0, int32_t p1, t2458 * p2, MethodInfo* method);
#define m23827(__this, p0, p1, p2, method) (void)m23827_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (t2458 *)p2, method)
#define m30941(__this, p0, p1, p2, method) (void)m23827_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (t2458 *)p2, method)


 t4115  m23286 (t2402 * __this, MethodInfo* method){
	{
		t4115  L_0 = {0};
		m23305(&L_0, __this, &m23305_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<System.Security.Policy.StrongName>
extern Il2CppType t110_0_0_32849;
FieldInfo t2402_f0_FieldInfo = 
{
	"DefaultCapacity", &t110_0_0_32849, &t2402_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t4107_0_0_1;
FieldInfo t2402_f1_FieldInfo = 
{
	"_items", &t4107_0_0_1, &t2402_TI, offsetof(t2402, f1), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2402_f2_FieldInfo = 
{
	"_size", &t110_0_0_1, &t2402_TI, offsetof(t2402, f2), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t2402_f3_FieldInfo = 
{
	"_version", &t110_0_0_1, &t2402_TI, offsetof(t2402, f3), &EmptyCustomAttributesCache};
extern Il2CppType t4107_0_0_49;
FieldInfo t2402_f4_FieldInfo = 
{
	"EmptyArray", &t4107_0_0_49, &t2402_TI, offsetof(t2402_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t2402_FIs[] =
{
	&t2402_f0_FieldInfo,
	&t2402_f1_FieldInfo,
	&t2402_f2_FieldInfo,
	&t2402_f3_FieldInfo,
	&t2402_f4_FieldInfo,
	NULL
};
static const int32_t t2402_f0_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t2402_f0_DefaultValue = 
{
	&t2402_f0_FieldInfo, { (char*)&t2402_f0_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t2402_FDVs[] = 
{
	&t2402_f0_DefaultValue,
	NULL
};
extern MethodInfo m23266_MI;
static PropertyInfo t2402____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2402_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m23266_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23267_MI;
static PropertyInfo t2402____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2402_TI, "System.Collections.ICollection.IsSynchronized", &m23267_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23268_MI;
static PropertyInfo t2402____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2402_TI, "System.Collections.ICollection.SyncRoot", &m23268_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23269_MI;
static PropertyInfo t2402____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2402_TI, "System.Collections.IList.IsFixedSize", &m23269_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23270_MI;
static PropertyInfo t2402____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2402_TI, "System.Collections.IList.IsReadOnly", &m23270_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23271_MI;
extern MethodInfo m23272_MI;
static PropertyInfo t2402____System_Collections_IList_Item_PropertyInfo = 
{
	&t2402_TI, "System.Collections.IList.Item", &m23271_MI, &m23272_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2402____Capacity_PropertyInfo = 
{
	&t2402_TI, "Capacity", &m23300_MI, &m23301_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23302_MI;
static PropertyInfo t2402____Count_PropertyInfo = 
{
	&t2402_TI, "Count", &m23302_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t2402____Item_PropertyInfo = 
{
	&t2402_TI, "Item", &m23303_MI, &m23304_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2402_PIs[] =
{
	&t2402____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2402____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2402____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2402____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2402____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2402____System_Collections_IList_Item_PropertyInfo,
	&t2402____Capacity_PropertyInfo,
	&t2402____Count_PropertyInfo,
	&t2402____Item_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23255_GM;
MethodInfo m23255_MI = 
{
	".ctor", (methodPointerType)&m11648_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23255_GM};
extern Il2CppType t4108_0_0_0;
static ParameterInfo t2402_m23256_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t4108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23256_GM;
MethodInfo m23256_MI = 
{
	".ctor", (methodPointerType)&m11650_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2402_m23256_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23256_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2402_m11601_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m11601_GM;
MethodInfo m11601_MI = 
{
	".ctor", (methodPointerType)&m11652_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2402_m11601_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m11601_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23257_GM;
MethodInfo m23257_MI = 
{
	".cctor", (methodPointerType)&m11654_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23257_GM};
extern Il2CppType t4109_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23258_GM;
MethodInfo m23258_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m11656_gshared, &t2402_TI, &t4109_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23258_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2402_m23259_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23259_GM;
MethodInfo m23259_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11658_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2402_m23259_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23259_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23260_GM;
MethodInfo m23260_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11660_gshared, &t2402_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23260_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2402_m23261_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23261_GM;
MethodInfo m23261_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11662_gshared, &t2402_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2402_m23261_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23261_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2402_m23262_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23262_GM;
MethodInfo m23262_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11664_gshared, &t2402_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2402_m23262_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23262_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2402_m23263_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23263_GM;
MethodInfo m23263_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11666_gshared, &t2402_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2402_m23263_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23263_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2402_m23264_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23264_GM;
MethodInfo m23264_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11668_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2402_m23264_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23264_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2402_m23265_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23265_GM;
MethodInfo m23265_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11670_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2402_m23265_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23265_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23266_GM;
MethodInfo m23266_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11672_gshared, &t2402_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23266_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23267_GM;
MethodInfo m23267_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11674_gshared, &t2402_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23267_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23268_GM;
MethodInfo m23268_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11676_gshared, &t2402_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23268_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23269_GM;
MethodInfo m23269_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11678_gshared, &t2402_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23269_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23270_GM;
MethodInfo m23270_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11680_gshared, &t2402_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23270_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2402_m23271_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23271_GM;
MethodInfo m23271_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11682_gshared, &t2402_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t2402_m23271_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23271_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t2402_m23272_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23272_GM;
MethodInfo m23272_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11684_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2402_m23272_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23272_GM};
extern Il2CppType t1885_0_0_0;
static ParameterInfo t2402_m23273_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23273_GM;
MethodInfo m23273_MI = 
{
	"Add", (methodPointerType)&m11686_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2402_m23273_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23273_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2402_m23274_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23274_GM;
MethodInfo m23274_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m11688_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2402_m23274_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23274_GM};
extern Il2CppType t4110_0_0_0;
static ParameterInfo t2402_m23275_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t4110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23275_GM;
MethodInfo m23275_MI = 
{
	"AddCollection", (methodPointerType)&m11690_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2402_m23275_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23275_GM};
extern Il2CppType t4108_0_0_0;
static ParameterInfo t2402_m23276_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t4108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23276_GM;
MethodInfo m23276_MI = 
{
	"AddEnumerable", (methodPointerType)&m11692_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2402_m23276_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23276_GM};
extern Il2CppType t4108_0_0_0;
static ParameterInfo t2402_m23277_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t4108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23277_GM;
MethodInfo m23277_MI = 
{
	"AddRange", (methodPointerType)&m11693_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2402_m23277_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23277_GM};
extern Il2CppType t4111_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23278_GM;
MethodInfo m23278_MI = 
{
	"AsReadOnly", (methodPointerType)&m11695_gshared, &t2402_TI, &t4111_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23278_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23279_GM;
MethodInfo m23279_MI = 
{
	"Clear", (methodPointerType)&m11696_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23279_GM};
extern Il2CppType t1885_0_0_0;
static ParameterInfo t2402_m23280_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23280_GM;
MethodInfo m23280_MI = 
{
	"Contains", (methodPointerType)&m11698_gshared, &t2402_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2402_m23280_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23280_GM};
extern Il2CppType t4107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2402_m23281_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4107_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23281_GM;
MethodInfo m23281_MI = 
{
	"CopyTo", (methodPointerType)&m11700_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t2402_m23281_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23281_GM};
extern Il2CppType t4112_0_0_0;
extern Il2CppType t4112_0_0_0;
static ParameterInfo t2402_m23282_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t4112_0_0_0},
};
extern Il2CppType t1885_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23282_GM;
MethodInfo m23282_MI = 
{
	"Find", (methodPointerType)&m11702_gshared, &t2402_TI, &t1885_0_0_0, RuntimeInvoker_t5_t5, t2402_m23282_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23282_GM};
extern Il2CppType t4112_0_0_0;
static ParameterInfo t2402_m23283_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t4112_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23283_GM;
MethodInfo m23283_MI = 
{
	"CheckMatch", (methodPointerType)&m11704_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2402_m23283_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23283_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t4112_0_0_0;
static ParameterInfo t2402_m23284_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t4112_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23284_GM;
MethodInfo m23284_MI = 
{
	"GetIndex", (methodPointerType)&m11706_gshared, &t2402_TI, &t110_0_0_0, RuntimeInvoker_t110_t110_t110_t5, t2402_m23284_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL, &m23284_GM};
extern Il2CppType t4113_0_0_0;
extern Il2CppType t4113_0_0_0;
static ParameterInfo t2402_m23285_ParameterInfos[] = 
{
	{"action", 0, 134217728, &EmptyCustomAttributesCache, &t4113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23285_GM;
MethodInfo m23285_MI = 
{
	"ForEach", (methodPointerType)&m11707_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2402_m23285_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23285_GM};
extern Il2CppType t4115_0_0_0;
extern void* RuntimeInvoker_t4115 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23286_GM;
MethodInfo m23286_MI = 
{
	"GetEnumerator", (methodPointerType)&m23286, &t2402_TI, &t4115_0_0_0, RuntimeInvoker_t4115, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23286_GM};
extern Il2CppType t1885_0_0_0;
static ParameterInfo t2402_m23287_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23287_GM;
MethodInfo m23287_MI = 
{
	"IndexOf", (methodPointerType)&m11709_gshared, &t2402_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2402_m23287_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23287_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t2402_m23288_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23288_GM;
MethodInfo m23288_MI = 
{
	"Shift", (methodPointerType)&m11711_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t2402_m23288_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23288_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2402_m23289_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23289_GM;
MethodInfo m23289_MI = 
{
	"CheckIndex", (methodPointerType)&m11713_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2402_m23289_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23289_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1885_0_0_0;
static ParameterInfo t2402_m23290_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23290_GM;
MethodInfo m23290_MI = 
{
	"Insert", (methodPointerType)&m11715_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2402_m23290_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23290_GM};
extern Il2CppType t4108_0_0_0;
static ParameterInfo t2402_m23291_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t4108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23291_GM;
MethodInfo m23291_MI = 
{
	"CheckCollection", (methodPointerType)&m11717_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2402_m23291_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23291_GM};
extern Il2CppType t1885_0_0_0;
static ParameterInfo t2402_m23292_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23292_GM;
MethodInfo m23292_MI = 
{
	"Remove", (methodPointerType)&m11719_gshared, &t2402_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t2402_m23292_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23292_GM};
extern Il2CppType t4112_0_0_0;
static ParameterInfo t2402_m23293_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t4112_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23293_GM;
MethodInfo m23293_MI = 
{
	"RemoveAll", (methodPointerType)&m11721_gshared, &t2402_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t2402_m23293_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23293_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2402_m23294_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23294_GM;
MethodInfo m23294_MI = 
{
	"RemoveAt", (methodPointerType)&m11723_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2402_m23294_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23294_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23295_GM;
MethodInfo m23295_MI = 
{
	"Reverse", (methodPointerType)&m11725_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23295_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23296_GM;
MethodInfo m23296_MI = 
{
	"Sort", (methodPointerType)&m11727_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23296_GM};
extern Il2CppType t4114_0_0_0;
extern Il2CppType t4114_0_0_0;
static ParameterInfo t2402_m23297_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t4114_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23297_GM;
MethodInfo m23297_MI = 
{
	"Sort", (methodPointerType)&m11729_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2402_m23297_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23297_GM};
extern Il2CppType t4107_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23298_GM;
MethodInfo m23298_MI = 
{
	"ToArray", (methodPointerType)&m11731_gshared, &t2402_TI, &t4107_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23298_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23299_GM;
MethodInfo m23299_MI = 
{
	"TrimExcess", (methodPointerType)&m11733_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23299_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23300_GM;
MethodInfo m23300_MI = 
{
	"get_Capacity", (methodPointerType)&m11735_gshared, &t2402_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23300_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2402_m23301_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23301_GM;
MethodInfo m23301_MI = 
{
	"set_Capacity", (methodPointerType)&m11737_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t2402_m23301_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23301_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23302_GM;
MethodInfo m23302_MI = 
{
	"get_Count", (methodPointerType)&m11738_gshared, &t2402_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23302_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t2402_m23303_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1885_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23303_GM;
MethodInfo m23303_MI = 
{
	"get_Item", (methodPointerType)&m11740_gshared, &t2402_TI, &t1885_0_0_0, RuntimeInvoker_t5_t110, t2402_m23303_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23303_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1885_0_0_0;
static ParameterInfo t2402_m23304_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23304_GM;
MethodInfo m23304_MI = 
{
	"set_Item", (methodPointerType)&m11742_gshared, &t2402_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t2402_m23304_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23304_GM};
static MethodInfo* t2402_MIs[] =
{
	&m23255_MI,
	&m23256_MI,
	&m11601_MI,
	&m23257_MI,
	&m23258_MI,
	&m23259_MI,
	&m23260_MI,
	&m23261_MI,
	&m23262_MI,
	&m23263_MI,
	&m23264_MI,
	&m23265_MI,
	&m23266_MI,
	&m23267_MI,
	&m23268_MI,
	&m23269_MI,
	&m23270_MI,
	&m23271_MI,
	&m23272_MI,
	&m23273_MI,
	&m23274_MI,
	&m23275_MI,
	&m23276_MI,
	&m23277_MI,
	&m23278_MI,
	&m23279_MI,
	&m23280_MI,
	&m23281_MI,
	&m23282_MI,
	&m23283_MI,
	&m23284_MI,
	&m23285_MI,
	&m23286_MI,
	&m23287_MI,
	&m23288_MI,
	&m23289_MI,
	&m23290_MI,
	&m23291_MI,
	&m23292_MI,
	&m23293_MI,
	&m23294_MI,
	&m23295_MI,
	&m23296_MI,
	&m23297_MI,
	&m23298_MI,
	&m23299_MI,
	&m23300_MI,
	&m23301_MI,
	&m23302_MI,
	&m23303_MI,
	&m23304_MI,
	NULL
};
extern MethodInfo m464_MI;
extern MethodInfo m466_MI;
extern MethodInfo m467_MI;
extern MethodInfo m23260_MI;
extern MethodInfo m23259_MI;
extern MethodInfo m23261_MI;
extern MethodInfo m23279_MI;
extern MethodInfo m23262_MI;
extern MethodInfo m23263_MI;
extern MethodInfo m23264_MI;
extern MethodInfo m23265_MI;
extern MethodInfo m23281_MI;
extern MethodInfo m23258_MI;
static MethodInfo* t2402_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m23260_MI,
	&m23302_MI,
	&m23267_MI,
	&m23268_MI,
	&m23259_MI,
	&m23269_MI,
	&m23270_MI,
	&m23271_MI,
	&m23272_MI,
	&m23261_MI,
	&m23279_MI,
	&m23262_MI,
	&m23263_MI,
	&m23264_MI,
	&m23265_MI,
	&m23294_MI,
	&m23302_MI,
	&m23266_MI,
	&m23273_MI,
	&m23279_MI,
	&m23280_MI,
	&m23281_MI,
	&m23292_MI,
	&m23258_MI,
	&m23287_MI,
	&m23290_MI,
	&m23294_MI,
	&m23303_MI,
	&m23304_MI,
};
extern TypeInfo t811_TI;
extern TypeInfo t1129_TI;
static TypeInfo* t2402_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t4110_TI,
	&t4108_TI,
	&t1882_TI,
};
static Il2CppInterfaceOffsetPair t2402_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t4110_TI, 20},
	{ &t4108_TI, 27},
	{ &t1882_TI, 28},
};
extern TypeInfo t2402_TI;
extern TypeInfo t4110_TI;
extern TypeInfo t4107_TI;
extern TypeInfo t4115_TI;
extern TypeInfo t1885_TI;
extern TypeInfo t4111_TI;
static Il2CppRGCTXData t2402_RGCTXData[38] = 
{
	&t2402_TI/* Static Usage */,
	&m23291_MI/* Method Usage */,
	&t4110_TI/* Class Usage */,
	&m23276_MI/* Method Usage */,
	&m39596_MI/* Method Usage */,
	&t4107_TI/* Array Usage */,
	&m23275_MI/* Method Usage */,
	&m23286_MI/* Method Usage */,
	&t4115_TI/* Class Usage */,
	&t1885_TI/* Class Usage */,
	&m23273_MI/* Method Usage */,
	&m23280_MI/* Method Usage */,
	&m23287_MI/* Method Usage */,
	&m23289_MI/* Method Usage */,
	&m23290_MI/* Method Usage */,
	&m23292_MI/* Method Usage */,
	&m23303_MI/* Method Usage */,
	&m23304_MI/* Method Usage */,
	&m23274_MI/* Method Usage */,
	&m23300_MI/* Method Usage */,
	&m23301_MI/* Method Usage */,
	&m39601_MI/* Method Usage */,
	&m39603_MI/* Method Usage */,
	&m39604_MI/* Method Usage */,
	&t4111_TI/* Class Usage */,
	&m23311_MI/* Method Usage */,
	&m30931_MI/* Method Usage */,
	&m23283_MI/* Method Usage */,
	&m23284_MI/* Method Usage */,
	&m23386_MI/* Method Usage */,
	&m23390_MI/* Method Usage */,
	&m23305_MI/* Method Usage */,
	&m23288_MI/* Method Usage */,
	&m23294_MI/* Method Usage */,
	&m23396_MI/* Method Usage */,
	&m30933_MI/* Method Usage */,
	&m30941_MI/* Method Usage */,
	&m30929_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2402_0_0_0;
extern Il2CppType t2402_1_0_0;
extern TypeInfo t5_TI;
struct t2402;
extern Il2CppGenericClass t2402_GC;
extern CustomAttributesCache t1524__CustomAttributeCache;
TypeInfo t2402_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t2402_MIs, t2402_PIs, t2402_FIs, NULL, &t5_TI, NULL, NULL, &t2402_TI, t2402_ITIs, t2402_VT, &t1524__CustomAttributeCache, &t2402_TI, &t2402_0_0_0, &t2402_1_0_0, t2402_IOs, &t2402_GC, NULL, t2402_FDVs, NULL, t2402_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2402), 0, -1, sizeof(t2402_SFs), 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, true, false, false, 51, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif

#include "t114.h"
#include "t1363.h"
extern TypeInfo t114_TI;
extern TypeInfo t11_TI;
extern TypeInfo t1363_TI;
#include "t114MD.h"
#include "t1363MD.h"
extern MethodInfo m23308_MI;
extern MethodInfo m4766_MI;
extern MethodInfo m531_MI;
extern MethodInfo m3643_MI;
extern MethodInfo m5942_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>
extern Il2CppType t2402_0_0_1;
FieldInfo t4115_f0_FieldInfo = 
{
	"l", &t2402_0_0_1, &t4115_TI, offsetof(t4115, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4115_f1_FieldInfo = 
{
	"next", &t110_0_0_1, &t4115_TI, offsetof(t4115, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4115_f2_FieldInfo = 
{
	"ver", &t110_0_0_1, &t4115_TI, offsetof(t4115, f2) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1885_0_0_1;
FieldInfo t4115_f3_FieldInfo = 
{
	"current", &t1885_0_0_1, &t4115_TI, offsetof(t4115, f3) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4115_FIs[] =
{
	&t4115_f0_FieldInfo,
	&t4115_f1_FieldInfo,
	&t4115_f2_FieldInfo,
	&t4115_f3_FieldInfo,
	NULL
};
extern MethodInfo m23306_MI;
static PropertyInfo t4115____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4115_TI, "System.Collections.IEnumerator.Current", &m23306_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23310_MI;
static PropertyInfo t4115____Current_PropertyInfo = 
{
	&t4115_TI, "Current", &m23310_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4115_PIs[] =
{
	&t4115____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4115____Current_PropertyInfo,
	NULL
};
extern Il2CppType t2402_0_0_0;
static ParameterInfo t4115_m23305_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t2402_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23305_GM;
MethodInfo m23305_MI = 
{
	".ctor", (methodPointerType)&m11749_gshared, &t4115_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4115_m23305_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23305_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23306_GM;
MethodInfo m23306_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11750_gshared, &t4115_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23306_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23307_GM;
MethodInfo m23307_MI = 
{
	"Dispose", (methodPointerType)&m11751_gshared, &t4115_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23307_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23308_GM;
MethodInfo m23308_MI = 
{
	"VerifyState", (methodPointerType)&m11752_gshared, &t4115_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23308_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23309_GM;
MethodInfo m23309_MI = 
{
	"MoveNext", (methodPointerType)&m11753_gshared, &t4115_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23309_GM};
extern Il2CppType t1885_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23310_GM;
MethodInfo m23310_MI = 
{
	"get_Current", (methodPointerType)&m11754_gshared, &t4115_TI, &t1885_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23310_GM};
static MethodInfo* t4115_MIs[] =
{
	&m23305_MI,
	&m23306_MI,
	&m23307_MI,
	&m23308_MI,
	&m23309_MI,
	&m23310_MI,
	NULL
};
extern MethodInfo m23309_MI;
extern MethodInfo m23307_MI;
static MethodInfo* t4115_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m23306_MI,
	&m23309_MI,
	&m23307_MI,
	&m23310_MI,
};
static TypeInfo* t4115_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t4109_TI,
};
static Il2CppInterfaceOffsetPair t4115_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t4109_TI, 7},
};
extern TypeInfo t1885_TI;
extern TypeInfo t4115_TI;
static Il2CppRGCTXData t4115_RGCTXData[3] = 
{
	&m23308_MI/* Method Usage */,
	&t1885_TI/* Class Usage */,
	&t4115_TI/* Class Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4115_0_0_0;
extern Il2CppType t4115_1_0_0;
extern Il2CppGenericClass t4115_GC;
extern TypeInfo t1524_TI;
TypeInfo t4115_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t4115_MIs, t4115_PIs, t4115_FIs, NULL, &t267_TI, NULL, &t1524_TI, &t4115_TI, t4115_ITIs, t4115_VT, &EmptyCustomAttributesCache, &t4115_TI, &t4115_0_0_0, &t4115_1_0_0, t4115_IOs, &t4115_GC, NULL, NULL, NULL, t4115_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4115)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif

#include "t491.h"
extern TypeInfo t491_TI;
#include "t491MD.h"
#include "t4116MD.h"
extern MethodInfo m23340_MI;
extern MethodInfo m2163_MI;
extern MethodInfo m4754_MI;
extern MethodInfo m4947_MI;
extern MethodInfo m23372_MI;
extern MethodInfo m39600_MI;
extern MethodInfo m39593_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>
extern Il2CppType t1882_0_0_1;
FieldInfo t4111_f0_FieldInfo = 
{
	"list", &t1882_0_0_1, &t4111_TI, offsetof(t4111, f0), &EmptyCustomAttributesCache};
static FieldInfo* t4111_FIs[] =
{
	&t4111_f0_FieldInfo,
	NULL
};
extern MethodInfo m23317_MI;
extern MethodInfo m23318_MI;
static PropertyInfo t4111____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t4111_TI, "System.Collections.Generic.IList<T>.Item", &m23317_MI, &m23318_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23319_MI;
static PropertyInfo t4111____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t4111_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m23319_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23329_MI;
static PropertyInfo t4111____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t4111_TI, "System.Collections.ICollection.IsSynchronized", &m23329_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23330_MI;
static PropertyInfo t4111____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t4111_TI, "System.Collections.ICollection.SyncRoot", &m23330_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23331_MI;
static PropertyInfo t4111____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t4111_TI, "System.Collections.IList.IsFixedSize", &m23331_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23332_MI;
static PropertyInfo t4111____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t4111_TI, "System.Collections.IList.IsReadOnly", &m23332_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23333_MI;
extern MethodInfo m23334_MI;
static PropertyInfo t4111____System_Collections_IList_Item_PropertyInfo = 
{
	&t4111_TI, "System.Collections.IList.Item", &m23333_MI, &m23334_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23339_MI;
static PropertyInfo t4111____Count_PropertyInfo = 
{
	&t4111_TI, "Count", &m23339_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4111____Item_PropertyInfo = 
{
	&t4111_TI, "Item", &m23340_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4111_PIs[] =
{
	&t4111____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t4111____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t4111____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t4111____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t4111____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t4111____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t4111____System_Collections_IList_Item_PropertyInfo,
	&t4111____Count_PropertyInfo,
	&t4111____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1882_0_0_0;
static ParameterInfo t4111_m23311_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1882_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23311_GM;
MethodInfo m23311_MI = 
{
	".ctor", (methodPointerType)&m11755_gshared, &t4111_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4111_m23311_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23311_GM};
extern Il2CppType t1885_0_0_0;
static ParameterInfo t4111_m23312_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23312_GM;
MethodInfo m23312_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m11756_gshared, &t4111_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4111_m23312_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23312_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23313_GM;
MethodInfo m23313_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m11757_gshared, &t4111_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23313_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1885_0_0_0;
static ParameterInfo t4111_m23314_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23314_GM;
MethodInfo m23314_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m11758_gshared, &t4111_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t4111_m23314_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23314_GM};
extern Il2CppType t1885_0_0_0;
static ParameterInfo t4111_m23315_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23315_GM;
MethodInfo m23315_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m11759_gshared, &t4111_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t4111_m23315_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23315_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t4111_m23316_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23316_GM;
MethodInfo m23316_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m11760_gshared, &t4111_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t4111_m23316_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23316_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t4111_m23317_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1885_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23317_GM;
MethodInfo m23317_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m11761_gshared, &t4111_TI, &t1885_0_0_0, RuntimeInvoker_t5_t110, t4111_m23317_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23317_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1885_0_0_0;
static ParameterInfo t4111_m23318_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23318_GM;
MethodInfo m23318_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m11762_gshared, &t4111_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t4111_m23318_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23318_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23319_GM;
MethodInfo m23319_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11763_gshared, &t4111_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23319_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t4111_m23320_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23320_GM;
MethodInfo m23320_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11764_gshared, &t4111_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t4111_m23320_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23320_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23321_GM;
MethodInfo m23321_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11765_gshared, &t4111_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23321_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t4111_m23322_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23322_GM;
MethodInfo m23322_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11766_gshared, &t4111_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t4111_m23322_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23322_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23323_GM;
MethodInfo m23323_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m11767_gshared, &t4111_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23323_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t4111_m23324_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23324_GM;
MethodInfo m23324_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11768_gshared, &t4111_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t4111_m23324_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23324_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t4111_m23325_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23325_GM;
MethodInfo m23325_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11769_gshared, &t4111_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t4111_m23325_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23325_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t4111_m23326_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23326_GM;
MethodInfo m23326_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11770_gshared, &t4111_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t4111_m23326_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23326_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t4111_m23327_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23327_GM;
MethodInfo m23327_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11771_gshared, &t4111_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4111_m23327_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23327_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t4111_m23328_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23328_GM;
MethodInfo m23328_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m11772_gshared, &t4111_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t4111_m23328_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23328_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23329_GM;
MethodInfo m23329_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11773_gshared, &t4111_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23329_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23330_GM;
MethodInfo m23330_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11774_gshared, &t4111_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23330_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23331_GM;
MethodInfo m23331_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11775_gshared, &t4111_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23331_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23332_GM;
MethodInfo m23332_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11776_gshared, &t4111_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23332_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t4111_m23333_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23333_GM;
MethodInfo m23333_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11777_gshared, &t4111_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t4111_m23333_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23333_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t4111_m23334_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23334_GM;
MethodInfo m23334_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11778_gshared, &t4111_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t4111_m23334_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23334_GM};
extern Il2CppType t1885_0_0_0;
static ParameterInfo t4111_m23335_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23335_GM;
MethodInfo m23335_MI = 
{
	"Contains", (methodPointerType)&m11779_gshared, &t4111_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t4111_m23335_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23335_GM};
extern Il2CppType t4107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t4111_m23336_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23336_GM;
MethodInfo m23336_MI = 
{
	"CopyTo", (methodPointerType)&m11780_gshared, &t4111_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t4111_m23336_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23336_GM};
extern Il2CppType t4109_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23337_GM;
MethodInfo m23337_MI = 
{
	"GetEnumerator", (methodPointerType)&m11781_gshared, &t4111_TI, &t4109_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23337_GM};
extern Il2CppType t1885_0_0_0;
static ParameterInfo t4111_m23338_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23338_GM;
MethodInfo m23338_MI = 
{
	"IndexOf", (methodPointerType)&m11782_gshared, &t4111_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t4111_m23338_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23338_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23339_GM;
MethodInfo m23339_MI = 
{
	"get_Count", (methodPointerType)&m11783_gshared, &t4111_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23339_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t4111_m23340_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1885_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23340_GM;
MethodInfo m23340_MI = 
{
	"get_Item", (methodPointerType)&m11784_gshared, &t4111_TI, &t1885_0_0_0, RuntimeInvoker_t5_t110, t4111_m23340_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23340_GM};
static MethodInfo* t4111_MIs[] =
{
	&m23311_MI,
	&m23312_MI,
	&m23313_MI,
	&m23314_MI,
	&m23315_MI,
	&m23316_MI,
	&m23317_MI,
	&m23318_MI,
	&m23319_MI,
	&m23320_MI,
	&m23321_MI,
	&m23322_MI,
	&m23323_MI,
	&m23324_MI,
	&m23325_MI,
	&m23326_MI,
	&m23327_MI,
	&m23328_MI,
	&m23329_MI,
	&m23330_MI,
	&m23331_MI,
	&m23332_MI,
	&m23333_MI,
	&m23334_MI,
	&m23335_MI,
	&m23336_MI,
	&m23337_MI,
	&m23338_MI,
	&m23339_MI,
	&m23340_MI,
	NULL
};
extern MethodInfo m23321_MI;
extern MethodInfo m23320_MI;
extern MethodInfo m23322_MI;
extern MethodInfo m23323_MI;
extern MethodInfo m23324_MI;
extern MethodInfo m23325_MI;
extern MethodInfo m23326_MI;
extern MethodInfo m23327_MI;
extern MethodInfo m23328_MI;
extern MethodInfo m23312_MI;
extern MethodInfo m23313_MI;
extern MethodInfo m23335_MI;
extern MethodInfo m23336_MI;
extern MethodInfo m23315_MI;
extern MethodInfo m23338_MI;
extern MethodInfo m23314_MI;
extern MethodInfo m23316_MI;
extern MethodInfo m23337_MI;
static MethodInfo* t4111_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m23321_MI,
	&m23339_MI,
	&m23329_MI,
	&m23330_MI,
	&m23320_MI,
	&m23331_MI,
	&m23332_MI,
	&m23333_MI,
	&m23334_MI,
	&m23322_MI,
	&m23323_MI,
	&m23324_MI,
	&m23325_MI,
	&m23326_MI,
	&m23327_MI,
	&m23328_MI,
	&m23339_MI,
	&m23319_MI,
	&m23312_MI,
	&m23313_MI,
	&m23335_MI,
	&m23336_MI,
	&m23315_MI,
	&m23338_MI,
	&m23314_MI,
	&m23316_MI,
	&m23317_MI,
	&m23318_MI,
	&m23337_MI,
	&m23340_MI,
};
static TypeInfo* t4111_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t4110_TI,
	&t1882_TI,
	&t4108_TI,
};
static Il2CppInterfaceOffsetPair t4111_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t4110_TI, 20},
	{ &t1882_TI, 27},
	{ &t4108_TI, 32},
};
extern TypeInfo t1885_TI;
static Il2CppRGCTXData t4111_RGCTXData[9] = 
{
	&m23340_MI/* Method Usage */,
	&m23372_MI/* Method Usage */,
	&t1885_TI/* Class Usage */,
	&m39600_MI/* Method Usage */,
	&m39593_MI/* Method Usage */,
	&m39591_MI/* Method Usage */,
	&m39601_MI/* Method Usage */,
	&m39603_MI/* Method Usage */,
	&m39596_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4111_0_0_0;
extern Il2CppType t4111_1_0_0;
struct t4111;
extern Il2CppGenericClass t4111_GC;
extern CustomAttributesCache t1526__CustomAttributeCache;
TypeInfo t4111_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t4111_MIs, t4111_PIs, t4111_FIs, NULL, &t5_TI, NULL, NULL, &t4111_TI, t4111_ITIs, t4111_VT, &t1526__CustomAttributeCache, &t4111_TI, &t4111_0_0_0, &t4111_1_0_0, t4111_IOs, &t4111_GC, NULL, NULL, NULL, t4111_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4111), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t4116.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4116_TI;

#include "t115.h"
extern MethodInfo m23375_MI;
extern MethodInfo m23376_MI;
extern MethodInfo m23373_MI;
extern MethodInfo m23371_MI;
extern MethodInfo m23255_MI;
extern MethodInfo m11151_MI;
extern MethodInfo m23364_MI;
extern MethodInfo m23374_MI;
extern MethodInfo m23362_MI;
extern MethodInfo m23367_MI;
extern MethodInfo m23358_MI;
extern MethodInfo m39599_MI;
extern MethodInfo m39594_MI;
extern MethodInfo m39595_MI;
extern MethodInfo m532_MI;
extern MethodInfo m6793_MI;
extern MethodInfo m11150_MI;
extern MethodInfo m11152_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>
extern Il2CppType t1882_0_0_1;
FieldInfo t4116_f0_FieldInfo = 
{
	"list", &t1882_0_0_1, &t4116_TI, offsetof(t4116, f0), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_1;
FieldInfo t4116_f1_FieldInfo = 
{
	"syncRoot", &t5_0_0_1, &t4116_TI, offsetof(t4116, f1), &EmptyCustomAttributesCache};
static FieldInfo* t4116_FIs[] =
{
	&t4116_f0_FieldInfo,
	&t4116_f1_FieldInfo,
	NULL
};
extern MethodInfo m23342_MI;
static PropertyInfo t4116____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t4116_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m23342_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23350_MI;
static PropertyInfo t4116____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t4116_TI, "System.Collections.ICollection.IsSynchronized", &m23350_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23351_MI;
static PropertyInfo t4116____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t4116_TI, "System.Collections.ICollection.SyncRoot", &m23351_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23352_MI;
static PropertyInfo t4116____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t4116_TI, "System.Collections.IList.IsFixedSize", &m23352_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23353_MI;
static PropertyInfo t4116____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t4116_TI, "System.Collections.IList.IsReadOnly", &m23353_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23354_MI;
extern MethodInfo m23355_MI;
static PropertyInfo t4116____System_Collections_IList_Item_PropertyInfo = 
{
	&t4116_TI, "System.Collections.IList.Item", &m23354_MI, &m23355_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23368_MI;
static PropertyInfo t4116____Count_PropertyInfo = 
{
	&t4116_TI, "Count", &m23368_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m23369_MI;
extern MethodInfo m23370_MI;
static PropertyInfo t4116____Item_PropertyInfo = 
{
	&t4116_TI, "Item", &m23369_MI, &m23370_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4116_PIs[] =
{
	&t4116____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t4116____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t4116____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t4116____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t4116____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t4116____System_Collections_IList_Item_PropertyInfo,
	&t4116____Count_PropertyInfo,
	&t4116____Item_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23341_GM;
MethodInfo m23341_MI = 
{
	".ctor", (methodPointerType)&m11785_gshared, &t4116_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23341_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23342_GM;
MethodInfo m23342_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m11786_gshared, &t4116_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23342_GM};
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t4116_m23343_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23343_GM;
MethodInfo m23343_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11787_gshared, &t4116_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t4116_m23343_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23343_GM};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23344_GM;
MethodInfo m23344_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11788_gshared, &t4116_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23344_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t4116_m23345_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23345_GM;
MethodInfo m23345_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m11789_gshared, &t4116_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t4116_m23345_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23345_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t4116_m23346_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23346_GM;
MethodInfo m23346_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m11790_gshared, &t4116_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t4116_m23346_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23346_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t4116_m23347_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23347_GM;
MethodInfo m23347_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m11791_gshared, &t4116_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t4116_m23347_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23347_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t4116_m23348_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23348_GM;
MethodInfo m23348_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m11792_gshared, &t4116_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t4116_m23348_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23348_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t4116_m23349_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23349_GM;
MethodInfo m23349_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m11793_gshared, &t4116_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4116_m23349_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23349_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23350_GM;
MethodInfo m23350_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11794_gshared, &t4116_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23350_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23351_GM;
MethodInfo m23351_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11795_gshared, &t4116_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23351_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23352_GM;
MethodInfo m23352_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m11796_gshared, &t4116_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23352_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23353_GM;
MethodInfo m23353_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m11797_gshared, &t4116_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23353_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t4116_m23354_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23354_GM;
MethodInfo m23354_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m11798_gshared, &t4116_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t4116_m23354_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23354_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t4116_m23355_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23355_GM;
MethodInfo m23355_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m11799_gshared, &t4116_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t4116_m23355_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23355_GM};
extern Il2CppType t1885_0_0_0;
static ParameterInfo t4116_m23356_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23356_GM;
MethodInfo m23356_MI = 
{
	"Add", (methodPointerType)&m11800_gshared, &t4116_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4116_m23356_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23356_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23357_GM;
MethodInfo m23357_MI = 
{
	"Clear", (methodPointerType)&m11801_gshared, &t4116_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23357_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23358_GM;
MethodInfo m23358_MI = 
{
	"ClearItems", (methodPointerType)&m11802_gshared, &t4116_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23358_GM};
extern Il2CppType t1885_0_0_0;
static ParameterInfo t4116_m23359_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23359_GM;
MethodInfo m23359_MI = 
{
	"Contains", (methodPointerType)&m11803_gshared, &t4116_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t4116_m23359_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23359_GM};
extern Il2CppType t4107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t4116_m23360_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23360_GM;
MethodInfo m23360_MI = 
{
	"CopyTo", (methodPointerType)&m11804_gshared, &t4116_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t4116_m23360_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23360_GM};
extern Il2CppType t4109_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23361_GM;
MethodInfo m23361_MI = 
{
	"GetEnumerator", (methodPointerType)&m11805_gshared, &t4116_TI, &t4109_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23361_GM};
extern Il2CppType t1885_0_0_0;
static ParameterInfo t4116_m23362_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23362_GM;
MethodInfo m23362_MI = 
{
	"IndexOf", (methodPointerType)&m11806_gshared, &t4116_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t4116_m23362_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23362_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1885_0_0_0;
static ParameterInfo t4116_m23363_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23363_GM;
MethodInfo m23363_MI = 
{
	"Insert", (methodPointerType)&m11807_gshared, &t4116_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t4116_m23363_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23363_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1885_0_0_0;
static ParameterInfo t4116_m23364_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23364_GM;
MethodInfo m23364_MI = 
{
	"InsertItem", (methodPointerType)&m11808_gshared, &t4116_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t4116_m23364_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23364_GM};
extern Il2CppType t1885_0_0_0;
static ParameterInfo t4116_m23365_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23365_GM;
MethodInfo m23365_MI = 
{
	"Remove", (methodPointerType)&m11809_gshared, &t4116_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t4116_m23365_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23365_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t4116_m23366_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23366_GM;
MethodInfo m23366_MI = 
{
	"RemoveAt", (methodPointerType)&m11810_gshared, &t4116_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t4116_m23366_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23366_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t4116_m23367_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23367_GM;
MethodInfo m23367_MI = 
{
	"RemoveItem", (methodPointerType)&m11811_gshared, &t4116_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t4116_m23367_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23367_GM};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23368_GM;
MethodInfo m23368_MI = 
{
	"get_Count", (methodPointerType)&m11812_gshared, &t4116_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23368_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t4116_m23369_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1885_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23369_GM;
MethodInfo m23369_MI = 
{
	"get_Item", (methodPointerType)&m11813_gshared, &t4116_TI, &t1885_0_0_0, RuntimeInvoker_t5_t110, t4116_m23369_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23369_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1885_0_0_0;
static ParameterInfo t4116_m23370_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23370_GM;
MethodInfo m23370_MI = 
{
	"set_Item", (methodPointerType)&m11814_gshared, &t4116_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t4116_m23370_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23370_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1885_0_0_0;
static ParameterInfo t4116_m23371_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23371_GM;
MethodInfo m23371_MI = 
{
	"SetItem", (methodPointerType)&m11815_gshared, &t4116_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t4116_m23371_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23371_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t4116_m23372_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23372_GM;
MethodInfo m23372_MI = 
{
	"IsValidItem", (methodPointerType)&m11816_gshared, &t4116_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t4116_m23372_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23372_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t4116_m23373_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t1885_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23373_GM;
MethodInfo m23373_MI = 
{
	"ConvertItem", (methodPointerType)&m11817_gshared, &t4116_TI, &t1885_0_0_0, RuntimeInvoker_t5_t5, t4116_m23373_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23373_GM};
extern Il2CppType t1882_0_0_0;
static ParameterInfo t4116_m23374_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1882_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23374_GM;
MethodInfo m23374_MI = 
{
	"CheckWritable", (methodPointerType)&m11818_gshared, &t4116_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4116_m23374_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23374_GM};
extern Il2CppType t1882_0_0_0;
static ParameterInfo t4116_m23375_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1882_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23375_GM;
MethodInfo m23375_MI = 
{
	"IsSynchronized", (methodPointerType)&m11819_gshared, &t4116_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t4116_m23375_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23375_GM};
extern Il2CppType t1882_0_0_0;
static ParameterInfo t4116_m23376_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1882_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23376_GM;
MethodInfo m23376_MI = 
{
	"IsFixedSize", (methodPointerType)&m11820_gshared, &t4116_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t4116_m23376_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23376_GM};
static MethodInfo* t4116_MIs[] =
{
	&m23341_MI,
	&m23342_MI,
	&m23343_MI,
	&m23344_MI,
	&m23345_MI,
	&m23346_MI,
	&m23347_MI,
	&m23348_MI,
	&m23349_MI,
	&m23350_MI,
	&m23351_MI,
	&m23352_MI,
	&m23353_MI,
	&m23354_MI,
	&m23355_MI,
	&m23356_MI,
	&m23357_MI,
	&m23358_MI,
	&m23359_MI,
	&m23360_MI,
	&m23361_MI,
	&m23362_MI,
	&m23363_MI,
	&m23364_MI,
	&m23365_MI,
	&m23366_MI,
	&m23367_MI,
	&m23368_MI,
	&m23369_MI,
	&m23370_MI,
	&m23371_MI,
	&m23372_MI,
	&m23373_MI,
	&m23374_MI,
	&m23375_MI,
	&m23376_MI,
	NULL
};
extern MethodInfo m23344_MI;
extern MethodInfo m23343_MI;
extern MethodInfo m23345_MI;
extern MethodInfo m23357_MI;
extern MethodInfo m23346_MI;
extern MethodInfo m23347_MI;
extern MethodInfo m23348_MI;
extern MethodInfo m23349_MI;
extern MethodInfo m23366_MI;
extern MethodInfo m23356_MI;
extern MethodInfo m23359_MI;
extern MethodInfo m23360_MI;
extern MethodInfo m23365_MI;
extern MethodInfo m23363_MI;
extern MethodInfo m23361_MI;
static MethodInfo* t4116_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m23344_MI,
	&m23368_MI,
	&m23350_MI,
	&m23351_MI,
	&m23343_MI,
	&m23352_MI,
	&m23353_MI,
	&m23354_MI,
	&m23355_MI,
	&m23345_MI,
	&m23357_MI,
	&m23346_MI,
	&m23347_MI,
	&m23348_MI,
	&m23349_MI,
	&m23366_MI,
	&m23368_MI,
	&m23342_MI,
	&m23356_MI,
	&m23357_MI,
	&m23359_MI,
	&m23360_MI,
	&m23365_MI,
	&m23362_MI,
	&m23363_MI,
	&m23366_MI,
	&m23369_MI,
	&m23370_MI,
	&m23361_MI,
	&m23358_MI,
	&m23364_MI,
	&m23367_MI,
	&m23371_MI,
};
static TypeInfo* t4116_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t1129_TI,
	&t4110_TI,
	&t1882_TI,
	&t4108_TI,
};
static Il2CppInterfaceOffsetPair t4116_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
	{ &t4110_TI, 20},
	{ &t1882_TI, 27},
	{ &t4108_TI, 32},
};
extern TypeInfo t2402_TI;
extern TypeInfo t1885_TI;
static Il2CppRGCTXData t4116_RGCTXData[25] = 
{
	&t2402_TI/* Class Usage */,
	&m23255_MI/* Method Usage */,
	&m39597_MI/* Method Usage */,
	&m39603_MI/* Method Usage */,
	&m39596_MI/* Method Usage */,
	&m23373_MI/* Method Usage */,
	&m23364_MI/* Method Usage */,
	&m23372_MI/* Method Usage */,
	&t1885_TI/* Class Usage */,
	&m39600_MI/* Method Usage */,
	&m39593_MI/* Method Usage */,
	&m23374_MI/* Method Usage */,
	&m23362_MI/* Method Usage */,
	&m23367_MI/* Method Usage */,
	&m23375_MI/* Method Usage */,
	&m23376_MI/* Method Usage */,
	&m39591_MI/* Method Usage */,
	&m23371_MI/* Method Usage */,
	&m23358_MI/* Method Usage */,
	&m39599_MI/* Method Usage */,
	&m39601_MI/* Method Usage */,
	&m39594_MI/* Method Usage */,
	&m39595_MI/* Method Usage */,
	&m39592_MI/* Method Usage */,
	&t1885_0_0_0/* Type Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4116_0_0_0;
extern Il2CppType t4116_1_0_0;
struct t4116;
extern Il2CppGenericClass t4116_GC;
extern CustomAttributesCache t1525__CustomAttributeCache;
TypeInfo t4116_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t4116_MIs, t4116_PIs, t4116_FIs, NULL, &t5_TI, NULL, NULL, &t4116_TI, t4116_ITIs, t4116_VT, &t1525__CustomAttributeCache, &t4116_TI, &t4116_0_0_0, &t4116_1_0_0, t4116_IOs, &t4116_GC, NULL, NULL, NULL, t4116_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4116), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4117_TI;
#include "t4117MD.h"

#include "t1520.h"
#include "t4118.h"
extern TypeInfo t7719_TI;
extern TypeInfo t1520_TI;
extern TypeInfo t675_TI;
extern TypeInfo t4118_TI;
#include "t1196MD.h"
#include "t4118MD.h"
extern Il2CppType t7719_0_0_0;
extern Il2CppType t1520_0_0_0;
extern MethodInfo m3626_MI;
extern MethodInfo m3624_MI;
extern MethodInfo m10126_MI;
extern MethodInfo m23382_MI;
extern MethodInfo m39633_MI;
extern MethodInfo m30930_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.Security.Policy.StrongName>
extern Il2CppType t4117_0_0_49;
FieldInfo t4117_f0_FieldInfo = 
{
	"_default", &t4117_0_0_49, &t4117_TI, offsetof(t4117_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t4117_FIs[] =
{
	&t4117_f0_FieldInfo,
	NULL
};
extern MethodInfo m23381_MI;
static PropertyInfo t4117____Default_PropertyInfo = 
{
	&t4117_TI, "Default", &m23381_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4117_PIs[] =
{
	&t4117____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23377_GM;
MethodInfo m23377_MI = 
{
	".ctor", (methodPointerType)&m11821_gshared, &t4117_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23377_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23378_GM;
MethodInfo m23378_MI = 
{
	".cctor", (methodPointerType)&m11822_gshared, &t4117_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23378_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t4117_m23379_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23379_GM;
MethodInfo m23379_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m11823_gshared, &t4117_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t4117_m23379_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23379_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t4117_m23380_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23380_GM;
MethodInfo m23380_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m11824_gshared, &t4117_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t4117_m23380_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23380_GM};
extern Il2CppType t1885_0_0_0;
static ParameterInfo t4117_m39633_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39633_GM;
MethodInfo m39633_MI = 
{
	"GetHashCode", NULL, &t4117_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t4117_m39633_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39633_GM};
extern Il2CppType t1885_0_0_0;
extern Il2CppType t1885_0_0_0;
static ParameterInfo t4117_m30930_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m30930_GM;
MethodInfo m30930_MI = 
{
	"Equals", NULL, &t4117_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t4117_m30930_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m30930_GM};
extern Il2CppType t4117_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23381_GM;
MethodInfo m23381_MI = 
{
	"get_Default", (methodPointerType)&m11825_gshared, &t4117_TI, &t4117_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23381_GM};
static MethodInfo* t4117_MIs[] =
{
	&m23377_MI,
	&m23378_MI,
	&m23379_MI,
	&m23380_MI,
	&m39633_MI,
	&m30930_MI,
	&m23381_MI,
	NULL
};
extern MethodInfo m23380_MI;
extern MethodInfo m23379_MI;
static MethodInfo* t4117_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m30930_MI,
	&m39633_MI,
	&m23380_MI,
	&m23379_MI,
	NULL,
	NULL,
};
extern TypeInfo t7720_TI;
extern TypeInfo t998_TI;
static TypeInfo* t4117_ITIs[] = 
{
	&t7720_TI,
	&t998_TI,
};
static Il2CppInterfaceOffsetPair t4117_IOs[] = 
{
	{ &t7720_TI, 4},
	{ &t998_TI, 6},
};
extern TypeInfo t4117_TI;
extern TypeInfo t4117_TI;
extern TypeInfo t4118_TI;
extern TypeInfo t1885_TI;
static Il2CppRGCTXData t4117_RGCTXData[9] = 
{
	&t7719_0_0_0/* Type Usage */,
	&t1885_0_0_0/* Type Usage */,
	&t4117_TI/* Class Usage */,
	&t4117_TI/* Static Usage */,
	&t4118_TI/* Class Usage */,
	&m23382_MI/* Method Usage */,
	&t1885_TI/* Class Usage */,
	&m39633_MI/* Method Usage */,
	&m30930_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4117_0_0_0;
extern Il2CppType t4117_1_0_0;
struct t4117;
extern Il2CppGenericClass t4117_GC;
TypeInfo t4117_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t4117_MIs, t4117_PIs, t4117_FIs, NULL, &t5_TI, NULL, NULL, &t4117_TI, t4117_ITIs, t4117_VT, &EmptyCustomAttributesCache, &t4117_TI, &t4117_0_0_0, &t4117_1_0_0, t4117_IOs, &t4117_GC, NULL, NULL, NULL, t4117_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4117), 0, -1, sizeof(t4117_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.Security.Policy.StrongName>
extern Il2CppType t1885_0_0_0;
extern Il2CppType t1885_0_0_0;
static ParameterInfo t7720_m39634_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39634_GM;
MethodInfo m39634_MI = 
{
	"Equals", NULL, &t7720_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t7720_m39634_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39634_GM};
extern Il2CppType t1885_0_0_0;
static ParameterInfo t7720_m39635_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39635_GM;
MethodInfo m39635_MI = 
{
	"GetHashCode", NULL, &t7720_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7720_m39635_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39635_GM};
static MethodInfo* t7720_MIs[] =
{
	&m39634_MI,
	&m39635_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7720_0_0_0;
extern Il2CppType t7720_1_0_0;
struct t7720;
extern Il2CppGenericClass t7720_GC;
TypeInfo t7720_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t7720_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7720_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7720_TI, &t7720_0_0_0, &t7720_1_0_0, NULL, &t7720_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.IEquatable`1<System.Security.Policy.StrongName>
extern Il2CppType t1885_0_0_0;
static ParameterInfo t7719_m39636_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39636_GM;
MethodInfo m39636_MI = 
{
	"Equals", NULL, &t7719_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7719_m39636_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39636_GM};
static MethodInfo* t7719_MIs[] =
{
	&m39636_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7719_1_0_0;
struct t7719;
extern Il2CppGenericClass t7719_GC;
TypeInfo t7719_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t7719_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7719_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7719_TI, &t7719_0_0_0, &t7719_1_0_0, NULL, &t7719_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m23377_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Security.Policy.StrongName>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23382_GM;
MethodInfo m23382_MI = 
{
	".ctor", (methodPointerType)&m11856_gshared, &t4118_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23382_GM};
extern Il2CppType t1885_0_0_0;
static ParameterInfo t4118_m23383_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23383_GM;
MethodInfo m23383_MI = 
{
	"GetHashCode", (methodPointerType)&m11857_gshared, &t4118_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t4118_m23383_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23383_GM};
extern Il2CppType t1885_0_0_0;
extern Il2CppType t1885_0_0_0;
static ParameterInfo t4118_m23384_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23384_GM;
MethodInfo m23384_MI = 
{
	"Equals", (methodPointerType)&m11858_gshared, &t4118_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t4118_m23384_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23384_GM};
static MethodInfo* t4118_MIs[] =
{
	&m23382_MI,
	&m23383_MI,
	&m23384_MI,
	NULL
};
extern MethodInfo m23384_MI;
extern MethodInfo m23383_MI;
static MethodInfo* t4118_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m23384_MI,
	&m23383_MI,
	&m23380_MI,
	&m23379_MI,
	&m23383_MI,
	&m23384_MI,
};
static Il2CppInterfaceOffsetPair t4118_IOs[] = 
{
	{ &t7720_TI, 4},
	{ &t998_TI, 6},
};
extern TypeInfo t4117_TI;
extern TypeInfo t4117_TI;
extern TypeInfo t4118_TI;
extern TypeInfo t1885_TI;
extern TypeInfo t1885_TI;
static Il2CppRGCTXData t4118_RGCTXData[11] = 
{
	&t7719_0_0_0/* Type Usage */,
	&t1885_0_0_0/* Type Usage */,
	&t4117_TI/* Class Usage */,
	&t4117_TI/* Static Usage */,
	&t4118_TI/* Class Usage */,
	&m23382_MI/* Method Usage */,
	&t1885_TI/* Class Usage */,
	&m39633_MI/* Method Usage */,
	&m30930_MI/* Method Usage */,
	&m23377_MI/* Method Usage */,
	&t1885_TI/* Class Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4118_0_0_0;
extern Il2CppType t4118_1_0_0;
struct t4118;
extern Il2CppGenericClass t4118_GC;
extern TypeInfo t1519_TI;
TypeInfo t4118_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t4118_MIs, NULL, NULL, NULL, &t4117_TI, NULL, &t1519_TI, &t4118_TI, NULL, t4118_VT, &EmptyCustomAttributesCache, &t4118_TI, &t4118_0_0_0, &t4118_1_0_0, t4118_IOs, &t4118_GC, NULL, NULL, NULL, t4118_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4118), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif

#include "t124.h"
#include "t222.h"


// Metadata Definition System.Predicate`1<System.Security.Policy.StrongName>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t4112_m23385_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23385_GM;
MethodInfo m23385_MI = 
{
	".ctor", (methodPointerType)&m11859_gshared, &t4112_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t4112_m23385_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23385_GM};
extern Il2CppType t1885_0_0_0;
static ParameterInfo t4112_m23386_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23386_GM;
MethodInfo m23386_MI = 
{
	"Invoke", (methodPointerType)&m11860_gshared, &t4112_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t4112_m23386_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23386_GM};
extern Il2CppType t1885_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t4112_m23387_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23387_GM;
MethodInfo m23387_MI = 
{
	"BeginInvoke", (methodPointerType)&m11861_gshared, &t4112_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t4112_m23387_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m23387_GM};
extern Il2CppType t221_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t4112_m23388_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23388_GM;
MethodInfo m23388_MI = 
{
	"EndInvoke", (methodPointerType)&m11862_gshared, &t4112_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t4112_m23388_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23388_GM};
static MethodInfo* t4112_MIs[] =
{
	&m23385_MI,
	&m23386_MI,
	&m23387_MI,
	&m23388_MI,
	NULL
};
extern MethodInfo m2341_MI;
extern MethodInfo m2342_MI;
extern MethodInfo m2343_MI;
extern MethodInfo m2344_MI;
extern MethodInfo m2345_MI;
extern MethodInfo m2346_MI;
extern MethodInfo m2347_MI;
extern MethodInfo m23387_MI;
extern MethodInfo m23388_MI;
static MethodInfo* t4112_VT[] =
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
	&m23386_MI,
	&m23387_MI,
	&m23388_MI,
};
extern TypeInfo t516_TI;
extern TypeInfo t517_TI;
static Il2CppInterfaceOffsetPair t4112_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4112_1_0_0;
extern TypeInfo t353_TI;
struct t4112;
extern Il2CppGenericClass t4112_GC;
TypeInfo t4112_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t4112_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t4112_TI, NULL, t4112_VT, &EmptyCustomAttributesCache, &t4112_TI, &t4112_0_0_0, &t4112_1_0_0, t4112_IOs, &t4112_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4112), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Action`1<System.Security.Policy.StrongName>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t4113_m23389_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23389_GM;
MethodInfo m23389_MI = 
{
	".ctor", (methodPointerType)&m11863_gshared, &t4113_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t4113_m23389_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23389_GM};
extern Il2CppType t1885_0_0_0;
static ParameterInfo t4113_m23390_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23390_GM;
MethodInfo m23390_MI = 
{
	"Invoke", (methodPointerType)&m11864_gshared, &t4113_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4113_m23390_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23390_GM};
extern Il2CppType t1885_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t4113_m23391_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23391_GM;
MethodInfo m23391_MI = 
{
	"BeginInvoke", (methodPointerType)&m11865_gshared, &t4113_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t4113_m23391_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL, &m23391_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t4113_m23392_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23392_GM;
MethodInfo m23392_MI = 
{
	"EndInvoke", (methodPointerType)&m11866_gshared, &t4113_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4113_m23392_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23392_GM};
static MethodInfo* t4113_MIs[] =
{
	&m23389_MI,
	&m23390_MI,
	&m23391_MI,
	&m23392_MI,
	NULL
};
extern MethodInfo m23391_MI;
extern MethodInfo m23392_MI;
static MethodInfo* t4113_VT[] =
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
	&m23390_MI,
	&m23391_MI,
	&m23392_MI,
};
static Il2CppInterfaceOffsetPair t4113_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4113_1_0_0;
struct t4113;
extern Il2CppGenericClass t4113_GC;
TypeInfo t4113_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Action`1", "System", t4113_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t4113_TI, NULL, t4113_VT, &EmptyCustomAttributesCache, &t4113_TI, &t4113_0_0_0, &t4113_1_0_0, t4113_IOs, &t4113_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4113), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif

#include "t1510.h"
#include "t4120.h"
extern TypeInfo t5810_TI;
extern TypeInfo t1510_TI;
extern TypeInfo t4120_TI;
#include "t4120MD.h"
extern Il2CppType t5810_0_0_0;
extern Il2CppType t1510_0_0_0;
extern MethodInfo m23397_MI;
extern MethodInfo m39637_MI;
extern MethodInfo m10152_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<System.Security.Policy.StrongName>
extern Il2CppType t4119_0_0_49;
FieldInfo t4119_f0_FieldInfo = 
{
	"_default", &t4119_0_0_49, &t4119_TI, offsetof(t4119_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t4119_FIs[] =
{
	&t4119_f0_FieldInfo,
	NULL
};
static PropertyInfo t4119____Default_PropertyInfo = 
{
	&t4119_TI, "Default", &m23396_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4119_PIs[] =
{
	&t4119____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23393_GM;
MethodInfo m23393_MI = 
{
	".ctor", (methodPointerType)&m11867_gshared, &t4119_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23393_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23394_GM;
MethodInfo m23394_MI = 
{
	".cctor", (methodPointerType)&m11868_gshared, &t4119_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23394_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t4119_m23395_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23395_GM;
MethodInfo m23395_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m11869_gshared, &t4119_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t4119_m23395_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23395_GM};
extern Il2CppType t1885_0_0_0;
extern Il2CppType t1885_0_0_0;
static ParameterInfo t4119_m39637_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39637_GM;
MethodInfo m39637_MI = 
{
	"Compare", NULL, &t4119_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t4119_m39637_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39637_GM};
extern Il2CppType t4119_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23396_GM;
MethodInfo m23396_MI = 
{
	"get_Default", (methodPointerType)&m11870_gshared, &t4119_TI, &t4119_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23396_GM};
static MethodInfo* t4119_MIs[] =
{
	&m23393_MI,
	&m23394_MI,
	&m23395_MI,
	&m39637_MI,
	&m23396_MI,
	NULL
};
extern MethodInfo m23395_MI;
static MethodInfo* t4119_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m39637_MI,
	&m23395_MI,
	NULL,
};
extern TypeInfo t5809_TI;
extern TypeInfo t991_TI;
static TypeInfo* t4119_ITIs[] = 
{
	&t5809_TI,
	&t991_TI,
};
static Il2CppInterfaceOffsetPair t4119_IOs[] = 
{
	{ &t5809_TI, 4},
	{ &t991_TI, 5},
};
extern TypeInfo t4119_TI;
extern TypeInfo t4119_TI;
extern TypeInfo t4120_TI;
extern TypeInfo t1885_TI;
static Il2CppRGCTXData t4119_RGCTXData[8] = 
{
	&t5810_0_0_0/* Type Usage */,
	&t1885_0_0_0/* Type Usage */,
	&t4119_TI/* Class Usage */,
	&t4119_TI/* Static Usage */,
	&t4120_TI/* Class Usage */,
	&m23397_MI/* Method Usage */,
	&t1885_TI/* Class Usage */,
	&m39637_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4119_0_0_0;
extern Il2CppType t4119_1_0_0;
struct t4119;
extern Il2CppGenericClass t4119_GC;
TypeInfo t4119_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t4119_MIs, t4119_PIs, t4119_FIs, NULL, &t5_TI, NULL, NULL, &t4119_TI, t4119_ITIs, t4119_VT, &EmptyCustomAttributesCache, &t4119_TI, &t4119_0_0_0, &t4119_1_0_0, t4119_IOs, &t4119_GC, NULL, NULL, NULL, t4119_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4119), 0, -1, sizeof(t4119_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IComparer`1<System.Security.Policy.StrongName>
extern Il2CppType t1885_0_0_0;
extern Il2CppType t1885_0_0_0;
static ParameterInfo t5809_m30938_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m30938_GM;
MethodInfo m30938_MI = 
{
	"Compare", NULL, &t5809_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t5809_m30938_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m30938_GM};
static MethodInfo* t5809_MIs[] =
{
	&m30938_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5809_0_0_0;
extern Il2CppType t5809_1_0_0;
struct t5809;
extern Il2CppGenericClass t5809_GC;
TypeInfo t5809_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t5809_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5809_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5809_TI, &t5809_0_0_0, &t5809_1_0_0, NULL, &t5809_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.IComparable`1<System.Security.Policy.StrongName>
extern Il2CppType t1885_0_0_0;
static ParameterInfo t5810_m30939_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m30939_GM;
MethodInfo m30939_MI = 
{
	"CompareTo", NULL, &t5810_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t5810_m30939_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m30939_GM};
static MethodInfo* t5810_MIs[] =
{
	&m30939_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5810_1_0_0;
struct t5810;
extern Il2CppGenericClass t5810_GC;
TypeInfo t5810_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t5810_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5810_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5810_TI, &t5810_0_0_0, &t5810_1_0_0, NULL, &t5810_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t122_TI;
extern MethodInfo m23393_MI;
extern MethodInfo m30939_MI;
extern MethodInfo m11009_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.Security.Policy.StrongName>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23397_GM;
MethodInfo m23397_MI = 
{
	".ctor", (methodPointerType)&m11871_gshared, &t4120_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23397_GM};
extern Il2CppType t1885_0_0_0;
extern Il2CppType t1885_0_0_0;
static ParameterInfo t4120_m23398_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23398_GM;
MethodInfo m23398_MI = 
{
	"Compare", (methodPointerType)&m11872_gshared, &t4120_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t4120_m23398_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23398_GM};
static MethodInfo* t4120_MIs[] =
{
	&m23397_MI,
	&m23398_MI,
	NULL
};
extern MethodInfo m23398_MI;
static MethodInfo* t4120_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m23398_MI,
	&m23395_MI,
	&m23398_MI,
};
static Il2CppInterfaceOffsetPair t4120_IOs[] = 
{
	{ &t5809_TI, 4},
	{ &t991_TI, 5},
};
extern TypeInfo t4119_TI;
extern TypeInfo t4119_TI;
extern TypeInfo t4120_TI;
extern TypeInfo t1885_TI;
extern TypeInfo t1885_TI;
extern TypeInfo t5810_TI;
static Il2CppRGCTXData t4120_RGCTXData[12] = 
{
	&t5810_0_0_0/* Type Usage */,
	&t1885_0_0_0/* Type Usage */,
	&t4119_TI/* Class Usage */,
	&t4119_TI/* Static Usage */,
	&t4120_TI/* Class Usage */,
	&m23397_MI/* Method Usage */,
	&t1885_TI/* Class Usage */,
	&m39637_MI/* Method Usage */,
	&m23393_MI/* Method Usage */,
	&t1885_TI/* Class Usage */,
	&t5810_TI/* Class Usage */,
	&m30939_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4120_0_0_0;
extern Il2CppType t4120_1_0_0;
struct t4120;
extern Il2CppGenericClass t4120_GC;
extern TypeInfo t1509_TI;
TypeInfo t4120_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t4120_MIs, NULL, NULL, NULL, &t4119_TI, NULL, &t1509_TI, &t4120_TI, NULL, t4120_VT, &EmptyCustomAttributesCache, &t4120_TI, &t4120_0_0_0, &t4120_1_0_0, t4120_IOs, &t4120_GC, NULL, NULL, NULL, t4120_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4120), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4114_TI;
#include "t4114MD.h"



// Metadata Definition System.Comparison`1<System.Security.Policy.StrongName>
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t4114_m23399_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23399_GM;
MethodInfo m23399_MI = 
{
	".ctor", (methodPointerType)&m11938_gshared, &t4114_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t4114_m23399_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23399_GM};
extern Il2CppType t1885_0_0_0;
extern Il2CppType t1885_0_0_0;
static ParameterInfo t4114_m23400_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23400_GM;
MethodInfo m23400_MI = 
{
	"Invoke", (methodPointerType)&m11939_gshared, &t4114_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t4114_m23400_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23400_GM};
extern Il2CppType t1885_0_0_0;
extern Il2CppType t1885_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t4114_m23401_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23401_GM;
MethodInfo m23401_MI = 
{
	"BeginInvoke", (methodPointerType)&m11940_gshared, &t4114_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5_t5, t4114_m23401_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL, &m23401_GM};
extern Il2CppType t221_0_0_0;
static ParameterInfo t4114_m23402_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23402_GM;
MethodInfo m23402_MI = 
{
	"EndInvoke", (methodPointerType)&m11941_gshared, &t4114_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t4114_m23402_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23402_GM};
static MethodInfo* t4114_MIs[] =
{
	&m23399_MI,
	&m23400_MI,
	&m23401_MI,
	&m23402_MI,
	NULL
};
extern MethodInfo m23400_MI;
extern MethodInfo m23401_MI;
extern MethodInfo m23402_MI;
static MethodInfo* t4114_VT[] =
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
	&m23400_MI,
	&m23401_MI,
	&m23402_MI,
};
static Il2CppInterfaceOffsetPair t4114_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4114_1_0_0;
struct t4114;
extern Il2CppGenericClass t4114_GC;
TypeInfo t4114_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t4114_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t4114_TI, NULL, t4114_VT, &EmptyCustomAttributesCache, &t4114_TI, &t4114_0_0_0, &t4114_1_0_0, t4114_IOs, &t4114_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4114), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5812_TI;

#include "t1886.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Principal.PrincipalPolicy>
extern MethodInfo m39638_MI;
static PropertyInfo t5812____Current_PropertyInfo = 
{
	&t5812_TI, "Current", &m39638_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5812_PIs[] =
{
	&t5812____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1886_0_0_0;
extern void* RuntimeInvoker_t1886 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39638_GM;
MethodInfo m39638_MI = 
{
	"get_Current", NULL, &t5812_TI, &t1886_0_0_0, RuntimeInvoker_t1886, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39638_GM};
static MethodInfo* t5812_MIs[] =
{
	&m39638_MI,
	NULL
};
static TypeInfo* t5812_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5812_0_0_0;
extern Il2CppType t5812_1_0_0;
struct t5812;
extern Il2CppGenericClass t5812_GC;
TypeInfo t5812_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5812_MIs, t5812_PIs, NULL, NULL, NULL, NULL, NULL, &t5812_TI, t5812_ITIs, NULL, &EmptyCustomAttributesCache, &t5812_TI, &t5812_0_0_0, &t5812_1_0_0, NULL, &t5812_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4121.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4121_TI;
#include "t4121MD.h"

extern TypeInfo t1886_TI;
extern MethodInfo m23407_MI;
extern MethodInfo m30944_MI;
struct t107;
 int32_t m30944 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m23403_MI;
 void m23403 (t4121 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23404_MI;
 t5 * m23404 (t4121 * __this, MethodInfo* method){
	{
		int32_t L_0 = m23407(__this, &m23407_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1886_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m23405_MI;
 void m23405 (t4121 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23406_MI;
 bool m23406 (t4121 * __this, MethodInfo* method){
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
 int32_t m23407 (t4121 * __this, MethodInfo* method){
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
		int32_t L_8 = m30944(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m30944_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Principal.PrincipalPolicy>
extern Il2CppType t107_0_0_1;
FieldInfo t4121_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4121_TI, offsetof(t4121, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4121_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4121_TI, offsetof(t4121, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4121_FIs[] =
{
	&t4121_f0_FieldInfo,
	&t4121_f1_FieldInfo,
	NULL
};
static PropertyInfo t4121____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4121_TI, "System.Collections.IEnumerator.Current", &m23404_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4121____Current_PropertyInfo = 
{
	&t4121_TI, "Current", &m23407_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4121_PIs[] =
{
	&t4121____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4121____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4121_m23403_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23403_GM;
MethodInfo m23403_MI = 
{
	".ctor", (methodPointerType)&m23403, &t4121_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4121_m23403_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23403_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23404_GM;
MethodInfo m23404_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m23404, &t4121_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23404_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23405_GM;
MethodInfo m23405_MI = 
{
	"Dispose", (methodPointerType)&m23405, &t4121_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23405_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23406_GM;
MethodInfo m23406_MI = 
{
	"MoveNext", (methodPointerType)&m23406, &t4121_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23406_GM};
extern Il2CppType t1886_0_0_0;
extern void* RuntimeInvoker_t1886 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23407_GM;
MethodInfo m23407_MI = 
{
	"get_Current", (methodPointerType)&m23407, &t4121_TI, &t1886_0_0_0, RuntimeInvoker_t1886, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23407_GM};
static MethodInfo* t4121_MIs[] =
{
	&m23403_MI,
	&m23404_MI,
	&m23405_MI,
	&m23406_MI,
	&m23407_MI,
	NULL
};
static MethodInfo* t4121_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m23404_MI,
	&m23406_MI,
	&m23405_MI,
	&m23407_MI,
};
static TypeInfo* t4121_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5812_TI,
};
static Il2CppInterfaceOffsetPair t4121_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5812_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4121_0_0_0;
extern Il2CppType t4121_1_0_0;
extern Il2CppGenericClass t4121_GC;
TypeInfo t4121_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4121_MIs, t4121_PIs, t4121_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4121_TI, t4121_ITIs, t4121_VT, &EmptyCustomAttributesCache, &t4121_TI, &t4121_0_0_0, &t4121_1_0_0, t4121_IOs, &t4121_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4121)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7476_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Principal.PrincipalPolicy>
extern MethodInfo m39639_MI;
static PropertyInfo t7476____Count_PropertyInfo = 
{
	&t7476_TI, "Count", &m39639_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39640_MI;
static PropertyInfo t7476____IsReadOnly_PropertyInfo = 
{
	&t7476_TI, "IsReadOnly", &m39640_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7476_PIs[] =
{
	&t7476____Count_PropertyInfo,
	&t7476____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39639_GM;
MethodInfo m39639_MI = 
{
	"get_Count", NULL, &t7476_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39639_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39640_GM;
MethodInfo m39640_MI = 
{
	"get_IsReadOnly", NULL, &t7476_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39640_GM};
extern Il2CppType t1886_0_0_0;
extern Il2CppType t1886_0_0_0;
static ParameterInfo t7476_m39641_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1886_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39641_GM;
MethodInfo m39641_MI = 
{
	"Add", NULL, &t7476_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7476_m39641_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39641_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39642_GM;
MethodInfo m39642_MI = 
{
	"Clear", NULL, &t7476_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39642_GM};
extern Il2CppType t1886_0_0_0;
static ParameterInfo t7476_m39643_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1886_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39643_GM;
MethodInfo m39643_MI = 
{
	"Contains", NULL, &t7476_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7476_m39643_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39643_GM};
extern Il2CppType t4363_0_0_0;
extern Il2CppType t4363_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7476_m39644_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4363_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39644_GM;
MethodInfo m39644_MI = 
{
	"CopyTo", NULL, &t7476_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7476_m39644_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39644_GM};
extern Il2CppType t1886_0_0_0;
static ParameterInfo t7476_m39645_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1886_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39645_GM;
MethodInfo m39645_MI = 
{
	"Remove", NULL, &t7476_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7476_m39645_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39645_GM};
static MethodInfo* t7476_MIs[] =
{
	&m39639_MI,
	&m39640_MI,
	&m39641_MI,
	&m39642_MI,
	&m39643_MI,
	&m39644_MI,
	&m39645_MI,
	NULL
};
extern TypeInfo t7478_TI;
static TypeInfo* t7476_ITIs[] = 
{
	&t739_TI,
	&t7478_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7476_0_0_0;
extern Il2CppType t7476_1_0_0;
struct t7476;
extern Il2CppGenericClass t7476_GC;
TypeInfo t7476_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7476_MIs, t7476_PIs, NULL, NULL, NULL, NULL, NULL, &t7476_TI, t7476_ITIs, NULL, &EmptyCustomAttributesCache, &t7476_TI, &t7476_0_0_0, &t7476_1_0_0, NULL, &t7476_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Principal.PrincipalPolicy>
extern Il2CppType t5812_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39646_GM;
MethodInfo m39646_MI = 
{
	"GetEnumerator", NULL, &t7478_TI, &t5812_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39646_GM};
static MethodInfo* t7478_MIs[] =
{
	&m39646_MI,
	NULL
};
static TypeInfo* t7478_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7478_0_0_0;
extern Il2CppType t7478_1_0_0;
struct t7478;
extern Il2CppGenericClass t7478_GC;
TypeInfo t7478_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7478_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7478_TI, t7478_ITIs, NULL, &EmptyCustomAttributesCache, &t7478_TI, &t7478_0_0_0, &t7478_1_0_0, NULL, &t7478_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7477_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Principal.PrincipalPolicy>
extern MethodInfo m39647_MI;
extern MethodInfo m39648_MI;
static PropertyInfo t7477____Item_PropertyInfo = 
{
	&t7477_TI, "Item", &m39647_MI, &m39648_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7477_PIs[] =
{
	&t7477____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1886_0_0_0;
static ParameterInfo t7477_m39649_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1886_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39649_GM;
MethodInfo m39649_MI = 
{
	"IndexOf", NULL, &t7477_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t7477_m39649_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39649_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1886_0_0_0;
static ParameterInfo t7477_m39650_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1886_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39650_GM;
MethodInfo m39650_MI = 
{
	"Insert", NULL, &t7477_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7477_m39650_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39650_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7477_m39651_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39651_GM;
MethodInfo m39651_MI = 
{
	"RemoveAt", NULL, &t7477_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7477_m39651_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39651_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7477_m39647_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1886_0_0_0;
extern void* RuntimeInvoker_t1886_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39647_GM;
MethodInfo m39647_MI = 
{
	"get_Item", NULL, &t7477_TI, &t1886_0_0_0, RuntimeInvoker_t1886_t110, t7477_m39647_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39647_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1886_0_0_0;
static ParameterInfo t7477_m39648_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1886_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39648_GM;
MethodInfo m39648_MI = 
{
	"set_Item", NULL, &t7477_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7477_m39648_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39648_GM};
static MethodInfo* t7477_MIs[] =
{
	&m39649_MI,
	&m39650_MI,
	&m39651_MI,
	&m39647_MI,
	&m39648_MI,
	NULL
};
static TypeInfo* t7477_ITIs[] = 
{
	&t739_TI,
	&t7476_TI,
	&t7478_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7477_0_0_0;
extern Il2CppType t7477_1_0_0;
struct t7477;
extern Il2CppGenericClass t7477_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7477_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7477_MIs, t7477_PIs, NULL, NULL, NULL, NULL, NULL, &t7477_TI, t7477_ITIs, NULL, &t2240__CustomAttributeCache, &t7477_TI, &t7477_0_0_0, &t7477_1_0_0, NULL, &t7477_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5814_TI;

#include "t1887.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Principal.WindowsAccountType>
extern MethodInfo m39652_MI;
static PropertyInfo t5814____Current_PropertyInfo = 
{
	&t5814_TI, "Current", &m39652_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5814_PIs[] =
{
	&t5814____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1887_0_0_0;
extern void* RuntimeInvoker_t1887 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39652_GM;
MethodInfo m39652_MI = 
{
	"get_Current", NULL, &t5814_TI, &t1887_0_0_0, RuntimeInvoker_t1887, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39652_GM};
static MethodInfo* t5814_MIs[] =
{
	&m39652_MI,
	NULL
};
static TypeInfo* t5814_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5814_0_0_0;
extern Il2CppType t5814_1_0_0;
struct t5814;
extern Il2CppGenericClass t5814_GC;
TypeInfo t5814_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5814_MIs, t5814_PIs, NULL, NULL, NULL, NULL, NULL, &t5814_TI, t5814_ITIs, NULL, &EmptyCustomAttributesCache, &t5814_TI, &t5814_0_0_0, &t5814_1_0_0, NULL, &t5814_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4122.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4122_TI;
#include "t4122MD.h"

extern TypeInfo t1887_TI;
extern MethodInfo m23412_MI;
extern MethodInfo m30955_MI;
struct t107;
 int32_t m30955 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m23408_MI;
 void m23408 (t4122 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23409_MI;
 t5 * m23409 (t4122 * __this, MethodInfo* method){
	{
		int32_t L_0 = m23412(__this, &m23412_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1887_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m23410_MI;
 void m23410 (t4122 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23411_MI;
 bool m23411 (t4122 * __this, MethodInfo* method){
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
 int32_t m23412 (t4122 * __this, MethodInfo* method){
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
		int32_t L_8 = m30955(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m30955_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>
extern Il2CppType t107_0_0_1;
FieldInfo t4122_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4122_TI, offsetof(t4122, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4122_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4122_TI, offsetof(t4122, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4122_FIs[] =
{
	&t4122_f0_FieldInfo,
	&t4122_f1_FieldInfo,
	NULL
};
static PropertyInfo t4122____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4122_TI, "System.Collections.IEnumerator.Current", &m23409_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4122____Current_PropertyInfo = 
{
	&t4122_TI, "Current", &m23412_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4122_PIs[] =
{
	&t4122____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4122____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4122_m23408_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23408_GM;
MethodInfo m23408_MI = 
{
	".ctor", (methodPointerType)&m23408, &t4122_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4122_m23408_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23408_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23409_GM;
MethodInfo m23409_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m23409, &t4122_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23409_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23410_GM;
MethodInfo m23410_MI = 
{
	"Dispose", (methodPointerType)&m23410, &t4122_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23410_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23411_GM;
MethodInfo m23411_MI = 
{
	"MoveNext", (methodPointerType)&m23411, &t4122_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23411_GM};
extern Il2CppType t1887_0_0_0;
extern void* RuntimeInvoker_t1887 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23412_GM;
MethodInfo m23412_MI = 
{
	"get_Current", (methodPointerType)&m23412, &t4122_TI, &t1887_0_0_0, RuntimeInvoker_t1887, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23412_GM};
static MethodInfo* t4122_MIs[] =
{
	&m23408_MI,
	&m23409_MI,
	&m23410_MI,
	&m23411_MI,
	&m23412_MI,
	NULL
};
static MethodInfo* t4122_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m23409_MI,
	&m23411_MI,
	&m23410_MI,
	&m23412_MI,
};
static TypeInfo* t4122_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5814_TI,
};
static Il2CppInterfaceOffsetPair t4122_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5814_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4122_0_0_0;
extern Il2CppType t4122_1_0_0;
extern Il2CppGenericClass t4122_GC;
TypeInfo t4122_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4122_MIs, t4122_PIs, t4122_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4122_TI, t4122_ITIs, t4122_VT, &EmptyCustomAttributesCache, &t4122_TI, &t4122_0_0_0, &t4122_1_0_0, t4122_IOs, &t4122_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4122)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7479_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>
extern MethodInfo m39653_MI;
static PropertyInfo t7479____Count_PropertyInfo = 
{
	&t7479_TI, "Count", &m39653_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39654_MI;
static PropertyInfo t7479____IsReadOnly_PropertyInfo = 
{
	&t7479_TI, "IsReadOnly", &m39654_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7479_PIs[] =
{
	&t7479____Count_PropertyInfo,
	&t7479____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39653_GM;
MethodInfo m39653_MI = 
{
	"get_Count", NULL, &t7479_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39653_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39654_GM;
MethodInfo m39654_MI = 
{
	"get_IsReadOnly", NULL, &t7479_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39654_GM};
extern Il2CppType t1887_0_0_0;
extern Il2CppType t1887_0_0_0;
static ParameterInfo t7479_m39655_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1887_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39655_GM;
MethodInfo m39655_MI = 
{
	"Add", NULL, &t7479_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7479_m39655_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39655_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39656_GM;
MethodInfo m39656_MI = 
{
	"Clear", NULL, &t7479_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39656_GM};
extern Il2CppType t1887_0_0_0;
static ParameterInfo t7479_m39657_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1887_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39657_GM;
MethodInfo m39657_MI = 
{
	"Contains", NULL, &t7479_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7479_m39657_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39657_GM};
extern Il2CppType t4364_0_0_0;
extern Il2CppType t4364_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7479_m39658_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4364_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39658_GM;
MethodInfo m39658_MI = 
{
	"CopyTo", NULL, &t7479_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7479_m39658_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39658_GM};
extern Il2CppType t1887_0_0_0;
static ParameterInfo t7479_m39659_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1887_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39659_GM;
MethodInfo m39659_MI = 
{
	"Remove", NULL, &t7479_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7479_m39659_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39659_GM};
static MethodInfo* t7479_MIs[] =
{
	&m39653_MI,
	&m39654_MI,
	&m39655_MI,
	&m39656_MI,
	&m39657_MI,
	&m39658_MI,
	&m39659_MI,
	NULL
};
extern TypeInfo t7481_TI;
static TypeInfo* t7479_ITIs[] = 
{
	&t739_TI,
	&t7481_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7479_0_0_0;
extern Il2CppType t7479_1_0_0;
struct t7479;
extern Il2CppGenericClass t7479_GC;
TypeInfo t7479_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7479_MIs, t7479_PIs, NULL, NULL, NULL, NULL, NULL, &t7479_TI, t7479_ITIs, NULL, &EmptyCustomAttributesCache, &t7479_TI, &t7479_0_0_0, &t7479_1_0_0, NULL, &t7479_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Principal.WindowsAccountType>
extern Il2CppType t5814_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39660_GM;
MethodInfo m39660_MI = 
{
	"GetEnumerator", NULL, &t7481_TI, &t5814_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39660_GM};
static MethodInfo* t7481_MIs[] =
{
	&m39660_MI,
	NULL
};
static TypeInfo* t7481_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7481_0_0_0;
extern Il2CppType t7481_1_0_0;
struct t7481;
extern Il2CppGenericClass t7481_GC;
TypeInfo t7481_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7481_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7481_TI, t7481_ITIs, NULL, &EmptyCustomAttributesCache, &t7481_TI, &t7481_0_0_0, &t7481_1_0_0, NULL, &t7481_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7480_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Principal.WindowsAccountType>
extern MethodInfo m39661_MI;
extern MethodInfo m39662_MI;
static PropertyInfo t7480____Item_PropertyInfo = 
{
	&t7480_TI, "Item", &m39661_MI, &m39662_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7480_PIs[] =
{
	&t7480____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1887_0_0_0;
static ParameterInfo t7480_m39663_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1887_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39663_GM;
MethodInfo m39663_MI = 
{
	"IndexOf", NULL, &t7480_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t7480_m39663_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39663_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1887_0_0_0;
static ParameterInfo t7480_m39664_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1887_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39664_GM;
MethodInfo m39664_MI = 
{
	"Insert", NULL, &t7480_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7480_m39664_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39664_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7480_m39665_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39665_GM;
MethodInfo m39665_MI = 
{
	"RemoveAt", NULL, &t7480_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7480_m39665_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39665_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7480_m39661_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1887_0_0_0;
extern void* RuntimeInvoker_t1887_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39661_GM;
MethodInfo m39661_MI = 
{
	"get_Item", NULL, &t7480_TI, &t1887_0_0_0, RuntimeInvoker_t1887_t110, t7480_m39661_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39661_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1887_0_0_0;
static ParameterInfo t7480_m39662_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1887_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39662_GM;
MethodInfo m39662_MI = 
{
	"set_Item", NULL, &t7480_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7480_m39662_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39662_GM};
static MethodInfo* t7480_MIs[] =
{
	&m39663_MI,
	&m39664_MI,
	&m39665_MI,
	&m39661_MI,
	&m39662_MI,
	NULL
};
static TypeInfo* t7480_ITIs[] = 
{
	&t739_TI,
	&t7479_TI,
	&t7481_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7480_0_0_0;
extern Il2CppType t7480_1_0_0;
struct t7480;
extern Il2CppGenericClass t7480_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7480_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7480_MIs, t7480_PIs, NULL, NULL, NULL, NULL, NULL, &t7480_TI, t7480_ITIs, NULL, &t2240__CustomAttributeCache, &t7480_TI, &t7480_0_0_0, &t7480_1_0_0, NULL, &t7480_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5816_TI;

#include "t742.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.SecurityCriticalAttribute>
extern MethodInfo m39666_MI;
static PropertyInfo t5816____Current_PropertyInfo = 
{
	&t5816_TI, "Current", &m39666_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5816_PIs[] =
{
	&t5816____Current_PropertyInfo,
	NULL
};
extern Il2CppType t742_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39666_GM;
MethodInfo m39666_MI = 
{
	"get_Current", NULL, &t5816_TI, &t742_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39666_GM};
static MethodInfo* t5816_MIs[] =
{
	&m39666_MI,
	NULL
};
static TypeInfo* t5816_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5816_0_0_0;
extern Il2CppType t5816_1_0_0;
struct t5816;
extern Il2CppGenericClass t5816_GC;
TypeInfo t5816_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5816_MIs, t5816_PIs, NULL, NULL, NULL, NULL, NULL, &t5816_TI, t5816_ITIs, NULL, &EmptyCustomAttributesCache, &t5816_TI, &t5816_0_0_0, &t5816_1_0_0, NULL, &t5816_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4123.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4123_TI;
#include "t4123MD.h"

extern TypeInfo t742_TI;
extern MethodInfo m23417_MI;
extern MethodInfo m30966_MI;
struct t107;
#define m30966(__this, p0, method) (t742 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t4123_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4123_TI, offsetof(t4123, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4123_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4123_TI, offsetof(t4123, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4123_FIs[] =
{
	&t4123_f0_FieldInfo,
	&t4123_f1_FieldInfo,
	NULL
};
extern MethodInfo m23414_MI;
static PropertyInfo t4123____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4123_TI, "System.Collections.IEnumerator.Current", &m23414_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4123____Current_PropertyInfo = 
{
	&t4123_TI, "Current", &m23417_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4123_PIs[] =
{
	&t4123____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4123____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4123_m23413_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23413_GM;
MethodInfo m23413_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t4123_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4123_m23413_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23413_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23414_GM;
MethodInfo m23414_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t4123_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23414_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23415_GM;
MethodInfo m23415_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t4123_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23415_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23416_GM;
MethodInfo m23416_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t4123_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23416_GM};
extern Il2CppType t742_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23417_GM;
MethodInfo m23417_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t4123_TI, &t742_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23417_GM};
static MethodInfo* t4123_MIs[] =
{
	&m23413_MI,
	&m23414_MI,
	&m23415_MI,
	&m23416_MI,
	&m23417_MI,
	NULL
};
extern MethodInfo m23416_MI;
extern MethodInfo m23415_MI;
static MethodInfo* t4123_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m23414_MI,
	&m23416_MI,
	&m23415_MI,
	&m23417_MI,
};
static TypeInfo* t4123_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5816_TI,
};
static Il2CppInterfaceOffsetPair t4123_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5816_TI, 7},
};
extern TypeInfo t742_TI;
static Il2CppRGCTXData t4123_RGCTXData[3] = 
{
	&m23417_MI/* Method Usage */,
	&t742_TI/* Class Usage */,
	&m30966_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4123_0_0_0;
extern Il2CppType t4123_1_0_0;
extern Il2CppGenericClass t4123_GC;
TypeInfo t4123_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4123_MIs, t4123_PIs, t4123_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4123_TI, t4123_ITIs, t4123_VT, &EmptyCustomAttributesCache, &t4123_TI, &t4123_0_0_0, &t4123_1_0_0, t4123_IOs, &t4123_GC, NULL, NULL, NULL, t4123_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4123)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7482_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>
extern MethodInfo m39667_MI;
static PropertyInfo t7482____Count_PropertyInfo = 
{
	&t7482_TI, "Count", &m39667_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39668_MI;
static PropertyInfo t7482____IsReadOnly_PropertyInfo = 
{
	&t7482_TI, "IsReadOnly", &m39668_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7482_PIs[] =
{
	&t7482____Count_PropertyInfo,
	&t7482____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39667_GM;
MethodInfo m39667_MI = 
{
	"get_Count", NULL, &t7482_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39667_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39668_GM;
MethodInfo m39668_MI = 
{
	"get_IsReadOnly", NULL, &t7482_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39668_GM};
extern Il2CppType t742_0_0_0;
extern Il2CppType t742_0_0_0;
static ParameterInfo t7482_m39669_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t742_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39669_GM;
MethodInfo m39669_MI = 
{
	"Add", NULL, &t7482_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t7482_m39669_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39669_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39670_GM;
MethodInfo m39670_MI = 
{
	"Clear", NULL, &t7482_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39670_GM};
extern Il2CppType t742_0_0_0;
static ParameterInfo t7482_m39671_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t742_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39671_GM;
MethodInfo m39671_MI = 
{
	"Contains", NULL, &t7482_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7482_m39671_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39671_GM};
extern Il2CppType t4365_0_0_0;
extern Il2CppType t4365_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7482_m39672_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4365_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39672_GM;
MethodInfo m39672_MI = 
{
	"CopyTo", NULL, &t7482_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7482_m39672_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39672_GM};
extern Il2CppType t742_0_0_0;
static ParameterInfo t7482_m39673_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t742_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39673_GM;
MethodInfo m39673_MI = 
{
	"Remove", NULL, &t7482_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7482_m39673_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39673_GM};
static MethodInfo* t7482_MIs[] =
{
	&m39667_MI,
	&m39668_MI,
	&m39669_MI,
	&m39670_MI,
	&m39671_MI,
	&m39672_MI,
	&m39673_MI,
	NULL
};
extern TypeInfo t7484_TI;
static TypeInfo* t7482_ITIs[] = 
{
	&t739_TI,
	&t7484_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7482_0_0_0;
extern Il2CppType t7482_1_0_0;
struct t7482;
extern Il2CppGenericClass t7482_GC;
TypeInfo t7482_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7482_MIs, t7482_PIs, NULL, NULL, NULL, NULL, NULL, &t7482_TI, t7482_ITIs, NULL, &EmptyCustomAttributesCache, &t7482_TI, &t7482_0_0_0, &t7482_1_0_0, NULL, &t7482_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.SecurityCriticalAttribute>
extern Il2CppType t5816_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39674_GM;
MethodInfo m39674_MI = 
{
	"GetEnumerator", NULL, &t7484_TI, &t5816_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39674_GM};
static MethodInfo* t7484_MIs[] =
{
	&m39674_MI,
	NULL
};
static TypeInfo* t7484_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7484_0_0_0;
extern Il2CppType t7484_1_0_0;
struct t7484;
extern Il2CppGenericClass t7484_GC;
TypeInfo t7484_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7484_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7484_TI, t7484_ITIs, NULL, &EmptyCustomAttributesCache, &t7484_TI, &t7484_0_0_0, &t7484_1_0_0, NULL, &t7484_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7483_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.SecurityCriticalAttribute>
extern MethodInfo m39675_MI;
extern MethodInfo m39676_MI;
static PropertyInfo t7483____Item_PropertyInfo = 
{
	&t7483_TI, "Item", &m39675_MI, &m39676_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7483_PIs[] =
{
	&t7483____Item_PropertyInfo,
	NULL
};
extern Il2CppType t742_0_0_0;
static ParameterInfo t7483_m39677_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t742_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39677_GM;
MethodInfo m39677_MI = 
{
	"IndexOf", NULL, &t7483_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7483_m39677_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39677_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t742_0_0_0;
static ParameterInfo t7483_m39678_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t742_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39678_GM;
MethodInfo m39678_MI = 
{
	"Insert", NULL, &t7483_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7483_m39678_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39678_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7483_m39679_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39679_GM;
MethodInfo m39679_MI = 
{
	"RemoveAt", NULL, &t7483_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7483_m39679_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39679_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7483_m39675_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t742_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39675_GM;
MethodInfo m39675_MI = 
{
	"get_Item", NULL, &t7483_TI, &t742_0_0_0, RuntimeInvoker_t5_t110, t7483_m39675_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39675_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t742_0_0_0;
static ParameterInfo t7483_m39676_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t742_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39676_GM;
MethodInfo m39676_MI = 
{
	"set_Item", NULL, &t7483_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7483_m39676_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39676_GM};
static MethodInfo* t7483_MIs[] =
{
	&m39677_MI,
	&m39678_MI,
	&m39679_MI,
	&m39675_MI,
	&m39676_MI,
	NULL
};
static TypeInfo* t7483_ITIs[] = 
{
	&t739_TI,
	&t7482_TI,
	&t7484_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7483_0_0_0;
extern Il2CppType t7483_1_0_0;
struct t7483;
extern Il2CppGenericClass t7483_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7483_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7483_MIs, t7483_PIs, NULL, NULL, NULL, NULL, NULL, &t7483_TI, t7483_ITIs, NULL, &t2240__CustomAttributeCache, &t7483_TI, &t7483_0_0_0, &t7483_1_0_0, NULL, &t7483_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5818_TI;

#include "t752.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.SecuritySafeCriticalAttribute>
extern MethodInfo m39680_MI;
static PropertyInfo t5818____Current_PropertyInfo = 
{
	&t5818_TI, "Current", &m39680_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5818_PIs[] =
{
	&t5818____Current_PropertyInfo,
	NULL
};
extern Il2CppType t752_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39680_GM;
MethodInfo m39680_MI = 
{
	"get_Current", NULL, &t5818_TI, &t752_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39680_GM};
static MethodInfo* t5818_MIs[] =
{
	&m39680_MI,
	NULL
};
static TypeInfo* t5818_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5818_0_0_0;
extern Il2CppType t5818_1_0_0;
struct t5818;
extern Il2CppGenericClass t5818_GC;
TypeInfo t5818_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5818_MIs, t5818_PIs, NULL, NULL, NULL, NULL, NULL, &t5818_TI, t5818_ITIs, NULL, &EmptyCustomAttributesCache, &t5818_TI, &t5818_0_0_0, &t5818_1_0_0, NULL, &t5818_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4124.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4124_TI;
#include "t4124MD.h"

extern TypeInfo t752_TI;
extern MethodInfo m23422_MI;
extern MethodInfo m30977_MI;
struct t107;
#define m30977(__this, p0, method) (t752 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t4124_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4124_TI, offsetof(t4124, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4124_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4124_TI, offsetof(t4124, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4124_FIs[] =
{
	&t4124_f0_FieldInfo,
	&t4124_f1_FieldInfo,
	NULL
};
extern MethodInfo m23419_MI;
static PropertyInfo t4124____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4124_TI, "System.Collections.IEnumerator.Current", &m23419_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4124____Current_PropertyInfo = 
{
	&t4124_TI, "Current", &m23422_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4124_PIs[] =
{
	&t4124____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4124____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4124_m23418_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23418_GM;
MethodInfo m23418_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t4124_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4124_m23418_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23418_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23419_GM;
MethodInfo m23419_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t4124_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23419_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23420_GM;
MethodInfo m23420_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t4124_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23420_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23421_GM;
MethodInfo m23421_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t4124_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23421_GM};
extern Il2CppType t752_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23422_GM;
MethodInfo m23422_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t4124_TI, &t752_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23422_GM};
static MethodInfo* t4124_MIs[] =
{
	&m23418_MI,
	&m23419_MI,
	&m23420_MI,
	&m23421_MI,
	&m23422_MI,
	NULL
};
extern MethodInfo m23421_MI;
extern MethodInfo m23420_MI;
static MethodInfo* t4124_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m23419_MI,
	&m23421_MI,
	&m23420_MI,
	&m23422_MI,
};
static TypeInfo* t4124_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5818_TI,
};
static Il2CppInterfaceOffsetPair t4124_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5818_TI, 7},
};
extern TypeInfo t752_TI;
static Il2CppRGCTXData t4124_RGCTXData[3] = 
{
	&m23422_MI/* Method Usage */,
	&t752_TI/* Class Usage */,
	&m30977_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4124_0_0_0;
extern Il2CppType t4124_1_0_0;
extern Il2CppGenericClass t4124_GC;
TypeInfo t4124_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4124_MIs, t4124_PIs, t4124_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4124_TI, t4124_ITIs, t4124_VT, &EmptyCustomAttributesCache, &t4124_TI, &t4124_0_0_0, &t4124_1_0_0, t4124_IOs, &t4124_GC, NULL, NULL, NULL, t4124_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4124)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7485_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>
extern MethodInfo m39681_MI;
static PropertyInfo t7485____Count_PropertyInfo = 
{
	&t7485_TI, "Count", &m39681_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39682_MI;
static PropertyInfo t7485____IsReadOnly_PropertyInfo = 
{
	&t7485_TI, "IsReadOnly", &m39682_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7485_PIs[] =
{
	&t7485____Count_PropertyInfo,
	&t7485____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39681_GM;
MethodInfo m39681_MI = 
{
	"get_Count", NULL, &t7485_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39681_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39682_GM;
MethodInfo m39682_MI = 
{
	"get_IsReadOnly", NULL, &t7485_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39682_GM};
extern Il2CppType t752_0_0_0;
extern Il2CppType t752_0_0_0;
static ParameterInfo t7485_m39683_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t752_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39683_GM;
MethodInfo m39683_MI = 
{
	"Add", NULL, &t7485_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t7485_m39683_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39683_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39684_GM;
MethodInfo m39684_MI = 
{
	"Clear", NULL, &t7485_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39684_GM};
extern Il2CppType t752_0_0_0;
static ParameterInfo t7485_m39685_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t752_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39685_GM;
MethodInfo m39685_MI = 
{
	"Contains", NULL, &t7485_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7485_m39685_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39685_GM};
extern Il2CppType t4366_0_0_0;
extern Il2CppType t4366_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7485_m39686_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4366_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39686_GM;
MethodInfo m39686_MI = 
{
	"CopyTo", NULL, &t7485_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7485_m39686_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39686_GM};
extern Il2CppType t752_0_0_0;
static ParameterInfo t7485_m39687_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t752_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39687_GM;
MethodInfo m39687_MI = 
{
	"Remove", NULL, &t7485_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7485_m39687_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39687_GM};
static MethodInfo* t7485_MIs[] =
{
	&m39681_MI,
	&m39682_MI,
	&m39683_MI,
	&m39684_MI,
	&m39685_MI,
	&m39686_MI,
	&m39687_MI,
	NULL
};
extern TypeInfo t7487_TI;
static TypeInfo* t7485_ITIs[] = 
{
	&t739_TI,
	&t7487_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7485_0_0_0;
extern Il2CppType t7485_1_0_0;
struct t7485;
extern Il2CppGenericClass t7485_GC;
TypeInfo t7485_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7485_MIs, t7485_PIs, NULL, NULL, NULL, NULL, NULL, &t7485_TI, t7485_ITIs, NULL, &EmptyCustomAttributesCache, &t7485_TI, &t7485_0_0_0, &t7485_1_0_0, NULL, &t7485_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.SecuritySafeCriticalAttribute>
extern Il2CppType t5818_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39688_GM;
MethodInfo m39688_MI = 
{
	"GetEnumerator", NULL, &t7487_TI, &t5818_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39688_GM};
static MethodInfo* t7487_MIs[] =
{
	&m39688_MI,
	NULL
};
static TypeInfo* t7487_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7487_0_0_0;
extern Il2CppType t7487_1_0_0;
struct t7487;
extern Il2CppGenericClass t7487_GC;
TypeInfo t7487_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7487_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7487_TI, t7487_ITIs, NULL, &EmptyCustomAttributesCache, &t7487_TI, &t7487_0_0_0, &t7487_1_0_0, NULL, &t7487_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7486_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.SecuritySafeCriticalAttribute>
extern MethodInfo m39689_MI;
extern MethodInfo m39690_MI;
static PropertyInfo t7486____Item_PropertyInfo = 
{
	&t7486_TI, "Item", &m39689_MI, &m39690_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7486_PIs[] =
{
	&t7486____Item_PropertyInfo,
	NULL
};
extern Il2CppType t752_0_0_0;
static ParameterInfo t7486_m39691_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t752_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39691_GM;
MethodInfo m39691_MI = 
{
	"IndexOf", NULL, &t7486_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7486_m39691_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39691_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t752_0_0_0;
static ParameterInfo t7486_m39692_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t752_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39692_GM;
MethodInfo m39692_MI = 
{
	"Insert", NULL, &t7486_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7486_m39692_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39692_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7486_m39693_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39693_GM;
MethodInfo m39693_MI = 
{
	"RemoveAt", NULL, &t7486_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7486_m39693_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39693_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7486_m39689_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t752_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39689_GM;
MethodInfo m39689_MI = 
{
	"get_Item", NULL, &t7486_TI, &t752_0_0_0, RuntimeInvoker_t5_t110, t7486_m39689_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39689_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t752_0_0_0;
static ParameterInfo t7486_m39690_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t752_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39690_GM;
MethodInfo m39690_MI = 
{
	"set_Item", NULL, &t7486_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7486_m39690_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39690_GM};
static MethodInfo* t7486_MIs[] =
{
	&m39691_MI,
	&m39692_MI,
	&m39693_MI,
	&m39689_MI,
	&m39690_MI,
	NULL
};
static TypeInfo* t7486_ITIs[] = 
{
	&t739_TI,
	&t7485_TI,
	&t7487_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7486_0_0_0;
extern Il2CppType t7486_1_0_0;
struct t7486;
extern Il2CppGenericClass t7486_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7486_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7486_MIs, t7486_PIs, NULL, NULL, NULL, NULL, NULL, &t7486_TI, t7486_ITIs, NULL, &t2240__CustomAttributeCache, &t7486_TI, &t7486_0_0_0, &t7486_1_0_0, NULL, &t7486_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5820_TI;

#include "t1898.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
extern MethodInfo m39694_MI;
static PropertyInfo t5820____Current_PropertyInfo = 
{
	&t5820_TI, "Current", &m39694_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5820_PIs[] =
{
	&t5820____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1898_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39694_GM;
MethodInfo m39694_MI = 
{
	"get_Current", NULL, &t5820_TI, &t1898_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39694_GM};
static MethodInfo* t5820_MIs[] =
{
	&m39694_MI,
	NULL
};
static TypeInfo* t5820_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5820_0_0_0;
extern Il2CppType t5820_1_0_0;
struct t5820;
extern Il2CppGenericClass t5820_GC;
TypeInfo t5820_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5820_MIs, t5820_PIs, NULL, NULL, NULL, NULL, NULL, &t5820_TI, t5820_ITIs, NULL, &EmptyCustomAttributesCache, &t5820_TI, &t5820_0_0_0, &t5820_1_0_0, NULL, &t5820_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4125.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4125_TI;
#include "t4125MD.h"

extern TypeInfo t1898_TI;
extern MethodInfo m23427_MI;
extern MethodInfo m30988_MI;
struct t107;
#define m30988(__this, p0, method) (t1898 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t4125_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4125_TI, offsetof(t4125, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4125_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4125_TI, offsetof(t4125, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4125_FIs[] =
{
	&t4125_f0_FieldInfo,
	&t4125_f1_FieldInfo,
	NULL
};
extern MethodInfo m23424_MI;
static PropertyInfo t4125____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4125_TI, "System.Collections.IEnumerator.Current", &m23424_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4125____Current_PropertyInfo = 
{
	&t4125_TI, "Current", &m23427_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4125_PIs[] =
{
	&t4125____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4125____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4125_m23423_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23423_GM;
MethodInfo m23423_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t4125_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4125_m23423_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23423_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23424_GM;
MethodInfo m23424_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t4125_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23424_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23425_GM;
MethodInfo m23425_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t4125_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23425_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23426_GM;
MethodInfo m23426_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t4125_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23426_GM};
extern Il2CppType t1898_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23427_GM;
MethodInfo m23427_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t4125_TI, &t1898_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23427_GM};
static MethodInfo* t4125_MIs[] =
{
	&m23423_MI,
	&m23424_MI,
	&m23425_MI,
	&m23426_MI,
	&m23427_MI,
	NULL
};
extern MethodInfo m23426_MI;
extern MethodInfo m23425_MI;
static MethodInfo* t4125_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m23424_MI,
	&m23426_MI,
	&m23425_MI,
	&m23427_MI,
};
static TypeInfo* t4125_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5820_TI,
};
static Il2CppInterfaceOffsetPair t4125_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5820_TI, 7},
};
extern TypeInfo t1898_TI;
static Il2CppRGCTXData t4125_RGCTXData[3] = 
{
	&m23427_MI/* Method Usage */,
	&t1898_TI/* Class Usage */,
	&m30988_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4125_0_0_0;
extern Il2CppType t4125_1_0_0;
extern Il2CppGenericClass t4125_GC;
TypeInfo t4125_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4125_MIs, t4125_PIs, t4125_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4125_TI, t4125_ITIs, t4125_VT, &EmptyCustomAttributesCache, &t4125_TI, &t4125_0_0_0, &t4125_1_0_0, t4125_IOs, &t4125_GC, NULL, NULL, NULL, t4125_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4125)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7488_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
extern MethodInfo m39695_MI;
static PropertyInfo t7488____Count_PropertyInfo = 
{
	&t7488_TI, "Count", &m39695_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39696_MI;
static PropertyInfo t7488____IsReadOnly_PropertyInfo = 
{
	&t7488_TI, "IsReadOnly", &m39696_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7488_PIs[] =
{
	&t7488____Count_PropertyInfo,
	&t7488____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39695_GM;
MethodInfo m39695_MI = 
{
	"get_Count", NULL, &t7488_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39695_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39696_GM;
MethodInfo m39696_MI = 
{
	"get_IsReadOnly", NULL, &t7488_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39696_GM};
extern Il2CppType t1898_0_0_0;
extern Il2CppType t1898_0_0_0;
static ParameterInfo t7488_m39697_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1898_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39697_GM;
MethodInfo m39697_MI = 
{
	"Add", NULL, &t7488_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t7488_m39697_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39697_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39698_GM;
MethodInfo m39698_MI = 
{
	"Clear", NULL, &t7488_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39698_GM};
extern Il2CppType t1898_0_0_0;
static ParameterInfo t7488_m39699_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1898_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39699_GM;
MethodInfo m39699_MI = 
{
	"Contains", NULL, &t7488_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7488_m39699_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39699_GM};
extern Il2CppType t4367_0_0_0;
extern Il2CppType t4367_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7488_m39700_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4367_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39700_GM;
MethodInfo m39700_MI = 
{
	"CopyTo", NULL, &t7488_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7488_m39700_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39700_GM};
extern Il2CppType t1898_0_0_0;
static ParameterInfo t7488_m39701_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1898_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39701_GM;
MethodInfo m39701_MI = 
{
	"Remove", NULL, &t7488_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7488_m39701_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39701_GM};
static MethodInfo* t7488_MIs[] =
{
	&m39695_MI,
	&m39696_MI,
	&m39697_MI,
	&m39698_MI,
	&m39699_MI,
	&m39700_MI,
	&m39701_MI,
	NULL
};
extern TypeInfo t7490_TI;
static TypeInfo* t7488_ITIs[] = 
{
	&t739_TI,
	&t7490_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7488_0_0_0;
extern Il2CppType t7488_1_0_0;
struct t7488;
extern Il2CppGenericClass t7488_GC;
TypeInfo t7488_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7488_MIs, t7488_PIs, NULL, NULL, NULL, NULL, NULL, &t7488_TI, t7488_ITIs, NULL, &EmptyCustomAttributesCache, &t7488_TI, &t7488_0_0_0, &t7488_1_0_0, NULL, &t7488_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
extern Il2CppType t5820_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39702_GM;
MethodInfo m39702_MI = 
{
	"GetEnumerator", NULL, &t7490_TI, &t5820_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39702_GM};
static MethodInfo* t7490_MIs[] =
{
	&m39702_MI,
	NULL
};
static TypeInfo* t7490_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7490_0_0_0;
extern Il2CppType t7490_1_0_0;
struct t7490;
extern Il2CppGenericClass t7490_GC;
TypeInfo t7490_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7490_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7490_TI, t7490_ITIs, NULL, &EmptyCustomAttributesCache, &t7490_TI, &t7490_0_0_0, &t7490_1_0_0, NULL, &t7490_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7489_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
extern MethodInfo m39703_MI;
extern MethodInfo m39704_MI;
static PropertyInfo t7489____Item_PropertyInfo = 
{
	&t7489_TI, "Item", &m39703_MI, &m39704_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7489_PIs[] =
{
	&t7489____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1898_0_0_0;
static ParameterInfo t7489_m39705_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1898_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39705_GM;
MethodInfo m39705_MI = 
{
	"IndexOf", NULL, &t7489_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7489_m39705_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39705_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1898_0_0_0;
static ParameterInfo t7489_m39706_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1898_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39706_GM;
MethodInfo m39706_MI = 
{
	"Insert", NULL, &t7489_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7489_m39706_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39706_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7489_m39707_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39707_GM;
MethodInfo m39707_MI = 
{
	"RemoveAt", NULL, &t7489_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7489_m39707_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39707_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7489_m39703_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1898_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39703_GM;
MethodInfo m39703_MI = 
{
	"get_Item", NULL, &t7489_TI, &t1898_0_0_0, RuntimeInvoker_t5_t110, t7489_m39703_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39703_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1898_0_0_0;
static ParameterInfo t7489_m39704_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1898_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39704_GM;
MethodInfo m39704_MI = 
{
	"set_Item", NULL, &t7489_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7489_m39704_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39704_GM};
static MethodInfo* t7489_MIs[] =
{
	&m39705_MI,
	&m39706_MI,
	&m39707_MI,
	&m39703_MI,
	&m39704_MI,
	NULL
};
static TypeInfo* t7489_ITIs[] = 
{
	&t739_TI,
	&t7488_TI,
	&t7490_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7489_0_0_0;
extern Il2CppType t7489_1_0_0;
struct t7489;
extern Il2CppGenericClass t7489_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7489_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7489_MIs, t7489_PIs, NULL, NULL, NULL, NULL, NULL, &t7489_TI, t7489_ITIs, NULL, &t2240__CustomAttributeCache, &t7489_TI, &t7489_0_0_0, &t7489_1_0_0, NULL, &t7489_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5822_TI;

#include "t1899.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.UnverifiableCodeAttribute>
extern MethodInfo m39708_MI;
static PropertyInfo t5822____Current_PropertyInfo = 
{
	&t5822_TI, "Current", &m39708_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5822_PIs[] =
{
	&t5822____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1899_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39708_GM;
MethodInfo m39708_MI = 
{
	"get_Current", NULL, &t5822_TI, &t1899_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39708_GM};
static MethodInfo* t5822_MIs[] =
{
	&m39708_MI,
	NULL
};
static TypeInfo* t5822_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5822_0_0_0;
extern Il2CppType t5822_1_0_0;
struct t5822;
extern Il2CppGenericClass t5822_GC;
TypeInfo t5822_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5822_MIs, t5822_PIs, NULL, NULL, NULL, NULL, NULL, &t5822_TI, t5822_ITIs, NULL, &EmptyCustomAttributesCache, &t5822_TI, &t5822_0_0_0, &t5822_1_0_0, NULL, &t5822_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4126.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4126_TI;
#include "t4126MD.h"

extern TypeInfo t1899_TI;
extern MethodInfo m23432_MI;
extern MethodInfo m30999_MI;
struct t107;
#define m30999(__this, p0, method) (t1899 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>
extern Il2CppType t107_0_0_1;
FieldInfo t4126_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4126_TI, offsetof(t4126, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4126_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4126_TI, offsetof(t4126, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4126_FIs[] =
{
	&t4126_f0_FieldInfo,
	&t4126_f1_FieldInfo,
	NULL
};
extern MethodInfo m23429_MI;
static PropertyInfo t4126____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4126_TI, "System.Collections.IEnumerator.Current", &m23429_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4126____Current_PropertyInfo = 
{
	&t4126_TI, "Current", &m23432_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4126_PIs[] =
{
	&t4126____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4126____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4126_m23428_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23428_GM;
MethodInfo m23428_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t4126_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4126_m23428_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23428_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23429_GM;
MethodInfo m23429_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t4126_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23429_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23430_GM;
MethodInfo m23430_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t4126_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23430_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23431_GM;
MethodInfo m23431_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t4126_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23431_GM};
extern Il2CppType t1899_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23432_GM;
MethodInfo m23432_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t4126_TI, &t1899_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23432_GM};
static MethodInfo* t4126_MIs[] =
{
	&m23428_MI,
	&m23429_MI,
	&m23430_MI,
	&m23431_MI,
	&m23432_MI,
	NULL
};
extern MethodInfo m23431_MI;
extern MethodInfo m23430_MI;
static MethodInfo* t4126_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m23429_MI,
	&m23431_MI,
	&m23430_MI,
	&m23432_MI,
};
static TypeInfo* t4126_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5822_TI,
};
static Il2CppInterfaceOffsetPair t4126_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5822_TI, 7},
};
extern TypeInfo t1899_TI;
static Il2CppRGCTXData t4126_RGCTXData[3] = 
{
	&m23432_MI/* Method Usage */,
	&t1899_TI/* Class Usage */,
	&m30999_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4126_0_0_0;
extern Il2CppType t4126_1_0_0;
extern Il2CppGenericClass t4126_GC;
TypeInfo t4126_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4126_MIs, t4126_PIs, t4126_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4126_TI, t4126_ITIs, t4126_VT, &EmptyCustomAttributesCache, &t4126_TI, &t4126_0_0_0, &t4126_1_0_0, t4126_IOs, &t4126_GC, NULL, NULL, NULL, t4126_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4126)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7491_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>
extern MethodInfo m39709_MI;
static PropertyInfo t7491____Count_PropertyInfo = 
{
	&t7491_TI, "Count", &m39709_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39710_MI;
static PropertyInfo t7491____IsReadOnly_PropertyInfo = 
{
	&t7491_TI, "IsReadOnly", &m39710_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7491_PIs[] =
{
	&t7491____Count_PropertyInfo,
	&t7491____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39709_GM;
MethodInfo m39709_MI = 
{
	"get_Count", NULL, &t7491_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39709_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39710_GM;
MethodInfo m39710_MI = 
{
	"get_IsReadOnly", NULL, &t7491_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39710_GM};
extern Il2CppType t1899_0_0_0;
extern Il2CppType t1899_0_0_0;
static ParameterInfo t7491_m39711_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1899_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39711_GM;
MethodInfo m39711_MI = 
{
	"Add", NULL, &t7491_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t7491_m39711_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39711_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39712_GM;
MethodInfo m39712_MI = 
{
	"Clear", NULL, &t7491_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39712_GM};
extern Il2CppType t1899_0_0_0;
static ParameterInfo t7491_m39713_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1899_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39713_GM;
MethodInfo m39713_MI = 
{
	"Contains", NULL, &t7491_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7491_m39713_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39713_GM};
extern Il2CppType t4368_0_0_0;
extern Il2CppType t4368_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7491_m39714_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4368_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39714_GM;
MethodInfo m39714_MI = 
{
	"CopyTo", NULL, &t7491_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7491_m39714_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39714_GM};
extern Il2CppType t1899_0_0_0;
static ParameterInfo t7491_m39715_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1899_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39715_GM;
MethodInfo m39715_MI = 
{
	"Remove", NULL, &t7491_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7491_m39715_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39715_GM};
static MethodInfo* t7491_MIs[] =
{
	&m39709_MI,
	&m39710_MI,
	&m39711_MI,
	&m39712_MI,
	&m39713_MI,
	&m39714_MI,
	&m39715_MI,
	NULL
};
extern TypeInfo t7493_TI;
static TypeInfo* t7491_ITIs[] = 
{
	&t739_TI,
	&t7493_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7491_0_0_0;
extern Il2CppType t7491_1_0_0;
struct t7491;
extern Il2CppGenericClass t7491_GC;
TypeInfo t7491_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7491_MIs, t7491_PIs, NULL, NULL, NULL, NULL, NULL, &t7491_TI, t7491_ITIs, NULL, &EmptyCustomAttributesCache, &t7491_TI, &t7491_0_0_0, &t7491_1_0_0, NULL, &t7491_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.UnverifiableCodeAttribute>
extern Il2CppType t5822_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39716_GM;
MethodInfo m39716_MI = 
{
	"GetEnumerator", NULL, &t7493_TI, &t5822_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39716_GM};
static MethodInfo* t7493_MIs[] =
{
	&m39716_MI,
	NULL
};
static TypeInfo* t7493_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7493_0_0_0;
extern Il2CppType t7493_1_0_0;
struct t7493;
extern Il2CppGenericClass t7493_GC;
TypeInfo t7493_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7493_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7493_TI, t7493_ITIs, NULL, &EmptyCustomAttributesCache, &t7493_TI, &t7493_0_0_0, &t7493_1_0_0, NULL, &t7493_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7492_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.UnverifiableCodeAttribute>
extern MethodInfo m39717_MI;
extern MethodInfo m39718_MI;
static PropertyInfo t7492____Item_PropertyInfo = 
{
	&t7492_TI, "Item", &m39717_MI, &m39718_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7492_PIs[] =
{
	&t7492____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1899_0_0_0;
static ParameterInfo t7492_m39719_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1899_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39719_GM;
MethodInfo m39719_MI = 
{
	"IndexOf", NULL, &t7492_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7492_m39719_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39719_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1899_0_0_0;
static ParameterInfo t7492_m39720_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1899_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39720_GM;
MethodInfo m39720_MI = 
{
	"Insert", NULL, &t7492_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7492_m39720_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39720_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7492_m39721_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39721_GM;
MethodInfo m39721_MI = 
{
	"RemoveAt", NULL, &t7492_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7492_m39721_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39721_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7492_m39717_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1899_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39717_GM;
MethodInfo m39717_MI = 
{
	"get_Item", NULL, &t7492_TI, &t1899_0_0_0, RuntimeInvoker_t5_t110, t7492_m39717_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39717_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1899_0_0_0;
static ParameterInfo t7492_m39718_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1899_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39718_GM;
MethodInfo m39718_MI = 
{
	"set_Item", NULL, &t7492_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7492_m39718_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39718_GM};
static MethodInfo* t7492_MIs[] =
{
	&m39719_MI,
	&m39720_MI,
	&m39721_MI,
	&m39717_MI,
	&m39718_MI,
	NULL
};
static TypeInfo* t7492_ITIs[] = 
{
	&t739_TI,
	&t7491_TI,
	&t7493_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7492_0_0_0;
extern Il2CppType t7492_1_0_0;
struct t7492;
extern Il2CppGenericClass t7492_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7492_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7492_MIs, t7492_PIs, NULL, NULL, NULL, NULL, NULL, &t7492_TI, t7492_ITIs, NULL, &t2240__CustomAttributeCache, &t7492_TI, &t7492_0_0_0, &t7492_1_0_0, NULL, &t7492_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5824_TI;

#include "t1926.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Threading.EventResetMode>
extern MethodInfo m39722_MI;
static PropertyInfo t5824____Current_PropertyInfo = 
{
	&t5824_TI, "Current", &m39722_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5824_PIs[] =
{
	&t5824____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1926_0_0_0;
extern void* RuntimeInvoker_t1926 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39722_GM;
MethodInfo m39722_MI = 
{
	"get_Current", NULL, &t5824_TI, &t1926_0_0_0, RuntimeInvoker_t1926, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39722_GM};
static MethodInfo* t5824_MIs[] =
{
	&m39722_MI,
	NULL
};
static TypeInfo* t5824_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5824_0_0_0;
extern Il2CppType t5824_1_0_0;
struct t5824;
extern Il2CppGenericClass t5824_GC;
TypeInfo t5824_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5824_MIs, t5824_PIs, NULL, NULL, NULL, NULL, NULL, &t5824_TI, t5824_ITIs, NULL, &EmptyCustomAttributesCache, &t5824_TI, &t5824_0_0_0, &t5824_1_0_0, NULL, &t5824_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4127.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4127_TI;
#include "t4127MD.h"

extern TypeInfo t1926_TI;
extern MethodInfo m23437_MI;
extern MethodInfo m31010_MI;
struct t107;
 int32_t m31010 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m23433_MI;
 void m23433 (t4127 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23434_MI;
 t5 * m23434 (t4127 * __this, MethodInfo* method){
	{
		int32_t L_0 = m23437(__this, &m23437_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1926_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m23435_MI;
 void m23435 (t4127 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23436_MI;
 bool m23436 (t4127 * __this, MethodInfo* method){
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
 int32_t m23437 (t4127 * __this, MethodInfo* method){
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
		int32_t L_8 = m31010(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m31010_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Threading.EventResetMode>
extern Il2CppType t107_0_0_1;
FieldInfo t4127_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4127_TI, offsetof(t4127, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4127_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4127_TI, offsetof(t4127, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4127_FIs[] =
{
	&t4127_f0_FieldInfo,
	&t4127_f1_FieldInfo,
	NULL
};
static PropertyInfo t4127____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4127_TI, "System.Collections.IEnumerator.Current", &m23434_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4127____Current_PropertyInfo = 
{
	&t4127_TI, "Current", &m23437_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4127_PIs[] =
{
	&t4127____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4127____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4127_m23433_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23433_GM;
MethodInfo m23433_MI = 
{
	".ctor", (methodPointerType)&m23433, &t4127_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4127_m23433_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23433_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23434_GM;
MethodInfo m23434_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m23434, &t4127_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23434_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23435_GM;
MethodInfo m23435_MI = 
{
	"Dispose", (methodPointerType)&m23435, &t4127_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23435_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23436_GM;
MethodInfo m23436_MI = 
{
	"MoveNext", (methodPointerType)&m23436, &t4127_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23436_GM};
extern Il2CppType t1926_0_0_0;
extern void* RuntimeInvoker_t1926 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23437_GM;
MethodInfo m23437_MI = 
{
	"get_Current", (methodPointerType)&m23437, &t4127_TI, &t1926_0_0_0, RuntimeInvoker_t1926, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23437_GM};
static MethodInfo* t4127_MIs[] =
{
	&m23433_MI,
	&m23434_MI,
	&m23435_MI,
	&m23436_MI,
	&m23437_MI,
	NULL
};
static MethodInfo* t4127_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m23434_MI,
	&m23436_MI,
	&m23435_MI,
	&m23437_MI,
};
static TypeInfo* t4127_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5824_TI,
};
static Il2CppInterfaceOffsetPair t4127_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5824_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4127_0_0_0;
extern Il2CppType t4127_1_0_0;
extern Il2CppGenericClass t4127_GC;
TypeInfo t4127_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4127_MIs, t4127_PIs, t4127_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4127_TI, t4127_ITIs, t4127_VT, &EmptyCustomAttributesCache, &t4127_TI, &t4127_0_0_0, &t4127_1_0_0, t4127_IOs, &t4127_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4127)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7494_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>
extern MethodInfo m39723_MI;
static PropertyInfo t7494____Count_PropertyInfo = 
{
	&t7494_TI, "Count", &m39723_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39724_MI;
static PropertyInfo t7494____IsReadOnly_PropertyInfo = 
{
	&t7494_TI, "IsReadOnly", &m39724_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7494_PIs[] =
{
	&t7494____Count_PropertyInfo,
	&t7494____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39723_GM;
MethodInfo m39723_MI = 
{
	"get_Count", NULL, &t7494_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39723_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39724_GM;
MethodInfo m39724_MI = 
{
	"get_IsReadOnly", NULL, &t7494_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39724_GM};
extern Il2CppType t1926_0_0_0;
extern Il2CppType t1926_0_0_0;
static ParameterInfo t7494_m39725_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1926_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39725_GM;
MethodInfo m39725_MI = 
{
	"Add", NULL, &t7494_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7494_m39725_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39725_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39726_GM;
MethodInfo m39726_MI = 
{
	"Clear", NULL, &t7494_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39726_GM};
extern Il2CppType t1926_0_0_0;
static ParameterInfo t7494_m39727_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1926_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39727_GM;
MethodInfo m39727_MI = 
{
	"Contains", NULL, &t7494_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7494_m39727_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39727_GM};
extern Il2CppType t4369_0_0_0;
extern Il2CppType t4369_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7494_m39728_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4369_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39728_GM;
MethodInfo m39728_MI = 
{
	"CopyTo", NULL, &t7494_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7494_m39728_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39728_GM};
extern Il2CppType t1926_0_0_0;
static ParameterInfo t7494_m39729_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1926_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39729_GM;
MethodInfo m39729_MI = 
{
	"Remove", NULL, &t7494_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7494_m39729_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39729_GM};
static MethodInfo* t7494_MIs[] =
{
	&m39723_MI,
	&m39724_MI,
	&m39725_MI,
	&m39726_MI,
	&m39727_MI,
	&m39728_MI,
	&m39729_MI,
	NULL
};
extern TypeInfo t7496_TI;
static TypeInfo* t7494_ITIs[] = 
{
	&t739_TI,
	&t7496_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7494_0_0_0;
extern Il2CppType t7494_1_0_0;
struct t7494;
extern Il2CppGenericClass t7494_GC;
TypeInfo t7494_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7494_MIs, t7494_PIs, NULL, NULL, NULL, NULL, NULL, &t7494_TI, t7494_ITIs, NULL, &EmptyCustomAttributesCache, &t7494_TI, &t7494_0_0_0, &t7494_1_0_0, NULL, &t7494_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Threading.EventResetMode>
extern Il2CppType t5824_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39730_GM;
MethodInfo m39730_MI = 
{
	"GetEnumerator", NULL, &t7496_TI, &t5824_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39730_GM};
static MethodInfo* t7496_MIs[] =
{
	&m39730_MI,
	NULL
};
static TypeInfo* t7496_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7496_0_0_0;
extern Il2CppType t7496_1_0_0;
struct t7496;
extern Il2CppGenericClass t7496_GC;
TypeInfo t7496_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7496_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7496_TI, t7496_ITIs, NULL, &EmptyCustomAttributesCache, &t7496_TI, &t7496_0_0_0, &t7496_1_0_0, NULL, &t7496_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7495_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Threading.EventResetMode>
extern MethodInfo m39731_MI;
extern MethodInfo m39732_MI;
static PropertyInfo t7495____Item_PropertyInfo = 
{
	&t7495_TI, "Item", &m39731_MI, &m39732_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7495_PIs[] =
{
	&t7495____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1926_0_0_0;
static ParameterInfo t7495_m39733_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1926_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39733_GM;
MethodInfo m39733_MI = 
{
	"IndexOf", NULL, &t7495_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t7495_m39733_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39733_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1926_0_0_0;
static ParameterInfo t7495_m39734_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1926_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39734_GM;
MethodInfo m39734_MI = 
{
	"Insert", NULL, &t7495_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7495_m39734_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39734_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7495_m39735_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39735_GM;
MethodInfo m39735_MI = 
{
	"RemoveAt", NULL, &t7495_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7495_m39735_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39735_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7495_m39731_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1926_0_0_0;
extern void* RuntimeInvoker_t1926_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39731_GM;
MethodInfo m39731_MI = 
{
	"get_Item", NULL, &t7495_TI, &t1926_0_0_0, RuntimeInvoker_t1926_t110, t7495_m39731_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39731_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1926_0_0_0;
static ParameterInfo t7495_m39732_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1926_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39732_GM;
MethodInfo m39732_MI = 
{
	"set_Item", NULL, &t7495_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7495_m39732_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39732_GM};
static MethodInfo* t7495_MIs[] =
{
	&m39733_MI,
	&m39734_MI,
	&m39735_MI,
	&m39731_MI,
	&m39732_MI,
	NULL
};
static TypeInfo* t7495_ITIs[] = 
{
	&t739_TI,
	&t7494_TI,
	&t7496_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7495_0_0_0;
extern Il2CppType t7495_1_0_0;
struct t7495;
extern Il2CppGenericClass t7495_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7495_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7495_MIs, t7495_PIs, NULL, NULL, NULL, NULL, NULL, &t7495_TI, t7495_ITIs, NULL, &t2240__CustomAttributeCache, &t7495_TI, &t7495_0_0_0, &t7495_1_0_0, NULL, &t7495_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5826_TI;

#include "t1314.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Threading.WaitHandle>
extern MethodInfo m39736_MI;
static PropertyInfo t5826____Current_PropertyInfo = 
{
	&t5826_TI, "Current", &m39736_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5826_PIs[] =
{
	&t5826____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1314_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39736_GM;
MethodInfo m39736_MI = 
{
	"get_Current", NULL, &t5826_TI, &t1314_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39736_GM};
static MethodInfo* t5826_MIs[] =
{
	&m39736_MI,
	NULL
};
static TypeInfo* t5826_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5826_0_0_0;
extern Il2CppType t5826_1_0_0;
struct t5826;
extern Il2CppGenericClass t5826_GC;
TypeInfo t5826_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5826_MIs, t5826_PIs, NULL, NULL, NULL, NULL, NULL, &t5826_TI, t5826_ITIs, NULL, &EmptyCustomAttributesCache, &t5826_TI, &t5826_0_0_0, &t5826_1_0_0, NULL, &t5826_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4128.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4128_TI;
#include "t4128MD.h"

extern TypeInfo t1314_TI;
extern MethodInfo m23442_MI;
extern MethodInfo m31021_MI;
struct t107;
#define m31021(__this, p0, method) (t1314 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.Threading.WaitHandle>
extern Il2CppType t107_0_0_1;
FieldInfo t4128_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4128_TI, offsetof(t4128, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4128_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4128_TI, offsetof(t4128, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4128_FIs[] =
{
	&t4128_f0_FieldInfo,
	&t4128_f1_FieldInfo,
	NULL
};
extern MethodInfo m23439_MI;
static PropertyInfo t4128____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4128_TI, "System.Collections.IEnumerator.Current", &m23439_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4128____Current_PropertyInfo = 
{
	&t4128_TI, "Current", &m23442_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4128_PIs[] =
{
	&t4128____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4128____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4128_m23438_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23438_GM;
MethodInfo m23438_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t4128_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4128_m23438_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23438_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23439_GM;
MethodInfo m23439_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t4128_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23439_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23440_GM;
MethodInfo m23440_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t4128_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23440_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23441_GM;
MethodInfo m23441_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t4128_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23441_GM};
extern Il2CppType t1314_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23442_GM;
MethodInfo m23442_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t4128_TI, &t1314_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23442_GM};
static MethodInfo* t4128_MIs[] =
{
	&m23438_MI,
	&m23439_MI,
	&m23440_MI,
	&m23441_MI,
	&m23442_MI,
	NULL
};
extern MethodInfo m23441_MI;
extern MethodInfo m23440_MI;
static MethodInfo* t4128_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m23439_MI,
	&m23441_MI,
	&m23440_MI,
	&m23442_MI,
};
static TypeInfo* t4128_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5826_TI,
};
static Il2CppInterfaceOffsetPair t4128_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5826_TI, 7},
};
extern TypeInfo t1314_TI;
static Il2CppRGCTXData t4128_RGCTXData[3] = 
{
	&m23442_MI/* Method Usage */,
	&t1314_TI/* Class Usage */,
	&m31021_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4128_0_0_0;
extern Il2CppType t4128_1_0_0;
extern Il2CppGenericClass t4128_GC;
TypeInfo t4128_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4128_MIs, t4128_PIs, t4128_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4128_TI, t4128_ITIs, t4128_VT, &EmptyCustomAttributesCache, &t4128_TI, &t4128_0_0_0, &t4128_1_0_0, t4128_IOs, &t4128_GC, NULL, NULL, NULL, t4128_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4128)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7497_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Threading.WaitHandle>
extern MethodInfo m39737_MI;
static PropertyInfo t7497____Count_PropertyInfo = 
{
	&t7497_TI, "Count", &m39737_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39738_MI;
static PropertyInfo t7497____IsReadOnly_PropertyInfo = 
{
	&t7497_TI, "IsReadOnly", &m39738_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7497_PIs[] =
{
	&t7497____Count_PropertyInfo,
	&t7497____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39737_GM;
MethodInfo m39737_MI = 
{
	"get_Count", NULL, &t7497_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39737_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39738_GM;
MethodInfo m39738_MI = 
{
	"get_IsReadOnly", NULL, &t7497_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39738_GM};
extern Il2CppType t1314_0_0_0;
extern Il2CppType t1314_0_0_0;
static ParameterInfo t7497_m39739_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1314_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39739_GM;
MethodInfo m39739_MI = 
{
	"Add", NULL, &t7497_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t7497_m39739_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39739_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39740_GM;
MethodInfo m39740_MI = 
{
	"Clear", NULL, &t7497_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39740_GM};
extern Il2CppType t1314_0_0_0;
static ParameterInfo t7497_m39741_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1314_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39741_GM;
MethodInfo m39741_MI = 
{
	"Contains", NULL, &t7497_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7497_m39741_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39741_GM};
extern Il2CppType t1943_0_0_0;
extern Il2CppType t1943_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7497_m39742_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1943_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39742_GM;
MethodInfo m39742_MI = 
{
	"CopyTo", NULL, &t7497_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7497_m39742_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39742_GM};
extern Il2CppType t1314_0_0_0;
static ParameterInfo t7497_m39743_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1314_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39743_GM;
MethodInfo m39743_MI = 
{
	"Remove", NULL, &t7497_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7497_m39743_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39743_GM};
static MethodInfo* t7497_MIs[] =
{
	&m39737_MI,
	&m39738_MI,
	&m39739_MI,
	&m39740_MI,
	&m39741_MI,
	&m39742_MI,
	&m39743_MI,
	NULL
};
extern TypeInfo t7499_TI;
static TypeInfo* t7497_ITIs[] = 
{
	&t739_TI,
	&t7499_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7497_0_0_0;
extern Il2CppType t7497_1_0_0;
struct t7497;
extern Il2CppGenericClass t7497_GC;
TypeInfo t7497_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7497_MIs, t7497_PIs, NULL, NULL, NULL, NULL, NULL, &t7497_TI, t7497_ITIs, NULL, &EmptyCustomAttributesCache, &t7497_TI, &t7497_0_0_0, &t7497_1_0_0, NULL, &t7497_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Threading.WaitHandle>
extern Il2CppType t5826_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39744_GM;
MethodInfo m39744_MI = 
{
	"GetEnumerator", NULL, &t7499_TI, &t5826_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39744_GM};
static MethodInfo* t7499_MIs[] =
{
	&m39744_MI,
	NULL
};
static TypeInfo* t7499_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7499_0_0_0;
extern Il2CppType t7499_1_0_0;
struct t7499;
extern Il2CppGenericClass t7499_GC;
TypeInfo t7499_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7499_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7499_TI, t7499_ITIs, NULL, &EmptyCustomAttributesCache, &t7499_TI, &t7499_0_0_0, &t7499_1_0_0, NULL, &t7499_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7498_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Threading.WaitHandle>
extern MethodInfo m39745_MI;
extern MethodInfo m39746_MI;
static PropertyInfo t7498____Item_PropertyInfo = 
{
	&t7498_TI, "Item", &m39745_MI, &m39746_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7498_PIs[] =
{
	&t7498____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1314_0_0_0;
static ParameterInfo t7498_m39747_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1314_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39747_GM;
MethodInfo m39747_MI = 
{
	"IndexOf", NULL, &t7498_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7498_m39747_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39747_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1314_0_0_0;
static ParameterInfo t7498_m39748_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1314_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39748_GM;
MethodInfo m39748_MI = 
{
	"Insert", NULL, &t7498_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7498_m39748_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39748_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7498_m39749_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39749_GM;
MethodInfo m39749_MI = 
{
	"RemoveAt", NULL, &t7498_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7498_m39749_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39749_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7498_m39745_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1314_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39745_GM;
MethodInfo m39745_MI = 
{
	"get_Item", NULL, &t7498_TI, &t1314_0_0_0, RuntimeInvoker_t5_t110, t7498_m39745_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39745_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1314_0_0_0;
static ParameterInfo t7498_m39746_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1314_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39746_GM;
MethodInfo m39746_MI = 
{
	"set_Item", NULL, &t7498_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7498_m39746_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39746_GM};
static MethodInfo* t7498_MIs[] =
{
	&m39747_MI,
	&m39748_MI,
	&m39749_MI,
	&m39745_MI,
	&m39746_MI,
	NULL
};
static TypeInfo* t7498_ITIs[] = 
{
	&t739_TI,
	&t7497_TI,
	&t7499_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7498_0_0_0;
extern Il2CppType t7498_1_0_0;
struct t7498;
extern Il2CppGenericClass t7498_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7498_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7498_MIs, t7498_PIs, NULL, NULL, NULL, NULL, NULL, &t7498_TI, t7498_ITIs, NULL, &t2240__CustomAttributeCache, &t7498_TI, &t7498_0_0_0, &t7498_1_0_0, NULL, &t7498_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7500_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IDisposable>
extern MethodInfo m39750_MI;
static PropertyInfo t7500____Count_PropertyInfo = 
{
	&t7500_TI, "Count", &m39750_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39751_MI;
static PropertyInfo t7500____IsReadOnly_PropertyInfo = 
{
	&t7500_TI, "IsReadOnly", &m39751_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7500_PIs[] =
{
	&t7500____Count_PropertyInfo,
	&t7500____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39750_GM;
MethodInfo m39750_MI = 
{
	"get_Count", NULL, &t7500_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39750_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39751_GM;
MethodInfo m39751_MI = 
{
	"get_IsReadOnly", NULL, &t7500_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39751_GM};
extern Il2CppType t132_0_0_0;
extern Il2CppType t132_0_0_0;
static ParameterInfo t7500_m39752_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t132_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39752_GM;
MethodInfo m39752_MI = 
{
	"Add", NULL, &t7500_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t7500_m39752_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39752_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39753_GM;
MethodInfo m39753_MI = 
{
	"Clear", NULL, &t7500_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39753_GM};
extern Il2CppType t132_0_0_0;
static ParameterInfo t7500_m39754_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t132_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39754_GM;
MethodInfo m39754_MI = 
{
	"Contains", NULL, &t7500_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7500_m39754_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39754_GM};
extern Il2CppType t4370_0_0_0;
extern Il2CppType t4370_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7500_m39755_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4370_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39755_GM;
MethodInfo m39755_MI = 
{
	"CopyTo", NULL, &t7500_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7500_m39755_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39755_GM};
extern Il2CppType t132_0_0_0;
static ParameterInfo t7500_m39756_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t132_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39756_GM;
MethodInfo m39756_MI = 
{
	"Remove", NULL, &t7500_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7500_m39756_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39756_GM};
static MethodInfo* t7500_MIs[] =
{
	&m39750_MI,
	&m39751_MI,
	&m39752_MI,
	&m39753_MI,
	&m39754_MI,
	&m39755_MI,
	&m39756_MI,
	NULL
};
extern TypeInfo t7502_TI;
static TypeInfo* t7500_ITIs[] = 
{
	&t739_TI,
	&t7502_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7500_0_0_0;
extern Il2CppType t7500_1_0_0;
struct t7500;
extern Il2CppGenericClass t7500_GC;
TypeInfo t7500_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7500_MIs, t7500_PIs, NULL, NULL, NULL, NULL, NULL, &t7500_TI, t7500_ITIs, NULL, &EmptyCustomAttributesCache, &t7500_TI, &t7500_0_0_0, &t7500_1_0_0, NULL, &t7500_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IDisposable>
extern Il2CppType t5828_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39757_GM;
MethodInfo m39757_MI = 
{
	"GetEnumerator", NULL, &t7502_TI, &t5828_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39757_GM};
static MethodInfo* t7502_MIs[] =
{
	&m39757_MI,
	NULL
};
static TypeInfo* t7502_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7502_0_0_0;
extern Il2CppType t7502_1_0_0;
struct t7502;
extern Il2CppGenericClass t7502_GC;
TypeInfo t7502_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7502_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7502_TI, t7502_ITIs, NULL, &EmptyCustomAttributesCache, &t7502_TI, &t7502_0_0_0, &t7502_1_0_0, NULL, &t7502_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5828_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IDisposable>
extern MethodInfo m39758_MI;
static PropertyInfo t5828____Current_PropertyInfo = 
{
	&t5828_TI, "Current", &m39758_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5828_PIs[] =
{
	&t5828____Current_PropertyInfo,
	NULL
};
extern Il2CppType t132_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39758_GM;
MethodInfo m39758_MI = 
{
	"get_Current", NULL, &t5828_TI, &t132_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39758_GM};
static MethodInfo* t5828_MIs[] =
{
	&m39758_MI,
	NULL
};
static TypeInfo* t5828_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5828_0_0_0;
extern Il2CppType t5828_1_0_0;
struct t5828;
extern Il2CppGenericClass t5828_GC;
TypeInfo t5828_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5828_MIs, t5828_PIs, NULL, NULL, NULL, NULL, NULL, &t5828_TI, t5828_ITIs, NULL, &EmptyCustomAttributesCache, &t5828_TI, &t5828_0_0_0, &t5828_1_0_0, NULL, &t5828_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4129.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4129_TI;
#include "t4129MD.h"

extern MethodInfo m23447_MI;
extern MethodInfo m31032_MI;
struct t107;
#define m31032(__this, p0, method) (t5 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.IDisposable>
extern Il2CppType t107_0_0_1;
FieldInfo t4129_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4129_TI, offsetof(t4129, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4129_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4129_TI, offsetof(t4129, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4129_FIs[] =
{
	&t4129_f0_FieldInfo,
	&t4129_f1_FieldInfo,
	NULL
};
extern MethodInfo m23444_MI;
static PropertyInfo t4129____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4129_TI, "System.Collections.IEnumerator.Current", &m23444_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4129____Current_PropertyInfo = 
{
	&t4129_TI, "Current", &m23447_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4129_PIs[] =
{
	&t4129____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4129____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4129_m23443_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23443_GM;
MethodInfo m23443_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t4129_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4129_m23443_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23443_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23444_GM;
MethodInfo m23444_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t4129_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23444_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23445_GM;
MethodInfo m23445_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t4129_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23445_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23446_GM;
MethodInfo m23446_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t4129_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23446_GM};
extern Il2CppType t132_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23447_GM;
MethodInfo m23447_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t4129_TI, &t132_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23447_GM};
static MethodInfo* t4129_MIs[] =
{
	&m23443_MI,
	&m23444_MI,
	&m23445_MI,
	&m23446_MI,
	&m23447_MI,
	NULL
};
extern MethodInfo m23446_MI;
extern MethodInfo m23445_MI;
static MethodInfo* t4129_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m23444_MI,
	&m23446_MI,
	&m23445_MI,
	&m23447_MI,
};
static TypeInfo* t4129_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5828_TI,
};
static Il2CppInterfaceOffsetPair t4129_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5828_TI, 7},
};
extern TypeInfo t132_TI;
static Il2CppRGCTXData t4129_RGCTXData[3] = 
{
	&m23447_MI/* Method Usage */,
	&t132_TI/* Class Usage */,
	&m31032_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4129_0_0_0;
extern Il2CppType t4129_1_0_0;
extern Il2CppGenericClass t4129_GC;
TypeInfo t4129_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4129_MIs, t4129_PIs, t4129_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4129_TI, t4129_ITIs, t4129_VT, &EmptyCustomAttributesCache, &t4129_TI, &t4129_0_0_0, &t4129_1_0_0, t4129_IOs, &t4129_GC, NULL, NULL, NULL, t4129_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4129)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7501_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IDisposable>
extern MethodInfo m39759_MI;
extern MethodInfo m39760_MI;
static PropertyInfo t7501____Item_PropertyInfo = 
{
	&t7501_TI, "Item", &m39759_MI, &m39760_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7501_PIs[] =
{
	&t7501____Item_PropertyInfo,
	NULL
};
extern Il2CppType t132_0_0_0;
static ParameterInfo t7501_m39761_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t132_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39761_GM;
MethodInfo m39761_MI = 
{
	"IndexOf", NULL, &t7501_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7501_m39761_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39761_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t132_0_0_0;
static ParameterInfo t7501_m39762_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t132_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39762_GM;
MethodInfo m39762_MI = 
{
	"Insert", NULL, &t7501_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7501_m39762_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39762_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7501_m39763_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39763_GM;
MethodInfo m39763_MI = 
{
	"RemoveAt", NULL, &t7501_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7501_m39763_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39763_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7501_m39759_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t132_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39759_GM;
MethodInfo m39759_MI = 
{
	"get_Item", NULL, &t7501_TI, &t132_0_0_0, RuntimeInvoker_t5_t110, t7501_m39759_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39759_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t132_0_0_0;
static ParameterInfo t7501_m39760_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t132_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39760_GM;
MethodInfo m39760_MI = 
{
	"set_Item", NULL, &t7501_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7501_m39760_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39760_GM};
static MethodInfo* t7501_MIs[] =
{
	&m39761_MI,
	&m39762_MI,
	&m39763_MI,
	&m39759_MI,
	&m39760_MI,
	NULL
};
static TypeInfo* t7501_ITIs[] = 
{
	&t739_TI,
	&t7500_TI,
	&t7502_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7501_0_0_0;
extern Il2CppType t7501_1_0_0;
struct t7501;
extern Il2CppGenericClass t7501_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7501_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7501_MIs, t7501_PIs, NULL, NULL, NULL, NULL, NULL, &t7501_TI, t7501_ITIs, NULL, &t2240__CustomAttributeCache, &t7501_TI, &t7501_0_0_0, &t7501_1_0_0, NULL, &t7501_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7503_TI;

#include "t1037.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.MarshalByRefObject>
extern MethodInfo m39764_MI;
static PropertyInfo t7503____Count_PropertyInfo = 
{
	&t7503_TI, "Count", &m39764_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39765_MI;
static PropertyInfo t7503____IsReadOnly_PropertyInfo = 
{
	&t7503_TI, "IsReadOnly", &m39765_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7503_PIs[] =
{
	&t7503____Count_PropertyInfo,
	&t7503____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39764_GM;
MethodInfo m39764_MI = 
{
	"get_Count", NULL, &t7503_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39764_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39765_GM;
MethodInfo m39765_MI = 
{
	"get_IsReadOnly", NULL, &t7503_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39765_GM};
extern Il2CppType t1037_0_0_0;
extern Il2CppType t1037_0_0_0;
static ParameterInfo t7503_m39766_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1037_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39766_GM;
MethodInfo m39766_MI = 
{
	"Add", NULL, &t7503_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t7503_m39766_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39766_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39767_GM;
MethodInfo m39767_MI = 
{
	"Clear", NULL, &t7503_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39767_GM};
extern Il2CppType t1037_0_0_0;
static ParameterInfo t7503_m39768_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1037_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39768_GM;
MethodInfo m39768_MI = 
{
	"Contains", NULL, &t7503_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7503_m39768_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39768_GM};
extern Il2CppType t4371_0_0_0;
extern Il2CppType t4371_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7503_m39769_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4371_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39769_GM;
MethodInfo m39769_MI = 
{
	"CopyTo", NULL, &t7503_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7503_m39769_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39769_GM};
extern Il2CppType t1037_0_0_0;
static ParameterInfo t7503_m39770_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1037_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39770_GM;
MethodInfo m39770_MI = 
{
	"Remove", NULL, &t7503_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t7503_m39770_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39770_GM};
static MethodInfo* t7503_MIs[] =
{
	&m39764_MI,
	&m39765_MI,
	&m39766_MI,
	&m39767_MI,
	&m39768_MI,
	&m39769_MI,
	&m39770_MI,
	NULL
};
extern TypeInfo t7505_TI;
static TypeInfo* t7503_ITIs[] = 
{
	&t739_TI,
	&t7505_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7503_0_0_0;
extern Il2CppType t7503_1_0_0;
struct t7503;
extern Il2CppGenericClass t7503_GC;
TypeInfo t7503_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7503_MIs, t7503_PIs, NULL, NULL, NULL, NULL, NULL, &t7503_TI, t7503_ITIs, NULL, &EmptyCustomAttributesCache, &t7503_TI, &t7503_0_0_0, &t7503_1_0_0, NULL, &t7503_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.MarshalByRefObject>
extern Il2CppType t5830_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39771_GM;
MethodInfo m39771_MI = 
{
	"GetEnumerator", NULL, &t7505_TI, &t5830_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39771_GM};
static MethodInfo* t7505_MIs[] =
{
	&m39771_MI,
	NULL
};
static TypeInfo* t7505_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7505_0_0_0;
extern Il2CppType t7505_1_0_0;
struct t7505;
extern Il2CppGenericClass t7505_GC;
TypeInfo t7505_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7505_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7505_TI, t7505_ITIs, NULL, &EmptyCustomAttributesCache, &t7505_TI, &t7505_0_0_0, &t7505_1_0_0, NULL, &t7505_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5830_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.MarshalByRefObject>
extern MethodInfo m39772_MI;
static PropertyInfo t5830____Current_PropertyInfo = 
{
	&t5830_TI, "Current", &m39772_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5830_PIs[] =
{
	&t5830____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1037_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39772_GM;
MethodInfo m39772_MI = 
{
	"get_Current", NULL, &t5830_TI, &t1037_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39772_GM};
static MethodInfo* t5830_MIs[] =
{
	&m39772_MI,
	NULL
};
static TypeInfo* t5830_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5830_0_0_0;
extern Il2CppType t5830_1_0_0;
struct t5830;
extern Il2CppGenericClass t5830_GC;
TypeInfo t5830_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5830_MIs, t5830_PIs, NULL, NULL, NULL, NULL, NULL, &t5830_TI, t5830_ITIs, NULL, &EmptyCustomAttributesCache, &t5830_TI, &t5830_0_0_0, &t5830_1_0_0, NULL, &t5830_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4130.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4130_TI;
#include "t4130MD.h"

extern TypeInfo t1037_TI;
extern MethodInfo m23452_MI;
extern MethodInfo m31043_MI;
struct t107;
#define m31043(__this, p0, method) (t1037 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)


// Metadata Definition System.Array/InternalEnumerator`1<System.MarshalByRefObject>
extern Il2CppType t107_0_0_1;
FieldInfo t4130_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4130_TI, offsetof(t4130, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4130_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4130_TI, offsetof(t4130, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4130_FIs[] =
{
	&t4130_f0_FieldInfo,
	&t4130_f1_FieldInfo,
	NULL
};
extern MethodInfo m23449_MI;
static PropertyInfo t4130____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4130_TI, "System.Collections.IEnumerator.Current", &m23449_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4130____Current_PropertyInfo = 
{
	&t4130_TI, "Current", &m23452_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4130_PIs[] =
{
	&t4130____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4130____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4130_m23448_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23448_GM;
MethodInfo m23448_MI = 
{
	".ctor", (methodPointerType)&m11744_gshared, &t4130_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4130_m23448_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23448_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23449_GM;
MethodInfo m23449_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11745_gshared, &t4130_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23449_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23450_GM;
MethodInfo m23450_MI = 
{
	"Dispose", (methodPointerType)&m11746_gshared, &t4130_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23450_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23451_GM;
MethodInfo m23451_MI = 
{
	"MoveNext", (methodPointerType)&m11747_gshared, &t4130_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23451_GM};
extern Il2CppType t1037_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23452_GM;
MethodInfo m23452_MI = 
{
	"get_Current", (methodPointerType)&m11748_gshared, &t4130_TI, &t1037_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23452_GM};
static MethodInfo* t4130_MIs[] =
{
	&m23448_MI,
	&m23449_MI,
	&m23450_MI,
	&m23451_MI,
	&m23452_MI,
	NULL
};
extern MethodInfo m23451_MI;
extern MethodInfo m23450_MI;
static MethodInfo* t4130_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m23449_MI,
	&m23451_MI,
	&m23450_MI,
	&m23452_MI,
};
static TypeInfo* t4130_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5830_TI,
};
static Il2CppInterfaceOffsetPair t4130_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5830_TI, 7},
};
extern TypeInfo t1037_TI;
static Il2CppRGCTXData t4130_RGCTXData[3] = 
{
	&m23452_MI/* Method Usage */,
	&t1037_TI/* Class Usage */,
	&m31043_MI/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4130_0_0_0;
extern Il2CppType t4130_1_0_0;
extern Il2CppGenericClass t4130_GC;
TypeInfo t4130_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4130_MIs, t4130_PIs, t4130_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4130_TI, t4130_ITIs, t4130_VT, &EmptyCustomAttributesCache, &t4130_TI, &t4130_0_0_0, &t4130_1_0_0, t4130_IOs, &t4130_GC, NULL, NULL, NULL, t4130_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4130)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7504_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.MarshalByRefObject>
extern MethodInfo m39773_MI;
extern MethodInfo m39774_MI;
static PropertyInfo t7504____Item_PropertyInfo = 
{
	&t7504_TI, "Item", &m39773_MI, &m39774_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7504_PIs[] =
{
	&t7504____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1037_0_0_0;
static ParameterInfo t7504_m39775_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1037_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39775_GM;
MethodInfo m39775_MI = 
{
	"IndexOf", NULL, &t7504_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t7504_m39775_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39775_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1037_0_0_0;
static ParameterInfo t7504_m39776_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1037_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39776_GM;
MethodInfo m39776_MI = 
{
	"Insert", NULL, &t7504_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7504_m39776_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39776_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7504_m39777_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39777_GM;
MethodInfo m39777_MI = 
{
	"RemoveAt", NULL, &t7504_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7504_m39777_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39777_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7504_m39773_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1037_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39773_GM;
MethodInfo m39773_MI = 
{
	"get_Item", NULL, &t7504_TI, &t1037_0_0_0, RuntimeInvoker_t5_t110, t7504_m39773_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39773_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1037_0_0_0;
static ParameterInfo t7504_m39774_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1037_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39774_GM;
MethodInfo m39774_MI = 
{
	"set_Item", NULL, &t7504_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t7504_m39774_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39774_GM};
static MethodInfo* t7504_MIs[] =
{
	&m39775_MI,
	&m39776_MI,
	&m39777_MI,
	&m39773_MI,
	&m39774_MI,
	NULL
};
static TypeInfo* t7504_ITIs[] = 
{
	&t739_TI,
	&t7503_TI,
	&t7505_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7504_0_0_0;
extern Il2CppType t7504_1_0_0;
struct t7504;
extern Il2CppGenericClass t7504_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7504_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7504_MIs, t7504_PIs, NULL, NULL, NULL, NULL, NULL, &t7504_TI, t7504_ITIs, NULL, &t2240__CustomAttributeCache, &t7504_TI, &t7504_0_0_0, &t7504_1_0_0, NULL, &t7504_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5832_TI;

#include "t1933.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Threading.ThreadState>
extern MethodInfo m39778_MI;
static PropertyInfo t5832____Current_PropertyInfo = 
{
	&t5832_TI, "Current", &m39778_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5832_PIs[] =
{
	&t5832____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1933_0_0_0;
extern void* RuntimeInvoker_t1933 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39778_GM;
MethodInfo m39778_MI = 
{
	"get_Current", NULL, &t5832_TI, &t1933_0_0_0, RuntimeInvoker_t1933, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39778_GM};
static MethodInfo* t5832_MIs[] =
{
	&m39778_MI,
	NULL
};
static TypeInfo* t5832_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5832_0_0_0;
extern Il2CppType t5832_1_0_0;
struct t5832;
extern Il2CppGenericClass t5832_GC;
TypeInfo t5832_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5832_MIs, t5832_PIs, NULL, NULL, NULL, NULL, NULL, &t5832_TI, t5832_ITIs, NULL, &EmptyCustomAttributesCache, &t5832_TI, &t5832_0_0_0, &t5832_1_0_0, NULL, &t5832_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4131.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4131_TI;
#include "t4131MD.h"

extern TypeInfo t1933_TI;
extern MethodInfo m23457_MI;
extern MethodInfo m31054_MI;
struct t107;
 int32_t m31054 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m23453_MI;
 void m23453 (t4131 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23454_MI;
 t5 * m23454 (t4131 * __this, MethodInfo* method){
	{
		int32_t L_0 = m23457(__this, &m23457_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1933_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m23455_MI;
 void m23455 (t4131 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23456_MI;
 bool m23456 (t4131 * __this, MethodInfo* method){
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
 int32_t m23457 (t4131 * __this, MethodInfo* method){
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
		int32_t L_8 = m31054(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m31054_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Threading.ThreadState>
extern Il2CppType t107_0_0_1;
FieldInfo t4131_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4131_TI, offsetof(t4131, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4131_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4131_TI, offsetof(t4131, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4131_FIs[] =
{
	&t4131_f0_FieldInfo,
	&t4131_f1_FieldInfo,
	NULL
};
static PropertyInfo t4131____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4131_TI, "System.Collections.IEnumerator.Current", &m23454_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4131____Current_PropertyInfo = 
{
	&t4131_TI, "Current", &m23457_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4131_PIs[] =
{
	&t4131____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4131____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4131_m23453_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23453_GM;
MethodInfo m23453_MI = 
{
	".ctor", (methodPointerType)&m23453, &t4131_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4131_m23453_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23453_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23454_GM;
MethodInfo m23454_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m23454, &t4131_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23454_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23455_GM;
MethodInfo m23455_MI = 
{
	"Dispose", (methodPointerType)&m23455, &t4131_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23455_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23456_GM;
MethodInfo m23456_MI = 
{
	"MoveNext", (methodPointerType)&m23456, &t4131_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23456_GM};
extern Il2CppType t1933_0_0_0;
extern void* RuntimeInvoker_t1933 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23457_GM;
MethodInfo m23457_MI = 
{
	"get_Current", (methodPointerType)&m23457, &t4131_TI, &t1933_0_0_0, RuntimeInvoker_t1933, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23457_GM};
static MethodInfo* t4131_MIs[] =
{
	&m23453_MI,
	&m23454_MI,
	&m23455_MI,
	&m23456_MI,
	&m23457_MI,
	NULL
};
static MethodInfo* t4131_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m23454_MI,
	&m23456_MI,
	&m23455_MI,
	&m23457_MI,
};
static TypeInfo* t4131_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5832_TI,
};
static Il2CppInterfaceOffsetPair t4131_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5832_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4131_0_0_0;
extern Il2CppType t4131_1_0_0;
extern Il2CppGenericClass t4131_GC;
TypeInfo t4131_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4131_MIs, t4131_PIs, t4131_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4131_TI, t4131_ITIs, t4131_VT, &EmptyCustomAttributesCache, &t4131_TI, &t4131_0_0_0, &t4131_1_0_0, t4131_IOs, &t4131_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4131)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7506_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Threading.ThreadState>
extern MethodInfo m39779_MI;
static PropertyInfo t7506____Count_PropertyInfo = 
{
	&t7506_TI, "Count", &m39779_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39780_MI;
static PropertyInfo t7506____IsReadOnly_PropertyInfo = 
{
	&t7506_TI, "IsReadOnly", &m39780_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7506_PIs[] =
{
	&t7506____Count_PropertyInfo,
	&t7506____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39779_GM;
MethodInfo m39779_MI = 
{
	"get_Count", NULL, &t7506_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39779_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39780_GM;
MethodInfo m39780_MI = 
{
	"get_IsReadOnly", NULL, &t7506_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39780_GM};
extern Il2CppType t1933_0_0_0;
extern Il2CppType t1933_0_0_0;
static ParameterInfo t7506_m39781_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1933_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39781_GM;
MethodInfo m39781_MI = 
{
	"Add", NULL, &t7506_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7506_m39781_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39781_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39782_GM;
MethodInfo m39782_MI = 
{
	"Clear", NULL, &t7506_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39782_GM};
extern Il2CppType t1933_0_0_0;
static ParameterInfo t7506_m39783_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1933_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39783_GM;
MethodInfo m39783_MI = 
{
	"Contains", NULL, &t7506_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7506_m39783_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39783_GM};
extern Il2CppType t4372_0_0_0;
extern Il2CppType t4372_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7506_m39784_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4372_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39784_GM;
MethodInfo m39784_MI = 
{
	"CopyTo", NULL, &t7506_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7506_m39784_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39784_GM};
extern Il2CppType t1933_0_0_0;
static ParameterInfo t7506_m39785_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1933_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39785_GM;
MethodInfo m39785_MI = 
{
	"Remove", NULL, &t7506_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7506_m39785_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39785_GM};
static MethodInfo* t7506_MIs[] =
{
	&m39779_MI,
	&m39780_MI,
	&m39781_MI,
	&m39782_MI,
	&m39783_MI,
	&m39784_MI,
	&m39785_MI,
	NULL
};
extern TypeInfo t7508_TI;
static TypeInfo* t7506_ITIs[] = 
{
	&t739_TI,
	&t7508_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7506_0_0_0;
extern Il2CppType t7506_1_0_0;
struct t7506;
extern Il2CppGenericClass t7506_GC;
TypeInfo t7506_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7506_MIs, t7506_PIs, NULL, NULL, NULL, NULL, NULL, &t7506_TI, t7506_ITIs, NULL, &EmptyCustomAttributesCache, &t7506_TI, &t7506_0_0_0, &t7506_1_0_0, NULL, &t7506_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Threading.ThreadState>
extern Il2CppType t5832_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39786_GM;
MethodInfo m39786_MI = 
{
	"GetEnumerator", NULL, &t7508_TI, &t5832_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39786_GM};
static MethodInfo* t7508_MIs[] =
{
	&m39786_MI,
	NULL
};
static TypeInfo* t7508_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7508_0_0_0;
extern Il2CppType t7508_1_0_0;
struct t7508;
extern Il2CppGenericClass t7508_GC;
TypeInfo t7508_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7508_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7508_TI, t7508_ITIs, NULL, &EmptyCustomAttributesCache, &t7508_TI, &t7508_0_0_0, &t7508_1_0_0, NULL, &t7508_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7507_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Threading.ThreadState>
extern MethodInfo m39787_MI;
extern MethodInfo m39788_MI;
static PropertyInfo t7507____Item_PropertyInfo = 
{
	&t7507_TI, "Item", &m39787_MI, &m39788_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7507_PIs[] =
{
	&t7507____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1933_0_0_0;
static ParameterInfo t7507_m39789_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1933_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39789_GM;
MethodInfo m39789_MI = 
{
	"IndexOf", NULL, &t7507_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t7507_m39789_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39789_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1933_0_0_0;
static ParameterInfo t7507_m39790_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1933_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39790_GM;
MethodInfo m39790_MI = 
{
	"Insert", NULL, &t7507_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7507_m39790_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39790_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7507_m39791_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39791_GM;
MethodInfo m39791_MI = 
{
	"RemoveAt", NULL, &t7507_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7507_m39791_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39791_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7507_m39787_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1933_0_0_0;
extern void* RuntimeInvoker_t1933_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39787_GM;
MethodInfo m39787_MI = 
{
	"get_Item", NULL, &t7507_TI, &t1933_0_0_0, RuntimeInvoker_t1933_t110, t7507_m39787_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39787_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1933_0_0_0;
static ParameterInfo t7507_m39788_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1933_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39788_GM;
MethodInfo m39788_MI = 
{
	"set_Item", NULL, &t7507_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7507_m39788_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39788_GM};
static MethodInfo* t7507_MIs[] =
{
	&m39789_MI,
	&m39790_MI,
	&m39791_MI,
	&m39787_MI,
	&m39788_MI,
	NULL
};
static TypeInfo* t7507_ITIs[] = 
{
	&t739_TI,
	&t7506_TI,
	&t7508_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7507_0_0_0;
extern Il2CppType t7507_1_0_0;
struct t7507;
extern Il2CppGenericClass t7507_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7507_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7507_MIs, t7507_PIs, NULL, NULL, NULL, NULL, NULL, &t7507_TI, t7507_ITIs, NULL, &t2240__CustomAttributeCache, &t7507_TI, &t7507_0_0_0, &t7507_1_0_0, NULL, &t7507_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5834_TI;

#include "t1389.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.AttributeTargets>
extern MethodInfo m39792_MI;
static PropertyInfo t5834____Current_PropertyInfo = 
{
	&t5834_TI, "Current", &m39792_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5834_PIs[] =
{
	&t5834____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1389_0_0_0;
extern void* RuntimeInvoker_t1389 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39792_GM;
MethodInfo m39792_MI = 
{
	"get_Current", NULL, &t5834_TI, &t1389_0_0_0, RuntimeInvoker_t1389, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39792_GM};
static MethodInfo* t5834_MIs[] =
{
	&m39792_MI,
	NULL
};
static TypeInfo* t5834_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5834_0_0_0;
extern Il2CppType t5834_1_0_0;
struct t5834;
extern Il2CppGenericClass t5834_GC;
TypeInfo t5834_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t5834_MIs, t5834_PIs, NULL, NULL, NULL, NULL, NULL, &t5834_TI, t5834_ITIs, NULL, &EmptyCustomAttributesCache, &t5834_TI, &t5834_0_0_0, &t5834_1_0_0, NULL, &t5834_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t4132.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4132_TI;
#include "t4132MD.h"

extern TypeInfo t1389_TI;
extern MethodInfo m23462_MI;
extern MethodInfo m31065_MI;
struct t107;
 int32_t m31065 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m23458_MI;
 void m23458 (t4132 * __this, t107 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23459_MI;
 t5 * m23459 (t4132 * __this, MethodInfo* method){
	{
		int32_t L_0 = m23462(__this, &m23462_MI);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1389_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m23460_MI;
 void m23460 (t4132 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m23461_MI;
 bool m23461 (t4132 * __this, MethodInfo* method){
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
 int32_t m23462 (t4132 * __this, MethodInfo* method){
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
		int32_t L_8 = m31065(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m31065_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.AttributeTargets>
extern Il2CppType t107_0_0_1;
FieldInfo t4132_f0_FieldInfo = 
{
	"array", &t107_0_0_1, &t4132_TI, offsetof(t4132, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t4132_f1_FieldInfo = 
{
	"idx", &t110_0_0_1, &t4132_TI, offsetof(t4132, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t4132_FIs[] =
{
	&t4132_f0_FieldInfo,
	&t4132_f1_FieldInfo,
	NULL
};
static PropertyInfo t4132____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t4132_TI, "System.Collections.IEnumerator.Current", &m23459_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t4132____Current_PropertyInfo = 
{
	&t4132_TI, "Current", &m23462_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4132_PIs[] =
{
	&t4132____System_Collections_IEnumerator_Current_PropertyInfo,
	&t4132____Current_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4132_m23458_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23458_GM;
MethodInfo m23458_MI = 
{
	".ctor", (methodPointerType)&m23458, &t4132_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t4132_m23458_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23458_GM};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23459_GM;
MethodInfo m23459_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m23459, &t4132_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23459_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23460_GM;
MethodInfo m23460_MI = 
{
	"Dispose", (methodPointerType)&m23460, &t4132_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23460_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23461_GM;
MethodInfo m23461_MI = 
{
	"MoveNext", (methodPointerType)&m23461, &t4132_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23461_GM};
extern Il2CppType t1389_0_0_0;
extern void* RuntimeInvoker_t1389 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23462_GM;
MethodInfo m23462_MI = 
{
	"get_Current", (methodPointerType)&m23462, &t4132_TI, &t1389_0_0_0, RuntimeInvoker_t1389, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23462_GM};
static MethodInfo* t4132_MIs[] =
{
	&m23458_MI,
	&m23459_MI,
	&m23460_MI,
	&m23461_MI,
	&m23462_MI,
	NULL
};
static MethodInfo* t4132_VT[] =
{
	&m2041_MI,
	&m465_MI,
	&m2042_MI,
	&m2147_MI,
	&m23459_MI,
	&m23461_MI,
	&m23460_MI,
	&m23462_MI,
};
static TypeInfo* t4132_ITIs[] = 
{
	&t196_TI,
	&t132_TI,
	&t5834_TI,
};
static Il2CppInterfaceOffsetPair t4132_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t132_TI, 6},
	{ &t5834_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4132_0_0_0;
extern Il2CppType t4132_1_0_0;
extern Il2CppGenericClass t4132_GC;
TypeInfo t4132_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t4132_MIs, t4132_PIs, t4132_FIs, NULL, &t267_TI, NULL, &t107_TI, &t4132_TI, t4132_ITIs, t4132_VT, &EmptyCustomAttributesCache, &t4132_TI, &t4132_0_0_0, &t4132_1_0_0, t4132_IOs, &t4132_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4132)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7509_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.AttributeTargets>
extern MethodInfo m39793_MI;
static PropertyInfo t7509____Count_PropertyInfo = 
{
	&t7509_TI, "Count", &m39793_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m39794_MI;
static PropertyInfo t7509____IsReadOnly_PropertyInfo = 
{
	&t7509_TI, "IsReadOnly", &m39794_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7509_PIs[] =
{
	&t7509____Count_PropertyInfo,
	&t7509____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39793_GM;
MethodInfo m39793_MI = 
{
	"get_Count", NULL, &t7509_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39793_GM};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39794_GM;
MethodInfo m39794_MI = 
{
	"get_IsReadOnly", NULL, &t7509_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39794_GM};
extern Il2CppType t1389_0_0_0;
extern Il2CppType t1389_0_0_0;
static ParameterInfo t7509_m39795_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1389_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39795_GM;
MethodInfo m39795_MI = 
{
	"Add", NULL, &t7509_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7509_m39795_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39795_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39796_GM;
MethodInfo m39796_MI = 
{
	"Clear", NULL, &t7509_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39796_GM};
extern Il2CppType t1389_0_0_0;
static ParameterInfo t7509_m39797_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1389_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39797_GM;
MethodInfo m39797_MI = 
{
	"Contains", NULL, &t7509_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7509_m39797_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39797_GM};
extern Il2CppType t4373_0_0_0;
extern Il2CppType t4373_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t7509_m39798_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4373_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39798_GM;
MethodInfo m39798_MI = 
{
	"CopyTo", NULL, &t7509_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t7509_m39798_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39798_GM};
extern Il2CppType t1389_0_0_0;
static ParameterInfo t7509_m39799_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1389_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39799_GM;
MethodInfo m39799_MI = 
{
	"Remove", NULL, &t7509_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t7509_m39799_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39799_GM};
static MethodInfo* t7509_MIs[] =
{
	&m39793_MI,
	&m39794_MI,
	&m39795_MI,
	&m39796_MI,
	&m39797_MI,
	&m39798_MI,
	&m39799_MI,
	NULL
};
extern TypeInfo t7511_TI;
static TypeInfo* t7509_ITIs[] = 
{
	&t739_TI,
	&t7511_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7509_0_0_0;
extern Il2CppType t7509_1_0_0;
struct t7509;
extern Il2CppGenericClass t7509_GC;
TypeInfo t7509_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t7509_MIs, t7509_PIs, NULL, NULL, NULL, NULL, NULL, &t7509_TI, t7509_ITIs, NULL, &EmptyCustomAttributesCache, &t7509_TI, &t7509_0_0_0, &t7509_1_0_0, NULL, &t7509_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.AttributeTargets>
extern Il2CppType t5834_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39800_GM;
MethodInfo m39800_MI = 
{
	"GetEnumerator", NULL, &t7511_TI, &t5834_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL, &m39800_GM};
static MethodInfo* t7511_MIs[] =
{
	&m39800_MI,
	NULL
};
static TypeInfo* t7511_ITIs[] = 
{
	&t739_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7511_0_0_0;
extern Il2CppType t7511_1_0_0;
struct t7511;
extern Il2CppGenericClass t7511_GC;
TypeInfo t7511_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t7511_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7511_TI, t7511_ITIs, NULL, &EmptyCustomAttributesCache, &t7511_TI, &t7511_0_0_0, &t7511_1_0_0, NULL, &t7511_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7510_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.AttributeTargets>
extern MethodInfo m39801_MI;
extern MethodInfo m39802_MI;
static PropertyInfo t7510____Item_PropertyInfo = 
{
	&t7510_TI, "Item", &m39801_MI, &m39802_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t7510_PIs[] =
{
	&t7510____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1389_0_0_0;
static ParameterInfo t7510_m39803_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1389_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39803_GM;
MethodInfo m39803_MI = 
{
	"IndexOf", NULL, &t7510_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t7510_m39803_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39803_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1389_0_0_0;
static ParameterInfo t7510_m39804_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1389_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39804_GM;
MethodInfo m39804_MI = 
{
	"Insert", NULL, &t7510_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7510_m39804_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39804_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7510_m39805_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39805_GM;
MethodInfo m39805_MI = 
{
	"RemoveAt", NULL, &t7510_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t7510_m39805_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39805_GM};
extern Il2CppType t110_0_0_0;
static ParameterInfo t7510_m39801_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1389_0_0_0;
extern void* RuntimeInvoker_t1389_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39801_GM;
MethodInfo m39801_MI = 
{
	"get_Item", NULL, &t7510_TI, &t1389_0_0_0, RuntimeInvoker_t1389_t110, t7510_m39801_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39801_GM};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1389_0_0_0;
static ParameterInfo t7510_m39802_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1389_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39802_GM;
MethodInfo m39802_MI = 
{
	"set_Item", NULL, &t7510_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t7510_m39802_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39802_GM};
static MethodInfo* t7510_MIs[] =
{
	&m39803_MI,
	&m39804_MI,
	&m39805_MI,
	&m39801_MI,
	&m39802_MI,
	NULL
};
static TypeInfo* t7510_ITIs[] = 
{
	&t739_TI,
	&t7509_TI,
	&t7511_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7510_0_0_0;
extern Il2CppType t7510_1_0_0;
struct t7510;
extern Il2CppGenericClass t7510_GC;
extern CustomAttributesCache t2240__CustomAttributeCache;
TypeInfo t7510_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t7510_MIs, t7510_PIs, NULL, NULL, NULL, NULL, NULL, &t7510_TI, t7510_ITIs, NULL, &t2240__CustomAttributeCache, &t7510_TI, &t7510_0_0_0, &t7510_1_0_0, NULL, &t7510_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2411.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2411_TI;
#include "t2411MD.h"

#include "t76.h"
extern TypeInfo t76_TI;
extern TypeInfo t2415_TI;
#include "t4133MD.h"
extern MethodInfo m23464_MI;
extern MethodInfo m39288_MI;


extern MethodInfo m11616_MI;
 void m11616 (t2411 * __this, MethodInfo* method){
	{
		m23464(__this, &m23464_MI);
		return;
	}
}
extern MethodInfo m23463_MI;
 int32_t m23463 (t2411 * __this, t76  p0, t76  p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t76  L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t76_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t76  L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t76_TI), &L_2);
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
		t76  L_4 = p1;
		t5 * L_5 = Box(InitializedTypeInfo(&t76_TI), &L_4);
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
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, t76  >::Invoke(&m39288_MI, Box(InitializedTypeInfo(&t76_TI), &(*(&p0))), p1);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.GenericComparer`1<System.DateTime>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m11616_GM;
MethodInfo m11616_MI = 
{
	".ctor", (methodPointerType)&m11616, &t2411_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m11616_GM};
extern Il2CppType t76_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppType t76_0_0_0;
static ParameterInfo t2411_m23463_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t76_t76 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23463_GM;
MethodInfo m23463_MI = 
{
	"Compare", (methodPointerType)&m23463, &t2411_TI, &t110_0_0_0, RuntimeInvoker_t110_t76_t76, t2411_m23463_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23463_GM};
static MethodInfo* t2411_MIs[] =
{
	&m11616_MI,
	&m23463_MI,
	NULL
};
extern MethodInfo m23466_MI;
static MethodInfo* t2411_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m23463_MI,
	&m23466_MI,
	&m23463_MI,
};
extern TypeInfo t7721_TI;
static Il2CppInterfaceOffsetPair t2411_IOs[] = 
{
	{ &t7721_TI, 4},
	{ &t991_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2411_0_0_0;
extern Il2CppType t2411_1_0_0;
extern TypeInfo t4133_TI;
struct t2411;
extern Il2CppGenericClass t2411_GC;
TypeInfo t2411_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericComparer`1", "System.Collections.Generic", t2411_MIs, NULL, NULL, NULL, &t4133_TI, NULL, NULL, &t2411_TI, NULL, t2411_VT, &EmptyCustomAttributesCache, &t2411_TI, &t2411_0_0_0, &t2411_1_0_0, t2411_IOs, &t2411_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2411), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t4133.h"
#ifndef _MSC_VER
#else
#endif

#include "t4134.h"
extern TypeInfo t4134_TI;
#include "t4134MD.h"
extern Il2CppType t2415_0_0_0;
extern MethodInfo m23468_MI;
extern MethodInfo m39806_MI;


 void m23464 (t4133 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m23465_MI;
 void m23465 (t5 * __this, MethodInfo* method){
	t4134 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t4134 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t4134_TI));
	m23468(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m23468_MI);
	((t4133_SFs*)InitializedTypeInfo(&t4133_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
 int32_t m23466 (t4133 * __this, t5 * p0, t5 * p1, MethodInfo* method){
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
		if (!((t5 *)IsInst(p0, InitializedTypeInfo(&t76_TI))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((t5 *)IsInst(p1, InitializedTypeInfo(&t76_TI))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, t76 , t76  >::Invoke(&m39806_MI, __this, ((*(t76 *)((t76 *)UnBox (p0, InitializedTypeInfo(&t76_TI))))), ((*(t76 *)((t76 *)UnBox (p1, InitializedTypeInfo(&t76_TI))))));
		return L_0;
	}

IL_0033:
	{
		t160 * L_1 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m10152(L_1, &m10152_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m23467_MI;
 t4133 * m23467 (t5 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t4133_TI));
		return (((t4133_SFs*)InitializedTypeInfo(&t4133_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<System.DateTime>
extern Il2CppType t4133_0_0_49;
FieldInfo t4133_f0_FieldInfo = 
{
	"_default", &t4133_0_0_49, &t4133_TI, offsetof(t4133_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t4133_FIs[] =
{
	&t4133_f0_FieldInfo,
	NULL
};
static PropertyInfo t4133____Default_PropertyInfo = 
{
	&t4133_TI, "Default", &m23467_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4133_PIs[] =
{
	&t4133____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23464_GM;
MethodInfo m23464_MI = 
{
	".ctor", (methodPointerType)&m23464, &t4133_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23464_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23465_GM;
MethodInfo m23465_MI = 
{
	".cctor", (methodPointerType)&m23465, &t4133_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23465_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t4133_m23466_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23466_GM;
MethodInfo m23466_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m23466, &t4133_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t4133_m23466_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23466_GM};
extern Il2CppType t76_0_0_0;
extern Il2CppType t76_0_0_0;
static ParameterInfo t4133_m39806_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t76_t76 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39806_GM;
MethodInfo m39806_MI = 
{
	"Compare", NULL, &t4133_TI, &t110_0_0_0, RuntimeInvoker_t110_t76_t76, t4133_m39806_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39806_GM};
extern Il2CppType t4133_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23467_GM;
MethodInfo m23467_MI = 
{
	"get_Default", (methodPointerType)&m23467, &t4133_TI, &t4133_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23467_GM};
static MethodInfo* t4133_MIs[] =
{
	&m23464_MI,
	&m23465_MI,
	&m23466_MI,
	&m39806_MI,
	&m23467_MI,
	NULL
};
static MethodInfo* t4133_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m39806_MI,
	&m23466_MI,
	NULL,
};
static TypeInfo* t4133_ITIs[] = 
{
	&t7721_TI,
	&t991_TI,
};
static Il2CppInterfaceOffsetPair t4133_IOs[] = 
{
	{ &t7721_TI, 4},
	{ &t991_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4133_0_0_0;
extern Il2CppType t4133_1_0_0;
struct t4133;
extern Il2CppGenericClass t4133_GC;
TypeInfo t4133_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t4133_MIs, t4133_PIs, t4133_FIs, NULL, &t5_TI, NULL, NULL, &t4133_TI, t4133_ITIs, t4133_VT, &EmptyCustomAttributesCache, &t4133_TI, &t4133_0_0_0, &t4133_1_0_0, t4133_IOs, &t4133_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4133), 0, -1, sizeof(t4133_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IComparer`1<System.DateTime>
extern Il2CppType t76_0_0_0;
extern Il2CppType t76_0_0_0;
static ParameterInfo t7721_m39807_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t76_t76 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39807_GM;
MethodInfo m39807_MI = 
{
	"Compare", NULL, &t7721_TI, &t110_0_0_0, RuntimeInvoker_t110_t76_t76, t7721_m39807_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39807_GM};
static MethodInfo* t7721_MIs[] =
{
	&m39807_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7721_0_0_0;
extern Il2CppType t7721_1_0_0;
struct t7721;
extern Il2CppGenericClass t7721_GC;
TypeInfo t7721_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t7721_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7721_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7721_TI, &t7721_0_0_0, &t7721_1_0_0, NULL, &t7721_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



 void m23468 (t4134 * __this, MethodInfo* method){
	{
		m23464(__this, &m23464_MI);
		return;
	}
}
extern MethodInfo m23469_MI;
 int32_t m23469 (t4134 * __this, t76  p0, t76  p1, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t76  L_0 = p0;
		t5 * L_1 = Box(InitializedTypeInfo(&t76_TI), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		t76  L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t76_TI), &L_2);
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
		t76  L_4 = p1;
		t5 * L_5 = Box(InitializedTypeInfo(&t76_TI), &L_4);
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
		t76  L_6 = p0;
		t5 * L_7 = Box(InitializedTypeInfo(&t76_TI), &L_6);
		if (!((t5*)IsInst(L_7, InitializedTypeInfo(&t2415_TI))))
		{
			goto IL_003e;
		}
	}
	{
		t76  L_8 = p0;
		t5 * L_9 = Box(InitializedTypeInfo(&t76_TI), &L_8);
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, t76  >::Invoke(&m39288_MI, ((t5*)Castclass(L_9, InitializedTypeInfo(&t2415_TI))), p1);
		return L_10;
	}

IL_003e:
	{
		t76  L_11 = p0;
		t5 * L_12 = Box(InitializedTypeInfo(&t76_TI), &L_11);
		if (!((t5 *)IsInst(L_12, InitializedTypeInfo(&t122_TI))))
		{
			goto IL_0062;
		}
	}
	{
		t76  L_13 = p0;
		t5 * L_14 = Box(InitializedTypeInfo(&t76_TI), &L_13);
		t76  L_15 = p1;
		t5 * L_16 = Box(InitializedTypeInfo(&t76_TI), &L_15);
		int32_t L_17 = (int32_t)InterfaceFuncInvoker1< int32_t, t5 * >::Invoke(&m11009_MI, ((t5 *)Castclass(L_14, InitializedTypeInfo(&t122_TI))), L_16);
		return L_17;
	}

IL_0062:
	{
		t160 * L_18 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_18, (t11*) &_stringLiteral1208, &m2581_MI);
		il2cpp_codegen_raise_exception(L_18);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23468_GM;
MethodInfo m23468_MI = 
{
	".ctor", (methodPointerType)&m23468, &t4134_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23468_GM};
extern Il2CppType t76_0_0_0;
extern Il2CppType t76_0_0_0;
static ParameterInfo t4134_m23469_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t76_t76 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23469_GM;
MethodInfo m23469_MI = 
{
	"Compare", (methodPointerType)&m23469, &t4134_TI, &t110_0_0_0, RuntimeInvoker_t110_t76_t76, t4134_m23469_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23469_GM};
static MethodInfo* t4134_MIs[] =
{
	&m23468_MI,
	&m23469_MI,
	NULL
};
static MethodInfo* t4134_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m23469_MI,
	&m23466_MI,
	&m23469_MI,
};
static Il2CppInterfaceOffsetPair t4134_IOs[] = 
{
	{ &t7721_TI, 4},
	{ &t991_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4134_0_0_0;
extern Il2CppType t4134_1_0_0;
struct t4134;
extern Il2CppGenericClass t4134_GC;
TypeInfo t4134_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t4134_MIs, NULL, NULL, NULL, &t4133_TI, NULL, &t1509_TI, &t4134_TI, NULL, t4134_VT, &EmptyCustomAttributesCache, &t4134_TI, &t4134_0_0_0, &t4134_1_0_0, t4134_IOs, &t4134_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4134), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#include "t2412.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2412_TI;
#include "t2412MD.h"

extern TypeInfo t2416_TI;
#include "t4135MD.h"
extern MethodInfo m23472_MI;
extern MethodInfo m39303_MI;


extern MethodInfo m11617_MI;
 void m11617 (t2412 * __this, MethodInfo* method){
	{
		m23472(__this, &m23472_MI);
		return;
	}
}
extern MethodInfo m23470_MI;
 int32_t m23470 (t2412 * __this, t76  p0, MethodInfo* method){
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
extern MethodInfo m23471_MI;
 bool m23471 (t2412 * __this, t76  p0, t76  p1, MethodInfo* method){
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
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, t76  >::Invoke(&m39303_MI, Box(InitializedTypeInfo(&t76_TI), &(*(&p0))), p1);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m11617_GM;
MethodInfo m11617_MI = 
{
	".ctor", (methodPointerType)&m11617, &t2412_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m11617_GM};
extern Il2CppType t76_0_0_0;
static ParameterInfo t2412_m23470_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t76 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23470_GM;
MethodInfo m23470_MI = 
{
	"GetHashCode", (methodPointerType)&m23470, &t2412_TI, &t110_0_0_0, RuntimeInvoker_t110_t76, t2412_m23470_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23470_GM};
extern Il2CppType t76_0_0_0;
extern Il2CppType t76_0_0_0;
static ParameterInfo t2412_m23471_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t76_t76 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23471_GM;
MethodInfo m23471_MI = 
{
	"Equals", (methodPointerType)&m23471, &t2412_TI, &t108_0_0_0, RuntimeInvoker_t108_t76_t76, t2412_m23471_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23471_GM};
static MethodInfo* t2412_MIs[] =
{
	&m11617_MI,
	&m23470_MI,
	&m23471_MI,
	NULL
};
extern MethodInfo m23475_MI;
extern MethodInfo m23474_MI;
static MethodInfo* t2412_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m23471_MI,
	&m23470_MI,
	&m23475_MI,
	&m23474_MI,
	&m23470_MI,
	&m23471_MI,
};
extern TypeInfo t7722_TI;
static Il2CppInterfaceOffsetPair t2412_IOs[] = 
{
	{ &t7722_TI, 4},
	{ &t998_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2412_0_0_0;
extern Il2CppType t2412_1_0_0;
extern TypeInfo t4135_TI;
struct t2412;
extern Il2CppGenericClass t2412_GC;
TypeInfo t2412_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericEqualityComparer`1", "System.Collections.Generic", t2412_MIs, NULL, NULL, NULL, &t4135_TI, NULL, NULL, &t2412_TI, NULL, t2412_VT, &EmptyCustomAttributesCache, &t2412_TI, &t2412_0_0_0, &t2412_1_0_0, t2412_IOs, &t2412_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2412), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t4135.h"
#ifndef _MSC_VER
#else
#endif

#include "t4136.h"
extern TypeInfo t4136_TI;
#include "t4136MD.h"
extern Il2CppType t2416_0_0_0;
extern MethodInfo m23477_MI;
extern MethodInfo m39808_MI;
extern MethodInfo m39809_MI;


 void m23472 (t4135 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m23473_MI;
 void m23473 (t5 * __this, MethodInfo* method){
	t4136 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t4136 *)il2cpp_codegen_object_new(InitializedTypeInfo(&t4136_TI));
	m23477(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &m23477_MI);
	((t4135_SFs*)InitializedTypeInfo(&t4135_TI)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
 int32_t m23474 (t4135 * __this, t5 * p0, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, t76  >::Invoke(&m39808_MI, __this, ((*(t76 *)((t76 *)UnBox (p0, InitializedTypeInfo(&t76_TI))))));
		return L_0;
	}
}
 bool m23475 (t4135 * __this, t5 * p0, t5 * p1, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, t76 , t76  >::Invoke(&m39809_MI, __this, ((*(t76 *)((t76 *)UnBox (p0, InitializedTypeInfo(&t76_TI))))), ((*(t76 *)((t76 *)UnBox (p1, InitializedTypeInfo(&t76_TI))))));
		return L_0;
	}
}
extern MethodInfo m23476_MI;
 t4135 * m23476 (t5 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t4135_TI));
		return (((t4135_SFs*)InitializedTypeInfo(&t4135_TI)->static_fields)->f0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.DateTime>
extern Il2CppType t4135_0_0_49;
FieldInfo t4135_f0_FieldInfo = 
{
	"_default", &t4135_0_0_49, &t4135_TI, offsetof(t4135_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t4135_FIs[] =
{
	&t4135_f0_FieldInfo,
	NULL
};
static PropertyInfo t4135____Default_PropertyInfo = 
{
	&t4135_TI, "Default", &m23476_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4135_PIs[] =
{
	&t4135____Default_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23472_GM;
MethodInfo m23472_MI = 
{
	".ctor", (methodPointerType)&m23472, &t4135_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23472_GM};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23473_GM;
MethodInfo m23473_MI = 
{
	".cctor", (methodPointerType)&m23473, &t4135_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23473_GM};
extern Il2CppType t5_0_0_0;
static ParameterInfo t4135_m23474_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23474_GM;
MethodInfo m23474_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m23474, &t4135_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t4135_m23474_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL, &m23474_GM};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t4135_m23475_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23475_GM;
MethodInfo m23475_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m23475, &t4135_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t4135_m23475_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL, &m23475_GM};
extern Il2CppType t76_0_0_0;
static ParameterInfo t4135_m39808_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t76 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39808_GM;
MethodInfo m39808_MI = 
{
	"GetHashCode", NULL, &t4135_TI, &t110_0_0_0, RuntimeInvoker_t110_t76, t4135_m39808_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39808_GM};
extern Il2CppType t76_0_0_0;
extern Il2CppType t76_0_0_0;
static ParameterInfo t4135_m39809_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t76_t76 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39809_GM;
MethodInfo m39809_MI = 
{
	"Equals", NULL, &t4135_TI, &t108_0_0_0, RuntimeInvoker_t108_t76_t76, t4135_m39809_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39809_GM};
extern Il2CppType t4135_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m23476_GM;
MethodInfo m23476_MI = 
{
	"get_Default", (methodPointerType)&m23476, &t4135_TI, &t4135_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL, &m23476_GM};
static MethodInfo* t4135_MIs[] =
{
	&m23472_MI,
	&m23473_MI,
	&m23474_MI,
	&m23475_MI,
	&m39808_MI,
	&m39809_MI,
	&m23476_MI,
	NULL
};
static MethodInfo* t4135_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m39809_MI,
	&m39808_MI,
	&m23475_MI,
	&m23474_MI,
	NULL,
	NULL,
};
static TypeInfo* t4135_ITIs[] = 
{
	&t7722_TI,
	&t998_TI,
};
static Il2CppInterfaceOffsetPair t4135_IOs[] = 
{
	{ &t7722_TI, 4},
	{ &t998_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4135_0_0_0;
extern Il2CppType t4135_1_0_0;
struct t4135;
extern Il2CppGenericClass t4135_GC;
TypeInfo t4135_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t4135_MIs, t4135_PIs, t4135_FIs, NULL, &t5_TI, NULL, NULL, &t4135_TI, t4135_ITIs, t4135_VT, &EmptyCustomAttributesCache, &t4135_TI, &t4135_0_0_0, &t4135_1_0_0, t4135_IOs, &t4135_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4135), 0, -1, sizeof(t4135_SFs), 0, -1, 8321, 0, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.DateTime>
extern Il2CppType t76_0_0_0;
extern Il2CppType t76_0_0_0;
static ParameterInfo t7722_m39810_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t76_t76 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39810_GM;
MethodInfo m39810_MI = 
{
	"Equals", NULL, &t7722_TI, &t108_0_0_0, RuntimeInvoker_t108_t76_t76, t7722_m39810_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL, &m39810_GM};
extern Il2CppType t76_0_0_0;
static ParameterInfo t7722_m39811_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t76_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t76 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod m39811_GM;
MethodInfo m39811_MI = 
{
	"GetHashCode", NULL, &t7722_TI, &t110_0_0_0, RuntimeInvoker_t110_t76, t7722_m39811_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL, &m39811_GM};
static MethodInfo* t7722_MIs[] =
{
	&m39810_MI,
	&m39811_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t7722_0_0_0;
extern Il2CppType t7722_1_0_0;
struct t7722;
extern Il2CppGenericClass t7722_GC;
TypeInfo t7722_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t7722_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t7722_TI, NULL, NULL, &EmptyCustomAttributesCache, &t7722_TI, &t7722_0_0_0, &t7722_1_0_0, NULL, &t7722_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
