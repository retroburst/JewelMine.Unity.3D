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
#include "stringLiterals.h"
#include "codegen/il2cpp-codegen.h"

#include "t107.h"
#include "t108.h"
#include "t1795.h"
#include "t11.h"
#include "t491.h"
#include "t109.h"
extern TypeInfo t491_TI;
#include "t491MD.h"
extern MethodInfo m4780_MI;
extern MethodInfo m30625_MI;
struct t107;
 bool m30625 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30625 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Serialization.Formatters.Binary.MethodFlags>(T)
extern TypeInfo t107_TI;
extern TypeInfo t108_TI;
extern Il2CppType t1795_0_0_0;
extern Il2CppType t1795_0_0_0;
static ParameterInfo t107_m30625_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1795_0_0_0},
};
extern Il2CppGenericInst GenInst_t1795_0_0_0;
extern Il2CppType t108_0_0_0;
extern TypeInfo t107_TI;
extern Il2CppGenericMethod m30625_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30625_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m30625, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m30625_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30625_GM};
#ifndef _MSC_VER
#else
#endif

#include "t110.h"
#include "t2000.h"
#include "t5.h"
extern TypeInfo t2000_TI;
extern TypeInfo t1795_TI;
extern TypeInfo t5_TI;
#include "t107MD.h"
#include "t1429MD.h"
#include "t2000MD.h"
#include "t5MD.h"
extern MethodInfo m4769_MI;
extern MethodInfo m6877_MI;
extern MethodInfo m10817_MI;
extern MethodInfo m4763_MI;
extern MethodInfo m30620_MI;
extern MethodInfo m6702_MI;
extern MethodInfo m464_MI;
struct t107;
extern MethodInfo m30626_MI;
struct t107;
 int32_t m30626 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30626 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1795_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1795_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1795_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1795_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Serialization.Formatters.Binary.MethodFlags>(T)
extern TypeInfo t107_TI;
extern TypeInfo t110_TI;
extern Il2CppType t1795_0_0_0;
static ParameterInfo t107_m30626_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1795_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30626_GM;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30626_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m30626, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t107_m30626_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30626_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30627_MI;
struct t107;
 void m30627 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30627 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Runtime.Serialization.Formatters.Binary.MethodFlags>(System.Int32,T)
extern TypeInfo t107_TI;
extern TypeInfo t109_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1795_0_0_0;
static ParameterInfo t107_m30627_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1795_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30627_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30627_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m30627, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m30627_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30627_GM};
#ifndef _MSC_VER
#else
#endif

#include "mscorlib_ArrayTypes.h"
#include "t1181.h"
extern TypeInfo t1181_TI;
extern TypeInfo t168_TI;
#include "t1181MD.h"
extern MethodInfo m4767_MI;
extern MethodInfo m30628_MI;
struct t107;
extern MethodInfo m30629_MI;
struct t107;
 void m30629 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30629 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1795_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Runtime.Serialization.Formatters.Binary.MethodFlags>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1795_0_0_0;
static ParameterInfo t107_m30629_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1795_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30629_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30629_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m30629, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m30629_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30629_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Runtime.Serialization.Formatters.Binary.MethodFlags>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1795_1_0_0;
extern Il2CppType t1795_1_0_0;
static ParameterInfo t107_m30628_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1795_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30628_GM;
extern void* RuntimeInvoker_t109_t110_t5755 (MethodInfo* method, void* obj, void** args);
MethodInfo m30628_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5755, t107_m30628_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30628_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4079.h"
extern TypeInfo t4079_TI;
#include "t4079MD.h"
extern MethodInfo m23115_MI;
extern MethodInfo m30630_MI;
struct t107;
 t5* m30630 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m30630 (t107 * __this, MethodInfo* method){
	{
		t4079  L_0 = {0};
		m23115(&L_0, __this, &m23115_MI);
		t4079  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4079_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Serialization.Formatters.Binary.MethodFlags>()
extern TypeInfo t107_TI;
extern TypeInfo t5756_TI;
extern Il2CppType t5756_0_0_0;
extern Il2CppGenericMethod m30630_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30630_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m30630, &t107_TI, &t5756_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m30630_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1796.h"
extern MethodInfo m30631_MI;
struct t107;
extern MethodInfo m30632_MI;
struct t107;
 uint8_t m30632 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 uint8_t m30632 (t107 * __this, int32_t p0, MethodInfo* method){
	uint8_t V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1796_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30632_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1796_0_0_0;
extern Il2CppType t1796_0_0_0;
extern Il2CppGenericMethod m30632_GM;
extern void* RuntimeInvoker_t1796_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30632_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m30632, &t107_TI, &t1796_0_0_0, RuntimeInvoker_t1796_t110, t107_m30632_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30632_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1796_1_0_2;
extern Il2CppType t1796_1_0_0;
static ParameterInfo t107_m30631_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1796_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30631_GM;
extern void* RuntimeInvoker_t109_t110_t5757 (MethodInfo* method, void* obj, void** args);
MethodInfo m30631_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5757, t107_m30631_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30631_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30633_MI;
struct t107;
 void m30633 (t107 * __this, uint8_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30633 (t107 * __this, uint8_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1796_0_0_0;
extern Il2CppType t1796_0_0_0;
static ParameterInfo t107_m30633_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1796_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30633_GM;
extern void* RuntimeInvoker_t109_t494 (MethodInfo* method, void* obj, void** args);
MethodInfo m30633_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m30633, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t494, t107_m30633_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30633_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30634_MI;
struct t107;
 bool m30634 (t107 * __this, uint8_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30634 (t107 * __this, uint8_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		uint8_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1796_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		uint8_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1796_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		uint8_t L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t1796_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1796_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1796_0_0_0;
static ParameterInfo t107_m30634_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1796_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30634_GM;
extern void* RuntimeInvoker_t108_t494 (MethodInfo* method, void* obj, void** args);
MethodInfo m30634_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m30634, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t494, t107_m30634_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30634_GM};
#ifndef _MSC_VER
#else
#endif

#include "t484.h"
#include "t160.h"
extern TypeInfo t484_TI;
extern TypeInfo t160_TI;
#include "t484MD.h"
#include "t160MD.h"
extern MethodInfo m3595_MI;
extern MethodInfo m6700_MI;
extern MethodInfo m2581_MI;
extern MethodInfo m4762_MI;
extern MethodInfo m6741_MI;
extern MethodInfo m30635_MI;
struct t107;
 void m30635 (t107 * __this, t4340* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30635 (t107 * __this, t4340* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4340_0_0_0;
extern Il2CppType t4340_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30635_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4340_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30635_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30635_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m30635, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30635_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30635_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30636_MI;
struct t107;
 bool m30636 (t107 * __this, uint8_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30636 (t107 * __this, uint8_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1796_0_0_0;
static ParameterInfo t107_m30636_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1796_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30636_GM;
extern void* RuntimeInvoker_t108_t494 (MethodInfo* method, void* obj, void** args);
MethodInfo m30636_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m30636, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t494, t107_m30636_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30636_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30637_MI;
struct t107;
 int32_t m30637 (t107 * __this, uint8_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30637 (t107 * __this, uint8_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		uint8_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1796_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		uint8_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1796_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		uint8_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1796_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1796_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1796_0_0_0;
static ParameterInfo t107_m30637_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1796_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30637_GM;
extern void* RuntimeInvoker_t110_t494 (MethodInfo* method, void* obj, void** args);
MethodInfo m30637_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m30637, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t494, t107_m30637_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30637_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30638_MI;
struct t107;
 void m30638 (t107 * __this, int32_t p0, uint8_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30638 (t107 * __this, int32_t p0, uint8_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1796_0_0_0;
static ParameterInfo t107_m30638_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1796_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30638_GM;
extern void* RuntimeInvoker_t109_t110_t494 (MethodInfo* method, void* obj, void** args);
MethodInfo m30638_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m30638, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t494, t107_m30638_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30638_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30639_MI;
struct t107;
extern MethodInfo m30640_MI;
struct t107;
 void m30640 (t107 * __this, int32_t p0, uint8_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30640 (t107 * __this, int32_t p0, uint8_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		uint8_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1796_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1796_0_0_0;
static ParameterInfo t107_m30640_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1796_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30640_GM;
extern void* RuntimeInvoker_t109_t110_t494 (MethodInfo* method, void* obj, void** args);
MethodInfo m30640_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m30640, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t494, t107_m30640_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30640_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1796_1_0_0;
static ParameterInfo t107_m30639_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1796_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30639_GM;
extern void* RuntimeInvoker_t109_t110_t5757 (MethodInfo* method, void* obj, void** args);
MethodInfo m30639_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5757, t107_m30639_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30639_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4080.h"
extern TypeInfo t4080_TI;
#include "t4080MD.h"
extern MethodInfo m23120_MI;
extern MethodInfo m30641_MI;
struct t107;
 t5* m30641 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m30641 (t107 * __this, MethodInfo* method){
	{
		t4080  L_0 = {0};
		m23120(&L_0, __this, &m23120_MI);
		t4080  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4080_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>()
extern TypeInfo t107_TI;
extern TypeInfo t5758_TI;
extern Il2CppType t5758_0_0_0;
extern Il2CppGenericMethod m30641_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30641_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m30641, &t107_TI, &t5758_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m30641_GM};
#ifndef _MSC_VER
#else
#endif

#include "t76.h"
extern MethodInfo m30642_MI;
struct t107;
extern MethodInfo m30643_MI;
struct t107;
 t76  m30643 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t76  m30643 (t107 * __this, int32_t p0, MethodInfo* method){
	t76  V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.DateTime>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t76_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30643_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t76_0_0_0;
extern Il2CppType t76_0_0_0;
extern Il2CppGenericMethod m30643_GM;
extern void* RuntimeInvoker_t76_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30643_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m30643, &t107_TI, &t76_0_0_0, RuntimeInvoker_t76_t110, t107_m30643_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30643_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.DateTime>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t76_1_0_2;
extern Il2CppType t76_1_0_0;
static ParameterInfo t107_m30642_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t76_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30642_GM;
extern void* RuntimeInvoker_t109_t110_t2413 (MethodInfo* method, void* obj, void** args);
MethodInfo m30642_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t2413, t107_m30642_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30642_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30644_MI;
struct t107;
 void m30644 (t107 * __this, t76  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30644 (t107 * __this, t76  p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.DateTime>(T)
extern TypeInfo t107_TI;
extern Il2CppType t76_0_0_0;
extern Il2CppType t76_0_0_0;
static ParameterInfo t107_m30644_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t76_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30644_GM;
extern void* RuntimeInvoker_t109_t76 (MethodInfo* method, void* obj, void** args);
MethodInfo m30644_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m30644, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t76, t107_m30644_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30644_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30645_MI;
struct t107;
 bool m30645 (t107 * __this, t76  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30645 (t107 * __this, t76  p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t76  V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		t76  L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t76_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		t76  L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t76_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t76  L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t76_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t76_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.DateTime>(T)
extern TypeInfo t107_TI;
extern Il2CppType t76_0_0_0;
static ParameterInfo t107_m30645_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t76_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30645_GM;
extern void* RuntimeInvoker_t108_t76 (MethodInfo* method, void* obj, void** args);
MethodInfo m30645_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m30645, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t76, t107_m30645_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30645_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30646_MI;
struct t107;
 void m30646 (t107 * __this, t2389* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30646 (t107 * __this, t2389* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.DateTime>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t2389_0_0_0;
extern Il2CppType t2389_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30646_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t2389_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30646_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30646_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m30646, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30646_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30646_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30647_MI;
struct t107;
 bool m30647 (t107 * __this, t76  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30647 (t107 * __this, t76  p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.DateTime>(T)
extern TypeInfo t107_TI;
extern Il2CppType t76_0_0_0;
static ParameterInfo t107_m30647_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t76_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30647_GM;
extern void* RuntimeInvoker_t108_t76 (MethodInfo* method, void* obj, void** args);
MethodInfo m30647_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m30647, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t76, t107_m30647_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30647_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30648_MI;
struct t107;
 int32_t m30648 (t107 * __this, t76  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30648 (t107 * __this, t76  p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t76  V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		t76  L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t76_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		t76  L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t76_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		t76  L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t76_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t76_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.DateTime>(T)
extern TypeInfo t107_TI;
extern Il2CppType t76_0_0_0;
static ParameterInfo t107_m30648_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t76_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30648_GM;
extern void* RuntimeInvoker_t110_t76 (MethodInfo* method, void* obj, void** args);
MethodInfo m30648_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m30648, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t76, t107_m30648_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30648_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30649_MI;
struct t107;
 void m30649 (t107 * __this, int32_t p0, t76  p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30649 (t107 * __this, int32_t p0, t76  p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.DateTime>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t76_0_0_0;
static ParameterInfo t107_m30649_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t76_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30649_GM;
extern void* RuntimeInvoker_t109_t110_t76 (MethodInfo* method, void* obj, void** args);
MethodInfo m30649_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m30649, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t76, t107_m30649_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30649_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30650_MI;
struct t107;
extern MethodInfo m30651_MI;
struct t107;
 void m30651 (t107 * __this, int32_t p0, t76  p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30651 (t107 * __this, int32_t p0, t76  p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		t76  L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t76_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.DateTime>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t76_0_0_0;
static ParameterInfo t107_m30651_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t76_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30651_GM;
extern void* RuntimeInvoker_t109_t110_t76 (MethodInfo* method, void* obj, void** args);
MethodInfo m30651_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m30651, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t76, t107_m30651_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30651_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.DateTime>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t76_1_0_0;
static ParameterInfo t107_m30650_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t76_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30650_GM;
extern void* RuntimeInvoker_t109_t110_t2413 (MethodInfo* method, void* obj, void** args);
MethodInfo m30650_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t2413, t107_m30650_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30650_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4081.h"
extern TypeInfo t4081_TI;
#include "t4081MD.h"
extern MethodInfo m23125_MI;
extern MethodInfo m30652_MI;
struct t107;
 t5* m30652 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m30652 (t107 * __this, MethodInfo* method){
	{
		t4081  L_0 = {0};
		m23125(&L_0, __this, &m23125_MI);
		t4081  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4081_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.DateTime>()
extern TypeInfo t107_TI;
extern TypeInfo t5759_TI;
extern Il2CppType t5759_0_0_0;
extern Il2CppGenericMethod m30652_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30652_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m30652, &t107_TI, &t5759_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m30652_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30653_MI;
struct t107;
struct t107;
extern MethodInfo m30654_MI;
struct t107;
struct t107;
 t5 * m23596_gshared (t107 * __this, int32_t p0, MethodInfo* method);
#define m23596(__this, p0, method) (t5 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
#define m30654(__this, p0, method) (t5*)m23596_gshared((t107 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.IComparable`1<System.DateTime>>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t2415_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30654_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t2415_0_0_0;
extern Il2CppType t2415_0_0_0;
extern Il2CppGenericMethod m30654_GM;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30654_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m23596_gshared, &t107_TI, &t2415_0_0_0, RuntimeInvoker_t5_t110, t107_m30654_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30654_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.IComparable`1<System.DateTime>>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2415_1_0_2;
extern Il2CppType t2415_1_0_0;
static ParameterInfo t107_m30653_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2415_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30653_GM;
extern void* RuntimeInvoker_t109_t110_t5760 (MethodInfo* method, void* obj, void** args);
MethodInfo m30653_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5760, t107_m30653_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30653_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30655_MI;
struct t107;
struct t107;
 void m23597_gshared (t107 * __this, t5 * p0, MethodInfo* method);
#define m23597(__this, p0, method) (void)m23597_gshared((t107 *)__this, (t5 *)p0, method)
#define m30655(__this, p0, method) (void)m23597_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.DateTime>>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2415_0_0_0;
extern Il2CppType t2415_0_0_0;
static ParameterInfo t107_m30655_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t2415_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30655_GM;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30655_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m23597_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t107_m30655_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30655_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30656_MI;
struct t107;
struct t107;
 bool m23598_gshared (t107 * __this, t5 * p0, MethodInfo* method);
#define m23598(__this, p0, method) (bool)m23598_gshared((t107 *)__this, (t5 *)p0, method)
#define m30656(__this, p0, method) (bool)m23598_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.DateTime>>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2415_0_0_0;
static ParameterInfo t107_m30656_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t2415_0_0_0},
};
extern TypeInfo t2415_TI;
static Il2CppRGCTXData m30656_RGCTXData[1] = 
{
	&t2415_TI/* Class Usage */,
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30656_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30656_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m23598_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30656_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30656_RGCTXData, NULL, &m30656_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30657_MI;
struct t107;
struct t107;
 void m23599_gshared (t107 * __this, t168* p0, int32_t p1, MethodInfo* method);
#define m23599(__this, p0, p1, method) (void)m23599_gshared((t107 *)__this, (t168*)p0, (int32_t)p1, method)
#define m30657(__this, p0, p1, method) (void)m23599_gshared((t107 *)__this, (t168*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.DateTime>>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4341_0_0_0;
extern Il2CppType t4341_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30657_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4341_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30657_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30657_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m23599_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30657_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30657_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30658_MI;
struct t107;
struct t107;
 bool m23600_gshared (t107 * __this, t5 * p0, MethodInfo* method);
#define m23600(__this, p0, method) (bool)m23600_gshared((t107 *)__this, (t5 *)p0, method)
#define m30658(__this, p0, method) (bool)m23600_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.DateTime>>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2415_0_0_0;
static ParameterInfo t107_m30658_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t2415_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30658_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30658_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m23600_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30658_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30658_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30659_MI;
struct t107;
struct t107;
 int32_t m23601_gshared (t107 * __this, t5 * p0, MethodInfo* method);
#define m23601(__this, p0, method) (int32_t)m23601_gshared((t107 *)__this, (t5 *)p0, method)
#define m30659(__this, p0, method) (int32_t)m23601_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.DateTime>>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2415_0_0_0;
static ParameterInfo t107_m30659_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t2415_0_0_0},
};
extern TypeInfo t2415_TI;
static Il2CppRGCTXData m30659_RGCTXData[1] = 
{
	&t2415_TI/* Class Usage */,
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30659_GM;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30659_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m23601_gshared, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t107_m30659_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30659_RGCTXData, NULL, &m30659_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30660_MI;
struct t107;
struct t107;
 void m23602_gshared (t107 * __this, int32_t p0, t5 * p1, MethodInfo* method);
#define m23602(__this, p0, p1, method) (void)m23602_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
#define m30660(__this, p0, p1, method) (void)m23602_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.DateTime>>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2415_0_0_0;
static ParameterInfo t107_m30660_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t2415_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30660_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30660_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m23602_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30660_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30660_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30661_MI;
struct t107;
struct t107;
extern MethodInfo m30662_MI;
struct t107;
struct t107;
 void m23604_gshared (t107 * __this, int32_t p0, t5 * p1, MethodInfo* method);
#define m23604(__this, p0, p1, method) (void)m23604_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
#define m30662(__this, p0, p1, method) (void)m23604_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.DateTime>>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2415_0_0_0;
static ParameterInfo t107_m30662_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t2415_0_0_0},
};
extern TypeInfo t2415_TI;
static Il2CppRGCTXData m30662_RGCTXData[1] = 
{
	&t2415_TI/* Class Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30662_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30662_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m23604_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30662_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, m30662_RGCTXData, NULL, &m30662_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.IComparable`1<System.DateTime>>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2415_1_0_0;
static ParameterInfo t107_m30661_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2415_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30661_GM;
extern void* RuntimeInvoker_t109_t110_t5760 (MethodInfo* method, void* obj, void** args);
MethodInfo m30661_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5760, t107_m30661_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30661_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4082.h"
extern TypeInfo t4082_TI;
#include "t4082MD.h"
extern MethodInfo m23130_MI;
extern MethodInfo m30663_MI;
struct t107;
struct t107;
#include "t2463.h"
 t5* m23605_gshared (t107 * __this, MethodInfo* method);
#define m23605(__this, method) (t5*)m23605_gshared((t107 *)__this, method)
#define m30663(__this, method) (t5*)m23605_gshared((t107 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.DateTime>>()
extern TypeInfo t107_TI;
extern TypeInfo t5761_TI;
extern TypeInfo t4082_TI;
static Il2CppRGCTXData m30663_RGCTXData[2] = 
{
	&t4082_TI/* Class Usage */,
	&m23130_MI/* Method Usage */,
};
extern Il2CppType t5761_0_0_0;
extern Il2CppGenericMethod m30663_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30663_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m23605_gshared, &t107_TI, &t5761_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, m30663_RGCTXData, NULL, &m30663_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30664_MI;
struct t107;
extern MethodInfo m30665_MI;
struct t107;
#define m30665(__this, p0, method) (t5*)m23596_gshared((t107 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.IEquatable`1<System.DateTime>>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t2416_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30665_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t2416_0_0_0;
extern Il2CppType t2416_0_0_0;
extern Il2CppGenericMethod m30665_GM;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30665_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m23596_gshared, &t107_TI, &t2416_0_0_0, RuntimeInvoker_t5_t110, t107_m30665_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30665_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.IEquatable`1<System.DateTime>>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2416_1_0_2;
extern Il2CppType t2416_1_0_0;
static ParameterInfo t107_m30664_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2416_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30664_GM;
extern void* RuntimeInvoker_t109_t110_t5762 (MethodInfo* method, void* obj, void** args);
MethodInfo m30664_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5762, t107_m30664_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30664_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30666_MI;
struct t107;
#define m30666(__this, p0, method) (void)m23597_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.DateTime>>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2416_0_0_0;
extern Il2CppType t2416_0_0_0;
static ParameterInfo t107_m30666_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t2416_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30666_GM;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30666_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m23597_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t107_m30666_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30666_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30667_MI;
struct t107;
#define m30667(__this, p0, method) (bool)m23598_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.DateTime>>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2416_0_0_0;
static ParameterInfo t107_m30667_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t2416_0_0_0},
};
extern TypeInfo t2416_TI;
static Il2CppRGCTXData m30667_RGCTXData[1] = 
{
	&t2416_TI/* Class Usage */,
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30667_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30667_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m23598_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30667_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30667_RGCTXData, NULL, &m30667_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30668_MI;
struct t107;
#define m30668(__this, p0, p1, method) (void)m23599_gshared((t107 *)__this, (t168*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.DateTime>>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4342_0_0_0;
extern Il2CppType t4342_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30668_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4342_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30668_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30668_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m23599_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30668_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30668_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30669_MI;
struct t107;
#define m30669(__this, p0, method) (bool)m23600_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.DateTime>>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2416_0_0_0;
static ParameterInfo t107_m30669_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t2416_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30669_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30669_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m23600_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30669_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30669_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30670_MI;
struct t107;
#define m30670(__this, p0, method) (int32_t)m23601_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.DateTime>>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2416_0_0_0;
static ParameterInfo t107_m30670_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t2416_0_0_0},
};
extern TypeInfo t2416_TI;
static Il2CppRGCTXData m30670_RGCTXData[1] = 
{
	&t2416_TI/* Class Usage */,
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30670_GM;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30670_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m23601_gshared, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t107_m30670_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30670_RGCTXData, NULL, &m30670_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30671_MI;
struct t107;
#define m30671(__this, p0, p1, method) (void)m23602_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.DateTime>>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2416_0_0_0;
static ParameterInfo t107_m30671_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t2416_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30671_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30671_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m23602_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30671_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30671_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30672_MI;
struct t107;
extern MethodInfo m30673_MI;
struct t107;
#define m30673(__this, p0, p1, method) (void)m23604_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.DateTime>>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2416_0_0_0;
static ParameterInfo t107_m30673_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t2416_0_0_0},
};
extern TypeInfo t2416_TI;
static Il2CppRGCTXData m30673_RGCTXData[1] = 
{
	&t2416_TI/* Class Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30673_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30673_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m23604_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30673_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, m30673_RGCTXData, NULL, &m30673_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.IEquatable`1<System.DateTime>>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2416_1_0_0;
static ParameterInfo t107_m30672_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2416_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30672_GM;
extern void* RuntimeInvoker_t109_t110_t5762 (MethodInfo* method, void* obj, void** args);
MethodInfo m30672_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5762, t107_m30672_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30672_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4083.h"
extern TypeInfo t4083_TI;
#include "t4083MD.h"
extern MethodInfo m23135_MI;
extern MethodInfo m30674_MI;
struct t107;
#define m30674(__this, method) (t5*)m23605_gshared((t107 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.DateTime>>()
extern TypeInfo t107_TI;
extern TypeInfo t5763_TI;
extern TypeInfo t4083_TI;
static Il2CppRGCTXData m30674_RGCTXData[2] = 
{
	&t4083_TI/* Class Usage */,
	&m23135_MI/* Method Usage */,
};
extern Il2CppType t5763_0_0_0;
extern Il2CppGenericMethod m30674_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30674_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m23605_gshared, &t107_TI, &t5763_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, m30674_RGCTXData, NULL, &m30674_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1386.h"
extern MethodInfo m30675_MI;
struct t107;
extern MethodInfo m30676_MI;
struct t107;
 t1386  m30676 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t1386  m30676 (t107 * __this, int32_t p0, MethodInfo* method){
	t1386  V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1386_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30676_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1386_0_0_0;
extern Il2CppType t1386_0_0_0;
extern Il2CppGenericMethod m30676_GM;
extern void* RuntimeInvoker_t1386_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30676_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m30676, &t107_TI, &t1386_0_0_0, RuntimeInvoker_t1386_t110, t107_m30676_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30676_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Decimal>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1386_1_0_2;
extern Il2CppType t1386_1_0_0;
static ParameterInfo t107_m30675_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1386_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30675_GM;
extern void* RuntimeInvoker_t109_t110_t2088 (MethodInfo* method, void* obj, void** args);
MethodInfo m30675_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t2088, t107_m30675_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30675_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30677_MI;
struct t107;
 void m30677 (t107 * __this, t1386  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30677 (t107 * __this, t1386  p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Decimal>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1386_0_0_0;
extern Il2CppType t1386_0_0_0;
static ParameterInfo t107_m30677_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1386_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30677_GM;
extern void* RuntimeInvoker_t109_t1386 (MethodInfo* method, void* obj, void** args);
MethodInfo m30677_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m30677, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t1386, t107_m30677_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30677_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30678_MI;
struct t107;
 bool m30678 (t107 * __this, t1386  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30678 (t107 * __this, t1386  p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1386  V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		t1386  L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1386_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		t1386  L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1386_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t1386  L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t1386_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1386_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Decimal>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1386_0_0_0;
static ParameterInfo t107_m30678_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1386_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30678_GM;
extern void* RuntimeInvoker_t108_t1386 (MethodInfo* method, void* obj, void** args);
MethodInfo m30678_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m30678, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t1386, t107_m30678_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30678_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30679_MI;
struct t107;
 void m30679 (t107 * __this, t2390* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30679 (t107 * __this, t2390* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Decimal>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t2390_0_0_0;
extern Il2CppType t2390_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30679_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t2390_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30679_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30679_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m30679, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30679_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30679_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30680_MI;
struct t107;
 bool m30680 (t107 * __this, t1386  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30680 (t107 * __this, t1386  p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Decimal>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1386_0_0_0;
static ParameterInfo t107_m30680_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1386_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30680_GM;
extern void* RuntimeInvoker_t108_t1386 (MethodInfo* method, void* obj, void** args);
MethodInfo m30680_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m30680, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t1386, t107_m30680_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30680_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30681_MI;
struct t107;
 int32_t m30681 (t107 * __this, t1386  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30681 (t107 * __this, t1386  p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1386  V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		t1386  L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1386_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		t1386  L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1386_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		t1386  L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1386_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1386_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Decimal>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1386_0_0_0;
static ParameterInfo t107_m30681_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1386_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30681_GM;
extern void* RuntimeInvoker_t110_t1386 (MethodInfo* method, void* obj, void** args);
MethodInfo m30681_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m30681, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t1386, t107_m30681_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30681_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30682_MI;
struct t107;
 void m30682 (t107 * __this, int32_t p0, t1386  p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30682 (t107 * __this, int32_t p0, t1386  p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Decimal>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1386_0_0_0;
static ParameterInfo t107_m30682_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1386_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30682_GM;
extern void* RuntimeInvoker_t109_t110_t1386 (MethodInfo* method, void* obj, void** args);
MethodInfo m30682_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m30682, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t1386, t107_m30682_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30682_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30683_MI;
struct t107;
extern MethodInfo m30684_MI;
struct t107;
 void m30684 (t107 * __this, int32_t p0, t1386  p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30684 (t107 * __this, int32_t p0, t1386  p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		t1386  L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1386_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Decimal>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1386_0_0_0;
static ParameterInfo t107_m30684_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1386_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30684_GM;
extern void* RuntimeInvoker_t109_t110_t1386 (MethodInfo* method, void* obj, void** args);
MethodInfo m30684_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m30684, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t1386, t107_m30684_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30684_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Decimal>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1386_1_0_0;
static ParameterInfo t107_m30683_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1386_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30683_GM;
extern void* RuntimeInvoker_t109_t110_t2088 (MethodInfo* method, void* obj, void** args);
MethodInfo m30683_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t2088, t107_m30683_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30683_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4084.h"
extern TypeInfo t4084_TI;
#include "t4084MD.h"
extern MethodInfo m23140_MI;
extern MethodInfo m30685_MI;
struct t107;
 t5* m30685 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m30685 (t107 * __this, MethodInfo* method){
	{
		t4084  L_0 = {0};
		m23140(&L_0, __this, &m23140_MI);
		t4084  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4084_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Decimal>()
extern TypeInfo t107_TI;
extern TypeInfo t5764_TI;
extern Il2CppType t5764_0_0_0;
extern Il2CppGenericMethod m30685_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30685_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m30685, &t107_TI, &t5764_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m30685_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30686_MI;
struct t107;
extern MethodInfo m30687_MI;
struct t107;
#define m30687(__this, p0, method) (t5*)m23596_gshared((t107 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.IComparable`1<System.Decimal>>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t2089_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30687_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t2089_0_0_0;
extern Il2CppType t2089_0_0_0;
extern Il2CppGenericMethod m30687_GM;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30687_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m23596_gshared, &t107_TI, &t2089_0_0_0, RuntimeInvoker_t5_t110, t107_m30687_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30687_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.IComparable`1<System.Decimal>>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2089_1_0_2;
extern Il2CppType t2089_1_0_0;
static ParameterInfo t107_m30686_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2089_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30686_GM;
extern void* RuntimeInvoker_t109_t110_t5765 (MethodInfo* method, void* obj, void** args);
MethodInfo m30686_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5765, t107_m30686_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30686_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30688_MI;
struct t107;
#define m30688(__this, p0, method) (void)m23597_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.Decimal>>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2089_0_0_0;
extern Il2CppType t2089_0_0_0;
static ParameterInfo t107_m30688_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t2089_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30688_GM;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30688_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m23597_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t107_m30688_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30688_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30689_MI;
struct t107;
#define m30689(__this, p0, method) (bool)m23598_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.Decimal>>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2089_0_0_0;
static ParameterInfo t107_m30689_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t2089_0_0_0},
};
extern TypeInfo t2089_TI;
static Il2CppRGCTXData m30689_RGCTXData[1] = 
{
	&t2089_TI/* Class Usage */,
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30689_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30689_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m23598_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30689_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30689_RGCTXData, NULL, &m30689_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30690_MI;
struct t107;
#define m30690(__this, p0, p1, method) (void)m23599_gshared((t107 *)__this, (t168*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.Decimal>>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4343_0_0_0;
extern Il2CppType t4343_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30690_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4343_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30690_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30690_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m23599_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30690_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30690_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30691_MI;
struct t107;
#define m30691(__this, p0, method) (bool)m23600_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.Decimal>>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2089_0_0_0;
static ParameterInfo t107_m30691_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t2089_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30691_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30691_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m23600_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30691_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30691_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30692_MI;
struct t107;
#define m30692(__this, p0, method) (int32_t)m23601_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.Decimal>>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2089_0_0_0;
static ParameterInfo t107_m30692_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t2089_0_0_0},
};
extern TypeInfo t2089_TI;
static Il2CppRGCTXData m30692_RGCTXData[1] = 
{
	&t2089_TI/* Class Usage */,
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30692_GM;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30692_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m23601_gshared, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t107_m30692_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30692_RGCTXData, NULL, &m30692_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30693_MI;
struct t107;
#define m30693(__this, p0, p1, method) (void)m23602_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.Decimal>>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2089_0_0_0;
static ParameterInfo t107_m30693_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t2089_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30693_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30693_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m23602_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30693_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30693_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30694_MI;
struct t107;
extern MethodInfo m30695_MI;
struct t107;
#define m30695(__this, p0, p1, method) (void)m23604_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.Decimal>>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2089_0_0_0;
static ParameterInfo t107_m30695_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t2089_0_0_0},
};
extern TypeInfo t2089_TI;
static Il2CppRGCTXData m30695_RGCTXData[1] = 
{
	&t2089_TI/* Class Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30695_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30695_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m23604_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30695_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, m30695_RGCTXData, NULL, &m30695_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.IComparable`1<System.Decimal>>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2089_1_0_0;
static ParameterInfo t107_m30694_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2089_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30694_GM;
extern void* RuntimeInvoker_t109_t110_t5765 (MethodInfo* method, void* obj, void** args);
MethodInfo m30694_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5765, t107_m30694_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30694_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4085.h"
extern TypeInfo t4085_TI;
#include "t4085MD.h"
extern MethodInfo m23145_MI;
extern MethodInfo m30696_MI;
struct t107;
#define m30696(__this, method) (t5*)m23605_gshared((t107 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.Decimal>>()
extern TypeInfo t107_TI;
extern TypeInfo t5766_TI;
extern TypeInfo t4085_TI;
static Il2CppRGCTXData m30696_RGCTXData[2] = 
{
	&t4085_TI/* Class Usage */,
	&m23145_MI/* Method Usage */,
};
extern Il2CppType t5766_0_0_0;
extern Il2CppGenericMethod m30696_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30696_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m23605_gshared, &t107_TI, &t5766_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, m30696_RGCTXData, NULL, &m30696_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30697_MI;
struct t107;
extern MethodInfo m30698_MI;
struct t107;
#define m30698(__this, p0, method) (t5*)m23596_gshared((t107 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.IEquatable`1<System.Decimal>>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t2090_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30698_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t2090_0_0_0;
extern Il2CppType t2090_0_0_0;
extern Il2CppGenericMethod m30698_GM;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30698_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m23596_gshared, &t107_TI, &t2090_0_0_0, RuntimeInvoker_t5_t110, t107_m30698_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30698_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.IEquatable`1<System.Decimal>>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2090_1_0_2;
extern Il2CppType t2090_1_0_0;
static ParameterInfo t107_m30697_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2090_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30697_GM;
extern void* RuntimeInvoker_t109_t110_t5767 (MethodInfo* method, void* obj, void** args);
MethodInfo m30697_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5767, t107_m30697_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30697_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30699_MI;
struct t107;
#define m30699(__this, p0, method) (void)m23597_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.Decimal>>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2090_0_0_0;
extern Il2CppType t2090_0_0_0;
static ParameterInfo t107_m30699_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t2090_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30699_GM;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30699_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m23597_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t107_m30699_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30699_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30700_MI;
struct t107;
#define m30700(__this, p0, method) (bool)m23598_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.Decimal>>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2090_0_0_0;
static ParameterInfo t107_m30700_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t2090_0_0_0},
};
extern TypeInfo t2090_TI;
static Il2CppRGCTXData m30700_RGCTXData[1] = 
{
	&t2090_TI/* Class Usage */,
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30700_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30700_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m23598_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30700_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30700_RGCTXData, NULL, &m30700_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30701_MI;
struct t107;
#define m30701(__this, p0, p1, method) (void)m23599_gshared((t107 *)__this, (t168*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.Decimal>>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4344_0_0_0;
extern Il2CppType t4344_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30701_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4344_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30701_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30701_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m23599_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30701_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30701_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30702_MI;
struct t107;
#define m30702(__this, p0, method) (bool)m23600_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.Decimal>>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2090_0_0_0;
static ParameterInfo t107_m30702_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t2090_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30702_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30702_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m23600_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30702_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30702_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30703_MI;
struct t107;
#define m30703(__this, p0, method) (int32_t)m23601_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.Decimal>>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2090_0_0_0;
static ParameterInfo t107_m30703_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t2090_0_0_0},
};
extern TypeInfo t2090_TI;
static Il2CppRGCTXData m30703_RGCTXData[1] = 
{
	&t2090_TI/* Class Usage */,
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30703_GM;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30703_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m23601_gshared, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t107_m30703_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30703_RGCTXData, NULL, &m30703_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30704_MI;
struct t107;
#define m30704(__this, p0, p1, method) (void)m23602_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.Decimal>>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2090_0_0_0;
static ParameterInfo t107_m30704_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t2090_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30704_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30704_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m23602_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30704_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30704_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30705_MI;
struct t107;
extern MethodInfo m30706_MI;
struct t107;
#define m30706(__this, p0, p1, method) (void)m23604_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.Decimal>>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2090_0_0_0;
static ParameterInfo t107_m30706_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t2090_0_0_0},
};
extern TypeInfo t2090_TI;
static Il2CppRGCTXData m30706_RGCTXData[1] = 
{
	&t2090_TI/* Class Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30706_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30706_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m23604_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30706_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, m30706_RGCTXData, NULL, &m30706_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.IEquatable`1<System.Decimal>>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2090_1_0_0;
static ParameterInfo t107_m30705_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2090_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30705_GM;
extern void* RuntimeInvoker_t109_t110_t5767 (MethodInfo* method, void* obj, void** args);
MethodInfo m30705_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5767, t107_m30705_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30705_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4086.h"
extern TypeInfo t4086_TI;
#include "t4086MD.h"
extern MethodInfo m23150_MI;
extern MethodInfo m30707_MI;
struct t107;
#define m30707(__this, method) (t5*)m23605_gshared((t107 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.Decimal>>()
extern TypeInfo t107_TI;
extern TypeInfo t5768_TI;
extern TypeInfo t4086_TI;
static Il2CppRGCTXData m30707_RGCTXData[2] = 
{
	&t4086_TI/* Class Usage */,
	&m23150_MI/* Method Usage */,
};
extern Il2CppType t5768_0_0_0;
extern Il2CppGenericMethod m30707_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30707_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m23605_gshared, &t107_TI, &t5768_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, m30707_RGCTXData, NULL, &m30707_GM};
#ifndef _MSC_VER
#else
#endif

#include "t61.h"
extern MethodInfo m30708_MI;
struct t107;
extern MethodInfo m30709_MI;
struct t107;
 t61  m30709 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t61  m30709 (t107 * __this, int32_t p0, MethodInfo* method){
	t61  V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t61_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30709_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t61_0_0_0;
extern Il2CppType t61_0_0_0;
extern Il2CppGenericMethod m30709_GM;
extern void* RuntimeInvoker_t61_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30709_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m30709, &t107_TI, &t61_0_0_0, RuntimeInvoker_t61_t110, t107_m30709_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30709_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.TimeSpan>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t61_1_0_2;
extern Il2CppType t61_1_0_0;
static ParameterInfo t107_m30708_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t61_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30708_GM;
extern void* RuntimeInvoker_t109_t110_t5769 (MethodInfo* method, void* obj, void** args);
MethodInfo m30708_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5769, t107_m30708_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30708_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30710_MI;
struct t107;
 void m30710 (t107 * __this, t61  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30710 (t107 * __this, t61  p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.TimeSpan>(T)
extern TypeInfo t107_TI;
extern Il2CppType t61_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t107_m30710_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30710_GM;
extern void* RuntimeInvoker_t109_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m30710_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m30710, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t61, t107_m30710_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30710_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30711_MI;
struct t107;
 bool m30711 (t107 * __this, t61  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30711 (t107 * __this, t61  p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t61  V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		t61  L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t61_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		t61  L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t61_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t61  L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t61_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t61_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.TimeSpan>(T)
extern TypeInfo t107_TI;
extern Il2CppType t61_0_0_0;
static ParameterInfo t107_m30711_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30711_GM;
extern void* RuntimeInvoker_t108_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m30711_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m30711, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t61, t107_m30711_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30711_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30712_MI;
struct t107;
 void m30712 (t107 * __this, t2391* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30712 (t107 * __this, t2391* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.TimeSpan>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t2391_0_0_0;
extern Il2CppType t2391_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30712_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t2391_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30712_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30712_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m30712, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30712_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30712_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30713_MI;
struct t107;
 bool m30713 (t107 * __this, t61  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30713 (t107 * __this, t61  p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.TimeSpan>(T)
extern TypeInfo t107_TI;
extern Il2CppType t61_0_0_0;
static ParameterInfo t107_m30713_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30713_GM;
extern void* RuntimeInvoker_t108_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m30713_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m30713, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t61, t107_m30713_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30713_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30714_MI;
struct t107;
 int32_t m30714 (t107 * __this, t61  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30714 (t107 * __this, t61  p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t61  V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		t61  L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t61_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		t61  L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t61_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		t61  L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t61_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t61_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.TimeSpan>(T)
extern TypeInfo t107_TI;
extern Il2CppType t61_0_0_0;
static ParameterInfo t107_m30714_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30714_GM;
extern void* RuntimeInvoker_t110_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m30714_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m30714, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t61, t107_m30714_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30714_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30715_MI;
struct t107;
 void m30715 (t107 * __this, int32_t p0, t61  p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30715 (t107 * __this, int32_t p0, t61  p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.TimeSpan>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t107_m30715_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30715_GM;
extern void* RuntimeInvoker_t109_t110_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m30715_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m30715, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t61, t107_m30715_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30715_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30716_MI;
struct t107;
extern MethodInfo m30717_MI;
struct t107;
 void m30717 (t107 * __this, int32_t p0, t61  p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30717 (t107 * __this, int32_t p0, t61  p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		t61  L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t61_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.TimeSpan>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t107_m30717_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30717_GM;
extern void* RuntimeInvoker_t109_t110_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m30717_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m30717, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t61, t107_m30717_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30717_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.TimeSpan>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t61_1_0_0;
static ParameterInfo t107_m30716_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t61_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30716_GM;
extern void* RuntimeInvoker_t109_t110_t5769 (MethodInfo* method, void* obj, void** args);
MethodInfo m30716_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5769, t107_m30716_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30716_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4087.h"
extern TypeInfo t4087_TI;
#include "t4087MD.h"
extern MethodInfo m23155_MI;
extern MethodInfo m30718_MI;
struct t107;
 t5* m30718 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m30718 (t107 * __this, MethodInfo* method){
	{
		t4087  L_0 = {0};
		m23155(&L_0, __this, &m23155_MI);
		t4087  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4087_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.TimeSpan>()
extern TypeInfo t107_TI;
extern TypeInfo t5770_TI;
extern Il2CppType t5770_0_0_0;
extern Il2CppGenericMethod m30718_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30718_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m30718, &t107_TI, &t5770_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m30718_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30719_MI;
struct t107;
extern MethodInfo m30720_MI;
struct t107;
#define m30720(__this, p0, method) (t5*)m23596_gshared((t107 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.IComparable`1<System.TimeSpan>>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t2440_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30720_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t2440_0_0_0;
extern Il2CppType t2440_0_0_0;
extern Il2CppGenericMethod m30720_GM;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30720_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m23596_gshared, &t107_TI, &t2440_0_0_0, RuntimeInvoker_t5_t110, t107_m30720_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30720_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.IComparable`1<System.TimeSpan>>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2440_1_0_2;
extern Il2CppType t2440_1_0_0;
static ParameterInfo t107_m30719_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2440_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30719_GM;
extern void* RuntimeInvoker_t109_t110_t5771 (MethodInfo* method, void* obj, void** args);
MethodInfo m30719_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5771, t107_m30719_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30719_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30721_MI;
struct t107;
#define m30721(__this, p0, method) (void)m23597_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.TimeSpan>>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2440_0_0_0;
extern Il2CppType t2440_0_0_0;
static ParameterInfo t107_m30721_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t2440_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30721_GM;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30721_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m23597_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t107_m30721_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30721_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30722_MI;
struct t107;
#define m30722(__this, p0, method) (bool)m23598_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.TimeSpan>>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2440_0_0_0;
static ParameterInfo t107_m30722_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t2440_0_0_0},
};
extern TypeInfo t2440_TI;
static Il2CppRGCTXData m30722_RGCTXData[1] = 
{
	&t2440_TI/* Class Usage */,
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30722_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30722_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m23598_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30722_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30722_RGCTXData, NULL, &m30722_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30723_MI;
struct t107;
#define m30723(__this, p0, p1, method) (void)m23599_gshared((t107 *)__this, (t168*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.TimeSpan>>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4345_0_0_0;
extern Il2CppType t4345_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30723_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4345_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30723_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30723_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m23599_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30723_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30723_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30724_MI;
struct t107;
#define m30724(__this, p0, method) (bool)m23600_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.TimeSpan>>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2440_0_0_0;
static ParameterInfo t107_m30724_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t2440_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30724_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30724_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m23600_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30724_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30724_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30725_MI;
struct t107;
#define m30725(__this, p0, method) (int32_t)m23601_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.TimeSpan>>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2440_0_0_0;
static ParameterInfo t107_m30725_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t2440_0_0_0},
};
extern TypeInfo t2440_TI;
static Il2CppRGCTXData m30725_RGCTXData[1] = 
{
	&t2440_TI/* Class Usage */,
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30725_GM;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30725_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m23601_gshared, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t107_m30725_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30725_RGCTXData, NULL, &m30725_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30726_MI;
struct t107;
#define m30726(__this, p0, p1, method) (void)m23602_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.TimeSpan>>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2440_0_0_0;
static ParameterInfo t107_m30726_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t2440_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30726_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30726_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m23602_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30726_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30726_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30727_MI;
struct t107;
extern MethodInfo m30728_MI;
struct t107;
#define m30728(__this, p0, p1, method) (void)m23604_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.TimeSpan>>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2440_0_0_0;
static ParameterInfo t107_m30728_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t2440_0_0_0},
};
extern TypeInfo t2440_TI;
static Il2CppRGCTXData m30728_RGCTXData[1] = 
{
	&t2440_TI/* Class Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30728_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30728_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m23604_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30728_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, m30728_RGCTXData, NULL, &m30728_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.IComparable`1<System.TimeSpan>>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2440_1_0_0;
static ParameterInfo t107_m30727_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2440_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30727_GM;
extern void* RuntimeInvoker_t109_t110_t5771 (MethodInfo* method, void* obj, void** args);
MethodInfo m30727_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5771, t107_m30727_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30727_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4088.h"
extern TypeInfo t4088_TI;
#include "t4088MD.h"
extern MethodInfo m23160_MI;
extern MethodInfo m30729_MI;
struct t107;
#define m30729(__this, method) (t5*)m23605_gshared((t107 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.TimeSpan>>()
extern TypeInfo t107_TI;
extern TypeInfo t5772_TI;
extern TypeInfo t4088_TI;
static Il2CppRGCTXData m30729_RGCTXData[2] = 
{
	&t4088_TI/* Class Usage */,
	&m23160_MI/* Method Usage */,
};
extern Il2CppType t5772_0_0_0;
extern Il2CppGenericMethod m30729_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30729_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m23605_gshared, &t107_TI, &t5772_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, m30729_RGCTXData, NULL, &m30729_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30730_MI;
struct t107;
extern MethodInfo m30731_MI;
struct t107;
#define m30731(__this, p0, method) (t5*)m23596_gshared((t107 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.IEquatable`1<System.TimeSpan>>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t2441_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30731_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t2441_0_0_0;
extern Il2CppType t2441_0_0_0;
extern Il2CppGenericMethod m30731_GM;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30731_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m23596_gshared, &t107_TI, &t2441_0_0_0, RuntimeInvoker_t5_t110, t107_m30731_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30731_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.IEquatable`1<System.TimeSpan>>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2441_1_0_2;
extern Il2CppType t2441_1_0_0;
static ParameterInfo t107_m30730_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2441_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30730_GM;
extern void* RuntimeInvoker_t109_t110_t5773 (MethodInfo* method, void* obj, void** args);
MethodInfo m30730_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5773, t107_m30730_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30730_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30732_MI;
struct t107;
#define m30732(__this, p0, method) (void)m23597_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.TimeSpan>>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2441_0_0_0;
extern Il2CppType t2441_0_0_0;
static ParameterInfo t107_m30732_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t2441_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30732_GM;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30732_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m23597_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t107_m30732_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30732_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30733_MI;
struct t107;
#define m30733(__this, p0, method) (bool)m23598_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.TimeSpan>>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2441_0_0_0;
static ParameterInfo t107_m30733_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t2441_0_0_0},
};
extern TypeInfo t2441_TI;
static Il2CppRGCTXData m30733_RGCTXData[1] = 
{
	&t2441_TI/* Class Usage */,
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30733_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30733_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m23598_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30733_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30733_RGCTXData, NULL, &m30733_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30734_MI;
struct t107;
#define m30734(__this, p0, p1, method) (void)m23599_gshared((t107 *)__this, (t168*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.TimeSpan>>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4346_0_0_0;
extern Il2CppType t4346_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30734_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4346_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30734_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30734_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m23599_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30734_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30734_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30735_MI;
struct t107;
#define m30735(__this, p0, method) (bool)m23600_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.TimeSpan>>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2441_0_0_0;
static ParameterInfo t107_m30735_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t2441_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30735_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30735_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m23600_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30735_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30735_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30736_MI;
struct t107;
#define m30736(__this, p0, method) (int32_t)m23601_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.TimeSpan>>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2441_0_0_0;
static ParameterInfo t107_m30736_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t2441_0_0_0},
};
extern TypeInfo t2441_TI;
static Il2CppRGCTXData m30736_RGCTXData[1] = 
{
	&t2441_TI/* Class Usage */,
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30736_GM;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30736_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m23601_gshared, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t107_m30736_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30736_RGCTXData, NULL, &m30736_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30737_MI;
struct t107;
#define m30737(__this, p0, p1, method) (void)m23602_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.TimeSpan>>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2441_0_0_0;
static ParameterInfo t107_m30737_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t2441_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30737_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30737_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m23602_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30737_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30737_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30738_MI;
struct t107;
extern MethodInfo m30739_MI;
struct t107;
#define m30739(__this, p0, p1, method) (void)m23604_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.TimeSpan>>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2441_0_0_0;
static ParameterInfo t107_m30739_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t2441_0_0_0},
};
extern TypeInfo t2441_TI;
static Il2CppRGCTXData m30739_RGCTXData[1] = 
{
	&t2441_TI/* Class Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30739_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30739_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m23604_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30739_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, m30739_RGCTXData, NULL, &m30739_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.IEquatable`1<System.TimeSpan>>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2441_1_0_0;
static ParameterInfo t107_m30738_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2441_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30738_GM;
extern void* RuntimeInvoker_t109_t110_t5773 (MethodInfo* method, void* obj, void** args);
MethodInfo m30738_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5773, t107_m30738_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30738_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4089.h"
extern TypeInfo t4089_TI;
#include "t4089MD.h"
extern MethodInfo m23165_MI;
extern MethodInfo m30740_MI;
struct t107;
#define m30740(__this, method) (t5*)m23605_gshared((t107 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.TimeSpan>>()
extern TypeInfo t107_TI;
extern TypeInfo t5774_TI;
extern TypeInfo t4089_TI;
static Il2CppRGCTXData m30740_RGCTXData[2] = 
{
	&t4089_TI/* Class Usage */,
	&m23165_MI/* Method Usage */,
};
extern Il2CppType t5774_0_0_0;
extern Il2CppGenericMethod m30740_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30740_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m23605_gshared, &t107_TI, &t5774_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, m30740_RGCTXData, NULL, &m30740_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1798.h"
extern MethodInfo m30741_MI;
struct t107;
extern MethodInfo m30742_MI;
struct t107;
 int32_t m30742 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30742 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1798_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30742_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1798_0_0_0;
extern Il2CppType t1798_0_0_0;
extern Il2CppGenericMethod m30742_GM;
extern void* RuntimeInvoker_t1798_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30742_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m30742, &t107_TI, &t1798_0_0_0, RuntimeInvoker_t1798_t110, t107_m30742_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30742_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1798_1_0_2;
extern Il2CppType t1798_1_0_0;
static ParameterInfo t107_m30741_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1798_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30741_GM;
extern void* RuntimeInvoker_t109_t110_t5775 (MethodInfo* method, void* obj, void** args);
MethodInfo m30741_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5775, t107_m30741_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30741_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30743_MI;
struct t107;
 void m30743 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30743 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1798_0_0_0;
extern Il2CppType t1798_0_0_0;
static ParameterInfo t107_m30743_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1798_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30743_GM;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30743_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m30743, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t107_m30743_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30743_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30744_MI;
struct t107;
 bool m30744 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30744 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1798_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1798_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t1798_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1798_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1798_0_0_0;
static ParameterInfo t107_m30744_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1798_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30744_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30744_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m30744, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m30744_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30744_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30745_MI;
struct t107;
 void m30745 (t107 * __this, t4347* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30745 (t107 * __this, t4347* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4347_0_0_0;
extern Il2CppType t4347_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30745_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4347_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30745_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30745_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m30745, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30745_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30745_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30746_MI;
struct t107;
 bool m30746 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30746 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1798_0_0_0;
static ParameterInfo t107_m30746_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1798_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30746_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30746_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m30746, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m30746_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30746_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30747_MI;
struct t107;
 int32_t m30747 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30747 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1798_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1798_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1798_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1798_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1798_0_0_0;
static ParameterInfo t107_m30747_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1798_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30747_GM;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30747_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m30747, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t107_m30747_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30747_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30748_MI;
struct t107;
 void m30748 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30748 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1798_0_0_0;
static ParameterInfo t107_m30748_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1798_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30748_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30748_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m30748, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m30748_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30748_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30749_MI;
struct t107;
extern MethodInfo m30750_MI;
struct t107;
 void m30750 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30750 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1798_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1798_0_0_0;
static ParameterInfo t107_m30750_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1798_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30750_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30750_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m30750, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m30750_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30750_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1798_1_0_0;
static ParameterInfo t107_m30749_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1798_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30749_GM;
extern void* RuntimeInvoker_t109_t110_t5775 (MethodInfo* method, void* obj, void** args);
MethodInfo m30749_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5775, t107_m30749_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30749_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4090.h"
extern TypeInfo t4090_TI;
#include "t4090MD.h"
extern MethodInfo m23170_MI;
extern MethodInfo m30751_MI;
struct t107;
 t5* m30751 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m30751 (t107 * __this, MethodInfo* method){
	{
		t4090  L_0 = {0};
		m23170(&L_0, __this, &m23170_MI);
		t4090  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4090_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>()
extern TypeInfo t107_TI;
extern TypeInfo t5776_TI;
extern Il2CppType t5776_0_0_0;
extern Il2CppGenericMethod m30751_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30751_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m30751, &t107_TI, &t5776_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m30751_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1799.h"
extern MethodInfo m30752_MI;
struct t107;
extern MethodInfo m30753_MI;
struct t107;
 int32_t m30753 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30753 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.FormatterTypeStyle>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1799_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30753_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1799_0_0_0;
extern Il2CppType t1799_0_0_0;
extern Il2CppGenericMethod m30753_GM;
extern void* RuntimeInvoker_t1799_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30753_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m30753, &t107_TI, &t1799_0_0_0, RuntimeInvoker_t1799_t110, t107_m30753_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30753_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Runtime.Serialization.Formatters.FormatterTypeStyle>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1799_1_0_2;
extern Il2CppType t1799_1_0_0;
static ParameterInfo t107_m30752_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1799_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30752_GM;
extern void* RuntimeInvoker_t109_t110_t5777 (MethodInfo* method, void* obj, void** args);
MethodInfo m30752_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5777, t107_m30752_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30752_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30754_MI;
struct t107;
 void m30754 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30754 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Serialization.Formatters.FormatterTypeStyle>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1799_0_0_0;
extern Il2CppType t1799_0_0_0;
static ParameterInfo t107_m30754_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1799_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30754_GM;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30754_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m30754, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t107_m30754_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30754_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30755_MI;
struct t107;
 bool m30755 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30755 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1799_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1799_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t1799_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1799_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Serialization.Formatters.FormatterTypeStyle>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1799_0_0_0;
static ParameterInfo t107_m30755_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1799_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30755_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30755_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m30755, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m30755_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30755_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30756_MI;
struct t107;
 void m30756 (t107 * __this, t4348* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30756 (t107 * __this, t4348* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Serialization.Formatters.FormatterTypeStyle>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4348_0_0_0;
extern Il2CppType t4348_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30756_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4348_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30756_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30756_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m30756, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30756_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30756_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30757_MI;
struct t107;
 bool m30757 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30757 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Serialization.Formatters.FormatterTypeStyle>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1799_0_0_0;
static ParameterInfo t107_m30757_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1799_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30757_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30757_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m30757, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m30757_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30757_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30758_MI;
struct t107;
 int32_t m30758 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30758 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1799_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1799_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1799_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1799_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Serialization.Formatters.FormatterTypeStyle>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1799_0_0_0;
static ParameterInfo t107_m30758_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1799_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30758_GM;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30758_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m30758, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t107_m30758_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30758_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30759_MI;
struct t107;
 void m30759 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30759 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Runtime.Serialization.Formatters.FormatterTypeStyle>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1799_0_0_0;
static ParameterInfo t107_m30759_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1799_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30759_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30759_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m30759, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m30759_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30759_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30760_MI;
struct t107;
extern MethodInfo m30761_MI;
struct t107;
 void m30761 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30761 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1799_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Runtime.Serialization.Formatters.FormatterTypeStyle>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1799_0_0_0;
static ParameterInfo t107_m30761_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1799_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30761_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30761_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m30761, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m30761_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30761_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Runtime.Serialization.Formatters.FormatterTypeStyle>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1799_1_0_0;
static ParameterInfo t107_m30760_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1799_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30760_GM;
extern void* RuntimeInvoker_t109_t110_t5777 (MethodInfo* method, void* obj, void** args);
MethodInfo m30760_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5777, t107_m30760_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30760_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4091.h"
extern TypeInfo t4091_TI;
#include "t4091MD.h"
extern MethodInfo m23175_MI;
extern MethodInfo m30762_MI;
struct t107;
 t5* m30762 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m30762 (t107 * __this, MethodInfo* method){
	{
		t4091  L_0 = {0};
		m23175(&L_0, __this, &m23175_MI);
		t4091  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4091_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Serialization.Formatters.FormatterTypeStyle>()
extern TypeInfo t107_TI;
extern TypeInfo t5778_TI;
extern Il2CppType t5778_0_0_0;
extern Il2CppGenericMethod m30762_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30762_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m30762, &t107_TI, &t5778_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m30762_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1800.h"
extern MethodInfo m30763_MI;
struct t107;
extern MethodInfo m30764_MI;
struct t107;
 int32_t m30764 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30764 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.TypeFilterLevel>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1800_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30764_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1800_0_0_0;
extern Il2CppType t1800_0_0_0;
extern Il2CppGenericMethod m30764_GM;
extern void* RuntimeInvoker_t1800_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30764_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m30764, &t107_TI, &t1800_0_0_0, RuntimeInvoker_t1800_t110, t107_m30764_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30764_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Runtime.Serialization.Formatters.TypeFilterLevel>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1800_1_0_2;
extern Il2CppType t1800_1_0_0;
static ParameterInfo t107_m30763_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1800_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30763_GM;
extern void* RuntimeInvoker_t109_t110_t5779 (MethodInfo* method, void* obj, void** args);
MethodInfo m30763_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5779, t107_m30763_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30763_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30765_MI;
struct t107;
 void m30765 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30765 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Serialization.Formatters.TypeFilterLevel>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1800_0_0_0;
extern Il2CppType t1800_0_0_0;
static ParameterInfo t107_m30765_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1800_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30765_GM;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30765_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m30765, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t107_m30765_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30765_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30766_MI;
struct t107;
 bool m30766 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30766 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1800_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1800_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t1800_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1800_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Serialization.Formatters.TypeFilterLevel>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1800_0_0_0;
static ParameterInfo t107_m30766_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1800_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30766_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30766_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m30766, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m30766_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30766_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30767_MI;
struct t107;
 void m30767 (t107 * __this, t4349* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30767 (t107 * __this, t4349* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Serialization.Formatters.TypeFilterLevel>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4349_0_0_0;
extern Il2CppType t4349_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30767_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4349_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30767_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30767_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m30767, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30767_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30767_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30768_MI;
struct t107;
 bool m30768 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30768 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Serialization.Formatters.TypeFilterLevel>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1800_0_0_0;
static ParameterInfo t107_m30768_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1800_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30768_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30768_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m30768, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m30768_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30768_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30769_MI;
struct t107;
 int32_t m30769 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30769 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1800_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1800_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1800_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1800_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Serialization.Formatters.TypeFilterLevel>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1800_0_0_0;
static ParameterInfo t107_m30769_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1800_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30769_GM;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30769_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m30769, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t107_m30769_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30769_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30770_MI;
struct t107;
 void m30770 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30770 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Runtime.Serialization.Formatters.TypeFilterLevel>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1800_0_0_0;
static ParameterInfo t107_m30770_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1800_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30770_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30770_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m30770, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m30770_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30770_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30771_MI;
struct t107;
extern MethodInfo m30772_MI;
struct t107;
 void m30772 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30772 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1800_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Runtime.Serialization.Formatters.TypeFilterLevel>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1800_0_0_0;
static ParameterInfo t107_m30772_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1800_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30772_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30772_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m30772, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m30772_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30772_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Runtime.Serialization.Formatters.TypeFilterLevel>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1800_1_0_0;
static ParameterInfo t107_m30771_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1800_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30771_GM;
extern void* RuntimeInvoker_t109_t110_t5779 (MethodInfo* method, void* obj, void** args);
MethodInfo m30771_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5779, t107_m30771_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30771_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4092.h"
extern TypeInfo t4092_TI;
#include "t4092MD.h"
extern MethodInfo m23180_MI;
extern MethodInfo m30773_MI;
struct t107;
 t5* m30773 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m30773 (t107 * __this, MethodInfo* method){
	{
		t4092  L_0 = {0};
		m23180(&L_0, __this, &m23180_MI);
		t4092  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4092_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Serialization.Formatters.TypeFilterLevel>()
extern TypeInfo t107_TI;
extern TypeInfo t5780_TI;
extern Il2CppType t5780_0_0_0;
extern Il2CppGenericMethod m30773_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30773_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m30773, &t107_TI, &t5780_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m30773_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1826.h"
extern MethodInfo m30774_MI;
struct t107;
extern MethodInfo m30775_MI;
struct t107;
 uint8_t m30775 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 uint8_t m30775 (t107 * __this, int32_t p0, MethodInfo* method){
	uint8_t V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.Runtime.Serialization.ObjectRecordStatus>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1826_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30775_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1826_0_0_0;
extern Il2CppType t1826_0_0_0;
extern Il2CppGenericMethod m30775_GM;
extern void* RuntimeInvoker_t1826_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30775_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m30775, &t107_TI, &t1826_0_0_0, RuntimeInvoker_t1826_t110, t107_m30775_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30775_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Runtime.Serialization.ObjectRecordStatus>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1826_1_0_2;
extern Il2CppType t1826_1_0_0;
static ParameterInfo t107_m30774_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1826_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30774_GM;
extern void* RuntimeInvoker_t109_t110_t5781 (MethodInfo* method, void* obj, void** args);
MethodInfo m30774_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5781, t107_m30774_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30774_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30776_MI;
struct t107;
 void m30776 (t107 * __this, uint8_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30776 (t107 * __this, uint8_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Serialization.ObjectRecordStatus>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1826_0_0_0;
extern Il2CppType t1826_0_0_0;
static ParameterInfo t107_m30776_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1826_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30776_GM;
extern void* RuntimeInvoker_t109_t494 (MethodInfo* method, void* obj, void** args);
MethodInfo m30776_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m30776, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t494, t107_m30776_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30776_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30777_MI;
struct t107;
 bool m30777 (t107 * __this, uint8_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30777 (t107 * __this, uint8_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		uint8_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1826_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		uint8_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1826_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		uint8_t L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t1826_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1826_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Serialization.ObjectRecordStatus>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1826_0_0_0;
static ParameterInfo t107_m30777_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1826_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30777_GM;
extern void* RuntimeInvoker_t108_t494 (MethodInfo* method, void* obj, void** args);
MethodInfo m30777_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m30777, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t494, t107_m30777_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30777_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30778_MI;
struct t107;
 void m30778 (t107 * __this, t4350* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30778 (t107 * __this, t4350* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Serialization.ObjectRecordStatus>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4350_0_0_0;
extern Il2CppType t4350_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30778_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4350_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30778_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30778_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m30778, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30778_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30778_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30779_MI;
struct t107;
 bool m30779 (t107 * __this, uint8_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30779 (t107 * __this, uint8_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Serialization.ObjectRecordStatus>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1826_0_0_0;
static ParameterInfo t107_m30779_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1826_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30779_GM;
extern void* RuntimeInvoker_t108_t494 (MethodInfo* method, void* obj, void** args);
MethodInfo m30779_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m30779, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t494, t107_m30779_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30779_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30780_MI;
struct t107;
 int32_t m30780 (t107 * __this, uint8_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30780 (t107 * __this, uint8_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		uint8_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1826_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		uint8_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1826_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		uint8_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1826_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1826_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Serialization.ObjectRecordStatus>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1826_0_0_0;
static ParameterInfo t107_m30780_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1826_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30780_GM;
extern void* RuntimeInvoker_t110_t494 (MethodInfo* method, void* obj, void** args);
MethodInfo m30780_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m30780, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t494, t107_m30780_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30780_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30781_MI;
struct t107;
 void m30781 (t107 * __this, int32_t p0, uint8_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30781 (t107 * __this, int32_t p0, uint8_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Runtime.Serialization.ObjectRecordStatus>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1826_0_0_0;
static ParameterInfo t107_m30781_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1826_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30781_GM;
extern void* RuntimeInvoker_t109_t110_t494 (MethodInfo* method, void* obj, void** args);
MethodInfo m30781_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m30781, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t494, t107_m30781_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30781_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30782_MI;
struct t107;
extern MethodInfo m30783_MI;
struct t107;
 void m30783 (t107 * __this, int32_t p0, uint8_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30783 (t107 * __this, int32_t p0, uint8_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		uint8_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1826_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Runtime.Serialization.ObjectRecordStatus>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1826_0_0_0;
static ParameterInfo t107_m30783_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1826_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30783_GM;
extern void* RuntimeInvoker_t109_t110_t494 (MethodInfo* method, void* obj, void** args);
MethodInfo m30783_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m30783, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t494, t107_m30783_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30783_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Runtime.Serialization.ObjectRecordStatus>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1826_1_0_0;
static ParameterInfo t107_m30782_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1826_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30782_GM;
extern void* RuntimeInvoker_t109_t110_t5781 (MethodInfo* method, void* obj, void** args);
MethodInfo m30782_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5781, t107_m30782_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30782_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4093.h"
extern TypeInfo t4093_TI;
#include "t4093MD.h"
extern MethodInfo m23185_MI;
extern MethodInfo m30784_MI;
struct t107;
 t5* m30784 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m30784 (t107 * __this, MethodInfo* method){
	{
		t4093  L_0 = {0};
		m23185(&L_0, __this, &m23185_MI);
		t4093  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4093_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Serialization.ObjectRecordStatus>()
extern TypeInfo t107_TI;
extern TypeInfo t5782_TI;
extern Il2CppType t5782_0_0_0;
extern Il2CppGenericMethod m30784_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30784_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m30784, &t107_TI, &t5782_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m30784_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1827.h"
extern MethodInfo m30785_MI;
struct t107;
extern MethodInfo m30786_MI;
struct t107;
#define m30786(__this, p0, method) (t1827 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.Runtime.Serialization.OnDeserializedAttribute>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1827_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30786_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1827_0_0_0;
extern Il2CppType t1827_0_0_0;
extern Il2CppGenericMethod m30786_GM;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30786_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m23596_gshared, &t107_TI, &t1827_0_0_0, RuntimeInvoker_t5_t110, t107_m30786_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30786_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Runtime.Serialization.OnDeserializedAttribute>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1827_1_0_2;
extern Il2CppType t1827_1_0_0;
static ParameterInfo t107_m30785_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1827_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30785_GM;
extern void* RuntimeInvoker_t109_t110_t5783 (MethodInfo* method, void* obj, void** args);
MethodInfo m30785_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5783, t107_m30785_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30785_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30787_MI;
struct t107;
#define m30787(__this, p0, method) (void)m23597_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Serialization.OnDeserializedAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1827_0_0_0;
extern Il2CppType t1827_0_0_0;
static ParameterInfo t107_m30787_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1827_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30787_GM;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30787_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m23597_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t107_m30787_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30787_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30788_MI;
struct t107;
#define m30788(__this, p0, method) (bool)m23598_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Serialization.OnDeserializedAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1827_0_0_0;
static ParameterInfo t107_m30788_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1827_0_0_0},
};
extern TypeInfo t1827_TI;
static Il2CppRGCTXData m30788_RGCTXData[1] = 
{
	&t1827_TI/* Class Usage */,
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30788_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30788_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m23598_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30788_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30788_RGCTXData, NULL, &m30788_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30789_MI;
struct t107;
#define m30789(__this, p0, p1, method) (void)m23599_gshared((t107 *)__this, (t168*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Serialization.OnDeserializedAttribute>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4351_0_0_0;
extern Il2CppType t4351_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30789_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4351_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30789_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30789_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m23599_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30789_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30789_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30790_MI;
struct t107;
#define m30790(__this, p0, method) (bool)m23600_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Serialization.OnDeserializedAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1827_0_0_0;
static ParameterInfo t107_m30790_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1827_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30790_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30790_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m23600_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30790_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30790_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30791_MI;
struct t107;
#define m30791(__this, p0, method) (int32_t)m23601_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Serialization.OnDeserializedAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1827_0_0_0;
static ParameterInfo t107_m30791_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1827_0_0_0},
};
extern TypeInfo t1827_TI;
static Il2CppRGCTXData m30791_RGCTXData[1] = 
{
	&t1827_TI/* Class Usage */,
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30791_GM;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30791_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m23601_gshared, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t107_m30791_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30791_RGCTXData, NULL, &m30791_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30792_MI;
struct t107;
#define m30792(__this, p0, p1, method) (void)m23602_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Runtime.Serialization.OnDeserializedAttribute>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1827_0_0_0;
static ParameterInfo t107_m30792_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1827_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30792_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30792_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m23602_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30792_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30792_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30793_MI;
struct t107;
extern MethodInfo m30794_MI;
struct t107;
#define m30794(__this, p0, p1, method) (void)m23604_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Runtime.Serialization.OnDeserializedAttribute>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1827_0_0_0;
static ParameterInfo t107_m30794_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1827_0_0_0},
};
extern TypeInfo t1827_TI;
static Il2CppRGCTXData m30794_RGCTXData[1] = 
{
	&t1827_TI/* Class Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30794_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30794_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m23604_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30794_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, m30794_RGCTXData, NULL, &m30794_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Runtime.Serialization.OnDeserializedAttribute>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1827_1_0_0;
static ParameterInfo t107_m30793_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1827_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30793_GM;
extern void* RuntimeInvoker_t109_t110_t5783 (MethodInfo* method, void* obj, void** args);
MethodInfo m30793_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5783, t107_m30793_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30793_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4094.h"
extern TypeInfo t4094_TI;
#include "t4094MD.h"
extern MethodInfo m23190_MI;
extern MethodInfo m30795_MI;
struct t107;
#define m30795(__this, method) (t5*)m23605_gshared((t107 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Serialization.OnDeserializedAttribute>()
extern TypeInfo t107_TI;
extern TypeInfo t5784_TI;
extern TypeInfo t4094_TI;
static Il2CppRGCTXData m30795_RGCTXData[2] = 
{
	&t4094_TI/* Class Usage */,
	&m23190_MI/* Method Usage */,
};
extern Il2CppType t5784_0_0_0;
extern Il2CppGenericMethod m30795_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30795_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m23605_gshared, &t107_TI, &t5784_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, m30795_RGCTXData, NULL, &m30795_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1828.h"
extern MethodInfo m30796_MI;
struct t107;
extern MethodInfo m30797_MI;
struct t107;
#define m30797(__this, p0, method) (t1828 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.Runtime.Serialization.OnDeserializingAttribute>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1828_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30797_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1828_0_0_0;
extern Il2CppType t1828_0_0_0;
extern Il2CppGenericMethod m30797_GM;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30797_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m23596_gshared, &t107_TI, &t1828_0_0_0, RuntimeInvoker_t5_t110, t107_m30797_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30797_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Runtime.Serialization.OnDeserializingAttribute>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1828_1_0_2;
extern Il2CppType t1828_1_0_0;
static ParameterInfo t107_m30796_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1828_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30796_GM;
extern void* RuntimeInvoker_t109_t110_t5785 (MethodInfo* method, void* obj, void** args);
MethodInfo m30796_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5785, t107_m30796_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30796_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30798_MI;
struct t107;
#define m30798(__this, p0, method) (void)m23597_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Serialization.OnDeserializingAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1828_0_0_0;
extern Il2CppType t1828_0_0_0;
static ParameterInfo t107_m30798_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1828_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30798_GM;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30798_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m23597_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t107_m30798_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30798_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30799_MI;
struct t107;
#define m30799(__this, p0, method) (bool)m23598_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Serialization.OnDeserializingAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1828_0_0_0;
static ParameterInfo t107_m30799_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1828_0_0_0},
};
extern TypeInfo t1828_TI;
static Il2CppRGCTXData m30799_RGCTXData[1] = 
{
	&t1828_TI/* Class Usage */,
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30799_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30799_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m23598_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30799_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30799_RGCTXData, NULL, &m30799_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30800_MI;
struct t107;
#define m30800(__this, p0, p1, method) (void)m23599_gshared((t107 *)__this, (t168*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Serialization.OnDeserializingAttribute>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4352_0_0_0;
extern Il2CppType t4352_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30800_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4352_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30800_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30800_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m23599_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30800_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30800_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30801_MI;
struct t107;
#define m30801(__this, p0, method) (bool)m23600_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Serialization.OnDeserializingAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1828_0_0_0;
static ParameterInfo t107_m30801_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1828_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30801_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30801_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m23600_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30801_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30801_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30802_MI;
struct t107;
#define m30802(__this, p0, method) (int32_t)m23601_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Serialization.OnDeserializingAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1828_0_0_0;
static ParameterInfo t107_m30802_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1828_0_0_0},
};
extern TypeInfo t1828_TI;
static Il2CppRGCTXData m30802_RGCTXData[1] = 
{
	&t1828_TI/* Class Usage */,
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30802_GM;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30802_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m23601_gshared, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t107_m30802_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30802_RGCTXData, NULL, &m30802_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30803_MI;
struct t107;
#define m30803(__this, p0, p1, method) (void)m23602_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Runtime.Serialization.OnDeserializingAttribute>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1828_0_0_0;
static ParameterInfo t107_m30803_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1828_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30803_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30803_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m23602_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30803_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30803_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30804_MI;
struct t107;
extern MethodInfo m30805_MI;
struct t107;
#define m30805(__this, p0, p1, method) (void)m23604_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Runtime.Serialization.OnDeserializingAttribute>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1828_0_0_0;
static ParameterInfo t107_m30805_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1828_0_0_0},
};
extern TypeInfo t1828_TI;
static Il2CppRGCTXData m30805_RGCTXData[1] = 
{
	&t1828_TI/* Class Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30805_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30805_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m23604_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30805_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, m30805_RGCTXData, NULL, &m30805_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Runtime.Serialization.OnDeserializingAttribute>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1828_1_0_0;
static ParameterInfo t107_m30804_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1828_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30804_GM;
extern void* RuntimeInvoker_t109_t110_t5785 (MethodInfo* method, void* obj, void** args);
MethodInfo m30804_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5785, t107_m30804_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30804_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4095.h"
extern TypeInfo t4095_TI;
#include "t4095MD.h"
extern MethodInfo m23195_MI;
extern MethodInfo m30806_MI;
struct t107;
#define m30806(__this, method) (t5*)m23605_gshared((t107 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Serialization.OnDeserializingAttribute>()
extern TypeInfo t107_TI;
extern TypeInfo t5786_TI;
extern TypeInfo t4095_TI;
static Il2CppRGCTXData m30806_RGCTXData[2] = 
{
	&t4095_TI/* Class Usage */,
	&m23195_MI/* Method Usage */,
};
extern Il2CppType t5786_0_0_0;
extern Il2CppGenericMethod m30806_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30806_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m23605_gshared, &t107_TI, &t5786_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, m30806_RGCTXData, NULL, &m30806_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1829.h"
extern MethodInfo m30807_MI;
struct t107;
extern MethodInfo m30808_MI;
struct t107;
#define m30808(__this, p0, method) (t1829 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.Runtime.Serialization.OnSerializedAttribute>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1829_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30808_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1829_0_0_0;
extern Il2CppType t1829_0_0_0;
extern Il2CppGenericMethod m30808_GM;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30808_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m23596_gshared, &t107_TI, &t1829_0_0_0, RuntimeInvoker_t5_t110, t107_m30808_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30808_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Runtime.Serialization.OnSerializedAttribute>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1829_1_0_2;
extern Il2CppType t1829_1_0_0;
static ParameterInfo t107_m30807_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1829_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30807_GM;
extern void* RuntimeInvoker_t109_t110_t5787 (MethodInfo* method, void* obj, void** args);
MethodInfo m30807_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5787, t107_m30807_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30807_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30809_MI;
struct t107;
#define m30809(__this, p0, method) (void)m23597_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Serialization.OnSerializedAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1829_0_0_0;
extern Il2CppType t1829_0_0_0;
static ParameterInfo t107_m30809_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1829_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30809_GM;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30809_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m23597_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t107_m30809_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30809_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30810_MI;
struct t107;
#define m30810(__this, p0, method) (bool)m23598_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Serialization.OnSerializedAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1829_0_0_0;
static ParameterInfo t107_m30810_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1829_0_0_0},
};
extern TypeInfo t1829_TI;
static Il2CppRGCTXData m30810_RGCTXData[1] = 
{
	&t1829_TI/* Class Usage */,
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30810_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30810_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m23598_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30810_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30810_RGCTXData, NULL, &m30810_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30811_MI;
struct t107;
#define m30811(__this, p0, p1, method) (void)m23599_gshared((t107 *)__this, (t168*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Serialization.OnSerializedAttribute>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4353_0_0_0;
extern Il2CppType t4353_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30811_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4353_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30811_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30811_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m23599_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30811_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30811_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30812_MI;
struct t107;
#define m30812(__this, p0, method) (bool)m23600_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Serialization.OnSerializedAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1829_0_0_0;
static ParameterInfo t107_m30812_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1829_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30812_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30812_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m23600_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30812_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30812_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30813_MI;
struct t107;
#define m30813(__this, p0, method) (int32_t)m23601_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Serialization.OnSerializedAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1829_0_0_0;
static ParameterInfo t107_m30813_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1829_0_0_0},
};
extern TypeInfo t1829_TI;
static Il2CppRGCTXData m30813_RGCTXData[1] = 
{
	&t1829_TI/* Class Usage */,
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30813_GM;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30813_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m23601_gshared, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t107_m30813_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30813_RGCTXData, NULL, &m30813_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30814_MI;
struct t107;
#define m30814(__this, p0, p1, method) (void)m23602_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Runtime.Serialization.OnSerializedAttribute>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1829_0_0_0;
static ParameterInfo t107_m30814_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1829_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30814_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30814_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m23602_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30814_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30814_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30815_MI;
struct t107;
extern MethodInfo m30816_MI;
struct t107;
#define m30816(__this, p0, p1, method) (void)m23604_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Runtime.Serialization.OnSerializedAttribute>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1829_0_0_0;
static ParameterInfo t107_m30816_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1829_0_0_0},
};
extern TypeInfo t1829_TI;
static Il2CppRGCTXData m30816_RGCTXData[1] = 
{
	&t1829_TI/* Class Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30816_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30816_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m23604_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30816_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, m30816_RGCTXData, NULL, &m30816_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Runtime.Serialization.OnSerializedAttribute>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1829_1_0_0;
static ParameterInfo t107_m30815_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1829_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30815_GM;
extern void* RuntimeInvoker_t109_t110_t5787 (MethodInfo* method, void* obj, void** args);
MethodInfo m30815_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5787, t107_m30815_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30815_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4096.h"
extern TypeInfo t4096_TI;
#include "t4096MD.h"
extern MethodInfo m23200_MI;
extern MethodInfo m30817_MI;
struct t107;
#define m30817(__this, method) (t5*)m23605_gshared((t107 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Serialization.OnSerializedAttribute>()
extern TypeInfo t107_TI;
extern TypeInfo t5788_TI;
extern TypeInfo t4096_TI;
static Il2CppRGCTXData m30817_RGCTXData[2] = 
{
	&t4096_TI/* Class Usage */,
	&m23200_MI/* Method Usage */,
};
extern Il2CppType t5788_0_0_0;
extern Il2CppGenericMethod m30817_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30817_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m23605_gshared, &t107_TI, &t5788_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, m30817_RGCTXData, NULL, &m30817_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1830.h"
extern MethodInfo m30818_MI;
struct t107;
extern MethodInfo m30819_MI;
struct t107;
#define m30819(__this, p0, method) (t1830 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.Runtime.Serialization.OnSerializingAttribute>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1830_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30819_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1830_0_0_0;
extern Il2CppType t1830_0_0_0;
extern Il2CppGenericMethod m30819_GM;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30819_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m23596_gshared, &t107_TI, &t1830_0_0_0, RuntimeInvoker_t5_t110, t107_m30819_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30819_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Runtime.Serialization.OnSerializingAttribute>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1830_1_0_2;
extern Il2CppType t1830_1_0_0;
static ParameterInfo t107_m30818_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1830_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30818_GM;
extern void* RuntimeInvoker_t109_t110_t5789 (MethodInfo* method, void* obj, void** args);
MethodInfo m30818_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5789, t107_m30818_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30818_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30820_MI;
struct t107;
#define m30820(__this, p0, method) (void)m23597_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Serialization.OnSerializingAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1830_0_0_0;
extern Il2CppType t1830_0_0_0;
static ParameterInfo t107_m30820_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30820_GM;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30820_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m23597_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t107_m30820_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30820_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30821_MI;
struct t107;
#define m30821(__this, p0, method) (bool)m23598_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Serialization.OnSerializingAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1830_0_0_0;
static ParameterInfo t107_m30821_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1830_0_0_0},
};
extern TypeInfo t1830_TI;
static Il2CppRGCTXData m30821_RGCTXData[1] = 
{
	&t1830_TI/* Class Usage */,
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30821_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30821_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m23598_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30821_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30821_RGCTXData, NULL, &m30821_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30822_MI;
struct t107;
#define m30822(__this, p0, p1, method) (void)m23599_gshared((t107 *)__this, (t168*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Serialization.OnSerializingAttribute>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4354_0_0_0;
extern Il2CppType t4354_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30822_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4354_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30822_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30822_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m23599_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30822_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30822_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30823_MI;
struct t107;
#define m30823(__this, p0, method) (bool)m23600_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Serialization.OnSerializingAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1830_0_0_0;
static ParameterInfo t107_m30823_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1830_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30823_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30823_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m23600_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30823_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30823_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30824_MI;
struct t107;
#define m30824(__this, p0, method) (int32_t)m23601_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Serialization.OnSerializingAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1830_0_0_0;
static ParameterInfo t107_m30824_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1830_0_0_0},
};
extern TypeInfo t1830_TI;
static Il2CppRGCTXData m30824_RGCTXData[1] = 
{
	&t1830_TI/* Class Usage */,
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30824_GM;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30824_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m23601_gshared, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t107_m30824_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30824_RGCTXData, NULL, &m30824_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30825_MI;
struct t107;
#define m30825(__this, p0, p1, method) (void)m23602_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Runtime.Serialization.OnSerializingAttribute>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1830_0_0_0;
static ParameterInfo t107_m30825_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30825_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30825_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m23602_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30825_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30825_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30826_MI;
struct t107;
extern MethodInfo m30827_MI;
struct t107;
#define m30827(__this, p0, p1, method) (void)m23604_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Runtime.Serialization.OnSerializingAttribute>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1830_0_0_0;
static ParameterInfo t107_m30827_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1830_0_0_0},
};
extern TypeInfo t1830_TI;
static Il2CppRGCTXData m30827_RGCTXData[1] = 
{
	&t1830_TI/* Class Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30827_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30827_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m23604_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30827_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, m30827_RGCTXData, NULL, &m30827_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Runtime.Serialization.OnSerializingAttribute>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1830_1_0_0;
static ParameterInfo t107_m30826_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1830_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30826_GM;
extern void* RuntimeInvoker_t109_t110_t5789 (MethodInfo* method, void* obj, void** args);
MethodInfo m30826_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5789, t107_m30826_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30826_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4097.h"
extern TypeInfo t4097_TI;
#include "t4097MD.h"
extern MethodInfo m23205_MI;
extern MethodInfo m30828_MI;
struct t107;
#define m30828(__this, method) (t5*)m23605_gshared((t107 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Serialization.OnSerializingAttribute>()
extern TypeInfo t107_TI;
extern TypeInfo t5790_TI;
extern TypeInfo t4097_TI;
static Il2CppRGCTXData m30828_RGCTXData[2] = 
{
	&t4097_TI/* Class Usage */,
	&m23205_MI/* Method Usage */,
};
extern Il2CppType t5790_0_0_0;
extern Il2CppGenericMethod m30828_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30828_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m23605_gshared, &t107_TI, &t5790_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, m30828_RGCTXData, NULL, &m30828_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1837.h"
extern MethodInfo m30829_MI;
struct t107;
extern MethodInfo m30830_MI;
struct t107;
 int32_t m30830 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30830 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.Runtime.Serialization.StreamingContextStates>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1837_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30830_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1837_0_0_0;
extern Il2CppType t1837_0_0_0;
extern Il2CppGenericMethod m30830_GM;
extern void* RuntimeInvoker_t1837_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30830_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m30830, &t107_TI, &t1837_0_0_0, RuntimeInvoker_t1837_t110, t107_m30830_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30830_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Runtime.Serialization.StreamingContextStates>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1837_1_0_2;
extern Il2CppType t1837_1_0_0;
static ParameterInfo t107_m30829_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1837_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30829_GM;
extern void* RuntimeInvoker_t109_t110_t5791 (MethodInfo* method, void* obj, void** args);
MethodInfo m30829_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5791, t107_m30829_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30829_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30831_MI;
struct t107;
 void m30831 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30831 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Serialization.StreamingContextStates>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1837_0_0_0;
extern Il2CppType t1837_0_0_0;
static ParameterInfo t107_m30831_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1837_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30831_GM;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30831_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m30831, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t107_m30831_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30831_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30832_MI;
struct t107;
 bool m30832 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30832 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1837_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1837_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t1837_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1837_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Serialization.StreamingContextStates>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1837_0_0_0;
static ParameterInfo t107_m30832_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1837_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30832_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30832_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m30832, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m30832_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30832_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30833_MI;
struct t107;
 void m30833 (t107 * __this, t4355* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30833 (t107 * __this, t4355* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Serialization.StreamingContextStates>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4355_0_0_0;
extern Il2CppType t4355_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30833_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4355_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30833_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30833_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m30833, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30833_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30833_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30834_MI;
struct t107;
 bool m30834 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30834 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Serialization.StreamingContextStates>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1837_0_0_0;
static ParameterInfo t107_m30834_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1837_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30834_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30834_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m30834, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m30834_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30834_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30835_MI;
struct t107;
 int32_t m30835 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30835 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1837_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1837_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1837_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1837_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Serialization.StreamingContextStates>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1837_0_0_0;
static ParameterInfo t107_m30835_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1837_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30835_GM;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30835_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m30835, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t107_m30835_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30835_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30836_MI;
struct t107;
 void m30836 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30836 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Runtime.Serialization.StreamingContextStates>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1837_0_0_0;
static ParameterInfo t107_m30836_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1837_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30836_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30836_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m30836, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m30836_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30836_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30837_MI;
struct t107;
extern MethodInfo m30838_MI;
struct t107;
 void m30838 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30838 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1837_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Runtime.Serialization.StreamingContextStates>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1837_0_0_0;
static ParameterInfo t107_m30838_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1837_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30838_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30838_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m30838, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m30838_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30838_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Runtime.Serialization.StreamingContextStates>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1837_1_0_0;
static ParameterInfo t107_m30837_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1837_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30837_GM;
extern void* RuntimeInvoker_t109_t110_t5791 (MethodInfo* method, void* obj, void** args);
MethodInfo m30837_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5791, t107_m30837_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30837_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4098.h"
extern TypeInfo t4098_TI;
#include "t4098MD.h"
extern MethodInfo m23210_MI;
extern MethodInfo m30839_MI;
struct t107;
 t5* m30839 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m30839 (t107 * __this, MethodInfo* method){
	{
		t4098  L_0 = {0};
		m23210(&L_0, __this, &m23210_MI);
		t4098  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4098_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Serialization.StreamingContextStates>()
extern TypeInfo t107_TI;
extern TypeInfo t5792_TI;
extern Il2CppType t5792_0_0_0;
extern Il2CppGenericMethod m30839_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30839_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m30839, &t107_TI, &t5792_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m30839_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1058.h"
extern MethodInfo m30840_MI;
struct t107;
extern MethodInfo m30841_MI;
struct t107;
 int32_t m30841 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30841 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1058_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30841_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1058_0_0_0;
extern Il2CppType t1058_0_0_0;
extern Il2CppGenericMethod m30841_GM;
extern void* RuntimeInvoker_t1058_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30841_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m30841, &t107_TI, &t1058_0_0_0, RuntimeInvoker_t1058_t110, t107_m30841_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30841_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1058_1_0_2;
extern Il2CppType t1058_1_0_0;
static ParameterInfo t107_m30840_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1058_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30840_GM;
extern void* RuntimeInvoker_t109_t110_t5793 (MethodInfo* method, void* obj, void** args);
MethodInfo m30840_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5793, t107_m30840_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30840_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30842_MI;
struct t107;
 void m30842 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30842 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1058_0_0_0;
extern Il2CppType t1058_0_0_0;
static ParameterInfo t107_m30842_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1058_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30842_GM;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30842_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m30842, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t107_m30842_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30842_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30843_MI;
struct t107;
 bool m30843 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30843 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1058_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1058_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t1058_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1058_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1058_0_0_0;
static ParameterInfo t107_m30843_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1058_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30843_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30843_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m30843, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m30843_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30843_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30844_MI;
struct t107;
 void m30844 (t107 * __this, t4356* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30844 (t107 * __this, t4356* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4356_0_0_0;
extern Il2CppType t4356_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30844_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4356_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30844_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30844_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m30844, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30844_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30844_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30845_MI;
struct t107;
 bool m30845 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30845 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1058_0_0_0;
static ParameterInfo t107_m30845_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1058_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30845_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30845_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m30845, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m30845_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30845_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30846_MI;
struct t107;
 int32_t m30846 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30846 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1058_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1058_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1058_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1058_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1058_0_0_0;
static ParameterInfo t107_m30846_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1058_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30846_GM;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30846_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m30846, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t107_m30846_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30846_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30847_MI;
struct t107;
 void m30847 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30847 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1058_0_0_0;
static ParameterInfo t107_m30847_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1058_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30847_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30847_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m30847, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m30847_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30847_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30848_MI;
struct t107;
extern MethodInfo m30849_MI;
struct t107;
 void m30849 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30849 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1058_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1058_0_0_0;
static ParameterInfo t107_m30849_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1058_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30849_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30849_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m30849, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m30849_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30849_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1058_1_0_0;
static ParameterInfo t107_m30848_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1058_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30848_GM;
extern void* RuntimeInvoker_t109_t110_t5793 (MethodInfo* method, void* obj, void** args);
MethodInfo m30848_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5793, t107_m30848_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30848_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4099.h"
extern TypeInfo t4099_TI;
#include "t4099MD.h"
extern MethodInfo m23215_MI;
extern MethodInfo m30850_MI;
struct t107;
 t5* m30850 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m30850 (t107 * __this, MethodInfo* method){
	{
		t4099  L_0 = {0};
		m23215(&L_0, __this, &m23215_MI);
		t4099  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4099_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>()
extern TypeInfo t107_TI;
extern TypeInfo t5794_TI;
extern Il2CppType t5794_0_0_0;
extern Il2CppGenericMethod m30850_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30850_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m30850, &t107_TI, &t5794_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m30850_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1288.h"
extern MethodInfo m30851_MI;
struct t107;
extern MethodInfo m30852_MI;
struct t107;
 int32_t m30852 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30852 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.Security.Cryptography.CipherMode>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1288_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30852_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1288_0_0_0;
extern Il2CppType t1288_0_0_0;
extern Il2CppGenericMethod m30852_GM;
extern void* RuntimeInvoker_t1288_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30852_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m30852, &t107_TI, &t1288_0_0_0, RuntimeInvoker_t1288_t110, t107_m30852_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30852_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Security.Cryptography.CipherMode>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1288_1_0_2;
extern Il2CppType t1288_1_0_0;
static ParameterInfo t107_m30851_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1288_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30851_GM;
extern void* RuntimeInvoker_t109_t110_t5795 (MethodInfo* method, void* obj, void** args);
MethodInfo m30851_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5795, t107_m30851_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30851_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30853_MI;
struct t107;
 void m30853 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30853 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Security.Cryptography.CipherMode>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1288_0_0_0;
extern Il2CppType t1288_0_0_0;
static ParameterInfo t107_m30853_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1288_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30853_GM;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30853_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m30853, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t107_m30853_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30853_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30854_MI;
struct t107;
 bool m30854 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30854 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1288_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1288_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t1288_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1288_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Cryptography.CipherMode>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1288_0_0_0;
static ParameterInfo t107_m30854_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1288_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30854_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30854_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m30854, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m30854_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30854_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30855_MI;
struct t107;
 void m30855 (t107 * __this, t4357* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30855 (t107 * __this, t4357* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Cryptography.CipherMode>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4357_0_0_0;
extern Il2CppType t4357_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30855_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4357_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30855_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30855_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m30855, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30855_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30855_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30856_MI;
struct t107;
 bool m30856 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30856 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Cryptography.CipherMode>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1288_0_0_0;
static ParameterInfo t107_m30856_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1288_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30856_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30856_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m30856, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m30856_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30856_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30857_MI;
struct t107;
 int32_t m30857 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30857 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1288_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1288_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1288_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1288_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Security.Cryptography.CipherMode>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1288_0_0_0;
static ParameterInfo t107_m30857_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1288_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30857_GM;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30857_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m30857, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t107_m30857_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30857_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30858_MI;
struct t107;
 void m30858 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30858 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Security.Cryptography.CipherMode>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1288_0_0_0;
static ParameterInfo t107_m30858_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1288_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30858_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30858_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m30858, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m30858_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30858_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30859_MI;
struct t107;
extern MethodInfo m30860_MI;
struct t107;
 void m30860 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30860 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1288_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Security.Cryptography.CipherMode>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1288_0_0_0;
static ParameterInfo t107_m30860_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1288_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30860_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30860_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m30860, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m30860_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30860_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Security.Cryptography.CipherMode>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1288_1_0_0;
static ParameterInfo t107_m30859_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1288_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30859_GM;
extern void* RuntimeInvoker_t109_t110_t5795 (MethodInfo* method, void* obj, void** args);
MethodInfo m30859_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5795, t107_m30859_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30859_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4100.h"
extern TypeInfo t4100_TI;
#include "t4100MD.h"
extern MethodInfo m23220_MI;
extern MethodInfo m30861_MI;
struct t107;
 t5* m30861 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m30861 (t107 * __this, MethodInfo* method){
	{
		t4100  L_0 = {0};
		m23220(&L_0, __this, &m23220_MI);
		t4100  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4100_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Cryptography.CipherMode>()
extern TypeInfo t107_TI;
extern TypeInfo t5796_TI;
extern Il2CppType t5796_0_0_0;
extern Il2CppGenericMethod m30861_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30861_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m30861, &t107_TI, &t5796_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m30861_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1361.h"
extern MethodInfo m30862_MI;
struct t107;
extern MethodInfo m30863_MI;
struct t107;
 int32_t m30863 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30863 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.Security.Cryptography.CspProviderFlags>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1361_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30863_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1361_0_0_0;
extern Il2CppType t1361_0_0_0;
extern Il2CppGenericMethod m30863_GM;
extern void* RuntimeInvoker_t1361_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30863_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m30863, &t107_TI, &t1361_0_0_0, RuntimeInvoker_t1361_t110, t107_m30863_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30863_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Security.Cryptography.CspProviderFlags>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1361_1_0_2;
extern Il2CppType t1361_1_0_0;
static ParameterInfo t107_m30862_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1361_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30862_GM;
extern void* RuntimeInvoker_t109_t110_t5797 (MethodInfo* method, void* obj, void** args);
MethodInfo m30862_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5797, t107_m30862_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30862_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30864_MI;
struct t107;
 void m30864 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30864 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Security.Cryptography.CspProviderFlags>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1361_0_0_0;
extern Il2CppType t1361_0_0_0;
static ParameterInfo t107_m30864_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1361_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30864_GM;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30864_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m30864, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t107_m30864_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30864_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30865_MI;
struct t107;
 bool m30865 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30865 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1361_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1361_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t1361_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1361_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Cryptography.CspProviderFlags>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1361_0_0_0;
static ParameterInfo t107_m30865_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1361_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30865_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30865_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m30865, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m30865_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30865_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30866_MI;
struct t107;
 void m30866 (t107 * __this, t4358* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30866 (t107 * __this, t4358* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Cryptography.CspProviderFlags>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4358_0_0_0;
extern Il2CppType t4358_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30866_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4358_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30866_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30866_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m30866, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30866_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30866_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30867_MI;
struct t107;
 bool m30867 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30867 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Cryptography.CspProviderFlags>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1361_0_0_0;
static ParameterInfo t107_m30867_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1361_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30867_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30867_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m30867, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m30867_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30867_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30868_MI;
struct t107;
 int32_t m30868 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30868 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1361_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1361_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1361_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1361_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Security.Cryptography.CspProviderFlags>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1361_0_0_0;
static ParameterInfo t107_m30868_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1361_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30868_GM;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30868_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m30868, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t107_m30868_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30868_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30869_MI;
struct t107;
 void m30869 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30869 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Security.Cryptography.CspProviderFlags>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1361_0_0_0;
static ParameterInfo t107_m30869_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1361_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30869_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30869_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m30869, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m30869_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30869_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30870_MI;
struct t107;
extern MethodInfo m30871_MI;
struct t107;
 void m30871 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30871 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1361_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Security.Cryptography.CspProviderFlags>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1361_0_0_0;
static ParameterInfo t107_m30871_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1361_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30871_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30871_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m30871, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m30871_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30871_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Security.Cryptography.CspProviderFlags>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1361_1_0_0;
static ParameterInfo t107_m30870_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1361_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30870_GM;
extern void* RuntimeInvoker_t109_t110_t5797 (MethodInfo* method, void* obj, void** args);
MethodInfo m30870_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5797, t107_m30870_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30870_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4101.h"
extern TypeInfo t4101_TI;
#include "t4101MD.h"
extern MethodInfo m23225_MI;
extern MethodInfo m30872_MI;
struct t107;
 t5* m30872 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m30872 (t107 * __this, MethodInfo* method){
	{
		t4101  L_0 = {0};
		m23225(&L_0, __this, &m23225_MI);
		t4101  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4101_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Cryptography.CspProviderFlags>()
extern TypeInfo t107_TI;
extern TypeInfo t5798_TI;
extern Il2CppType t5798_0_0_0;
extern Il2CppGenericMethod m30872_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30872_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m30872, &t107_TI, &t5798_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m30872_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1377.h"
extern MethodInfo m30873_MI;
struct t107;
extern MethodInfo m30874_MI;
struct t107;
 int32_t m30874 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30874 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.Security.Cryptography.PaddingMode>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1377_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30874_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1377_0_0_0;
extern Il2CppType t1377_0_0_0;
extern Il2CppGenericMethod m30874_GM;
extern void* RuntimeInvoker_t1377_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30874_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m30874, &t107_TI, &t1377_0_0_0, RuntimeInvoker_t1377_t110, t107_m30874_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30874_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Security.Cryptography.PaddingMode>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1377_1_0_2;
extern Il2CppType t1377_1_0_0;
static ParameterInfo t107_m30873_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1377_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30873_GM;
extern void* RuntimeInvoker_t109_t110_t5799 (MethodInfo* method, void* obj, void** args);
MethodInfo m30873_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5799, t107_m30873_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30873_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30875_MI;
struct t107;
 void m30875 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30875 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Security.Cryptography.PaddingMode>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1377_0_0_0;
extern Il2CppType t1377_0_0_0;
static ParameterInfo t107_m30875_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1377_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30875_GM;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30875_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m30875, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t107_m30875_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30875_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30876_MI;
struct t107;
 bool m30876 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30876 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1377_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1377_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t1377_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1377_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Cryptography.PaddingMode>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1377_0_0_0;
static ParameterInfo t107_m30876_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1377_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30876_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30876_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m30876, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m30876_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30876_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30877_MI;
struct t107;
 void m30877 (t107 * __this, t4359* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30877 (t107 * __this, t4359* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Cryptography.PaddingMode>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4359_0_0_0;
extern Il2CppType t4359_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30877_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4359_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30877_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30877_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m30877, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30877_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30877_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30878_MI;
struct t107;
 bool m30878 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30878 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Cryptography.PaddingMode>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1377_0_0_0;
static ParameterInfo t107_m30878_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1377_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30878_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30878_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m30878, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m30878_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30878_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30879_MI;
struct t107;
 int32_t m30879 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30879 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1377_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1377_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1377_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1377_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Security.Cryptography.PaddingMode>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1377_0_0_0;
static ParameterInfo t107_m30879_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1377_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30879_GM;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30879_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m30879, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t107_m30879_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30879_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30880_MI;
struct t107;
 void m30880 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30880 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Security.Cryptography.PaddingMode>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1377_0_0_0;
static ParameterInfo t107_m30880_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1377_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30880_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30880_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m30880, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m30880_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30880_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30881_MI;
struct t107;
extern MethodInfo m30882_MI;
struct t107;
 void m30882 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30882 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1377_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Security.Cryptography.PaddingMode>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1377_0_0_0;
static ParameterInfo t107_m30882_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1377_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30882_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30882_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m30882, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m30882_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30882_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Security.Cryptography.PaddingMode>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1377_1_0_0;
static ParameterInfo t107_m30881_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1377_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30881_GM;
extern void* RuntimeInvoker_t109_t110_t5799 (MethodInfo* method, void* obj, void** args);
MethodInfo m30881_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5799, t107_m30881_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30881_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4102.h"
extern TypeInfo t4102_TI;
#include "t4102MD.h"
extern MethodInfo m23230_MI;
extern MethodInfo m30883_MI;
struct t107;
 t5* m30883 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m30883 (t107 * __this, MethodInfo* method){
	{
		t4102  L_0 = {0};
		m23230(&L_0, __this, &m23230_MI);
		t4102  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4102_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Cryptography.PaddingMode>()
extern TypeInfo t107_TI;
extern TypeInfo t5800_TI;
extern Il2CppType t5800_0_0_0;
extern Il2CppGenericMethod m30883_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30883_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m30883, &t107_TI, &t5800_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m30883_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1878.h"
extern MethodInfo m30884_MI;
struct t107;
extern MethodInfo m30885_MI;
struct t107;
 int32_t m30885 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30885 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.Security.Permissions.SecurityPermissionFlag>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1878_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30885_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1878_0_0_0;
extern Il2CppType t1878_0_0_0;
extern Il2CppGenericMethod m30885_GM;
extern void* RuntimeInvoker_t1878_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30885_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m30885, &t107_TI, &t1878_0_0_0, RuntimeInvoker_t1878_t110, t107_m30885_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30885_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Security.Permissions.SecurityPermissionFlag>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1878_1_0_2;
extern Il2CppType t1878_1_0_0;
static ParameterInfo t107_m30884_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1878_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30884_GM;
extern void* RuntimeInvoker_t109_t110_t5801 (MethodInfo* method, void* obj, void** args);
MethodInfo m30884_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5801, t107_m30884_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30884_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30886_MI;
struct t107;
 void m30886 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30886 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Security.Permissions.SecurityPermissionFlag>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1878_0_0_0;
extern Il2CppType t1878_0_0_0;
static ParameterInfo t107_m30886_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1878_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30886_GM;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30886_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m30886, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t107_m30886_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30886_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30887_MI;
struct t107;
 bool m30887 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30887 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1878_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1878_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t1878_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1878_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Permissions.SecurityPermissionFlag>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1878_0_0_0;
static ParameterInfo t107_m30887_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1878_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30887_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30887_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m30887, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m30887_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30887_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30888_MI;
struct t107;
 void m30888 (t107 * __this, t4360* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30888 (t107 * __this, t4360* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Permissions.SecurityPermissionFlag>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4360_0_0_0;
extern Il2CppType t4360_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30888_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4360_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30888_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30888_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m30888, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30888_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30888_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30889_MI;
struct t107;
 bool m30889 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30889 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Permissions.SecurityPermissionFlag>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1878_0_0_0;
static ParameterInfo t107_m30889_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1878_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30889_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30889_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m30889, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m30889_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30889_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30890_MI;
struct t107;
 int32_t m30890 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30890 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1878_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1878_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1878_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1878_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Security.Permissions.SecurityPermissionFlag>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1878_0_0_0;
static ParameterInfo t107_m30890_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1878_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30890_GM;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30890_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m30890, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t107_m30890_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30890_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30891_MI;
struct t107;
 void m30891 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30891 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Security.Permissions.SecurityPermissionFlag>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1878_0_0_0;
static ParameterInfo t107_m30891_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1878_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30891_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30891_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m30891, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m30891_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30891_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30892_MI;
struct t107;
extern MethodInfo m30893_MI;
struct t107;
 void m30893 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30893 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1878_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Security.Permissions.SecurityPermissionFlag>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1878_0_0_0;
static ParameterInfo t107_m30893_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1878_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30893_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30893_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m30893, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m30893_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30893_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Security.Permissions.SecurityPermissionFlag>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1878_1_0_0;
static ParameterInfo t107_m30892_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1878_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30892_GM;
extern void* RuntimeInvoker_t109_t110_t5801 (MethodInfo* method, void* obj, void** args);
MethodInfo m30892_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5801, t107_m30892_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30892_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4103.h"
extern TypeInfo t4103_TI;
#include "t4103MD.h"
extern MethodInfo m23235_MI;
extern MethodInfo m30894_MI;
struct t107;
 t5* m30894 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m30894 (t107 * __this, MethodInfo* method){
	{
		t4103  L_0 = {0};
		m23235(&L_0, __this, &m23235_MI);
		t4103  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4103_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Permissions.SecurityPermissionFlag>()
extern TypeInfo t107_TI;
extern TypeInfo t5802_TI;
extern Il2CppType t5802_0_0_0;
extern Il2CppGenericMethod m30894_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30894_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m30894, &t107_TI, &t5802_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m30894_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1885.h"
extern MethodInfo m30895_MI;
struct t107;
extern MethodInfo m30896_MI;
struct t107;
#define m30896(__this, p0, method) (t1885 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.Security.Policy.StrongName>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1885_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30896_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1885_0_0_0;
extern Il2CppType t1885_0_0_0;
extern Il2CppGenericMethod m30896_GM;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30896_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m23596_gshared, &t107_TI, &t1885_0_0_0, RuntimeInvoker_t5_t110, t107_m30896_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30896_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Security.Policy.StrongName>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1885_1_0_2;
extern Il2CppType t1885_1_0_0;
static ParameterInfo t107_m30895_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1885_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30895_GM;
extern void* RuntimeInvoker_t109_t110_t5803 (MethodInfo* method, void* obj, void** args);
MethodInfo m30895_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5803, t107_m30895_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30895_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30897_MI;
struct t107;
#define m30897(__this, p0, method) (void)m23597_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Security.Policy.StrongName>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1885_0_0_0;
extern Il2CppType t1885_0_0_0;
static ParameterInfo t107_m30897_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30897_GM;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30897_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m23597_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t107_m30897_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30897_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30898_MI;
struct t107;
#define m30898(__this, p0, method) (bool)m23598_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Policy.StrongName>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1885_0_0_0;
static ParameterInfo t107_m30898_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern TypeInfo t1885_TI;
static Il2CppRGCTXData m30898_RGCTXData[1] = 
{
	&t1885_TI/* Class Usage */,
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30898_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30898_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m23598_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30898_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30898_RGCTXData, NULL, &m30898_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30899_MI;
struct t107;
#define m30899(__this, p0, p1, method) (void)m23599_gshared((t107 *)__this, (t168*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Policy.StrongName>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4107_0_0_0;
extern Il2CppType t4107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30899_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4107_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30899_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30899_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m23599_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30899_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30899_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30900_MI;
struct t107;
#define m30900(__this, p0, method) (bool)m23600_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Policy.StrongName>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1885_0_0_0;
static ParameterInfo t107_m30900_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30900_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30900_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m23600_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30900_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30900_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30901_MI;
struct t107;
#define m30901(__this, p0, method) (int32_t)m23601_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Security.Policy.StrongName>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1885_0_0_0;
static ParameterInfo t107_m30901_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern TypeInfo t1885_TI;
static Il2CppRGCTXData m30901_RGCTXData[1] = 
{
	&t1885_TI/* Class Usage */,
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30901_GM;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30901_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m23601_gshared, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t107_m30901_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30901_RGCTXData, NULL, &m30901_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30902_MI;
struct t107;
#define m30902(__this, p0, p1, method) (void)m23602_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Security.Policy.StrongName>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1885_0_0_0;
static ParameterInfo t107_m30902_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30902_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30902_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m23602_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30902_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30902_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30903_MI;
struct t107;
extern MethodInfo m30904_MI;
struct t107;
#define m30904(__this, p0, p1, method) (void)m23604_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Security.Policy.StrongName>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1885_0_0_0;
static ParameterInfo t107_m30904_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1885_0_0_0},
};
extern TypeInfo t1885_TI;
static Il2CppRGCTXData m30904_RGCTXData[1] = 
{
	&t1885_TI/* Class Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30904_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30904_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m23604_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30904_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, m30904_RGCTXData, NULL, &m30904_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Security.Policy.StrongName>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1885_1_0_0;
static ParameterInfo t107_m30903_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1885_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30903_GM;
extern void* RuntimeInvoker_t109_t110_t5803 (MethodInfo* method, void* obj, void** args);
MethodInfo m30903_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5803, t107_m30903_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30903_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4104.h"
extern TypeInfo t4104_TI;
#include "t4104MD.h"
extern MethodInfo m23240_MI;
extern MethodInfo m30905_MI;
struct t107;
#define m30905(__this, method) (t5*)m23605_gshared((t107 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Policy.StrongName>()
extern TypeInfo t107_TI;
extern TypeInfo t4109_TI;
extern TypeInfo t4104_TI;
static Il2CppRGCTXData m30905_RGCTXData[2] = 
{
	&t4104_TI/* Class Usage */,
	&m23240_MI/* Method Usage */,
};
extern Il2CppType t4109_0_0_0;
extern Il2CppGenericMethod m30905_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30905_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m23605_gshared, &t107_TI, &t4109_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, m30905_RGCTXData, NULL, &m30905_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30906_MI;
struct t107;
extern MethodInfo m30907_MI;
struct t107;
#define m30907(__this, p0, method) (t5 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.Security.Policy.IBuiltInEvidence>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t2403_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30907_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t2403_0_0_0;
extern Il2CppType t2403_0_0_0;
extern Il2CppGenericMethod m30907_GM;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30907_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m23596_gshared, &t107_TI, &t2403_0_0_0, RuntimeInvoker_t5_t110, t107_m30907_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30907_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Security.Policy.IBuiltInEvidence>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2403_1_0_2;
extern Il2CppType t2403_1_0_0;
static ParameterInfo t107_m30906_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2403_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30906_GM;
extern void* RuntimeInvoker_t109_t110_t5804 (MethodInfo* method, void* obj, void** args);
MethodInfo m30906_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5804, t107_m30906_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30906_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30908_MI;
struct t107;
#define m30908(__this, p0, method) (void)m23597_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Security.Policy.IBuiltInEvidence>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2403_0_0_0;
extern Il2CppType t2403_0_0_0;
static ParameterInfo t107_m30908_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t2403_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30908_GM;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30908_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m23597_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t107_m30908_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30908_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30909_MI;
struct t107;
#define m30909(__this, p0, method) (bool)m23598_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Policy.IBuiltInEvidence>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2403_0_0_0;
static ParameterInfo t107_m30909_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t2403_0_0_0},
};
extern TypeInfo t2403_TI;
static Il2CppRGCTXData m30909_RGCTXData[1] = 
{
	&t2403_TI/* Class Usage */,
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30909_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30909_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m23598_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30909_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30909_RGCTXData, NULL, &m30909_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30910_MI;
struct t107;
#define m30910(__this, p0, p1, method) (void)m23599_gshared((t107 *)__this, (t168*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Policy.IBuiltInEvidence>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4361_0_0_0;
extern Il2CppType t4361_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30910_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4361_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30910_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30910_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m23599_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30910_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30910_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30911_MI;
struct t107;
#define m30911(__this, p0, method) (bool)m23600_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Policy.IBuiltInEvidence>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2403_0_0_0;
static ParameterInfo t107_m30911_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t2403_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30911_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30911_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m23600_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30911_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30911_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30912_MI;
struct t107;
#define m30912(__this, p0, method) (int32_t)m23601_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Security.Policy.IBuiltInEvidence>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2403_0_0_0;
static ParameterInfo t107_m30912_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t2403_0_0_0},
};
extern TypeInfo t2403_TI;
static Il2CppRGCTXData m30912_RGCTXData[1] = 
{
	&t2403_TI/* Class Usage */,
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30912_GM;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30912_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m23601_gshared, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t107_m30912_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30912_RGCTXData, NULL, &m30912_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30913_MI;
struct t107;
#define m30913(__this, p0, p1, method) (void)m23602_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Security.Policy.IBuiltInEvidence>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2403_0_0_0;
static ParameterInfo t107_m30913_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t2403_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30913_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30913_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m23602_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30913_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30913_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30914_MI;
struct t107;
extern MethodInfo m30915_MI;
struct t107;
#define m30915(__this, p0, p1, method) (void)m23604_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Security.Policy.IBuiltInEvidence>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2403_0_0_0;
static ParameterInfo t107_m30915_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t2403_0_0_0},
};
extern TypeInfo t2403_TI;
static Il2CppRGCTXData m30915_RGCTXData[1] = 
{
	&t2403_TI/* Class Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30915_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30915_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m23604_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30915_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, m30915_RGCTXData, NULL, &m30915_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Security.Policy.IBuiltInEvidence>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2403_1_0_0;
static ParameterInfo t107_m30914_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2403_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30914_GM;
extern void* RuntimeInvoker_t109_t110_t5804 (MethodInfo* method, void* obj, void** args);
MethodInfo m30914_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5804, t107_m30914_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30914_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4105.h"
extern TypeInfo t4105_TI;
#include "t4105MD.h"
extern MethodInfo m23245_MI;
extern MethodInfo m30916_MI;
struct t107;
#define m30916(__this, method) (t5*)m23605_gshared((t107 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Policy.IBuiltInEvidence>()
extern TypeInfo t107_TI;
extern TypeInfo t5805_TI;
extern TypeInfo t4105_TI;
static Il2CppRGCTXData m30916_RGCTXData[2] = 
{
	&t4105_TI/* Class Usage */,
	&m23245_MI/* Method Usage */,
};
extern Il2CppType t5805_0_0_0;
extern Il2CppGenericMethod m30916_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30916_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m23605_gshared, &t107_TI, &t5805_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, m30916_RGCTXData, NULL, &m30916_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30917_MI;
struct t107;
extern MethodInfo m30918_MI;
struct t107;
#define m30918(__this, p0, method) (t5 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.Security.Policy.IIdentityPermissionFactory>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t2404_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30918_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t2404_0_0_0;
extern Il2CppType t2404_0_0_0;
extern Il2CppGenericMethod m30918_GM;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30918_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m23596_gshared, &t107_TI, &t2404_0_0_0, RuntimeInvoker_t5_t110, t107_m30918_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30918_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Security.Policy.IIdentityPermissionFactory>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2404_1_0_2;
extern Il2CppType t2404_1_0_0;
static ParameterInfo t107_m30917_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2404_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30917_GM;
extern void* RuntimeInvoker_t109_t110_t5806 (MethodInfo* method, void* obj, void** args);
MethodInfo m30917_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5806, t107_m30917_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30917_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30919_MI;
struct t107;
#define m30919(__this, p0, method) (void)m23597_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Security.Policy.IIdentityPermissionFactory>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2404_0_0_0;
extern Il2CppType t2404_0_0_0;
static ParameterInfo t107_m30919_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t2404_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30919_GM;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30919_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m23597_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t107_m30919_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30919_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30920_MI;
struct t107;
#define m30920(__this, p0, method) (bool)m23598_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Policy.IIdentityPermissionFactory>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2404_0_0_0;
static ParameterInfo t107_m30920_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t2404_0_0_0},
};
extern TypeInfo t2404_TI;
static Il2CppRGCTXData m30920_RGCTXData[1] = 
{
	&t2404_TI/* Class Usage */,
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30920_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30920_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m23598_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30920_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30920_RGCTXData, NULL, &m30920_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30921_MI;
struct t107;
#define m30921(__this, p0, p1, method) (void)m23599_gshared((t107 *)__this, (t168*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Policy.IIdentityPermissionFactory>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4362_0_0_0;
extern Il2CppType t4362_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30921_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4362_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30921_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30921_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m23599_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30921_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30921_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30922_MI;
struct t107;
#define m30922(__this, p0, method) (bool)m23600_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Policy.IIdentityPermissionFactory>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2404_0_0_0;
static ParameterInfo t107_m30922_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t2404_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30922_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30922_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m23600_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30922_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30922_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30923_MI;
struct t107;
#define m30923(__this, p0, method) (int32_t)m23601_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Security.Policy.IIdentityPermissionFactory>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2404_0_0_0;
static ParameterInfo t107_m30923_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t2404_0_0_0},
};
extern TypeInfo t2404_TI;
static Il2CppRGCTXData m30923_RGCTXData[1] = 
{
	&t2404_TI/* Class Usage */,
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30923_GM;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30923_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m23601_gshared, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t107_m30923_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30923_RGCTXData, NULL, &m30923_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30924_MI;
struct t107;
#define m30924(__this, p0, p1, method) (void)m23602_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Security.Policy.IIdentityPermissionFactory>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2404_0_0_0;
static ParameterInfo t107_m30924_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t2404_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30924_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30924_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m23602_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30924_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30924_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30925_MI;
struct t107;
extern MethodInfo m30926_MI;
struct t107;
#define m30926(__this, p0, p1, method) (void)m23604_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Security.Policy.IIdentityPermissionFactory>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2404_0_0_0;
static ParameterInfo t107_m30926_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t2404_0_0_0},
};
extern TypeInfo t2404_TI;
static Il2CppRGCTXData m30926_RGCTXData[1] = 
{
	&t2404_TI/* Class Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30926_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30926_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m23604_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30926_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, m30926_RGCTXData, NULL, &m30926_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Security.Policy.IIdentityPermissionFactory>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2404_1_0_0;
static ParameterInfo t107_m30925_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2404_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30925_GM;
extern void* RuntimeInvoker_t109_t110_t5806 (MethodInfo* method, void* obj, void** args);
MethodInfo m30925_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5806, t107_m30925_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30925_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4106.h"
extern TypeInfo t4106_TI;
#include "t4106MD.h"
extern MethodInfo m23250_MI;
extern MethodInfo m30927_MI;
struct t107;
#define m30927(__this, method) (t5*)m23605_gshared((t107 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Policy.IIdentityPermissionFactory>()
extern TypeInfo t107_TI;
extern TypeInfo t5807_TI;
extern TypeInfo t4106_TI;
static Il2CppRGCTXData m30927_RGCTXData[2] = 
{
	&t4106_TI/* Class Usage */,
	&m23250_MI/* Method Usage */,
};
extern Il2CppType t5807_0_0_0;
extern Il2CppGenericMethod m30927_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30927_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m23605_gshared, &t107_TI, &t5807_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, m30927_RGCTXData, NULL, &m30927_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30928_MI;
struct t107;
struct t107;
 void m23606_gshared (t5 * __this, t168** p0, int32_t p1, int32_t p2, MethodInfo* method);
#define m23606(__this, p0, p1, p2, method) (void)m23606_gshared((t5 *)__this, (t168**)p0, (int32_t)p1, (int32_t)p2, method)
#define m30928(__this, p0, p1, p2, method) (void)m23606_gshared((t5 *)__this, (t168**)p0, (int32_t)p1, (int32_t)p2, method)
extern MethodInfo m30929_MI;
struct t107;
struct t107;
 void m23607_gshared (t5 * __this, t168** p0, int32_t p1, MethodInfo* method);
#define m23607(__this, p0, p1, method) (void)m23607_gshared((t5 *)__this, (t168**)p0, (int32_t)p1, method)
#define m30929(__this, p0, p1, method) (void)m23607_gshared((t5 *)__this, (t168**)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::Resize<System.Security.Policy.StrongName>(T[]&,System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4107_1_0_0;
extern Il2CppType t4107_1_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30929_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4107_1_0_0},
	{"newSize", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
static Il2CppRGCTXData m30929_RGCTXData[1] = 
{
	&m30928_MI/* Method Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30929_GM;
extern void* RuntimeInvoker_t109_t5808_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30929_MI = 
{
	"Resize", (methodPointerType)&m23607_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5808_t110, t107_m30929_ParameterInfos, NULL, 150, 0, 255, 2, false, true, 0, m30929_RGCTXData, NULL, &m30929_GM};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t4107_TI;
#include "t166MD.h"
extern MethodInfo m4991_MI;
extern MethodInfo m10604_MI;
extern MethodInfo m6740_MI;
// Metadata Definition System.Void System.Array::Resize<System.Security.Policy.StrongName>(T[]&,System.Int32,System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4107_1_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30928_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4107_1_0_0},
	{"length", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"newSize", 2, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern TypeInfo t4107_TI;
static Il2CppRGCTXData m30928_RGCTXData[1] = 
{
	&t4107_TI/* Array Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30928_GM;
extern void* RuntimeInvoker_t109_t5808_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30928_MI = 
{
	"Resize", (methodPointerType)&m23606_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5808_t110_t110, t107_m30928_ParameterInfos, NULL, 147, 0, 255, 3, false, true, 0, m30928_RGCTXData, NULL, &m30928_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4117.h"
extern TypeInfo t4117_TI;
#include "t4117MD.h"
extern MethodInfo m6713_MI;
extern MethodInfo m23381_MI;
extern MethodInfo m30930_MI;
extern MethodInfo m30931_MI;
struct t107;
struct t107;
#include "t2334.h"
 int32_t m11458_gshared (t5 * __this, t168* p0, t5 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m11458(__this, p0, p1, p2, p3, method) (int32_t)m11458_gshared((t5 *)__this, (t168*)p0, (t5 *)p1, (int32_t)p2, (int32_t)p3, method)
#define m30931(__this, p0, p1, p2, p3, method) (int32_t)m11458_gshared((t5 *)__this, (t168*)p0, (t5 *)p1, (int32_t)p2, (int32_t)p3, method)
// Metadata Definition System.Int32 System.Array::IndexOf<System.Security.Policy.StrongName>(T[],T,System.Int32,System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4107_0_0_0;
extern Il2CppType t1885_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30931_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4107_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
	{"startIndex", 2, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"count", 3, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
static Il2CppRGCTXData m30931_RGCTXData[2] = 
{
	&m23381_MI/* Method Usage */,
	&m30930_MI/* Method Usage */,
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30931_GM;
extern void* RuntimeInvoker_t110_t5_t5_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30931_MI = 
{
	"IndexOf", (methodPointerType)&m11458_gshared, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5_t110_t110, t107_m30931_ParameterInfos, NULL, 150, 0, 255, 4, false, true, 0, m30931_RGCTXData, NULL, &m30931_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30932_MI;
struct t107;
#include "t1398.h"
#include "t142.h"
#include "t118.h"
#include "t144.h"
#include "t133.h"
struct t107;
 void m23675_gshared (t5 * __this, t168* p0, t168* p1, int32_t p2, int32_t p3, t5* p4, MethodInfo* method);
#define m23675(__this, p0, p1, p2, p3, p4, method) (void)m23675_gshared((t5 *)__this, (t168*)p0, (t168*)p1, (int32_t)p2, (int32_t)p3, (t5*)p4, method)
#define m30932(__this, p0, p1, p2, p3, p4, method) (void)m23675_gshared((t5 *)__this, (t168*)p0, (t168*)p1, (int32_t)p2, (int32_t)p3, (t5*)p4, method)
extern MethodInfo m30933_MI;
struct t107;
struct t107;
 void m23676_gshared (t5 * __this, t168* p0, int32_t p1, int32_t p2, t5* p3, MethodInfo* method);
#define m23676(__this, p0, p1, p2, p3, method) (void)m23676_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (int32_t)p2, (t5*)p3, method)
#define m30933(__this, p0, p1, p2, p3, method) (void)m23676_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (int32_t)p2, (t5*)p3, method)
// Metadata Definition System.Void System.Array::Sort<System.Security.Policy.StrongName>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo t107_TI;
extern Il2CppType t4107_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t5809_0_0_0;
extern Il2CppType t5809_0_0_0;
static ParameterInfo t107_m30933_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4107_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"length", 2, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"comparer", 3, 134217728, &EmptyCustomAttributesCache, &t5809_0_0_0},
};
static Il2CppRGCTXData m30933_RGCTXData[1] = 
{
	&m30932_MI/* Method Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30933_GM;
extern void* RuntimeInvoker_t109_t5_t110_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30933_MI = 
{
	"Sort", (methodPointerType)&m23676_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110_t110_t5, t107_m30933_ParameterInfos, NULL, 150, 0, 255, 4, false, true, 0, m30933_RGCTXData, NULL, &m30933_GM};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1400_TI;
extern TypeInfo t118_TI;
extern TypeInfo t55_TI;
extern TypeInfo t146_TI;
extern TypeInfo t144_TI;
extern TypeInfo t133_TI;
extern TypeInfo t142_TI;
#include "t133MD.h"
extern MethodInfo m10152_MI;
extern MethodInfo m30934_MI;
extern MethodInfo m6765_MI;
extern MethodInfo m6766_MI;
extern MethodInfo m6767_MI;
extern MethodInfo m30935_MI;
extern MethodInfo m10600_MI;
struct t107;
#include "t124.h"
struct t107;
 t1398 * m23677_gshared (t5 * __this, t168* p0, MethodInfo* method);
#define m23677(__this, p0, method) (t1398 *)m23677_gshared((t5 *)__this, (t168*)p0, method)
#define m30934(__this, p0, method) (t1398 *)m23677_gshared((t5 *)__this, (t168*)p0, method)
struct t107;
struct t107;
 void m23678_gshared (t5 * __this, t168* p0, t168* p1, int32_t p2, int32_t p3, t5* p4, MethodInfo* method);
#define m23678(__this, p0, p1, p2, p3, p4, method) (void)m23678_gshared((t5 *)__this, (t168*)p0, (t168*)p1, (int32_t)p2, (int32_t)p3, (t5*)p4, method)
#define m30935(__this, p0, p1, p2, p3, p4, method) (void)m23678_gshared((t5 *)__this, (t168*)p0, (t168*)p1, (int32_t)p2, (int32_t)p3, (t5*)p4, method)
// Metadata Definition System.Void System.Array::Sort<System.Security.Policy.StrongName,System.Security.Policy.StrongName>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
extern TypeInfo t107_TI;
extern Il2CppType t4107_0_0_0;
extern Il2CppType t4107_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t5809_0_0_0;
static ParameterInfo t107_m30932_ParameterInfos[] = 
{
	{"keys", 0, 134217728, &EmptyCustomAttributesCache, &t4107_0_0_0},
	{"items", 1, 134217728, &EmptyCustomAttributesCache, &t4107_0_0_0},
	{"index", 2, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"length", 3, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"comparer", 4, 134217728, &EmptyCustomAttributesCache, &t5809_0_0_0},
};
extern TypeInfo t4107_TI;
static Il2CppRGCTXData m30932_RGCTXData[3] = 
{
	&m30934_MI/* Method Usage */,
	&t4107_TI/* Class Usage */,
	&m30935_MI/* Method Usage */,
};
extern Il2CppGenericInst GenInst_t1885_0_0_0_t1885_0_0_0;
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30932_GM;
extern void* RuntimeInvoker_t109_t5_t5_t110_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30932_MI = 
{
	"Sort", (methodPointerType)&m23675_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t110_t110_t5, t107_m30932_ParameterInfos, NULL, 150, 0, 255, 5, false, true, 0, m30932_RGCTXData, NULL, &m30932_GM};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1398_TI;
#include "t1398MD.h"
extern MethodInfo m6760_MI;
extern MethodInfo m6679_MI;
extern MethodInfo m6763_MI;
extern MethodInfo m6762_MI;
// Metadata Definition System.Array/Swapper System.Array::get_swapper<System.Security.Policy.StrongName>(T[])
extern TypeInfo t107_TI;
extern Il2CppType t4107_0_0_0;
static ParameterInfo t107_m30934_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4107_0_0_0},
};
extern Il2CppType t1398_0_0_0;
extern Il2CppGenericMethod m30934_GM;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30934_MI = 
{
	"get_swapper", (methodPointerType)&m23677_gshared, &t107_TI, &t1398_0_0_0, RuntimeInvoker_t5_t5, t107_m30934_ParameterInfos, NULL, 145, 0, 255, 1, false, true, 0, NULL, NULL, &m30934_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30936_MI;
extern MethodInfo m30937_MI;
struct t107;
#include "t114.h"
#include "t115.h"
struct t107;
 int32_t m23822_gshared (t5 * __this, t5 * p0, t5 * p1, t5* p2, MethodInfo* method);
#define m23822(__this, p0, p1, p2, method) (int32_t)m23822_gshared((t5 *)__this, (t5 *)p0, (t5 *)p1, (t5*)p2, method)
#define m30936(__this, p0, p1, p2, method) (int32_t)m23822_gshared((t5 *)__this, (t5 *)p0, (t5 *)p1, (t5*)p2, method)
struct t107;
struct t107;
 void m23823_gshared (t5 * __this, t168* p0, t168* p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m23823(__this, p0, p1, p2, p3, method) (void)m23823_gshared((t5 *)__this, (t168*)p0, (t168*)p1, (int32_t)p2, (int32_t)p3, method)
#define m30937(__this, p0, p1, p2, p3, method) (void)m23823_gshared((t5 *)__this, (t168*)p0, (t168*)p1, (int32_t)p2, (int32_t)p3, method)
// Metadata Definition System.Void System.Array::qsort<System.Security.Policy.StrongName,System.Security.Policy.StrongName>(K[],V[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<K>)
extern TypeInfo t107_TI;
extern Il2CppType t4107_0_0_0;
extern Il2CppType t4107_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t5809_0_0_0;
static ParameterInfo t107_m30935_ParameterInfos[] = 
{
	{"keys", 0, 134217728, &EmptyCustomAttributesCache, &t4107_0_0_0},
	{"items", 1, 134217728, &EmptyCustomAttributesCache, &t4107_0_0_0},
	{"low0", 2, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"high0", 3, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"comparer", 4, 134217728, &EmptyCustomAttributesCache, &t5809_0_0_0},
};
static Il2CppRGCTXData m30935_RGCTXData[3] = 
{
	&m30936_MI/* Method Usage */,
	&m30937_MI/* Method Usage */,
	&m30935_MI/* Method Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30935_GM;
extern void* RuntimeInvoker_t109_t5_t5_t110_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30935_MI = 
{
	"qsort", (methodPointerType)&m23678_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t110_t110_t5, t107_m30935_ParameterInfos, NULL, 145, 0, 255, 5, false, true, 0, m30935_RGCTXData, NULL, &m30935_GM};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t5809_TI;
extern TypeInfo t5810_TI;
extern TypeInfo t122_TI;
extern TypeInfo t114_TI;
extern TypeInfo t11_TI;
#include "t114MD.h"
#include "t11MD.h"
extern MethodInfo m30938_MI;
extern MethodInfo m30939_MI;
extern MethodInfo m11009_MI;
extern MethodInfo m532_MI;
extern MethodInfo m462_MI;
extern MethodInfo m4758_MI;
// Metadata Definition System.Int32 System.Array::compare<System.Security.Policy.StrongName>(T,T,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo t107_TI;
extern Il2CppType t1885_0_0_0;
extern Il2CppType t1885_0_0_0;
extern Il2CppType t5809_0_0_0;
static ParameterInfo t107_m30936_ParameterInfos[] = 
{
	{"value1", 0, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
	{"value2", 1, 134217728, &EmptyCustomAttributesCache, &t1885_0_0_0},
	{"comparer", 2, 134217728, &EmptyCustomAttributesCache, &t5809_0_0_0},
};
extern TypeInfo t1885_TI;
extern TypeInfo t5810_TI;
static Il2CppRGCTXData m30936_RGCTXData[5] = 
{
	&m30938_MI/* Method Usage */,
	&t1885_TI/* Class Usage */,
	&t5810_TI/* Class Usage */,
	&m30939_MI/* Method Usage */,
	&t1885_0_0_0/* Type Usage */,
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30936_GM;
extern void* RuntimeInvoker_t110_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30936_MI = 
{
	"compare", (methodPointerType)&m23822_gshared, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5_t5, t107_m30936_ParameterInfos, NULL, 145, 0, 255, 3, false, true, 0, m30936_RGCTXData, NULL, &m30936_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::swap<System.Security.Policy.StrongName,System.Security.Policy.StrongName>(K[],V[],System.Int32,System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4107_0_0_0;
extern Il2CppType t4107_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30937_ParameterInfos[] = 
{
	{"keys", 0, 134217728, &EmptyCustomAttributesCache, &t4107_0_0_0},
	{"items", 1, 134217728, &EmptyCustomAttributesCache, &t4107_0_0_0},
	{"i", 2, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"j", 3, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30937_GM;
extern void* RuntimeInvoker_t109_t5_t5_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30937_MI = 
{
	"swap", (methodPointerType)&m23823_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t110_t110, t107_m30937_ParameterInfos, NULL, 145, 0, 255, 4, false, true, 0, NULL, NULL, &m30937_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4114.h"
extern MethodInfo m30940_MI;
struct t107;
struct t107;
#include "t2458.h"
 void m23826_gshared (t5 * __this, t168* p0, int32_t p1, int32_t p2, t2458 * p3, MethodInfo* method);
#define m23826(__this, p0, p1, p2, p3, method) (void)m23826_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (int32_t)p2, (t2458 *)p3, method)
#define m30940(__this, p0, p1, p2, p3, method) (void)m23826_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (int32_t)p2, (t2458 *)p3, method)
extern MethodInfo m30941_MI;
struct t107;
struct t107;
 void m23827_gshared (t5 * __this, t168* p0, int32_t p1, t2458 * p2, MethodInfo* method);
#define m23827(__this, p0, p1, p2, method) (void)m23827_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (t2458 *)p2, method)
#define m30941(__this, p0, p1, p2, method) (void)m23827_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (t2458 *)p2, method)
// Metadata Definition System.Void System.Array::Sort<System.Security.Policy.StrongName>(T[],System.Int32,System.Comparison`1<T>)
extern TypeInfo t107_TI;
extern Il2CppType t4107_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t4114_0_0_0;
extern Il2CppType t4114_0_0_0;
static ParameterInfo t107_m30941_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4107_0_0_0},
	{"length", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"comparison", 2, 134217728, &EmptyCustomAttributesCache, &t4114_0_0_0},
};
static Il2CppRGCTXData m30941_RGCTXData[1] = 
{
	&m30940_MI/* Method Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30941_GM;
extern void* RuntimeInvoker_t109_t5_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30941_MI = 
{
	"Sort", (methodPointerType)&m23827_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110_t5, t107_m30941_ParameterInfos, NULL, 147, 0, 255, 3, false, true, 0, m30941_RGCTXData, NULL, &m30941_GM};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t4114_TI;
#include "t4114MD.h"
extern MethodInfo m23400_MI;
extern MethodInfo m30942_MI;
struct t107;
struct t107;
 void m23828_gshared (t5 * __this, t168* p0, int32_t p1, int32_t p2, MethodInfo* method);
#define m23828(__this, p0, p1, p2, method) (void)m23828_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (int32_t)p2, method)
#define m30942(__this, p0, p1, p2, method) (void)m23828_gshared((t5 *)__this, (t168*)p0, (int32_t)p1, (int32_t)p2, method)
// Metadata Definition System.Void System.Array::qsort<System.Security.Policy.StrongName>(T[],System.Int32,System.Int32,System.Comparison`1<T>)
extern TypeInfo t107_TI;
extern Il2CppType t4107_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t4114_0_0_0;
static ParameterInfo t107_m30940_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4107_0_0_0},
	{"low0", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"high0", 2, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"comparison", 3, 134217728, &EmptyCustomAttributesCache, &t4114_0_0_0},
};
static Il2CppRGCTXData m30940_RGCTXData[3] = 
{
	&m23400_MI/* Method Usage */,
	&m30942_MI/* Method Usage */,
	&m30940_MI/* Method Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30940_GM;
extern void* RuntimeInvoker_t109_t5_t110_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30940_MI = 
{
	"qsort", (methodPointerType)&m23826_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110_t110_t5, t107_m30940_ParameterInfos, NULL, 145, 0, 255, 4, false, true, 0, m30940_RGCTXData, NULL, &m30940_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::swap<System.Security.Policy.StrongName>(T[],System.Int32,System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4107_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30942_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t4107_0_0_0},
	{"i", 1, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"j", 2, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30942_GM;
extern void* RuntimeInvoker_t109_t5_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30942_MI = 
{
	"swap", (methodPointerType)&m23828_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110_t110, t107_m30942_ParameterInfos, NULL, 145, 0, 255, 3, false, true, 0, NULL, NULL, &m30942_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1886.h"
extern MethodInfo m30943_MI;
struct t107;
extern MethodInfo m30944_MI;
struct t107;
 int32_t m30944 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30944 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.Security.Principal.PrincipalPolicy>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1886_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30944_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1886_0_0_0;
extern Il2CppType t1886_0_0_0;
extern Il2CppGenericMethod m30944_GM;
extern void* RuntimeInvoker_t1886_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30944_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m30944, &t107_TI, &t1886_0_0_0, RuntimeInvoker_t1886_t110, t107_m30944_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30944_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Security.Principal.PrincipalPolicy>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1886_1_0_2;
extern Il2CppType t1886_1_0_0;
static ParameterInfo t107_m30943_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1886_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30943_GM;
extern void* RuntimeInvoker_t109_t110_t5811 (MethodInfo* method, void* obj, void** args);
MethodInfo m30943_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5811, t107_m30943_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30943_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30945_MI;
struct t107;
 void m30945 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30945 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Security.Principal.PrincipalPolicy>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1886_0_0_0;
extern Il2CppType t1886_0_0_0;
static ParameterInfo t107_m30945_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1886_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30945_GM;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30945_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m30945, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t107_m30945_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30945_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30946_MI;
struct t107;
 bool m30946 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30946 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1886_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1886_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t1886_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1886_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Principal.PrincipalPolicy>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1886_0_0_0;
static ParameterInfo t107_m30946_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1886_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30946_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30946_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m30946, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m30946_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30946_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30947_MI;
struct t107;
 void m30947 (t107 * __this, t4363* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30947 (t107 * __this, t4363* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Principal.PrincipalPolicy>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4363_0_0_0;
extern Il2CppType t4363_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30947_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4363_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30947_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30947_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m30947, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30947_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30947_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30948_MI;
struct t107;
 bool m30948 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30948 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Principal.PrincipalPolicy>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1886_0_0_0;
static ParameterInfo t107_m30948_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1886_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30948_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30948_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m30948, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m30948_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30948_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30949_MI;
struct t107;
 int32_t m30949 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30949 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1886_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1886_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1886_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1886_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Security.Principal.PrincipalPolicy>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1886_0_0_0;
static ParameterInfo t107_m30949_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1886_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30949_GM;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30949_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m30949, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t107_m30949_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30949_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30950_MI;
struct t107;
 void m30950 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30950 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Security.Principal.PrincipalPolicy>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1886_0_0_0;
static ParameterInfo t107_m30950_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1886_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30950_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30950_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m30950, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m30950_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30950_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30951_MI;
struct t107;
extern MethodInfo m30952_MI;
struct t107;
 void m30952 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30952 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1886_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Security.Principal.PrincipalPolicy>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1886_0_0_0;
static ParameterInfo t107_m30952_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1886_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30952_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30952_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m30952, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m30952_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30952_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Security.Principal.PrincipalPolicy>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1886_1_0_0;
static ParameterInfo t107_m30951_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1886_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30951_GM;
extern void* RuntimeInvoker_t109_t110_t5811 (MethodInfo* method, void* obj, void** args);
MethodInfo m30951_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5811, t107_m30951_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30951_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4121.h"
extern TypeInfo t4121_TI;
#include "t4121MD.h"
extern MethodInfo m23403_MI;
extern MethodInfo m30953_MI;
struct t107;
 t5* m30953 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m30953 (t107 * __this, MethodInfo* method){
	{
		t4121  L_0 = {0};
		m23403(&L_0, __this, &m23403_MI);
		t4121  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4121_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Principal.PrincipalPolicy>()
extern TypeInfo t107_TI;
extern TypeInfo t5812_TI;
extern Il2CppType t5812_0_0_0;
extern Il2CppGenericMethod m30953_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30953_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m30953, &t107_TI, &t5812_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m30953_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1887.h"
extern MethodInfo m30954_MI;
struct t107;
extern MethodInfo m30955_MI;
struct t107;
 int32_t m30955 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30955 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.Security.Principal.WindowsAccountType>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1887_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30955_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1887_0_0_0;
extern Il2CppType t1887_0_0_0;
extern Il2CppGenericMethod m30955_GM;
extern void* RuntimeInvoker_t1887_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30955_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m30955, &t107_TI, &t1887_0_0_0, RuntimeInvoker_t1887_t110, t107_m30955_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30955_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Security.Principal.WindowsAccountType>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1887_1_0_2;
extern Il2CppType t1887_1_0_0;
static ParameterInfo t107_m30954_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1887_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30954_GM;
extern void* RuntimeInvoker_t109_t110_t5813 (MethodInfo* method, void* obj, void** args);
MethodInfo m30954_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5813, t107_m30954_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30954_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30956_MI;
struct t107;
 void m30956 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30956 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Security.Principal.WindowsAccountType>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1887_0_0_0;
extern Il2CppType t1887_0_0_0;
static ParameterInfo t107_m30956_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1887_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30956_GM;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30956_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m30956, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t107_m30956_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30956_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30957_MI;
struct t107;
 bool m30957 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30957 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1887_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1887_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t1887_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1887_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Principal.WindowsAccountType>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1887_0_0_0;
static ParameterInfo t107_m30957_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1887_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30957_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30957_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m30957, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m30957_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30957_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30958_MI;
struct t107;
 void m30958 (t107 * __this, t4364* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30958 (t107 * __this, t4364* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Principal.WindowsAccountType>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4364_0_0_0;
extern Il2CppType t4364_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30958_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4364_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30958_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30958_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m30958, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30958_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30958_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30959_MI;
struct t107;
 bool m30959 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m30959 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Principal.WindowsAccountType>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1887_0_0_0;
static ParameterInfo t107_m30959_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1887_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30959_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30959_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m30959, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m30959_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30959_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30960_MI;
struct t107;
 int32_t m30960 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m30960 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1887_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1887_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1887_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1887_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Security.Principal.WindowsAccountType>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1887_0_0_0;
static ParameterInfo t107_m30960_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1887_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30960_GM;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30960_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m30960, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t107_m30960_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30960_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30961_MI;
struct t107;
 void m30961 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30961 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Security.Principal.WindowsAccountType>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1887_0_0_0;
static ParameterInfo t107_m30961_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1887_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30961_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30961_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m30961, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m30961_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30961_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30962_MI;
struct t107;
extern MethodInfo m30963_MI;
struct t107;
 void m30963 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m30963 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1887_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Security.Principal.WindowsAccountType>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1887_0_0_0;
static ParameterInfo t107_m30963_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1887_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30963_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30963_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m30963, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m30963_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30963_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Security.Principal.WindowsAccountType>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1887_1_0_0;
static ParameterInfo t107_m30962_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1887_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30962_GM;
extern void* RuntimeInvoker_t109_t110_t5813 (MethodInfo* method, void* obj, void** args);
MethodInfo m30962_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5813, t107_m30962_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30962_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4122.h"
extern TypeInfo t4122_TI;
#include "t4122MD.h"
extern MethodInfo m23408_MI;
extern MethodInfo m30964_MI;
struct t107;
 t5* m30964 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m30964 (t107 * __this, MethodInfo* method){
	{
		t4122  L_0 = {0};
		m23408(&L_0, __this, &m23408_MI);
		t4122  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4122_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Principal.WindowsAccountType>()
extern TypeInfo t107_TI;
extern TypeInfo t5814_TI;
extern Il2CppType t5814_0_0_0;
extern Il2CppGenericMethod m30964_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30964_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m30964, &t107_TI, &t5814_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m30964_GM};
#ifndef _MSC_VER
#else
#endif

#include "t742.h"
extern MethodInfo m30965_MI;
struct t107;
extern MethodInfo m30966_MI;
struct t107;
#define m30966(__this, p0, method) (t742 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.Security.SecurityCriticalAttribute>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t742_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30966_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t742_0_0_0;
extern Il2CppType t742_0_0_0;
extern Il2CppGenericMethod m30966_GM;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30966_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m23596_gshared, &t107_TI, &t742_0_0_0, RuntimeInvoker_t5_t110, t107_m30966_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30966_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Security.SecurityCriticalAttribute>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t742_1_0_2;
extern Il2CppType t742_1_0_0;
static ParameterInfo t107_m30965_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t742_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30965_GM;
extern void* RuntimeInvoker_t109_t110_t5815 (MethodInfo* method, void* obj, void** args);
MethodInfo m30965_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5815, t107_m30965_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30965_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30967_MI;
struct t107;
#define m30967(__this, p0, method) (void)m23597_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Security.SecurityCriticalAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t742_0_0_0;
extern Il2CppType t742_0_0_0;
static ParameterInfo t107_m30967_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t742_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30967_GM;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30967_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m23597_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t107_m30967_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30967_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30968_MI;
struct t107;
#define m30968(__this, p0, method) (bool)m23598_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.SecurityCriticalAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t742_0_0_0;
static ParameterInfo t107_m30968_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t742_0_0_0},
};
extern TypeInfo t742_TI;
static Il2CppRGCTXData m30968_RGCTXData[1] = 
{
	&t742_TI/* Class Usage */,
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30968_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30968_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m23598_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30968_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30968_RGCTXData, NULL, &m30968_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30969_MI;
struct t107;
#define m30969(__this, p0, p1, method) (void)m23599_gshared((t107 *)__this, (t168*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.SecurityCriticalAttribute>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4365_0_0_0;
extern Il2CppType t4365_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30969_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4365_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30969_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30969_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m23599_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30969_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30969_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30970_MI;
struct t107;
#define m30970(__this, p0, method) (bool)m23600_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.SecurityCriticalAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t742_0_0_0;
static ParameterInfo t107_m30970_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t742_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30970_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30970_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m23600_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30970_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30970_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30971_MI;
struct t107;
#define m30971(__this, p0, method) (int32_t)m23601_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Security.SecurityCriticalAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t742_0_0_0;
static ParameterInfo t107_m30971_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t742_0_0_0},
};
extern TypeInfo t742_TI;
static Il2CppRGCTXData m30971_RGCTXData[1] = 
{
	&t742_TI/* Class Usage */,
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30971_GM;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30971_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m23601_gshared, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t107_m30971_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30971_RGCTXData, NULL, &m30971_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30972_MI;
struct t107;
#define m30972(__this, p0, p1, method) (void)m23602_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Security.SecurityCriticalAttribute>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t742_0_0_0;
static ParameterInfo t107_m30972_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t742_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30972_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30972_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m23602_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30972_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30972_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30973_MI;
struct t107;
extern MethodInfo m30974_MI;
struct t107;
#define m30974(__this, p0, p1, method) (void)m23604_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Security.SecurityCriticalAttribute>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t742_0_0_0;
static ParameterInfo t107_m30974_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t742_0_0_0},
};
extern TypeInfo t742_TI;
static Il2CppRGCTXData m30974_RGCTXData[1] = 
{
	&t742_TI/* Class Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30974_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30974_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m23604_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30974_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, m30974_RGCTXData, NULL, &m30974_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Security.SecurityCriticalAttribute>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t742_1_0_0;
static ParameterInfo t107_m30973_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t742_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30973_GM;
extern void* RuntimeInvoker_t109_t110_t5815 (MethodInfo* method, void* obj, void** args);
MethodInfo m30973_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5815, t107_m30973_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30973_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4123.h"
extern TypeInfo t4123_TI;
#include "t4123MD.h"
extern MethodInfo m23413_MI;
extern MethodInfo m30975_MI;
struct t107;
#define m30975(__this, method) (t5*)m23605_gshared((t107 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.SecurityCriticalAttribute>()
extern TypeInfo t107_TI;
extern TypeInfo t5816_TI;
extern TypeInfo t4123_TI;
static Il2CppRGCTXData m30975_RGCTXData[2] = 
{
	&t4123_TI/* Class Usage */,
	&m23413_MI/* Method Usage */,
};
extern Il2CppType t5816_0_0_0;
extern Il2CppGenericMethod m30975_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30975_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m23605_gshared, &t107_TI, &t5816_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, m30975_RGCTXData, NULL, &m30975_GM};
#ifndef _MSC_VER
#else
#endif

#include "t752.h"
extern MethodInfo m30976_MI;
struct t107;
extern MethodInfo m30977_MI;
struct t107;
#define m30977(__this, p0, method) (t752 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.Security.SecuritySafeCriticalAttribute>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t752_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30977_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t752_0_0_0;
extern Il2CppType t752_0_0_0;
extern Il2CppGenericMethod m30977_GM;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30977_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m23596_gshared, &t107_TI, &t752_0_0_0, RuntimeInvoker_t5_t110, t107_m30977_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30977_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Security.SecuritySafeCriticalAttribute>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t752_1_0_2;
extern Il2CppType t752_1_0_0;
static ParameterInfo t107_m30976_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t752_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30976_GM;
extern void* RuntimeInvoker_t109_t110_t5817 (MethodInfo* method, void* obj, void** args);
MethodInfo m30976_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5817, t107_m30976_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30976_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30978_MI;
struct t107;
#define m30978(__this, p0, method) (void)m23597_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Security.SecuritySafeCriticalAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t752_0_0_0;
extern Il2CppType t752_0_0_0;
static ParameterInfo t107_m30978_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t752_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30978_GM;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30978_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m23597_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t107_m30978_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30978_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30979_MI;
struct t107;
#define m30979(__this, p0, method) (bool)m23598_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.SecuritySafeCriticalAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t752_0_0_0;
static ParameterInfo t107_m30979_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t752_0_0_0},
};
extern TypeInfo t752_TI;
static Il2CppRGCTXData m30979_RGCTXData[1] = 
{
	&t752_TI/* Class Usage */,
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30979_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30979_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m23598_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30979_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30979_RGCTXData, NULL, &m30979_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30980_MI;
struct t107;
#define m30980(__this, p0, p1, method) (void)m23599_gshared((t107 *)__this, (t168*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.SecuritySafeCriticalAttribute>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4366_0_0_0;
extern Il2CppType t4366_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30980_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4366_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30980_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30980_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m23599_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30980_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30980_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30981_MI;
struct t107;
#define m30981(__this, p0, method) (bool)m23600_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.SecuritySafeCriticalAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t752_0_0_0;
static ParameterInfo t107_m30981_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t752_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30981_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30981_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m23600_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30981_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30981_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30982_MI;
struct t107;
#define m30982(__this, p0, method) (int32_t)m23601_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Security.SecuritySafeCriticalAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t752_0_0_0;
static ParameterInfo t107_m30982_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t752_0_0_0},
};
extern TypeInfo t752_TI;
static Il2CppRGCTXData m30982_RGCTXData[1] = 
{
	&t752_TI/* Class Usage */,
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30982_GM;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30982_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m23601_gshared, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t107_m30982_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30982_RGCTXData, NULL, &m30982_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30983_MI;
struct t107;
#define m30983(__this, p0, p1, method) (void)m23602_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Security.SecuritySafeCriticalAttribute>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t752_0_0_0;
static ParameterInfo t107_m30983_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t752_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30983_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30983_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m23602_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30983_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30983_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30984_MI;
struct t107;
extern MethodInfo m30985_MI;
struct t107;
#define m30985(__this, p0, p1, method) (void)m23604_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Security.SecuritySafeCriticalAttribute>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t752_0_0_0;
static ParameterInfo t107_m30985_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t752_0_0_0},
};
extern TypeInfo t752_TI;
static Il2CppRGCTXData m30985_RGCTXData[1] = 
{
	&t752_TI/* Class Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30985_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30985_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m23604_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30985_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, m30985_RGCTXData, NULL, &m30985_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Security.SecuritySafeCriticalAttribute>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t752_1_0_0;
static ParameterInfo t107_m30984_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t752_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30984_GM;
extern void* RuntimeInvoker_t109_t110_t5817 (MethodInfo* method, void* obj, void** args);
MethodInfo m30984_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5817, t107_m30984_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30984_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4124.h"
extern TypeInfo t4124_TI;
#include "t4124MD.h"
extern MethodInfo m23418_MI;
extern MethodInfo m30986_MI;
struct t107;
#define m30986(__this, method) (t5*)m23605_gshared((t107 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.SecuritySafeCriticalAttribute>()
extern TypeInfo t107_TI;
extern TypeInfo t5818_TI;
extern TypeInfo t4124_TI;
static Il2CppRGCTXData m30986_RGCTXData[2] = 
{
	&t4124_TI/* Class Usage */,
	&m23418_MI/* Method Usage */,
};
extern Il2CppType t5818_0_0_0;
extern Il2CppGenericMethod m30986_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30986_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m23605_gshared, &t107_TI, &t5818_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, m30986_RGCTXData, NULL, &m30986_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1898.h"
extern MethodInfo m30987_MI;
struct t107;
extern MethodInfo m30988_MI;
struct t107;
#define m30988(__this, p0, method) (t1898 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.Security.SuppressUnmanagedCodeSecurityAttribute>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1898_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30988_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1898_0_0_0;
extern Il2CppType t1898_0_0_0;
extern Il2CppGenericMethod m30988_GM;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30988_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m23596_gshared, &t107_TI, &t1898_0_0_0, RuntimeInvoker_t5_t110, t107_m30988_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30988_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Security.SuppressUnmanagedCodeSecurityAttribute>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1898_1_0_2;
extern Il2CppType t1898_1_0_0;
static ParameterInfo t107_m30987_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1898_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30987_GM;
extern void* RuntimeInvoker_t109_t110_t5819 (MethodInfo* method, void* obj, void** args);
MethodInfo m30987_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5819, t107_m30987_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30987_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30989_MI;
struct t107;
#define m30989(__this, p0, method) (void)m23597_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Security.SuppressUnmanagedCodeSecurityAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1898_0_0_0;
extern Il2CppType t1898_0_0_0;
static ParameterInfo t107_m30989_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1898_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30989_GM;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30989_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m23597_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t107_m30989_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30989_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30990_MI;
struct t107;
#define m30990(__this, p0, method) (bool)m23598_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.SuppressUnmanagedCodeSecurityAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1898_0_0_0;
static ParameterInfo t107_m30990_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1898_0_0_0},
};
extern TypeInfo t1898_TI;
static Il2CppRGCTXData m30990_RGCTXData[1] = 
{
	&t1898_TI/* Class Usage */,
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30990_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30990_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m23598_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30990_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30990_RGCTXData, NULL, &m30990_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30991_MI;
struct t107;
#define m30991(__this, p0, p1, method) (void)m23599_gshared((t107 *)__this, (t168*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.SuppressUnmanagedCodeSecurityAttribute>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4367_0_0_0;
extern Il2CppType t4367_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30991_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4367_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30991_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30991_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m23599_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m30991_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30991_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30992_MI;
struct t107;
#define m30992(__this, p0, method) (bool)m23600_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.SuppressUnmanagedCodeSecurityAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1898_0_0_0;
static ParameterInfo t107_m30992_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1898_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m30992_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30992_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m23600_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m30992_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30992_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30993_MI;
struct t107;
#define m30993(__this, p0, method) (int32_t)m23601_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Security.SuppressUnmanagedCodeSecurityAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1898_0_0_0;
static ParameterInfo t107_m30993_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1898_0_0_0},
};
extern TypeInfo t1898_TI;
static Il2CppRGCTXData m30993_RGCTXData[1] = 
{
	&t1898_TI/* Class Usage */,
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m30993_GM;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30993_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m23601_gshared, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t107_m30993_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m30993_RGCTXData, NULL, &m30993_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30994_MI;
struct t107;
#define m30994(__this, p0, p1, method) (void)m23602_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Security.SuppressUnmanagedCodeSecurityAttribute>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1898_0_0_0;
static ParameterInfo t107_m30994_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1898_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30994_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30994_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m23602_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30994_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m30994_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m30995_MI;
struct t107;
extern MethodInfo m30996_MI;
struct t107;
#define m30996(__this, p0, p1, method) (void)m23604_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Security.SuppressUnmanagedCodeSecurityAttribute>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1898_0_0_0;
static ParameterInfo t107_m30996_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1898_0_0_0},
};
extern TypeInfo t1898_TI;
static Il2CppRGCTXData m30996_RGCTXData[1] = 
{
	&t1898_TI/* Class Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30996_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30996_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m23604_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m30996_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, m30996_RGCTXData, NULL, &m30996_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Security.SuppressUnmanagedCodeSecurityAttribute>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1898_1_0_0;
static ParameterInfo t107_m30995_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1898_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30995_GM;
extern void* RuntimeInvoker_t109_t110_t5819 (MethodInfo* method, void* obj, void** args);
MethodInfo m30995_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5819, t107_m30995_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30995_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4125.h"
extern TypeInfo t4125_TI;
#include "t4125MD.h"
extern MethodInfo m23423_MI;
extern MethodInfo m30997_MI;
struct t107;
#define m30997(__this, method) (t5*)m23605_gshared((t107 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.SuppressUnmanagedCodeSecurityAttribute>()
extern TypeInfo t107_TI;
extern TypeInfo t5820_TI;
extern TypeInfo t4125_TI;
static Il2CppRGCTXData m30997_RGCTXData[2] = 
{
	&t4125_TI/* Class Usage */,
	&m23423_MI/* Method Usage */,
};
extern Il2CppType t5820_0_0_0;
extern Il2CppGenericMethod m30997_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m30997_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m23605_gshared, &t107_TI, &t5820_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, m30997_RGCTXData, NULL, &m30997_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1899.h"
extern MethodInfo m30998_MI;
struct t107;
extern MethodInfo m30999_MI;
struct t107;
#define m30999(__this, p0, method) (t1899 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.Security.UnverifiableCodeAttribute>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1899_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m30999_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1899_0_0_0;
extern Il2CppType t1899_0_0_0;
extern Il2CppGenericMethod m30999_GM;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m30999_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m23596_gshared, &t107_TI, &t1899_0_0_0, RuntimeInvoker_t5_t110, t107_m30999_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m30999_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Security.UnverifiableCodeAttribute>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1899_1_0_2;
extern Il2CppType t1899_1_0_0;
static ParameterInfo t107_m30998_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1899_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m30998_GM;
extern void* RuntimeInvoker_t109_t110_t5821 (MethodInfo* method, void* obj, void** args);
MethodInfo m30998_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5821, t107_m30998_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m30998_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31000_MI;
struct t107;
#define m31000(__this, p0, method) (void)m23597_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Security.UnverifiableCodeAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1899_0_0_0;
extern Il2CppType t1899_0_0_0;
static ParameterInfo t107_m31000_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1899_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31000_GM;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31000_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m23597_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t107_m31000_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31000_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31001_MI;
struct t107;
#define m31001(__this, p0, method) (bool)m23598_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.UnverifiableCodeAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1899_0_0_0;
static ParameterInfo t107_m31001_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1899_0_0_0},
};
extern TypeInfo t1899_TI;
static Il2CppRGCTXData m31001_RGCTXData[1] = 
{
	&t1899_TI/* Class Usage */,
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31001_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31001_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m23598_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m31001_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m31001_RGCTXData, NULL, &m31001_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31002_MI;
struct t107;
#define m31002(__this, p0, p1, method) (void)m23599_gshared((t107 *)__this, (t168*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.UnverifiableCodeAttribute>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4368_0_0_0;
extern Il2CppType t4368_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31002_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4368_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31002_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31002_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m23599_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m31002_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31002_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31003_MI;
struct t107;
#define m31003(__this, p0, method) (bool)m23600_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.UnverifiableCodeAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1899_0_0_0;
static ParameterInfo t107_m31003_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1899_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31003_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31003_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m23600_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m31003_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31003_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31004_MI;
struct t107;
#define m31004(__this, p0, method) (int32_t)m23601_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Security.UnverifiableCodeAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1899_0_0_0;
static ParameterInfo t107_m31004_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1899_0_0_0},
};
extern TypeInfo t1899_TI;
static Il2CppRGCTXData m31004_RGCTXData[1] = 
{
	&t1899_TI/* Class Usage */,
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m31004_GM;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31004_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m23601_gshared, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t107_m31004_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m31004_RGCTXData, NULL, &m31004_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31005_MI;
struct t107;
#define m31005(__this, p0, p1, method) (void)m23602_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Security.UnverifiableCodeAttribute>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1899_0_0_0;
static ParameterInfo t107_m31005_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1899_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31005_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31005_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m23602_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m31005_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31005_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31006_MI;
struct t107;
extern MethodInfo m31007_MI;
struct t107;
#define m31007(__this, p0, p1, method) (void)m23604_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Security.UnverifiableCodeAttribute>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1899_0_0_0;
static ParameterInfo t107_m31007_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1899_0_0_0},
};
extern TypeInfo t1899_TI;
static Il2CppRGCTXData m31007_RGCTXData[1] = 
{
	&t1899_TI/* Class Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31007_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31007_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m23604_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m31007_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, m31007_RGCTXData, NULL, &m31007_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Security.UnverifiableCodeAttribute>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1899_1_0_0;
static ParameterInfo t107_m31006_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1899_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31006_GM;
extern void* RuntimeInvoker_t109_t110_t5821 (MethodInfo* method, void* obj, void** args);
MethodInfo m31006_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5821, t107_m31006_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31006_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4126.h"
extern TypeInfo t4126_TI;
#include "t4126MD.h"
extern MethodInfo m23428_MI;
extern MethodInfo m31008_MI;
struct t107;
#define m31008(__this, method) (t5*)m23605_gshared((t107 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.UnverifiableCodeAttribute>()
extern TypeInfo t107_TI;
extern TypeInfo t5822_TI;
extern TypeInfo t4126_TI;
static Il2CppRGCTXData m31008_RGCTXData[2] = 
{
	&t4126_TI/* Class Usage */,
	&m23428_MI/* Method Usage */,
};
extern Il2CppType t5822_0_0_0;
extern Il2CppGenericMethod m31008_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31008_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m23605_gshared, &t107_TI, &t5822_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, m31008_RGCTXData, NULL, &m31008_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1926.h"
extern MethodInfo m31009_MI;
struct t107;
extern MethodInfo m31010_MI;
struct t107;
 int32_t m31010 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m31010 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.Threading.EventResetMode>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1926_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31010_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1926_0_0_0;
extern Il2CppType t1926_0_0_0;
extern Il2CppGenericMethod m31010_GM;
extern void* RuntimeInvoker_t1926_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31010_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m31010, &t107_TI, &t1926_0_0_0, RuntimeInvoker_t1926_t110, t107_m31010_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31010_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Threading.EventResetMode>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1926_1_0_2;
extern Il2CppType t1926_1_0_0;
static ParameterInfo t107_m31009_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1926_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31009_GM;
extern void* RuntimeInvoker_t109_t110_t5823 (MethodInfo* method, void* obj, void** args);
MethodInfo m31009_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5823, t107_m31009_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31009_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31011_MI;
struct t107;
 void m31011 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31011 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Threading.EventResetMode>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1926_0_0_0;
extern Il2CppType t1926_0_0_0;
static ParameterInfo t107_m31011_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1926_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31011_GM;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31011_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m31011, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t107_m31011_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31011_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31012_MI;
struct t107;
 bool m31012 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m31012 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1926_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1926_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t1926_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1926_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Threading.EventResetMode>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1926_0_0_0;
static ParameterInfo t107_m31012_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1926_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31012_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31012_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m31012, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m31012_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31012_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31013_MI;
struct t107;
 void m31013 (t107 * __this, t4369* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31013 (t107 * __this, t4369* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Threading.EventResetMode>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4369_0_0_0;
extern Il2CppType t4369_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31013_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4369_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31013_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31013_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m31013, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m31013_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31013_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31014_MI;
struct t107;
 bool m31014 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m31014 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Threading.EventResetMode>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1926_0_0_0;
static ParameterInfo t107_m31014_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1926_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31014_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31014_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m31014, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m31014_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31014_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31015_MI;
struct t107;
 int32_t m31015 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m31015 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1926_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1926_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1926_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1926_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Threading.EventResetMode>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1926_0_0_0;
static ParameterInfo t107_m31015_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1926_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m31015_GM;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31015_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m31015, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t107_m31015_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31015_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31016_MI;
struct t107;
 void m31016 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31016 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Threading.EventResetMode>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1926_0_0_0;
static ParameterInfo t107_m31016_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1926_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31016_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31016_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m31016, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m31016_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31016_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31017_MI;
struct t107;
extern MethodInfo m31018_MI;
struct t107;
 void m31018 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31018 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1926_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Threading.EventResetMode>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1926_0_0_0;
static ParameterInfo t107_m31018_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1926_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31018_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31018_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m31018, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m31018_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31018_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Threading.EventResetMode>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1926_1_0_0;
static ParameterInfo t107_m31017_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1926_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31017_GM;
extern void* RuntimeInvoker_t109_t110_t5823 (MethodInfo* method, void* obj, void** args);
MethodInfo m31017_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5823, t107_m31017_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31017_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4127.h"
extern TypeInfo t4127_TI;
#include "t4127MD.h"
extern MethodInfo m23433_MI;
extern MethodInfo m31019_MI;
struct t107;
 t5* m31019 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m31019 (t107 * __this, MethodInfo* method){
	{
		t4127  L_0 = {0};
		m23433(&L_0, __this, &m23433_MI);
		t4127  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4127_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Threading.EventResetMode>()
extern TypeInfo t107_TI;
extern TypeInfo t5824_TI;
extern Il2CppType t5824_0_0_0;
extern Il2CppGenericMethod m31019_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31019_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m31019, &t107_TI, &t5824_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m31019_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1314.h"
extern MethodInfo m31020_MI;
struct t107;
extern MethodInfo m31021_MI;
struct t107;
#define m31021(__this, p0, method) (t1314 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.Threading.WaitHandle>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1314_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31021_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1314_0_0_0;
extern Il2CppType t1314_0_0_0;
extern Il2CppGenericMethod m31021_GM;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31021_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m23596_gshared, &t107_TI, &t1314_0_0_0, RuntimeInvoker_t5_t110, t107_m31021_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31021_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Threading.WaitHandle>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1314_1_0_2;
extern Il2CppType t1314_1_0_0;
static ParameterInfo t107_m31020_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1314_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31020_GM;
extern void* RuntimeInvoker_t109_t110_t5825 (MethodInfo* method, void* obj, void** args);
MethodInfo m31020_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5825, t107_m31020_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31020_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31022_MI;
struct t107;
#define m31022(__this, p0, method) (void)m23597_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Threading.WaitHandle>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1314_0_0_0;
extern Il2CppType t1314_0_0_0;
static ParameterInfo t107_m31022_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1314_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31022_GM;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31022_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m23597_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t107_m31022_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31022_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31023_MI;
struct t107;
#define m31023(__this, p0, method) (bool)m23598_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Threading.WaitHandle>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1314_0_0_0;
static ParameterInfo t107_m31023_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1314_0_0_0},
};
extern TypeInfo t1314_TI;
static Il2CppRGCTXData m31023_RGCTXData[1] = 
{
	&t1314_TI/* Class Usage */,
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31023_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31023_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m23598_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m31023_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m31023_RGCTXData, NULL, &m31023_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31024_MI;
struct t107;
#define m31024(__this, p0, p1, method) (void)m23599_gshared((t107 *)__this, (t168*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Threading.WaitHandle>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t1943_0_0_0;
extern Il2CppType t1943_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31024_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t1943_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31024_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31024_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m23599_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m31024_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31024_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31025_MI;
struct t107;
#define m31025(__this, p0, method) (bool)m23600_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Threading.WaitHandle>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1314_0_0_0;
static ParameterInfo t107_m31025_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1314_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31025_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31025_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m23600_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m31025_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31025_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31026_MI;
struct t107;
#define m31026(__this, p0, method) (int32_t)m23601_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Threading.WaitHandle>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1314_0_0_0;
static ParameterInfo t107_m31026_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1314_0_0_0},
};
extern TypeInfo t1314_TI;
static Il2CppRGCTXData m31026_RGCTXData[1] = 
{
	&t1314_TI/* Class Usage */,
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m31026_GM;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31026_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m23601_gshared, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t107_m31026_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m31026_RGCTXData, NULL, &m31026_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31027_MI;
struct t107;
#define m31027(__this, p0, p1, method) (void)m23602_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Threading.WaitHandle>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1314_0_0_0;
static ParameterInfo t107_m31027_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1314_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31027_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31027_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m23602_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m31027_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31027_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31028_MI;
struct t107;
extern MethodInfo m31029_MI;
struct t107;
#define m31029(__this, p0, p1, method) (void)m23604_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Threading.WaitHandle>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1314_0_0_0;
static ParameterInfo t107_m31029_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1314_0_0_0},
};
extern TypeInfo t1314_TI;
static Il2CppRGCTXData m31029_RGCTXData[1] = 
{
	&t1314_TI/* Class Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31029_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31029_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m23604_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m31029_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, m31029_RGCTXData, NULL, &m31029_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Threading.WaitHandle>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1314_1_0_0;
static ParameterInfo t107_m31028_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1314_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31028_GM;
extern void* RuntimeInvoker_t109_t110_t5825 (MethodInfo* method, void* obj, void** args);
MethodInfo m31028_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5825, t107_m31028_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31028_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4128.h"
extern TypeInfo t4128_TI;
#include "t4128MD.h"
extern MethodInfo m23438_MI;
extern MethodInfo m31030_MI;
struct t107;
#define m31030(__this, method) (t5*)m23605_gshared((t107 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Threading.WaitHandle>()
extern TypeInfo t107_TI;
extern TypeInfo t5826_TI;
extern TypeInfo t4128_TI;
static Il2CppRGCTXData m31030_RGCTXData[2] = 
{
	&t4128_TI/* Class Usage */,
	&m23438_MI/* Method Usage */,
};
extern Il2CppType t5826_0_0_0;
extern Il2CppGenericMethod m31030_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31030_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m23605_gshared, &t107_TI, &t5826_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, m31030_RGCTXData, NULL, &m31030_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31031_MI;
struct t107;
extern MethodInfo m31032_MI;
struct t107;
#define m31032(__this, p0, method) (t5 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.IDisposable>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t132_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31032_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t132_0_0_0;
extern Il2CppType t132_0_0_0;
extern Il2CppGenericMethod m31032_GM;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31032_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m23596_gshared, &t107_TI, &t132_0_0_0, RuntimeInvoker_t5_t110, t107_m31032_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31032_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.IDisposable>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t132_1_0_2;
extern Il2CppType t132_1_0_0;
static ParameterInfo t107_m31031_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t132_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31031_GM;
extern void* RuntimeInvoker_t109_t110_t5827 (MethodInfo* method, void* obj, void** args);
MethodInfo m31031_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5827, t107_m31031_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31031_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31033_MI;
struct t107;
#define m31033(__this, p0, method) (void)m23597_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.IDisposable>(T)
extern TypeInfo t107_TI;
extern Il2CppType t132_0_0_0;
extern Il2CppType t132_0_0_0;
static ParameterInfo t107_m31033_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t132_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31033_GM;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31033_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m23597_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t107_m31033_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31033_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31034_MI;
struct t107;
#define m31034(__this, p0, method) (bool)m23598_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.IDisposable>(T)
extern TypeInfo t107_TI;
extern Il2CppType t132_0_0_0;
static ParameterInfo t107_m31034_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t132_0_0_0},
};
extern TypeInfo t132_TI;
static Il2CppRGCTXData m31034_RGCTXData[1] = 
{
	&t132_TI/* Class Usage */,
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31034_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31034_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m23598_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m31034_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m31034_RGCTXData, NULL, &m31034_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31035_MI;
struct t107;
#define m31035(__this, p0, p1, method) (void)m23599_gshared((t107 *)__this, (t168*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.IDisposable>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4370_0_0_0;
extern Il2CppType t4370_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31035_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4370_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31035_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31035_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m23599_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m31035_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31035_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31036_MI;
struct t107;
#define m31036(__this, p0, method) (bool)m23600_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.IDisposable>(T)
extern TypeInfo t107_TI;
extern Il2CppType t132_0_0_0;
static ParameterInfo t107_m31036_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t132_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31036_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31036_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m23600_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m31036_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31036_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31037_MI;
struct t107;
#define m31037(__this, p0, method) (int32_t)m23601_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.IDisposable>(T)
extern TypeInfo t107_TI;
extern Il2CppType t132_0_0_0;
static ParameterInfo t107_m31037_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t132_0_0_0},
};
extern TypeInfo t132_TI;
static Il2CppRGCTXData m31037_RGCTXData[1] = 
{
	&t132_TI/* Class Usage */,
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m31037_GM;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31037_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m23601_gshared, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t107_m31037_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m31037_RGCTXData, NULL, &m31037_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31038_MI;
struct t107;
#define m31038(__this, p0, p1, method) (void)m23602_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.IDisposable>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t132_0_0_0;
static ParameterInfo t107_m31038_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t132_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31038_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31038_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m23602_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m31038_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31038_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31039_MI;
struct t107;
extern MethodInfo m31040_MI;
struct t107;
#define m31040(__this, p0, p1, method) (void)m23604_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.IDisposable>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t132_0_0_0;
static ParameterInfo t107_m31040_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t132_0_0_0},
};
extern TypeInfo t132_TI;
static Il2CppRGCTXData m31040_RGCTXData[1] = 
{
	&t132_TI/* Class Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31040_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31040_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m23604_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m31040_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, m31040_RGCTXData, NULL, &m31040_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.IDisposable>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t132_1_0_0;
static ParameterInfo t107_m31039_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t132_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31039_GM;
extern void* RuntimeInvoker_t109_t110_t5827 (MethodInfo* method, void* obj, void** args);
MethodInfo m31039_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5827, t107_m31039_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31039_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4129.h"
extern TypeInfo t4129_TI;
#include "t4129MD.h"
extern MethodInfo m23443_MI;
extern MethodInfo m31041_MI;
struct t107;
#define m31041(__this, method) (t5*)m23605_gshared((t107 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IDisposable>()
extern TypeInfo t107_TI;
extern TypeInfo t5828_TI;
extern TypeInfo t4129_TI;
static Il2CppRGCTXData m31041_RGCTXData[2] = 
{
	&t4129_TI/* Class Usage */,
	&m23443_MI/* Method Usage */,
};
extern Il2CppType t5828_0_0_0;
extern Il2CppGenericMethod m31041_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31041_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m23605_gshared, &t107_TI, &t5828_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, m31041_RGCTXData, NULL, &m31041_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1037.h"
extern MethodInfo m31042_MI;
struct t107;
extern MethodInfo m31043_MI;
struct t107;
#define m31043(__this, p0, method) (t1037 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.MarshalByRefObject>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1037_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31043_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1037_0_0_0;
extern Il2CppType t1037_0_0_0;
extern Il2CppGenericMethod m31043_GM;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31043_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m23596_gshared, &t107_TI, &t1037_0_0_0, RuntimeInvoker_t5_t110, t107_m31043_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31043_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.MarshalByRefObject>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1037_1_0_2;
extern Il2CppType t1037_1_0_0;
static ParameterInfo t107_m31042_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1037_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31042_GM;
extern void* RuntimeInvoker_t109_t110_t5829 (MethodInfo* method, void* obj, void** args);
MethodInfo m31042_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5829, t107_m31042_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31042_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31044_MI;
struct t107;
#define m31044(__this, p0, method) (void)m23597_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.MarshalByRefObject>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1037_0_0_0;
extern Il2CppType t1037_0_0_0;
static ParameterInfo t107_m31044_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1037_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31044_GM;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31044_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m23597_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t107_m31044_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31044_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31045_MI;
struct t107;
#define m31045(__this, p0, method) (bool)m23598_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.MarshalByRefObject>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1037_0_0_0;
static ParameterInfo t107_m31045_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1037_0_0_0},
};
extern TypeInfo t1037_TI;
static Il2CppRGCTXData m31045_RGCTXData[1] = 
{
	&t1037_TI/* Class Usage */,
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31045_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31045_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m23598_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m31045_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m31045_RGCTXData, NULL, &m31045_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31046_MI;
struct t107;
#define m31046(__this, p0, p1, method) (void)m23599_gshared((t107 *)__this, (t168*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.MarshalByRefObject>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4371_0_0_0;
extern Il2CppType t4371_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31046_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4371_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31046_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31046_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m23599_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m31046_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31046_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31047_MI;
struct t107;
#define m31047(__this, p0, method) (bool)m23600_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.MarshalByRefObject>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1037_0_0_0;
static ParameterInfo t107_m31047_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1037_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31047_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31047_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m23600_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m31047_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31047_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31048_MI;
struct t107;
#define m31048(__this, p0, method) (int32_t)m23601_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.MarshalByRefObject>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1037_0_0_0;
static ParameterInfo t107_m31048_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1037_0_0_0},
};
extern TypeInfo t1037_TI;
static Il2CppRGCTXData m31048_RGCTXData[1] = 
{
	&t1037_TI/* Class Usage */,
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m31048_GM;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31048_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m23601_gshared, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t107_m31048_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m31048_RGCTXData, NULL, &m31048_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31049_MI;
struct t107;
#define m31049(__this, p0, p1, method) (void)m23602_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.MarshalByRefObject>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1037_0_0_0;
static ParameterInfo t107_m31049_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1037_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31049_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31049_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m23602_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m31049_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31049_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31050_MI;
struct t107;
extern MethodInfo m31051_MI;
struct t107;
#define m31051(__this, p0, p1, method) (void)m23604_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.MarshalByRefObject>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1037_0_0_0;
static ParameterInfo t107_m31051_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1037_0_0_0},
};
extern TypeInfo t1037_TI;
static Il2CppRGCTXData m31051_RGCTXData[1] = 
{
	&t1037_TI/* Class Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31051_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31051_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m23604_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m31051_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, m31051_RGCTXData, NULL, &m31051_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.MarshalByRefObject>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1037_1_0_0;
static ParameterInfo t107_m31050_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1037_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31050_GM;
extern void* RuntimeInvoker_t109_t110_t5829 (MethodInfo* method, void* obj, void** args);
MethodInfo m31050_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5829, t107_m31050_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31050_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4130.h"
extern TypeInfo t4130_TI;
#include "t4130MD.h"
extern MethodInfo m23448_MI;
extern MethodInfo m31052_MI;
struct t107;
#define m31052(__this, method) (t5*)m23605_gshared((t107 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.MarshalByRefObject>()
extern TypeInfo t107_TI;
extern TypeInfo t5830_TI;
extern TypeInfo t4130_TI;
static Il2CppRGCTXData m31052_RGCTXData[2] = 
{
	&t4130_TI/* Class Usage */,
	&m23448_MI/* Method Usage */,
};
extern Il2CppType t5830_0_0_0;
extern Il2CppGenericMethod m31052_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31052_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m23605_gshared, &t107_TI, &t5830_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, m31052_RGCTXData, NULL, &m31052_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1933.h"
extern MethodInfo m31053_MI;
struct t107;
extern MethodInfo m31054_MI;
struct t107;
 int32_t m31054 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m31054 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.Threading.ThreadState>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1933_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31054_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1933_0_0_0;
extern Il2CppType t1933_0_0_0;
extern Il2CppGenericMethod m31054_GM;
extern void* RuntimeInvoker_t1933_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31054_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m31054, &t107_TI, &t1933_0_0_0, RuntimeInvoker_t1933_t110, t107_m31054_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31054_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Threading.ThreadState>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1933_1_0_2;
extern Il2CppType t1933_1_0_0;
static ParameterInfo t107_m31053_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1933_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31053_GM;
extern void* RuntimeInvoker_t109_t110_t5831 (MethodInfo* method, void* obj, void** args);
MethodInfo m31053_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5831, t107_m31053_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31053_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31055_MI;
struct t107;
 void m31055 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31055 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Threading.ThreadState>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1933_0_0_0;
extern Il2CppType t1933_0_0_0;
static ParameterInfo t107_m31055_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1933_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31055_GM;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31055_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m31055, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t107_m31055_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31055_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31056_MI;
struct t107;
 bool m31056 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m31056 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1933_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1933_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t1933_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1933_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Threading.ThreadState>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1933_0_0_0;
static ParameterInfo t107_m31056_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1933_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31056_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31056_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m31056, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m31056_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31056_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31057_MI;
struct t107;
 void m31057 (t107 * __this, t4372* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31057 (t107 * __this, t4372* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Threading.ThreadState>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4372_0_0_0;
extern Il2CppType t4372_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31057_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4372_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31057_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31057_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m31057, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m31057_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31057_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31058_MI;
struct t107;
 bool m31058 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m31058 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Threading.ThreadState>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1933_0_0_0;
static ParameterInfo t107_m31058_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1933_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31058_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31058_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m31058, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m31058_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31058_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31059_MI;
struct t107;
 int32_t m31059 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m31059 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1933_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1933_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1933_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1933_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Threading.ThreadState>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1933_0_0_0;
static ParameterInfo t107_m31059_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1933_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m31059_GM;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31059_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m31059, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t107_m31059_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31059_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31060_MI;
struct t107;
 void m31060 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31060 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Threading.ThreadState>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1933_0_0_0;
static ParameterInfo t107_m31060_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1933_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31060_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31060_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m31060, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m31060_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31060_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31061_MI;
struct t107;
extern MethodInfo m31062_MI;
struct t107;
 void m31062 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31062 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1933_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Threading.ThreadState>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1933_0_0_0;
static ParameterInfo t107_m31062_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1933_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31062_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31062_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m31062, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m31062_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31062_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Threading.ThreadState>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1933_1_0_0;
static ParameterInfo t107_m31061_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1933_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31061_GM;
extern void* RuntimeInvoker_t109_t110_t5831 (MethodInfo* method, void* obj, void** args);
MethodInfo m31061_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5831, t107_m31061_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31061_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4131.h"
extern TypeInfo t4131_TI;
#include "t4131MD.h"
extern MethodInfo m23453_MI;
extern MethodInfo m31063_MI;
struct t107;
 t5* m31063 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m31063 (t107 * __this, MethodInfo* method){
	{
		t4131  L_0 = {0};
		m23453(&L_0, __this, &m23453_MI);
		t4131  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4131_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Threading.ThreadState>()
extern TypeInfo t107_TI;
extern TypeInfo t5832_TI;
extern Il2CppType t5832_0_0_0;
extern Il2CppGenericMethod m31063_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31063_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m31063, &t107_TI, &t5832_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m31063_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1389.h"
extern MethodInfo m31064_MI;
struct t107;
extern MethodInfo m31065_MI;
struct t107;
 int32_t m31065 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m31065 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.AttributeTargets>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1389_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31065_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1389_0_0_0;
extern Il2CppType t1389_0_0_0;
extern Il2CppGenericMethod m31065_GM;
extern void* RuntimeInvoker_t1389_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31065_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m31065, &t107_TI, &t1389_0_0_0, RuntimeInvoker_t1389_t110, t107_m31065_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31065_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.AttributeTargets>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1389_1_0_2;
extern Il2CppType t1389_1_0_0;
static ParameterInfo t107_m31064_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1389_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31064_GM;
extern void* RuntimeInvoker_t109_t110_t5833 (MethodInfo* method, void* obj, void** args);
MethodInfo m31064_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5833, t107_m31064_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31064_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31066_MI;
struct t107;
 void m31066 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31066 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.AttributeTargets>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1389_0_0_0;
extern Il2CppType t1389_0_0_0;
static ParameterInfo t107_m31066_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1389_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31066_GM;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31066_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m31066, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t107_m31066_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31066_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31067_MI;
struct t107;
 bool m31067 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m31067 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1389_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1389_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t1389_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1389_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.AttributeTargets>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1389_0_0_0;
static ParameterInfo t107_m31067_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1389_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31067_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31067_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m31067, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m31067_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31067_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31068_MI;
struct t107;
 void m31068 (t107 * __this, t4373* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31068 (t107 * __this, t4373* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.AttributeTargets>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4373_0_0_0;
extern Il2CppType t4373_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31068_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4373_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31068_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31068_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m31068, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m31068_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31068_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31069_MI;
struct t107;
 bool m31069 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m31069 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.AttributeTargets>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1389_0_0_0;
static ParameterInfo t107_m31069_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1389_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31069_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31069_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m31069, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m31069_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31069_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31070_MI;
struct t107;
 int32_t m31070 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m31070 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1389_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1389_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1389_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1389_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.AttributeTargets>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1389_0_0_0;
static ParameterInfo t107_m31070_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1389_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m31070_GM;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31070_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m31070, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t107_m31070_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31070_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31071_MI;
struct t107;
 void m31071 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31071 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.AttributeTargets>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1389_0_0_0;
static ParameterInfo t107_m31071_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1389_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31071_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31071_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m31071, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m31071_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31071_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31072_MI;
struct t107;
extern MethodInfo m31073_MI;
struct t107;
 void m31073 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31073 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1389_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.AttributeTargets>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1389_0_0_0;
static ParameterInfo t107_m31073_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1389_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31073_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31073_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m31073, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m31073_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31073_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.AttributeTargets>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1389_1_0_0;
static ParameterInfo t107_m31072_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1389_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31072_GM;
extern void* RuntimeInvoker_t109_t110_t5833 (MethodInfo* method, void* obj, void** args);
MethodInfo m31072_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5833, t107_m31072_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31072_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4132.h"
extern TypeInfo t4132_TI;
#include "t4132MD.h"
extern MethodInfo m23458_MI;
extern MethodInfo m31074_MI;
struct t107;
 t5* m31074 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m31074 (t107 * __this, MethodInfo* method){
	{
		t4132  L_0 = {0};
		m23458(&L_0, __this, &m23458_MI);
		t4132  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4132_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.AttributeTargets>()
extern TypeInfo t107_TI;
extern TypeInfo t5834_TI;
extern Il2CppType t5834_0_0_0;
extern Il2CppGenericMethod m31074_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31074_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m31074, &t107_TI, &t5834_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m31074_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1961.h"
extern MethodInfo m31075_MI;
struct t107;
extern MethodInfo m31076_MI;
struct t107;
 int32_t m31076 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m31076 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.DateTime/Which>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1961_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31076_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1961_0_0_0;
extern Il2CppType t1961_0_0_0;
extern Il2CppGenericMethod m31076_GM;
extern void* RuntimeInvoker_t1961_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31076_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m31076, &t107_TI, &t1961_0_0_0, RuntimeInvoker_t1961_t110, t107_m31076_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31076_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.DateTime/Which>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1961_1_0_2;
extern Il2CppType t1961_1_0_0;
static ParameterInfo t107_m31075_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1961_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31075_GM;
extern void* RuntimeInvoker_t109_t110_t5835 (MethodInfo* method, void* obj, void** args);
MethodInfo m31075_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5835, t107_m31075_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31075_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31077_MI;
struct t107;
 void m31077 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31077 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.DateTime/Which>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1961_0_0_0;
extern Il2CppType t1961_0_0_0;
static ParameterInfo t107_m31077_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1961_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31077_GM;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31077_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m31077, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t107_m31077_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31077_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31078_MI;
struct t107;
 bool m31078 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m31078 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1961_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1961_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t1961_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1961_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.DateTime/Which>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1961_0_0_0;
static ParameterInfo t107_m31078_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1961_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31078_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31078_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m31078, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m31078_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31078_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31079_MI;
struct t107;
 void m31079 (t107 * __this, t4374* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31079 (t107 * __this, t4374* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.DateTime/Which>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4374_0_0_0;
extern Il2CppType t4374_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31079_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4374_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31079_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31079_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m31079, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m31079_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31079_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31080_MI;
struct t107;
 bool m31080 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m31080 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.DateTime/Which>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1961_0_0_0;
static ParameterInfo t107_m31080_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1961_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31080_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31080_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m31080, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m31080_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31080_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31081_MI;
struct t107;
 int32_t m31081 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m31081 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1961_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1961_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1961_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1961_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.DateTime/Which>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1961_0_0_0;
static ParameterInfo t107_m31081_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1961_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m31081_GM;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31081_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m31081, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t107_m31081_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31081_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31082_MI;
struct t107;
 void m31082 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31082 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.DateTime/Which>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1961_0_0_0;
static ParameterInfo t107_m31082_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1961_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31082_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31082_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m31082, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m31082_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31082_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31083_MI;
struct t107;
extern MethodInfo m31084_MI;
struct t107;
 void m31084 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31084 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1961_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.DateTime/Which>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1961_0_0_0;
static ParameterInfo t107_m31084_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1961_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31084_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31084_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m31084, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m31084_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31084_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.DateTime/Which>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1961_1_0_0;
static ParameterInfo t107_m31083_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1961_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31083_GM;
extern void* RuntimeInvoker_t109_t110_t5835 (MethodInfo* method, void* obj, void** args);
MethodInfo m31083_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5835, t107_m31083_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31083_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4137.h"
extern TypeInfo t4137_TI;
#include "t4137MD.h"
extern MethodInfo m23480_MI;
extern MethodInfo m31085_MI;
struct t107;
 t5* m31085 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m31085 (t107 * __this, MethodInfo* method){
	{
		t4137  L_0 = {0};
		m23480(&L_0, __this, &m23480_MI);
		t4137  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4137_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.DateTime/Which>()
extern TypeInfo t107_TI;
extern TypeInfo t5836_TI;
extern Il2CppType t5836_0_0_0;
extern Il2CppGenericMethod m31085_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31085_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m31085, &t107_TI, &t5836_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m31085_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1962.h"
extern MethodInfo m31086_MI;
struct t107;
extern MethodInfo m31087_MI;
struct t107;
 int32_t m31087 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m31087 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.DateTimeKind>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1962_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31087_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1962_0_0_0;
extern Il2CppType t1962_0_0_0;
extern Il2CppGenericMethod m31087_GM;
extern void* RuntimeInvoker_t1962_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31087_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m31087, &t107_TI, &t1962_0_0_0, RuntimeInvoker_t1962_t110, t107_m31087_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31087_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.DateTimeKind>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1962_1_0_2;
extern Il2CppType t1962_1_0_0;
static ParameterInfo t107_m31086_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1962_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31086_GM;
extern void* RuntimeInvoker_t109_t110_t5837 (MethodInfo* method, void* obj, void** args);
MethodInfo m31086_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5837, t107_m31086_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31086_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31088_MI;
struct t107;
 void m31088 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31088 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.DateTimeKind>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1962_0_0_0;
extern Il2CppType t1962_0_0_0;
static ParameterInfo t107_m31088_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1962_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31088_GM;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31088_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m31088, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t107_m31088_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31088_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31089_MI;
struct t107;
 bool m31089 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m31089 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1962_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1962_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t1962_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1962_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.DateTimeKind>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1962_0_0_0;
static ParameterInfo t107_m31089_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1962_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31089_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31089_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m31089, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m31089_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31089_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31090_MI;
struct t107;
 void m31090 (t107 * __this, t4375* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31090 (t107 * __this, t4375* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.DateTimeKind>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4375_0_0_0;
extern Il2CppType t4375_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31090_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4375_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31090_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31090_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m31090, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m31090_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31090_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31091_MI;
struct t107;
 bool m31091 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m31091 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.DateTimeKind>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1962_0_0_0;
static ParameterInfo t107_m31091_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1962_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31091_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31091_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m31091, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m31091_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31091_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31092_MI;
struct t107;
 int32_t m31092 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m31092 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1962_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1962_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1962_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1962_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.DateTimeKind>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1962_0_0_0;
static ParameterInfo t107_m31092_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1962_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m31092_GM;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31092_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m31092, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t107_m31092_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31092_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31093_MI;
struct t107;
 void m31093 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31093 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.DateTimeKind>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1962_0_0_0;
static ParameterInfo t107_m31093_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1962_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31093_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31093_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m31093, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m31093_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31093_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31094_MI;
struct t107;
extern MethodInfo m31095_MI;
struct t107;
 void m31095 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31095 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1962_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.DateTimeKind>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1962_0_0_0;
static ParameterInfo t107_m31095_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1962_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31095_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31095_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m31095, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m31095_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31095_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.DateTimeKind>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1962_1_0_0;
static ParameterInfo t107_m31094_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1962_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31094_GM;
extern void* RuntimeInvoker_t109_t110_t5837 (MethodInfo* method, void* obj, void** args);
MethodInfo m31094_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5837, t107_m31094_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31094_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4138.h"
extern TypeInfo t4138_TI;
#include "t4138MD.h"
extern MethodInfo m23485_MI;
extern MethodInfo m31096_MI;
struct t107;
 t5* m31096 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m31096 (t107 * __this, MethodInfo* method){
	{
		t4138  L_0 = {0};
		m23485(&L_0, __this, &m23485_MI);
		t4138  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4138_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.DateTimeKind>()
extern TypeInfo t107_TI;
extern TypeInfo t5838_TI;
extern Il2CppType t5838_0_0_0;
extern Il2CppGenericMethod m31096_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31096_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m31096, &t107_TI, &t5838_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m31096_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1557.h"
extern MethodInfo m31097_MI;
struct t107;
extern MethodInfo m31098_MI;
struct t107;
 int32_t m31098 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m31098 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.DayOfWeek>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1557_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31098_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1557_0_0_0;
extern Il2CppType t1557_0_0_0;
extern Il2CppGenericMethod m31098_GM;
extern void* RuntimeInvoker_t1557_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31098_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m31098, &t107_TI, &t1557_0_0_0, RuntimeInvoker_t1557_t110, t107_m31098_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31098_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.DayOfWeek>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1557_1_0_2;
extern Il2CppType t1557_1_0_0;
static ParameterInfo t107_m31097_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1557_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31097_GM;
extern void* RuntimeInvoker_t109_t110_t5839 (MethodInfo* method, void* obj, void** args);
MethodInfo m31097_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5839, t107_m31097_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31097_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31099_MI;
struct t107;
 void m31099 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31099 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.DayOfWeek>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1557_0_0_0;
extern Il2CppType t1557_0_0_0;
static ParameterInfo t107_m31099_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1557_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31099_GM;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31099_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m31099, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t107_m31099_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31099_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31100_MI;
struct t107;
 bool m31100 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m31100 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1557_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1557_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t1557_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1557_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.DayOfWeek>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1557_0_0_0;
static ParameterInfo t107_m31100_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1557_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31100_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31100_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m31100, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m31100_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31100_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31101_MI;
struct t107;
 void m31101 (t107 * __this, t4376* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31101 (t107 * __this, t4376* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.DayOfWeek>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4376_0_0_0;
extern Il2CppType t4376_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31101_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4376_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31101_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31101_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m31101, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m31101_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31101_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31102_MI;
struct t107;
 bool m31102 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m31102 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.DayOfWeek>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1557_0_0_0;
static ParameterInfo t107_m31102_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1557_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31102_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31102_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m31102, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m31102_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31102_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31103_MI;
struct t107;
 int32_t m31103 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m31103 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1557_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1557_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1557_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1557_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.DayOfWeek>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1557_0_0_0;
static ParameterInfo t107_m31103_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1557_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m31103_GM;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31103_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m31103, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t107_m31103_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31103_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31104_MI;
struct t107;
 void m31104 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31104 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.DayOfWeek>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1557_0_0_0;
static ParameterInfo t107_m31104_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1557_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31104_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31104_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m31104, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m31104_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31104_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31105_MI;
struct t107;
extern MethodInfo m31106_MI;
struct t107;
 void m31106 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31106 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1557_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.DayOfWeek>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1557_0_0_0;
static ParameterInfo t107_m31106_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1557_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31106_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31106_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m31106, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m31106_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31106_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.DayOfWeek>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1557_1_0_0;
static ParameterInfo t107_m31105_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1557_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31105_GM;
extern void* RuntimeInvoker_t109_t110_t5839 (MethodInfo* method, void* obj, void** args);
MethodInfo m31105_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5839, t107_m31105_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31105_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4143.h"
extern TypeInfo t4143_TI;
#include "t4143MD.h"
extern MethodInfo m23511_MI;
extern MethodInfo m31107_MI;
struct t107;
 t5* m31107 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m31107 (t107 * __this, MethodInfo* method){
	{
		t4143  L_0 = {0};
		m23511(&L_0, __this, &m23511_MI);
		t4143  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4143_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.DayOfWeek>()
extern TypeInfo t107_TI;
extern TypeInfo t5840_TI;
extern Il2CppType t5840_0_0_0;
extern Il2CppGenericMethod m31107_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31107_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m31107, &t107_TI, &t5840_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m31107_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1372.h"
extern MethodInfo m31108_MI;
struct t107;
extern MethodInfo m31109_MI;
struct t107;
 int32_t m31109 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m31109 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.Environment/SpecialFolder>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1372_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31109_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1372_0_0_0;
extern Il2CppType t1372_0_0_0;
extern Il2CppGenericMethod m31109_GM;
extern void* RuntimeInvoker_t1372_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31109_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m31109, &t107_TI, &t1372_0_0_0, RuntimeInvoker_t1372_t110, t107_m31109_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31109_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Environment/SpecialFolder>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1372_1_0_2;
extern Il2CppType t1372_1_0_0;
static ParameterInfo t107_m31108_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1372_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31108_GM;
extern void* RuntimeInvoker_t109_t110_t5841 (MethodInfo* method, void* obj, void** args);
MethodInfo m31108_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5841, t107_m31108_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31108_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31110_MI;
struct t107;
 void m31110 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31110 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Environment/SpecialFolder>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1372_0_0_0;
extern Il2CppType t1372_0_0_0;
static ParameterInfo t107_m31110_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1372_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31110_GM;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31110_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m31110, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t107_m31110_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31110_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31111_MI;
struct t107;
 bool m31111 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m31111 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1372_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1372_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t1372_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1372_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Environment/SpecialFolder>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1372_0_0_0;
static ParameterInfo t107_m31111_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1372_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31111_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31111_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m31111, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m31111_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31111_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31112_MI;
struct t107;
 void m31112 (t107 * __this, t4377* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31112 (t107 * __this, t4377* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Environment/SpecialFolder>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4377_0_0_0;
extern Il2CppType t4377_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31112_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4377_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31112_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31112_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m31112, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m31112_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31112_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31113_MI;
struct t107;
 bool m31113 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m31113 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Environment/SpecialFolder>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1372_0_0_0;
static ParameterInfo t107_m31113_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1372_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31113_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31113_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m31113, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m31113_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31113_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31114_MI;
struct t107;
 int32_t m31114 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m31114 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1372_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1372_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1372_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1372_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Environment/SpecialFolder>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1372_0_0_0;
static ParameterInfo t107_m31114_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1372_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m31114_GM;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31114_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m31114, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t107_m31114_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31114_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31115_MI;
struct t107;
 void m31115 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31115 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Environment/SpecialFolder>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1372_0_0_0;
static ParameterInfo t107_m31115_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1372_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31115_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31115_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m31115, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m31115_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31115_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31116_MI;
struct t107;
extern MethodInfo m31117_MI;
struct t107;
 void m31117 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31117 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1372_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Environment/SpecialFolder>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1372_0_0_0;
static ParameterInfo t107_m31117_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1372_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31117_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31117_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m31117, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m31117_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31117_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Environment/SpecialFolder>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1372_1_0_0;
static ParameterInfo t107_m31116_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1372_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31116_GM;
extern void* RuntimeInvoker_t109_t110_t5841 (MethodInfo* method, void* obj, void** args);
MethodInfo m31116_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5841, t107_m31116_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31116_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4144.h"
extern TypeInfo t4144_TI;
#include "t4144MD.h"
extern MethodInfo m23516_MI;
extern MethodInfo m31118_MI;
struct t107;
 t5* m31118 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m31118 (t107 * __this, MethodInfo* method){
	{
		t4144  L_0 = {0};
		m23516(&L_0, __this, &m23516_MI);
		t4144  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4144_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Environment/SpecialFolder>()
extern TypeInfo t107_TI;
extern TypeInfo t5842_TI;
extern Il2CppType t5842_0_0_0;
extern Il2CppGenericMethod m31118_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31118_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m31118, &t107_TI, &t5842_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m31118_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1954.h"
extern MethodInfo m31119_MI;
struct t107;
extern MethodInfo m31120_MI;
struct t107;
 int32_t m31120 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m31120 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.LoaderOptimization>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1954_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31120_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1954_0_0_0;
extern Il2CppType t1954_0_0_0;
extern Il2CppGenericMethod m31120_GM;
extern void* RuntimeInvoker_t1954_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31120_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m31120, &t107_TI, &t1954_0_0_0, RuntimeInvoker_t1954_t110, t107_m31120_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31120_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.LoaderOptimization>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1954_1_0_2;
extern Il2CppType t1954_1_0_0;
static ParameterInfo t107_m31119_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1954_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31119_GM;
extern void* RuntimeInvoker_t109_t110_t5843 (MethodInfo* method, void* obj, void** args);
MethodInfo m31119_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5843, t107_m31119_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31119_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31121_MI;
struct t107;
 void m31121 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31121 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.LoaderOptimization>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1954_0_0_0;
extern Il2CppType t1954_0_0_0;
static ParameterInfo t107_m31121_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1954_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31121_GM;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31121_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m31121, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t107_m31121_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31121_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31122_MI;
struct t107;
 bool m31122 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m31122 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1954_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1954_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t1954_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1954_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.LoaderOptimization>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1954_0_0_0;
static ParameterInfo t107_m31122_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1954_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31122_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31122_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m31122, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m31122_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31122_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31123_MI;
struct t107;
 void m31123 (t107 * __this, t4378* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31123 (t107 * __this, t4378* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.LoaderOptimization>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4378_0_0_0;
extern Il2CppType t4378_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31123_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4378_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31123_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31123_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m31123, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m31123_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31123_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31124_MI;
struct t107;
 bool m31124 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m31124 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.LoaderOptimization>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1954_0_0_0;
static ParameterInfo t107_m31124_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1954_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31124_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31124_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m31124, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m31124_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31124_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31125_MI;
struct t107;
 int32_t m31125 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m31125 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1954_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1954_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1954_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1954_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.LoaderOptimization>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1954_0_0_0;
static ParameterInfo t107_m31125_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1954_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m31125_GM;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31125_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m31125, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t107_m31125_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31125_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31126_MI;
struct t107;
 void m31126 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31126 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.LoaderOptimization>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1954_0_0_0;
static ParameterInfo t107_m31126_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1954_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31126_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31126_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m31126, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m31126_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31126_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31127_MI;
struct t107;
extern MethodInfo m31128_MI;
struct t107;
 void m31128 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31128 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1954_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.LoaderOptimization>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1954_0_0_0;
static ParameterInfo t107_m31128_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1954_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31128_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31128_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m31128, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m31128_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31128_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.LoaderOptimization>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1954_1_0_0;
static ParameterInfo t107_m31127_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1954_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31127_GM;
extern void* RuntimeInvoker_t109_t110_t5843 (MethodInfo* method, void* obj, void** args);
MethodInfo m31127_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5843, t107_m31127_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31127_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4149.h"
extern TypeInfo t4149_TI;
#include "t4149MD.h"
extern MethodInfo m23538_MI;
extern MethodInfo m31129_MI;
struct t107;
 t5* m31129 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m31129 (t107 * __this, MethodInfo* method){
	{
		t4149  L_0 = {0};
		m23538(&L_0, __this, &m23538_MI);
		t4149  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4149_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.LoaderOptimization>()
extern TypeInfo t107_TI;
extern TypeInfo t5844_TI;
extern Il2CppType t5844_0_0_0;
extern Il2CppGenericMethod m31129_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31129_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m31129, &t107_TI, &t5844_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m31129_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1995.h"
extern MethodInfo m31130_MI;
struct t107;
extern MethodInfo m31131_MI;
struct t107;
#define m31131(__this, p0, method) (t1995 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.NonSerializedAttribute>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1995_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31131_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1995_0_0_0;
extern Il2CppType t1995_0_0_0;
extern Il2CppGenericMethod m31131_GM;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31131_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m23596_gshared, &t107_TI, &t1995_0_0_0, RuntimeInvoker_t5_t110, t107_m31131_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31131_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.NonSerializedAttribute>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1995_1_0_2;
extern Il2CppType t1995_1_0_0;
static ParameterInfo t107_m31130_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1995_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31130_GM;
extern void* RuntimeInvoker_t109_t110_t5845 (MethodInfo* method, void* obj, void** args);
MethodInfo m31130_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5845, t107_m31130_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31130_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31132_MI;
struct t107;
#define m31132(__this, p0, method) (void)m23597_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.NonSerializedAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1995_0_0_0;
extern Il2CppType t1995_0_0_0;
static ParameterInfo t107_m31132_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1995_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31132_GM;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31132_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m23597_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t107_m31132_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31132_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31133_MI;
struct t107;
#define m31133(__this, p0, method) (bool)m23598_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.NonSerializedAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1995_0_0_0;
static ParameterInfo t107_m31133_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1995_0_0_0},
};
extern TypeInfo t1995_TI;
static Il2CppRGCTXData m31133_RGCTXData[1] = 
{
	&t1995_TI/* Class Usage */,
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31133_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31133_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m23598_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m31133_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m31133_RGCTXData, NULL, &m31133_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31134_MI;
struct t107;
#define m31134(__this, p0, p1, method) (void)m23599_gshared((t107 *)__this, (t168*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.NonSerializedAttribute>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4379_0_0_0;
extern Il2CppType t4379_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31134_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4379_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31134_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31134_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m23599_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m31134_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31134_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31135_MI;
struct t107;
#define m31135(__this, p0, method) (bool)m23600_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.NonSerializedAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1995_0_0_0;
static ParameterInfo t107_m31135_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1995_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31135_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31135_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m23600_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m31135_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31135_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31136_MI;
struct t107;
#define m31136(__this, p0, method) (int32_t)m23601_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.NonSerializedAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1995_0_0_0;
static ParameterInfo t107_m31136_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1995_0_0_0},
};
extern TypeInfo t1995_TI;
static Il2CppRGCTXData m31136_RGCTXData[1] = 
{
	&t1995_TI/* Class Usage */,
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m31136_GM;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31136_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m23601_gshared, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t107_m31136_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m31136_RGCTXData, NULL, &m31136_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31137_MI;
struct t107;
#define m31137(__this, p0, p1, method) (void)m23602_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.NonSerializedAttribute>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1995_0_0_0;
static ParameterInfo t107_m31137_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1995_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31137_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31137_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m23602_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m31137_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31137_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31138_MI;
struct t107;
extern MethodInfo m31139_MI;
struct t107;
#define m31139(__this, p0, p1, method) (void)m23604_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.NonSerializedAttribute>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1995_0_0_0;
static ParameterInfo t107_m31139_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1995_0_0_0},
};
extern TypeInfo t1995_TI;
static Il2CppRGCTXData m31139_RGCTXData[1] = 
{
	&t1995_TI/* Class Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31139_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31139_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m23604_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m31139_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, m31139_RGCTXData, NULL, &m31139_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.NonSerializedAttribute>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1995_1_0_0;
static ParameterInfo t107_m31138_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1995_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31138_GM;
extern void* RuntimeInvoker_t109_t110_t5845 (MethodInfo* method, void* obj, void** args);
MethodInfo m31138_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5845, t107_m31138_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31138_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4150.h"
extern TypeInfo t4150_TI;
#include "t4150MD.h"
extern MethodInfo m23543_MI;
extern MethodInfo m31140_MI;
struct t107;
#define m31140(__this, method) (t5*)m23605_gshared((t107 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.NonSerializedAttribute>()
extern TypeInfo t107_TI;
extern TypeInfo t5846_TI;
extern TypeInfo t4150_TI;
static Il2CppRGCTXData m31140_RGCTXData[2] = 
{
	&t4150_TI/* Class Usage */,
	&m23543_MI/* Method Usage */,
};
extern Il2CppType t5846_0_0_0;
extern Il2CppGenericMethod m31140_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31140_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m23605_gshared, &t107_TI, &t5846_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, m31140_RGCTXData, NULL, &m31140_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1978.h"
extern MethodInfo m31141_MI;
struct t107;
extern MethodInfo m31142_MI;
struct t107;
 int32_t m31142 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m31142 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.PlatformID>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1978_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31142_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1978_0_0_0;
extern Il2CppType t1978_0_0_0;
extern Il2CppGenericMethod m31142_GM;
extern void* RuntimeInvoker_t1978_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31142_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m31142, &t107_TI, &t1978_0_0_0, RuntimeInvoker_t1978_t110, t107_m31142_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31142_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.PlatformID>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1978_1_0_2;
extern Il2CppType t1978_1_0_0;
static ParameterInfo t107_m31141_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1978_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31141_GM;
extern void* RuntimeInvoker_t109_t110_t5847 (MethodInfo* method, void* obj, void** args);
MethodInfo m31141_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5847, t107_m31141_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31141_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31143_MI;
struct t107;
 void m31143 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31143 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.PlatformID>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1978_0_0_0;
extern Il2CppType t1978_0_0_0;
static ParameterInfo t107_m31143_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1978_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31143_GM;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31143_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m31143, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t107_m31143_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31143_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31144_MI;
struct t107;
 bool m31144 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m31144 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1978_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1978_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t1978_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1978_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.PlatformID>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1978_0_0_0;
static ParameterInfo t107_m31144_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1978_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31144_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31144_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m31144, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m31144_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31144_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31145_MI;
struct t107;
 void m31145 (t107 * __this, t4380* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31145 (t107 * __this, t4380* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.PlatformID>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4380_0_0_0;
extern Il2CppType t4380_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31145_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4380_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31145_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31145_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m31145, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m31145_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31145_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31146_MI;
struct t107;
 bool m31146 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m31146 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.PlatformID>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1978_0_0_0;
static ParameterInfo t107_m31146_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1978_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31146_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31146_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m31146, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m31146_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31146_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31147_MI;
struct t107;
 int32_t m31147 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m31147 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1978_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1978_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1978_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1978_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.PlatformID>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1978_0_0_0;
static ParameterInfo t107_m31147_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1978_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m31147_GM;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31147_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m31147, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t107_m31147_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31147_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31148_MI;
struct t107;
 void m31148 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31148 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.PlatformID>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1978_0_0_0;
static ParameterInfo t107_m31148_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1978_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31148_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31148_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m31148, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m31148_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31148_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31149_MI;
struct t107;
extern MethodInfo m31150_MI;
struct t107;
 void m31150 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31150 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1978_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.PlatformID>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1978_0_0_0;
static ParameterInfo t107_m31150_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1978_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31150_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31150_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m31150, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m31150_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31150_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.PlatformID>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1978_1_0_0;
static ParameterInfo t107_m31149_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1978_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31149_GM;
extern void* RuntimeInvoker_t109_t110_t5847 (MethodInfo* method, void* obj, void** args);
MethodInfo m31149_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5847, t107_m31149_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31149_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4151.h"
extern TypeInfo t4151_TI;
#include "t4151MD.h"
extern MethodInfo m23548_MI;
extern MethodInfo m31151_MI;
struct t107;
 t5* m31151 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m31151 (t107 * __this, MethodInfo* method){
	{
		t4151  L_0 = {0};
		m23548(&L_0, __this, &m23548_MI);
		t4151  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4151_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.PlatformID>()
extern TypeInfo t107_TI;
extern TypeInfo t5848_TI;
extern Il2CppType t5848_0_0_0;
extern Il2CppGenericMethod m31151_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31151_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m31151, &t107_TI, &t5848_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m31151_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1212.h"
extern MethodInfo m31152_MI;
struct t107;
extern MethodInfo m31153_MI;
struct t107;
 int32_t m31153 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m31153 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.StringComparison>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1212_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31153_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1212_0_0_0;
extern Il2CppType t1212_0_0_0;
extern Il2CppGenericMethod m31153_GM;
extern void* RuntimeInvoker_t1212_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31153_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m31153, &t107_TI, &t1212_0_0_0, RuntimeInvoker_t1212_t110, t107_m31153_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31153_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.StringComparison>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1212_1_0_2;
extern Il2CppType t1212_1_0_0;
static ParameterInfo t107_m31152_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1212_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31152_GM;
extern void* RuntimeInvoker_t109_t110_t5849 (MethodInfo* method, void* obj, void** args);
MethodInfo m31152_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5849, t107_m31152_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31152_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31154_MI;
struct t107;
 void m31154 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31154 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.StringComparison>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1212_0_0_0;
extern Il2CppType t1212_0_0_0;
static ParameterInfo t107_m31154_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1212_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31154_GM;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31154_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m31154, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t107_m31154_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31154_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31155_MI;
struct t107;
 bool m31155 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m31155 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1212_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1212_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t1212_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1212_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.StringComparison>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1212_0_0_0;
static ParameterInfo t107_m31155_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1212_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31155_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31155_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m31155, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m31155_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31155_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31156_MI;
struct t107;
 void m31156 (t107 * __this, t4381* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31156 (t107 * __this, t4381* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.StringComparison>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4381_0_0_0;
extern Il2CppType t4381_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31156_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4381_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31156_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31156_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m31156, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m31156_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31156_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31157_MI;
struct t107;
 bool m31157 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m31157 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.StringComparison>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1212_0_0_0;
static ParameterInfo t107_m31157_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1212_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31157_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31157_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m31157, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m31157_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31157_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31158_MI;
struct t107;
 int32_t m31158 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m31158 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1212_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1212_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1212_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1212_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.StringComparison>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1212_0_0_0;
static ParameterInfo t107_m31158_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1212_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m31158_GM;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31158_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m31158, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t107_m31158_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31158_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31159_MI;
struct t107;
 void m31159 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31159 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.StringComparison>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1212_0_0_0;
static ParameterInfo t107_m31159_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1212_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31159_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31159_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m31159, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m31159_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31159_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31160_MI;
struct t107;
extern MethodInfo m31161_MI;
struct t107;
 void m31161 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31161 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1212_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.StringComparison>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1212_0_0_0;
static ParameterInfo t107_m31161_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1212_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31161_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31161_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m31161, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m31161_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31161_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.StringComparison>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1212_1_0_0;
static ParameterInfo t107_m31160_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1212_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31160_GM;
extern void* RuntimeInvoker_t109_t110_t5849 (MethodInfo* method, void* obj, void** args);
MethodInfo m31160_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5849, t107_m31160_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31160_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4152.h"
extern TypeInfo t4152_TI;
#include "t4152MD.h"
extern MethodInfo m23553_MI;
extern MethodInfo m31162_MI;
struct t107;
 t5* m31162 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m31162 (t107 * __this, MethodInfo* method){
	{
		t4152  L_0 = {0};
		m23553(&L_0, __this, &m23553_MI);
		t4152  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4152_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.StringComparison>()
extern TypeInfo t107_TI;
extern TypeInfo t5850_TI;
extern Il2CppType t5850_0_0_0;
extern Il2CppGenericMethod m31162_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31162_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m31162, &t107_TI, &t5850_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m31162_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1204.h"
extern MethodInfo m31163_MI;
struct t107;
extern MethodInfo m31164_MI;
struct t107;
 int32_t m31164 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m31164 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.StringSplitOptions>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1204_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31164_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1204_0_0_0;
extern Il2CppType t1204_0_0_0;
extern Il2CppGenericMethod m31164_GM;
extern void* RuntimeInvoker_t1204_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31164_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m31164, &t107_TI, &t1204_0_0_0, RuntimeInvoker_t1204_t110, t107_m31164_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31164_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.StringSplitOptions>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1204_1_0_2;
extern Il2CppType t1204_1_0_0;
static ParameterInfo t107_m31163_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1204_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31163_GM;
extern void* RuntimeInvoker_t109_t110_t5851 (MethodInfo* method, void* obj, void** args);
MethodInfo m31163_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5851, t107_m31163_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31163_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31165_MI;
struct t107;
 void m31165 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31165 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.StringSplitOptions>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1204_0_0_0;
extern Il2CppType t1204_0_0_0;
static ParameterInfo t107_m31165_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1204_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31165_GM;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31165_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m31165, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t107_m31165_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31165_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31166_MI;
struct t107;
 bool m31166 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m31166 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1204_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1204_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t1204_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1204_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.StringSplitOptions>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1204_0_0_0;
static ParameterInfo t107_m31166_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1204_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31166_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31166_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m31166, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m31166_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31166_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31167_MI;
struct t107;
 void m31167 (t107 * __this, t4382* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31167 (t107 * __this, t4382* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.StringSplitOptions>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4382_0_0_0;
extern Il2CppType t4382_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31167_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4382_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31167_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31167_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m31167, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m31167_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31167_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31168_MI;
struct t107;
 bool m31168 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m31168 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.StringSplitOptions>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1204_0_0_0;
static ParameterInfo t107_m31168_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1204_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31168_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31168_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m31168, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m31168_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31168_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31169_MI;
struct t107;
 int32_t m31169 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m31169 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1204_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1204_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1204_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1204_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.StringSplitOptions>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1204_0_0_0;
static ParameterInfo t107_m31169_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1204_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m31169_GM;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31169_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m31169, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t107_m31169_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31169_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31170_MI;
struct t107;
 void m31170 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31170 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.StringSplitOptions>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1204_0_0_0;
static ParameterInfo t107_m31170_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1204_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31170_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31170_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m31170, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m31170_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31170_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31171_MI;
struct t107;
extern MethodInfo m31172_MI;
struct t107;
 void m31172 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31172 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1204_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.StringSplitOptions>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1204_0_0_0;
static ParameterInfo t107_m31172_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1204_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31172_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31172_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m31172, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m31172_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31172_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.StringSplitOptions>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1204_1_0_0;
static ParameterInfo t107_m31171_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1204_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31171_GM;
extern void* RuntimeInvoker_t109_t110_t5851 (MethodInfo* method, void* obj, void** args);
MethodInfo m31171_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5851, t107_m31171_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31171_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4153.h"
extern TypeInfo t4153_TI;
#include "t4153MD.h"
extern MethodInfo m23558_MI;
extern MethodInfo m31173_MI;
struct t107;
 t5* m31173 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m31173 (t107 * __this, MethodInfo* method){
	{
		t4153  L_0 = {0};
		m23558(&L_0, __this, &m23558_MI);
		t4153  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4153_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.StringSplitOptions>()
extern TypeInfo t107_TI;
extern TypeInfo t5852_TI;
extern Il2CppType t5852_0_0_0;
extern Il2CppGenericMethod m31173_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31173_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m31173, &t107_TI, &t5852_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m31173_GM};
#ifndef _MSC_VER
#else
#endif

#include "t2004.h"
extern MethodInfo m31174_MI;
struct t107;
extern MethodInfo m31175_MI;
struct t107;
#define m31175(__this, p0, method) (t2004 *)m23596_gshared((t107 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.ThreadStaticAttribute>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t2004_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31175_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t2004_0_0_0;
extern Il2CppType t2004_0_0_0;
extern Il2CppGenericMethod m31175_GM;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31175_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m23596_gshared, &t107_TI, &t2004_0_0_0, RuntimeInvoker_t5_t110, t107_m31175_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31175_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.ThreadStaticAttribute>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2004_1_0_2;
extern Il2CppType t2004_1_0_0;
static ParameterInfo t107_m31174_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2004_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31174_GM;
extern void* RuntimeInvoker_t109_t110_t5853 (MethodInfo* method, void* obj, void** args);
MethodInfo m31174_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5853, t107_m31174_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31174_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31176_MI;
struct t107;
#define m31176(__this, p0, method) (void)m23597_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.ThreadStaticAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2004_0_0_0;
extern Il2CppType t2004_0_0_0;
static ParameterInfo t107_m31176_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t2004_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31176_GM;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31176_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m23597_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t107_m31176_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31176_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31177_MI;
struct t107;
#define m31177(__this, p0, method) (bool)m23598_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.ThreadStaticAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2004_0_0_0;
static ParameterInfo t107_m31177_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t2004_0_0_0},
};
extern TypeInfo t2004_TI;
static Il2CppRGCTXData m31177_RGCTXData[1] = 
{
	&t2004_TI/* Class Usage */,
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31177_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31177_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m23598_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m31177_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m31177_RGCTXData, NULL, &m31177_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31178_MI;
struct t107;
#define m31178(__this, p0, p1, method) (void)m23599_gshared((t107 *)__this, (t168*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.ThreadStaticAttribute>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4383_0_0_0;
extern Il2CppType t4383_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31178_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4383_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31178_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31178_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m23599_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m31178_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31178_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31179_MI;
struct t107;
#define m31179(__this, p0, method) (bool)m23600_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.ThreadStaticAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2004_0_0_0;
static ParameterInfo t107_m31179_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t2004_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31179_GM;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31179_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m23600_gshared, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t107_m31179_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31179_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31180_MI;
struct t107;
#define m31180(__this, p0, method) (int32_t)m23601_gshared((t107 *)__this, (t5 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.ThreadStaticAttribute>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2004_0_0_0;
static ParameterInfo t107_m31180_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t2004_0_0_0},
};
extern TypeInfo t2004_TI;
static Il2CppRGCTXData m31180_RGCTXData[1] = 
{
	&t2004_TI/* Class Usage */,
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m31180_GM;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31180_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m23601_gshared, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t107_m31180_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, m31180_RGCTXData, NULL, &m31180_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31181_MI;
struct t107;
#define m31181(__this, p0, p1, method) (void)m23602_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.ThreadStaticAttribute>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2004_0_0_0;
static ParameterInfo t107_m31181_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t2004_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31181_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31181_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m23602_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m31181_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31181_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31182_MI;
struct t107;
extern MethodInfo m31183_MI;
struct t107;
#define m31183(__this, p0, p1, method) (void)m23604_gshared((t107 *)__this, (int32_t)p0, (t5 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.ThreadStaticAttribute>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2004_0_0_0;
static ParameterInfo t107_m31183_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t2004_0_0_0},
};
extern TypeInfo t2004_TI;
static Il2CppRGCTXData m31183_RGCTXData[1] = 
{
	&t2004_TI/* Class Usage */,
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31183_GM;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31183_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m23604_gshared, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t107_m31183_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, m31183_RGCTXData, NULL, &m31183_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.ThreadStaticAttribute>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2004_1_0_0;
static ParameterInfo t107_m31182_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2004_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31182_GM;
extern void* RuntimeInvoker_t109_t110_t5853 (MethodInfo* method, void* obj, void** args);
MethodInfo m31182_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5853, t107_m31182_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31182_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4154.h"
extern TypeInfo t4154_TI;
#include "t4154MD.h"
extern MethodInfo m23563_MI;
extern MethodInfo m31184_MI;
struct t107;
#define m31184(__this, method) (t5*)m23605_gshared((t107 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.ThreadStaticAttribute>()
extern TypeInfo t107_TI;
extern TypeInfo t5854_TI;
extern TypeInfo t4154_TI;
static Il2CppRGCTXData m31184_RGCTXData[2] = 
{
	&t4154_TI/* Class Usage */,
	&m23563_MI/* Method Usage */,
};
extern Il2CppType t5854_0_0_0;
extern Il2CppGenericMethod m31184_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31184_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m23605_gshared, &t107_TI, &t5854_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, m31184_RGCTXData, NULL, &m31184_GM};
#ifndef _MSC_VER
#else
#endif

#include "t1387.h"
extern MethodInfo m31185_MI;
struct t107;
extern MethodInfo m31186_MI;
struct t107;
 int32_t m31186 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m31186 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.TypeCode>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t1387_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31186_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t1387_0_0_0;
extern Il2CppType t1387_0_0_0;
extern Il2CppGenericMethod m31186_GM;
extern void* RuntimeInvoker_t1387_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31186_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m31186, &t107_TI, &t1387_0_0_0, RuntimeInvoker_t1387_t110, t107_m31186_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31186_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.TypeCode>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1387_1_0_2;
extern Il2CppType t1387_1_0_0;
static ParameterInfo t107_m31185_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1387_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31185_GM;
extern void* RuntimeInvoker_t109_t110_t5855 (MethodInfo* method, void* obj, void** args);
MethodInfo m31185_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5855, t107_m31185_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31185_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31187_MI;
struct t107;
 void m31187 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31187 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.TypeCode>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1387_0_0_0;
extern Il2CppType t1387_0_0_0;
static ParameterInfo t107_m31187_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t1387_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31187_GM;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31187_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m31187, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t107_m31187_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31187_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31188_MI;
struct t107;
 bool m31188 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m31188 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1387_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1387_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t1387_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1387_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.TypeCode>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1387_0_0_0;
static ParameterInfo t107_m31188_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t1387_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31188_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31188_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m31188, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m31188_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31188_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31189_MI;
struct t107;
 void m31189 (t107 * __this, t4384* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31189 (t107 * __this, t4384* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.TypeCode>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4384_0_0_0;
extern Il2CppType t4384_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31189_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4384_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31189_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31189_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m31189, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m31189_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31189_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31190_MI;
struct t107;
 bool m31190 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m31190 (t107 * __this, int32_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.TypeCode>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1387_0_0_0;
static ParameterInfo t107_m31190_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t1387_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31190_GM;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31190_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m31190, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t107_m31190_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31190_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31191_MI;
struct t107;
 int32_t m31191 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m31191 (t107 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t1387_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t1387_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t1387_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t1387_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.TypeCode>(T)
extern TypeInfo t107_TI;
extern Il2CppType t1387_0_0_0;
static ParameterInfo t107_m31191_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t1387_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m31191_GM;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31191_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m31191, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t107_m31191_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31191_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31192_MI;
struct t107;
 void m31192 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31192 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.TypeCode>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1387_0_0_0;
static ParameterInfo t107_m31192_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t1387_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31192_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31192_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m31192, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m31192_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31192_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31193_MI;
struct t107;
extern MethodInfo m31194_MI;
struct t107;
 void m31194 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31194 (t107 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1387_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.TypeCode>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1387_0_0_0;
static ParameterInfo t107_m31194_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t1387_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31194_GM;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31194_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m31194, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t107_m31194_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31194_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.TypeCode>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1387_1_0_0;
static ParameterInfo t107_m31193_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1387_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31193_GM;
extern void* RuntimeInvoker_t109_t110_t5855 (MethodInfo* method, void* obj, void** args);
MethodInfo m31193_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5855, t107_m31193_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31193_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4159.h"
extern TypeInfo t4159_TI;
#include "t4159MD.h"
extern MethodInfo m23585_MI;
extern MethodInfo m31195_MI;
struct t107;
 t5* m31195 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m31195 (t107 * __this, MethodInfo* method){
	{
		t4159  L_0 = {0};
		m23585(&L_0, __this, &m23585_MI);
		t4159  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4159_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.TypeCode>()
extern TypeInfo t107_TI;
extern TypeInfo t5856_TI;
extern Il2CppType t5856_0_0_0;
extern Il2CppGenericMethod m31195_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31195_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m31195, &t107_TI, &t5856_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m31195_GM};
#ifndef _MSC_VER
#else
#endif

#include "t2010.h"
extern MethodInfo m31196_MI;
struct t107;
extern MethodInfo m31197_MI;
struct t107;
 uint8_t m31197 (t107 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 uint8_t m31197 (t107 * __this, int32_t p0, MethodInfo* method){
	uint8_t V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.UnitySerializationHolder/UnityType>(System.Int32)
extern TypeInfo t107_TI;
extern TypeInfo t2010_TI;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31197_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppGenericInst GenInst_t2010_0_0_0;
extern Il2CppType t2010_0_0_0;
extern Il2CppGenericMethod m31197_GM;
extern void* RuntimeInvoker_t2010_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31197_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m31197, &t107_TI, &t2010_0_0_0, RuntimeInvoker_t2010_t110, t107_m31197_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31197_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.UnitySerializationHolder/UnityType>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2010_1_0_2;
extern Il2CppType t2010_1_0_0;
static ParameterInfo t107_m31196_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2010_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31196_GM;
extern void* RuntimeInvoker_t109_t110_t5857 (MethodInfo* method, void* obj, void** args);
MethodInfo m31196_MI = 
{
	"GetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5857, t107_m31196_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31196_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31198_MI;
struct t107;
 void m31198 (t107 * __this, uint8_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31198 (t107 * __this, uint8_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.UnitySerializationHolder/UnityType>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2010_0_0_0;
extern Il2CppType t2010_0_0_0;
static ParameterInfo t107_m31198_ParameterInfos[] = 
{
	{"item", 0, 134218874, &EmptyCustomAttributesCache, &t2010_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31198_GM;
extern void* RuntimeInvoker_t109_t494 (MethodInfo* method, void* obj, void** args);
MethodInfo m31198_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m31198, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t494, t107_m31198_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31198_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31199_MI;
struct t107;
 bool m31199 (t107 * __this, uint8_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m31199 (t107 * __this, uint8_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		uint8_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t2010_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		uint8_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t2010_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		uint8_t L_8 = V_2;
		t5 * L_9 = Box(InitializedTypeInfo(&t2010_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t2010_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.UnitySerializationHolder/UnityType>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2010_0_0_0;
static ParameterInfo t107_m31199_ParameterInfos[] = 
{
	{"item", 0, 134218876, &EmptyCustomAttributesCache, &t2010_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31199_GM;
extern void* RuntimeInvoker_t108_t494 (MethodInfo* method, void* obj, void** args);
MethodInfo m31199_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m31199, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t494, t107_m31199_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31199_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31200_MI;
struct t107;
 void m31200 (t107 * __this, t4385* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31200 (t107 * __this, t4385* p0, int32_t p1, MethodInfo* method){
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
		int32_t L_1 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_2 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_3 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_3, L_2, &m10817_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m6700(__this, 0, &m6700_MI);
		int32_t L_5 = m6702(p0, 0, &m6702_MI);
		int32_t L_6 = m6700(p0, 0, &m6700_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t160 * L_7 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2581(L_7, (t11*) &_stringLiteral1035, &m2581_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004c:
	{
		int32_t L_8 = m4769(p0, &m4769_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t11* L_9 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_10 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_10, L_9, &m10817_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_11 = m6877(NULL, (t11*) &_stringLiteral1036, &m6877_MI);
		t1181 * L_12 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4762(L_12, (t11*) &_stringLiteral228, L_11, &m4762_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007e:
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		int32_t L_14 = m6700(__this, 0, &m6700_MI);
		m6741(NULL, __this, L_13, (t107 *)(t107 *)p0, p1, L_14, &m6741_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.UnitySerializationHolder/UnityType>(T[],System.Int32)
extern TypeInfo t107_TI;
extern Il2CppType t4385_0_0_0;
extern Il2CppType t4385_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t107_m31200_ParameterInfos[] = 
{
	{"array", 0, 134218877, &EmptyCustomAttributesCache, &t4385_0_0_0},
	{"index", 1, 134218878, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31200_GM;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m31200_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m31200, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t107_m31200_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31200_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31201_MI;
struct t107;
 bool m31201 (t107 * __this, uint8_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m31201 (t107 * __this, uint8_t p0, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.UnitySerializationHolder/UnityType>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2010_0_0_0;
static ParameterInfo t107_m31201_ParameterInfos[] = 
{
	{"item", 0, 134218875, &EmptyCustomAttributesCache, &t2010_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern Il2CppGenericMethod m31201_GM;
extern void* RuntimeInvoker_t108_t494 (MethodInfo* method, void* obj, void** args);
MethodInfo m31201_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m31201, &t107_TI, &t108_0_0_0, RuntimeInvoker_t108_t494, t107_m31201_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31201_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31202_MI;
struct t107;
 int32_t m31202 (t107 * __this, uint8_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m31202 (t107 * __this, uint8_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = {0};
	{
		int32_t L_0 = m4769(__this, &m4769_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = m6877(NULL, (t11*) &_stringLiteral1034, &m6877_MI);
		t2000 * L_2 = (t2000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2000_TI));
		m10817(L_2, L_1, &m10817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4763(__this, &m4763_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		uint8_t L_4 = p0;
		t5 * L_5 = Box(InitializedTypeInfo(&t2010_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		uint8_t L_6 = V_2;
		t5 * L_7 = Box(InitializedTypeInfo(&t2010_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		uint8_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t2010_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, Box(InitializedTypeInfo(&t2010_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m6702(__this, 0, &m6702_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.UnitySerializationHolder/UnityType>(T)
extern TypeInfo t107_TI;
extern Il2CppType t2010_0_0_0;
static ParameterInfo t107_m31202_ParameterInfos[] = 
{
	{"item", 0, 134218882, &EmptyCustomAttributesCache, &t2010_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern Il2CppGenericMethod m31202_GM;
extern void* RuntimeInvoker_t110_t494 (MethodInfo* method, void* obj, void** args);
MethodInfo m31202_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m31202, &t107_TI, &t110_0_0_0, RuntimeInvoker_t110_t494, t107_m31202_ParameterInfos, NULL, 131, 0, 255, 1, false, true, 0, NULL, NULL, &m31202_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31203_MI;
struct t107;
 void m31203 (t107 * __this, int32_t p0, uint8_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31203 (t107 * __this, int32_t p0, uint8_t p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4780(L_0, (t11*) &_stringLiteral259, &m4780_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.UnitySerializationHolder/UnityType>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2010_0_0_0;
static ParameterInfo t107_m31203_ParameterInfos[] = 
{
	{"index", 0, 134218879, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218880, &EmptyCustomAttributesCache, &t2010_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31203_GM;
extern void* RuntimeInvoker_t109_t110_t494 (MethodInfo* method, void* obj, void** args);
MethodInfo m31203_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m31203, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t494, t107_m31203_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31203_GM};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m31204_MI;
struct t107;
extern MethodInfo m31205_MI;
struct t107;
 void m31205 (t107 * __this, int32_t p0, uint8_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m31205 (t107 * __this, int32_t p0, uint8_t p1, MethodInfo* method){
	t168* V_0 = {0};
	{
		int32_t L_0 = m4763(__this, &m4763_MI);
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
		V_0 = ((t168*)IsInst(__this, InitializedTypeInfo(&t168_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		uint8_t L_2 = p1;
		t5 * L_3 = Box(InitializedTypeInfo(&t2010_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_0, p0)) = (t5 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.UnitySerializationHolder/UnityType>(System.Int32,T)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2010_0_0_0;
static ParameterInfo t107_m31205_ParameterInfos[] = 
{
	{"index", 0, 134218884, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"item", 1, 134218885, &EmptyCustomAttributesCache, &t2010_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31205_GM;
extern void* RuntimeInvoker_t109_t110_t494 (MethodInfo* method, void* obj, void** args);
MethodInfo m31205_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m31205, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t494, t107_m31205_ParameterInfos, NULL, 131, 0, 255, 2, false, true, 0, NULL, NULL, &m31205_GM};
#ifndef _MSC_VER
#else
#endif

// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.UnitySerializationHolder/UnityType>(System.Int32,T&)
extern TypeInfo t107_TI;
extern Il2CppType t110_0_0_0;
extern Il2CppType t2010_1_0_0;
static ParameterInfo t107_m31204_ParameterInfos[] = 
{
	{"pos", 0, 134217728, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2010_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericMethod m31204_GM;
extern void* RuntimeInvoker_t109_t110_t5857 (MethodInfo* method, void* obj, void** args);
MethodInfo m31204_MI = 
{
	"SetGenericValueImpl", NULL, &t107_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5857, t107_m31204_ParameterInfos, NULL, 131, 4096, 255, 2, false, true, 0, NULL, NULL, &m31204_GM};
#ifndef _MSC_VER
#else
#endif

#include "t4160.h"
extern TypeInfo t4160_TI;
#include "t4160MD.h"
extern MethodInfo m23590_MI;
extern MethodInfo m31206_MI;
struct t107;
 t5* m31206 (t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t5* m31206 (t107 * __this, MethodInfo* method){
	{
		t4160  L_0 = {0};
		m23590(&L_0, __this, &m23590_MI);
		t4160  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t4160_TI), &L_1);
		return (t5*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.UnitySerializationHolder/UnityType>()
extern TypeInfo t107_TI;
extern TypeInfo t5858_TI;
extern Il2CppType t5858_0_0_0;
extern Il2CppGenericMethod m31206_GM;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31206_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m31206, &t107_TI, &t5858_0_0_0, RuntimeInvoker_t5, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL, &m31206_GM};
