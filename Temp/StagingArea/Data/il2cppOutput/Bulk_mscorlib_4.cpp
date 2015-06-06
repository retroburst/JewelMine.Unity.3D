#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1707.h"
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
extern TypeInfo t1707_TI;
#include "t1707MD.h"

#include "t109.h"
#include "t628MD.h"
extern MethodInfo m3526_MI;

#include "t107.h"

extern MethodInfo m8806_MI;
 void m8806 (t1707 * __this, MethodInfo* method){
	{
		m3526(__this, &m3526_MI);
		return;
	}
}
// Metadata Definition System.Runtime.InteropServices.PreserveSigAttribute
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8806_MI = 
{
	".ctor", (methodPointerType)&m8806, &t1707_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3584, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1707_MIs[] =
{
	&m8806_MI,
	NULL
};
extern MethodInfo m3527_MI;
extern MethodInfo m465_MI;
extern MethodInfo m3528_MI;
extern MethodInfo m467_MI;
static MethodInfo* t1707_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
};
extern TypeInfo t740_TI;
static Il2CppInterfaceOffsetPair t1707_IOs[] = 
{
	{ &t740_TI, 4},
};
extern TypeInfo t767_TI;
#include "t767.h"
#include "t767MD.h"
extern MethodInfo m3562_MI;
extern MethodInfo m3563_MI;
extern TypeInfo t576_TI;
#include "t576.h"
#include "t576MD.h"
extern MethodInfo m2699_MI;
void t1707_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t767 * tmp;
		tmp = (t767 *)il2cpp_codegen_object_new (&t767_TI);
		m3562(tmp, 64, &m3562_MI);
		m3563(tmp, false, &m3563_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1707__CustomAttributeCache = {
2,
NULL,
&t1707_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1707_0_0_0;
extern Il2CppType t1707_1_0_0;
extern TypeInfo t628_TI;
struct t1707;
extern CustomAttributesCache t1707__CustomAttributeCache;
TypeInfo t1707_TI = 
{
	&g_mscorlib_dll_Image, NULL, "PreserveSigAttribute", "System.Runtime.InteropServices", t1707_MIs, NULL, NULL, NULL, &t628_TI, NULL, NULL, &t1707_TI, NULL, t1707_VT, &t1707__CustomAttributeCache, &t1707_TI, &t1707_0_0_0, &t1707_1_0_0, t1707_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1707), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t1434.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1434_TI;
#include "t1434MD.h"

#include "t108.h"
#include "t124.h"
#include "t110.h"
#include "t114.h"
#include "t11.h"
#include "t1363.h"
#include "t5.h"
#include "t1694.h"
extern TypeInfo t114_TI;
extern TypeInfo t11_TI;
extern TypeInfo t1363_TI;
extern TypeInfo t108_TI;
extern TypeInfo t109_TI;
extern TypeInfo t1694_TI;
#include "t1694MD.h"
#include "t5MD.h"
#include "t114MD.h"
#include "t1363MD.h"
#include "t1927MD.h"
#include "t1359MD.h"
extern MethodInfo m8783_MI;
extern MethodInfo m531_MI;
extern MethodInfo m3644_MI;
extern MethodInfo m5943_MI;
extern MethodInfo m10031_MI;
extern MethodInfo m11520_MI;
extern MethodInfo m11521_MI;
extern MethodInfo m8813_MI;
extern MethodInfo m5906_MI;
extern MethodInfo m8808_MI;
extern MethodInfo m8784_MI;


extern MethodInfo m8807_MI;
 void m8807 (t1434 * __this, t124 p0, bool p1, MethodInfo* method){
	{
		m8783(__this, &m8783_MI);
		__this->f1 = p0;
		__this->f3 = p1;
		__this->f2 = 1;
		return;
	}
}
 void m8808 (t1434 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->f2);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		t114 * L_1 = m531(__this, &m531_MI);
		t11* L_2 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3644_MI, L_1);
		t1363 * L_3 = (t1363 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1363_TI));
		m5943(L_3, L_2, &m5943_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0019:
	{
		int32_t L_4 = (__this->f2);
		V_1 = L_4;
		V_0 = ((int32_t)(V_1-1));
		int32_t* L_5 = &(__this->f2);
		int32_t L_6 = m10031(NULL, L_5, V_0, V_1, &m10031_MI);
		if ((((uint32_t)L_6) != ((uint32_t)V_1)))
		{
			goto IL_0019;
		}
	}
	{
		if (V_0)
		{
			goto IL_0061;
		}
	}
	{
		bool L_7 = (__this->f3);
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&m11520_MI, __this);
		if (L_8)
		{
			goto IL_0061;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(&m11521_MI, __this);
		t124 L_9 = (__this->f1);
		__this->f0 = L_9;
		__this->f2 = (-1);
	}

IL_0061:
	{
		return;
	}
}
extern MethodInfo m8809_MI;
 void m8809 (t1434 * __this, bool* p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t114 * L_1 = m531(__this, &m531_MI);
		t11* L_2 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3644_MI, L_1);
		t1363 * L_3 = (t1363 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1363_TI));
		m5943(L_3, L_2, &m5943_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		int32_t L_4 = (__this->f2);
		V_1 = L_4;
		V_0 = ((int32_t)(V_1+1));
		if ((((int32_t)V_1) > ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		t114 * L_5 = m531(__this, &m531_MI);
		t11* L_6 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3644_MI, L_5);
		t1363 * L_7 = (t1363 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1363_TI));
		m5943(L_7, L_6, &m5943_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003a:
	{
		int32_t* L_8 = &(__this->f2);
		int32_t L_9 = m10031(NULL, L_8, V_0, V_1, &m10031_MI);
		if ((((uint32_t)L_9) != ((uint32_t)V_1)))
		{
			goto IL_001a;
		}
	}
	{
		*((int8_t*)(p0)) = (int8_t)1;
		return;
	}
}
extern MethodInfo m8810_MI;
 t124 m8810 (t1434 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t114 * L_1 = m531(__this, &m531_MI);
		t11* L_2 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3644_MI, L_1);
		t1363 * L_3 = (t1363 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1363_TI));
		m5943(L_3, L_2, &m5943_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		t124 L_4 = (__this->f0);
		return L_4;
	}
}
extern MethodInfo m8811_MI;
 void m8811 (t1434 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t114 * L_1 = m531(__this, &m531_MI);
		t11* L_2 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3644_MI, L_1);
		t1363 * L_3 = (t1363 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1363_TI));
		m5943(L_3, L_2, &m5943_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		int32_t L_4 = (__this->f2);
		V_1 = L_4;
		V_0 = ((int32_t)(V_1-1));
		int32_t* L_5 = &(__this->f2);
		int32_t L_6 = m10031(NULL, L_5, V_0, V_1, &m10031_MI);
		if ((((uint32_t)L_6) != ((uint32_t)V_1)))
		{
			goto IL_001a;
		}
	}
	{
		if (V_0)
		{
			goto IL_005b;
		}
	}
	{
		bool L_7 = (__this->f3);
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&m11520_MI, __this);
		if (L_8)
		{
			goto IL_005b;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(&m11521_MI, __this);
		t124 L_9 = (__this->f1);
		__this->f0 = L_9;
	}

IL_005b:
	{
		return;
	}
}
extern MethodInfo m8812_MI;
 void m8812 (t1434 * __this, MethodInfo* method){
	{
		VirtActionInvoker1< bool >::Invoke(&m8813_MI, __this, 1);
		m5906(NULL, __this, &m5906_MI);
		return;
	}
}
 void m8813 (t1434 * __this, bool p0, MethodInfo* method){
	{
		if (!p0)
		{
			goto IL_000b;
		}
	}
	{
		m8808(__this, &m8808_MI);
		goto IL_000b;
	}

IL_000b:
	{
		return;
	}
}
extern MethodInfo m8814_MI;
 void m8814 (t1434 * __this, t124 p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m8815_MI;
 void m8815 (t1434 * __this, MethodInfo* method){
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			bool L_0 = (__this->f3);
			if (!L_0)
			{
				goto IL_0023;
			}
		}

IL_0008:
		{
			bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m11520_MI, __this);
			if (L_1)
			{
				goto IL_0023;
			}
		}

IL_0010:
		{
			VirtFuncInvoker0< bool >::Invoke(&m11521_MI, __this);
			t124 L_2 = (__this->f1);
			__this->f0 = L_2;
		}

IL_0023:
		{
			// IL_0023: leave.s IL_002c
			leaveInstructions[0] = 0x2C; // 1
			THROW_SENTINEL(IL_002c);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0025;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_0025;
	}

IL_0025:
	{ // begin finally (depth: 1)
		m8784(__this, &m8784_MI);
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
	} // end finally (depth: 1)

IL_002c:
	{
		return;
	}
}
// Metadata Definition System.Runtime.InteropServices.SafeHandle
extern Il2CppType t124_0_0_4;
FieldInfo t1434_f0_FieldInfo = 
{
	"handle", &t124_0_0_4, &t1434_TI, offsetof(t1434, f0), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1434_f1_FieldInfo = 
{
	"invalid_handle_value", &t124_0_0_1, &t1434_TI, offsetof(t1434, f1), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1434_f2_FieldInfo = 
{
	"refcount", &t110_0_0_1, &t1434_TI, offsetof(t1434, f2), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t1434_f3_FieldInfo = 
{
	"owns_handle", &t108_0_0_1, &t1434_TI, offsetof(t1434, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1434_FIs[] =
{
	&t1434_f0_FieldInfo,
	&t1434_f1_FieldInfo,
	&t1434_f2_FieldInfo,
	&t1434_f3_FieldInfo,
	NULL
};
static PropertyInfo t1434____IsInvalid_PropertyInfo = 
{
	&t1434_TI, "IsInvalid", &m11520_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1434_PIs[] =
{
	&t1434____IsInvalid_PropertyInfo,
	NULL
};
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1434_m8807_ParameterInfos[] = 
{
	{"invalidHandleValue", 0, 134222177, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"ownsHandle", 1, 134222178, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t124_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1434__CustomAttributeCache_m8807;
MethodInfo m8807_MI = 
{
	".ctor", (methodPointerType)&m8807, &t1434_TI, &t109_0_0_0, RuntimeInvoker_t109_t124_t111, t1434_m8807_ParameterInfos, &t1434__CustomAttributeCache_m8807, 6276, 0, 255, 2, false, false, 3585, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1434__CustomAttributeCache_m8808;
MethodInfo m8808_MI = 
{
	"Close", (methodPointerType)&m8808, &t1434_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &t1434__CustomAttributeCache_m8808, 134, 0, 255, 0, false, false, 3586, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_1_0_0;
extern Il2CppType t108_1_0_0;
static ParameterInfo t1434_m8809_ParameterInfos[] = 
{
	{"success", 0, 134222179, &EmptyCustomAttributesCache, &t108_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t169 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1434__CustomAttributeCache_m8809;
MethodInfo m8809_MI = 
{
	"DangerousAddRef", (methodPointerType)&m8809, &t1434_TI, &t109_0_0_0, RuntimeInvoker_t109_t169, t1434_m8809_ParameterInfos, &t1434__CustomAttributeCache_m8809, 134, 0, 255, 1, false, false, 3587, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1434__CustomAttributeCache_m8810;
MethodInfo m8810_MI = 
{
	"DangerousGetHandle", (methodPointerType)&m8810, &t1434_TI, &t124_0_0_0, RuntimeInvoker_t124, NULL, &t1434__CustomAttributeCache_m8810, 134, 0, 255, 0, false, false, 3588, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1434__CustomAttributeCache_m8811;
MethodInfo m8811_MI = 
{
	"DangerousRelease", (methodPointerType)&m8811, &t1434_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &t1434__CustomAttributeCache_m8811, 134, 0, 255, 0, false, false, 3589, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1434__CustomAttributeCache_m8812;
MethodInfo m8812_MI = 
{
	"Dispose", (methodPointerType)&m8812, &t1434_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &t1434__CustomAttributeCache_m8812, 486, 0, 4, 0, false, false, 3590, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1434_m8813_ParameterInfos[] = 
{
	{"disposing", 0, 134222180, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1434__CustomAttributeCache_m8813;
MethodInfo m8813_MI = 
{
	"Dispose", (methodPointerType)&m8813, &t1434_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t1434_m8813_ParameterInfos, &t1434__CustomAttributeCache_m8813, 452, 0, 5, 1, false, false, 3591, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1434__CustomAttributeCache_m11521;
MethodInfo m11521_MI = 
{
	"ReleaseHandle", NULL, &t1434_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &t1434__CustomAttributeCache_m11521, 1476, 0, 6, 0, false, false, 3592, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1434_m8814_ParameterInfos[] = 
{
	{"handle", 0, 134222181, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t124 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1434__CustomAttributeCache_m8814;
MethodInfo m8814_MI = 
{
	"SetHandle", (methodPointerType)&m8814, &t1434_TI, &t109_0_0_0, RuntimeInvoker_t109_t124, t1434_m8814_ParameterInfos, &t1434__CustomAttributeCache_m8814, 132, 0, 255, 1, false, false, 3593, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1434__CustomAttributeCache_m11520;
MethodInfo m11520_MI = 
{
	"get_IsInvalid", NULL, &t1434_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &t1434__CustomAttributeCache_m11520, 3526, 0, 7, 0, false, false, 3594, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8815_MI = 
{
	"Finalize", (methodPointerType)&m8815, &t1434_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 3595, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1434_MIs[] =
{
	&m8807_MI,
	&m8808_MI,
	&m8809_MI,
	&m8810_MI,
	&m8811_MI,
	&m8812_MI,
	&m8813_MI,
	&m11521_MI,
	&m8814_MI,
	&m11520_MI,
	&m8815_MI,
	NULL
};
extern MethodInfo m464_MI;
extern MethodInfo m466_MI;
static MethodInfo* t1434_VT[] =
{
	&m464_MI,
	&m8815_MI,
	&m466_MI,
	&m467_MI,
	&m8812_MI,
	&m8813_MI,
	NULL,
	NULL,
};
extern TypeInfo t132_TI;
static TypeInfo* t1434_ITIs[] = 
{
	&t132_TI,
};
static Il2CppInterfaceOffsetPair t1434_IOs[] = 
{
	{ &t132_TI, 4},
};
extern TypeInfo t1695_TI;
#include "t1695.h"
#include "t1695MD.h"
extern MethodInfo m8785_MI;
void t1434_CustomAttributesCacheGenerator_m8807(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1695 * tmp;
		tmp = (t1695 *)il2cpp_codegen_object_new (&t1695_TI);
		m8785(tmp, 3, 1, &m8785_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1434_CustomAttributesCacheGenerator_m8808(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1695 * tmp;
		tmp = (t1695 *)il2cpp_codegen_object_new (&t1695_TI);
		m8785(tmp, 3, 2, &m8785_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1434_CustomAttributesCacheGenerator_m8809(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1695 * tmp;
		tmp = (t1695 *)il2cpp_codegen_object_new (&t1695_TI);
		m8785(tmp, 3, 1, &m8785_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1434_CustomAttributesCacheGenerator_m8810(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1695 * tmp;
		tmp = (t1695 *)il2cpp_codegen_object_new (&t1695_TI);
		m8785(tmp, 3, 2, &m8785_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1434_CustomAttributesCacheGenerator_m8811(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1695 * tmp;
		tmp = (t1695 *)il2cpp_codegen_object_new (&t1695_TI);
		m8785(tmp, 3, 2, &m8785_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1434_CustomAttributesCacheGenerator_m8812(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1695 * tmp;
		tmp = (t1695 *)il2cpp_codegen_object_new (&t1695_TI);
		m8785(tmp, 3, 2, &m8785_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1434_CustomAttributesCacheGenerator_m8813(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1695 * tmp;
		tmp = (t1695 *)il2cpp_codegen_object_new (&t1695_TI);
		m8785(tmp, 3, 2, &m8785_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1434_CustomAttributesCacheGenerator_m11521(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1695 * tmp;
		tmp = (t1695 *)il2cpp_codegen_object_new (&t1695_TI);
		m8785(tmp, 3, 2, &m8785_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1434_CustomAttributesCacheGenerator_m8814(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1695 * tmp;
		tmp = (t1695 *)il2cpp_codegen_object_new (&t1695_TI);
		m8785(tmp, 3, 2, &m8785_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1434_CustomAttributesCacheGenerator_m11520(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1695 * tmp;
		tmp = (t1695 *)il2cpp_codegen_object_new (&t1695_TI);
		m8785(tmp, 3, 2, &m8785_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1434__CustomAttributeCache_m8807 = {
1,
NULL,
&t1434_CustomAttributesCacheGenerator_m8807
};
CustomAttributesCache t1434__CustomAttributeCache_m8808 = {
1,
NULL,
&t1434_CustomAttributesCacheGenerator_m8808
};
CustomAttributesCache t1434__CustomAttributeCache_m8809 = {
1,
NULL,
&t1434_CustomAttributesCacheGenerator_m8809
};
CustomAttributesCache t1434__CustomAttributeCache_m8810 = {
1,
NULL,
&t1434_CustomAttributesCacheGenerator_m8810
};
CustomAttributesCache t1434__CustomAttributeCache_m8811 = {
1,
NULL,
&t1434_CustomAttributesCacheGenerator_m8811
};
CustomAttributesCache t1434__CustomAttributeCache_m8812 = {
1,
NULL,
&t1434_CustomAttributesCacheGenerator_m8812
};
CustomAttributesCache t1434__CustomAttributeCache_m8813 = {
1,
NULL,
&t1434_CustomAttributesCacheGenerator_m8813
};
CustomAttributesCache t1434__CustomAttributeCache_m11521 = {
1,
NULL,
&t1434_CustomAttributesCacheGenerator_m11521
};
CustomAttributesCache t1434__CustomAttributeCache_m8814 = {
1,
NULL,
&t1434_CustomAttributesCacheGenerator_m8814
};
CustomAttributesCache t1434__CustomAttributeCache_m11520 = {
1,
NULL,
&t1434_CustomAttributesCacheGenerator_m11520
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1434_0_0_0;
extern Il2CppType t1434_1_0_0;
struct t1434;
extern CustomAttributesCache t1434__CustomAttributeCache_m8807;
extern CustomAttributesCache t1434__CustomAttributeCache_m8808;
extern CustomAttributesCache t1434__CustomAttributeCache_m8809;
extern CustomAttributesCache t1434__CustomAttributeCache_m8810;
extern CustomAttributesCache t1434__CustomAttributeCache_m8811;
extern CustomAttributesCache t1434__CustomAttributeCache_m8812;
extern CustomAttributesCache t1434__CustomAttributeCache_m8813;
extern CustomAttributesCache t1434__CustomAttributeCache_m11521;
extern CustomAttributesCache t1434__CustomAttributeCache_m8814;
extern CustomAttributesCache t1434__CustomAttributeCache_m11520;
TypeInfo t1434_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SafeHandle", "System.Runtime.InteropServices", t1434_MIs, t1434_PIs, t1434_FIs, NULL, &t1694_TI, NULL, NULL, &t1434_TI, t1434_ITIs, t1434_VT, &EmptyCustomAttributesCache, &t1434_TI, &t1434_0_0_0, &t1434_1_0_0, t1434_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1434), 0, sizeof(void*), 0, 0, -1, 1048705, 0, false, false, false, false, false, false, false, false, true, false, false, false, 11, 1, 4, 0, 0, 8, 1, 1};
#include "t1708.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1708_TI;
#include "t1708MD.h"

extern MethodInfo m6831_MI;


extern MethodInfo m8816_MI;
 void m8816 (t1708 * __this, t114 * p0, MethodInfo* method){
	{
		m3526(__this, &m3526_MI);
		t11* L_0 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m6831_MI, p0);
		__this->f0 = L_0;
		return;
	}
}
// Metadata Definition System.Runtime.InteropServices.TypeLibImportClassAttribute
extern Il2CppType t11_0_0_1;
FieldInfo t1708_f0_FieldInfo = 
{
	"_importClass", &t11_0_0_1, &t1708_TI, offsetof(t1708, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1708_FIs[] =
{
	&t1708_f0_FieldInfo,
	NULL
};
extern Il2CppType t114_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t1708_m8816_ParameterInfos[] = 
{
	{"importClass", 0, 134222182, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8816_MI = 
{
	".ctor", (methodPointerType)&m8816, &t1708_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1708_m8816_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3596, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1708_MIs[] =
{
	&m8816_MI,
	NULL
};
static MethodInfo* t1708_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
};
static Il2CppInterfaceOffsetPair t1708_IOs[] = 
{
	{ &t740_TI, 4},
};
void t1708_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t767 * tmp;
		tmp = (t767 *)il2cpp_codegen_object_new (&t767_TI);
		m3562(tmp, 1024, &m3562_MI);
		m3563(tmp, false, &m3563_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1708__CustomAttributeCache = {
2,
NULL,
&t1708_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1708_0_0_0;
extern Il2CppType t1708_1_0_0;
struct t1708;
extern CustomAttributesCache t1708__CustomAttributeCache;
TypeInfo t1708_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeLibImportClassAttribute", "System.Runtime.InteropServices", t1708_MIs, NULL, t1708_FIs, NULL, &t628_TI, NULL, NULL, &t1708_TI, NULL, t1708_VT, &t1708__CustomAttributeCache, &t1708_TI, &t1708_0_0_0, &t1708_1_0_0, t1708_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1708), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t1709.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1709_TI;
#include "t1709MD.h"



extern MethodInfo m8817_MI;
 void m8817 (t1709 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		m3526(__this, &m3526_MI);
		__this->f0 = p0;
		__this->f1 = p1;
		return;
	}
}
// Metadata Definition System.Runtime.InteropServices.TypeLibVersionAttribute
extern Il2CppType t110_0_0_1;
FieldInfo t1709_f0_FieldInfo = 
{
	"major", &t110_0_0_1, &t1709_TI, offsetof(t1709, f0), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1709_f1_FieldInfo = 
{
	"minor", &t110_0_0_1, &t1709_TI, offsetof(t1709, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1709_FIs[] =
{
	&t1709_f0_FieldInfo,
	&t1709_f1_FieldInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1709_m8817_ParameterInfos[] = 
{
	{"major", 0, 134222183, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"minor", 1, 134222184, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8817_MI = 
{
	".ctor", (methodPointerType)&m8817, &t1709_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t1709_m8817_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 3597, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1709_MIs[] =
{
	&m8817_MI,
	NULL
};
static MethodInfo* t1709_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
};
static Il2CppInterfaceOffsetPair t1709_IOs[] = 
{
	{ &t740_TI, 4},
};
extern MethodInfo m3564_MI;
void t1709_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t767 * tmp;
		tmp = (t767 *)il2cpp_codegen_object_new (&t767_TI);
		m3562(tmp, 1, &m3562_MI);
		m3564(tmp, false, &m3564_MI);
		m3563(tmp, false, &m3563_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1709__CustomAttributeCache = {
2,
NULL,
&t1709_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1709_0_0_0;
extern Il2CppType t1709_1_0_0;
struct t1709;
extern CustomAttributesCache t1709__CustomAttributeCache;
TypeInfo t1709_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeLibVersionAttribute", "System.Runtime.InteropServices", t1709_MIs, NULL, t1709_FIs, NULL, &t628_TI, NULL, NULL, &t1709_TI, NULL, t1709_VT, &t1709__CustomAttributeCache, &t1709_TI, &t1709_0_0_0, &t1709_1_0_0, t1709_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1709), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 2, 0, 0, 4, 0, 1};
#include "t1417.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1417_TI;
#include "t1417MD.h"



// Metadata Definition System.Runtime.InteropServices.UnmanagedType
extern Il2CppType t110_0_0_1542;
FieldInfo t1417_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1417_TI, offsetof(t1417, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f2_FieldInfo = 
{
	"Bool", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f3_FieldInfo = 
{
	"I1", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f4_FieldInfo = 
{
	"U1", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f5_FieldInfo = 
{
	"I2", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f6_FieldInfo = 
{
	"U2", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f7_FieldInfo = 
{
	"I4", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f8_FieldInfo = 
{
	"U4", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f9_FieldInfo = 
{
	"I8", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f10_FieldInfo = 
{
	"U8", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f11_FieldInfo = 
{
	"R4", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f12_FieldInfo = 
{
	"R8", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f13_FieldInfo = 
{
	"Currency", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f14_FieldInfo = 
{
	"BStr", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f15_FieldInfo = 
{
	"LPStr", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f16_FieldInfo = 
{
	"LPWStr", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f17_FieldInfo = 
{
	"LPTStr", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f18_FieldInfo = 
{
	"ByValTStr", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f19_FieldInfo = 
{
	"IUnknown", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f20_FieldInfo = 
{
	"IDispatch", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f21_FieldInfo = 
{
	"Struct", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f22_FieldInfo = 
{
	"Interface", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f23_FieldInfo = 
{
	"SafeArray", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f24_FieldInfo = 
{
	"ByValArray", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f25_FieldInfo = 
{
	"SysInt", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f26_FieldInfo = 
{
	"SysUInt", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f27_FieldInfo = 
{
	"VBByRefStr", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f28_FieldInfo = 
{
	"AnsiBStr", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f29_FieldInfo = 
{
	"TBStr", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f30_FieldInfo = 
{
	"VariantBool", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f31_FieldInfo = 
{
	"FunctionPtr", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f32_FieldInfo = 
{
	"AsAny", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f33_FieldInfo = 
{
	"LPArray", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f34_FieldInfo = 
{
	"LPStruct", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f35_FieldInfo = 
{
	"CustomMarshaler", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_32854;
FieldInfo t1417_f36_FieldInfo = 
{
	"Error", &t1417_0_0_32854, &t1417_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1417_FIs[] =
{
	&t1417_f1_FieldInfo,
	&t1417_f2_FieldInfo,
	&t1417_f3_FieldInfo,
	&t1417_f4_FieldInfo,
	&t1417_f5_FieldInfo,
	&t1417_f6_FieldInfo,
	&t1417_f7_FieldInfo,
	&t1417_f8_FieldInfo,
	&t1417_f9_FieldInfo,
	&t1417_f10_FieldInfo,
	&t1417_f11_FieldInfo,
	&t1417_f12_FieldInfo,
	&t1417_f13_FieldInfo,
	&t1417_f14_FieldInfo,
	&t1417_f15_FieldInfo,
	&t1417_f16_FieldInfo,
	&t1417_f17_FieldInfo,
	&t1417_f18_FieldInfo,
	&t1417_f19_FieldInfo,
	&t1417_f20_FieldInfo,
	&t1417_f21_FieldInfo,
	&t1417_f22_FieldInfo,
	&t1417_f23_FieldInfo,
	&t1417_f24_FieldInfo,
	&t1417_f25_FieldInfo,
	&t1417_f26_FieldInfo,
	&t1417_f27_FieldInfo,
	&t1417_f28_FieldInfo,
	&t1417_f29_FieldInfo,
	&t1417_f30_FieldInfo,
	&t1417_f31_FieldInfo,
	&t1417_f32_FieldInfo,
	&t1417_f33_FieldInfo,
	&t1417_f34_FieldInfo,
	&t1417_f35_FieldInfo,
	&t1417_f36_FieldInfo,
	NULL
};
static const int32_t t1417_f2_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1417_f2_DefaultValue = 
{
	&t1417_f2_FieldInfo, { (char*)&t1417_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f3_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1417_f3_DefaultValue = 
{
	&t1417_f3_FieldInfo, { (char*)&t1417_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f4_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1417_f4_DefaultValue = 
{
	&t1417_f4_FieldInfo, { (char*)&t1417_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f5_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t1417_f5_DefaultValue = 
{
	&t1417_f5_FieldInfo, { (char*)&t1417_f5_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f6_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t1417_f6_DefaultValue = 
{
	&t1417_f6_FieldInfo, { (char*)&t1417_f6_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f7_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t1417_f7_DefaultValue = 
{
	&t1417_f7_FieldInfo, { (char*)&t1417_f7_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f8_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1417_f8_DefaultValue = 
{
	&t1417_f8_FieldInfo, { (char*)&t1417_f8_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f9_DefaultValueData = 9;
static Il2CppFieldDefaultValueEntry t1417_f9_DefaultValue = 
{
	&t1417_f9_FieldInfo, { (char*)&t1417_f9_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f10_DefaultValueData = 10;
static Il2CppFieldDefaultValueEntry t1417_f10_DefaultValue = 
{
	&t1417_f10_FieldInfo, { (char*)&t1417_f10_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f11_DefaultValueData = 11;
static Il2CppFieldDefaultValueEntry t1417_f11_DefaultValue = 
{
	&t1417_f11_FieldInfo, { (char*)&t1417_f11_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f12_DefaultValueData = 12;
static Il2CppFieldDefaultValueEntry t1417_f12_DefaultValue = 
{
	&t1417_f12_FieldInfo, { (char*)&t1417_f12_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f13_DefaultValueData = 15;
static Il2CppFieldDefaultValueEntry t1417_f13_DefaultValue = 
{
	&t1417_f13_FieldInfo, { (char*)&t1417_f13_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f14_DefaultValueData = 19;
static Il2CppFieldDefaultValueEntry t1417_f14_DefaultValue = 
{
	&t1417_f14_FieldInfo, { (char*)&t1417_f14_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f15_DefaultValueData = 20;
static Il2CppFieldDefaultValueEntry t1417_f15_DefaultValue = 
{
	&t1417_f15_FieldInfo, { (char*)&t1417_f15_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f16_DefaultValueData = 21;
static Il2CppFieldDefaultValueEntry t1417_f16_DefaultValue = 
{
	&t1417_f16_FieldInfo, { (char*)&t1417_f16_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f17_DefaultValueData = 22;
static Il2CppFieldDefaultValueEntry t1417_f17_DefaultValue = 
{
	&t1417_f17_FieldInfo, { (char*)&t1417_f17_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f18_DefaultValueData = 23;
static Il2CppFieldDefaultValueEntry t1417_f18_DefaultValue = 
{
	&t1417_f18_FieldInfo, { (char*)&t1417_f18_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f19_DefaultValueData = 25;
static Il2CppFieldDefaultValueEntry t1417_f19_DefaultValue = 
{
	&t1417_f19_FieldInfo, { (char*)&t1417_f19_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f20_DefaultValueData = 26;
static Il2CppFieldDefaultValueEntry t1417_f20_DefaultValue = 
{
	&t1417_f20_FieldInfo, { (char*)&t1417_f20_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f21_DefaultValueData = 27;
static Il2CppFieldDefaultValueEntry t1417_f21_DefaultValue = 
{
	&t1417_f21_FieldInfo, { (char*)&t1417_f21_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f22_DefaultValueData = 28;
static Il2CppFieldDefaultValueEntry t1417_f22_DefaultValue = 
{
	&t1417_f22_FieldInfo, { (char*)&t1417_f22_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f23_DefaultValueData = 29;
static Il2CppFieldDefaultValueEntry t1417_f23_DefaultValue = 
{
	&t1417_f23_FieldInfo, { (char*)&t1417_f23_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f24_DefaultValueData = 30;
static Il2CppFieldDefaultValueEntry t1417_f24_DefaultValue = 
{
	&t1417_f24_FieldInfo, { (char*)&t1417_f24_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f25_DefaultValueData = 31;
static Il2CppFieldDefaultValueEntry t1417_f25_DefaultValue = 
{
	&t1417_f25_FieldInfo, { (char*)&t1417_f25_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f26_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1417_f26_DefaultValue = 
{
	&t1417_f26_FieldInfo, { (char*)&t1417_f26_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f27_DefaultValueData = 34;
static Il2CppFieldDefaultValueEntry t1417_f27_DefaultValue = 
{
	&t1417_f27_FieldInfo, { (char*)&t1417_f27_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f28_DefaultValueData = 35;
static Il2CppFieldDefaultValueEntry t1417_f28_DefaultValue = 
{
	&t1417_f28_FieldInfo, { (char*)&t1417_f28_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f29_DefaultValueData = 36;
static Il2CppFieldDefaultValueEntry t1417_f29_DefaultValue = 
{
	&t1417_f29_FieldInfo, { (char*)&t1417_f29_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f30_DefaultValueData = 37;
static Il2CppFieldDefaultValueEntry t1417_f30_DefaultValue = 
{
	&t1417_f30_FieldInfo, { (char*)&t1417_f30_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f31_DefaultValueData = 38;
static Il2CppFieldDefaultValueEntry t1417_f31_DefaultValue = 
{
	&t1417_f31_FieldInfo, { (char*)&t1417_f31_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f32_DefaultValueData = 40;
static Il2CppFieldDefaultValueEntry t1417_f32_DefaultValue = 
{
	&t1417_f32_FieldInfo, { (char*)&t1417_f32_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f33_DefaultValueData = 42;
static Il2CppFieldDefaultValueEntry t1417_f33_DefaultValue = 
{
	&t1417_f33_FieldInfo, { (char*)&t1417_f33_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f34_DefaultValueData = 43;
static Il2CppFieldDefaultValueEntry t1417_f34_DefaultValue = 
{
	&t1417_f34_FieldInfo, { (char*)&t1417_f34_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f35_DefaultValueData = 44;
static Il2CppFieldDefaultValueEntry t1417_f35_DefaultValue = 
{
	&t1417_f35_FieldInfo, { (char*)&t1417_f35_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1417_f36_DefaultValueData = 45;
static Il2CppFieldDefaultValueEntry t1417_f36_DefaultValue = 
{
	&t1417_f36_FieldInfo, { (char*)&t1417_f36_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1417_FDVs[] = 
{
	&t1417_f2_DefaultValue,
	&t1417_f3_DefaultValue,
	&t1417_f4_DefaultValue,
	&t1417_f5_DefaultValue,
	&t1417_f6_DefaultValue,
	&t1417_f7_DefaultValue,
	&t1417_f8_DefaultValue,
	&t1417_f9_DefaultValue,
	&t1417_f10_DefaultValue,
	&t1417_f11_DefaultValue,
	&t1417_f12_DefaultValue,
	&t1417_f13_DefaultValue,
	&t1417_f14_DefaultValue,
	&t1417_f15_DefaultValue,
	&t1417_f16_DefaultValue,
	&t1417_f17_DefaultValue,
	&t1417_f18_DefaultValue,
	&t1417_f19_DefaultValue,
	&t1417_f20_DefaultValue,
	&t1417_f21_DefaultValue,
	&t1417_f22_DefaultValue,
	&t1417_f23_DefaultValue,
	&t1417_f24_DefaultValue,
	&t1417_f25_DefaultValue,
	&t1417_f26_DefaultValue,
	&t1417_f27_DefaultValue,
	&t1417_f28_DefaultValue,
	&t1417_f29_DefaultValue,
	&t1417_f30_DefaultValue,
	&t1417_f31_DefaultValue,
	&t1417_f32_DefaultValue,
	&t1417_f33_DefaultValue,
	&t1417_f34_DefaultValue,
	&t1417_f35_DefaultValue,
	&t1417_f36_DefaultValue,
	NULL
};
static MethodInfo* t1417_MIs[] =
{
	NULL
};
extern MethodInfo m482_MI;
extern MethodInfo m483_MI;
extern MethodInfo m484_MI;
extern MethodInfo m485_MI;
extern MethodInfo m486_MI;
extern MethodInfo m487_MI;
extern MethodInfo m488_MI;
extern MethodInfo m489_MI;
extern MethodInfo m490_MI;
extern MethodInfo m491_MI;
extern MethodInfo m492_MI;
extern MethodInfo m493_MI;
extern MethodInfo m494_MI;
extern MethodInfo m495_MI;
extern MethodInfo m496_MI;
extern MethodInfo m497_MI;
extern MethodInfo m498_MI;
extern MethodInfo m499_MI;
extern MethodInfo m500_MI;
extern MethodInfo m501_MI;
extern MethodInfo m502_MI;
extern MethodInfo m503_MI;
static MethodInfo* t1417_VT[] =
{
	&m482_MI,
	&m465_MI,
	&m483_MI,
	&m484_MI,
	&m485_MI,
	&m486_MI,
	&m487_MI,
	&m488_MI,
	&m489_MI,
	&m490_MI,
	&m491_MI,
	&m492_MI,
	&m493_MI,
	&m494_MI,
	&m495_MI,
	&m496_MI,
	&m497_MI,
	&m498_MI,
	&m499_MI,
	&m500_MI,
	&m501_MI,
	&m502_MI,
	&m503_MI,
};
extern TypeInfo t120_TI;
extern TypeInfo t121_TI;
extern TypeInfo t122_TI;
static Il2CppInterfaceOffsetPair t1417_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
void t1417_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1417__CustomAttributeCache = {
1,
NULL,
&t1417_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1417_0_0_0;
extern Il2CppType t1417_1_0_0;
extern TypeInfo t18_TI;
extern TypeInfo t110_TI;
extern CustomAttributesCache t1417__CustomAttributeCache;
TypeInfo t1417_TI = 
{
	&g_mscorlib_dll_Image, NULL, "UnmanagedType", "System.Runtime.InteropServices", t1417_MIs, NULL, t1417_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1417_VT, &t1417__CustomAttributeCache, &t110_TI, &t1417_0_0_0, &t1417_1_0_0, t1417_IOs, NULL, NULL, t1417_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1417)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 36, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2373_TI;



// Metadata Definition System.Runtime.InteropServices._Activator
static MethodInfo* t2373_MIs[] =
{
	NULL
};
extern TypeInfo t974_TI;
#include "t974.h"
#include "t974MD.h"
extern MethodInfo m3843_MI;
extern TypeInfo t1704_TI;
#include "t1704.h"
#include "t1704MD.h"
extern MethodInfo m8799_MI;
extern TypeInfo t575_TI;
#include "t575.h"
#include "t575MD.h"
extern MethodInfo m2698_MI;
extern TypeInfo t1196_TI;
#include "t1196.h"
void t2373_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t974 * tmp;
		tmp = (t974 *)il2cpp_codegen_object_new (&t974_TI);
		m3843(tmp, false, &m3843_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1704 * tmp;
		tmp = (t1704 *)il2cpp_codegen_object_new (&t1704_TI);
		m8799(tmp, 1, &m8799_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t575 * tmp;
		tmp = (t575 *)il2cpp_codegen_object_new (&t575_TI);
		m2698(tmp, il2cpp_codegen_string_new_wrapper("03973551-57A1-3900-A2B5-9083E3FF2943"), &m2698_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t1708 * tmp;
		tmp = (t1708 *)il2cpp_codegen_object_new (&t1708_TI);
		m8816(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1196_TI)), &m8816_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2373__CustomAttributeCache = {
5,
NULL,
&t2373_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2373_0_0_0;
extern Il2CppType t2373_1_0_0;
struct t2373;
extern CustomAttributesCache t2373__CustomAttributeCache;
TypeInfo t2373_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_Activator", "System.Runtime.InteropServices", t2373_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2373_TI, NULL, NULL, &t2373__CustomAttributeCache, &t2373_TI, &t2373_0_0_0, &t2373_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2340_TI;



// Metadata Definition System.Runtime.InteropServices._Assembly
static MethodInfo* t2340_MIs[] =
{
	NULL
};
extern TypeInfo t1194_TI;
#include "t1194.h"
void t2340_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1704 * tmp;
		tmp = (t1704 *)il2cpp_codegen_object_new (&t1704_TI);
		m8799(tmp, 0, &m8799_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t575 * tmp;
		tmp = (t575 *)il2cpp_codegen_object_new (&t575_TI);
		m2698(tmp, il2cpp_codegen_string_new_wrapper("17156360-2F1A-384A-BC52-FDE93C215C5B"), &m2698_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1708 * tmp;
		tmp = (t1708 *)il2cpp_codegen_object_new (&t1708_TI);
		m8816(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1194_TI)), &m8816_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t974 * tmp;
		tmp = (t974 *)il2cpp_codegen_object_new (&t974_TI);
		m3843(tmp, false, &m3843_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2340__CustomAttributeCache = {
5,
NULL,
&t2340_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2340_0_0_0;
extern Il2CppType t2340_1_0_0;
struct t2340;
extern CustomAttributesCache t2340__CustomAttributeCache;
TypeInfo t2340_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_Assembly", "System.Runtime.InteropServices", t2340_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2340_TI, NULL, NULL, &t2340__CustomAttributeCache, &t2340_TI, &t2340_0_0_0, &t2340_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2339_TI;



// Metadata Definition System.Runtime.InteropServices._AssemblyBuilder
static MethodInfo* t2339_MIs[] =
{
	NULL
};
extern TypeInfo t1602_TI;
#include "t1602.h"
void t2339_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1704 * tmp;
		tmp = (t1704 *)il2cpp_codegen_object_new (&t1704_TI);
		m8799(tmp, 1, &m8799_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1708 * tmp;
		tmp = (t1708 *)il2cpp_codegen_object_new (&t1708_TI);
		m8816(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1602_TI)), &m8816_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t575 * tmp;
		tmp = (t575 *)il2cpp_codegen_object_new (&t575_TI);
		m2698(tmp, il2cpp_codegen_string_new_wrapper("BEBB2505-8B54-3443-AEAD-142A16DD9CC7"), &m2698_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t974 * tmp;
		tmp = (t974 *)il2cpp_codegen_object_new (&t974_TI);
		m3843(tmp, false, &m3843_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2339__CustomAttributeCache = {
5,
NULL,
&t2339_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2339_0_0_0;
extern Il2CppType t2339_1_0_0;
struct t2339;
extern CustomAttributesCache t2339__CustomAttributeCache;
TypeInfo t2339_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_AssemblyBuilder", "System.Runtime.InteropServices", t2339_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2339_TI, NULL, NULL, &t2339__CustomAttributeCache, &t2339_TI, &t2339_0_0_0, &t2339_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2356_TI;



// Metadata Definition System.Runtime.InteropServices._AssemblyName
static MethodInfo* t2356_MIs[] =
{
	NULL
};
extern TypeInfo t1606_TI;
#include "t1606.h"
void t2356_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1704 * tmp;
		tmp = (t1704 *)il2cpp_codegen_object_new (&t1704_TI);
		m8799(tmp, 1, &m8799_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t974 * tmp;
		tmp = (t974 *)il2cpp_codegen_object_new (&t974_TI);
		m3843(tmp, false, &m3843_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t575 * tmp;
		tmp = (t575 *)il2cpp_codegen_object_new (&t575_TI);
		m2698(tmp, il2cpp_codegen_string_new_wrapper("B42B6AAC-317E-34D5-9FA9-093BB4160C50"), &m2698_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t1708 * tmp;
		tmp = (t1708 *)il2cpp_codegen_object_new (&t1708_TI);
		m8816(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1606_TI)), &m8816_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2356__CustomAttributeCache = {
5,
NULL,
&t2356_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2356_0_0_0;
extern Il2CppType t2356_1_0_0;
struct t2356;
extern CustomAttributesCache t2356__CustomAttributeCache;
TypeInfo t2356_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_AssemblyName", "System.Runtime.InteropServices", t2356_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2356_TI, NULL, NULL, &t2356__CustomAttributeCache, &t2356_TI, &t2356_0_0_0, &t2356_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2341_TI;



// Metadata Definition System.Runtime.InteropServices._ConstructorBuilder
static MethodInfo* t2341_MIs[] =
{
	NULL
};
extern TypeInfo t1610_TI;
#include "t1610.h"
void t2341_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t575 * tmp;
		tmp = (t575 *)il2cpp_codegen_object_new (&t575_TI);
		m2698(tmp, il2cpp_codegen_string_new_wrapper("ED3E4384-D7E2-3FA7-8FFD-8940D330519A"), &m2698_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t974 * tmp;
		tmp = (t974 *)il2cpp_codegen_object_new (&t974_TI);
		m3843(tmp, false, &m3843_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t1704 * tmp;
		tmp = (t1704 *)il2cpp_codegen_object_new (&t1704_TI);
		m8799(tmp, 1, &m8799_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t1708 * tmp;
		tmp = (t1708 *)il2cpp_codegen_object_new (&t1708_TI);
		m8816(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1610_TI)), &m8816_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2341__CustomAttributeCache = {
5,
NULL,
&t2341_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2341_0_0_0;
extern Il2CppType t2341_1_0_0;
struct t2341;
extern CustomAttributesCache t2341__CustomAttributeCache;
TypeInfo t2341_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_ConstructorBuilder", "System.Runtime.InteropServices", t2341_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2341_TI, NULL, NULL, &t2341__CustomAttributeCache, &t2341_TI, &t2341_0_0_0, &t2341_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2342_TI;



// Metadata Definition System.Runtime.InteropServices._ConstructorInfo
static MethodInfo* t2342_MIs[] =
{
	NULL
};
extern TypeInfo t797_TI;
#include "t797.h"
void t2342_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1708 * tmp;
		tmp = (t1708 *)il2cpp_codegen_object_new (&t1708_TI);
		m8816(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t797_TI)), &m8816_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t575 * tmp;
		tmp = (t575 *)il2cpp_codegen_object_new (&t575_TI);
		m2698(tmp, il2cpp_codegen_string_new_wrapper("E9A19478-9646-3679-9B10-8411AE1FD57D"), &m2698_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t1704 * tmp;
		tmp = (t1704 *)il2cpp_codegen_object_new (&t1704_TI);
		m8799(tmp, 1, &m8799_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t974 * tmp;
		tmp = (t974 *)il2cpp_codegen_object_new (&t974_TI);
		m3843(tmp, false, &m3843_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2342__CustomAttributeCache = {
5,
NULL,
&t2342_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2342_0_0_0;
extern Il2CppType t2342_1_0_0;
struct t2342;
extern CustomAttributesCache t2342__CustomAttributeCache;
TypeInfo t2342_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_ConstructorInfo", "System.Runtime.InteropServices", t2342_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2342_TI, NULL, NULL, &t2342__CustomAttributeCache, &t2342_TI, &t2342_0_0_0, &t2342_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2345_TI;



// Metadata Definition System.Runtime.InteropServices._EnumBuilder
static MethodInfo* t2345_MIs[] =
{
	NULL
};
extern TypeInfo t1620_TI;
#include "t1620.h"
void t2345_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t974 * tmp;
		tmp = (t974 *)il2cpp_codegen_object_new (&t974_TI);
		m3843(tmp, false, &m3843_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1708 * tmp;
		tmp = (t1708 *)il2cpp_codegen_object_new (&t1708_TI);
		m8816(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1620_TI)), &m8816_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t575 * tmp;
		tmp = (t575 *)il2cpp_codegen_object_new (&t575_TI);
		m2698(tmp, il2cpp_codegen_string_new_wrapper("C7BD73DE-9F85-3290-88EE-090B8BDFE2DF"), &m2698_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t1704 * tmp;
		tmp = (t1704 *)il2cpp_codegen_object_new (&t1704_TI);
		m8799(tmp, 1, &m8799_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2345__CustomAttributeCache = {
5,
NULL,
&t2345_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2345_0_0_0;
extern Il2CppType t2345_1_0_0;
struct t2345;
extern CustomAttributesCache t2345__CustomAttributeCache;
TypeInfo t2345_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_EnumBuilder", "System.Runtime.InteropServices", t2345_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2345_TI, NULL, NULL, &t2345__CustomAttributeCache, &t2345_TI, &t2345_0_0_0, &t2345_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2358_TI;



// Metadata Definition System.Runtime.InteropServices._EventInfo
static MethodInfo* t2358_MIs[] =
{
	NULL
};
extern TypeInfo t1403_TI;
#include "t1403.h"
void t2358_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1704 * tmp;
		tmp = (t1704 *)il2cpp_codegen_object_new (&t1704_TI);
		m8799(tmp, 1, &m8799_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t974 * tmp;
		tmp = (t974 *)il2cpp_codegen_object_new (&t974_TI);
		m3843(tmp, false, &m3843_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t1708 * tmp;
		tmp = (t1708 *)il2cpp_codegen_object_new (&t1708_TI);
		m8816(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1403_TI)), &m8816_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t575 * tmp;
		tmp = (t575 *)il2cpp_codegen_object_new (&t575_TI);
		m2698(tmp, il2cpp_codegen_string_new_wrapper("9DE59C64-D889-35A1-B897-587D74469E5B"), &m2698_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2358__CustomAttributeCache = {
5,
NULL,
&t2358_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2358_0_0_0;
extern Il2CppType t2358_1_0_0;
struct t2358;
extern CustomAttributesCache t2358__CustomAttributeCache;
TypeInfo t2358_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_EventInfo", "System.Runtime.InteropServices", t2358_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2358_TI, NULL, NULL, &t2358__CustomAttributeCache, &t2358_TI, &t2358_0_0_0, &t2358_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2346_TI;



// Metadata Definition System.Runtime.InteropServices._FieldBuilder
static MethodInfo* t2346_MIs[] =
{
	NULL
};
extern TypeInfo t1621_TI;
#include "t1621.h"
void t2346_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1708 * tmp;
		tmp = (t1708 *)il2cpp_codegen_object_new (&t1708_TI);
		m8816(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1621_TI)), &m8816_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t974 * tmp;
		tmp = (t974 *)il2cpp_codegen_object_new (&t974_TI);
		m3843(tmp, false, &m3843_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t1704 * tmp;
		tmp = (t1704 *)il2cpp_codegen_object_new (&t1704_TI);
		m8799(tmp, 1, &m8799_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t575 * tmp;
		tmp = (t575 *)il2cpp_codegen_object_new (&t575_TI);
		m2698(tmp, il2cpp_codegen_string_new_wrapper("CE1A3BF5-975E-30CC-97C9-1EF70F8F3993"), &m2698_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2346__CustomAttributeCache = {
5,
NULL,
&t2346_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2346_0_0_0;
extern Il2CppType t2346_1_0_0;
struct t2346;
extern CustomAttributesCache t2346__CustomAttributeCache;
TypeInfo t2346_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_FieldBuilder", "System.Runtime.InteropServices", t2346_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2346_TI, NULL, NULL, &t2346__CustomAttributeCache, &t2346_TI, &t2346_0_0_0, &t2346_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2347_TI;



// Metadata Definition System.Runtime.InteropServices._FieldInfo
static MethodInfo* t2347_MIs[] =
{
	NULL
};
extern TypeInfo t1404_TI;
#include "t1404.h"
void t2347_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1704 * tmp;
		tmp = (t1704 *)il2cpp_codegen_object_new (&t1704_TI);
		m8799(tmp, 1, &m8799_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t974 * tmp;
		tmp = (t974 *)il2cpp_codegen_object_new (&t974_TI);
		m3843(tmp, false, &m3843_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t575 * tmp;
		tmp = (t575 *)il2cpp_codegen_object_new (&t575_TI);
		m2698(tmp, il2cpp_codegen_string_new_wrapper("8A7C1442-A9FB-366B-80D8-4939FFA6DBE0"), &m2698_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t1708 * tmp;
		tmp = (t1708 *)il2cpp_codegen_object_new (&t1708_TI);
		m8816(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1404_TI)), &m8816_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2347__CustomAttributeCache = {
5,
NULL,
&t2347_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2347_0_0_0;
extern Il2CppType t2347_1_0_0;
struct t2347;
extern CustomAttributesCache t2347__CustomAttributeCache;
TypeInfo t2347_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_FieldInfo", "System.Runtime.InteropServices", t2347_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2347_TI, NULL, NULL, &t2347__CustomAttributeCache, &t2347_TI, &t2347_0_0_0, &t2347_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2348_TI;



// Metadata Definition System.Runtime.InteropServices._ILGenerator
static MethodInfo* t2348_MIs[] =
{
	NULL
};
extern TypeInfo t1611_TI;
#include "t1611.h"
void t2348_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1704 * tmp;
		tmp = (t1704 *)il2cpp_codegen_object_new (&t1704_TI);
		m8799(tmp, 1, &m8799_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t974 * tmp;
		tmp = (t974 *)il2cpp_codegen_object_new (&t974_TI);
		m3843(tmp, false, &m3843_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t1708 * tmp;
		tmp = (t1708 *)il2cpp_codegen_object_new (&t1708_TI);
		m8816(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1611_TI)), &m8816_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t575 * tmp;
		tmp = (t575 *)il2cpp_codegen_object_new (&t575_TI);
		m2698(tmp, il2cpp_codegen_string_new_wrapper("A4924B27-6E3B-37F7-9B83-A4501955E6A7"), &m2698_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2348__CustomAttributeCache = {
5,
NULL,
&t2348_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2348_0_0_0;
extern Il2CppType t2348_1_0_0;
struct t2348;
extern CustomAttributesCache t2348__CustomAttributeCache;
TypeInfo t2348_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_ILGenerator", "System.Runtime.InteropServices", t2348_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2348_TI, NULL, NULL, &t2348__CustomAttributeCache, &t2348_TI, &t2348_0_0_0, &t2348_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2349_TI;



// Metadata Definition System.Runtime.InteropServices._LocalBuilder
static MethodInfo* t2349_MIs[] =
{
	NULL
};
extern TypeInfo t1634_TI;
#include "t1634.h"
void t2349_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t974 * tmp;
		tmp = (t974 *)il2cpp_codegen_object_new (&t974_TI);
		m3843(tmp, false, &m3843_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t575 * tmp;
		tmp = (t575 *)il2cpp_codegen_object_new (&t575_TI);
		m2698(tmp, il2cpp_codegen_string_new_wrapper("4E6350D1-A08B-3DEC-9A3E-C465F9AEEC0C"), &m2698_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t1704 * tmp;
		tmp = (t1704 *)il2cpp_codegen_object_new (&t1704_TI);
		m8799(tmp, 1, &m8799_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t1708 * tmp;
		tmp = (t1708 *)il2cpp_codegen_object_new (&t1708_TI);
		m8816(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1634_TI)), &m8816_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2349__CustomAttributeCache = {
5,
NULL,
&t2349_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2349_0_0_0;
extern Il2CppType t2349_1_0_0;
struct t2349;
extern CustomAttributesCache t2349__CustomAttributeCache;
TypeInfo t2349_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_LocalBuilder", "System.Runtime.InteropServices", t2349_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2349_TI, NULL, NULL, &t2349__CustomAttributeCache, &t2349_TI, &t2349_0_0_0, &t2349_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2343_TI;



// Metadata Definition System.Runtime.InteropServices._MethodBase
static MethodInfo* t2343_MIs[] =
{
	NULL
};
extern TypeInfo t774_TI;
#include "t774.h"
void t2343_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1704 * tmp;
		tmp = (t1704 *)il2cpp_codegen_object_new (&t1704_TI);
		m8799(tmp, 1, &m8799_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1708 * tmp;
		tmp = (t1708 *)il2cpp_codegen_object_new (&t1708_TI);
		m8816(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t774_TI)), &m8816_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t575 * tmp;
		tmp = (t575 *)il2cpp_codegen_object_new (&t575_TI);
		m2698(tmp, il2cpp_codegen_string_new_wrapper("6240837A-707F-3181-8E98-A36AE086766B"), &m2698_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t974 * tmp;
		tmp = (t974 *)il2cpp_codegen_object_new (&t974_TI);
		m3843(tmp, false, &m3843_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2343__CustomAttributeCache = {
5,
NULL,
&t2343_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2343_0_0_0;
extern Il2CppType t2343_1_0_0;
struct t2343;
extern CustomAttributesCache t2343__CustomAttributeCache;
TypeInfo t2343_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_MethodBase", "System.Runtime.InteropServices", t2343_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2343_TI, NULL, NULL, &t2343__CustomAttributeCache, &t2343_TI, &t2343_0_0_0, &t2343_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2350_TI;



// Metadata Definition System.Runtime.InteropServices._MethodBuilder
static MethodInfo* t2350_MIs[] =
{
	NULL
};
extern TypeInfo t1625_TI;
#include "t1625.h"
void t2350_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1708 * tmp;
		tmp = (t1708 *)il2cpp_codegen_object_new (&t1708_TI);
		m8816(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1625_TI)), &m8816_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t575 * tmp;
		tmp = (t575 *)il2cpp_codegen_object_new (&t575_TI);
		m2698(tmp, il2cpp_codegen_string_new_wrapper("007D8A14-FDF3-363E-9A0B-FEC0618260A2"), &m2698_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1704 * tmp;
		tmp = (t1704 *)il2cpp_codegen_object_new (&t1704_TI);
		m8799(tmp, 1, &m8799_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t974 * tmp;
		tmp = (t974 *)il2cpp_codegen_object_new (&t974_TI);
		m3843(tmp, false, &m3843_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2350__CustomAttributeCache = {
5,
NULL,
&t2350_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2350_0_0_0;
extern Il2CppType t2350_1_0_0;
struct t2350;
extern CustomAttributesCache t2350__CustomAttributeCache;
TypeInfo t2350_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_MethodBuilder", "System.Runtime.InteropServices", t2350_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2350_TI, NULL, NULL, &t2350__CustomAttributeCache, &t2350_TI, &t2350_0_0_0, &t2350_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2344_TI;



// Metadata Definition System.Runtime.InteropServices._MethodInfo
static MethodInfo* t2344_MIs[] =
{
	NULL
};
extern TypeInfo t695_TI;
#include "t695.h"
void t2344_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t974 * tmp;
		tmp = (t974 *)il2cpp_codegen_object_new (&t974_TI);
		m3843(tmp, false, &m3843_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1708 * tmp;
		tmp = (t1708 *)il2cpp_codegen_object_new (&t1708_TI);
		m8816(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t695_TI)), &m8816_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t575 * tmp;
		tmp = (t575 *)il2cpp_codegen_object_new (&t575_TI);
		m2698(tmp, il2cpp_codegen_string_new_wrapper("FFCC1B5D-ECB8-38DD-9B01-3DC8ABC2AA5F"), &m2698_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t1704 * tmp;
		tmp = (t1704 *)il2cpp_codegen_object_new (&t1704_TI);
		m8799(tmp, 1, &m8799_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2344__CustomAttributeCache = {
5,
NULL,
&t2344_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2344_0_0_0;
extern Il2CppType t2344_1_0_0;
struct t2344;
extern CustomAttributesCache t2344__CustomAttributeCache;
TypeInfo t2344_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_MethodInfo", "System.Runtime.InteropServices", t2344_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2344_TI, NULL, NULL, &t2344__CustomAttributeCache, &t2344_TI, &t2344_0_0_0, &t2344_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2352_TI;



// Metadata Definition System.Runtime.InteropServices._Module
static MethodInfo* t2352_MIs[] =
{
	NULL
};
extern TypeInfo t1402_TI;
#include "t1402.h"
void t2352_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1708 * tmp;
		tmp = (t1708 *)il2cpp_codegen_object_new (&t1708_TI);
		m8816(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1402_TI)), &m8816_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t974 * tmp;
		tmp = (t974 *)il2cpp_codegen_object_new (&t974_TI);
		m3843(tmp, false, &m3843_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t1704 * tmp;
		tmp = (t1704 *)il2cpp_codegen_object_new (&t1704_TI);
		m8799(tmp, 1, &m8799_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t575 * tmp;
		tmp = (t575 *)il2cpp_codegen_object_new (&t575_TI);
		m2698(tmp, il2cpp_codegen_string_new_wrapper("D002E9BA-D9E3-3749-B1D3-D565A08B13E7"), &m2698_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2352__CustomAttributeCache = {
5,
NULL,
&t2352_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2352_0_0_0;
extern Il2CppType t2352_1_0_0;
struct t2352;
extern CustomAttributesCache t2352__CustomAttributeCache;
TypeInfo t2352_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_Module", "System.Runtime.InteropServices", t2352_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2352_TI, NULL, NULL, &t2352__CustomAttributeCache, &t2352_TI, &t2352_0_0_0, &t2352_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2351_TI;



// Metadata Definition System.Runtime.InteropServices._ModuleBuilder
static MethodInfo* t2351_MIs[] =
{
	NULL
};
extern TypeInfo t1607_TI;
#include "t1607.h"
void t2351_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t974 * tmp;
		tmp = (t974 *)il2cpp_codegen_object_new (&t974_TI);
		m3843(tmp, false, &m3843_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1708 * tmp;
		tmp = (t1708 *)il2cpp_codegen_object_new (&t1708_TI);
		m8816(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1607_TI)), &m8816_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t1704 * tmp;
		tmp = (t1704 *)il2cpp_codegen_object_new (&t1704_TI);
		m8799(tmp, 1, &m8799_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t575 * tmp;
		tmp = (t575 *)il2cpp_codegen_object_new (&t575_TI);
		m2698(tmp, il2cpp_codegen_string_new_wrapper("D05FFA9A-04AF-3519-8EE1-8D93AD73430B"), &m2698_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2351__CustomAttributeCache = {
5,
NULL,
&t2351_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2351_0_0_0;
extern Il2CppType t2351_1_0_0;
struct t2351;
extern CustomAttributesCache t2351__CustomAttributeCache;
TypeInfo t2351_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_ModuleBuilder", "System.Runtime.InteropServices", t2351_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2351_TI, NULL, NULL, &t2351__CustomAttributeCache, &t2351_TI, &t2351_0_0_0, &t2351_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2353_TI;



// Metadata Definition System.Runtime.InteropServices._ParameterBuilder
static MethodInfo* t2353_MIs[] =
{
	NULL
};
extern TypeInfo t1648_TI;
#include "t1648.h"
void t2353_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t974 * tmp;
		tmp = (t974 *)il2cpp_codegen_object_new (&t974_TI);
		m3843(tmp, false, &m3843_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t575 * tmp;
		tmp = (t575 *)il2cpp_codegen_object_new (&t575_TI);
		m2698(tmp, il2cpp_codegen_string_new_wrapper("36329EBA-F97A-3565-BC07-0ED5C6EF19FC"), &m2698_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t1708 * tmp;
		tmp = (t1708 *)il2cpp_codegen_object_new (&t1708_TI);
		m8816(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1648_TI)), &m8816_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t1704 * tmp;
		tmp = (t1704 *)il2cpp_codegen_object_new (&t1704_TI);
		m8799(tmp, 1, &m8799_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2353__CustomAttributeCache = {
5,
NULL,
&t2353_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2353_0_0_0;
extern Il2CppType t2353_1_0_0;
struct t2353;
extern CustomAttributesCache t2353__CustomAttributeCache;
TypeInfo t2353_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_ParameterBuilder", "System.Runtime.InteropServices", t2353_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2353_TI, NULL, NULL, &t2353__CustomAttributeCache, &t2353_TI, &t2353_0_0_0, &t2353_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2372_TI;



// Metadata Definition System.Runtime.InteropServices._ParameterInfo
static MethodInfo* t2372_MIs[] =
{
	NULL
};
extern TypeInfo t775_TI;
#include "t775.h"
void t2372_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1704 * tmp;
		tmp = (t1704 *)il2cpp_codegen_object_new (&t1704_TI);
		m8799(tmp, 1, &m8799_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1708 * tmp;
		tmp = (t1708 *)il2cpp_codegen_object_new (&t1708_TI);
		m8816(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t775_TI)), &m8816_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t575 * tmp;
		tmp = (t575 *)il2cpp_codegen_object_new (&t575_TI);
		m2698(tmp, il2cpp_codegen_string_new_wrapper("993634C4-E47A-32CC-BE08-85F567DC27D6"), &m2698_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t974 * tmp;
		tmp = (t974 *)il2cpp_codegen_object_new (&t974_TI);
		m3843(tmp, false, &m3843_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2372__CustomAttributeCache = {
5,
NULL,
&t2372_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2372_0_0_0;
extern Il2CppType t2372_1_0_0;
struct t2372;
extern CustomAttributesCache t2372__CustomAttributeCache;
TypeInfo t2372_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_ParameterInfo", "System.Runtime.InteropServices", t2372_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2372_TI, NULL, NULL, &t2372__CustomAttributeCache, &t2372_TI, &t2372_0_0_0, &t2372_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2371_TI;



// Metadata Definition System.Runtime.InteropServices._PropertyInfo
static MethodInfo* t2371_MIs[] =
{
	NULL
};
extern TypeInfo t1407_TI;
#include "t1407.h"
void t2371_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t974 * tmp;
		tmp = (t974 *)il2cpp_codegen_object_new (&t974_TI);
		m3843(tmp, false, &m3843_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1704 * tmp;
		tmp = (t1704 *)il2cpp_codegen_object_new (&t1704_TI);
		m8799(tmp, 1, &m8799_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1708 * tmp;
		tmp = (t1708 *)il2cpp_codegen_object_new (&t1708_TI);
		m8816(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1407_TI)), &m8816_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t575 * tmp;
		tmp = (t575 *)il2cpp_codegen_object_new (&t575_TI);
		m2698(tmp, il2cpp_codegen_string_new_wrapper("F59ED4E4-E68F-3218-BD77-061AA82824BF"), &m2698_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2371__CustomAttributeCache = {
5,
NULL,
&t2371_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2371_0_0_0;
extern Il2CppType t2371_1_0_0;
struct t2371;
extern CustomAttributesCache t2371__CustomAttributeCache;
TypeInfo t2371_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_PropertyInfo", "System.Runtime.InteropServices", t2371_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2371_TI, NULL, NULL, &t2371__CustomAttributeCache, &t2371_TI, &t2371_0_0_0, &t2371_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2374_TI;



// Metadata Definition System.Runtime.InteropServices._Thread
static MethodInfo* t2374_MIs[] =
{
	NULL
};
extern TypeInfo t1731_TI;
#include "t1731.h"
void t2374_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1708 * tmp;
		tmp = (t1708 *)il2cpp_codegen_object_new (&t1708_TI);
		m8816(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1731_TI)), &m8816_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t575 * tmp;
		tmp = (t575 *)il2cpp_codegen_object_new (&t575_TI);
		m2698(tmp, il2cpp_codegen_string_new_wrapper("C281C7F1-4AA9-3517-961A-463CFED57E75"), &m2698_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t1704 * tmp;
		tmp = (t1704 *)il2cpp_codegen_object_new (&t1704_TI);
		m8799(tmp, 1, &m8799_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t974 * tmp;
		tmp = (t974 *)il2cpp_codegen_object_new (&t974_TI);
		m3843(tmp, false, &m3843_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2374__CustomAttributeCache = {
5,
NULL,
&t2374_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2374_0_0_0;
extern Il2CppType t2374_1_0_0;
struct t2374;
extern CustomAttributesCache t2374__CustomAttributeCache;
TypeInfo t2374_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_Thread", "System.Runtime.InteropServices", t2374_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2374_TI, NULL, NULL, &t2374__CustomAttributeCache, &t2374_TI, &t2374_0_0_0, &t2374_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2354_TI;



// Metadata Definition System.Runtime.InteropServices._TypeBuilder
static MethodInfo* t2354_MIs[] =
{
	NULL
};
extern TypeInfo t1612_TI;
#include "t1612.h"
void t2354_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t974 * tmp;
		tmp = (t974 *)il2cpp_codegen_object_new (&t974_TI);
		m3843(tmp, false, &m3843_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1708 * tmp;
		tmp = (t1708 *)il2cpp_codegen_object_new (&t1708_TI);
		m8816(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1612_TI)), &m8816_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1704 * tmp;
		tmp = (t1704 *)il2cpp_codegen_object_new (&t1704_TI);
		m8799(tmp, 1, &m8799_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t575 * tmp;
		tmp = (t575 *)il2cpp_codegen_object_new (&t575_TI);
		m2698(tmp, il2cpp_codegen_string_new_wrapper("7E5678EE-48B3-3F83-B076-C58543498A58"), &m2698_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2354__CustomAttributeCache = {
5,
NULL,
&t2354_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2354_0_0_0;
extern Il2CppType t2354_1_0_0;
struct t2354;
extern CustomAttributesCache t2354__CustomAttributeCache;
TypeInfo t2354_TI = 
{
	&g_mscorlib_dll_Image, NULL, "_TypeBuilder", "System.Runtime.InteropServices", t2354_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2354_TI, NULL, NULL, &t2354__CustomAttributeCache, &t2354_TI, &t2354_0_0_0, &t2354_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t1710.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1710_TI;
#include "t1710MD.h"

#include "t1714.h"
#include "mscorlib_ArrayTypes.h"
#include "t1776.h"
#include "t1785.h"
#include "t1717.h"
#include "t1712.h"
#include "t996.h"
#include "t1720.h"
#include "t1713.h"
#include "t1715.h"
#include "t1722.h"
#include "t450.h"
extern TypeInfo t1714_TI;
extern TypeInfo t2375_TI;
extern TypeInfo t1785_TI;
extern TypeInfo t1717_TI;
extern TypeInfo t1784_TI;
extern TypeInfo t1786_TI;
extern TypeInfo t1712_TI;
extern TypeInfo t1713_TI;
extern TypeInfo t1711_TI;
extern TypeInfo t1715_TI;
extern TypeInfo t996_TI;
extern TypeInfo t811_TI;
extern TypeInfo t1722_TI;
extern TypeInfo t196_TI;
extern TypeInfo t5_TI;
extern TypeInfo t1720_TI;
extern TypeInfo t1719_TI;
extern TypeInfo t450_TI;
extern TypeInfo t168_TI;
#include "t1714MD.h"
#include "t1785MD.h"
#include "t1717MD.h"
#include "t1231MD.h"
#include "t1784MD.h"
#include "t1786MD.h"
#include "t1712MD.h"
#include "t1713MD.h"
#include "t1715MD.h"
#include "t996MD.h"
#include "t1722MD.h"
#include "t11MD.h"
#include "t1731MD.h"
#include "t450MD.h"
extern MethodInfo m8823_MI;
extern MethodInfo m9102_MI;
extern MethodInfo m8826_MI;
extern MethodInfo m5085_MI;
extern MethodInfo m9100_MI;
extern MethodInfo m9120_MI;
extern MethodInfo m6786_MI;
extern MethodInfo m9121_MI;
extern MethodInfo m8916_MI;
extern MethodInfo m8818_MI;
extern MethodInfo m8822_MI;
extern MethodInfo m8923_MI;
extern MethodInfo m8919_MI;
extern MethodInfo m8824_MI;
extern MethodInfo m4773_MI;
extern MethodInfo m4919_MI;
extern MethodInfo m2356_MI;
extern MethodInfo m10054_MI;
extern MethodInfo m4774_MI;
extern MethodInfo m4765_MI;
extern MethodInfo m11522_MI;
extern MethodInfo m747_MI;
extern MethodInfo m516_MI;
extern MethodInfo m11192_MI;
extern MethodInfo m4784_MI;
extern MethodInfo m7476_MI;
extern MethodInfo m8925_MI;
extern MethodInfo m11523_MI;
extern MethodInfo m2384_MI;


 t5 * m8818 (t5 * __this, MethodInfo* method){
	{
		if ((((t1710_SFs*)InitializedTypeInfo(&t1710_TI)->static_fields)->f0))
		{
			goto IL_0011;
		}
	}
	{
		t1714 * L_0 = (t1714 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1714_TI));
		m8823(L_0, &m8823_MI);
		((t1710_SFs*)InitializedTypeInfo(&t1710_TI)->static_fields)->f0 = L_0;
	}

IL_0011:
	{
		return (((t1710_SFs*)InitializedTypeInfo(&t1710_TI)->static_fields)->f0);
	}
}
extern MethodInfo m8819_MI;
 t5 * m8819 (t5 * __this, t114 * p0, t168* p1, MethodInfo* method){
	t11* V_0 = {0};
	t5 * V_1 = {0};
	t168* V_2 = {0};
	int32_t V_3 = 0;
	t1776 * V_4 = {0};
	{
		V_0 = (t11*)NULL;
		V_2 = p1;
		V_3 = 0;
		goto IL_0037;
	}

IL_0008:
	{
		int32_t L_0 = V_3;
		V_1 = (*(t5 **)(t5 **)SZArrayLdElema(V_2, L_0));
		if (((t5 *)IsInst(V_1, InitializedTypeInfo(&t2375_TI))))
		{
			goto IL_001f;
		}
	}
	{
		t1785 * L_1 = (t1785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1785_TI));
		m9102(L_1, (t11*) &_stringLiteral1908, &m9102_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001f:
	{
		if (!((t1717 *)IsInst(V_1, InitializedTypeInfo(&t1717_TI))))
		{
			goto IL_0033;
		}
	}
	{
		t11* L_2 = m8826(((t1717 *)Castclass(V_1, InitializedTypeInfo(&t1717_TI))), &m8826_MI);
		V_0 = L_2;
	}

IL_0033:
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_0037:
	{
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((t107 *)V_2)->max_length))))))
		{
			goto IL_0008;
		}
	}
	{
		if (!V_0)
		{
			goto IL_0049;
		}
	}
	{
		t5 * L_3 = m5085(NULL, p0, V_0, p1, &m5085_MI);
		return L_3;
	}

IL_0049:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1784_TI));
		t1776 * L_4 = m9100(NULL, p0, &m9100_MI);
		V_4 = L_4;
		if (!V_4)
		{
			goto IL_005e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1786_TI));
		t5 * L_5 = m9120(NULL, V_4, p1, &m9120_MI);
		return L_5;
	}

IL_005e:
	{
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6786_MI, p0);
		if (!L_6)
		{
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1786_TI));
		t5 * L_7 = m9121(NULL, p0, p1, &m9121_MI);
		return L_7;
	}

IL_006e:
	{
		return NULL;
	}
}
extern MethodInfo m8820_MI;
 t1712 * m8820 (t5 * __this, t114 * p0, t11* p1, t168* p2, MethodInfo* method){
	t1712 * V_0 = {0};
	t5 * V_1 = {0};
	t996 * V_2 = {0};
	bool V_3 = false;
	t1720 * V_4 = {0};
	t5 * V_5 = {0};
	t5 * V_6 = {0};
	t168* V_7 = {0};
	t5 * V_8 = {0};
	t168* V_9 = {0};
	int32_t V_10 = 0;
	t5 * V_11 = {0};
	t5 * V_12 = {0};
	t5 * V_13 = {0};
	t5 * V_14 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t G_B19_0 = 0;
	{
		t1712 * L_0 = (t1712 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1712_TI));
		m8916(L_0, p0, &m8916_MI);
		V_0 = L_0;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6786_MI, p0);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		t5 * L_2 = m8818(NULL, &m8818_MI);
		t1713 * L_3 = (t1713 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1713_TI));
		m8822(L_3, p1, L_2, &m8822_MI);
		VirtActionInvoker1< t5 * >::Invoke(&m8923_MI, V_0, L_3);
		m8919(V_0, 0, &m8919_MI);
		return V_0;
	}

IL_0029:
	{
		t5 * L_4 = m8818(NULL, &m8818_MI);
		V_1 = L_4;
		t1715 * L_5 = (t1715 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1715_TI));
		m8824(L_5, V_1, &m8824_MI);
		V_1 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t996_TI));
		t996 * L_6 = (t996 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t996_TI));
		m4773(L_6, &m4773_MI);
		V_2 = L_6;
		if (!p2)
		{
			goto IL_0046;
		}
	}
	{
		VirtActionInvoker1< t5 * >::Invoke(&m4919_MI, V_2, (t5 *)(t5 *)p2);
	}

IL_0046:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1722_TI));
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_7 = m2356(NULL, p1, (((t1722_SFs*)InitializedTypeInfo(&t1722_TI)->static_fields)->f3), &m2356_MI);
		V_3 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1731_TI));
		t1720 * L_8 = m10054(NULL, &m10054_MI);
		V_4 = L_8;
		if (!V_3)
		{
			goto IL_00a5;
		}
	}
	{
		t5 * L_9 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m4774_MI, V_2);
		V_6 = L_9;
	}

IL_0064:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0084;
		}

IL_0066:
		{
			t5 * L_10 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4765_MI, V_6);
			V_5 = ((t5 *)Castclass(L_10, InitializedTypeInfo(&t2375_TI)));
			bool L_11 = (bool)InterfaceFuncInvoker2< bool, t1720 *, t5 * >::Invoke(&m11522_MI, V_5, V_4, V_0);
			if (L_11)
			{
				goto IL_0084;
			}
		}

IL_0080:
		{
			V_3 = 0;
			goto IL_008d;
		}

IL_0084:
		{
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m747_MI, V_6);
			if (L_12)
			{
				goto IL_0066;
			}
		}

IL_008d:
		{
			// IL_008d: leave.s IL_00a5
			leaveInstructions[0] = 0xA5; // 1
			THROW_SENTINEL(IL_00a5);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_008f;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_008f;
	}

IL_008f:
	{ // begin finally (depth: 1)
		{
			V_13 = ((t5 *)IsInst(V_6, InitializedTypeInfo(&t132_TI)));
			if (V_13)
			{
				goto IL_009d;
			}
		}

IL_009c:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xA5:
					goto IL_00a5;
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

IL_009d:
		{
			InterfaceActionInvoker0::Invoke(&m516_MI, V_13);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xA5:
					goto IL_00a5;
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

IL_00a5:
	{
		t168* L_13 = (t168*)VirtFuncInvoker1< t168*, bool >::Invoke(&m11192_MI, p0, 1);
		V_7 = L_13;
		V_9 = V_7;
		V_10 = 0;
		goto IL_00ec;
	}

IL_00b7:
	{
		int32_t L_14 = V_10;
		V_8 = (*(t5 **)(t5 **)SZArrayLdElema(V_9, L_14));
		if (!((t5 *)IsInst(V_8, InitializedTypeInfo(&t2375_TI))))
		{
			goto IL_00e6;
		}
	}
	{
		if (!V_3)
		{
			goto IL_00db;
		}
	}
	{
		bool L_15 = (bool)InterfaceFuncInvoker2< bool, t1720 *, t5 * >::Invoke(&m11522_MI, ((t5 *)Castclass(V_8, InitializedTypeInfo(&t2375_TI))), V_4, V_0);
		G_B19_0 = ((int32_t)(L_15));
		goto IL_00dc;
	}

IL_00db:
	{
		G_B19_0 = 0;
	}

IL_00dc:
	{
		V_3 = G_B19_0;
		VirtFuncInvoker1< int32_t, t5 * >::Invoke(&m4784_MI, V_2, V_8);
	}

IL_00e6:
	{
		V_10 = ((int32_t)(V_10+1));
	}

IL_00ec:
	{
		if ((((int32_t)V_10) < ((int32_t)(((int32_t)(((t107 *)V_9)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		if (V_3)
		{
			goto IL_0144;
		}
	}
	{
		t168* L_16 = (t168*)VirtFuncInvoker0< t168* >::Invoke(&m7476_MI, V_2);
		m8925(V_0, L_16, &m8925_MI);
		t5 * L_17 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m4774_MI, V_2);
		V_12 = L_17;
	}

IL_010b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0123;
		}

IL_010d:
		{
			t5 * L_18 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4765_MI, V_12);
			V_11 = ((t5 *)Castclass(L_18, InitializedTypeInfo(&t2375_TI)));
			InterfaceActionInvoker1< t5 * >::Invoke(&m11523_MI, V_11, V_0);
		}

IL_0123:
		{
			bool L_19 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m747_MI, V_12);
			if (L_19)
			{
				goto IL_010d;
			}
		}

IL_012c:
		{
			// IL_012c: leave.s IL_0144
			leaveInstructions[0] = 0x144; // 1
			THROW_SENTINEL(IL_0144);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_012e;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_012e;
	}

IL_012e:
	{ // begin finally (depth: 1)
		{
			V_14 = ((t5 *)IsInst(V_12, InitializedTypeInfo(&t132_TI)));
			if (V_14)
			{
				goto IL_013c;
			}
		}

IL_013b:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x144:
					goto IL_0144;
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

IL_013c:
		{
			InterfaceActionInvoker0::Invoke(&m516_MI, V_14);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x144:
					goto IL_0144;
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

IL_0144:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1722_TI));
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_20 = m2384(NULL, p1, (((t1722_SFs*)InitializedTypeInfo(&t1722_TI)->static_fields)->f3), &m2384_MI);
		if (!L_20)
		{
			goto IL_0159;
		}
	}
	{
		t1713 * L_21 = (t1713 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1713_TI));
		m8822(L_21, p1, V_1, &m8822_MI);
		V_1 = L_21;
	}

IL_0159:
	{
		VirtActionInvoker1< t5 * >::Invoke(&m8923_MI, V_0, V_1);
		m8919(V_0, V_3, &m8919_MI);
		return V_0;
	}
}
extern MethodInfo m8821_MI;
 t5 * m8821 (t5 * __this, t114 * p0, MethodInfo* method){
	typedef t5 * (*m8821_ftn) (t114 *);
	static m8821_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8821_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)");
	return _il2cpp_icall_func(p0);
}
// Metadata Definition System.Runtime.Remoting.Activation.ActivationServices
extern Il2CppType t1711_0_0_17;
FieldInfo t1710_f0_FieldInfo = 
{
	"_constructionActivator", &t1711_0_0_17, &t1710_TI, offsetof(t1710_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1710_FIs[] =
{
	&t1710_f0_FieldInfo,
	NULL
};
static PropertyInfo t1710____ConstructionActivator_PropertyInfo = 
{
	&t1710_TI, "ConstructionActivator", &m8818_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1710_PIs[] =
{
	&t1710____ConstructionActivator_PropertyInfo,
	NULL
};
extern Il2CppType t1711_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8818_MI = 
{
	"get_ConstructionActivator", (methodPointerType)&m8818, &t1710_TI, &t1711_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2193, 0, 255, 0, false, false, 3598, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t1710_m8819_ParameterInfos[] = 
{
	{"type", 0, 134222185, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"activationAttributes", 1, 134222186, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8819_MI = 
{
	"CreateProxyFromAttributes", (methodPointerType)&m8819, &t1710_TI, &t5_0_0_0, RuntimeInvoker_t5_t5_t5, t1710_m8819_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 3599, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t11_0_0_0;
extern Il2CppType t11_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t1710_m8820_ParameterInfos[] = 
{
	{"type", 0, 134222187, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"activationUrl", 1, 134222188, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"activationAttributes", 2, 134222189, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t1712_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8820_MI = 
{
	"CreateConstructionCall", (methodPointerType)&m8820, &t1710_TI, &t1712_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t1710_m8820_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 3600, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
static ParameterInfo t1710_m8821_ParameterInfos[] = 
{
	{"type", 0, 134222190, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8821_MI = 
{
	"AllocateUninitializedClassInstance", (methodPointerType)&m8821, &t1710_TI, &t5_0_0_0, RuntimeInvoker_t5_t5, t1710_m8821_ParameterInfos, &EmptyCustomAttributesCache, 150, 4096, 255, 1, false, false, 3601, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1710_MIs[] =
{
	&m8818_MI,
	&m8819_MI,
	&m8820_MI,
	&m8821_MI,
	NULL
};
static MethodInfo* t1710_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1710_0_0_0;
extern Il2CppType t1710_1_0_0;
struct t1710;
TypeInfo t1710_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ActivationServices", "System.Runtime.Remoting.Activation", t1710_MIs, t1710_PIs, t1710_FIs, NULL, &t5_TI, NULL, NULL, &t1710_TI, NULL, t1710_VT, &EmptyCustomAttributesCache, &t1710_TI, &t1710_0_0_0, &t1710_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1710), 0, -1, sizeof(t1710_SFs), 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 4, 1, 1, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m460_MI;


 void m8822 (t1713 * __this, t11* p0, t5 * p1, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		__this->f0 = p0;
		__this->f1 = p1;
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Activation.AppDomainLevelActivator
extern Il2CppType t11_0_0_1;
FieldInfo t1713_f0_FieldInfo = 
{
	"_activationUrl", &t11_0_0_1, &t1713_TI, offsetof(t1713, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1711_0_0_1;
FieldInfo t1713_f1_FieldInfo = 
{
	"_next", &t1711_0_0_1, &t1713_TI, offsetof(t1713, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1713_FIs[] =
{
	&t1713_f0_FieldInfo,
	&t1713_f1_FieldInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
extern Il2CppType t1711_0_0_0;
extern Il2CppType t1711_0_0_0;
static ParameterInfo t1713_m8822_ParameterInfos[] = 
{
	{"activationUrl", 0, 134222191, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"next", 1, 134222192, &EmptyCustomAttributesCache, &t1711_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8822_MI = 
{
	".ctor", (methodPointerType)&m8822, &t1713_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t1713_m8822_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 3602, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1713_MIs[] =
{
	&m8822_MI,
	NULL
};
static MethodInfo* t1713_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
static TypeInfo* t1713_ITIs[] = 
{
	&t1711_TI,
};
static Il2CppInterfaceOffsetPair t1713_IOs[] = 
{
	{ &t1711_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1713_0_0_0;
extern Il2CppType t1713_1_0_0;
struct t1713;
TypeInfo t1713_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AppDomainLevelActivator", "System.Runtime.Remoting.Activation", t1713_MIs, NULL, t1713_FIs, NULL, &t5_TI, NULL, NULL, &t1713_TI, t1713_ITIs, t1713_VT, &EmptyCustomAttributesCache, &t1713_TI, &t1713_0_0_0, &t1713_1_0_0, t1713_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1713), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 2, 0, 0, 4, 1, 1};
#ifndef _MSC_VER
#else
#endif



 void m8823 (t1714 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Activation.ConstructionLevelActivator
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8823_MI = 
{
	".ctor", (methodPointerType)&m8823, &t1714_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3603, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1714_MIs[] =
{
	&m8823_MI,
	NULL
};
static MethodInfo* t1714_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
static TypeInfo* t1714_ITIs[] = 
{
	&t1711_TI,
};
static Il2CppInterfaceOffsetPair t1714_IOs[] = 
{
	{ &t1711_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1714_0_0_0;
extern Il2CppType t1714_1_0_0;
struct t1714;
TypeInfo t1714_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ConstructionLevelActivator", "System.Runtime.Remoting.Activation", t1714_MIs, NULL, NULL, NULL, &t5_TI, NULL, NULL, &t1714_TI, t1714_ITIs, t1714_VT, &EmptyCustomAttributesCache, &t1714_TI, &t1714_0_0_0, &t1714_1_0_0, t1714_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1714), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 1, 1};
#ifndef _MSC_VER
#else
#endif



 void m8824 (t1715 * __this, t5 * p0, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Activation.ContextLevelActivator
extern Il2CppType t1711_0_0_1;
FieldInfo t1715_f0_FieldInfo = 
{
	"m_NextActivator", &t1711_0_0_1, &t1715_TI, offsetof(t1715, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1715_FIs[] =
{
	&t1715_f0_FieldInfo,
	NULL
};
extern Il2CppType t1711_0_0_0;
static ParameterInfo t1715_m8824_ParameterInfos[] = 
{
	{"next", 0, 134222193, &EmptyCustomAttributesCache, &t1711_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8824_MI = 
{
	".ctor", (methodPointerType)&m8824, &t1715_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1715_m8824_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3604, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1715_MIs[] =
{
	&m8824_MI,
	NULL
};
static MethodInfo* t1715_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
static TypeInfo* t1715_ITIs[] = 
{
	&t1711_TI,
};
static Il2CppInterfaceOffsetPair t1715_IOs[] = 
{
	{ &t1711_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1715_0_0_0;
extern Il2CppType t1715_1_0_0;
struct t1715;
TypeInfo t1715_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ContextLevelActivator", "System.Runtime.Remoting.Activation", t1715_MIs, NULL, t1715_FIs, NULL, &t5_TI, NULL, NULL, &t1715_TI, t1715_ITIs, t1715_VT, &EmptyCustomAttributesCache, &t1715_TI, &t1715_0_0_0, &t1715_1_0_0, t1715_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1715), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 1, 1};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Runtime.Remoting.Activation.IActivator
static MethodInfo* t1711_MIs[] =
{
	NULL
};
void t1711_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1711__CustomAttributeCache = {
1,
NULL,
&t1711_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1711_1_0_0;
struct t1711;
extern CustomAttributesCache t1711__CustomAttributeCache;
TypeInfo t1711_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IActivator", "System.Runtime.Remoting.Activation", t1711_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1711_TI, NULL, NULL, &t1711__CustomAttributeCache, &t1711_TI, &t1711_0_0_0, &t1711_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Runtime.Remoting.Activation.IConstructionCallMessage
extern MethodInfo m11524_MI;
static PropertyInfo t1719____ActivationType_PropertyInfo = 
{
	&t1719_TI, "ActivationType", &m11524_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11525_MI;
static PropertyInfo t1719____ActivationTypeName_PropertyInfo = 
{
	&t1719_TI, "ActivationTypeName", &m11525_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11526_MI;
extern MethodInfo m11527_MI;
static PropertyInfo t1719____Activator_PropertyInfo = 
{
	&t1719_TI, "Activator", &m11526_MI, &m11527_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11528_MI;
static PropertyInfo t1719____CallSiteActivationAttributes_PropertyInfo = 
{
	&t1719_TI, "CallSiteActivationAttributes", &m11528_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11529_MI;
static PropertyInfo t1719____ContextProperties_PropertyInfo = 
{
	&t1719_TI, "ContextProperties", &m11529_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1719_PIs[] =
{
	&t1719____ActivationType_PropertyInfo,
	&t1719____ActivationTypeName_PropertyInfo,
	&t1719____Activator_PropertyInfo,
	&t1719____CallSiteActivationAttributes_PropertyInfo,
	&t1719____ContextProperties_PropertyInfo,
	NULL
};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11524_MI = 
{
	"get_ActivationType", NULL, &t1719_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 3605, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11525_MI = 
{
	"get_ActivationTypeName", NULL, &t1719_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, false, 3606, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1711_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11526_MI = 
{
	"get_Activator", NULL, &t1719_TI, &t1711_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 2, 0, false, false, 3607, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1711_0_0_0;
static ParameterInfo t1719_m11527_ParameterInfos[] = 
{
	{"value", 0, 134222194, &EmptyCustomAttributesCache, &t1711_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11527_MI = 
{
	"set_Activator", NULL, &t1719_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1719_m11527_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, false, 3608, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11528_MI = 
{
	"get_CallSiteActivationAttributes", NULL, &t1719_TI, &t168_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 4, 0, false, false, 3609, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1129_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11529_MI = 
{
	"get_ContextProperties", NULL, &t1719_TI, &t1129_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 5, 0, false, false, 3610, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1719_MIs[] =
{
	&m11524_MI,
	&m11525_MI,
	&m11526_MI,
	&m11527_MI,
	&m11528_MI,
	&m11529_MI,
	NULL
};
extern TypeInfo t1746_TI;
extern TypeInfo t1768_TI;
extern TypeInfo t1756_TI;
static TypeInfo* t1719_ITIs[] = 
{
	&t1746_TI,
	&t1768_TI,
	&t1756_TI,
};
void t1719_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1719__CustomAttributeCache = {
1,
NULL,
&t1719_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1719_0_0_0;
extern Il2CppType t1719_1_0_0;
struct t1719;
extern CustomAttributesCache t1719__CustomAttributeCache;
TypeInfo t1719_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IConstructionCallMessage", "System.Runtime.Remoting.Activation", t1719_MIs, t1719_PIs, NULL, NULL, NULL, NULL, NULL, &t1719_TI, t1719_ITIs, NULL, &t1719__CustomAttributeCache, &t1719_TI, &t1719_0_0_0, &t1719_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 6, 5, 0, 0, 0, 0, 3, 0};
#include "t1716.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1716_TI;
#include "t1716MD.h"

#include "t1037.h"
#include "t1735.h"
#include "t61.h"
#include "t118.h"
extern TypeInfo t1037_TI;
extern TypeInfo t1733_TI;
extern TypeInfo t1735_TI;
extern TypeInfo t61_TI;
#include "t1037MD.h"
#include "t61MD.h"
extern MethodInfo m4793_MI;
extern MethodInfo m11530_MI;
extern MethodInfo m10863_MI;
extern MethodInfo m11531_MI;
extern MethodInfo m11532_MI;
extern MethodInfo m11533_MI;


extern MethodInfo m8825_MI;
 t5 * m8825 (t1716 * __this, MethodInfo* method){
	t5 * V_0 = {0};
	{
		t5 * L_0 = m4793(__this, &m4793_MI);
		V_0 = ((t5 *)Castclass(L_0, InitializedTypeInfo(&t1733_TI)));
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m11530_MI, V_0);
		if ((((uint32_t)L_1) != ((uint32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t61_TI));
		t61  L_2 = m10863(NULL, (30.0), &m10863_MI);
		InterfaceActionInvoker1< t61  >::Invoke(&m11531_MI, V_0, L_2);
		t61  L_3 = m10863(NULL, (1.0), &m10863_MI);
		InterfaceActionInvoker1< t61  >::Invoke(&m11532_MI, V_0, L_3);
		t61  L_4 = m10863(NULL, (10.0), &m10863_MI);
		InterfaceActionInvoker1< t61  >::Invoke(&m11533_MI, V_0, L_4);
	}

IL_0051:
	{
		return V_0;
	}
}
// Metadata Definition System.Runtime.Remoting.Activation.RemoteActivator
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8825_MI = 
{
	"InitializeLifetimeService", (methodPointerType)&m8825, &t1716_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 5, 0, false, false, 3611, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1716_MIs[] =
{
	&m8825_MI,
	NULL
};
extern MethodInfo m4792_MI;
static MethodInfo* t1716_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m4792_MI,
	&m8825_MI,
};
static TypeInfo* t1716_ITIs[] = 
{
	&t1711_TI,
};
static Il2CppInterfaceOffsetPair t1716_IOs[] = 
{
	{ &t1711_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1716_0_0_0;
extern Il2CppType t1716_1_0_0;
struct t1716;
TypeInfo t1716_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RemoteActivator", "System.Runtime.Remoting.Activation", t1716_MIs, NULL, NULL, NULL, &t1037_TI, NULL, NULL, &t1716_TI, t1716_ITIs, t1716_VT, &EmptyCustomAttributesCache, &t1716_TI, &t1716_0_0_0, &t1716_1_0_0, t1716_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1716), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 6, 1, 1};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m3489_MI;


 t11* m8826 (t1717 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m8827_MI;
 bool m8827 (t1717 * __this, t5 * p0, MethodInfo* method){
	{
		if (((t1717 *)IsInst(p0, InitializedTypeInfo(&t1717_TI))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		t11* L_0 = m8826(((t1717 *)Castclass(p0, InitializedTypeInfo(&t1717_TI))), &m8826_MI);
		t11* L_1 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_2 = m2356(NULL, L_0, L_1, &m2356_MI);
		return L_2;
	}
}
extern MethodInfo m8828_MI;
 int32_t m8828 (t1717 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f1);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m3489_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8829_MI;
 void m8829 (t1717 * __this, t5 * p0, MethodInfo* method){
	{
		return;
	}
}
extern MethodInfo m8830_MI;
 bool m8830 (t1717 * __this, t1720 * p0, t5 * p1, MethodInfo* method){
	{
		return 1;
	}
}
// Metadata Definition System.Runtime.Remoting.Activation.UrlAttribute
extern Il2CppType t11_0_0_1;
FieldInfo t1717_f1_FieldInfo = 
{
	"url", &t11_0_0_1, &t1717_TI, offsetof(t1717, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1717_FIs[] =
{
	&t1717_f1_FieldInfo,
	NULL
};
static PropertyInfo t1717____UrlValue_PropertyInfo = 
{
	&t1717_TI, "UrlValue", &m8826_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1717_PIs[] =
{
	&t1717____UrlValue_PropertyInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8826_MI = 
{
	"get_UrlValue", (methodPointerType)&m8826, &t1717_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3612, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1717_m8827_ParameterInfos[] = 
{
	{"o", 0, 134222195, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8827_MI = 
{
	"Equals", (methodPointerType)&m8827, &t1717_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t1717_m8827_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 3613, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8828_MI = 
{
	"GetHashCode", (methodPointerType)&m8828, &t1717_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 3614, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1719_0_0_0;
static ParameterInfo t1717_m8829_ParameterInfos[] = 
{
	{"ctorMsg", 0, 134222196, &EmptyCustomAttributesCache, &t1719_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1717__CustomAttributeCache_m8829;
MethodInfo m8829_MI = 
{
	"GetPropertiesForNewContext", (methodPointerType)&m8829, &t1717_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1717_m8829_ParameterInfos, &t1717__CustomAttributeCache_m8829, 198, 0, 8, 1, false, false, 3615, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t1720_0_0_0;
extern Il2CppType t1719_0_0_0;
static ParameterInfo t1717_m8830_ParameterInfos[] = 
{
	{"ctx", 0, 134222197, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"msg", 1, 134222198, &EmptyCustomAttributesCache, &t1719_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1717__CustomAttributeCache_m8830;
MethodInfo m8830_MI = 
{
	"IsContextOK", (methodPointerType)&m8830, &t1717_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t1717_m8830_ParameterInfos, &t1717__CustomAttributeCache_m8830, 198, 0, 9, 2, false, false, 3616, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1717_MIs[] =
{
	&m8826_MI,
	&m8827_MI,
	&m8828_MI,
	&m8829_MI,
	&m8830_MI,
	NULL
};
extern MethodInfo m8855_MI;
static MethodInfo* t1717_VT[] =
{
	&m8827_MI,
	&m465_MI,
	&m8828_MI,
	&m467_MI,
	&m8829_MI,
	&m8830_MI,
	&m8855_MI,
	&m8855_MI,
	&m8829_MI,
	&m8830_MI,
};
extern TypeInfo t1728_TI;
static Il2CppInterfaceOffsetPair t1717_IOs[] = 
{
	{ &t2375_TI, 4},
	{ &t1728_TI, 6},
	{ &t740_TI, 4},
};
void t1717_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1717_CustomAttributesCacheGenerator_m8829(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1717_CustomAttributesCacheGenerator_m8830(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1717__CustomAttributeCache = {
1,
NULL,
&t1717_CustomAttributesCacheGenerator
};
CustomAttributesCache t1717__CustomAttributeCache_m8829 = {
1,
NULL,
&t1717_CustomAttributesCacheGenerator_m8829
};
CustomAttributesCache t1717__CustomAttributeCache_m8830 = {
1,
NULL,
&t1717_CustomAttributesCacheGenerator_m8830
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1717_0_0_0;
extern Il2CppType t1717_1_0_0;
extern TypeInfo t1718_TI;
struct t1717;
extern CustomAttributesCache t1717__CustomAttributeCache;
extern CustomAttributesCache t1717__CustomAttributeCache_m8829;
extern CustomAttributesCache t1717__CustomAttributeCache_m8830;
TypeInfo t1717_TI = 
{
	&g_mscorlib_dll_Image, NULL, "UrlAttribute", "System.Runtime.Remoting.Activation", t1717_MIs, t1717_PIs, t1717_FIs, NULL, &t1718_TI, NULL, NULL, &t1717_TI, NULL, t1717_VT, &t1717__CustomAttributeCache, &t1717_TI, &t1717_0_0_0, &t1717_1_0_0, t1717_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1717), 0, -1, 0, 0, -1, 1057025, 0, false, false, false, false, false, false, false, false, false, false, false, false, 5, 1, 1, 0, 0, 10, 0, 3};
#include "t1721.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1721_TI;
#include "t1721MD.h"

extern MethodInfo m8836_MI;


extern MethodInfo m8831_MI;
 void m8831 (t1721 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1722_TI));
		t168* L_0 = m8836(NULL, &m8836_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m8832_MI;
 t168* m8832 (t1721 * __this, MethodInfo* method){
	{
		t168* L_0 = (__this->f0);
		return L_0;
	}
}
// Metadata Definition System.Runtime.Remoting.ChannelInfo
extern Il2CppType t168_0_0_1;
FieldInfo t1721_f0_FieldInfo = 
{
	"channelData", &t168_0_0_1, &t1721_TI, offsetof(t1721, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1721_FIs[] =
{
	&t1721_f0_FieldInfo,
	NULL
};
static PropertyInfo t1721____ChannelData_PropertyInfo = 
{
	&t1721_TI, "ChannelData", &m8832_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1721_PIs[] =
{
	&t1721____ChannelData_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8831_MI = 
{
	".ctor", (methodPointerType)&m8831, &t1721_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3617, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8832_MI = 
{
	"get_ChannelData", (methodPointerType)&m8832, &t1721_TI, &t168_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 3618, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1721_MIs[] =
{
	&m8831_MI,
	&m8832_MI,
	NULL
};
static MethodInfo* t1721_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m8832_MI,
};
extern TypeInfo t1781_TI;
static TypeInfo* t1721_ITIs[] = 
{
	&t1781_TI,
};
static Il2CppInterfaceOffsetPair t1721_IOs[] = 
{
	{ &t1781_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1721_0_0_0;
extern Il2CppType t1721_1_0_0;
struct t1721;
TypeInfo t1721_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ChannelInfo", "System.Runtime.Remoting", t1721_MIs, t1721_PIs, t1721_FIs, NULL, &t5_TI, NULL, NULL, &t1721_TI, t1721_ITIs, t1721_VT, &EmptyCustomAttributesCache, &t1721_TI, &t1721_0_0_0, &t1721_1_0_0, t1721_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1721), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, 2, 1, 1, 0, 0, 5, 1, 1};
#ifndef _MSC_VER
#else
#endif

#include "t1723.h"
#include "t484.h"
extern TypeInfo t1723_TI;
extern TypeInfo t585_TI;
extern TypeInfo t484_TI;
extern TypeInfo t2376_TI;
extern TypeInfo t1724_TI;
extern TypeInfo t2377_TI;
extern TypeInfo t1129_TI;
#include "t1723MD.h"
#include "t484MD.h"
#include "t1186MD.h"
extern MethodInfo m8860_MI;
extern MethodInfo m8835_MI;
extern MethodInfo m3596_MI;
extern MethodInfo m11534_MI;
extern MethodInfo m462_MI;
extern MethodInfo m11535_MI;
extern MethodInfo m4970_MI;
extern MethodInfo m4795_MI;
extern MethodInfo m4771_MI;
extern MethodInfo m2328_MI;
extern MethodInfo m11536_MI;
extern MethodInfo m4769_MI;
extern MethodInfo m4951_MI;
extern MethodInfo m11018_MI;
extern MethodInfo m11537_MI;
extern MethodInfo m4796_MI;
extern MethodInfo m11538_MI;


extern MethodInfo m8833_MI;
 void m8833 (t5 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t996_TI));
		t996 * L_0 = (t996 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t996_TI));
		m4773(L_0, &m4773_MI);
		((t1722_SFs*)InitializedTypeInfo(&t1722_TI)->static_fields)->f0 = L_0;
		t996 * L_1 = (t996 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t996_TI));
		m4773(L_1, &m4773_MI);
		((t1722_SFs*)InitializedTypeInfo(&t1722_TI)->static_fields)->f1 = L_1;
		t1723 * L_2 = (t1723 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1723_TI));
		m8860(L_2, &m8860_MI);
		((t1722_SFs*)InitializedTypeInfo(&t1722_TI)->static_fields)->f2 = L_2;
		((t1722_SFs*)InitializedTypeInfo(&t1722_TI)->static_fields)->f3 = (t11*) &_stringLiteral1909;
		t585* L_3 = ((t585*)SZArrayNew(InitializedTypeInfo(&t585_TI), 2));
		ArrayElementTypeCheck (L_3, (t11*) &_stringLiteral1910);
		*((t11**)(t11**)SZArrayLdElema(L_3, 0)) = (t11*)(t11*) &_stringLiteral1910;
		t585* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t11*) &_stringLiteral1911);
		*((t11**)(t11**)SZArrayLdElema(L_4, 1)) = (t11*)(t11*) &_stringLiteral1911;
		((t1722_SFs*)InitializedTypeInfo(&t1722_TI)->static_fields)->f4 = (t5 *)L_4;
		return;
	}
}
extern MethodInfo m8834_MI;
 void m8834 (t5 * __this, t5 * p0, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1722_TI));
		m8835(NULL, p0, 0, &m8835_MI);
		return;
	}
}
 void m8835 (t5 * __this, t5 * p0, bool p1, MethodInfo* method){
	t5 * V_0 = {0};
	t5 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t5 * V_4 = {0};
	t5 * V_5 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3596(L_0, (t11*) &_stringLiteral1912, &m3596_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		if (!p1)
		{
			goto IL_0038;
		}
	}
	{
		V_1 = ((t5 *)IsInst(p0, InitializedTypeInfo(&t2376_TI)));
		if (V_1)
		{
			goto IL_0031;
		}
	}
	{
		t11* L_1 = (t11*)InterfaceFuncInvoker0< t11* >::Invoke(&m11534_MI, p0);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_2 = m462(NULL, (t11*) &_stringLiteral1913, L_1, &m462_MI);
		t1785 * L_3 = (t1785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1785_TI));
		m9102(L_3, L_2, &m9102_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0031:
	{
		InterfaceActionInvoker1< bool >::Invoke(&m11535_MI, V_1, 1);
	}

IL_0038:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1722_TI));
		t5 * L_4 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m4970_MI, (((t1722_SFs*)InitializedTypeInfo(&t1722_TI)->static_fields)->f0));
		V_0 = L_4;
		m4795(NULL, V_0, &m4795_MI);
	}

IL_0049:
	try
	{ // begin try (depth: 1)
		{
			V_2 = (-1);
			V_3 = 0;
			goto IL_00bc;
		}

IL_004f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1722_TI));
			t5 * L_5 = (t5 *)VirtFuncInvoker1< t5 *, int32_t >::Invoke(&m4771_MI, (((t1722_SFs*)InitializedTypeInfo(&t1722_TI)->static_fields)->f0), V_3);
			V_4 = ((t5 *)Castclass(L_5, InitializedTypeInfo(&t1724_TI)));
			t11* L_6 = (t11*)InterfaceFuncInvoker0< t11* >::Invoke(&m11534_MI, V_4);
			t11* L_7 = (t11*)InterfaceFuncInvoker0< t11* >::Invoke(&m11534_MI, p0);
			IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
			bool L_8 = m2356(NULL, L_6, L_7, &m2356_MI);
			if (!L_8)
			{
				goto IL_00a3;
			}
		}

IL_0075:
		{
			t11* L_9 = (t11*)InterfaceFuncInvoker0< t11* >::Invoke(&m11534_MI, p0);
			IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
			bool L_10 = m2384(NULL, L_9, (((t11_SFs*)(&t11_TI)->static_fields)->f2), &m2384_MI);
			if (!L_10)
			{
				goto IL_00a3;
			}
		}

IL_0087:
		{
			t11* L_11 = (t11*)InterfaceFuncInvoker0< t11* >::Invoke(&m11534_MI, V_4);
			IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
			t11* L_12 = m2328(NULL, (t11*) &_stringLiteral1914, L_11, (t11*) &_stringLiteral1915, &m2328_MI);
			t1785 * L_13 = (t1785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1785_TI));
			m9102(L_13, L_12, &m9102_MI);
			il2cpp_codegen_raise_exception(L_13);
		}

IL_00a3:
		{
			int32_t L_14 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m11536_MI, V_4);
			int32_t L_15 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m11536_MI, p0);
			if ((((int32_t)L_14) >= ((int32_t)L_15)))
			{
				goto IL_00b8;
			}
		}

IL_00b2:
		{
			if ((((uint32_t)V_2) != ((uint32_t)(-1))))
			{
				goto IL_00b8;
			}
		}

IL_00b6:
		{
			V_2 = V_3;
		}

IL_00b8:
		{
			V_3 = ((int32_t)(V_3+1));
		}

IL_00bc:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1722_TI));
			int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4769_MI, (((t1722_SFs*)InitializedTypeInfo(&t1722_TI)->static_fields)->f0));
			if ((((int32_t)V_3) < ((int32_t)L_16)))
			{
				goto IL_004f;
			}
		}

IL_00c9:
		{
			if ((((int32_t)V_2) == ((int32_t)(-1))))
			{
				goto IL_00db;
			}
		}

IL_00cd:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1722_TI));
			VirtActionInvoker2< int32_t, t5 * >::Invoke(&m4951_MI, (((t1722_SFs*)InitializedTypeInfo(&t1722_TI)->static_fields)->f0), V_2, p0);
			goto IL_00e7;
		}

IL_00db:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1722_TI));
			VirtFuncInvoker1< int32_t, t5 * >::Invoke(&m4784_MI, (((t1722_SFs*)InitializedTypeInfo(&t1722_TI)->static_fields)->f0), p0);
		}

IL_00e7:
		{
			V_5 = ((t5 *)IsInst(p0, InitializedTypeInfo(&t2377_TI)));
			if (!V_5)
			{
				goto IL_0112;
			}
		}

IL_00f3:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1722_TI));
			t114 * L_17 = m531(p0, &m531_MI);
			t11* L_18 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m6831_MI, L_17);
			bool L_19 = (bool)InterfaceFuncInvoker1< bool, t5 * >::Invoke(&m11018_MI, (((t1722_SFs*)InitializedTypeInfo(&t1722_TI)->static_fields)->f4), L_18);
			if (!L_19)
			{
				goto IL_0112;
			}
		}

IL_010a:
		{
			InterfaceActionInvoker1< t5 * >::Invoke(&m11537_MI, V_5, NULL);
		}

IL_0112:
		{
			// IL_0112: leave.s IL_011b
			leaveInstructions[0] = 0x11B; // 1
			THROW_SENTINEL(IL_011b);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0114;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_0114;
	}

IL_0114:
	{ // begin finally (depth: 1)
		m4796(NULL, V_0, &m4796_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x11B:
				goto IL_011b;
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
	} // end finally (depth: 1)

IL_011b:
	{
		return;
	}
}
 t168* m8836 (t5 * __this, MethodInfo* method){
	t996 * V_0 = {0};
	t5 * V_1 = {0};
	t5 * V_2 = {0};
	t5 * V_3 = {0};
	t5 * V_4 = {0};
	t5 * V_5 = {0};
	t5 * V_6 = {0};
	int32_t leaveInstructions[2] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t996_TI));
		t996 * L_0 = (t996 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t996_TI));
		m4773(L_0, &m4773_MI);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1722_TI));
		t5 * L_1 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m4970_MI, (((t1722_SFs*)InitializedTypeInfo(&t1722_TI)->static_fields)->f0));
		V_1 = L_1;
		m4795(NULL, V_1, &m4795_MI);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1722_TI));
			t5 * L_2 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m4774_MI, (((t1722_SFs*)InitializedTypeInfo(&t1722_TI)->static_fields)->f0));
			V_3 = L_2;
		}

IL_0022:
		try
		{ // begin try (depth: 2)
			{
				goto IL_004d;
			}

IL_0024:
			{
				t5 * L_3 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4765_MI, V_3);
				V_2 = L_3;
				V_4 = ((t5 *)IsInst(V_2, InitializedTypeInfo(&t2377_TI)));
				if (!V_4)
				{
					goto IL_004d;
				}
			}

IL_0037:
			{
				t5 * L_4 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m11538_MI, V_4);
				V_5 = L_4;
				if (!V_5)
				{
					goto IL_004d;
				}
			}

IL_0044:
			{
				VirtFuncInvoker1< int32_t, t5 * >::Invoke(&m4784_MI, V_0, V_5);
			}

IL_004d:
			{
				bool L_5 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m747_MI, V_3);
				if (L_5)
				{
					goto IL_0024;
				}
			}

IL_0055:
			{
				// IL_0055: leave.s IL_006c
				leaveInstructions[1] = 0x6C; // 2
				THROW_SENTINEL(IL_006c);
				// finally target depth: 2
			}
		} // end try (depth: 2)
		catch(Il2CppFinallySentinel& e)
		{
			goto IL_0057;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (t142 *)e.ex;
			goto IL_0057;
		}

IL_0057:
		{ // begin finally (depth: 2)
			{
				V_6 = ((t5 *)IsInst(V_3, InitializedTypeInfo(&t132_TI)));
				if (V_6)
				{
					goto IL_0064;
				}
			}

IL_0063:
			{
				// finally node depth: 2
				switch (leaveInstructions[1])
				{
					case 0x6C:
						goto IL_006c;
					default:
					{
						#if IL2CPP_DEBUG
						assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 2, __last_unhandled_exception has not been set");
						#endif
						t142 * _tmp_exception_local = __last_unhandled_exception;
						__last_unhandled_exception = 0;
						il2cpp_codegen_raise_exception(_tmp_exception_local);
					}
				}
			}

IL_0064:
			{
				InterfaceActionInvoker0::Invoke(&m516_MI, V_6);
				// finally node depth: 2
				switch (leaveInstructions[1])
				{
					case 0x6C:
						goto IL_006c;
					default:
					{
						#if IL2CPP_DEBUG
						assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 2, __last_unhandled_exception has not been set");
						#endif
						t142 * _tmp_exception_local = __last_unhandled_exception;
						__last_unhandled_exception = 0;
						il2cpp_codegen_raise_exception(_tmp_exception_local);
					}
				}
			}
		} // end finally (depth: 2)

IL_006c:
		{
			// IL_006c: leave.s IL_0075
			leaveInstructions[0] = 0x75; // 1
			THROW_SENTINEL(IL_0075);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_006e;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_006e;
	}

IL_006e:
	{ // begin finally (depth: 1)
		m4796(NULL, V_1, &m4796_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x75:
				goto IL_0075;
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
	} // end finally (depth: 1)

IL_0075:
	{
		t168* L_6 = (t168*)VirtFuncInvoker0< t168* >::Invoke(&m7476_MI, V_0);
		return L_6;
	}
}
// Metadata Definition System.Runtime.Remoting.Channels.ChannelServices
extern Il2CppType t996_0_0_17;
FieldInfo t1722_f0_FieldInfo = 
{
	"registeredChannels", &t996_0_0_17, &t1722_TI, offsetof(t1722_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t996_0_0_17;
FieldInfo t1722_f1_FieldInfo = 
{
	"delayedClientChannels", &t996_0_0_17, &t1722_TI, offsetof(t1722_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1723_0_0_17;
FieldInfo t1722_f2_FieldInfo = 
{
	"_crossContextSink", &t1723_0_0_17, &t1722_TI, offsetof(t1722_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_19;
FieldInfo t1722_f3_FieldInfo = 
{
	"CrossContextUrl", &t11_0_0_19, &t1722_TI, offsetof(t1722_SFs, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1129_0_0_17;
FieldInfo t1722_f4_FieldInfo = 
{
	"oldStartModeTypes", &t1129_0_0_17, &t1722_TI, offsetof(t1722_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1722_FIs[] =
{
	&t1722_f0_FieldInfo,
	&t1722_f1_FieldInfo,
	&t1722_f2_FieldInfo,
	&t1722_f3_FieldInfo,
	&t1722_f4_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8833_MI = 
{
	".cctor", (methodPointerType)&m8833, &t1722_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3619, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1724_0_0_0;
extern Il2CppType t1724_0_0_0;
static ParameterInfo t1722_m8834_ParameterInfos[] = 
{
	{"chnl", 0, 134222199, &EmptyCustomAttributesCache, &t1724_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1722__CustomAttributeCache_m8834;
MethodInfo m8834_MI = 
{
	"RegisterChannel", (methodPointerType)&m8834, &t1722_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1722_m8834_ParameterInfos, &t1722__CustomAttributeCache_m8834, 150, 0, 255, 1, false, false, 3620, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1724_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1722_m8835_ParameterInfos[] = 
{
	{"chnl", 0, 134222200, &EmptyCustomAttributesCache, &t1724_0_0_0},
	{"ensureSecurity", 1, 134222201, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8835_MI = 
{
	"RegisterChannel", (methodPointerType)&m8835, &t1722_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t111, t1722_m8835_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 3621, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8836_MI = 
{
	"GetCurrentChannelInfo", (methodPointerType)&m8836, &t1722_TI, &t168_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 147, 0, 255, 0, false, false, 3622, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1722_MIs[] =
{
	&m8833_MI,
	&m8834_MI,
	&m8835_MI,
	&m8836_MI,
	NULL
};
static MethodInfo* t1722_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t1722_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t475_TI;
#include "t475.h"
#include "t475MD.h"
extern MethodInfo m3484_MI;
void t1722_CustomAttributesCacheGenerator_m8834(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t475 * tmp;
		tmp = (t475 *)il2cpp_codegen_object_new (&t475_TI);
		m3484(tmp, il2cpp_codegen_string_new_wrapper("Use RegisterChannel(IChannel,Boolean)"), &m3484_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1722__CustomAttributeCache = {
1,
NULL,
&t1722_CustomAttributesCacheGenerator
};
CustomAttributesCache t1722__CustomAttributeCache_m8834 = {
1,
NULL,
&t1722_CustomAttributesCacheGenerator_m8834
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1722_0_0_0;
extern Il2CppType t1722_1_0_0;
struct t1722;
extern CustomAttributesCache t1722__CustomAttributeCache;
extern CustomAttributesCache t1722__CustomAttributeCache_m8834;
TypeInfo t1722_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ChannelServices", "System.Runtime.Remoting.Channels", t1722_MIs, NULL, t1722_FIs, NULL, &t5_TI, NULL, NULL, &t1722_TI, NULL, t1722_VT, &t1722__CustomAttributeCache, &t1722_TI, &t1722_0_0_0, &t1722_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1722), 0, -1, sizeof(t1722_SFs), 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, true, false, false, 4, 0, 5, 0, 0, 4, 0, 0};
#include "t1725.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1725_TI;
#include "t1725MD.h"

extern MethodInfo m9099_MI;


extern MethodInfo m8837_MI;
 void m8837 (t1725 * __this, int32_t p0, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		int32_t L_0 = 0;
		t5 * L_1 = Box(InitializedTypeInfo(&t110_TI), &L_0);
		__this->f0 = L_1;
		__this->f1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1784_TI));
		t11* L_2 = m9099(NULL, &m9099_MI);
		__this->f2 = L_2;
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Channels.CrossAppDomainData
extern Il2CppType t5_0_0_1;
FieldInfo t1725_f0_FieldInfo = 
{
	"_ContextID", &t5_0_0_1, &t1725_TI, offsetof(t1725, f0), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1725_f1_FieldInfo = 
{
	"_DomainID", &t110_0_0_1, &t1725_TI, offsetof(t1725, f1), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1725_f2_FieldInfo = 
{
	"_processGuid", &t11_0_0_1, &t1725_TI, offsetof(t1725, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1725_FIs[] =
{
	&t1725_f0_FieldInfo,
	&t1725_f1_FieldInfo,
	&t1725_f2_FieldInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1725_m8837_ParameterInfos[] = 
{
	{"domainId", 0, 134222202, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8837_MI = 
{
	".ctor", (methodPointerType)&m8837, &t1725_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1725_m8837_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 3623, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1725_MIs[] =
{
	&m8837_MI,
	NULL
};
static MethodInfo* t1725_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1725_0_0_0;
extern Il2CppType t1725_1_0_0;
struct t1725;
TypeInfo t1725_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CrossAppDomainData", "System.Runtime.Remoting.Channels", t1725_MIs, NULL, t1725_FIs, NULL, &t5_TI, NULL, NULL, &t1725_TI, NULL, t1725_VT, &EmptyCustomAttributesCache, &t1725_TI, &t1725_0_0_0, &t1725_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1725), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 3, 0, 0, 4, 0, 0};
#include "t1726.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1726_TI;
#include "t1726MD.h"

extern MethodInfo m10058_MI;
extern MethodInfo m8838_MI;


 void m8838 (t1726 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m8839_MI;
 void m8839 (t5 * __this, MethodInfo* method){
	{
		t5 * L_0 = (t5 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t5_TI));
		m460(L_0, &m460_MI);
		((t1726_SFs*)InitializedTypeInfo(&t1726_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m8840_MI;
 void m8840 (t5 * __this, MethodInfo* method){
	t5 * V_0 = {0};
	t1726 * V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1726_TI));
		V_0 = (((t1726_SFs*)InitializedTypeInfo(&t1726_TI)->static_fields)->f0);
		m4795(NULL, V_0, &m4795_MI);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1726_TI));
		t1726 * L_0 = (t1726 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1726_TI));
		m8838(L_0, &m8838_MI);
		V_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1722_TI));
		m8834(NULL, V_1, &m8834_MI);
		// IL_0018: leave.s IL_0021
		leaveInstructions[0] = 0x21; // 1
		THROW_SENTINEL(IL_0021);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_001a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_001a;
	}

IL_001a:
	{ // begin finally (depth: 1)
		m4796(NULL, V_0, &m4796_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x21:
				goto IL_0021;
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
	} // end finally (depth: 1)

IL_0021:
	{
		return;
	}
}
extern MethodInfo m8841_MI;
 t11* m8841 (t1726 * __this, MethodInfo* method){
	{
		return (t11*) &_stringLiteral1916;
	}
}
extern MethodInfo m8842_MI;
 int32_t m8842 (t1726 * __this, MethodInfo* method){
	{
		return ((int32_t)100);
	}
}
extern MethodInfo m8843_MI;
 t5 * m8843 (t1726 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1731_TI));
		int32_t L_0 = m10058(NULL, &m10058_MI);
		t1725 * L_1 = (t1725 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1725_TI));
		m8837(L_1, L_0, &m8837_MI);
		return L_1;
	}
}
extern MethodInfo m8844_MI;
 void m8844 (t1726 * __this, t5 * p0, MethodInfo* method){
	{
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Channels.CrossAppDomainChannel
extern Il2CppType t5_0_0_17;
FieldInfo t1726_f0_FieldInfo = 
{
	"s_lock", &t5_0_0_17, &t1726_TI, offsetof(t1726_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1726_FIs[] =
{
	&t1726_f0_FieldInfo,
	NULL
};
static PropertyInfo t1726____ChannelName_PropertyInfo = 
{
	&t1726_TI, "ChannelName", &m8841_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1726____ChannelPriority_PropertyInfo = 
{
	&t1726_TI, "ChannelPriority", &m8842_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1726____ChannelData_PropertyInfo = 
{
	&t1726_TI, "ChannelData", &m8843_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1726_PIs[] =
{
	&t1726____ChannelName_PropertyInfo,
	&t1726____ChannelPriority_PropertyInfo,
	&t1726____ChannelData_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8838_MI = 
{
	".ctor", (methodPointerType)&m8838, &t1726_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3624, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8839_MI = 
{
	".cctor", (methodPointerType)&m8839, &t1726_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3625, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8840_MI = 
{
	"RegisterCrossAppDomainChannel", (methodPointerType)&m8840, &t1726_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 147, 0, 255, 0, false, false, 3626, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8841_MI = 
{
	"get_ChannelName", (methodPointerType)&m8841, &t1726_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2502, 0, 8, 0, false, false, 3627, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8842_MI = 
{
	"get_ChannelPriority", (methodPointerType)&m8842, &t1726_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 3628, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8843_MI = 
{
	"get_ChannelData", (methodPointerType)&m8843, &t1726_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2502, 0, 10, 0, false, false, 3629, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1726_m8844_ParameterInfos[] = 
{
	{"data", 0, 134222203, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8844_MI = 
{
	"StartListening", (methodPointerType)&m8844, &t1726_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1726_m8844_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 11, 1, false, false, 3630, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1726_MIs[] =
{
	&m8838_MI,
	&m8839_MI,
	&m8840_MI,
	&m8841_MI,
	&m8842_MI,
	&m8843_MI,
	&m8844_MI,
	NULL
};
static MethodInfo* t1726_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m8841_MI,
	&m8842_MI,
	&m8843_MI,
	&m8844_MI,
	&m8841_MI,
	&m8842_MI,
	&m8843_MI,
	&m8844_MI,
};
extern TypeInfo t2378_TI;
static TypeInfo* t1726_ITIs[] = 
{
	&t1724_TI,
	&t2377_TI,
	&t2378_TI,
};
static Il2CppInterfaceOffsetPair t1726_IOs[] = 
{
	{ &t1724_TI, 4},
	{ &t2377_TI, 6},
	{ &t2378_TI, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1726_0_0_0;
extern Il2CppType t1726_1_0_0;
struct t1726;
TypeInfo t1726_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CrossAppDomainChannel", "System.Runtime.Remoting.Channels", t1726_MIs, t1726_PIs, t1726_FIs, NULL, &t5_TI, NULL, NULL, &t1726_TI, t1726_ITIs, t1726_VT, &EmptyCustomAttributesCache, &t1726_TI, &t1726_0_0_0, &t1726_1_0_0, t1726_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1726), 0, -1, sizeof(t1726_SFs), 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, true, false, false, 7, 3, 1, 0, 0, 12, 3, 3};
#include "t1727.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1727_TI;
#include "t1727MD.h"

#include "t984.h"
#include "t115.h"
#include "t768.h"
extern TypeInfo t984_TI;
extern TypeInfo t768_TI;
#include "t984MD.h"
extern Il2CppType t1727_0_0_0;
extern MethodInfo m5003_MI;
extern MethodInfo m532_MI;
extern MethodInfo m6815_MI;


extern MethodInfo m8845_MI;
 void m8845 (t5 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t984_TI));
		t984 * L_0 = (t984 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t984_TI));
		m5003(L_0, &m5003_MI);
		((t1727_SFs*)InitializedTypeInfo(&t1727_TI)->static_fields)->f0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_1 = m532(NULL, LoadTypeToken(&t1727_0_0_0), &m532_MI);
		t695 * L_2 = (t695 *)VirtFuncInvoker2< t695 *, t11*, int32_t >::Invoke(&m6815_MI, L_1, (t11*) &_stringLiteral1917, ((int32_t)40));
		((t1727_SFs*)InitializedTypeInfo(&t1727_TI)->static_fields)->f1 = L_2;
		return;
	}
}
extern MethodInfo m8846_MI;
 int32_t m8846 (t1727 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
// Metadata Definition System.Runtime.Remoting.Channels.CrossAppDomainSink
extern Il2CppType t984_0_0_17;
FieldInfo t1727_f0_FieldInfo = 
{
	"s_sinks", &t984_0_0_17, &t1727_TI, offsetof(t1727_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t695_0_0_17;
FieldInfo t1727_f1_FieldInfo = 
{
	"processMessageMethod", &t695_0_0_17, &t1727_TI, offsetof(t1727_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1727_f2_FieldInfo = 
{
	"_domainID", &t110_0_0_1, &t1727_TI, offsetof(t1727, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1727_FIs[] =
{
	&t1727_f0_FieldInfo,
	&t1727_f1_FieldInfo,
	&t1727_f2_FieldInfo,
	NULL
};
static PropertyInfo t1727____TargetDomainId_PropertyInfo = 
{
	&t1727_TI, "TargetDomainId", &m8846_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1727_PIs[] =
{
	&t1727____TargetDomainId_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8845_MI = 
{
	".cctor", (methodPointerType)&m8845, &t1727_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3631, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8846_MI = 
{
	"get_TargetDomainId", (methodPointerType)&m8846, &t1727_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 3632, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1727_MIs[] =
{
	&m8845_MI,
	&m8846_MI,
	NULL
};
static MethodInfo* t1727_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
extern TypeInfo t1232_TI;
static TypeInfo* t1727_ITIs[] = 
{
	&t1232_TI,
};
static Il2CppInterfaceOffsetPair t1727_IOs[] = 
{
	{ &t1232_TI, 4},
};
extern TypeInfo t1430_TI;
#include "t1430.h"
#include "t1430MD.h"
extern MethodInfo m6881_MI;
void t1727_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1430 * tmp;
		tmp = (t1430 *)il2cpp_codegen_object_new (&t1430_TI);
		m6881(tmp, il2cpp_codegen_string_new_wrapper("Handle domain unloading?"), &m6881_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1727__CustomAttributeCache = {
1,
NULL,
&t1727_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1727_1_0_0;
struct t1727;
extern CustomAttributesCache t1727__CustomAttributeCache;
TypeInfo t1727_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CrossAppDomainSink", "System.Runtime.Remoting.Channels", t1727_MIs, t1727_PIs, t1727_FIs, NULL, &t5_TI, NULL, NULL, &t1727_TI, t1727_ITIs, t1727_VT, &t1727__CustomAttributeCache, &t1727_TI, &t1727_0_0_0, &t1727_1_0_0, t1727_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1727), 0, -1, sizeof(t1727_SFs), 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, true, false, false, 2, 1, 3, 0, 0, 4, 1, 1};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Runtime.Remoting.Channels.IChannel
static PropertyInfo t1724____ChannelName_PropertyInfo = 
{
	&t1724_TI, "ChannelName", &m11534_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1724____ChannelPriority_PropertyInfo = 
{
	&t1724_TI, "ChannelPriority", &m11536_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1724_PIs[] =
{
	&t1724____ChannelName_PropertyInfo,
	&t1724____ChannelPriority_PropertyInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11534_MI = 
{
	"get_ChannelName", NULL, &t1724_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 3633, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m11536_MI = 
{
	"get_ChannelPriority", NULL, &t1724_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, false, 3634, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1724_MIs[] =
{
	&m11534_MI,
	&m11536_MI,
	NULL
};
void t1724_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1724__CustomAttributeCache = {
1,
NULL,
&t1724_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1724_1_0_0;
struct t1724;
extern CustomAttributesCache t1724__CustomAttributeCache;
TypeInfo t1724_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IChannel", "System.Runtime.Remoting.Channels", t1724_MIs, t1724_PIs, NULL, NULL, NULL, NULL, NULL, &t1724_TI, NULL, NULL, &t1724__CustomAttributeCache, &t1724_TI, &t1724_0_0_0, &t1724_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 2, 2, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Runtime.Remoting.Channels.IChannelReceiver
static PropertyInfo t2377____ChannelData_PropertyInfo = 
{
	&t2377_TI, "ChannelData", &m11538_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2377_PIs[] =
{
	&t2377____ChannelData_PropertyInfo,
	NULL
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11538_MI = 
{
	"get_ChannelData", NULL, &t2377_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 3635, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2377_m11537_ParameterInfos[] = 
{
	{"data", 0, 134222204, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11537_MI = 
{
	"StartListening", NULL, &t2377_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2377_m11537_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, false, 3636, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2377_MIs[] =
{
	&m11538_MI,
	&m11537_MI,
	NULL
};
static TypeInfo* t2377_ITIs[] = 
{
	&t1724_TI,
};
void t2377_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2377__CustomAttributeCache = {
1,
NULL,
&t2377_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2377_0_0_0;
extern Il2CppType t2377_1_0_0;
struct t2377;
extern CustomAttributesCache t2377__CustomAttributeCache;
TypeInfo t2377_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IChannelReceiver", "System.Runtime.Remoting.Channels", t2377_MIs, t2377_PIs, NULL, NULL, NULL, NULL, NULL, &t2377_TI, t2377_ITIs, NULL, &t2377__CustomAttributeCache, &t2377_TI, &t2377_0_0_0, &t2377_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 2, 1, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Runtime.Remoting.Channels.IChannelSender
static MethodInfo* t2378_MIs[] =
{
	NULL
};
static TypeInfo* t2378_ITIs[] = 
{
	&t1724_TI,
};
void t2378_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2378__CustomAttributeCache = {
1,
NULL,
&t2378_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2378_0_0_0;
extern Il2CppType t2378_1_0_0;
struct t2378;
extern CustomAttributesCache t2378__CustomAttributeCache;
TypeInfo t2378_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IChannelSender", "System.Runtime.Remoting.Channels", t2378_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2378_TI, t2378_ITIs, NULL, &t2378__CustomAttributeCache, &t2378_TI, &t2378_0_0_0, &t2378_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Runtime.Remoting.Channels.ISecurableChannel
static PropertyInfo t2376____IsSecured_PropertyInfo = 
{
	&t2376_TI, "IsSecured", NULL, &m11535_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2376_PIs[] =
{
	&t2376____IsSecured_PropertyInfo,
	NULL
};
extern Il2CppType t108_0_0_0;
static ParameterInfo t2376_m11535_ParameterInfos[] = 
{
	{"value", 0, 134222205, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m11535_MI = 
{
	"set_IsSecured", NULL, &t2376_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t2376_m11535_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 0, 1, false, false, 3637, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2376_MIs[] =
{
	&m11535_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2376_0_0_0;
extern Il2CppType t2376_1_0_0;
struct t2376;
TypeInfo t2376_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ISecurableChannel", "System.Runtime.Remoting.Channels", t2376_MIs, t2376_PIs, NULL, NULL, NULL, NULL, NULL, &t2376_TI, NULL, NULL, &EmptyCustomAttributesCache, &t2376_TI, &t2376_0_0_0, &t2376_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
#include "t1720MD.h"

#include "t1750.h"
extern TypeInfo t1750_TI;
extern TypeInfo t2379_TI;
#include "t1895MD.h"
#include "t1750MD.h"
extern MethodInfo m10142_MI;
extern MethodInfo m11539_MI;
extern MethodInfo m1972_MI;
extern MethodInfo m11540_MI;


extern MethodInfo m8847_MI;
 void m8847 (t5 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t984_TI));
		t984 * L_0 = (t984 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t984_TI));
		m5003(L_0, &m5003_MI);
		((t1720_SFs*)InitializedTypeInfo(&t1720_TI)->static_fields)->f2 = L_0;
		return;
	}
}
extern MethodInfo m8848_MI;
 void m8848 (t1720 * __this, MethodInfo* method){
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		// IL_0000: leave.s IL_0009
		leaveInstructions[0] = 0x9; // 1
		THROW_SENTINEL(IL_0009);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0002;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_0002;
	}

IL_0002:
	{ // begin finally (depth: 1)
		m465(__this, &m465_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x9:
				goto IL_0009;
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
	} // end finally (depth: 1)

IL_0009:
	{
		return;
	}
}
extern MethodInfo m8849_MI;
 t1720 * m8849 (t5 * __this, MethodInfo* method){
	{
		t1720 * L_0 = m10142(NULL, &m10142_MI);
		return L_0;
	}
}
extern MethodInfo m8850_MI;
 bool m8850 (t1720 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f0);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m8851_MI;
 t5 * m8851 (t1720 * __this, t11* p0, MethodInfo* method){
	t5 * V_0 = {0};
	t5 * V_1 = {0};
	t5 * V_2 = {0};
	t5 * V_3 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t996 * L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (t5 *)NULL;
	}

IL_000a:
	{
		t996 * L_1 = (__this->f1);
		t5 * L_2 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m4774_MI, L_1);
		V_1 = L_2;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0036;
		}

IL_0018:
		{
			t5 * L_3 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4765_MI, V_1);
			V_0 = ((t5 *)Castclass(L_3, InitializedTypeInfo(&t1728_TI)));
			t11* L_4 = (t11*)InterfaceFuncInvoker0< t11* >::Invoke(&m11539_MI, V_0);
			IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
			bool L_5 = m2356(NULL, L_4, p0, &m2356_MI);
			if (!L_5)
			{
				goto IL_0036;
			}
		}

IL_0032:
		{
			V_2 = V_0;
			// IL_0034: leave.s IL_0054
			leaveInstructions[0] = 0x54; // 1
			THROW_SENTINEL(IL_0054);
			// finally target depth: 1
		}

IL_0036:
		{
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m747_MI, V_1);
			if (L_6)
			{
				goto IL_0018;
			}
		}

IL_003e:
		{
			// IL_003e: leave.s IL_0052
			leaveInstructions[0] = 0x52; // 1
			THROW_SENTINEL(IL_0052);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0040;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_0040;
	}

IL_0040:
	{ // begin finally (depth: 1)
		{
			V_3 = ((t5 *)IsInst(V_1, InitializedTypeInfo(&t132_TI)));
			if (V_3)
			{
				goto IL_004b;
			}
		}

IL_004a:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x54:
					goto IL_0054;
				case 0x52:
					goto IL_0052;
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

IL_004b:
		{
			InterfaceActionInvoker0::Invoke(&m516_MI, V_3);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x54:
					goto IL_0054;
				case 0x52:
					goto IL_0052;
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

IL_0052:
	{
		return (t5 *)NULL;
	}

IL_0054:
	{
		return V_2;
	}
}
extern MethodInfo m8852_MI;
 t11* m8852 (t1720 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f0);
		int32_t L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t110_TI), &L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_3 = m1972(NULL, (t11*) &_stringLiteral1918, L_2, &m1972_MI);
		return L_3;
	}
}
extern MethodInfo m8853_MI;
 t5 * m8853 (t1720 * __this, t1037 * p0, MethodInfo* method){
	t5 * V_0 = {0};
	t5 * V_1 = {0};
	t5 * V_2 = {0};
	t5 * V_3 = {0};
	t5 * V_4 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1750_TI));
		V_0 = (((t1750_SFs*)InitializedTypeInfo(&t1750_TI)->static_fields)->f0);
		t996 * L_0 = (__this->f1);
		if (!L_0)
		{
			goto IL_005a;
		}
	}
	{
		t996 * L_1 = (__this->f1);
		t5 * L_2 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m4774_MI, L_1);
		V_2 = L_2;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_001c:
		{
			t5 * L_3 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4765_MI, V_2);
			V_1 = ((t5 *)Castclass(L_3, InitializedTypeInfo(&t1728_TI)));
			V_3 = ((t5 *)IsInst(V_1, InitializedTypeInfo(&t2379_TI)));
			if (!V_3)
			{
				goto IL_003b;
			}
		}

IL_0032:
		{
			t5 * L_4 = (t5 *)InterfaceFuncInvoker2< t5 *, t1037 *, t5 * >::Invoke(&m11540_MI, V_3, p0, V_0);
			V_0 = L_4;
		}

IL_003b:
		{
			bool L_5 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m747_MI, V_2);
			if (L_5)
			{
				goto IL_001c;
			}
		}

IL_0043:
		{
			// IL_0043: leave.s IL_005a
			leaveInstructions[0] = 0x5A; // 1
			THROW_SENTINEL(IL_005a);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0045;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_0045;
	}

IL_0045:
	{ // begin finally (depth: 1)
		{
			V_4 = ((t5 *)IsInst(V_2, InitializedTypeInfo(&t132_TI)));
			if (V_4)
			{
				goto IL_0052;
			}
		}

IL_0051:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x5A:
					goto IL_005a;
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

IL_0052:
		{
			InterfaceActionInvoker0::Invoke(&m516_MI, V_4);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x5A:
					goto IL_005a;
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

IL_005a:
	{
		return V_0;
	}
}
// Metadata Definition System.Runtime.Remoting.Contexts.Context
extern Il2CppType t110_0_0_1;
FieldInfo t1720_f0_FieldInfo = 
{
	"context_id", &t110_0_0_1, &t1720_TI, offsetof(t1720, f0), &EmptyCustomAttributesCache};
extern Il2CppType t996_0_0_1;
FieldInfo t1720_f1_FieldInfo = 
{
	"context_properties", &t996_0_0_1, &t1720_TI, offsetof(t1720, f1), &EmptyCustomAttributesCache};
extern Il2CppType t984_0_0_17;
FieldInfo t1720_f2_FieldInfo = 
{
	"namedSlots", &t984_0_0_17, &t1720_TI, offsetof(t1720_SFs, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1720_FIs[] =
{
	&t1720_f0_FieldInfo,
	&t1720_f1_FieldInfo,
	&t1720_f2_FieldInfo,
	NULL
};
static PropertyInfo t1720____DefaultContext_PropertyInfo = 
{
	&t1720_TI, "DefaultContext", &m8849_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1720____IsDefaultContext_PropertyInfo = 
{
	&t1720_TI, "IsDefaultContext", &m8850_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1720_PIs[] =
{
	&t1720____DefaultContext_PropertyInfo,
	&t1720____IsDefaultContext_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8847_MI = 
{
	".cctor", (methodPointerType)&m8847, &t1720_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3638, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8848_MI = 
{
	"Finalize", (methodPointerType)&m8848, &t1720_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 3639, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8849_MI = 
{
	"get_DefaultContext", (methodPointerType)&m8849, &t1720_TI, &t1720_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 3640, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8850_MI = 
{
	"get_IsDefaultContext", (methodPointerType)&m8850, &t1720_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 3641, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1720_m8851_ParameterInfos[] = 
{
	{"name", 0, 134222206, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t1728_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8851_MI = 
{
	"GetProperty", (methodPointerType)&m8851, &t1720_TI, &t1728_0_0_0, RuntimeInvoker_t5_t5, t1720_m8851_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 4, 1, false, false, 3642, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8852_MI = 
{
	"ToString", (methodPointerType)&m8852, &t1720_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 3643, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1037_0_0_0;
extern Il2CppType t1037_0_0_0;
static ParameterInfo t1720_m8853_ParameterInfos[] = 
{
	{"serverObject", 0, 134222207, &EmptyCustomAttributesCache, &t1037_0_0_0},
};
extern Il2CppType t1232_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8853_MI = 
{
	"CreateEnvoySink", (methodPointerType)&m8853, &t1720_TI, &t1232_0_0_0, RuntimeInvoker_t5_t5, t1720_m8853_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 3644, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1720_MIs[] =
{
	&m8847_MI,
	&m8848_MI,
	&m8849_MI,
	&m8850_MI,
	&m8851_MI,
	&m8852_MI,
	&m8853_MI,
	NULL
};
static MethodInfo* t1720_VT[] =
{
	&m464_MI,
	&m8848_MI,
	&m466_MI,
	&m8852_MI,
	&m8851_MI,
};
void t1720_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1720__CustomAttributeCache = {
1,
NULL,
&t1720_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1720_1_0_0;
struct t1720;
extern CustomAttributesCache t1720__CustomAttributeCache;
TypeInfo t1720_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Context", "System.Runtime.Remoting.Contexts", t1720_MIs, t1720_PIs, t1720_FIs, NULL, &t5_TI, NULL, NULL, &t1720_TI, NULL, t1720_VT, &t1720__CustomAttributeCache, &t1720_TI, &t1720_0_0_0, &t1720_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1720), 0, -1, sizeof(t1720_SFs), 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, true, true, false, false, 7, 2, 3, 0, 0, 5, 0, 0};
#include "t1718.h"
#ifndef _MSC_VER
#else
#endif
#include "t1718MD.h"

extern MethodInfo m5062_MI;


extern MethodInfo m8854_MI;
 void m8854 (t1718 * __this, t11* p0, MethodInfo* method){
	{
		m3526(__this, &m3526_MI);
		__this->f0 = p0;
		return;
	}
}
 t11* m8855 (t1718 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m8856_MI;
 bool m8856 (t1718 * __this, t5 * p0, MethodInfo* method){
	t1718 * V_0 = {0};
	{
		if (p0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		if (((t1718 *)IsInst(p0, InitializedTypeInfo(&t1718_TI))))
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		V_0 = ((t1718 *)Castclass(p0, InitializedTypeInfo(&t1718_TI)));
		t11* L_0 = (V_0->f0);
		t11* L_1 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_2 = m2384(NULL, L_0, L_1, &m2384_MI);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		return 0;
	}

IL_002b:
	{
		return 1;
	}
}
extern MethodInfo m8857_MI;
 int32_t m8857 (t1718 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f0);
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
		t11* L_1 = (__this->f0);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m3489_MI, L_1);
		return L_2;
	}
}
extern MethodInfo m8858_MI;
 void m8858 (t1718 * __this, t5 * p0, MethodInfo* method){
	t5 * V_0 = {0};
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3596(L_0, (t11*) &_stringLiteral1919, &m3596_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		t5 * L_1 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m11529_MI, p0);
		V_0 = L_1;
		InterfaceFuncInvoker1< int32_t, t5 * >::Invoke(&m5062_MI, V_0, __this);
		return;
	}
}
extern MethodInfo m8859_MI;
 bool m8859 (t1718 * __this, t1720 * p0, t5 * p1, MethodInfo* method){
	t5 * V_0 = {0};
	{
		if (p1)
		{
			goto IL_000e;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3596(L_0, (t11*) &_stringLiteral1919, &m3596_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		if (p0)
		{
			goto IL_001c;
		}
	}
	{
		t484 * L_1 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3596(L_1, (t11*) &_stringLiteral1920, &m3596_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001c:
	{
		t114 * L_2 = (t114 *)InterfaceFuncInvoker0< t114 * >::Invoke(&m11524_MI, p1);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6786_MI, L_2);
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		return 1;
	}

IL_002b:
	{
		t11* L_4 = (__this->f0);
		t5 * L_5 = (t5 *)VirtFuncInvoker1< t5 *, t11* >::Invoke(&m8851_MI, p0, L_4);
		V_0 = L_5;
		if (V_0)
		{
			goto IL_003d;
		}
	}
	{
		return 0;
	}

IL_003d:
	{
		if ((((t1718 *)__this) == ((t5 *)V_0)))
		{
			goto IL_0043;
		}
	}
	{
		return 0;
	}

IL_0043:
	{
		return 1;
	}
}
// Metadata Definition System.Runtime.Remoting.Contexts.ContextAttribute
extern Il2CppType t11_0_0_4;
FieldInfo t1718_f0_FieldInfo = 
{
	"AttributeName", &t11_0_0_4, &t1718_TI, offsetof(t1718, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1718_FIs[] =
{
	&t1718_f0_FieldInfo,
	NULL
};
static PropertyInfo t1718____Name_PropertyInfo = 
{
	&t1718_TI, "Name", &m8855_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1718_PIs[] =
{
	&t1718____Name_PropertyInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1718_m8854_ParameterInfos[] = 
{
	{"name", 0, 134222208, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8854_MI = 
{
	".ctor", (methodPointerType)&m8854, &t1718_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1718_m8854_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3645, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8855_MI = 
{
	"get_Name", (methodPointerType)&m8855, &t1718_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2502, 0, 7, 0, false, false, 3646, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1718_m8856_ParameterInfos[] = 
{
	{"o", 0, 134222209, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8856_MI = 
{
	"Equals", (methodPointerType)&m8856, &t1718_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t1718_m8856_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 3647, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8857_MI = 
{
	"GetHashCode", (methodPointerType)&m8857, &t1718_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 3648, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1719_0_0_0;
static ParameterInfo t1718_m8858_ParameterInfos[] = 
{
	{"ctorMsg", 0, 134222210, &EmptyCustomAttributesCache, &t1719_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8858_MI = 
{
	"GetPropertiesForNewContext", (methodPointerType)&m8858, &t1718_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1718_m8858_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 1, false, false, 3649, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t1719_0_0_0;
static ParameterInfo t1718_m8859_ParameterInfos[] = 
{
	{"ctx", 0, 134222211, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"ctorMsg", 1, 134222212, &EmptyCustomAttributesCache, &t1719_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8859_MI = 
{
	"IsContextOK", (methodPointerType)&m8859, &t1718_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t1718_m8859_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 9, 2, false, false, 3650, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1718_MIs[] =
{
	&m8854_MI,
	&m8855_MI,
	&m8856_MI,
	&m8857_MI,
	&m8858_MI,
	&m8859_MI,
	NULL
};
static MethodInfo* t1718_VT[] =
{
	&m8856_MI,
	&m465_MI,
	&m8857_MI,
	&m467_MI,
	&m8858_MI,
	&m8859_MI,
	&m8855_MI,
	&m8855_MI,
	&m8858_MI,
	&m8859_MI,
};
static TypeInfo* t1718_ITIs[] = 
{
	&t2375_TI,
	&t1728_TI,
};
static Il2CppInterfaceOffsetPair t1718_IOs[] = 
{
	{ &t740_TI, 4},
	{ &t2375_TI, 4},
	{ &t1728_TI, 6},
};
void t1718_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t767 * tmp;
		tmp = (t767 *)il2cpp_codegen_object_new (&t767_TI);
		m3562(tmp, 4, &m3562_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1718__CustomAttributeCache = {
2,
NULL,
&t1718_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1718_0_0_0;
extern Il2CppType t1718_1_0_0;
struct t1718;
extern CustomAttributesCache t1718__CustomAttributeCache;
TypeInfo t1718_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ContextAttribute", "System.Runtime.Remoting.Contexts", t1718_MIs, t1718_PIs, t1718_FIs, NULL, &t628_TI, NULL, NULL, &t1718_TI, t1718_ITIs, t1718_VT, &t1718__CustomAttributeCache, &t1718_TI, &t1718_0_0_0, &t1718_1_0_0, t1718_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1718), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, 6, 1, 1, 0, 0, 10, 2, 3};
#ifndef _MSC_VER
#else
#endif



 void m8860 (t1723 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Contexts.CrossContextChannel
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8860_MI = 
{
	".ctor", (methodPointerType)&m8860, &t1723_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3651, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1723_MIs[] =
{
	&m8860_MI,
	NULL
};
static MethodInfo* t1723_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
static TypeInfo* t1723_ITIs[] = 
{
	&t1232_TI,
};
static Il2CppInterfaceOffsetPair t1723_IOs[] = 
{
	{ &t1232_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1723_0_0_0;
extern Il2CppType t1723_1_0_0;
struct t1723;
TypeInfo t1723_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CrossContextChannel", "System.Runtime.Remoting.Contexts", t1723_MIs, NULL, NULL, NULL, &t5_TI, NULL, NULL, &t1723_TI, t1723_ITIs, t1723_VT, &EmptyCustomAttributesCache, &t1723_TI, &t1723_0_0_0, &t1723_1_0_0, t1723_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1723), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 1, 1};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Runtime.Remoting.Contexts.IContextAttribute
extern Il2CppType t1719_0_0_0;
static ParameterInfo t2375_m11523_ParameterInfos[] = 
{
	{"msg", 0, 134222213, &EmptyCustomAttributesCache, &t1719_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11523_MI = 
{
	"GetPropertiesForNewContext", NULL, &t2375_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2375_m11523_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, false, 3652, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t1719_0_0_0;
static ParameterInfo t2375_m11522_ParameterInfos[] = 
{
	{"ctx", 0, 134222214, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"msg", 1, 134222215, &EmptyCustomAttributesCache, &t1719_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11522_MI = 
{
	"IsContextOK", NULL, &t2375_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t2375_m11522_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, false, 3653, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2375_MIs[] =
{
	&m11523_MI,
	&m11522_MI,
	NULL
};
void t2375_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2375__CustomAttributeCache = {
1,
NULL,
&t2375_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2375_0_0_0;
extern Il2CppType t2375_1_0_0;
struct t2375;
extern CustomAttributesCache t2375__CustomAttributeCache;
TypeInfo t2375_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IContextAttribute", "System.Runtime.Remoting.Contexts", t2375_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2375_TI, NULL, NULL, &t2375__CustomAttributeCache, &t2375_TI, &t2375_0_0_0, &t2375_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Runtime.Remoting.Contexts.IContextProperty
static PropertyInfo t1728____Name_PropertyInfo = 
{
	&t1728_TI, "Name", &m11539_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1728_PIs[] =
{
	&t1728____Name_PropertyInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11539_MI = 
{
	"get_Name", NULL, &t1728_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 3654, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1728_MIs[] =
{
	&m11539_MI,
	NULL
};
void t1728_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1728__CustomAttributeCache = {
1,
NULL,
&t1728_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1728_0_0_0;
extern Il2CppType t1728_1_0_0;
struct t1728;
extern CustomAttributesCache t1728__CustomAttributeCache;
TypeInfo t1728_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IContextProperty", "System.Runtime.Remoting.Contexts", t1728_MIs, t1728_PIs, NULL, NULL, NULL, NULL, NULL, &t1728_TI, NULL, NULL, &t1728__CustomAttributeCache, &t1728_TI, &t1728_0_0_0, &t1728_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2380_TI;



// Metadata Definition System.Runtime.Remoting.Contexts.IContributeClientContextSink
static MethodInfo* t2380_MIs[] =
{
	NULL
};
void t2380_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2380__CustomAttributeCache = {
1,
NULL,
&t2380_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2380_0_0_0;
extern Il2CppType t2380_1_0_0;
struct t2380;
extern CustomAttributesCache t2380__CustomAttributeCache;
TypeInfo t2380_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IContributeClientContextSink", "System.Runtime.Remoting.Contexts", t2380_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2380_TI, NULL, NULL, &t2380__CustomAttributeCache, &t2380_TI, &t2380_0_0_0, &t2380_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Runtime.Remoting.Contexts.IContributeEnvoySink
extern Il2CppType t1037_0_0_0;
extern Il2CppType t1232_0_0_0;
extern Il2CppType t1232_0_0_0;
static ParameterInfo t2379_m11540_ParameterInfos[] = 
{
	{"obj", 0, 134222216, &EmptyCustomAttributesCache, &t1037_0_0_0},
	{"nextSink", 1, 134222217, &EmptyCustomAttributesCache, &t1232_0_0_0},
};
extern Il2CppType t1232_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11540_MI = 
{
	"GetEnvoySink", NULL, &t2379_TI, &t1232_0_0_0, RuntimeInvoker_t5_t5_t5, t2379_m11540_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, false, 3655, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2379_MIs[] =
{
	&m11540_MI,
	NULL
};
void t2379_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2379__CustomAttributeCache = {
1,
NULL,
&t2379_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2379_0_0_0;
extern Il2CppType t2379_1_0_0;
struct t2379;
extern CustomAttributesCache t2379__CustomAttributeCache;
TypeInfo t2379_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IContributeEnvoySink", "System.Runtime.Remoting.Contexts", t2379_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2379_TI, NULL, NULL, &t2379__CustomAttributeCache, &t2379_TI, &t2379_0_0_0, &t2379_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2381_TI;



// Metadata Definition System.Runtime.Remoting.Contexts.IContributeServerContextSink
static MethodInfo* t2381_MIs[] =
{
	NULL
};
void t2381_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2381__CustomAttributeCache = {
1,
NULL,
&t2381_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2381_0_0_0;
extern Il2CppType t2381_1_0_0;
struct t2381;
extern CustomAttributesCache t2381__CustomAttributeCache;
TypeInfo t2381_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IContributeServerContextSink", "System.Runtime.Remoting.Contexts", t2381_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2381_TI, NULL, NULL, &t2381__CustomAttributeCache, &t2381_TI, &t2381_0_0_0, &t2381_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t1729.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1729_TI;
#include "t1729MD.h"

#include "t1730.h"
#include "t1314.h"
#include "t160.h"
extern TypeInfo t1314_TI;
extern TypeInfo t1730_TI;
extern TypeInfo t160_TI;
#include "t1314MD.h"
#include "t1730MD.h"
#include "t160MD.h"
extern MethodInfo m6029_MI;
extern MethodInfo m8864_MI;
extern MethodInfo m10056_MI;
extern MethodInfo m10041_MI;
extern MethodInfo m8862_MI;
extern MethodInfo m10038_MI;
extern MethodInfo m2582_MI;
extern MethodInfo m8863_MI;


extern MethodInfo m8861_MI;
 void m8861 (t1729 * __this, MethodInfo* method){
	{
		m8862(__this, 8, 0, &m8862_MI);
		return;
	}
}
 void m8862 (t1729 * __this, int32_t p0, bool p1, MethodInfo* method){
	{
		t1730 * L_0 = (t1730 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1730_TI));
		m10038(L_0, 0, &m10038_MI);
		__this->f4 = L_0;
		m8854(__this, (t11*) &_stringLiteral1921, &m8854_MI);
		if ((((int32_t)p0) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		if ((((int32_t)p0) == ((int32_t)4)))
		{
			goto IL_0032;
		}
	}
	{
		if ((((int32_t)p0) == ((int32_t)8)))
		{
			goto IL_0032;
		}
	}
	{
		if ((((int32_t)p0) == ((int32_t)2)))
		{
			goto IL_0032;
		}
	}
	{
		t160 * L_1 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2582(L_1, (t11*) &_stringLiteral395, &m2582_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0032:
	{
		__this->f1 = p1;
		__this->f2 = p0;
		return;
	}
}
 void m8863 (t1729 * __this, bool p0, MethodInfo* method){
	t1729 * V_0 = {0};
	t1729 * V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		if (!p0)
		{
			goto IL_004a;
		}
	}
	{
		t1730 * L_0 = (__this->f4);
		VirtFuncInvoker0< bool >::Invoke(&m6029_MI, L_0);
		V_0 = __this;
		m4795(NULL, V_0, &m4795_MI);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = (__this->f3);
			__this->f3 = ((int32_t)(L_1+1));
			int32_t L_2 = (__this->f3);
			if ((((int32_t)L_2) <= ((int32_t)1)))
			{
				goto IL_0034;
			}
		}

IL_002e:
		{
			m8864(__this, &m8864_MI);
		}

IL_0034:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1731_TI));
			t1731 * L_3 = m10056(NULL, &m10056_MI);
			__this->f5 = L_3;
			// IL_003f: leave.s IL_0048
			leaveInstructions[0] = 0x48; // 1
			THROW_SENTINEL(IL_0048);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0041;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_0041;
	}

IL_0041:
	{ // begin finally (depth: 1)
		m4796(NULL, V_0, &m4796_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x48:
				goto IL_0048;
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
	} // end finally (depth: 1)

IL_0048:
	{
		goto IL_0093;
	}

IL_004a:
	{
		V_1 = __this;
		m4795(NULL, V_1, &m4795_MI);
	}

IL_0052:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0074;
		}

IL_0054:
		{
			int32_t L_4 = (__this->f3);
			__this->f3 = ((int32_t)(L_4-1));
			t1730 * L_5 = (__this->f4);
			m10041(L_5, &m10041_MI);
			__this->f5 = (t1731 *)NULL;
		}

IL_0074:
		{
			int32_t L_6 = (__this->f3);
			if ((((int32_t)L_6) <= ((int32_t)0)))
			{
				goto IL_008a;
			}
		}

IL_007d:
		{
			t1731 * L_7 = (__this->f5);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1731_TI));
			t1731 * L_8 = m10056(NULL, &m10056_MI);
			if ((((t1731 *)L_7) == ((t1731 *)L_8)))
			{
				goto IL_0054;
			}
		}

IL_008a:
		{
			// IL_008a: leave.s IL_0093
			leaveInstructions[0] = 0x93; // 1
			THROW_SENTINEL(IL_0093);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_008c;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_008c;
	}

IL_008c:
	{ // begin finally (depth: 1)
		m4796(NULL, V_1, &m4796_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x93:
				goto IL_0093;
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
	} // end finally (depth: 1)

IL_0093:
	{
		return;
	}
}
 void m8864 (t1729 * __this, MethodInfo* method){
	t1729 * V_0 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		V_0 = __this;
		m4795(NULL, V_0, &m4795_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = (__this->f3);
			if ((((int32_t)L_0) <= ((int32_t)0)))
			{
				goto IL_003e;
			}
		}

IL_0011:
		{
			t1731 * L_1 = (__this->f5);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1731_TI));
			t1731 * L_2 = m10056(NULL, &m10056_MI);
			if ((((t1731 *)L_1) != ((t1731 *)L_2)))
			{
				goto IL_003e;
			}
		}

IL_001e:
		{
			int32_t L_3 = (__this->f3);
			__this->f3 = ((int32_t)(L_3-1));
			t1730 * L_4 = (__this->f4);
			m10041(L_4, &m10041_MI);
			__this->f5 = (t1731 *)NULL;
		}

IL_003e:
		{
			// IL_003e: leave.s IL_0047
			leaveInstructions[0] = 0x47; // 1
			THROW_SENTINEL(IL_0047);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0040;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_0040;
	}

IL_0040:
	{ // begin finally (depth: 1)
		m4796(NULL, V_0, &m4796_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x47:
				goto IL_0047;
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
	} // end finally (depth: 1)

IL_0047:
	{
		return;
	}
}
extern MethodInfo m8865_MI;
 void m8865 (t1729 * __this, t5 * p0, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		t5 * L_1 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m11529_MI, p0);
		InterfaceFuncInvoker1< int32_t, t5 * >::Invoke(&m5062_MI, L_1, __this);
	}

IL_0016:
	{
		return;
	}
}
extern MethodInfo m8866_MI;
 bool m8866 (t1729 * __this, t1720 * p0, t5 * p1, MethodInfo* method){
	t1729 * V_0 = {0};
	int32_t V_1 = 0;
	{
		t5 * L_0 = (t5 *)VirtFuncInvoker1< t5 *, t11* >::Invoke(&m8851_MI, p0, (t11*) &_stringLiteral1921);
		V_0 = ((t1729 *)IsInst(L_0, InitializedTypeInfo(&t1729_TI)));
		int32_t L_1 = (__this->f2);
		V_1 = L_1;
		if (((int32_t)(V_1-1)) == 0)
		{
			goto IL_0042;
		}
		if (((int32_t)(V_1-1)) == 1)
		{
			goto IL_0051;
		}
		if (((int32_t)(V_1-1)) == 2)
		{
			goto IL_0053;
		}
		if (((int32_t)(V_1-1)) == 3)
		{
			goto IL_0047;
		}
		if (((int32_t)(V_1-1)) == 4)
		{
			goto IL_0053;
		}
		if (((int32_t)(V_1-1)) == 5)
		{
			goto IL_0053;
		}
		if (((int32_t)(V_1-1)) == 6)
		{
			goto IL_0053;
		}
		if (((int32_t)(V_1-1)) == 7)
		{
			goto IL_004f;
		}
	}
	{
		goto IL_0053;
	}

IL_0042:
	{
		return ((((t1729 *)V_0) == ((t5 *)NULL))? 1 : 0);
	}

IL_0047:
	{
		return ((((int32_t)((((t1729 *)V_0) == ((t5 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_004f:
	{
		return 0;
	}

IL_0051:
	{
		return 1;
	}

IL_0053:
	{
		return 0;
	}
}
extern MethodInfo m8867_MI;
 void m8867 (t5 * __this, MethodInfo* method){
	t1729 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1731_TI));
		t1720 * L_0 = m10054(NULL, &m10054_MI);
		bool L_1 = m8850(L_0, &m8850_MI);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1731_TI));
		t1720 * L_2 = m10054(NULL, &m10054_MI);
		t5 * L_3 = (t5 *)VirtFuncInvoker1< t5 *, t11* >::Invoke(&m8851_MI, L_2, (t11*) &_stringLiteral1921);
		V_0 = ((t1729 *)IsInst(L_3, InitializedTypeInfo(&t1729_TI)));
		if (V_0)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		VirtActionInvoker1< bool >::Invoke(&m8863_MI, V_0, 0);
		return;
	}
}
extern MethodInfo m8868_MI;
 void m8868 (t5 * __this, MethodInfo* method){
	t1729 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1731_TI));
		t1720 * L_0 = m10054(NULL, &m10054_MI);
		bool L_1 = m8850(L_0, &m8850_MI);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1731_TI));
		t1720 * L_2 = m10054(NULL, &m10054_MI);
		t5 * L_3 = (t5 *)VirtFuncInvoker1< t5 *, t11* >::Invoke(&m8851_MI, L_2, (t11*) &_stringLiteral1921);
		V_0 = ((t1729 *)IsInst(L_3, InitializedTypeInfo(&t1729_TI)));
		if (V_0)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		VirtActionInvoker1< bool >::Invoke(&m8863_MI, V_0, 1);
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Contexts.SynchronizationAttribute
extern Il2CppType t108_0_0_1;
FieldInfo t1729_f1_FieldInfo = 
{
	"_bReEntrant", &t108_0_0_1, &t1729_TI, offsetof(t1729, f1), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1729_f2_FieldInfo = 
{
	"_flavor", &t110_0_0_1, &t1729_TI, offsetof(t1729, f2), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_129;
FieldInfo t1729_f3_FieldInfo = 
{
	"_lockCount", &t110_0_0_129, &t1729_TI, offsetof(t1729, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1730_0_0_129;
FieldInfo t1729_f4_FieldInfo = 
{
	"_mutex", &t1730_0_0_129, &t1729_TI, offsetof(t1729, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1731_0_0_129;
FieldInfo t1729_f5_FieldInfo = 
{
	"_ownerThread", &t1731_0_0_129, &t1729_TI, offsetof(t1729, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1729_FIs[] =
{
	&t1729_f1_FieldInfo,
	&t1729_f2_FieldInfo,
	&t1729_f3_FieldInfo,
	&t1729_f4_FieldInfo,
	&t1729_f5_FieldInfo,
	NULL
};
static PropertyInfo t1729____Locked_PropertyInfo = 
{
	&t1729_TI, "Locked", NULL, &m8863_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1729_PIs[] =
{
	&t1729____Locked_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8861_MI = 
{
	".ctor", (methodPointerType)&m8861, &t1729_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3656, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1729_m8862_ParameterInfos[] = 
{
	{"flag", 0, 134222218, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"reEntrant", 1, 134222219, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8862_MI = 
{
	".ctor", (methodPointerType)&m8862, &t1729_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t111, t1729_m8862_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 3657, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1729_m8863_ParameterInfos[] = 
{
	{"value", 0, 134222220, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8863_MI = 
{
	"set_Locked", (methodPointerType)&m8863, &t1729_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t1729_m8863_ParameterInfos, &EmptyCustomAttributesCache, 2502, 0, 10, 1, false, false, 3658, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8864_MI = 
{
	"ReleaseLock", (methodPointerType)&m8864, &t1729_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 3659, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1719_0_0_0;
static ParameterInfo t1729_m8865_ParameterInfos[] = 
{
	{"ctorMsg", 0, 134222221, &EmptyCustomAttributesCache, &t1719_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1729__CustomAttributeCache_m8865;
MethodInfo m8865_MI = 
{
	"GetPropertiesForNewContext", (methodPointerType)&m8865, &t1729_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1729_m8865_ParameterInfos, &t1729__CustomAttributeCache_m8865, 198, 0, 8, 1, false, false, 3660, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t1719_0_0_0;
static ParameterInfo t1729_m8866_ParameterInfos[] = 
{
	{"ctx", 0, 134222222, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"msg", 1, 134222223, &EmptyCustomAttributesCache, &t1719_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1729__CustomAttributeCache_m8866;
MethodInfo m8866_MI = 
{
	"IsContextOK", (methodPointerType)&m8866, &t1729_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t1729_m8866_ParameterInfos, &t1729__CustomAttributeCache_m8866, 198, 0, 9, 2, false, false, 3661, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8867_MI = 
{
	"ExitContext", (methodPointerType)&m8867, &t1729_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 147, 0, 255, 0, false, false, 3662, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8868_MI = 
{
	"EnterContext", (methodPointerType)&m8868, &t1729_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 147, 0, 255, 0, false, false, 3663, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1729_MIs[] =
{
	&m8861_MI,
	&m8862_MI,
	&m8863_MI,
	&m8864_MI,
	&m8865_MI,
	&m8866_MI,
	&m8867_MI,
	&m8868_MI,
	NULL
};
static MethodInfo* t1729_VT[] =
{
	&m8856_MI,
	&m465_MI,
	&m8857_MI,
	&m467_MI,
	&m8865_MI,
	&m8866_MI,
	&m8855_MI,
	&m8855_MI,
	&m8865_MI,
	&m8866_MI,
	&m8863_MI,
};
static TypeInfo* t1729_ITIs[] = 
{
	&t2380_TI,
	&t2381_TI,
};
static Il2CppInterfaceOffsetPair t1729_IOs[] = 
{
	{ &t2375_TI, 4},
	{ &t1728_TI, 6},
	{ &t740_TI, 4},
	{ &t2380_TI, 10},
	{ &t2381_TI, 10},
};
void t1729_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t767 * tmp;
		tmp = (t767 *)il2cpp_codegen_object_new (&t767_TI);
		m3562(tmp, 4, &m3562_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t1729_CustomAttributesCacheGenerator_m8865(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1729_CustomAttributesCacheGenerator_m8866(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1729__CustomAttributeCache = {
2,
NULL,
&t1729_CustomAttributesCacheGenerator
};
CustomAttributesCache t1729__CustomAttributeCache_m8865 = {
1,
NULL,
&t1729_CustomAttributesCacheGenerator_m8865
};
CustomAttributesCache t1729__CustomAttributeCache_m8866 = {
1,
NULL,
&t1729_CustomAttributesCacheGenerator_m8866
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1729_0_0_0;
extern Il2CppType t1729_1_0_0;
struct t1729;
extern CustomAttributesCache t1729__CustomAttributeCache;
extern CustomAttributesCache t1729__CustomAttributeCache_m8865;
extern CustomAttributesCache t1729__CustomAttributeCache_m8866;
TypeInfo t1729_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SynchronizationAttribute", "System.Runtime.Remoting.Contexts", t1729_MIs, t1729_PIs, t1729_FIs, NULL, &t1718_TI, NULL, NULL, &t1729_TI, t1729_ITIs, t1729_VT, &t1729__CustomAttributeCache, &t1729_TI, &t1729_0_0_0, &t1729_1_0_0, t1729_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1729), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, 8, 1, 5, 0, 0, 11, 2, 5};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Runtime.Remoting.Lifetime.ILease
static PropertyInfo t1733____CurrentState_PropertyInfo = 
{
	&t1733_TI, "CurrentState", &m11530_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1733____InitialLeaseTime_PropertyInfo = 
{
	&t1733_TI, "InitialLeaseTime", NULL, &m11531_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1733____RenewOnCallTime_PropertyInfo = 
{
	&t1733_TI, "RenewOnCallTime", NULL, &m11533_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1733____SponsorshipTimeout_PropertyInfo = 
{
	&t1733_TI, "SponsorshipTimeout", NULL, &m11532_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1733_PIs[] =
{
	&t1733____CurrentState_PropertyInfo,
	&t1733____InitialLeaseTime_PropertyInfo,
	&t1733____RenewOnCallTime_PropertyInfo,
	&t1733____SponsorshipTimeout_PropertyInfo,
	NULL
};
extern Il2CppType t1735_0_0_0;
extern void* RuntimeInvoker_t1735 (MethodInfo* method, void* obj, void** args);
MethodInfo m11530_MI = 
{
	"get_CurrentState", NULL, &t1733_TI, &t1735_0_0_0, RuntimeInvoker_t1735, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 3664, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t61_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t1733_m11531_ParameterInfos[] = 
{
	{"value", 0, 134222224, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m11531_MI = 
{
	"set_InitialLeaseTime", NULL, &t1733_TI, &t109_0_0_0, RuntimeInvoker_t109_t61, t1733_m11531_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 1, 1, false, false, 3665, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t61_0_0_0;
static ParameterInfo t1733_m11533_ParameterInfos[] = 
{
	{"value", 0, 134222225, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m11533_MI = 
{
	"set_RenewOnCallTime", NULL, &t1733_TI, &t109_0_0_0, RuntimeInvoker_t109_t61, t1733_m11533_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 2, 1, false, false, 3666, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t61_0_0_0;
static ParameterInfo t1733_m11532_ParameterInfos[] = 
{
	{"value", 0, 134222226, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m11532_MI = 
{
	"set_SponsorshipTimeout", NULL, &t1733_TI, &t109_0_0_0, RuntimeInvoker_t109_t61, t1733_m11532_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, false, 3667, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1733_MIs[] =
{
	&m11530_MI,
	&m11531_MI,
	&m11533_MI,
	&m11532_MI,
	NULL
};
void t1733_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1733__CustomAttributeCache = {
1,
NULL,
&t1733_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1733_0_0_0;
extern Il2CppType t1733_1_0_0;
struct t1733;
extern CustomAttributesCache t1733__CustomAttributeCache;
TypeInfo t1733_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ILease", "System.Runtime.Remoting.Lifetime", t1733_MIs, t1733_PIs, NULL, NULL, NULL, NULL, NULL, &t1733_TI, NULL, NULL, &t1733__CustomAttributeCache, &t1733_TI, &t1733_0_0_0, &t1733_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 4, 4, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1736_TI;



// Metadata Definition System.Runtime.Remoting.Lifetime.ISponsor
extern Il2CppType t1733_0_0_0;
static ParameterInfo t1736_m11541_ParameterInfos[] = 
{
	{"lease", 0, 134222227, &EmptyCustomAttributesCache, &t1733_0_0_0},
};
extern Il2CppType t61_0_0_0;
extern void* RuntimeInvoker_t61_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11541_MI = 
{
	"Renewal", NULL, &t1736_TI, &t61_0_0_0, RuntimeInvoker_t61_t5, t1736_m11541_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, false, 3668, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1736_MIs[] =
{
	&m11541_MI,
	NULL
};
void t1736_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1736__CustomAttributeCache = {
1,
NULL,
&t1736_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1736_0_0_0;
extern Il2CppType t1736_1_0_0;
struct t1736;
extern CustomAttributesCache t1736__CustomAttributeCache;
TypeInfo t1736_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ISponsor", "System.Runtime.Remoting.Lifetime", t1736_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1736_TI, NULL, NULL, &t1736__CustomAttributeCache, &t1736_TI, &t1736_0_0_0, &t1736_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t1732.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1732_TI;
#include "t1732MD.h"

#include "t222.h"


extern MethodInfo m8869_MI;
 void m8869 (t1732 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m8870_MI;
 t61  m8870 (t1732 * __this, t5 * p0, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m8870((t1732 *)__this->f9,p0, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t61  (*FunctionPointerType) (t5 *, t5 * __this, t5 * p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t61  (*FunctionPointerType) (t5 * __this, t5 * p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t61  (*FunctionPointerType) (t5 * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
t61  pinvoke_delegate_wrapper_t1732(Il2CppObject* delegate, t5 * p0)
{
	typedef t61  (STDCALL *native_function_ptr_type)(t5 *);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation
	t5 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Runtime.Remoting.Lifetime.ILease'."));

	// Native function invocation and marshaling of return value back from native representation
	t61  _return_value = _il2cpp_pinvoke_func(_p0_marshaled);

	// Marshaling cleanup of parameter 'p0' native representation

	return _return_value;
}
extern MethodInfo m8871_MI;
 t5 * m8871 (t1732 * __this, t5 * p0, t222 * p1, t5 * p2, MethodInfo* method){
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m8872_MI;
 t61  m8872 (t1732 * __this, t5 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t61 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1732_m8869_ParameterInfos[] = 
{
	{"object", 0, 134222235, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134222236, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8869_MI = 
{
	".ctor", (methodPointerType)&m8869, &t1732_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t1732_m8869_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 3681, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1733_0_0_0;
static ParameterInfo t1732_m8870_ParameterInfos[] = 
{
	{"lease", 0, 134222237, &EmptyCustomAttributesCache, &t1733_0_0_0},
};
extern Il2CppType t61_0_0_0;
extern void* RuntimeInvoker_t61_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8870_MI = 
{
	"Invoke", (methodPointerType)&m8870, &t1732_TI, &t61_0_0_0, RuntimeInvoker_t61_t5, t1732_m8870_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, false, 3682, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1733_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1732_m8871_ParameterInfos[] = 
{
	{"lease", 0, 134222238, &EmptyCustomAttributesCache, &t1733_0_0_0},
	{"callback", 1, 134222239, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134222240, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8871_MI = 
{
	"BeginInvoke", (methodPointerType)&m8871, &t1732_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t1732_m8871_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, false, 3683, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t1732_m8872_ParameterInfos[] = 
{
	{"result", 0, 134222241, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t61_0_0_0;
extern void* RuntimeInvoker_t61_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8872_MI = 
{
	"EndInvoke", (methodPointerType)&m8872, &t1732_TI, &t61_0_0_0, RuntimeInvoker_t61_t5, t1732_m8872_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 3684, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1732_MIs[] =
{
	&m8869_MI,
	&m8870_MI,
	&m8871_MI,
	&m8872_MI,
	NULL
};
extern MethodInfo m2342_MI;
extern MethodInfo m2343_MI;
extern MethodInfo m2344_MI;
extern MethodInfo m2345_MI;
extern MethodInfo m2346_MI;
extern MethodInfo m2347_MI;
extern MethodInfo m2348_MI;
static MethodInfo* t1732_VT[] =
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
	&m8870_MI,
	&m8871_MI,
	&m8872_MI,
};
extern TypeInfo t516_TI;
extern TypeInfo t517_TI;
static Il2CppInterfaceOffsetPair t1732_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1732_0_0_0;
extern Il2CppType t1732_1_0_0;
extern TypeInfo t353_TI;
struct t1732;
extern TypeInfo t1734_TI;
TypeInfo t1732_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RenewalDelegate", "", t1732_MIs, NULL, NULL, NULL, &t353_TI, NULL, &t1734_TI, &t1732_TI, NULL, t1732_VT, &EmptyCustomAttributesCache, &t1732_TI, &t1732_0_0_0, &t1732_1_0_0, t1732_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)pinvoke_delegate_wrapper_t1732, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1732), 0, sizeof(methodPointerType), 0, 0, -1, 259, 0, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t1734.h"
#ifndef _MSC_VER
#else
#endif
#include "t1734MD.h"

#include "t76.h"
#include "t1543.h"
#include "t1930.h"
#include "t1929.h"
extern TypeInfo t76_TI;
extern TypeInfo t1739_TI;
extern TypeInfo t1543_TI;
extern TypeInfo t221_TI;
extern TypeInfo t222_TI;
extern TypeInfo t1930_TI;
#include "t76MD.h"
#include "t1739MD.h"
#include "t1543MD.h"
#include "t1930MD.h"
#include "t1937MD.h"
extern MethodInfo m585_MI;
extern MethodInfo m10499_MI;
extern MethodInfo m1957_MI;
extern MethodInfo m591_MI;
extern MethodInfo m10871_MI;
extern MethodInfo m4828_MI;
extern MethodInfo m8892_MI;
extern MethodInfo m8893_MI;
extern MethodInfo m8894_MI;
extern MethodInfo m4923_MI;
extern MethodInfo m8874_MI;
extern MethodInfo m3513_MI;
extern MethodInfo m5057_MI;
extern MethodInfo m10872_MI;
extern MethodInfo m7565_MI;
extern MethodInfo m8883_MI;
extern MethodInfo m7567_MI;
extern MethodInfo m7575_MI;
extern MethodInfo m11541_MI;
extern MethodInfo m6057_MI;
extern MethodInfo m8884_MI;
extern MethodInfo m10965_MI;
extern MethodInfo m10089_MI;
extern MethodInfo m10874_MI;
extern MethodInfo m8880_MI;
extern MethodInfo m7573_MI;
extern MethodInfo m8881_MI;


extern MethodInfo m8873_MI;
 void m8873 (t1734 * __this, MethodInfo* method){
	{
		m4828(__this, &m4828_MI);
		__this->f2 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1739_TI));
		t61  L_0 = m8892(NULL, &m8892_MI);
		__this->f3 = L_0;
		t61  L_1 = m8893(NULL, &m8893_MI);
		__this->f4 = L_1;
		t61  L_2 = m8894(NULL, &m8894_MI);
		__this->f5 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t76_TI));
		t76  L_3 = m585(NULL, &m585_MI);
		t61  L_4 = (__this->f3);
		t76  L_5 = m591(NULL, L_3, L_4, &m591_MI);
		__this->f1 = L_5;
		return;
	}
}
 t61  m8874 (t1734 * __this, MethodInfo* method){
	{
		t76  L_0 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t76_TI));
		t76  L_1 = m585(NULL, &m585_MI);
		t61  L_2 = m10499(NULL, L_0, L_1, &m10499_MI);
		return L_2;
	}
}
extern MethodInfo m8875_MI;
 int32_t m8875 (t1734 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m8876_MI;
 void m8876 (t1734 * __this, MethodInfo* method){
	{
		__this->f2 = 2;
		return;
	}
}
extern MethodInfo m8877_MI;
 void m8877 (t1734 * __this, t61  p0, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1 = (__this->f2);
		int32_t L_2 = L_1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1735_TI), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_4 = m1957(NULL, (t11*) &_stringLiteral1922, L_3, (t11*) &_stringLiteral84, &m1957_MI);
		t1785 * L_5 = (t1785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1785_TI));
		m9102(L_5, L_4, &m9102_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		__this->f3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t76_TI));
		t76  L_6 = m585(NULL, &m585_MI);
		t61  L_7 = (__this->f3);
		t76  L_8 = m591(NULL, L_6, L_7, &m591_MI);
		__this->f1 = L_8;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t61_TI));
		bool L_9 = m10871(NULL, p0, (((t61_SFs*)InitializedTypeInfo(&t61_TI)->static_fields)->f2), &m10871_MI);
		if (!L_9)
		{
			goto IL_005a;
		}
	}
	{
		__this->f2 = 0;
	}

IL_005a:
	{
		return;
	}
}
extern MethodInfo m8878_MI;
 void m8878 (t1734 * __this, t61  p0, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1 = (__this->f2);
		int32_t L_2 = L_1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1735_TI), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_4 = m1957(NULL, (t11*) &_stringLiteral1923, L_3, (t11*) &_stringLiteral84, &m1957_MI);
		t1785 * L_5 = (t1785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1785_TI));
		m9102(L_5, L_4, &m9102_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		__this->f4 = p0;
		return;
	}
}
extern MethodInfo m8879_MI;
 void m8879 (t1734 * __this, t61  p0, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1 = (__this->f2);
		int32_t L_2 = L_1;
		t5 * L_3 = Box(InitializedTypeInfo(&t1735_TI), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_4 = m1957(NULL, (t11*) &_stringLiteral1924, L_3, (t11*) &_stringLiteral84, &m1957_MI);
		t1785 * L_5 = (t1785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1785_TI));
		m9102(L_5, L_4, &m9102_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		__this->f5 = p0;
		return;
	}
}
 t61  m8880 (t1734 * __this, t61  p0, MethodInfo* method){
	t76  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t76_TI));
		t76  L_0 = m585(NULL, &m585_MI);
		t76  L_1 = m591(NULL, L_0, p0, &m591_MI);
		V_0 = L_1;
		t76  L_2 = (__this->f1);
		bool L_3 = m4923(NULL, V_0, L_2, &m4923_MI);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		__this->f1 = V_0;
	}

IL_0021:
	{
		t61  L_4 = (t61 )VirtFuncInvoker0< t61  >::Invoke(&m8874_MI, __this);
		return L_4;
	}
}
 void m8881 (t1734 * __this, t5 * p0, MethodInfo* method){
	t1734 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		V_0 = __this;
		m4795(NULL, V_0, &m4795_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t996 * L_0 = (__this->f6);
			if (L_0)
			{
				goto IL_0012;
			}
		}

IL_0010:
		{
			// IL_0010: leave.s IL_0053
			leaveInstructions[0] = 0x53; // 1
			THROW_SENTINEL(IL_0053);
			// finally target depth: 1
		}

IL_0012:
		{
			V_1 = 0;
			goto IL_003c;
		}

IL_0016:
		{
			t996 * L_1 = (__this->f6);
			t5 * L_2 = (t5 *)VirtFuncInvoker1< t5 *, int32_t >::Invoke(&m4771_MI, L_1, V_1);
			bool L_3 = m3513(NULL, L_2, p0, &m3513_MI);
			if (!L_3)
			{
				goto IL_0038;
			}
		}

IL_002a:
		{
			t996 * L_4 = (__this->f6);
			VirtActionInvoker1< int32_t >::Invoke(&m5057_MI, L_4, V_1);
			goto IL_004a;
		}

IL_0038:
		{
			V_1 = ((int32_t)(V_1+1));
		}

IL_003c:
		{
			t996 * L_5 = (__this->f6);
			int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4769_MI, L_5);
			if ((((int32_t)V_1) < ((int32_t)L_6)))
			{
				goto IL_0016;
			}
		}

IL_004a:
		{
			// IL_004a: leave.s IL_0053
			leaveInstructions[0] = 0x53; // 1
			THROW_SENTINEL(IL_0053);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_004c;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_004c;
	}

IL_004c:
	{ // begin finally (depth: 1)
		m4796(NULL, V_0, &m4796_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x53:
				goto IL_0053;
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
	} // end finally (depth: 1)

IL_0053:
	{
		return;
	}
}
extern MethodInfo m8882_MI;
 void m8882 (t1734 * __this, MethodInfo* method){
	t1734 * V_0 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		t61  L_1 = (t61 )VirtFuncInvoker0< t61  >::Invoke(&m8874_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t61_TI));
		bool L_2 = m10872(NULL, L_1, (((t61_SFs*)InitializedTypeInfo(&t61_TI)->static_fields)->f2), &m10872_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		t996 * L_3 = (__this->f6);
		if (!L_3)
		{
			goto IL_0056;
		}
	}
	{
		__this->f2 = 3;
		V_0 = __this;
		m4795(NULL, V_0, &m4795_MI);
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		t996 * L_4 = (__this->f6);
		t1543 * L_5 = (t1543 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1543_TI));
		m7565(L_5, L_4, &m7565_MI);
		__this->f7 = L_5;
		// IL_0045: leave.s IL_004e
		leaveInstructions[0] = 0x4E; // 1
		THROW_SENTINEL(IL_004e);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0047;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_0047;
	}

IL_0047:
	{ // begin finally (depth: 1)
		m4796(NULL, V_0, &m4796_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x4E:
				goto IL_004e;
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
	} // end finally (depth: 1)

IL_004e:
	{
		m8883(__this, &m8883_MI);
		goto IL_005d;
	}

IL_0056:
	{
		__this->f2 = 4;
	}

IL_005d:
	{
		return;
	}
}
 void m8883 (t1734 * __this, MethodInfo* method){
	t5 * V_0 = {0};
	t5 * V_1 = {0};
	{
		t1543 * L_0 = (__this->f7);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7567_MI, L_0);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		__this->f2 = 4;
		__this->f7 = (t1543 *)NULL;
		return;
	}

IL_001c:
	{
		t1543 * L_2 = (__this->f7);
		t5 * L_3 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m7575_MI, L_2);
		V_0 = ((t5 *)Castclass(L_3, InitializedTypeInfo(&t1736_TI)));
		t5 * L_4 = V_0;
		t124 L_5 = { GetInterfaceMethodInfo(L_4, &m11541_MI) };
		t1732 * L_6 = (t1732 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1732_TI));
		m8869(L_6, L_4, L_5, &m8869_MI);
		__this->f8 = L_6;
		t1732 * L_7 = (__this->f8);
		t5 * L_8 = (t5 *)VirtFuncInvoker3< t5 *, t5 *, t222 *, t5 * >::Invoke(&m8871_MI, L_7, __this, (t222 *)NULL, NULL);
		V_1 = L_8;
		t1314 * L_9 = (t1314 *)InterfaceFuncInvoker0< t1314 * >::Invoke(&m6057_MI, V_1);
		t124 L_10 = { &m8884_MI };
		t1930 * L_11 = (t1930 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1930_TI));
		m10965(L_11, __this, L_10, &m10965_MI);
		t61  L_12 = (__this->f5);
		m10089(NULL, L_9, L_11, V_1, L_12, 1, &m10089_MI);
		return;
	}
}
 void m8884 (t1734 * __this, t5 * p0, bool p1, MethodInfo* method){
	t5 * V_0 = {0};
	t61  V_1 = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		if (p1)
		{
			goto IL_0041;
		}
	}

IL_0003:
	try
	{ // begin try (depth: 1)
		{
			V_0 = ((t5 *)Castclass(p0, InitializedTypeInfo(&t221_TI)));
			t1732 * L_0 = (__this->f8);
			t61  L_1 = (t61 )VirtFuncInvoker1< t61 , t5 * >::Invoke(&m8872_MI, L_0, V_0);
			V_1 = L_1;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t61_TI));
			bool L_2 = m10874(NULL, V_1, (((t61_SFs*)InitializedTypeInfo(&t61_TI)->static_fields)->f2), &m10874_MI);
			if (!L_2)
			{
				goto IL_003c;
			}
		}

IL_0024:
		{
			VirtFuncInvoker1< t61 , t61  >::Invoke(&m8880_MI, __this, V_1);
			__this->f2 = 2;
			__this->f7 = (t1543 *)NULL;
			// IL_003a: leave.s IL_005d
			goto IL_005d;
		}

IL_003c:
		{
			// IL_003c: leave.s IL_0041
			goto IL_0041;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t142 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t5_TI, e.ex->object.klass))
			goto IL_003e;
		throw e;
	}

IL_003e:
	{ // begin catch(System.Object)
		// IL_003f: leave.s IL_0041
		goto IL_0041;
	} // end catch (depth: 1)

IL_0041:
	{
		t1543 * L_3 = (__this->f7);
		t5 * L_4 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m7573_MI, L_3);
		VirtActionInvoker1< t5 * >::Invoke(&m8881_MI, __this, ((t5 *)Castclass(L_4, InitializedTypeInfo(&t1736_TI))));
		m8883(__this, &m8883_MI);
	}

IL_005d:
	{
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Lifetime.Lease
extern Il2CppType t76_0_0_1;
FieldInfo t1734_f1_FieldInfo = 
{
	"_leaseExpireTime", &t76_0_0_1, &t1734_TI, offsetof(t1734, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_1;
FieldInfo t1734_f2_FieldInfo = 
{
	"_currentState", &t1735_0_0_1, &t1734_TI, offsetof(t1734, f2), &EmptyCustomAttributesCache};
extern Il2CppType t61_0_0_1;
FieldInfo t1734_f3_FieldInfo = 
{
	"_initialLeaseTime", &t61_0_0_1, &t1734_TI, offsetof(t1734, f3), &EmptyCustomAttributesCache};
extern Il2CppType t61_0_0_1;
FieldInfo t1734_f4_FieldInfo = 
{
	"_renewOnCallTime", &t61_0_0_1, &t1734_TI, offsetof(t1734, f4), &EmptyCustomAttributesCache};
extern Il2CppType t61_0_0_1;
FieldInfo t1734_f5_FieldInfo = 
{
	"_sponsorshipTimeout", &t61_0_0_1, &t1734_TI, offsetof(t1734, f5), &EmptyCustomAttributesCache};
extern Il2CppType t996_0_0_1;
FieldInfo t1734_f6_FieldInfo = 
{
	"_sponsors", &t996_0_0_1, &t1734_TI, offsetof(t1734, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1543_0_0_1;
FieldInfo t1734_f7_FieldInfo = 
{
	"_renewingSponsors", &t1543_0_0_1, &t1734_TI, offsetof(t1734, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1732_0_0_1;
FieldInfo t1734_f8_FieldInfo = 
{
	"_renewalDelegate", &t1732_0_0_1, &t1734_TI, offsetof(t1734, f8), &EmptyCustomAttributesCache};
static FieldInfo* t1734_FIs[] =
{
	&t1734_f1_FieldInfo,
	&t1734_f2_FieldInfo,
	&t1734_f3_FieldInfo,
	&t1734_f4_FieldInfo,
	&t1734_f5_FieldInfo,
	&t1734_f6_FieldInfo,
	&t1734_f7_FieldInfo,
	&t1734_f8_FieldInfo,
	NULL
};
static PropertyInfo t1734____CurrentLeaseTime_PropertyInfo = 
{
	&t1734_TI, "CurrentLeaseTime", &m8874_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1734____CurrentState_PropertyInfo = 
{
	&t1734_TI, "CurrentState", &m8875_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1734____InitialLeaseTime_PropertyInfo = 
{
	&t1734_TI, "InitialLeaseTime", NULL, &m8877_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1734____RenewOnCallTime_PropertyInfo = 
{
	&t1734_TI, "RenewOnCallTime", NULL, &m8878_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1734____SponsorshipTimeout_PropertyInfo = 
{
	&t1734_TI, "SponsorshipTimeout", NULL, &m8879_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1734_PIs[] =
{
	&t1734____CurrentLeaseTime_PropertyInfo,
	&t1734____CurrentState_PropertyInfo,
	&t1734____InitialLeaseTime_PropertyInfo,
	&t1734____RenewOnCallTime_PropertyInfo,
	&t1734____SponsorshipTimeout_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8873_MI = 
{
	".ctor", (methodPointerType)&m8873, &t1734_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3669, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t61_0_0_0;
extern void* RuntimeInvoker_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m8874_MI = 
{
	"get_CurrentLeaseTime", (methodPointerType)&m8874, &t1734_TI, &t61_0_0_0, RuntimeInvoker_t61, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, false, 3670, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1735_0_0_0;
extern void* RuntimeInvoker_t1735 (MethodInfo* method, void* obj, void** args);
MethodInfo m8875_MI = 
{
	"get_CurrentState", (methodPointerType)&m8875, &t1734_TI, &t1735_0_0_0, RuntimeInvoker_t1735, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 3671, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8876_MI = 
{
	"Activate", (methodPointerType)&m8876, &t1734_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 3672, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t61_0_0_0;
static ParameterInfo t1734_m8877_ParameterInfos[] = 
{
	{"value", 0, 134222228, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m8877_MI = 
{
	"set_InitialLeaseTime", (methodPointerType)&m8877, &t1734_TI, &t109_0_0_0, RuntimeInvoker_t109_t61, t1734_m8877_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 7, 1, false, false, 3673, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t61_0_0_0;
static ParameterInfo t1734_m8878_ParameterInfos[] = 
{
	{"value", 0, 134222229, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m8878_MI = 
{
	"set_RenewOnCallTime", (methodPointerType)&m8878, &t1734_TI, &t109_0_0_0, RuntimeInvoker_t109_t61, t1734_m8878_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 8, 1, false, false, 3674, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t61_0_0_0;
static ParameterInfo t1734_m8879_ParameterInfos[] = 
{
	{"value", 0, 134222230, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m8879_MI = 
{
	"set_SponsorshipTimeout", (methodPointerType)&m8879, &t1734_TI, &t109_0_0_0, RuntimeInvoker_t109_t61, t1734_m8879_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 9, 1, false, false, 3675, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t61_0_0_0;
static ParameterInfo t1734_m8880_ParameterInfos[] = 
{
	{"renewalTime", 0, 134222231, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t61_0_0_0;
extern void* RuntimeInvoker_t61_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m8880_MI = 
{
	"Renew", (methodPointerType)&m8880, &t1734_TI, &t61_0_0_0, RuntimeInvoker_t61_t61, t1734_m8880_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 11, 1, false, false, 3676, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1736_0_0_0;
static ParameterInfo t1734_m8881_ParameterInfos[] = 
{
	{"obj", 0, 134222232, &EmptyCustomAttributesCache, &t1736_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8881_MI = 
{
	"Unregister", (methodPointerType)&m8881, &t1734_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1734_m8881_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 12, 1, false, false, 3677, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8882_MI = 
{
	"UpdateState", (methodPointerType)&m8882, &t1734_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 3678, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8883_MI = 
{
	"CheckNextSponsor", (methodPointerType)&m8883, &t1734_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 3679, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1734_m8884_ParameterInfos[] = 
{
	{"state", 0, 134222233, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"timedOut", 1, 134222234, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8884_MI = 
{
	"ProcessSponsorResponse", (methodPointerType)&m8884, &t1734_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t111, t1734_m8884_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 3680, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1734_MIs[] =
{
	&m8873_MI,
	&m8874_MI,
	&m8875_MI,
	&m8876_MI,
	&m8877_MI,
	&m8878_MI,
	&m8879_MI,
	&m8880_MI,
	&m8881_MI,
	&m8882_MI,
	&m8883_MI,
	&m8884_MI,
	NULL
};
extern TypeInfo t1732_TI;
static TypeInfo* t1734_TI__nestedTypes[2] =
{
	&t1732_TI,
	NULL
};
static MethodInfo* t1734_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m4792_MI,
	&m4793_MI,
	&m8875_MI,
	&m8877_MI,
	&m8878_MI,
	&m8879_MI,
	&m8874_MI,
	&m8880_MI,
	&m8881_MI,
};
static TypeInfo* t1734_ITIs[] = 
{
	&t1733_TI,
};
static Il2CppInterfaceOffsetPair t1734_IOs[] = 
{
	{ &t1733_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1734_0_0_0;
extern Il2CppType t1734_1_0_0;
struct t1734;
TypeInfo t1734_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Lease", "System.Runtime.Remoting.Lifetime", t1734_MIs, t1734_PIs, t1734_FIs, NULL, &t1037_TI, t1734_TI__nestedTypes, NULL, &t1734_TI, t1734_ITIs, t1734_VT, &EmptyCustomAttributesCache, &t1734_TI, &t1734_0_0_0, &t1734_1_0_0, t1734_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1734), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 12, 5, 8, 0, 1, 13, 1, 1};
#include "t1737.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1737_TI;
#include "t1737MD.h"

#include "t1426.h"
#include "t1738.h"
#include "t1942.h"
extern TypeInfo t1942_TI;
extern TypeInfo t1738_TI;
extern TypeInfo t1426_TI;
#include "t1426MD.h"
#include "t1942MD.h"
#include "t1738MD.h"
extern MethodInfo m9139_MI;
extern MethodInfo m8887_MI;
extern MethodInfo m8889_MI;
extern MethodInfo m10957_MI;
extern MethodInfo m8891_MI;
extern MethodInfo m10103_MI;
extern MethodInfo m10106_MI;
extern MethodInfo m9136_MI;
extern MethodInfo m8888_MI;


extern MethodInfo m8885_MI;
 void m8885 (t1737 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t996_TI));
		t996 * L_0 = (t996 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t996_TI));
		m4773(L_0, &m4773_MI);
		__this->f0 = L_0;
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m8886_MI;
 void m8886 (t1737 * __this, t1426 * p0, MethodInfo* method){
	t5 * V_0 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t996 * L_0 = (__this->f0);
		t5 * L_1 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m4970_MI, L_0);
		V_0 = L_1;
		m4795(NULL, V_0, &m4795_MI);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			t1734 * L_2 = m9139(p0, &m9139_MI);
			m8876(L_2, &m8876_MI);
			t996 * L_3 = (__this->f0);
			VirtFuncInvoker1< int32_t, t5 * >::Invoke(&m4784_MI, L_3, p0);
			t1738 * L_4 = (__this->f1);
			if (L_4)
			{
				goto IL_0038;
			}
		}

IL_0032:
		{
			m8887(__this, &m8887_MI);
		}

IL_0038:
		{
			// IL_0038: leave.s IL_0041
			leaveInstructions[0] = 0x41; // 1
			THROW_SENTINEL(IL_0041);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_003a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_003a;
	}

IL_003a:
	{ // begin finally (depth: 1)
		m4796(NULL, V_0, &m4796_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x41:
				goto IL_0041;
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
	} // end finally (depth: 1)

IL_0041:
	{
		return;
	}
}
 void m8887 (t1737 * __this, MethodInfo* method){
	{
		t124 L_0 = { &m8889_MI };
		t1942 * L_1 = (t1942 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1942_TI));
		m10957(L_1, __this, L_0, &m10957_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1739_TI));
		t61  L_2 = m8891(NULL, &m8891_MI);
		t61  L_3 = m8891(NULL, &m8891_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1738_TI));
		t1738 * L_4 = (t1738 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1738_TI));
		m10103(L_4, L_1, NULL, L_2, L_3, &m10103_MI);
		__this->f1 = L_4;
		return;
	}
}
 void m8888 (t1737 * __this, MethodInfo* method){
	t1738 * V_0 = {0};
	{
		t1738 * L_0 = (__this->f1);
		V_0 = L_0;
		__this->f1 = (t1738 *)NULL;
		VirtActionInvoker0::Invoke(&m10106_MI, V_0);
		return;
	}
}
 void m8889 (t1737 * __this, t5 * p0, MethodInfo* method){
	t5 * V_0 = {0};
	int32_t V_1 = 0;
	t1426 * V_2 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t996 * L_0 = (__this->f0);
		t5 * L_1 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m4970_MI, L_0);
		V_0 = L_1;
		m4795(NULL, V_0, &m4795_MI);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			V_1 = 0;
			goto IL_0059;
		}

IL_0016:
		{
			t996 * L_2 = (__this->f0);
			t5 * L_3 = (t5 *)VirtFuncInvoker1< t5 *, int32_t >::Invoke(&m4771_MI, L_2, V_1);
			V_2 = ((t1426 *)Castclass(L_3, InitializedTypeInfo(&t1426_TI)));
			t1734 * L_4 = m9139(V_2, &m9139_MI);
			m8882(L_4, &m8882_MI);
			t1734 * L_5 = m9139(V_2, &m9139_MI);
			int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8875_MI, L_5);
			if ((((uint32_t)L_6) != ((uint32_t)4)))
			{
				goto IL_0055;
			}
		}

IL_0041:
		{
			t996 * L_7 = (__this->f0);
			VirtActionInvoker1< int32_t >::Invoke(&m5057_MI, L_7, V_1);
			VirtActionInvoker0::Invoke(&m9136_MI, V_2);
			goto IL_0059;
		}

IL_0055:
		{
			V_1 = ((int32_t)(V_1+1));
		}

IL_0059:
		{
			t996 * L_8 = (__this->f0);
			int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4769_MI, L_8);
			if ((((int32_t)V_1) < ((int32_t)L_9)))
			{
				goto IL_0016;
			}
		}

IL_0067:
		{
			t996 * L_10 = (__this->f0);
			int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4769_MI, L_10);
			if (L_11)
			{
				goto IL_007a;
			}
		}

IL_0074:
		{
			m8888(__this, &m8888_MI);
		}

IL_007a:
		{
			// IL_007a: leave.s IL_0083
			leaveInstructions[0] = 0x83; // 1
			THROW_SENTINEL(IL_0083);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_007c;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_007c;
	}

IL_007c:
	{ // begin finally (depth: 1)
		m4796(NULL, V_0, &m4796_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x83:
				goto IL_0083;
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
	} // end finally (depth: 1)

IL_0083:
	{
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Lifetime.LeaseManager
extern Il2CppType t996_0_0_1;
FieldInfo t1737_f0_FieldInfo = 
{
	"_objects", &t996_0_0_1, &t1737_TI, offsetof(t1737, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1738_0_0_1;
FieldInfo t1737_f1_FieldInfo = 
{
	"_timer", &t1738_0_0_1, &t1737_TI, offsetof(t1737, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1737_FIs[] =
{
	&t1737_f0_FieldInfo,
	&t1737_f1_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8885_MI = 
{
	".ctor", (methodPointerType)&m8885, &t1737_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3685, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1426_0_0_0;
extern Il2CppType t1426_0_0_0;
static ParameterInfo t1737_m8886_ParameterInfos[] = 
{
	{"identity", 0, 134222242, &EmptyCustomAttributesCache, &t1426_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8886_MI = 
{
	"TrackLifetime", (methodPointerType)&m8886, &t1737_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1737_m8886_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 3686, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8887_MI = 
{
	"StartManager", (methodPointerType)&m8887, &t1737_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 3687, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8888_MI = 
{
	"StopManager", (methodPointerType)&m8888, &t1737_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 3688, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1737_m8889_ParameterInfos[] = 
{
	{"state", 0, 134222243, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8889_MI = 
{
	"ManageLeases", (methodPointerType)&m8889, &t1737_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1737_m8889_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 3689, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1737_MIs[] =
{
	&m8885_MI,
	&m8886_MI,
	&m8887_MI,
	&m8888_MI,
	&m8889_MI,
	NULL
};
static MethodInfo* t1737_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1737_0_0_0;
extern Il2CppType t1737_1_0_0;
struct t1737;
TypeInfo t1737_TI = 
{
	&g_mscorlib_dll_Image, NULL, "LeaseManager", "System.Runtime.Remoting.Lifetime", t1737_MIs, NULL, t1737_FIs, NULL, &t5_TI, NULL, NULL, &t1737_TI, NULL, t1737_VT, &EmptyCustomAttributesCache, &t1737_TI, &t1737_0_0_0, &t1737_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1737), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 5, 0, 2, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
#include "t1735MD.h"



// Metadata Definition System.Runtime.Remoting.Lifetime.LeaseState
extern Il2CppType t110_0_0_1542;
FieldInfo t1735_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1735_TI, offsetof(t1735, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f2_FieldInfo = 
{
	"Null", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f3_FieldInfo = 
{
	"Initial", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f4_FieldInfo = 
{
	"Active", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f5_FieldInfo = 
{
	"Renewing", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1735_0_0_32854;
FieldInfo t1735_f6_FieldInfo = 
{
	"Expired", &t1735_0_0_32854, &t1735_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1735_FIs[] =
{
	&t1735_f1_FieldInfo,
	&t1735_f2_FieldInfo,
	&t1735_f3_FieldInfo,
	&t1735_f4_FieldInfo,
	&t1735_f5_FieldInfo,
	&t1735_f6_FieldInfo,
	NULL
};
static const int32_t t1735_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1735_f2_DefaultValue = 
{
	&t1735_f2_FieldInfo, { (char*)&t1735_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1735_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1735_f3_DefaultValue = 
{
	&t1735_f3_FieldInfo, { (char*)&t1735_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1735_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1735_f4_DefaultValue = 
{
	&t1735_f4_FieldInfo, { (char*)&t1735_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1735_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1735_f5_DefaultValue = 
{
	&t1735_f5_FieldInfo, { (char*)&t1735_f5_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1735_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1735_f6_DefaultValue = 
{
	&t1735_f6_FieldInfo, { (char*)&t1735_f6_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1735_FDVs[] = 
{
	&t1735_f2_DefaultValue,
	&t1735_f3_DefaultValue,
	&t1735_f4_DefaultValue,
	&t1735_f5_DefaultValue,
	&t1735_f6_DefaultValue,
	NULL
};
static MethodInfo* t1735_MIs[] =
{
	NULL
};
static MethodInfo* t1735_VT[] =
{
	&m482_MI,
	&m465_MI,
	&m483_MI,
	&m484_MI,
	&m485_MI,
	&m486_MI,
	&m487_MI,
	&m488_MI,
	&m489_MI,
	&m490_MI,
	&m491_MI,
	&m492_MI,
	&m493_MI,
	&m494_MI,
	&m495_MI,
	&m496_MI,
	&m497_MI,
	&m498_MI,
	&m499_MI,
	&m500_MI,
	&m501_MI,
	&m502_MI,
	&m503_MI,
};
static Il2CppInterfaceOffsetPair t1735_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
void t1735_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1735__CustomAttributeCache = {
1,
NULL,
&t1735_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1735_0_0_0;
extern Il2CppType t1735_1_0_0;
extern CustomAttributesCache t1735__CustomAttributeCache;
TypeInfo t1735_TI = 
{
	&g_mscorlib_dll_Image, NULL, "LeaseState", "System.Runtime.Remoting.Lifetime", t1735_MIs, NULL, t1735_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1735_VT, &t1735__CustomAttributeCache, &t110_TI, &t1735_0_0_0, &t1735_1_0_0, t1735_IOs, NULL, NULL, t1735_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1735)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#include "t1739.h"
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m10864_MI;


extern MethodInfo m8890_MI;
 void m8890 (t5 * __this, MethodInfo* method){
	{
		t1737 * L_0 = (t1737 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1737_TI));
		m8885(L_0, &m8885_MI);
		((t1739_SFs*)InitializedTypeInfo(&t1739_TI)->static_fields)->f4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t61_TI));
		t61  L_1 = m10864(NULL, (10.0), &m10864_MI);
		((t1739_SFs*)InitializedTypeInfo(&t1739_TI)->static_fields)->f0 = L_1;
		t61  L_2 = m10863(NULL, (5.0), &m10863_MI);
		((t1739_SFs*)InitializedTypeInfo(&t1739_TI)->static_fields)->f1 = L_2;
		t61  L_3 = m10863(NULL, (2.0), &m10863_MI);
		((t1739_SFs*)InitializedTypeInfo(&t1739_TI)->static_fields)->f2 = L_3;
		t61  L_4 = m10863(NULL, (2.0), &m10863_MI);
		((t1739_SFs*)InitializedTypeInfo(&t1739_TI)->static_fields)->f3 = L_4;
		return;
	}
}
 t61  m8891 (t5 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1739_TI));
		return (((t1739_SFs*)InitializedTypeInfo(&t1739_TI)->static_fields)->f0);
	}
}
 t61  m8892 (t5 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1739_TI));
		return (((t1739_SFs*)InitializedTypeInfo(&t1739_TI)->static_fields)->f1);
	}
}
 t61  m8893 (t5 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1739_TI));
		return (((t1739_SFs*)InitializedTypeInfo(&t1739_TI)->static_fields)->f2);
	}
}
 t61  m8894 (t5 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1739_TI));
		return (((t1739_SFs*)InitializedTypeInfo(&t1739_TI)->static_fields)->f3);
	}
}
extern MethodInfo m8895_MI;
 void m8895 (t5 * __this, t1426 * p0, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1739_TI));
		m8886((((t1739_SFs*)InitializedTypeInfo(&t1739_TI)->static_fields)->f4), p0, &m8886_MI);
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Lifetime.LifetimeServices
extern Il2CppType t61_0_0_17;
FieldInfo t1739_f0_FieldInfo = 
{
	"_leaseManagerPollTime", &t61_0_0_17, &t1739_TI, offsetof(t1739_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t61_0_0_17;
FieldInfo t1739_f1_FieldInfo = 
{
	"_leaseTime", &t61_0_0_17, &t1739_TI, offsetof(t1739_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t61_0_0_17;
FieldInfo t1739_f2_FieldInfo = 
{
	"_renewOnCallTime", &t61_0_0_17, &t1739_TI, offsetof(t1739_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t61_0_0_17;
FieldInfo t1739_f3_FieldInfo = 
{
	"_sponsorshipTimeout", &t61_0_0_17, &t1739_TI, offsetof(t1739_SFs, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1737_0_0_17;
FieldInfo t1739_f4_FieldInfo = 
{
	"_leaseManager", &t1737_0_0_17, &t1739_TI, offsetof(t1739_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1739_FIs[] =
{
	&t1739_f0_FieldInfo,
	&t1739_f1_FieldInfo,
	&t1739_f2_FieldInfo,
	&t1739_f3_FieldInfo,
	&t1739_f4_FieldInfo,
	NULL
};
static PropertyInfo t1739____LeaseManagerPollTime_PropertyInfo = 
{
	&t1739_TI, "LeaseManagerPollTime", &m8891_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1739____LeaseTime_PropertyInfo = 
{
	&t1739_TI, "LeaseTime", &m8892_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1739____RenewOnCallTime_PropertyInfo = 
{
	&t1739_TI, "RenewOnCallTime", &m8893_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1739____SponsorshipTimeout_PropertyInfo = 
{
	&t1739_TI, "SponsorshipTimeout", &m8894_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1739_PIs[] =
{
	&t1739____LeaseManagerPollTime_PropertyInfo,
	&t1739____LeaseTime_PropertyInfo,
	&t1739____RenewOnCallTime_PropertyInfo,
	&t1739____SponsorshipTimeout_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8890_MI = 
{
	".cctor", (methodPointerType)&m8890, &t1739_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3690, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t61_0_0_0;
extern void* RuntimeInvoker_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m8891_MI = 
{
	"get_LeaseManagerPollTime", (methodPointerType)&m8891, &t1739_TI, &t61_0_0_0, RuntimeInvoker_t61, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 3691, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t61_0_0_0;
extern void* RuntimeInvoker_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m8892_MI = 
{
	"get_LeaseTime", (methodPointerType)&m8892, &t1739_TI, &t61_0_0_0, RuntimeInvoker_t61, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 3692, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t61_0_0_0;
extern void* RuntimeInvoker_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m8893_MI = 
{
	"get_RenewOnCallTime", (methodPointerType)&m8893, &t1739_TI, &t61_0_0_0, RuntimeInvoker_t61, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 3693, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t61_0_0_0;
extern void* RuntimeInvoker_t61 (MethodInfo* method, void* obj, void** args);
MethodInfo m8894_MI = 
{
	"get_SponsorshipTimeout", (methodPointerType)&m8894, &t1739_TI, &t61_0_0_0, RuntimeInvoker_t61, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 3694, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1426_0_0_0;
static ParameterInfo t1739_m8895_ParameterInfos[] = 
{
	{"identity", 0, 134222244, &EmptyCustomAttributesCache, &t1426_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8895_MI = 
{
	"TrackLifetime", (methodPointerType)&m8895, &t1739_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1739_m8895_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 3695, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1739_MIs[] =
{
	&m8890_MI,
	&m8891_MI,
	&m8892_MI,
	&m8893_MI,
	&m8894_MI,
	&m8895_MI,
	NULL
};
static MethodInfo* t1739_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t1739_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1739__CustomAttributeCache = {
1,
NULL,
&t1739_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1739_0_0_0;
extern Il2CppType t1739_1_0_0;
struct t1739;
extern CustomAttributesCache t1739__CustomAttributeCache;
TypeInfo t1739_TI = 
{
	&g_mscorlib_dll_Image, NULL, "LifetimeServices", "System.Runtime.Remoting.Lifetime", t1739_MIs, t1739_PIs, t1739_FIs, NULL, &t5_TI, NULL, NULL, &t1739_TI, NULL, t1739_VT, &t1739__CustomAttributeCache, &t1739_TI, &t1739_0_0_0, &t1739_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1739), 0, -1, sizeof(t1739_SFs), 0, -1, 257, 0, false, false, false, false, false, false, false, false, false, true, false, false, 6, 4, 5, 0, 0, 4, 0, 0};
#include "t1740.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1740_TI;
#include "t1740MD.h"



// Metadata Definition System.Runtime.Remoting.Messaging.ArgInfoType
extern Il2CppType t494_0_0_1542;
FieldInfo t1740_f1_FieldInfo = 
{
	"value__", &t494_0_0_1542, &t1740_TI, offsetof(t1740, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1740_0_0_32854;
FieldInfo t1740_f2_FieldInfo = 
{
	"In", &t1740_0_0_32854, &t1740_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1740_0_0_32854;
FieldInfo t1740_f3_FieldInfo = 
{
	"Out", &t1740_0_0_32854, &t1740_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1740_FIs[] =
{
	&t1740_f1_FieldInfo,
	&t1740_f2_FieldInfo,
	&t1740_f3_FieldInfo,
	NULL
};
static const uint8_t t1740_f2_DefaultValueData = 0;
extern Il2CppType t494_0_0_0;
static Il2CppFieldDefaultValueEntry t1740_f2_DefaultValue = 
{
	&t1740_f2_FieldInfo, { (char*)&t1740_f2_DefaultValueData, &t494_0_0_0 }};
static const uint8_t t1740_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1740_f3_DefaultValue = 
{
	&t1740_f3_FieldInfo, { (char*)&t1740_f3_DefaultValueData, &t494_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1740_FDVs[] = 
{
	&t1740_f2_DefaultValue,
	&t1740_f3_DefaultValue,
	NULL
};
static MethodInfo* t1740_MIs[] =
{
	NULL
};
static MethodInfo* t1740_VT[] =
{
	&m482_MI,
	&m465_MI,
	&m483_MI,
	&m484_MI,
	&m485_MI,
	&m486_MI,
	&m487_MI,
	&m488_MI,
	&m489_MI,
	&m490_MI,
	&m491_MI,
	&m492_MI,
	&m493_MI,
	&m494_MI,
	&m495_MI,
	&m496_MI,
	&m497_MI,
	&m498_MI,
	&m499_MI,
	&m500_MI,
	&m501_MI,
	&m502_MI,
	&m503_MI,
};
static Il2CppInterfaceOffsetPair t1740_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1740_0_0_0;
extern Il2CppType t1740_1_0_0;
#include "t494.h"
extern TypeInfo t494_TI;
TypeInfo t1740_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ArgInfoType", "System.Runtime.Remoting.Messaging", t1740_MIs, NULL, t1740_FIs, NULL, &t18_TI, NULL, NULL, &t494_TI, NULL, t1740_VT, &EmptyCustomAttributesCache, &t494_TI, &t1740_0_0_0, &t1740_1_0_0, t1740_IOs, NULL, NULL, t1740_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1740)+ sizeof (Il2CppObject), sizeof (uint8_t), sizeof(uint8_t), 0, 0, -1, 256, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 3, 0, 0, 23, 0, 3};
#include "t1741.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1741_TI;
#include "t1741MD.h"

extern TypeInfo t776_TI;
extern TypeInfo t55_TI;
#include "t774MD.h"
#include "t775MD.h"
extern MethodInfo m3586_MI;
extern MethodInfo m3587_MI;
extern MethodInfo m6784_MI;
extern MethodInfo m8719_MI;


extern MethodInfo m8896_MI;
 void m8896 (t1741 * __this, t774 * p0, uint8_t p1, MethodInfo* method){
	t776* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		m460(__this, &m460_MI);
		__this->f2 = p0;
		t774 * L_0 = (__this->f2);
		t776* L_1 = (t776*)VirtFuncInvoker0< t776* >::Invoke(&m3586_MI, L_0);
		V_0 = L_1;
		__this->f0 = ((t55*)SZArrayNew(InitializedTypeInfo(&t55_TI), (((int32_t)(((t107 *)V_0)->max_length)))));
		__this->f1 = 0;
		if (p1)
		{
			goto IL_0069;
		}
	}
	{
		V_1 = 0;
		goto IL_0061;
	}

IL_0035:
	{
		int32_t L_2 = V_1;
		t114 * L_3 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3587_MI, (*(t775 **)(t775 **)SZArrayLdElema(V_0, L_2)));
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6784_MI, L_3);
		if (L_4)
		{
			goto IL_005d;
		}
	}
	{
		t55* L_5 = (__this->f0);
		int32_t L_6 = (__this->f1);
		int32_t L_7 = L_6;
		V_3 = L_7;
		__this->f1 = ((int32_t)(L_7+1));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_5, V_3)) = (int32_t)V_1;
	}

IL_005d:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0061:
	{
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t107 *)V_0)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_00a9;
	}

IL_0069:
	{
		V_2 = 0;
		goto IL_00a3;
	}

IL_006d:
	{
		int32_t L_8 = V_2;
		t114 * L_9 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3587_MI, (*(t775 **)(t775 **)SZArrayLdElema(V_0, L_8)));
		bool L_10 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6784_MI, L_9);
		if (L_10)
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_11 = V_2;
		bool L_12 = m8719((*(t775 **)(t775 **)SZArrayLdElema(V_0, L_11)), &m8719_MI);
		if (!L_12)
		{
			goto IL_009f;
		}
	}

IL_0086:
	{
		t55* L_13 = (__this->f0);
		int32_t L_14 = (__this->f1);
		int32_t L_15 = L_14;
		V_3 = L_15;
		__this->f1 = ((int32_t)(L_15+1));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_13, V_3)) = (int32_t)V_2;
	}

IL_009f:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_00a3:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t107 *)V_0)->max_length))))))
		{
			goto IL_006d;
		}
	}

IL_00a9:
	{
		return;
	}
}
extern MethodInfo m8897_MI;
 int32_t m8897 (t1741 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m8898_MI;
 t168* m8898 (t1741 * __this, t168* p0, MethodInfo* method){
	t168* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->f1);
		V_0 = ((t168*)SZArrayNew(InitializedTypeInfo(&t168_TI), L_0));
		V_1 = 0;
		goto IL_0021;
	}

IL_0010:
	{
		t55* L_1 = (__this->f0);
		int32_t L_2 = V_1;
		int32_t L_3 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_2));
		ArrayElementTypeCheck (V_0, (*(t5 **)(t5 **)SZArrayLdElema(p0, L_3)));
		*((t5 **)(t5 **)SZArrayLdElema(V_0, V_1)) = (t5 *)(*(t5 **)(t5 **)SZArrayLdElema(p0, L_3));
		V_1 = ((int32_t)(V_1+1));
	}

IL_0021:
	{
		int32_t L_4 = (__this->f1);
		if ((((int32_t)V_1) < ((int32_t)L_4)))
		{
			goto IL_0010;
		}
	}
	{
		return V_0;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.ArgInfo
extern Il2CppType t55_0_0_1;
FieldInfo t1741_f0_FieldInfo = 
{
	"_paramMap", &t55_0_0_1, &t1741_TI, offsetof(t1741, f0), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1741_f1_FieldInfo = 
{
	"_inoutArgCount", &t110_0_0_1, &t1741_TI, offsetof(t1741, f1), &EmptyCustomAttributesCache};
extern Il2CppType t774_0_0_1;
FieldInfo t1741_f2_FieldInfo = 
{
	"_method", &t774_0_0_1, &t1741_TI, offsetof(t1741, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1741_FIs[] =
{
	&t1741_f0_FieldInfo,
	&t1741_f1_FieldInfo,
	&t1741_f2_FieldInfo,
	NULL
};
extern Il2CppType t774_0_0_0;
extern Il2CppType t774_0_0_0;
extern Il2CppType t1740_0_0_0;
static ParameterInfo t1741_m8896_ParameterInfos[] = 
{
	{"method", 0, 134222245, &EmptyCustomAttributesCache, &t774_0_0_0},
	{"type", 1, 134222246, &EmptyCustomAttributesCache, &t1740_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t494 (MethodInfo* method, void* obj, void** args);
MethodInfo m8896_MI = 
{
	".ctor", (methodPointerType)&m8896, &t1741_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t494, t1741_m8896_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 3696, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8897_MI = 
{
	"GetInOutArgCount", (methodPointerType)&m8897, &t1741_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 3697, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
static ParameterInfo t1741_m8898_ParameterInfos[] = 
{
	{"args", 0, 134222247, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8898_MI = 
{
	"GetInOutArgs", (methodPointerType)&m8898, &t1741_TI, &t168_0_0_0, RuntimeInvoker_t5_t5, t1741_m8898_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 3698, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1741_MIs[] =
{
	&m8896_MI,
	&m8897_MI,
	&m8898_MI,
	NULL
};
static MethodInfo* t1741_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1741_0_0_0;
extern Il2CppType t1741_1_0_0;
struct t1741;
TypeInfo t1741_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ArgInfo", "System.Runtime.Remoting.Messaging", t1741_MIs, NULL, t1741_FIs, NULL, &t5_TI, NULL, NULL, &t1741_TI, NULL, t1741_VT, &EmptyCustomAttributesCache, &t1741_TI, &t1741_0_0_0, &t1741_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1741), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 3, 0, 0, 4, 0, 0};
#include "t1742.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1742_TI;
#include "t1742MD.h"

#include "t1313.h"
#include "t1744.h"
#include "t491.h"
extern TypeInfo t1313_TI;
extern TypeInfo t491_TI;
#include "t1313MD.h"
#include "t491MD.h"
#include "t1381MD.h"
#include "t222MD.h"
extern MethodInfo m6018_MI;
extern MethodInfo m2164_MI;
extern MethodInfo m8901_MI;
extern MethodInfo m6019_MI;
extern MethodInfo m6868_MI;


extern MethodInfo m8899_MI;
 void m8899 (t1742 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m8900_MI;
 t5 * m8900 (t1742 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f0);
		return L_0;
	}
}
 t1314 * m8901 (t1742 * __this, MethodInfo* method){
	t1742 * V_0 = {0};
	t1314 * V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		V_0 = __this;
		m4795(NULL, V_0, &m4795_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1314 * L_0 = (__this->f1);
			if (L_0)
			{
				goto IL_0021;
			}
		}

IL_0010:
		{
			bool L_1 = (__this->f6);
			t1313 * L_2 = (t1313 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1313_TI));
			m6018(L_2, L_1, &m6018_MI);
			__this->f1 = L_2;
		}

IL_0021:
		{
			t1314 * L_3 = (__this->f1);
			V_1 = L_3;
			// IL_0028: leave.s IL_0033
			leaveInstructions[0] = 0x33; // 1
			THROW_SENTINEL(IL_0033);
			// finally target depth: 1
		}

IL_002a:
		{
			// IL_002a: leave.s IL_0033
			leaveInstructions[0] = 0x33; // 1
			THROW_SENTINEL(IL_0033);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_002c;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_002c;
	}

IL_002c:
	{ // begin finally (depth: 1)
		m4796(NULL, V_0, &m4796_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x33:
				goto IL_0033;
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
	} // end finally (depth: 1)

IL_0033:
	{
		return V_1;
	}
}
extern MethodInfo m8902_MI;
 bool m8902 (t1742 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m8903_MI;
 bool m8903 (t1742 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m8904_MI;
 bool m8904 (t1742 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m8905_MI;
 void m8905 (t1742 * __this, bool p0, MethodInfo* method){
	{
		__this->f7 = p0;
		return;
	}
}
extern MethodInfo m8906_MI;
 t5 * m8906 (t1742 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m8907_MI;
 t5 * m8907 (t1742 * __this, MethodInfo* method){
	{
		return (t5 *)NULL;
	}
}
extern MethodInfo m8908_MI;
 t5 * m8908 (t1742 * __this, t5 * p0, t5 * p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m2164(L_0, &m2164_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m8909_MI;
 t5 * m8909 (t1742 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f14);
		return L_0;
	}
}
extern MethodInfo m8910_MI;
 void m8910 (t1742 * __this, t5 * p0, MethodInfo* method){
	{
		__this->f13 = p0;
		return;
	}
}
extern MethodInfo m8911_MI;
 void m8911 (t1742 * __this, bool p0, MethodInfo* method){
	{
		__this->f5 = p0;
		return;
	}
}
extern MethodInfo m8912_MI;
 t5 * m8912 (t1742 * __this, MethodInfo* method){
	t1742 * V_0 = {0};
	t5 * V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		V_0 = __this;
		m4795(NULL, V_0, &m4795_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			bool L_0 = (__this->f6);
			if (!L_0)
			{
				goto IL_0019;
			}
		}

IL_0010:
		{
			t5 * L_1 = (__this->f14);
			V_1 = L_1;
			// IL_0017: leave.s IL_0035
			leaveInstructions[0] = 0x35; // 1
			THROW_SENTINEL(IL_0035);
			// finally target depth: 1
		}

IL_0019:
		{
			// IL_0019: leave.s IL_0022
			leaveInstructions[0] = 0x22; // 1
			THROW_SENTINEL(IL_0022);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_001b;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_001b;
	}

IL_001b:
	{ // begin finally (depth: 1)
		m4796(NULL, V_0, &m4796_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x35:
				goto IL_0035;
			case 0x22:
				goto IL_0022;
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
	} // end finally (depth: 1)

IL_0022:
	{
		t1314 * L_2 = (t1314 *)VirtFuncInvoker0< t1314 * >::Invoke(&m8901_MI, __this);
		VirtFuncInvoker0< bool >::Invoke(&m6029_MI, L_2);
		t5 * L_3 = (__this->f14);
		return L_3;
	}

IL_0035:
	{
		return V_1;
	}
}
extern MethodInfo m8913_MI;
 t5 * m8913 (t1742 * __this, t5 * p0, MethodInfo* method){
	t1742 * V_0 = {0};
	t222 * V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		__this->f14 = p0;
		V_0 = __this;
		m4795(NULL, V_0, &m4795_MI);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			__this->f6 = 1;
			t1314 * L_0 = (__this->f1);
			if (!L_0)
			{
				goto IL_002f;
			}
		}

IL_001e:
		{
			t1314 * L_1 = (t1314 *)VirtFuncInvoker0< t1314 * >::Invoke(&m8901_MI, __this);
			m6019(((t1313 *)Castclass(L_1, InitializedTypeInfo(&t1313_TI))), &m6019_MI);
		}

IL_002f:
		{
			// IL_002f: leave.s IL_0038
			leaveInstructions[0] = 0x38; // 1
			THROW_SENTINEL(IL_0038);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_0031;
	}

IL_0031:
	{ // begin finally (depth: 1)
		m4796(NULL, V_0, &m4796_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x38:
				goto IL_0038;
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
	} // end finally (depth: 1)

IL_0038:
	{
		t5 * L_2 = (__this->f8);
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		t5 * L_3 = (__this->f8);
		V_1 = ((t222 *)Castclass(L_3, InitializedTypeInfo(&t222_TI)));
		VirtActionInvoker1< t5 * >::Invoke(&m6868_MI, V_1, __this);
	}

IL_0053:
	{
		return (t5 *)NULL;
	}
}
extern MethodInfo m8914_MI;
 t1744 * m8914 (t1742 * __this, MethodInfo* method){
	{
		t1744 * L_0 = (__this->f12);
		return L_0;
	}
}
extern MethodInfo m8915_MI;
 void m8915 (t1742 * __this, t1744 * p0, MethodInfo* method){
	{
		__this->f12 = p0;
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.AsyncResult
extern Il2CppType t5_0_0_1;
FieldInfo t1742_f0_FieldInfo = 
{
	"async_state", &t5_0_0_1, &t1742_TI, offsetof(t1742, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1314_0_0_1;
FieldInfo t1742_f1_FieldInfo = 
{
	"handle", &t1314_0_0_1, &t1742_TI, offsetof(t1742, f1), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_1;
FieldInfo t1742_f2_FieldInfo = 
{
	"async_delegate", &t5_0_0_1, &t1742_TI, offsetof(t1742, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1742_f3_FieldInfo = 
{
	"data", &t124_0_0_1, &t1742_TI, offsetof(t1742, f3), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_1;
FieldInfo t1742_f4_FieldInfo = 
{
	"object_data", &t5_0_0_1, &t1742_TI, offsetof(t1742, f4), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t1742_f5_FieldInfo = 
{
	"sync_completed", &t108_0_0_1, &t1742_TI, offsetof(t1742, f5), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t1742_f6_FieldInfo = 
{
	"completed", &t108_0_0_1, &t1742_TI, offsetof(t1742, f6), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t1742_f7_FieldInfo = 
{
	"endinvoke_called", &t108_0_0_1, &t1742_TI, offsetof(t1742, f7), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_1;
FieldInfo t1742_f8_FieldInfo = 
{
	"async_callback", &t5_0_0_1, &t1742_TI, offsetof(t1742, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1743_0_0_1;
FieldInfo t1742_f9_FieldInfo = 
{
	"current", &t1743_0_0_1, &t1742_TI, offsetof(t1742, f9), &EmptyCustomAttributesCache};
extern Il2CppType t1743_0_0_1;
FieldInfo t1742_f10_FieldInfo = 
{
	"original", &t1743_0_0_1, &t1742_TI, offsetof(t1742, f10), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1742_f11_FieldInfo = 
{
	"gchandle", &t110_0_0_1, &t1742_TI, offsetof(t1742, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1744_0_0_1;
FieldInfo t1742_f12_FieldInfo = 
{
	"call_message", &t1744_0_0_1, &t1742_TI, offsetof(t1742, f12), &EmptyCustomAttributesCache};
extern Il2CppType t1745_0_0_1;
FieldInfo t1742_f13_FieldInfo = 
{
	"message_ctrl", &t1745_0_0_1, &t1742_TI, offsetof(t1742, f13), &EmptyCustomAttributesCache};
extern Il2CppType t1746_0_0_1;
FieldInfo t1742_f14_FieldInfo = 
{
	"reply_message", &t1746_0_0_1, &t1742_TI, offsetof(t1742, f14), &EmptyCustomAttributesCache};
static FieldInfo* t1742_FIs[] =
{
	&t1742_f0_FieldInfo,
	&t1742_f1_FieldInfo,
	&t1742_f2_FieldInfo,
	&t1742_f3_FieldInfo,
	&t1742_f4_FieldInfo,
	&t1742_f5_FieldInfo,
	&t1742_f6_FieldInfo,
	&t1742_f7_FieldInfo,
	&t1742_f8_FieldInfo,
	&t1742_f9_FieldInfo,
	&t1742_f10_FieldInfo,
	&t1742_f11_FieldInfo,
	&t1742_f12_FieldInfo,
	&t1742_f13_FieldInfo,
	&t1742_f14_FieldInfo,
	NULL
};
static PropertyInfo t1742____AsyncState_PropertyInfo = 
{
	&t1742_TI, "AsyncState", &m8900_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1742____AsyncWaitHandle_PropertyInfo = 
{
	&t1742_TI, "AsyncWaitHandle", &m8901_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1742____CompletedSynchronously_PropertyInfo = 
{
	&t1742_TI, "CompletedSynchronously", &m8902_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1742____IsCompleted_PropertyInfo = 
{
	&t1742_TI, "IsCompleted", &m8903_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1742____EndInvokeCalled_PropertyInfo = 
{
	&t1742_TI, "EndInvokeCalled", &m8904_MI, &m8905_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1742____AsyncDelegate_PropertyInfo = 
{
	&t1742_TI, "AsyncDelegate", &m8906_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1742____NextSink_PropertyInfo = 
{
	&t1742_TI, "NextSink", &m8907_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1742____CallMessage_PropertyInfo = 
{
	&t1742_TI, "CallMessage", &m8914_MI, &m8915_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1742_PIs[] =
{
	&t1742____AsyncState_PropertyInfo,
	&t1742____AsyncWaitHandle_PropertyInfo,
	&t1742____CompletedSynchronously_PropertyInfo,
	&t1742____IsCompleted_PropertyInfo,
	&t1742____EndInvokeCalled_PropertyInfo,
	&t1742____AsyncDelegate_PropertyInfo,
	&t1742____NextSink_PropertyInfo,
	&t1742____CallMessage_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8899_MI = 
{
	".ctor", (methodPointerType)&m8899, &t1742_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6275, 0, 255, 0, false, false, 3699, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8900_MI = 
{
	"get_AsyncState", (methodPointerType)&m8900, &t1742_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2502, 0, 7, 0, false, false, 3700, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1314_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8901_MI = 
{
	"get_AsyncWaitHandle", (methodPointerType)&m8901, &t1742_TI, &t1314_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2502, 0, 8, 0, false, false, 3701, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8902_MI = 
{
	"get_CompletedSynchronously", (methodPointerType)&m8902, &t1742_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 3702, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8903_MI = 
{
	"get_IsCompleted", (methodPointerType)&m8903, &t1742_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2502, 0, 10, 0, false, false, 3703, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8904_MI = 
{
	"get_EndInvokeCalled", (methodPointerType)&m8904, &t1742_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3704, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1742_m8905_ParameterInfos[] = 
{
	{"value", 0, 134222248, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8905_MI = 
{
	"set_EndInvokeCalled", (methodPointerType)&m8905, &t1742_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t1742_m8905_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 3705, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8906_MI = 
{
	"get_AsyncDelegate", (methodPointerType)&m8906, &t1742_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2502, 0, 11, 0, false, false, 3706, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1232_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8907_MI = 
{
	"get_NextSink", (methodPointerType)&m8907, &t1742_TI, &t1232_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 12, 0, false, false, 3707, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1746_0_0_0;
extern Il2CppType t1746_0_0_0;
extern Il2CppType t1232_0_0_0;
static ParameterInfo t1742_m8908_ParameterInfos[] = 
{
	{"msg", 0, 134222249, &EmptyCustomAttributesCache, &t1746_0_0_0},
	{"replySink", 1, 134222250, &EmptyCustomAttributesCache, &t1232_0_0_0},
};
extern Il2CppType t1745_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8908_MI = 
{
	"AsyncProcessMessage", (methodPointerType)&m8908, &t1742_TI, &t1745_0_0_0, RuntimeInvoker_t5_t5_t5, t1742_m8908_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 13, 2, false, false, 3708, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1746_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8909_MI = 
{
	"GetReplyMessage", (methodPointerType)&m8909, &t1742_TI, &t1746_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 454, 0, 14, 0, false, false, 3709, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1745_0_0_0;
extern Il2CppType t1745_0_0_0;
static ParameterInfo t1742_m8910_ParameterInfos[] = 
{
	{"mc", 0, 134222251, &EmptyCustomAttributesCache, &t1745_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8910_MI = 
{
	"SetMessageCtrl", (methodPointerType)&m8910, &t1742_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1742_m8910_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 15, 1, false, false, 3710, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1742_m8911_ParameterInfos[] = 
{
	{"completed", 0, 134222252, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8911_MI = 
{
	"SetCompletedSynchronously", (methodPointerType)&m8911, &t1742_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t1742_m8911_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 3711, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1746_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8912_MI = 
{
	"EndInvoke", (methodPointerType)&m8912, &t1742_TI, &t1746_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 3712, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1746_0_0_0;
static ParameterInfo t1742_m8913_ParameterInfos[] = 
{
	{"msg", 0, 134222253, &EmptyCustomAttributesCache, &t1746_0_0_0},
};
extern Il2CppType t1746_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8913_MI = 
{
	"SyncProcessMessage", (methodPointerType)&m8913, &t1742_TI, &t1746_0_0_0, RuntimeInvoker_t5_t5, t1742_m8913_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 16, 1, false, false, 3713, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1744_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8914_MI = 
{
	"get_CallMessage", (methodPointerType)&m8914, &t1742_TI, &t1744_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 3714, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1744_0_0_0;
extern Il2CppType t1744_0_0_0;
static ParameterInfo t1742_m8915_ParameterInfos[] = 
{
	{"value", 0, 134222254, &EmptyCustomAttributesCache, &t1744_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8915_MI = 
{
	"set_CallMessage", (methodPointerType)&m8915, &t1742_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1742_m8915_ParameterInfos, &EmptyCustomAttributesCache, 2179, 0, 255, 1, false, false, 3715, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1742_MIs[] =
{
	&m8899_MI,
	&m8900_MI,
	&m8901_MI,
	&m8902_MI,
	&m8903_MI,
	&m8904_MI,
	&m8905_MI,
	&m8906_MI,
	&m8907_MI,
	&m8908_MI,
	&m8909_MI,
	&m8910_MI,
	&m8911_MI,
	&m8912_MI,
	&m8913_MI,
	&m8914_MI,
	&m8915_MI,
	NULL
};
static MethodInfo* t1742_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m8900_MI,
	&m8901_MI,
	&m8903_MI,
	&m8900_MI,
	&m8901_MI,
	&m8902_MI,
	&m8903_MI,
	&m8906_MI,
	&m8907_MI,
	&m8908_MI,
	&m8909_MI,
	&m8910_MI,
	&m8913_MI,
};
static TypeInfo* t1742_ITIs[] = 
{
	&t221_TI,
	&t1232_TI,
};
static Il2CppInterfaceOffsetPair t1742_IOs[] = 
{
	{ &t221_TI, 4},
	{ &t1232_TI, 7},
};
void t1742_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1742__CustomAttributeCache = {
1,
NULL,
&t1742_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1742_0_0_0;
extern Il2CppType t1742_1_0_0;
struct t1742;
extern CustomAttributesCache t1742__CustomAttributeCache;
TypeInfo t1742_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AsyncResult", "System.Runtime.Remoting.Messaging", t1742_MIs, t1742_PIs, t1742_FIs, NULL, &t5_TI, NULL, NULL, &t1742_TI, t1742_ITIs, t1742_VT, &t1742__CustomAttributeCache, &t1742_TI, &t1742_0_0_0, &t1742_1_0_0, t1742_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1742), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 17, 8, 15, 0, 0, 17, 2, 2};
#ifndef _MSC_VER
#else
#endif

#include "t1747.h"
#include "t829.h"
#include "t830.h"
#include "t1748.h"
#include "t623.h"
extern TypeInfo t1747_TI;
extern TypeInfo t986_TI;
extern TypeInfo t1748_TI;
extern TypeInfo t623_TI;
extern TypeInfo t829_TI;
extern TypeInfo t830_TI;
#include "t1747MD.h"
#include "t1748MD.h"
#include "t1749MD.h"
#include "t623MD.h"
#include "t829MD.h"
extern MethodInfo m6803_MI;
extern MethodInfo m8957_MI;
extern MethodInfo m8947_MI;
extern MethodInfo m3642_MI;
extern MethodInfo m8946_MI;
extern MethodInfo m8930_MI;
extern MethodInfo m8980_MI;
extern MethodInfo m4833_MI;
extern MethodInfo m4834_MI;
extern MethodInfo m4835_MI;
extern MethodInfo m8949_MI;
extern MethodInfo m8950_MI;
extern MethodInfo m4748_MI;
extern MethodInfo m4790_MI;


 void m8916 (t1712 * __this, t114 * p0, MethodInfo* method){
	{
		m8947(__this, &m8947_MI);
		__this->f14 = p0;
		t11* L_0 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3642_MI, p0);
		__this->f15 = L_0;
		__this->f16 = 1;
		return;
	}
}
extern MethodInfo m8917_MI;
 void m8917 (t1712 * __this, t829 * p0, t830  p1, MethodInfo* method){
	{
		m8946(__this, p0, p1, &m8946_MI);
		return;
	}
}
extern MethodInfo m8918_MI;
 void m8918 (t1712 * __this, MethodInfo* method){
	t1748 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1748_TI));
		t1748 * L_0 = (t1748 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1748_TI));
		m8930(L_0, __this, &m8930_MI);
		V_0 = L_0;
		__this->f8 = V_0;
		t5 * L_1 = m8980(V_0, &m8980_MI);
		__this->f9 = L_1;
		return;
	}
}
 void m8919 (t1712 * __this, bool p0, MethodInfo* method){
	{
		__this->f16 = p0;
		return;
	}
}
extern MethodInfo m8920_MI;
 t114 * m8920 (t1712 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f14);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		t11* L_1 = (__this->f15);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_2 = m6803(NULL, L_1, &m6803_MI);
		__this->f14 = L_2;
	}

IL_0019:
	{
		t114 * L_3 = (__this->f14);
		return L_3;
	}
}
extern MethodInfo m8921_MI;
 t11* m8921 (t1712 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f15);
		return L_0;
	}
}
extern MethodInfo m8922_MI;
 t5 * m8922 (t1712 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f11);
		return L_0;
	}
}
 void m8923 (t1712 * __this, t5 * p0, MethodInfo* method){
	{
		__this->f11 = p0;
		return;
	}
}
extern MethodInfo m8924_MI;
 t168* m8924 (t1712 * __this, MethodInfo* method){
	{
		t168* L_0 = (__this->f12);
		return L_0;
	}
}
 void m8925 (t1712 * __this, t168* p0, MethodInfo* method){
	{
		__this->f12 = p0;
		return;
	}
}
extern MethodInfo m8926_MI;
 t5 * m8926 (t1712 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f13);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t996_TI));
		t996 * L_1 = (t996 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t996_TI));
		m4773(L_1, &m4773_MI);
		__this->f13 = L_1;
	}

IL_0013:
	{
		t5 * L_2 = (__this->f13);
		return L_2;
	}
}
extern MethodInfo m8927_MI;
 void m8927 (t1712 * __this, t11* p0, t5 * p1, MethodInfo* method){
	t11* V_0 = {0};
	t623 * V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = p0;
		if (!V_0)
		{
			goto IL_00c4;
		}
	}
	{
		if ((((t1712_SFs*)InitializedTypeInfo(&t1712_TI)->static_fields)->f17))
		{
			goto IL_0058;
		}
	}
	{
		t623 * L_0 = (t623 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t623_TI));
		m4833(L_0, 5, &m4833_MI);
		V_1 = L_0;
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1925, 0);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1926, 1);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1927, 2);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1928, 3);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1929, 4);
		((t1712_SFs*)InitializedTypeInfo(&t1712_TI)->static_fields)->f17 = V_1;
	}

IL_0058:
	{
		bool L_1 = (bool)VirtFuncInvoker2< bool, t11*, int32_t* >::Invoke(&m4835_MI, (((t1712_SFs*)InitializedTypeInfo(&t1712_TI)->static_fields)->f17), V_0, (&V_2));
		if (!L_1)
		{
			goto IL_00c4;
		}
	}
	{
		if (V_2 == 0)
		{
			goto IL_0083;
		}
		if (V_2 == 1)
		{
			goto IL_0090;
		}
		if (V_2 == 2)
		{
			goto IL_009d;
		}
		if (V_2 == 3)
		{
			goto IL_00aa;
		}
		if (V_2 == 4)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00c4;
	}

IL_0083:
	{
		__this->f11 = ((t5 *)Castclass(p1, InitializedTypeInfo(&t1711_TI)));
		return;
	}

IL_0090:
	{
		__this->f12 = ((t168*)Castclass(p1, InitializedTypeInfo(&t168_TI)));
		return;
	}

IL_009d:
	{
		__this->f14 = ((t114 *)Castclass(p1, InitializedTypeInfo(&t114_TI)));
		return;
	}

IL_00aa:
	{
		__this->f13 = ((t5 *)Castclass(p1, InitializedTypeInfo(&t1129_TI)));
		return;
	}

IL_00b7:
	{
		__this->f15 = ((t11*)Castclass(p1, (&t11_TI)));
		return;
	}

IL_00c4:
	{
		m8949(__this, p0, p1, &m8949_MI);
		return;
	}
}
extern MethodInfo m8928_MI;
 void m8928 (t1712 * __this, t829 * p0, t830  p1, MethodInfo* method){
	t5 * V_0 = {0};
	{
		m8950(__this, p0, p1, &m8950_MI);
		t5 * L_0 = (__this->f13);
		V_0 = L_0;
		if (!V_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m4748_MI, V_0);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		V_0 = (t5 *)NULL;
	}

IL_001c:
	{
		t5 * L_2 = (__this->f11);
		m4790(p0, (t11*) &_stringLiteral1925, L_2, &m4790_MI);
		t168* L_3 = (__this->f12);
		m4790(p0, (t11*) &_stringLiteral1926, (t5 *)(t5 *)L_3, &m4790_MI);
		m4790(p0, (t11*) &_stringLiteral1927, NULL, &m4790_MI);
		m4790(p0, (t11*) &_stringLiteral1928, V_0, &m4790_MI);
		t11* L_4 = (__this->f15);
		m4790(p0, (t11*) &_stringLiteral1929, L_4, &m4790_MI);
		return;
	}
}
extern MethodInfo m8929_MI;
 t5 * m8929 (t1712 * __this, MethodInfo* method){
	{
		t5 * L_0 = m8957(__this, &m8957_MI);
		return L_0;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.ConstructionCall
extern Il2CppType t1711_0_0_1;
FieldInfo t1712_f11_FieldInfo = 
{
	"_activator", &t1711_0_0_1, &t1712_TI, offsetof(t1712, f11), &EmptyCustomAttributesCache};
extern Il2CppType t168_0_0_1;
FieldInfo t1712_f12_FieldInfo = 
{
	"_activationAttributes", &t168_0_0_1, &t1712_TI, offsetof(t1712, f12), &EmptyCustomAttributesCache};
extern Il2CppType t1129_0_0_1;
FieldInfo t1712_f13_FieldInfo = 
{
	"_contextProperties", &t1129_0_0_1, &t1712_TI, offsetof(t1712, f13), &EmptyCustomAttributesCache};
extern Il2CppType t114_0_0_1;
FieldInfo t1712_f14_FieldInfo = 
{
	"_activationType", &t114_0_0_1, &t1712_TI, offsetof(t1712, f14), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1712_f15_FieldInfo = 
{
	"_activationTypeName", &t11_0_0_1, &t1712_TI, offsetof(t1712, f15), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t1712_f16_FieldInfo = 
{
	"_isContextOk", &t108_0_0_1, &t1712_TI, offsetof(t1712, f16), &EmptyCustomAttributesCache};
extern Il2CppType t623_0_0_17;
extern CustomAttributesCache t1712__CustomAttributeCache_U3CU3Ef__switch$map20;
FieldInfo t1712_f17_FieldInfo = 
{
	"<>f__switch$map20", &t623_0_0_17, &t1712_TI, offsetof(t1712_SFs, f17), &t1712__CustomAttributeCache_U3CU3Ef__switch$map20};
static FieldInfo* t1712_FIs[] =
{
	&t1712_f11_FieldInfo,
	&t1712_f12_FieldInfo,
	&t1712_f13_FieldInfo,
	&t1712_f14_FieldInfo,
	&t1712_f15_FieldInfo,
	&t1712_f16_FieldInfo,
	&t1712_f17_FieldInfo,
	NULL
};
static PropertyInfo t1712____IsContextOk_PropertyInfo = 
{
	&t1712_TI, "IsContextOk", NULL, &m8919_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1712____ActivationType_PropertyInfo = 
{
	&t1712_TI, "ActivationType", &m8920_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1712____ActivationTypeName_PropertyInfo = 
{
	&t1712_TI, "ActivationTypeName", &m8921_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1712____Activator_PropertyInfo = 
{
	&t1712_TI, "Activator", &m8922_MI, &m8923_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1712____CallSiteActivationAttributes_PropertyInfo = 
{
	&t1712_TI, "CallSiteActivationAttributes", &m8924_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1712____ContextProperties_PropertyInfo = 
{
	&t1712_TI, "ContextProperties", &m8926_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1712____Properties_PropertyInfo = 
{
	&t1712_TI, "Properties", &m8929_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1712_PIs[] =
{
	&t1712____IsContextOk_PropertyInfo,
	&t1712____ActivationType_PropertyInfo,
	&t1712____ActivationTypeName_PropertyInfo,
	&t1712____Activator_PropertyInfo,
	&t1712____CallSiteActivationAttributes_PropertyInfo,
	&t1712____ContextProperties_PropertyInfo,
	&t1712____Properties_PropertyInfo,
	NULL
};
extern Il2CppType t114_0_0_0;
static ParameterInfo t1712_m8916_ParameterInfos[] = 
{
	{"type", 0, 134222255, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8916_MI = 
{
	".ctor", (methodPointerType)&m8916, &t1712_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1712_m8916_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 3716, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1712_m8917_ParameterInfos[] = 
{
	{"info", 0, 134222256, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134222257, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m8917_MI = 
{
	".ctor", (methodPointerType)&m8917, &t1712_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1712_m8917_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 3717, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8918_MI = 
{
	"InitDictionary", (methodPointerType)&m8918, &t1712_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 195, 0, 19, 0, false, false, 3718, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1712_m8919_ParameterInfos[] = 
{
	{"value", 0, 134222258, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8919_MI = 
{
	"set_IsContextOk", (methodPointerType)&m8919, &t1712_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t1712_m8919_ParameterInfos, &EmptyCustomAttributesCache, 2179, 0, 255, 1, false, false, 3719, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8920_MI = 
{
	"get_ActivationType", (methodPointerType)&m8920, &t1712_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 22, 0, false, false, 3720, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8921_MI = 
{
	"get_ActivationTypeName", (methodPointerType)&m8921, &t1712_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 23, 0, false, false, 3721, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1711_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8922_MI = 
{
	"get_Activator", (methodPointerType)&m8922, &t1712_TI, &t1711_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 24, 0, false, false, 3722, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1711_0_0_0;
static ParameterInfo t1712_m8923_ParameterInfos[] = 
{
	{"value", 0, 134222259, &EmptyCustomAttributesCache, &t1711_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8923_MI = 
{
	"set_Activator", (methodPointerType)&m8923, &t1712_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1712_m8923_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 25, 1, false, false, 3723, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8924_MI = 
{
	"get_CallSiteActivationAttributes", (methodPointerType)&m8924, &t1712_TI, &t168_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 26, 0, false, false, 3724, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
static ParameterInfo t1712_m8925_ParameterInfos[] = 
{
	{"attributes", 0, 134222260, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8925_MI = 
{
	"SetActivationAttributes", (methodPointerType)&m8925, &t1712_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1712_m8925_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 3725, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1129_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8926_MI = 
{
	"get_ContextProperties", (methodPointerType)&m8926, &t1712_TI, &t1129_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 27, 0, false, false, 3726, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1712_m8927_ParameterInfos[] = 
{
	{"key", 0, 134222261, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"value", 1, 134222262, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8927_MI = 
{
	"InitMethodProperty", (methodPointerType)&m8927, &t1712_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t1712_m8927_ParameterInfos, &EmptyCustomAttributesCache, 195, 0, 16, 2, false, false, 3727, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1712_m8928_ParameterInfos[] = 
{
	{"info", 0, 134222263, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134222264, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m8928_MI = 
{
	"GetObjectData", (methodPointerType)&m8928, &t1712_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1712_m8928_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 2, false, false, 3728, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t986_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8929_MI = 
{
	"get_Properties", (methodPointerType)&m8929, &t1712_TI, &t986_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 18, 0, false, false, 3729, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1712_MIs[] =
{
	&m8916_MI,
	&m8917_MI,
	&m8918_MI,
	&m8919_MI,
	&m8920_MI,
	&m8921_MI,
	&m8922_MI,
	&m8923_MI,
	&m8924_MI,
	&m8925_MI,
	&m8926_MI,
	&m8927_MI,
	&m8928_MI,
	&m8929_MI,
	NULL
};
extern MethodInfo m8948_MI;
extern MethodInfo m8951_MI;
extern MethodInfo m8952_MI;
extern MethodInfo m8953_MI;
extern MethodInfo m8954_MI;
extern MethodInfo m8955_MI;
extern MethodInfo m8956_MI;
extern MethodInfo m8959_MI;
extern MethodInfo m8960_MI;
extern MethodInfo m8962_MI;
extern MethodInfo m8961_MI;
extern MethodInfo m8963_MI;
static MethodInfo* t1712_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m8928_MI,
	&m8948_MI,
	&m8929_MI,
	&m8951_MI,
	&m8952_MI,
	&m8953_MI,
	&m8954_MI,
	&m8955_MI,
	&m8956_MI,
	&m8959_MI,
	&m8960_MI,
	&m8962_MI,
	&m8927_MI,
	&m8928_MI,
	&m8929_MI,
	&m8918_MI,
	&m8961_MI,
	&m8963_MI,
	&m8920_MI,
	&m8921_MI,
	&m8922_MI,
	&m8923_MI,
	&m8924_MI,
	&m8926_MI,
};
static TypeInfo* t1712_ITIs[] = 
{
	&t1719_TI,
	&t1746_TI,
	&t1768_TI,
	&t1756_TI,
};
extern TypeInfo t2382_TI;
extern TypeInfo t2383_TI;
static Il2CppInterfaceOffsetPair t1712_IOs[] = 
{
	{ &t517_TI, 4},
	{ &t2382_TI, 5},
	{ &t1746_TI, 6},
	{ &t1768_TI, 7},
	{ &t1756_TI, 7},
	{ &t2383_TI, 16},
	{ &t1719_TI, 22},
};
void t1712_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t974 * tmp;
		tmp = (t974 *)il2cpp_codegen_object_new (&t974_TI);
		m3843(tmp, false, &m3843_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t112_TI;
#include "t112.h"
#include "t112MD.h"
extern MethodInfo m468_MI;
void t1712_CustomAttributesCacheGenerator_U3CU3Ef__switch$map20(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1712__CustomAttributeCache = {
2,
NULL,
&t1712_CustomAttributesCacheGenerator
};
CustomAttributesCache t1712__CustomAttributeCache_U3CU3Ef__switch$map20 = {
1,
NULL,
&t1712_CustomAttributesCacheGenerator_U3CU3Ef__switch$map20
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1712_0_0_0;
extern Il2CppType t1712_1_0_0;
struct t1712;
extern CustomAttributesCache t1712__CustomAttributeCache;
extern CustomAttributesCache t1712__CustomAttributeCache_U3CU3Ef__switch$map20;
TypeInfo t1712_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ConstructionCall", "System.Runtime.Remoting.Messaging", t1712_MIs, t1712_PIs, t1712_FIs, NULL, &t1747_TI, NULL, NULL, &t1712_TI, t1712_ITIs, t1712_VT, &t1712__CustomAttributeCache, &t1712_TI, &t1712_0_0_0, &t1712_1_0_0, t1712_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1712), 0, -1, sizeof(t1712_SFs), 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, 14, 7, 7, 0, 0, 28, 4, 7};
#ifndef _MSC_VER
#else
#endif

#include "t1749.h"
extern TypeInfo t1749_TI;
extern MethodInfo m8976_MI;
extern MethodInfo m8978_MI;
extern MethodInfo m8984_MI;
extern MethodInfo m8985_MI;


 void m8930 (t1748 * __this, t5 * p0, MethodInfo* method){
	{
		m8976(__this, p0, &m8976_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1748_TI));
		m8978(__this, (((t1748_SFs*)InitializedTypeInfo(&t1748_TI)->static_fields)->f6), &m8978_MI);
		return;
	}
}
extern MethodInfo m8931_MI;
 void m8931 (t5 * __this, MethodInfo* method){
	{
		t585* L_0 = ((t585*)SZArrayNew(InitializedTypeInfo(&t585_TI), ((int32_t)11)));
		ArrayElementTypeCheck (L_0, (t11*) &_stringLiteral1930);
		*((t11**)(t11**)SZArrayLdElema(L_0, 0)) = (t11*)(t11*) &_stringLiteral1930;
		t585* L_1 = L_0;
		ArrayElementTypeCheck (L_1, (t11*) &_stringLiteral1931);
		*((t11**)(t11**)SZArrayLdElema(L_1, 1)) = (t11*)(t11*) &_stringLiteral1931;
		t585* L_2 = L_1;
		ArrayElementTypeCheck (L_2, (t11*) &_stringLiteral1932);
		*((t11**)(t11**)SZArrayLdElema(L_2, 2)) = (t11*)(t11*) &_stringLiteral1932;
		t585* L_3 = L_2;
		ArrayElementTypeCheck (L_3, (t11*) &_stringLiteral1933);
		*((t11**)(t11**)SZArrayLdElema(L_3, 3)) = (t11*)(t11*) &_stringLiteral1933;
		t585* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t11*) &_stringLiteral1934);
		*((t11**)(t11**)SZArrayLdElema(L_4, 4)) = (t11*)(t11*) &_stringLiteral1934;
		t585* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t11*) &_stringLiteral1935);
		*((t11**)(t11**)SZArrayLdElema(L_5, 5)) = (t11*)(t11*) &_stringLiteral1935;
		t585* L_6 = L_5;
		ArrayElementTypeCheck (L_6, (t11*) &_stringLiteral1926);
		*((t11**)(t11**)SZArrayLdElema(L_6, 6)) = (t11*)(t11*) &_stringLiteral1926;
		t585* L_7 = L_6;
		ArrayElementTypeCheck (L_7, (t11*) &_stringLiteral1927);
		*((t11**)(t11**)SZArrayLdElema(L_7, 7)) = (t11*)(t11*) &_stringLiteral1927;
		t585* L_8 = L_7;
		ArrayElementTypeCheck (L_8, (t11*) &_stringLiteral1928);
		*((t11**)(t11**)SZArrayLdElema(L_8, 8)) = (t11*)(t11*) &_stringLiteral1928;
		t585* L_9 = L_8;
		ArrayElementTypeCheck (L_9, (t11*) &_stringLiteral1925);
		*((t11**)(t11**)SZArrayLdElema(L_9, ((int32_t)9))) = (t11*)(t11*) &_stringLiteral1925;
		t585* L_10 = L_9;
		ArrayElementTypeCheck (L_10, (t11*) &_stringLiteral1929);
		*((t11**)(t11**)SZArrayLdElema(L_10, ((int32_t)10))) = (t11*)(t11*) &_stringLiteral1929;
		((t1748_SFs*)InitializedTypeInfo(&t1748_TI)->static_fields)->f6 = L_10;
		return;
	}
}
extern MethodInfo m8932_MI;
 t5 * m8932 (t1748 * __this, t11* p0, MethodInfo* method){
	t11* V_0 = {0};
	t623 * V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = p0;
		if (!V_0)
		{
			goto IL_00d8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1748_TI));
		if ((((t1748_SFs*)InitializedTypeInfo(&t1748_TI)->static_fields)->f7))
		{
			goto IL_0058;
		}
	}
	{
		t623 * L_0 = (t623 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t623_TI));
		m4833(L_0, 5, &m4833_MI);
		V_1 = L_0;
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1925, 0);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1926, 1);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1927, 2);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1928, 3);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1929, 4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1748_TI));
		((t1748_SFs*)InitializedTypeInfo(&t1748_TI)->static_fields)->f7 = V_1;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1748_TI));
		bool L_1 = (bool)VirtFuncInvoker2< bool, t11*, int32_t* >::Invoke(&m4835_MI, (((t1748_SFs*)InitializedTypeInfo(&t1748_TI)->static_fields)->f7), V_0, (&V_2));
		if (!L_1)
		{
			goto IL_00d8;
		}
	}
	{
		if (V_2 == 0)
		{
			goto IL_0083;
		}
		if (V_2 == 1)
		{
			goto IL_0094;
		}
		if (V_2 == 2)
		{
			goto IL_00a5;
		}
		if (V_2 == 3)
		{
			goto IL_00b6;
		}
		if (V_2 == 4)
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_00d8;
	}

IL_0083:
	{
		t5 * L_2 = (__this->f1);
		t5 * L_3 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m11526_MI, ((t5 *)Castclass(L_2, InitializedTypeInfo(&t1719_TI))));
		return L_3;
	}

IL_0094:
	{
		t5 * L_4 = (__this->f1);
		t168* L_5 = (t168*)InterfaceFuncInvoker0< t168* >::Invoke(&m11528_MI, ((t5 *)Castclass(L_4, InitializedTypeInfo(&t1719_TI))));
		return (t5 *)L_5;
	}

IL_00a5:
	{
		t5 * L_6 = (__this->f1);
		t114 * L_7 = (t114 *)InterfaceFuncInvoker0< t114 * >::Invoke(&m11524_MI, ((t5 *)Castclass(L_6, InitializedTypeInfo(&t1719_TI))));
		return L_7;
	}

IL_00b6:
	{
		t5 * L_8 = (__this->f1);
		t5 * L_9 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m11529_MI, ((t5 *)Castclass(L_8, InitializedTypeInfo(&t1719_TI))));
		return L_9;
	}

IL_00c7:
	{
		t5 * L_10 = (__this->f1);
		t11* L_11 = (t11*)InterfaceFuncInvoker0< t11* >::Invoke(&m11525_MI, ((t5 *)Castclass(L_10, InitializedTypeInfo(&t1719_TI))));
		return L_11;
	}

IL_00d8:
	{
		t5 * L_12 = m8984(__this, p0, &m8984_MI);
		return L_12;
	}
}
extern MethodInfo m8933_MI;
 void m8933 (t1748 * __this, t11* p0, t5 * p1, MethodInfo* method){
	t11* V_0 = {0};
	t623 * V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = p0;
		if (!V_0)
		{
			goto IL_0093;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1748_TI));
		if ((((t1748_SFs*)InitializedTypeInfo(&t1748_TI)->static_fields)->f8))
		{
			goto IL_0058;
		}
	}
	{
		t623 * L_0 = (t623 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t623_TI));
		m4833(L_0, 5, &m4833_MI);
		V_1 = L_0;
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1925, 0);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1926, 1);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1927, 1);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1928, 1);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1929, 1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1748_TI));
		((t1748_SFs*)InitializedTypeInfo(&t1748_TI)->static_fields)->f8 = V_1;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1748_TI));
		bool L_1 = (bool)VirtFuncInvoker2< bool, t11*, int32_t* >::Invoke(&m4835_MI, (((t1748_SFs*)InitializedTypeInfo(&t1748_TI)->static_fields)->f8), V_0, (&V_2));
		if (!L_1)
		{
			goto IL_0093;
		}
	}
	{
		if (!V_2)
		{
			goto IL_0070;
		}
	}
	{
		if ((((int32_t)V_2) == ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		goto IL_0093;
	}

IL_0070:
	{
		t5 * L_2 = (__this->f1);
		InterfaceActionInvoker1< t5 * >::Invoke(&m11527_MI, ((t5 *)Castclass(L_2, InitializedTypeInfo(&t1719_TI))), ((t5 *)Castclass(p1, InitializedTypeInfo(&t1711_TI))));
		goto IL_009d;
	}

IL_0088:
	{
		t160 * L_3 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2582(L_3, (t11*) &_stringLiteral1936, &m2582_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0093:
	{
		m8985(__this, p0, p1, &m8985_MI);
		goto IL_009d;
	}

IL_009d:
	{
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.ConstructionCallDictionary
extern Il2CppType t585_0_0_22;
FieldInfo t1748_f6_FieldInfo = 
{
	"InternalKeys", &t585_0_0_22, &t1748_TI, offsetof(t1748_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t623_0_0_17;
extern CustomAttributesCache t1748__CustomAttributeCache_U3CU3Ef__switch$map23;
FieldInfo t1748_f7_FieldInfo = 
{
	"<>f__switch$map23", &t623_0_0_17, &t1748_TI, offsetof(t1748_SFs, f7), &t1748__CustomAttributeCache_U3CU3Ef__switch$map23};
extern Il2CppType t623_0_0_17;
extern CustomAttributesCache t1748__CustomAttributeCache_U3CU3Ef__switch$map24;
FieldInfo t1748_f8_FieldInfo = 
{
	"<>f__switch$map24", &t623_0_0_17, &t1748_TI, offsetof(t1748_SFs, f8), &t1748__CustomAttributeCache_U3CU3Ef__switch$map24};
static FieldInfo* t1748_FIs[] =
{
	&t1748_f6_FieldInfo,
	&t1748_f7_FieldInfo,
	&t1748_f8_FieldInfo,
	NULL
};
extern Il2CppType t1719_0_0_0;
static ParameterInfo t1748_m8930_ParameterInfos[] = 
{
	{"message", 0, 134222265, &EmptyCustomAttributesCache, &t1719_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8930_MI = 
{
	".ctor", (methodPointerType)&m8930, &t1748_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1748_m8930_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3730, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8931_MI = 
{
	".cctor", (methodPointerType)&m8931, &t1748_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3731, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1748_m8932_ParameterInfos[] = 
{
	{"key", 0, 134222266, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8932_MI = 
{
	"GetMethodProperty", (methodPointerType)&m8932, &t1748_TI, &t5_0_0_0, RuntimeInvoker_t5_t5, t1748_m8932_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 15, 1, false, false, 3732, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1748_m8933_ParameterInfos[] = 
{
	{"key", 0, 134222267, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"value", 1, 134222268, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8933_MI = 
{
	"SetMethodProperty", (methodPointerType)&m8933, &t1748_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t1748_m8933_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 16, 2, false, false, 3733, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1748_MIs[] =
{
	&m8930_MI,
	&m8931_MI,
	&m8932_MI,
	&m8933_MI,
	NULL
};
extern MethodInfo m8977_MI;
extern MethodInfo m8989_MI;
extern MethodInfo m8990_MI;
extern MethodInfo m8991_MI;
extern MethodInfo m8992_MI;
extern MethodInfo m8982_MI;
extern MethodInfo m8983_MI;
extern MethodInfo m8987_MI;
extern MethodInfo m8993_MI;
extern MethodInfo m8988_MI;
extern MethodInfo m8979_MI;
extern MethodInfo m8986_MI;
static MethodInfo* t1748_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m8977_MI,
	&m8989_MI,
	&m8990_MI,
	&m8991_MI,
	&m8992_MI,
	&m8982_MI,
	&m8983_MI,
	&m8987_MI,
	&m8993_MI,
	&m8988_MI,
	&m8979_MI,
	&m8932_MI,
	&m8933_MI,
	&m8986_MI,
};
extern TypeInfo t739_TI;
static Il2CppInterfaceOffsetPair t1748_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t986_TI, 9},
};
void t1748_CustomAttributesCacheGenerator_U3CU3Ef__switch$map23(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1748_CustomAttributesCacheGenerator_U3CU3Ef__switch$map24(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1748__CustomAttributeCache_U3CU3Ef__switch$map23 = {
1,
NULL,
&t1748_CustomAttributesCacheGenerator_U3CU3Ef__switch$map23
};
CustomAttributesCache t1748__CustomAttributeCache_U3CU3Ef__switch$map24 = {
1,
NULL,
&t1748_CustomAttributesCacheGenerator_U3CU3Ef__switch$map24
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1748_0_0_0;
extern Il2CppType t1748_1_0_0;
struct t1748;
extern CustomAttributesCache t1748__CustomAttributeCache_U3CU3Ef__switch$map23;
extern CustomAttributesCache t1748__CustomAttributeCache_U3CU3Ef__switch$map24;
TypeInfo t1748_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ConstructionCallDictionary", "System.Runtime.Remoting.Messaging", t1748_MIs, NULL, t1748_FIs, NULL, &t1749_TI, NULL, NULL, &t1748_TI, NULL, t1748_VT, &EmptyCustomAttributesCache, &t1748_TI, &t1748_0_0_0, &t1748_1_0_0, t1748_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1748), 0, -1, sizeof(t1748_SFs), 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, true, false, false, 4, 0, 3, 0, 0, 18, 0, 3};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m8934_MI;


 void m8934 (t1750 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m8935_MI;
 void m8935 (t5 * __this, MethodInfo* method){
	{
		t1750 * L_0 = (t1750 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1750_TI));
		m8934(L_0, &m8934_MI);
		((t1750_SFs*)InitializedTypeInfo(&t1750_TI)->static_fields)->f0 = L_0;
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
extern Il2CppType t1750_0_0_22;
FieldInfo t1750_f0_FieldInfo = 
{
	"Instance", &t1750_0_0_22, &t1750_TI, offsetof(t1750_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1750_FIs[] =
{
	&t1750_f0_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8934_MI = 
{
	".ctor", (methodPointerType)&m8934, &t1750_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3734, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8935_MI = 
{
	".cctor", (methodPointerType)&m8935, &t1750_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3735, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1750_MIs[] =
{
	&m8934_MI,
	&m8935_MI,
	NULL
};
static MethodInfo* t1750_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
static TypeInfo* t1750_ITIs[] = 
{
	&t1232_TI,
};
static Il2CppInterfaceOffsetPair t1750_IOs[] = 
{
	{ &t1232_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1750_0_0_0;
extern Il2CppType t1750_1_0_0;
struct t1750;
TypeInfo t1750_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EnvoyTerminatorSink", "System.Runtime.Remoting.Messaging", t1750_MIs, NULL, t1750_FIs, NULL, &t5_TI, NULL, NULL, &t1750_TI, t1750_ITIs, t1750_VT, &EmptyCustomAttributesCache, &t1750_TI, &t1750_0_0_0, &t1750_1_0_0, t1750_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1750), 0, -1, sizeof(t1750_SFs), 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, true, false, false, 2, 0, 1, 0, 0, 4, 1, 1};
#include "t1751.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1751_TI;
#include "t1751MD.h"

extern MethodInfo m8937_MI;
extern MethodInfo m8938_MI;


extern MethodInfo m8936_MI;
 void m8936 (t1751 * __this, t11* p0, t5 * p1, MethodInfo* method){
	{
		m8937(__this, p0, p1, 1, &m8937_MI);
		return;
	}
}
 void m8937 (t1751 * __this, t11* p0, t5 * p1, bool p2, MethodInfo* method){
	{
		m8938(__this, p0, p1, p2, (t11*)NULL, &m8938_MI);
		return;
	}
}
 void m8938 (t1751 * __this, t11* p0, t5 * p1, bool p2, t11* p3, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		__this->f2 = p0;
		__this->f3 = p1;
		__this->f1 = p2;
		__this->f0 = p3;
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.Header
extern Il2CppType t11_0_0_6;
FieldInfo t1751_f0_FieldInfo = 
{
	"HeaderNamespace", &t11_0_0_6, &t1751_TI, offsetof(t1751, f0), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_6;
FieldInfo t1751_f1_FieldInfo = 
{
	"MustUnderstand", &t108_0_0_6, &t1751_TI, offsetof(t1751, f1), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t1751_f2_FieldInfo = 
{
	"Name", &t11_0_0_6, &t1751_TI, offsetof(t1751, f2), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_6;
FieldInfo t1751_f3_FieldInfo = 
{
	"Value", &t5_0_0_6, &t1751_TI, offsetof(t1751, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1751_FIs[] =
{
	&t1751_f0_FieldInfo,
	&t1751_f1_FieldInfo,
	&t1751_f2_FieldInfo,
	&t1751_f3_FieldInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1751_m8936_ParameterInfos[] = 
{
	{"_Name", 0, 134222269, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"_Value", 1, 134222270, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8936_MI = 
{
	".ctor", (methodPointerType)&m8936, &t1751_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t1751_m8936_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 3736, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t5_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1751_m8937_ParameterInfos[] = 
{
	{"_Name", 0, 134222271, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"_Value", 1, 134222272, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"_MustUnderstand", 2, 134222273, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8937_MI = 
{
	".ctor", (methodPointerType)&m8937, &t1751_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t111, t1751_m8937_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 3737, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t5_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t11_0_0_0;
static ParameterInfo t1751_m8938_ParameterInfos[] = 
{
	{"_Name", 0, 134222274, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"_Value", 1, 134222275, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"_MustUnderstand", 2, 134222276, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"_HeaderNamespace", 3, 134222277, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t111_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8938_MI = 
{
	".ctor", (methodPointerType)&m8938, &t1751_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t111_t5, t1751_m8938_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 3738, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1751_MIs[] =
{
	&m8936_MI,
	&m8937_MI,
	&m8938_MI,
	NULL
};
static MethodInfo* t1751_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t1751_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1751__CustomAttributeCache = {
1,
NULL,
&t1751_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1751_0_0_0;
extern Il2CppType t1751_1_0_0;
struct t1751;
extern CustomAttributesCache t1751__CustomAttributeCache;
TypeInfo t1751_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Header", "System.Runtime.Remoting.Messaging", t1751_MIs, NULL, t1751_FIs, NULL, &t5_TI, NULL, NULL, &t1751_TI, NULL, t1751_VT, &t1751__CustomAttributeCache, &t1751_TI, &t1751_0_0_0, &t1751_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1751), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 4, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Runtime.Remoting.Messaging.IInternalMessage
extern MethodInfo m11542_MI;
static PropertyInfo t2382____Uri_PropertyInfo = 
{
	&t2382_TI, "Uri", NULL, &m11542_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2382_PIs[] =
{
	&t2382____Uri_PropertyInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
static ParameterInfo t2382_m11542_ParameterInfos[] = 
{
	{"value", 0, 134222278, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11542_MI = 
{
	"set_Uri", NULL, &t2382_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2382_m11542_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 0, 1, false, false, 3739, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2382_MIs[] =
{
	&m11542_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2382_0_0_0;
extern Il2CppType t2382_1_0_0;
struct t2382;
TypeInfo t2382_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IInternalMessage", "System.Runtime.Remoting.Messaging", t2382_MIs, t2382_PIs, NULL, NULL, NULL, NULL, NULL, &t2382_TI, NULL, NULL, &EmptyCustomAttributesCache, &t2382_TI, &t2382_0_0_0, &t2382_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 160, 0, false, true, false, false, false, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Runtime.Remoting.Messaging.IMessage
extern MethodInfo m11543_MI;
static PropertyInfo t1746____Properties_PropertyInfo = 
{
	&t1746_TI, "Properties", &m11543_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1746_PIs[] =
{
	&t1746____Properties_PropertyInfo,
	NULL
};
extern Il2CppType t986_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11543_MI = 
{
	"get_Properties", NULL, &t1746_TI, &t986_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 3740, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1746_MIs[] =
{
	&m11543_MI,
	NULL
};
void t1746_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1746__CustomAttributeCache = {
1,
NULL,
&t1746_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1746_1_0_0;
struct t1746;
extern CustomAttributesCache t1746__CustomAttributeCache;
TypeInfo t1746_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IMessage", "System.Runtime.Remoting.Messaging", t1746_MIs, t1746_PIs, NULL, NULL, NULL, NULL, NULL, &t1746_TI, NULL, NULL, &t1746__CustomAttributeCache, &t1746_TI, &t1746_0_0_0, &t1746_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1745_TI;



// Metadata Definition System.Runtime.Remoting.Messaging.IMessageCtrl
static MethodInfo* t1745_MIs[] =
{
	NULL
};
void t1745_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1745__CustomAttributeCache = {
1,
NULL,
&t1745_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1745_1_0_0;
struct t1745;
extern CustomAttributesCache t1745__CustomAttributeCache;
TypeInfo t1745_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IMessageCtrl", "System.Runtime.Remoting.Messaging", t1745_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1745_TI, NULL, NULL, &t1745__CustomAttributeCache, &t1745_TI, &t1745_0_0_0, &t1745_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Runtime.Remoting.Messaging.IMessageSink
static MethodInfo* t1232_MIs[] =
{
	NULL
};
void t1232_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1232__CustomAttributeCache = {
1,
NULL,
&t1232_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1232_1_0_0;
struct t1232;
extern CustomAttributesCache t1232__CustomAttributeCache;
TypeInfo t1232_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IMessageSink", "System.Runtime.Remoting.Messaging", t1232_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1232_TI, NULL, NULL, &t1232__CustomAttributeCache, &t1232_TI, &t1232_0_0_0, &t1232_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Runtime.Remoting.Messaging.IMethodCallMessage
static MethodInfo* t1768_MIs[] =
{
	NULL
};
static TypeInfo* t1768_ITIs[] = 
{
	&t1746_TI,
	&t1756_TI,
};
void t1768_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1768__CustomAttributeCache = {
1,
NULL,
&t1768_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1768_0_0_0;
extern Il2CppType t1768_1_0_0;
struct t1768;
extern CustomAttributesCache t1768__CustomAttributeCache;
TypeInfo t1768_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IMethodCallMessage", "System.Runtime.Remoting.Messaging", t1768_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1768_TI, t1768_ITIs, NULL, &t1768__CustomAttributeCache, &t1768_TI, &t1768_0_0_0, &t1768_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif

#include "t1752.h"


// Metadata Definition System.Runtime.Remoting.Messaging.IMethodMessage
extern MethodInfo m11544_MI;
static PropertyInfo t1756____ArgCount_PropertyInfo = 
{
	&t1756_TI, "ArgCount", &m11544_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11545_MI;
static PropertyInfo t1756____Args_PropertyInfo = 
{
	&t1756_TI, "Args", &m11545_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11546_MI;
static PropertyInfo t1756____LogicalCallContext_PropertyInfo = 
{
	&t1756_TI, "LogicalCallContext", &m11546_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11547_MI;
static PropertyInfo t1756____MethodBase_PropertyInfo = 
{
	&t1756_TI, "MethodBase", &m11547_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11548_MI;
static PropertyInfo t1756____MethodName_PropertyInfo = 
{
	&t1756_TI, "MethodName", &m11548_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11549_MI;
static PropertyInfo t1756____MethodSignature_PropertyInfo = 
{
	&t1756_TI, "MethodSignature", &m11549_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11550_MI;
static PropertyInfo t1756____TypeName_PropertyInfo = 
{
	&t1756_TI, "TypeName", &m11550_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11551_MI;
static PropertyInfo t1756____Uri_PropertyInfo = 
{
	&t1756_TI, "Uri", &m11551_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1756_PIs[] =
{
	&t1756____ArgCount_PropertyInfo,
	&t1756____Args_PropertyInfo,
	&t1756____LogicalCallContext_PropertyInfo,
	&t1756____MethodBase_PropertyInfo,
	&t1756____MethodName_PropertyInfo,
	&t1756____MethodSignature_PropertyInfo,
	&t1756____TypeName_PropertyInfo,
	&t1756____Uri_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m11544_MI = 
{
	"get_ArgCount", NULL, &t1756_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 3741, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11545_MI = 
{
	"get_Args", NULL, &t1756_TI, &t168_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, false, 3742, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1752_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11546_MI = 
{
	"get_LogicalCallContext", NULL, &t1756_TI, &t1752_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 2, 0, false, false, 3743, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t774_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11547_MI = 
{
	"get_MethodBase", NULL, &t1756_TI, &t774_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 3, 0, false, false, 3744, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11548_MI = 
{
	"get_MethodName", NULL, &t1756_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 4, 0, false, false, 3745, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11549_MI = 
{
	"get_MethodSignature", NULL, &t1756_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 5, 0, false, false, 3746, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11550_MI = 
{
	"get_TypeName", NULL, &t1756_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 6, 0, false, false, 3747, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11551_MI = 
{
	"get_Uri", NULL, &t1756_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 7, 0, false, false, 3748, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1756_m11552_ParameterInfos[] = 
{
	{"argNum", 0, 134222279, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m11552_MI = 
{
	"GetArg", NULL, &t1756_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t1756_m11552_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, false, 3749, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1756_MIs[] =
{
	&m11544_MI,
	&m11545_MI,
	&m11546_MI,
	&m11547_MI,
	&m11548_MI,
	&m11549_MI,
	&m11550_MI,
	&m11551_MI,
	&m11552_MI,
	NULL
};
static TypeInfo* t1756_ITIs[] = 
{
	&t1746_TI,
};
void t1756_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1756__CustomAttributeCache = {
1,
NULL,
&t1756_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1756_0_0_0;
extern Il2CppType t1756_1_0_0;
struct t1756;
extern CustomAttributesCache t1756__CustomAttributeCache;
TypeInfo t1756_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IMethodMessage", "System.Runtime.Remoting.Messaging", t1756_MIs, t1756_PIs, NULL, NULL, NULL, NULL, NULL, &t1756_TI, t1756_ITIs, NULL, &t1756__CustomAttributeCache, &t1756_TI, &t1756_0_0_0, &t1756_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 9, 8, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1759_TI;

#include "t142.h"


// Metadata Definition System.Runtime.Remoting.Messaging.IMethodReturnMessage
extern MethodInfo m11553_MI;
static PropertyInfo t1759____Exception_PropertyInfo = 
{
	&t1759_TI, "Exception", &m11553_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11554_MI;
static PropertyInfo t1759____OutArgCount_PropertyInfo = 
{
	&t1759_TI, "OutArgCount", &m11554_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11555_MI;
static PropertyInfo t1759____OutArgs_PropertyInfo = 
{
	&t1759_TI, "OutArgs", &m11555_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11556_MI;
static PropertyInfo t1759____ReturnValue_PropertyInfo = 
{
	&t1759_TI, "ReturnValue", &m11556_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1759_PIs[] =
{
	&t1759____Exception_PropertyInfo,
	&t1759____OutArgCount_PropertyInfo,
	&t1759____OutArgs_PropertyInfo,
	&t1759____ReturnValue_PropertyInfo,
	NULL
};
extern Il2CppType t142_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11553_MI = 
{
	"get_Exception", NULL, &t1759_TI, &t142_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 3750, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m11554_MI = 
{
	"get_OutArgCount", NULL, &t1759_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, false, 3751, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11555_MI = 
{
	"get_OutArgs", NULL, &t1759_TI, &t168_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 2, 0, false, false, 3752, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11556_MI = 
{
	"get_ReturnValue", NULL, &t1759_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 3, 0, false, false, 3753, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1759_MIs[] =
{
	&m11553_MI,
	&m11554_MI,
	&m11555_MI,
	&m11556_MI,
	NULL
};
static TypeInfo* t1759_ITIs[] = 
{
	&t1746_TI,
	&t1756_TI,
};
void t1759_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1759__CustomAttributeCache = {
1,
NULL,
&t1759_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1759_0_0_0;
extern Il2CppType t1759_1_0_0;
struct t1759;
extern CustomAttributesCache t1759__CustomAttributeCache;
TypeInfo t1759_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IMethodReturnMessage", "System.Runtime.Remoting.Messaging", t1759_MIs, t1759_PIs, NULL, NULL, NULL, NULL, NULL, &t1759_TI, t1759_ITIs, NULL, &t1759__CustomAttributeCache, &t1759_TI, &t1759_0_0_0, &t1759_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 4, 4, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2384_TI;



// Metadata Definition System.Runtime.Remoting.Messaging.IRemotingFormatter
static MethodInfo* t2384_MIs[] =
{
	NULL
};
extern TypeInfo t2385_TI;
static TypeInfo* t2384_ITIs[] = 
{
	&t2385_TI,
};
void t2384_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2384__CustomAttributeCache = {
1,
NULL,
&t2384_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2384_0_0_0;
extern Il2CppType t2384_1_0_0;
struct t2384;
extern CustomAttributesCache t2384__CustomAttributeCache;
TypeInfo t2384_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IRemotingFormatter", "System.Runtime.Remoting.Messaging", t2384_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2384_TI, t2384_ITIs, NULL, &t2384__CustomAttributeCache, &t2384_TI, &t2384_0_0_0, &t2384_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Runtime.Remoting.Messaging.ISerializationRootObject
static MethodInfo* t2383_MIs[] =
{
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2383_0_0_0;
extern Il2CppType t2383_1_0_0;
struct t2383;
TypeInfo t2383_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ISerializationRootObject", "System.Runtime.Remoting.Messaging", t2383_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2383_TI, NULL, NULL, &EmptyCustomAttributesCache, &t2383_TI, &t2383_0_0_0, &t2383_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 160, 0, false, true, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1752_TI;
#include "t1752MD.h"

#include "t1753.h"
#include "t1833.h"
#include "t1835.h"
#include "t990.h"
extern TypeInfo t1753_TI;
extern TypeInfo t1835_TI;
extern TypeInfo t987_TI;
extern TypeInfo t990_TI;
#include "t1753MD.h"
#include "t1835MD.h"
#include "t1833MD.h"
#include "t990MD.h"
extern MethodInfo m5012_MI;
extern MethodInfo m8944_MI;
extern MethodInfo m9341_MI;
extern MethodInfo m9349_MI;
extern MethodInfo m9331_MI;
extern MethodInfo m9333_MI;
extern MethodInfo m8943_MI;
extern MethodInfo m9353_MI;
extern MethodInfo m7545_MI;
extern MethodInfo m7507_MI;
extern MethodInfo m7508_MI;
extern MethodInfo m5010_MI;


extern MethodInfo m8939_MI;
 void m8939 (t1752 * __this, MethodInfo* method){
	{
		t1753 * L_0 = (t1753 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1753_TI));
		m8944(L_0, &m8944_MI);
		__this->f1 = L_0;
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m8940_MI;
 void m8940 (t1752 * __this, t829 * p0, t830  p1, MethodInfo* method){
	t1833  V_0 = {0};
	t1835 * V_1 = {0};
	{
		t1753 * L_0 = (t1753 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1753_TI));
		m8944(L_0, &m8944_MI);
		__this->f1 = L_0;
		m460(__this, &m460_MI);
		t1835 * L_1 = m9341(p0, &m9341_MI);
		V_1 = L_1;
		goto IL_005c;
	}

IL_001a:
	{
		t1833  L_2 = m9349(V_1, &m9349_MI);
		V_0 = L_2;
		t11* L_3 = m9331((&V_0), &m9331_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_4 = m2356(NULL, L_3, (t11*) &_stringLiteral1937, &m2356_MI);
		if (!L_4)
		{
			goto IL_0048;
		}
	}
	{
		t5 * L_5 = m9333((&V_0), &m9333_MI);
		__this->f1 = ((t1753 *)Castclass(L_5, InitializedTypeInfo(&t1753_TI)));
		goto IL_005c;
	}

IL_0048:
	{
		t11* L_6 = m9331((&V_0), &m9331_MI);
		t5 * L_7 = m9333((&V_0), &m9333_MI);
		m8943(__this, L_6, L_7, &m8943_MI);
	}

IL_005c:
	{
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9353_MI, V_1);
		if (L_8)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
extern MethodInfo m8941_MI;
 bool m8941 (t1752 * __this, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		t984 * L_0 = (__this->f0);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t984 * L_1 = (__this->f0);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5012_MI, L_1);
		G_B3_0 = ((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
extern MethodInfo m8942_MI;
 void m8942 (t1752 * __this, t829 * p0, t830  p1, MethodInfo* method){
	t990  V_0 = {0};
	t5 * V_1 = {0};
	t5 * V_2 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t1753 * L_0 = (__this->f1);
		m4790(p0, (t11*) &_stringLiteral1937, L_0, &m4790_MI);
		t984 * L_1 = (__this->f0);
		if (!L_1)
		{
			goto IL_0068;
		}
	}
	{
		t984 * L_2 = (__this->f0);
		t5 * L_3 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m7545_MI, L_2);
		V_1 = L_3;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004c;
		}

IL_0027:
		{
			t5 * L_4 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4765_MI, V_1);
			V_0 = ((*(t990 *)((t990 *)UnBox (L_4, InitializedTypeInfo(&t990_TI)))));
			t5 * L_5 = m7507((&V_0), &m7507_MI);
			t5 * L_6 = m7508((&V_0), &m7508_MI);
			m4790(p0, ((t11*)Castclass(L_5, (&t11_TI))), L_6, &m4790_MI);
		}

IL_004c:
		{
			bool L_7 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m747_MI, V_1);
			if (L_7)
			{
				goto IL_0027;
			}
		}

IL_0054:
		{
			// IL_0054: leave.s IL_0068
			leaveInstructions[0] = 0x68; // 1
			THROW_SENTINEL(IL_0068);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0056;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_0056;
	}

IL_0056:
	{ // begin finally (depth: 1)
		{
			V_2 = ((t5 *)IsInst(V_1, InitializedTypeInfo(&t132_TI)));
			if (V_2)
			{
				goto IL_0061;
			}
		}

IL_0060:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x68:
					goto IL_0068;
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

IL_0061:
		{
			InterfaceActionInvoker0::Invoke(&m516_MI, V_2);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x68:
					goto IL_0068;
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

IL_0068:
	{
		return;
	}
}
 void m8943 (t1752 * __this, t11* p0, t5 * p1, MethodInfo* method){
	{
		t984 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t984_TI));
		t984 * L_1 = (t984 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t984_TI));
		m5003(L_1, &m5003_MI);
		__this->f0 = L_1;
	}

IL_0013:
	{
		t984 * L_2 = (__this->f0);
		VirtActionInvoker2< t5 *, t5 * >::Invoke(&m5010_MI, L_2, p0, p1);
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.LogicalCallContext
extern Il2CppType t984_0_0_1;
FieldInfo t1752_f0_FieldInfo = 
{
	"_data", &t984_0_0_1, &t1752_TI, offsetof(t1752, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1753_0_0_1;
FieldInfo t1752_f1_FieldInfo = 
{
	"_remotingData", &t1753_0_0_1, &t1752_TI, offsetof(t1752, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1752_FIs[] =
{
	&t1752_f0_FieldInfo,
	&t1752_f1_FieldInfo,
	NULL
};
static PropertyInfo t1752____HasInfo_PropertyInfo = 
{
	&t1752_TI, "HasInfo", &m8941_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1752_PIs[] =
{
	&t1752____HasInfo_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8939_MI = 
{
	".ctor", (methodPointerType)&m8939, &t1752_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6275, 0, 255, 0, false, false, 3754, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1752_m8940_ParameterInfos[] = 
{
	{"info", 0, 134222280, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134222281, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m8940_MI = 
{
	".ctor", (methodPointerType)&m8940, &t1752_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1752_m8940_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 3755, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8941_MI = 
{
	"get_HasInfo", (methodPointerType)&m8941, &t1752_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3756, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1752_m8942_ParameterInfos[] = 
{
	{"info", 0, 134222282, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134222283, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m8942_MI = 
{
	"GetObjectData", (methodPointerType)&m8942, &t1752_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1752_m8942_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 2, false, false, 3757, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1752_m8943_ParameterInfos[] = 
{
	{"name", 0, 134222284, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"data", 1, 134222285, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8943_MI = 
{
	"SetData", (methodPointerType)&m8943, &t1752_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t1752_m8943_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 3758, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1752_MIs[] =
{
	&m8939_MI,
	&m8940_MI,
	&m8941_MI,
	&m8942_MI,
	&m8943_MI,
	NULL
};
static MethodInfo* t1752_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m8942_MI,
};
static TypeInfo* t1752_ITIs[] = 
{
	&t516_TI,
	&t517_TI,
};
static Il2CppInterfaceOffsetPair t1752_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
void t1752_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1752__CustomAttributeCache = {
1,
NULL,
&t1752_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1752_0_0_0;
extern Il2CppType t1752_1_0_0;
struct t1752;
extern CustomAttributesCache t1752__CustomAttributeCache;
TypeInfo t1752_TI = 
{
	&g_mscorlib_dll_Image, NULL, "LogicalCallContext", "System.Runtime.Remoting.Messaging", t1752_MIs, t1752_PIs, t1752_FIs, NULL, &t5_TI, NULL, NULL, &t1752_TI, t1752_ITIs, t1752_VT, &t1752__CustomAttributeCache, &t1752_TI, &t1752_0_0_0, &t1752_1_0_0, t1752_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1752), 0, -1, 0, 0, -1, 1057025, 0, false, false, false, false, false, false, false, false, false, false, false, false, 5, 1, 2, 0, 0, 5, 2, 2};
#ifndef _MSC_VER
#else
#endif



 void m8944 (t1753 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.CallContextRemotingData
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8944_MI = 
{
	".ctor", (methodPointerType)&m8944, &t1753_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3759, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1753_MIs[] =
{
	&m8944_MI,
	NULL
};
static MethodInfo* t1753_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
static TypeInfo* t1753_ITIs[] = 
{
	&t516_TI,
};
static Il2CppInterfaceOffsetPair t1753_IOs[] = 
{
	{ &t516_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1753_0_0_0;
extern Il2CppType t1753_1_0_0;
struct t1753;
TypeInfo t1753_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CallContextRemotingData", "System.Runtime.Remoting.Messaging", t1753_MIs, NULL, NULL, NULL, &t5_TI, NULL, NULL, &t1753_TI, t1753_ITIs, t1753_VT, &EmptyCustomAttributesCache, &t1753_TI, &t1753_0_0_0, &t1753_1_0_0, t1753_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1753), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 1, 1};
#ifndef _MSC_VER
#else
#endif

#include "t1755.h"
#include "t144.h"
extern TypeInfo t675_TI;
extern TypeInfo t1755_TI;
#include "t1755MD.h"
#include "t695MD.h"
extern MethodInfo m8964_MI;
extern MethodInfo m3571_MI;
extern MethodInfo m8958_MI;
extern MethodInfo m3584_MI;
extern MethodInfo m8563_MI;
extern MethodInfo m4750_MI;
extern MethodInfo m4756_MI;
extern MethodInfo m8968_MI;
extern MethodInfo m9107_MI;
extern MethodInfo m3573_MI;
extern MethodInfo m8965_MI;
extern MethodInfo m4803_MI;
extern MethodInfo m9115_MI;
extern MethodInfo m2041_MI;
extern MethodInfo m6789_MI;
extern MethodInfo m9105_MI;
extern MethodInfo m9114_MI;
extern MethodInfo m8566_MI;
extern MethodInfo m8564_MI;
extern MethodInfo m8967_MI;
extern MethodInfo m8570_MI;
extern MethodInfo m8966_MI;
extern MethodInfo m3555_MI;
extern MethodInfo m11185_MI;
extern MethodInfo m3576_MI;
extern MethodInfo m5074_MI;
extern MethodInfo m2386_MI;
extern MethodInfo m3572_MI;


extern MethodInfo m8945_MI;
 void m8945 (t1747 * __this, t1754* p0, MethodInfo* method){
	t1751 * V_0 = {0};
	t1754* V_1 = {0};
	int32_t V_2 = 0;
	{
		m460(__this, &m460_MI);
		VirtActionInvoker0::Invoke(&m8963_MI, __this);
		if (!p0)
		{
			goto IL_0014;
		}
	}
	{
		if ((((int32_t)(((t107 *)p0)->max_length))))
		{
			goto IL_0015;
		}
	}

IL_0014:
	{
		return;
	}

IL_0015:
	{
		V_1 = p0;
		V_2 = 0;
		goto IL_0035;
	}

IL_001b:
	{
		int32_t L_0 = V_2;
		V_0 = (*(t1751 **)(t1751 **)SZArrayLdElema(V_1, L_0));
		t11* L_1 = (V_0->f2);
		t5 * L_2 = (V_0->f3);
		VirtActionInvoker2< t11*, t5 * >::Invoke(&m8949_MI, __this, L_1, L_2);
		V_2 = ((int32_t)(V_2+1));
	}

IL_0035:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t107 *)V_1)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		m8964(__this, &m8964_MI);
		return;
	}
}
 void m8946 (t1747 * __this, t829 * p0, t830  p1, MethodInfo* method){
	t1833  V_0 = {0};
	t1835 * V_1 = {0};
	{
		m460(__this, &m460_MI);
		VirtActionInvoker0::Invoke(&m8963_MI, __this);
		t1835 * L_0 = m9341(p0, &m9341_MI);
		V_1 = L_0;
		goto IL_0030;
	}

IL_0015:
	{
		t1833  L_1 = m9349(V_1, &m9349_MI);
		V_0 = L_1;
		t11* L_2 = m9331((&V_0), &m9331_MI);
		t5 * L_3 = m9333((&V_0), &m9333_MI);
		VirtActionInvoker2< t11*, t5 * >::Invoke(&m8949_MI, __this, L_2, L_3);
	}

IL_0030:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9353_MI, V_1);
		if (L_4)
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
 void m8947 (t1747 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
 void m8948 (t1747 * __this, t11* p0, MethodInfo* method){
	{
		VirtActionInvoker1< t11* >::Invoke(&m8961_MI, __this, p0);
		return;
	}
}
 void m8949 (t1747 * __this, t11* p0, t5 * p1, MethodInfo* method){
	t11* V_0 = {0};
	t623 * V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = p0;
		if (!V_0)
		{
			goto IL_0101;
		}
	}
	{
		if ((((t1747_SFs*)InitializedTypeInfo(&t1747_TI)->static_fields)->f10))
		{
			goto IL_0070;
		}
	}
	{
		t623 * L_0 = (t623 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t623_TI));
		m4833(L_0, 7, &m4833_MI);
		V_1 = L_0;
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1932, 0);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1931, 1);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1933, 2);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1934, 3);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1935, 4);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1930, 5);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1938, 6);
		((t1747_SFs*)InitializedTypeInfo(&t1747_TI)->static_fields)->f10 = V_1;
	}

IL_0070:
	{
		bool L_1 = (bool)VirtFuncInvoker2< bool, t11*, int32_t* >::Invoke(&m4835_MI, (((t1747_SFs*)InitializedTypeInfo(&t1747_TI)->static_fields)->f10), V_0, (&V_2));
		if (!L_1)
		{
			goto IL_0101;
		}
	}
	{
		if (V_2 == 0)
		{
			goto IL_00a6;
		}
		if (V_2 == 1)
		{
			goto IL_00b3;
		}
		if (V_2 == 2)
		{
			goto IL_00c0;
		}
		if (V_2 == 3)
		{
			goto IL_00cd;
		}
		if (V_2 == 4)
		{
			goto IL_00da;
		}
		if (V_2 == 5)
		{
			goto IL_00e7;
		}
		if (V_2 == 6)
		{
			goto IL_00f4;
		}
	}
	{
		goto IL_0101;
	}

IL_00a6:
	{
		__this->f1 = ((t11*)Castclass(p1, (&t11_TI)));
		return;
	}

IL_00b3:
	{
		__this->f2 = ((t11*)Castclass(p1, (&t11_TI)));
		return;
	}

IL_00c0:
	{
		__this->f4 = ((t675*)Castclass(p1, InitializedTypeInfo(&t675_TI)));
		return;
	}

IL_00cd:
	{
		__this->f3 = ((t168*)Castclass(p1, InitializedTypeInfo(&t168_TI)));
		return;
	}

IL_00da:
	{
		__this->f6 = ((t1752 *)Castclass(p1, InitializedTypeInfo(&t1752_TI)));
		return;
	}

IL_00e7:
	{
		__this->f0 = ((t11*)Castclass(p1, (&t11_TI)));
		return;
	}

IL_00f4:
	{
		__this->f7 = ((t675*)Castclass(p1, InitializedTypeInfo(&t675_TI)));
		return;
	}

IL_0101:
	{
		t5 * L_2 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m8957_MI, __this);
		InterfaceActionInvoker2< t5 *, t5 * >::Invoke(&m4750_MI, L_2, p0, p1);
		return;
	}
}
 void m8950 (t1747 * __this, t829 * p0, t830  p1, MethodInfo* method){
	t990  V_0 = {0};
	t5 * V_1 = {0};
	t5 * V_2 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t11* L_0 = (__this->f1);
		m4790(p0, (t11*) &_stringLiteral1932, L_0, &m4790_MI);
		t11* L_1 = (__this->f2);
		m4790(p0, (t11*) &_stringLiteral1931, L_1, &m4790_MI);
		t675* L_2 = (__this->f4);
		m4790(p0, (t11*) &_stringLiteral1933, (t5 *)(t5 *)L_2, &m4790_MI);
		t168* L_3 = (__this->f3);
		m4790(p0, (t11*) &_stringLiteral1934, (t5 *)(t5 *)L_3, &m4790_MI);
		t1752 * L_4 = (__this->f6);
		m4790(p0, (t11*) &_stringLiteral1935, L_4, &m4790_MI);
		t11* L_5 = (__this->f0);
		m4790(p0, (t11*) &_stringLiteral1930, L_5, &m4790_MI);
		t675* L_6 = (__this->f7);
		m4790(p0, (t11*) &_stringLiteral1938, (t5 *)(t5 *)L_6, &m4790_MI);
		t5 * L_7 = (__this->f9);
		if (!L_7)
		{
			goto IL_00ce;
		}
	}
	{
		t5 * L_8 = (__this->f9);
		t5 * L_9 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4756_MI, L_8);
		V_1 = L_9;
	}

IL_008b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b2;
		}

IL_008d:
		{
			t5 * L_10 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4765_MI, V_1);
			V_0 = ((*(t990 *)((t990 *)UnBox (L_10, InitializedTypeInfo(&t990_TI)))));
			t5 * L_11 = m7507((&V_0), &m7507_MI);
			t5 * L_12 = m7508((&V_0), &m7508_MI);
			m4790(p0, ((t11*)Castclass(L_11, (&t11_TI))), L_12, &m4790_MI);
		}

IL_00b2:
		{
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m747_MI, V_1);
			if (L_13)
			{
				goto IL_008d;
			}
		}

IL_00ba:
		{
			// IL_00ba: leave.s IL_00ce
			leaveInstructions[0] = 0xCE; // 1
			THROW_SENTINEL(IL_00ce);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_00bc;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_00bc;
	}

IL_00bc:
	{ // begin finally (depth: 1)
		{
			V_2 = ((t5 *)IsInst(V_1, InitializedTypeInfo(&t132_TI)));
			if (V_2)
			{
				goto IL_00c7;
			}
		}

IL_00c6:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xCE:
					goto IL_00ce;
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

IL_00c7:
		{
			InterfaceActionInvoker0::Invoke(&m516_MI, V_2);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xCE:
					goto IL_00ce;
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

IL_00ce:
	{
		return;
	}
}
 int32_t m8951 (t1747 * __this, MethodInfo* method){
	{
		t168* L_0 = (__this->f3);
		return (((int32_t)(((t107 *)L_0)->max_length)));
	}
}
 t168* m8952 (t1747 * __this, MethodInfo* method){
	{
		t168* L_0 = (__this->f3);
		return L_0;
	}
}
 t1752 * m8953 (t1747 * __this, MethodInfo* method){
	{
		t1752 * L_0 = (__this->f6);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1752 * L_1 = (t1752 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1752_TI));
		m8939(L_1, &m8939_MI);
		__this->f6 = L_1;
	}

IL_0013:
	{
		t1752 * L_2 = (__this->f6);
		return L_2;
	}
}
 t774 * m8954 (t1747 * __this, MethodInfo* method){
	{
		t774 * L_0 = (__this->f5);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		m8964(__this, &m8964_MI);
	}

IL_000e:
	{
		t774 * L_1 = (__this->f5);
		return L_1;
	}
}
 t11* m8955 (t1747 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f2);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		t774 * L_1 = (__this->f5);
		t11* L_2 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3571_MI, L_1);
		__this->f2 = L_2;
	}

IL_0019:
	{
		t11* L_3 = (__this->f2);
		return L_3;
	}
}
 t5 * m8956 (t1747 * __this, MethodInfo* method){
	t776* V_0 = {0};
	int32_t V_1 = 0;
	{
		t675* L_0 = (__this->f4);
		if (L_0)
		{
			goto IL_0048;
		}
	}
	{
		t774 * L_1 = (__this->f5);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		t774 * L_2 = (__this->f5);
		t776* L_3 = (t776*)VirtFuncInvoker0< t776* >::Invoke(&m3586_MI, L_2);
		V_0 = L_3;
		__this->f4 = ((t675*)SZArrayNew(InitializedTypeInfo(&t675_TI), (((int32_t)(((t107 *)V_0)->max_length)))));
		V_1 = 0;
		goto IL_0042;
	}

IL_002e:
	{
		t675* L_4 = (__this->f4);
		int32_t L_5 = V_1;
		t114 * L_6 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3587_MI, (*(t775 **)(t775 **)SZArrayLdElema(V_0, L_5)));
		ArrayElementTypeCheck (L_4, L_6);
		*((t114 **)(t114 **)SZArrayLdElema(L_4, V_1)) = (t114 *)L_6;
		V_1 = ((int32_t)(V_1+1));
	}

IL_0042:
	{
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t107 *)V_0)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0048:
	{
		t675* L_7 = (__this->f4);
		return (t5 *)L_7;
	}
}
 t5 * m8957 (t1747 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		VirtActionInvoker0::Invoke(&m8958_MI, __this);
	}

IL_000e:
	{
		t5 * L_1 = (__this->f8);
		return L_1;
	}
}
 void m8958 (t1747 * __this, MethodInfo* method){
	t1755 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1755_TI));
		t1755 * L_0 = (t1755 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1755_TI));
		m8968(L_0, __this, &m8968_MI);
		V_0 = L_0;
		__this->f8 = V_0;
		t5 * L_1 = m8980(V_0, &m8980_MI);
		__this->f9 = L_1;
		return;
	}
}
 t11* m8959 (t1747 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t774 * L_1 = (__this->f5);
		t114 * L_2 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3584_MI, L_1);
		t11* L_3 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3642_MI, L_2);
		__this->f1 = L_3;
	}

IL_001e:
	{
		t11* L_4 = (__this->f1);
		return L_4;
	}
}
 t11* m8960 (t1747 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f0);
		return L_0;
	}
}
 void m8961 (t1747 * __this, t11* p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
 t5 * m8962 (t1747 * __this, int32_t p0, MethodInfo* method){
	{
		t168* L_0 = (__this->f3);
		int32_t L_1 = p0;
		return (*(t5 **)(t5 **)SZArrayLdElema(L_0, L_1));
	}
}
 void m8963 (t1747 * __this, MethodInfo* method){
	{
		return;
	}
}
 void m8964 (t1747 * __this, MethodInfo* method){
	t114 * V_0 = {0};
	t11* V_1 = {0};
	t114 * V_2 = {0};
	t11* G_B5_0 = {0};
	{
		t11* L_0 = (__this->f0);
		if (!L_0)
		{
			goto IL_0153;
		}
	}
	{
		t11* L_1 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1786_TI));
		t114 * L_2 = m9107(NULL, L_1, &m9107_MI);
		V_0 = L_2;
		if (V_0)
		{
			goto IL_005b;
		}
	}
	{
		t11* L_3 = (__this->f1);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		t11* L_4 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_5 = m2328(NULL, (t11*) &_stringLiteral91, L_4, (t11*) &_stringLiteral92, &m2328_MI);
		G_B5_0 = L_5;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		G_B5_0 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
	}

IL_003e:
	{
		V_1 = G_B5_0;
		t11* L_6 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_7 = m3573(NULL, (t11*) &_stringLiteral1939, V_1, (t11*) &_stringLiteral1940, L_6, &m3573_MI);
		t1785 * L_8 = (t1785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1785_TI));
		m9102(L_8, L_7, &m9102_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_005b:
	{
		t11* L_9 = (__this->f1);
		t114 * L_10 = m8965(__this, L_9, V_0, &m8965_MI);
		V_2 = L_10;
		if (V_2)
		{
			goto IL_00a7;
		}
	}
	{
		t585* L_11 = ((t585*)SZArrayNew(InitializedTypeInfo(&t585_TI), 5));
		ArrayElementTypeCheck (L_11, (t11*) &_stringLiteral1941);
		*((t11**)(t11**)SZArrayLdElema(L_11, 0)) = (t11*)(t11*) &_stringLiteral1941;
		t585* L_12 = L_11;
		t11* L_13 = (__this->f1);
		ArrayElementTypeCheck (L_12, L_13);
		*((t11**)(t11**)SZArrayLdElema(L_12, 1)) = (t11*)L_13;
		t585* L_14 = L_12;
		ArrayElementTypeCheck (L_14, (t11*) &_stringLiteral1942);
		*((t11**)(t11**)SZArrayLdElema(L_14, 2)) = (t11*)(t11*) &_stringLiteral1942;
		t585* L_15 = L_14;
		t11* L_16 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3644_MI, V_0);
		ArrayElementTypeCheck (L_15, L_16);
		*((t11**)(t11**)SZArrayLdElema(L_15, 3)) = (t11*)L_16;
		t585* L_17 = L_15;
		ArrayElementTypeCheck (L_17, (t11*) &_stringLiteral85);
		*((t11**)(t11**)SZArrayLdElema(L_17, 4)) = (t11*)(t11*) &_stringLiteral85;
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_18 = m4803(NULL, L_17, &m4803_MI);
		t1785 * L_19 = (t1785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1785_TI));
		m9102(L_19, L_18, &m9102_MI);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_00a7:
	{
		t11* L_20 = (__this->f2);
		t675* L_21 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1786_TI));
		t774 * L_22 = m9115(NULL, V_2, L_20, L_21, &m9115_MI);
		__this->f5 = L_22;
		t774 * L_23 = (__this->f5);
		if (L_23)
		{
			goto IL_00f5;
		}
	}
	{
		t168* L_24 = ((t168*)SZArrayNew(InitializedTypeInfo(&t168_TI), 4));
		ArrayElementTypeCheck (L_24, (t11*) &_stringLiteral1943);
		*((t5 **)(t5 **)SZArrayLdElema(L_24, 0)) = (t5 *)(t11*) &_stringLiteral1943;
		t168* L_25 = L_24;
		t11* L_26 = (__this->f2);
		ArrayElementTypeCheck (L_25, L_26);
		*((t5 **)(t5 **)SZArrayLdElema(L_25, 1)) = (t5 *)L_26;
		t168* L_27 = L_25;
		ArrayElementTypeCheck (L_27, (t11*) &_stringLiteral1944);
		*((t5 **)(t5 **)SZArrayLdElema(L_27, 2)) = (t5 *)(t11*) &_stringLiteral1944;
		t168* L_28 = L_27;
		ArrayElementTypeCheck (L_28, V_2);
		*((t5 **)(t5 **)SZArrayLdElema(L_28, 3)) = (t5 *)V_2;
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_29 = m2041(NULL, L_28, &m2041_MI);
		t1785 * L_30 = (t1785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1785_TI));
		m9102(L_30, L_29, &m9102_MI);
		il2cpp_codegen_raise_exception(L_30);
	}

IL_00f5:
	{
		if ((((t114 *)V_2) == ((t114 *)V_0)))
		{
			goto IL_0151;
		}
	}
	{
		bool L_31 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6789_MI, V_2);
		if (!L_31)
		{
			goto IL_0151;
		}
	}
	{
		bool L_32 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6789_MI, V_0);
		if (L_32)
		{
			goto IL_0151;
		}
	}
	{
		t774 * L_33 = (__this->f5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1786_TI));
		t774 * L_34 = m9105(NULL, V_0, L_33, &m9105_MI);
		__this->f5 = L_34;
		t774 * L_35 = (__this->f5);
		if (L_35)
		{
			goto IL_0151;
		}
	}
	{
		t168* L_36 = ((t168*)SZArrayNew(InitializedTypeInfo(&t168_TI), 4));
		ArrayElementTypeCheck (L_36, (t11*) &_stringLiteral1943);
		*((t5 **)(t5 **)SZArrayLdElema(L_36, 0)) = (t5 *)(t11*) &_stringLiteral1943;
		t168* L_37 = L_36;
		t11* L_38 = (__this->f2);
		ArrayElementTypeCheck (L_37, L_38);
		*((t5 **)(t5 **)SZArrayLdElema(L_37, 1)) = (t5 *)L_38;
		t168* L_39 = L_37;
		ArrayElementTypeCheck (L_39, (t11*) &_stringLiteral1944);
		*((t5 **)(t5 **)SZArrayLdElema(L_39, 2)) = (t5 *)(t11*) &_stringLiteral1944;
		t168* L_40 = L_39;
		ArrayElementTypeCheck (L_40, V_0);
		*((t5 **)(t5 **)SZArrayLdElema(L_40, 3)) = (t5 *)V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_41 = m2041(NULL, L_40, &m2041_MI);
		t1785 * L_42 = (t1785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1785_TI));
		m9102(L_42, L_41, &m9102_MI);
		il2cpp_codegen_raise_exception(L_42);
	}

IL_0151:
	{
		goto IL_0188;
	}

IL_0153:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1786_TI));
		t774 * L_43 = m9114(NULL, __this, &m9114_MI);
		__this->f5 = L_43;
		t774 * L_44 = (__this->f5);
		if (L_44)
		{
			goto IL_0188;
		}
	}
	{
		t11* L_45 = (__this->f2);
		t11* L_46 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m8959_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_47 = m3573(NULL, (t11*) &_stringLiteral1943, L_45, (t11*) &_stringLiteral1944, L_46, &m3573_MI);
		t1785 * L_48 = (t1785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1785_TI));
		m9102(L_48, L_47, &m9102_MI);
		il2cpp_codegen_raise_exception(L_48);
	}

IL_0188:
	{
		t774 * L_49 = (__this->f5);
		bool L_50 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8566_MI, L_49);
		if (!L_50)
		{
			goto IL_01d1;
		}
	}
	{
		t774 * L_51 = (__this->f5);
		bool L_52 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8564_MI, L_51);
		if (!L_52)
		{
			goto IL_01d1;
		}
	}
	{
		t675* L_53 = m8967(__this, &m8967_MI);
		if (L_53)
		{
			goto IL_01b5;
		}
	}
	{
		t1785 * L_54 = (t1785 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1785_TI));
		m9102(L_54, (t11*) &_stringLiteral1945, &m9102_MI);
		il2cpp_codegen_raise_exception(L_54);
	}

IL_01b5:
	{
		t774 * L_55 = (__this->f5);
		t675* L_56 = m8967(__this, &m8967_MI);
		t695 * L_57 = (t695 *)VirtFuncInvoker1< t695 *, t675* >::Invoke(&m8570_MI, ((t695 *)Castclass(L_55, InitializedTypeInfo(&t695_TI))), L_56);
		__this->f5 = L_57;
	}

IL_01d1:
	{
		return;
	}
}
 t114 * m8965 (t1747 * __this, t11* p0, t114 * p1, MethodInfo* method){
	t114 * V_0 = {0};
	t675* V_1 = {0};
	t114 * V_2 = {0};
	t675* V_3 = {0};
	int32_t V_4 = 0;
	{
		t11* L_0 = m8966(NULL, p0, &m8966_MI);
		p0 = L_0;
		t11* L_1 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3644_MI, p1);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_2 = m2356(NULL, p0, L_1, &m2356_MI);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		return p1;
	}

IL_001a:
	{
		t114 * L_3 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3555_MI, p1);
		V_0 = L_3;
		goto IL_003a;
	}

IL_0023:
	{
		t11* L_4 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3644_MI, V_0);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_5 = m2356(NULL, p0, L_4, &m2356_MI);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		return V_0;
	}

IL_0033:
	{
		t114 * L_6 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3555_MI, V_0);
		V_0 = L_6;
	}

IL_003a:
	{
		if (V_0)
		{
			goto IL_0023;
		}
	}
	{
		t675* L_7 = (t675*)VirtFuncInvoker0< t675* >::Invoke(&m11185_MI, p1);
		V_1 = L_7;
		V_3 = V_1;
		V_4 = 0;
		goto IL_0066;
	}

IL_004b:
	{
		int32_t L_8 = V_4;
		V_2 = (*(t114 **)(t114 **)SZArrayLdElema(V_3, L_8));
		t11* L_9 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3644_MI, V_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_10 = m2356(NULL, p0, L_9, &m2356_MI);
		if (!L_10)
		{
			goto IL_0060;
		}
	}
	{
		return V_2;
	}

IL_0060:
	{
		V_4 = ((int32_t)(V_4+1));
	}

IL_0066:
	{
		if ((((int32_t)V_4) < ((int32_t)(((int32_t)(((t107 *)V_3)->max_length))))))
		{
			goto IL_004b;
		}
	}
	{
		return (t114 *)NULL;
	}
}
 t11* m8966 (t5 * __this, t11* p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	t11* G_B2_1 = {0};
	int32_t G_B1_0 = 0;
	t11* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	t11* G_B3_2 = {0};
	{
		int32_t L_0 = m3576(p0, (t11*) &_stringLiteral1946, &m3576_MI);
		V_0 = L_0;
		G_B1_0 = ((int32_t)44);
		G_B1_1 = p0;
		if ((((uint32_t)V_0) != ((uint32_t)(-1))))
		{
			G_B2_0 = ((int32_t)44);
			G_B2_1 = p0;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0019;
	}

IL_0016:
	{
		G_B3_0 = ((int32_t)(V_0+2));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0019:
	{
		int32_t L_1 = m5074(G_B3_2, G_B3_1, G_B3_0, &m5074_MI);
		V_1 = L_1;
		if ((((int32_t)V_1) == ((int32_t)(-1))))
		{
			goto IL_0034;
		}
	}
	{
		t11* L_2 = m2386(p0, 0, V_1, &m2386_MI);
		t11* L_3 = m3572(L_2, &m3572_MI);
		p0 = L_3;
	}

IL_0034:
	{
		return p0;
	}
}
 t675* m8967 (t1747 * __this, MethodInfo* method){
	t675* V_0 = {0};
	{
		t675* L_0 = (__this->f7);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		t675* L_1 = (__this->f7);
		return L_1;
	}

IL_000f:
	{
		t774 * L_2 = (t774 *)VirtFuncInvoker0< t774 * >::Invoke(&m8954_MI, __this);
		t675* L_3 = (t675*)VirtFuncInvoker0< t675* >::Invoke(&m8563_MI, L_2);
		t675* L_4 = L_3;
		V_0 = L_4;
		__this->f7 = L_4;
		return V_0;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.MethodCall
extern Il2CppType t11_0_0_1;
FieldInfo t1747_f0_FieldInfo = 
{
	"_uri", &t11_0_0_1, &t1747_TI, offsetof(t1747, f0), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1747_f1_FieldInfo = 
{
	"_typeName", &t11_0_0_1, &t1747_TI, offsetof(t1747, f1), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1747_f2_FieldInfo = 
{
	"_methodName", &t11_0_0_1, &t1747_TI, offsetof(t1747, f2), &EmptyCustomAttributesCache};
extern Il2CppType t168_0_0_1;
FieldInfo t1747_f3_FieldInfo = 
{
	"_args", &t168_0_0_1, &t1747_TI, offsetof(t1747, f3), &EmptyCustomAttributesCache};
extern Il2CppType t675_0_0_1;
FieldInfo t1747_f4_FieldInfo = 
{
	"_methodSignature", &t675_0_0_1, &t1747_TI, offsetof(t1747, f4), &EmptyCustomAttributesCache};
extern Il2CppType t774_0_0_1;
FieldInfo t1747_f5_FieldInfo = 
{
	"_methodBase", &t774_0_0_1, &t1747_TI, offsetof(t1747, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1752_0_0_1;
FieldInfo t1747_f6_FieldInfo = 
{
	"_callContext", &t1752_0_0_1, &t1747_TI, offsetof(t1747, f6), &EmptyCustomAttributesCache};
extern Il2CppType t675_0_0_1;
FieldInfo t1747_f7_FieldInfo = 
{
	"_genericArguments", &t675_0_0_1, &t1747_TI, offsetof(t1747, f7), &EmptyCustomAttributesCache};
extern Il2CppType t986_0_0_4;
FieldInfo t1747_f8_FieldInfo = 
{
	"ExternalProperties", &t986_0_0_4, &t1747_TI, offsetof(t1747, f8), &EmptyCustomAttributesCache};
extern Il2CppType t986_0_0_4;
FieldInfo t1747_f9_FieldInfo = 
{
	"InternalProperties", &t986_0_0_4, &t1747_TI, offsetof(t1747, f9), &EmptyCustomAttributesCache};
extern Il2CppType t623_0_0_17;
extern CustomAttributesCache t1747__CustomAttributeCache_U3CU3Ef__switch$map1F;
FieldInfo t1747_f10_FieldInfo = 
{
	"<>f__switch$map1F", &t623_0_0_17, &t1747_TI, offsetof(t1747_SFs, f10), &t1747__CustomAttributeCache_U3CU3Ef__switch$map1F};
static FieldInfo* t1747_FIs[] =
{
	&t1747_f0_FieldInfo,
	&t1747_f1_FieldInfo,
	&t1747_f2_FieldInfo,
	&t1747_f3_FieldInfo,
	&t1747_f4_FieldInfo,
	&t1747_f5_FieldInfo,
	&t1747_f6_FieldInfo,
	&t1747_f7_FieldInfo,
	&t1747_f8_FieldInfo,
	&t1747_f9_FieldInfo,
	&t1747_f10_FieldInfo,
	NULL
};
static PropertyInfo t1747____System_Runtime_Remoting_Messaging_IInternalMessage_Uri_PropertyInfo = 
{
	&t1747_TI, "System.Runtime.Remoting.Messaging.IInternalMessage.Uri", NULL, &m8948_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1747____ArgCount_PropertyInfo = 
{
	&t1747_TI, "ArgCount", &m8951_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1747____Args_PropertyInfo = 
{
	&t1747_TI, "Args", &m8952_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1747____LogicalCallContext_PropertyInfo = 
{
	&t1747_TI, "LogicalCallContext", &m8953_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1747____MethodBase_PropertyInfo = 
{
	&t1747_TI, "MethodBase", &m8954_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1747____MethodName_PropertyInfo = 
{
	&t1747_TI, "MethodName", &m8955_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1747____MethodSignature_PropertyInfo = 
{
	&t1747_TI, "MethodSignature", &m8956_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1747____Properties_PropertyInfo = 
{
	&t1747_TI, "Properties", &m8957_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1747____TypeName_PropertyInfo = 
{
	&t1747_TI, "TypeName", &m8959_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1747____Uri_PropertyInfo = 
{
	&t1747_TI, "Uri", &m8960_MI, &m8961_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1747____GenericArguments_PropertyInfo = 
{
	&t1747_TI, "GenericArguments", &m8967_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1747_PIs[] =
{
	&t1747____System_Runtime_Remoting_Messaging_IInternalMessage_Uri_PropertyInfo,
	&t1747____ArgCount_PropertyInfo,
	&t1747____Args_PropertyInfo,
	&t1747____LogicalCallContext_PropertyInfo,
	&t1747____MethodBase_PropertyInfo,
	&t1747____MethodName_PropertyInfo,
	&t1747____MethodSignature_PropertyInfo,
	&t1747____Properties_PropertyInfo,
	&t1747____TypeName_PropertyInfo,
	&t1747____Uri_PropertyInfo,
	&t1747____GenericArguments_PropertyInfo,
	NULL
};
extern Il2CppType t1754_0_0_0;
extern Il2CppType t1754_0_0_0;
static ParameterInfo t1747_m8945_ParameterInfos[] = 
{
	{"h1", 0, 134222286, &EmptyCustomAttributesCache, &t1754_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8945_MI = 
{
	".ctor", (methodPointerType)&m8945, &t1747_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1747_m8945_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3760, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1747_m8946_ParameterInfos[] = 
{
	{"info", 0, 134222287, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134222288, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m8946_MI = 
{
	".ctor", (methodPointerType)&m8946, &t1747_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1747_m8946_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 3761, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8947_MI = 
{
	".ctor", (methodPointerType)&m8947, &t1747_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6275, 0, 255, 0, false, false, 3762, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1747_m8948_ParameterInfos[] = 
{
	{"value", 0, 134222289, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8948_MI = 
{
	"System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri", (methodPointerType)&m8948, &t1747_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1747_m8948_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 5, 1, false, false, 3763, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1747_m8949_ParameterInfos[] = 
{
	{"key", 0, 134222290, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"value", 1, 134222291, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8949_MI = 
{
	"InitMethodProperty", (methodPointerType)&m8949, &t1747_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t1747_m8949_ParameterInfos, &EmptyCustomAttributesCache, 451, 0, 16, 2, false, false, 3764, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1747_m8950_ParameterInfos[] = 
{
	{"info", 0, 134222292, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134222293, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m8950_MI = 
{
	"GetObjectData", (methodPointerType)&m8950, &t1747_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1747_m8950_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 17, 2, false, false, 3765, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8951_MI = 
{
	"get_ArgCount", (methodPointerType)&m8951, &t1747_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, false, 3766, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8952_MI = 
{
	"get_Args", (methodPointerType)&m8952, &t1747_TI, &t168_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 8, 0, false, false, 3767, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1752_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8953_MI = 
{
	"get_LogicalCallContext", (methodPointerType)&m8953, &t1747_TI, &t1752_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, false, 3768, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t774_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8954_MI = 
{
	"get_MethodBase", (methodPointerType)&m8954, &t1747_TI, &t774_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, false, 3769, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8955_MI = 
{
	"get_MethodName", (methodPointerType)&m8955, &t1747_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 11, 0, false, false, 3770, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8956_MI = 
{
	"get_MethodSignature", (methodPointerType)&m8956, &t1747_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 12, 0, false, false, 3771, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t986_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8957_MI = 
{
	"get_Properties", (methodPointerType)&m8957, &t1747_TI, &t986_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2502, 0, 18, 0, false, false, 3772, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8958_MI = 
{
	"InitDictionary", (methodPointerType)&m8958, &t1747_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 451, 0, 19, 0, false, false, 3773, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8959_MI = 
{
	"get_TypeName", (methodPointerType)&m8959, &t1747_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 13, 0, false, false, 3774, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8960_MI = 
{
	"get_Uri", (methodPointerType)&m8960, &t1747_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 14, 0, false, false, 3775, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1747_m8961_ParameterInfos[] = 
{
	{"value", 0, 134222294, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8961_MI = 
{
	"set_Uri", (methodPointerType)&m8961, &t1747_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1747_m8961_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 20, 1, false, false, 3776, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1747_m8962_ParameterInfos[] = 
{
	{"argNum", 0, 134222295, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8962_MI = 
{
	"GetArg", (methodPointerType)&m8962, &t1747_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t1747_m8962_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 15, 1, false, false, 3777, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8963_MI = 
{
	"Init", (methodPointerType)&m8963, &t1747_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 454, 0, 21, 0, false, false, 3778, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8964_MI = 
{
	"ResolveMethod", (methodPointerType)&m8964, &t1747_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 3779, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t1747_m8965_ParameterInfos[] = 
{
	{"clientType", 0, 134222296, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"serverType", 1, 134222297, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8965_MI = 
{
	"CastTo", (methodPointerType)&m8965, &t1747_TI, &t114_0_0_0, RuntimeInvoker_t5_t5_t5, t1747_m8965_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 3780, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1747_m8966_ParameterInfos[] = 
{
	{"aqname", 0, 134222298, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8966_MI = 
{
	"GetTypeNameFromAssemblyQualifiedName", (methodPointerType)&m8966, &t1747_TI, &t11_0_0_0, RuntimeInvoker_t5_t5, t1747_m8966_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 3781, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t675_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8967_MI = 
{
	"get_GenericArguments", (methodPointerType)&m8967, &t1747_TI, &t675_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2177, 0, 255, 0, false, false, 3782, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1747_MIs[] =
{
	&m8945_MI,
	&m8946_MI,
	&m8947_MI,
	&m8948_MI,
	&m8949_MI,
	&m8950_MI,
	&m8951_MI,
	&m8952_MI,
	&m8953_MI,
	&m8954_MI,
	&m8955_MI,
	&m8956_MI,
	&m8957_MI,
	&m8958_MI,
	&m8959_MI,
	&m8960_MI,
	&m8961_MI,
	&m8962_MI,
	&m8963_MI,
	&m8964_MI,
	&m8965_MI,
	&m8966_MI,
	&m8967_MI,
	NULL
};
static MethodInfo* t1747_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m8950_MI,
	&m8948_MI,
	&m8957_MI,
	&m8951_MI,
	&m8952_MI,
	&m8953_MI,
	&m8954_MI,
	&m8955_MI,
	&m8956_MI,
	&m8959_MI,
	&m8960_MI,
	&m8962_MI,
	&m8949_MI,
	&m8950_MI,
	&m8957_MI,
	&m8958_MI,
	&m8961_MI,
	&m8963_MI,
};
static TypeInfo* t1747_ITIs[] = 
{
	&t517_TI,
	&t2382_TI,
	&t1746_TI,
	&t1768_TI,
	&t1756_TI,
	&t2383_TI,
};
static Il2CppInterfaceOffsetPair t1747_IOs[] = 
{
	{ &t517_TI, 4},
	{ &t2382_TI, 5},
	{ &t1746_TI, 6},
	{ &t1768_TI, 7},
	{ &t1756_TI, 7},
	{ &t2383_TI, 16},
};
void t1747_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t974 * tmp;
		tmp = (t974 *)il2cpp_codegen_object_new (&t974_TI);
		m3843(tmp, false, &m3843_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t1747_CustomAttributesCacheGenerator_U3CU3Ef__switch$map1F(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1747__CustomAttributeCache = {
2,
NULL,
&t1747_CustomAttributesCacheGenerator
};
CustomAttributesCache t1747__CustomAttributeCache_U3CU3Ef__switch$map1F = {
1,
NULL,
&t1747_CustomAttributesCacheGenerator_U3CU3Ef__switch$map1F
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1747_0_0_0;
extern Il2CppType t1747_1_0_0;
struct t1747;
extern CustomAttributesCache t1747__CustomAttributeCache;
extern CustomAttributesCache t1747__CustomAttributeCache_U3CU3Ef__switch$map1F;
TypeInfo t1747_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MethodCall", "System.Runtime.Remoting.Messaging", t1747_MIs, t1747_PIs, t1747_FIs, NULL, &t5_TI, NULL, NULL, &t1747_TI, t1747_ITIs, t1747_VT, &t1747__CustomAttributeCache, &t1747_TI, &t1747_0_0_0, &t1747_1_0_0, t1747_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1747), 0, -1, sizeof(t1747_SFs), 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, 23, 11, 11, 0, 0, 22, 6, 6};
#ifndef _MSC_VER
#else
#endif



 void m8968 (t1755 * __this, t5 * p0, MethodInfo* method){
	{
		m8976(__this, p0, &m8976_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1755_TI));
		m8978(__this, (((t1755_SFs*)InitializedTypeInfo(&t1755_TI)->static_fields)->f6), &m8978_MI);
		return;
	}
}
extern MethodInfo m8969_MI;
 void m8969 (t5 * __this, MethodInfo* method){
	{
		t585* L_0 = ((t585*)SZArrayNew(InitializedTypeInfo(&t585_TI), 6));
		ArrayElementTypeCheck (L_0, (t11*) &_stringLiteral1930);
		*((t11**)(t11**)SZArrayLdElema(L_0, 0)) = (t11*)(t11*) &_stringLiteral1930;
		t585* L_1 = L_0;
		ArrayElementTypeCheck (L_1, (t11*) &_stringLiteral1931);
		*((t11**)(t11**)SZArrayLdElema(L_1, 1)) = (t11*)(t11*) &_stringLiteral1931;
		t585* L_2 = L_1;
		ArrayElementTypeCheck (L_2, (t11*) &_stringLiteral1932);
		*((t11**)(t11**)SZArrayLdElema(L_2, 2)) = (t11*)(t11*) &_stringLiteral1932;
		t585* L_3 = L_2;
		ArrayElementTypeCheck (L_3, (t11*) &_stringLiteral1933);
		*((t11**)(t11**)SZArrayLdElema(L_3, 3)) = (t11*)(t11*) &_stringLiteral1933;
		t585* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t11*) &_stringLiteral1934);
		*((t11**)(t11**)SZArrayLdElema(L_4, 4)) = (t11*)(t11*) &_stringLiteral1934;
		t585* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t11*) &_stringLiteral1935);
		*((t11**)(t11**)SZArrayLdElema(L_5, 5)) = (t11*)(t11*) &_stringLiteral1935;
		((t1755_SFs*)InitializedTypeInfo(&t1755_TI)->static_fields)->f6 = L_5;
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.MethodCallDictionary
extern Il2CppType t585_0_0_22;
FieldInfo t1755_f6_FieldInfo = 
{
	"InternalKeys", &t585_0_0_22, &t1755_TI, offsetof(t1755_SFs, f6), &EmptyCustomAttributesCache};
static FieldInfo* t1755_FIs[] =
{
	&t1755_f6_FieldInfo,
	NULL
};
extern Il2CppType t1756_0_0_0;
static ParameterInfo t1755_m8968_ParameterInfos[] = 
{
	{"message", 0, 134222299, &EmptyCustomAttributesCache, &t1756_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8968_MI = 
{
	".ctor", (methodPointerType)&m8968, &t1755_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1755_m8968_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3783, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8969_MI = 
{
	".cctor", (methodPointerType)&m8969, &t1755_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3784, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1755_MIs[] =
{
	&m8968_MI,
	&m8969_MI,
	NULL
};
static MethodInfo* t1755_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m8977_MI,
	&m8989_MI,
	&m8990_MI,
	&m8991_MI,
	&m8992_MI,
	&m8982_MI,
	&m8983_MI,
	&m8987_MI,
	&m8993_MI,
	&m8988_MI,
	&m8979_MI,
	&m8984_MI,
	&m8985_MI,
	&m8986_MI,
};
static Il2CppInterfaceOffsetPair t1755_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t986_TI, 9},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1755_0_0_0;
extern Il2CppType t1755_1_0_0;
struct t1755;
TypeInfo t1755_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MethodCallDictionary", "System.Runtime.Remoting.Messaging", t1755_MIs, NULL, t1755_FIs, NULL, &t1749_TI, NULL, NULL, &t1755_TI, NULL, t1755_VT, &EmptyCustomAttributesCache, &t1755_TI, &t1755_0_0_0, &t1755_1_0_0, t1755_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1755), 0, -1, sizeof(t1755_SFs), 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, true, false, false, 2, 0, 1, 0, 0, 18, 0, 3};
#include "t1757.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1757_TI;
#include "t1757MD.h"

#include "t133.h"
extern TypeInfo t133_TI;
#include "t133MD.h"
extern MethodInfo m8973_MI;
extern MethodInfo m4760_MI;
extern MethodInfo m4759_MI;
extern MethodInfo m11460_MI;
extern MethodInfo m4814_MI;
extern MethodInfo m8981_MI;


extern MethodInfo m8970_MI;
 void m8970 (t1757 * __this, t1749 * p0, MethodInfo* method){
	t5 * V_0 = {0};
	t1757 * G_B2_0 = {0};
	t1757 * G_B1_0 = {0};
	t5 * G_B3_0 = {0};
	t1757 * G_B3_1 = {0};
	{
		m460(__this, &m460_MI);
		__this->f0 = p0;
		t1749 * L_0 = (__this->f0);
		t5 * L_1 = (L_0->f0);
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_002f;
		}
	}
	{
		t1749 * L_2 = (__this->f0);
		t5 * L_3 = (L_2->f0);
		t5 * L_4 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4756_MI, L_3);
		V_0 = L_4;
		G_B3_0 = V_0;
		G_B3_1 = G_B1_0;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = ((t5 *)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0030:
	{
		G_B3_1->f1 = G_B3_0;
		__this->f2 = (-1);
		return;
	}
}
extern MethodInfo m8971_MI;
 t5 * m8971 (t1757 * __this, MethodInfo* method){
	t990  V_0 = {0};
	{
		t990  L_0 = (t990 )VirtFuncInvoker0< t990  >::Invoke(&m8973_MI, __this);
		V_0 = L_0;
		t5 * L_1 = m7508((&V_0), &m7508_MI);
		return L_1;
	}
}
extern MethodInfo m8972_MI;
 bool m8972 (t1757 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)-2))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = (__this->f2);
		__this->f2 = ((int32_t)(L_1+1));
		int32_t L_2 = (__this->f2);
		t1749 * L_3 = (__this->f0);
		t585* L_4 = (L_3->f2);
		if ((((int32_t)L_2) >= ((int32_t)(((int32_t)(((t107 *)L_4)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		return 1;
	}

IL_002f:
	{
		__this->f2 = ((int32_t)-2);
	}

IL_0037:
	{
		t5 * L_5 = (__this->f1);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		return 0;
	}

IL_0041:
	{
		goto IL_0062;
	}

IL_0043:
	{
		t1749 * L_6 = (__this->f0);
		t5 * L_7 = (__this->f1);
		t5 * L_8 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4814_MI, L_7);
		bool L_9 = m8981(L_6, ((t11*)Castclass(L_8, (&t11_TI))), &m8981_MI);
		if (L_9)
		{
			goto IL_0062;
		}
	}
	{
		return 1;
	}

IL_0062:
	{
		t5 * L_10 = (__this->f1);
		bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m747_MI, L_10);
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return 0;
	}
}
 t990  m8973 (t1757 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		t1749 * L_1 = (__this->f0);
		t585* L_2 = (L_1->f2);
		int32_t L_3 = (__this->f2);
		int32_t L_4 = L_3;
		t1749 * L_5 = (__this->f0);
		t1749 * L_6 = (__this->f0);
		t585* L_7 = (L_6->f2);
		int32_t L_8 = (__this->f2);
		int32_t L_9 = L_8;
		t5 * L_10 = (t5 *)VirtFuncInvoker1< t5 *, t11* >::Invoke(&m8984_MI, L_5, (*(t11**)(t11**)SZArrayLdElema(L_7, L_9)));
		t990  L_11 = {0};
		m4760(&L_11, (*(t11**)(t11**)SZArrayLdElema(L_2, L_4)), L_10, &m4760_MI);
		return L_11;
	}

IL_003e:
	{
		int32_t L_12 = (__this->f2);
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_004f;
		}
	}
	{
		t5 * L_13 = (__this->f1);
		if (L_13)
		{
			goto IL_005a;
		}
	}

IL_004f:
	{
		t133 * L_14 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4759(L_14, (t11*) &_stringLiteral1949, &m4759_MI);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005a:
	{
		t5 * L_15 = (__this->f1);
		t990  L_16 = (t990 )InterfaceFuncInvoker0< t990  >::Invoke(&m11460_MI, L_15);
		return L_16;
	}
}
extern MethodInfo m8974_MI;
 t5 * m8974 (t1757 * __this, MethodInfo* method){
	t990  V_0 = {0};
	{
		t990  L_0 = (t990 )VirtFuncInvoker0< t990  >::Invoke(&m8973_MI, __this);
		V_0 = L_0;
		t5 * L_1 = m7507((&V_0), &m7507_MI);
		return L_1;
	}
}
extern MethodInfo m8975_MI;
 t5 * m8975 (t1757 * __this, MethodInfo* method){
	t990  V_0 = {0};
	{
		t990  L_0 = (t990 )VirtFuncInvoker0< t990  >::Invoke(&m8973_MI, __this);
		V_0 = L_0;
		t5 * L_1 = m7508((&V_0), &m7508_MI);
		return L_1;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
extern Il2CppType t1749_0_0_1;
FieldInfo t1757_f0_FieldInfo = 
{
	"_methodDictionary", &t1749_0_0_1, &t1757_TI, offsetof(t1757, f0), &EmptyCustomAttributesCache};
extern Il2CppType t987_0_0_1;
FieldInfo t1757_f1_FieldInfo = 
{
	"_hashtableEnum", &t987_0_0_1, &t1757_TI, offsetof(t1757, f1), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1757_f2_FieldInfo = 
{
	"_posMethod", &t110_0_0_1, &t1757_TI, offsetof(t1757, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1757_FIs[] =
{
	&t1757_f0_FieldInfo,
	&t1757_f1_FieldInfo,
	&t1757_f2_FieldInfo,
	NULL
};
static PropertyInfo t1757____Current_PropertyInfo = 
{
	&t1757_TI, "Current", &m8971_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1757____Entry_PropertyInfo = 
{
	&t1757_TI, "Entry", &m8973_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1757____Key_PropertyInfo = 
{
	&t1757_TI, "Key", &m8974_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1757____Value_PropertyInfo = 
{
	&t1757_TI, "Value", &m8975_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1757_PIs[] =
{
	&t1757____Current_PropertyInfo,
	&t1757____Entry_PropertyInfo,
	&t1757____Key_PropertyInfo,
	&t1757____Value_PropertyInfo,
	NULL
};
extern Il2CppType t1749_0_0_0;
extern Il2CppType t1749_0_0_0;
static ParameterInfo t1757_m8970_ParameterInfos[] = 
{
	{"methodDictionary", 0, 134222314, &EmptyCustomAttributesCache, &t1749_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8970_MI = 
{
	".ctor", (methodPointerType)&m8970, &t1757_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1757_m8970_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3803, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8971_MI = 
{
	"get_Current", (methodPointerType)&m8971, &t1757_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 3804, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8972_MI = 
{
	"MoveNext", (methodPointerType)&m8972, &t1757_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 3805, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t990_0_0_0;
extern void* RuntimeInvoker_t990 (MethodInfo* method, void* obj, void** args);
MethodInfo m8973_MI = 
{
	"get_Entry", (methodPointerType)&m8973, &t1757_TI, &t990_0_0_0, RuntimeInvoker_t990, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 3806, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8974_MI = 
{
	"get_Key", (methodPointerType)&m8974, &t1757_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, false, 3807, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8975_MI = 
{
	"get_Value", (methodPointerType)&m8975, &t1757_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 8, 0, false, false, 3808, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1757_MIs[] =
{
	&m8970_MI,
	&m8971_MI,
	&m8972_MI,
	&m8973_MI,
	&m8974_MI,
	&m8975_MI,
	NULL
};
static MethodInfo* t1757_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m8971_MI,
	&m8972_MI,
	&m8973_MI,
	&m8974_MI,
	&m8975_MI,
};
static TypeInfo* t1757_ITIs[] = 
{
	&t196_TI,
	&t987_TI,
};
static Il2CppInterfaceOffsetPair t1757_IOs[] = 
{
	{ &t196_TI, 4},
	{ &t987_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1757_0_0_0;
extern Il2CppType t1757_1_0_0;
struct t1757;
TypeInfo t1757_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DictionaryEnumerator", "", t1757_MIs, t1757_PIs, t1757_FIs, NULL, &t5_TI, NULL, &t1749_TI, &t1757_TI, t1757_ITIs, t1757_VT, &EmptyCustomAttributesCache, &t1757_TI, &t1757_0_0_0, &t1757_1_0_0, t1757_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1757), 0, -1, 0, 0, -1, 1048579, 0, false, false, false, false, false, false, false, false, false, false, false, false, 6, 4, 3, 0, 0, 9, 2, 2};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t107_TI;
extern MethodInfo m4749_MI;
extern MethodInfo m4757_MI;
extern MethodInfo m4755_MI;


 void m8976 (t1749 * __this, t5 * p0, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		__this->f1 = p0;
		return;
	}
}
 t5 * m8977 (t1749 * __this, MethodInfo* method){
	{
		t1757 * L_0 = (t1757 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1757_TI));
		m8970(L_0, __this, &m8970_MI);
		return L_0;
	}
}
 void m8978 (t1749 * __this, t585* p0, MethodInfo* method){
	{
		__this->f2 = p0;
		return;
	}
}
 t5 * m8979 (t1749 * __this, MethodInfo* method){
	{
		__this->f3 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t984_TI));
		t984 * L_0 = (t984 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t984_TI));
		m5003(L_0, &m5003_MI);
		return L_0;
	}
}
 t5 * m8980 (t1749 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t5 * L_1 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m8979_MI, __this);
		__this->f0 = L_1;
	}

IL_0014:
	{
		t5 * L_2 = (__this->f0);
		return L_2;
	}
}
 bool m8981 (t1749 * __this, t11* p0, MethodInfo* method){
	t11* V_0 = {0};
	t585* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		t585* L_1 = (__this->f2);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0028;
	}

IL_0015:
	{
		int32_t L_2 = V_2;
		V_0 = (*(t11**)(t11**)SZArrayLdElema(V_1, L_2));
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_3 = m2356(NULL, p0, V_0, &m2356_MI);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}

IL_0024:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_0028:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t107 *)V_1)->max_length))))))
		{
			goto IL_0015;
		}
	}
	{
		return 0;
	}
}
 t5 * m8982 (t1749 * __this, t5 * p0, MethodInfo* method){
	t11* V_0 = {0};
	int32_t V_1 = 0;
	{
		V_0 = ((t11*)Castclass(p0, (&t11_TI)));
		V_1 = 0;
		goto IL_0027;
	}

IL_000b:
	{
		t585* L_0 = (__this->f2);
		int32_t L_1 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_2 = m2356(NULL, (*(t11**)(t11**)SZArrayLdElema(L_0, L_1)), V_0, &m2356_MI);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		t5 * L_3 = (t5 *)VirtFuncInvoker1< t5 *, t11* >::Invoke(&m8984_MI, __this, V_0);
		return L_3;
	}

IL_0023:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0027:
	{
		t585* L_4 = (__this->f2);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t107 *)L_4)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		t5 * L_5 = (__this->f0);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		t5 * L_6 = (__this->f0);
		t5 * L_7 = (t5 *)InterfaceFuncInvoker1< t5 *, t5 * >::Invoke(&m4749_MI, L_6, p0);
		return L_7;
	}

IL_0047:
	{
		return NULL;
	}
}
 void m8983 (t1749 * __this, t5 * p0, t5 * p1, MethodInfo* method){
	{
		VirtActionInvoker2< t5 *, t5 * >::Invoke(&m8987_MI, __this, p0, p1);
		return;
	}
}
 t5 * m8984 (t1749 * __this, t11* p0, MethodInfo* method){
	t11* V_0 = {0};
	t623 * V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = p0;
		if (!V_0)
		{
			goto IL_0120;
		}
	}
	{
		if ((((t1749_SFs*)InitializedTypeInfo(&t1749_TI)->static_fields)->f4))
		{
			goto IL_007c;
		}
	}
	{
		t623 * L_0 = (t623 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t623_TI));
		m4833(L_0, 8, &m4833_MI);
		V_1 = L_0;
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1930, 0);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1931, 1);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1932, 2);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1933, 3);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1935, 4);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1934, 5);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1947, 6);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1948, 7);
		((t1749_SFs*)InitializedTypeInfo(&t1749_TI)->static_fields)->f4 = V_1;
	}

IL_007c:
	{
		bool L_1 = (bool)VirtFuncInvoker2< bool, t11*, int32_t* >::Invoke(&m4835_MI, (((t1749_SFs*)InitializedTypeInfo(&t1749_TI)->static_fields)->f4), V_0, (&V_2));
		if (!L_1)
		{
			goto IL_0120;
		}
	}
	{
		if (V_2 == 0)
		{
			goto IL_00b6;
		}
		if (V_2 == 1)
		{
			goto IL_00c2;
		}
		if (V_2 == 2)
		{
			goto IL_00ce;
		}
		if (V_2 == 3)
		{
			goto IL_00da;
		}
		if (V_2 == 4)
		{
			goto IL_00e6;
		}
		if (V_2 == 5)
		{
			goto IL_00f2;
		}
		if (V_2 == 6)
		{
			goto IL_00fe;
		}
		if (V_2 == 7)
		{
			goto IL_010f;
		}
	}
	{
		goto IL_0120;
	}

IL_00b6:
	{
		t5 * L_2 = (__this->f1);
		t11* L_3 = (t11*)InterfaceFuncInvoker0< t11* >::Invoke(&m11551_MI, L_2);
		return L_3;
	}

IL_00c2:
	{
		t5 * L_4 = (__this->f1);
		t11* L_5 = (t11*)InterfaceFuncInvoker0< t11* >::Invoke(&m11548_MI, L_4);
		return L_5;
	}

IL_00ce:
	{
		t5 * L_6 = (__this->f1);
		t11* L_7 = (t11*)InterfaceFuncInvoker0< t11* >::Invoke(&m11550_MI, L_6);
		return L_7;
	}

IL_00da:
	{
		t5 * L_8 = (__this->f1);
		t5 * L_9 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m11549_MI, L_8);
		return L_9;
	}

IL_00e6:
	{
		t5 * L_10 = (__this->f1);
		t1752 * L_11 = (t1752 *)InterfaceFuncInvoker0< t1752 * >::Invoke(&m11546_MI, L_10);
		return L_11;
	}

IL_00f2:
	{
		t5 * L_12 = (__this->f1);
		t168* L_13 = (t168*)InterfaceFuncInvoker0< t168* >::Invoke(&m11545_MI, L_12);
		return (t5 *)L_13;
	}

IL_00fe:
	{
		t5 * L_14 = (__this->f1);
		t168* L_15 = (t168*)InterfaceFuncInvoker0< t168* >::Invoke(&m11555_MI, ((t5 *)Castclass(L_14, InitializedTypeInfo(&t1759_TI))));
		return (t5 *)L_15;
	}

IL_010f:
	{
		t5 * L_16 = (__this->f1);
		t5 * L_17 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m11556_MI, ((t5 *)Castclass(L_16, InitializedTypeInfo(&t1759_TI))));
		return L_17;
	}

IL_0120:
	{
		return NULL;
	}
}
 void m8985 (t1749 * __this, t11* p0, t5 * p1, MethodInfo* method){
	t11* V_0 = {0};
	t623 * V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = p0;
		if (!V_0)
		{
			goto IL_00c2;
		}
	}
	{
		if ((((t1749_SFs*)InitializedTypeInfo(&t1749_TI)->static_fields)->f5))
		{
			goto IL_007c;
		}
	}
	{
		t623 * L_0 = (t623 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t623_TI));
		m4833(L_0, 8, &m4833_MI);
		V_1 = L_0;
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1935, 0);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1947, 0);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1948, 0);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1931, 1);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1932, 1);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1933, 1);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1934, 1);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral1930, 2);
		((t1749_SFs*)InitializedTypeInfo(&t1749_TI)->static_fields)->f5 = V_1;
	}

IL_007c:
	{
		bool L_1 = (bool)VirtFuncInvoker2< bool, t11*, int32_t* >::Invoke(&m4835_MI, (((t1749_SFs*)InitializedTypeInfo(&t1749_TI)->static_fields)->f5), V_0, (&V_2));
		if (!L_1)
		{
			goto IL_00c2;
		}
	}
	{
		if (V_2 == 0)
		{
			goto IL_009f;
		}
		if (V_2 == 1)
		{
			goto IL_00a0;
		}
		if (V_2 == 2)
		{
			goto IL_00ab;
		}
	}
	{
		goto IL_00c2;
	}

IL_009f:
	{
		return;
	}

IL_00a0:
	{
		t160 * L_2 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2582(L_2, (t11*) &_stringLiteral1936, &m2582_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_00ab:
	{
		t5 * L_3 = (__this->f1);
		InterfaceActionInvoker1< t11* >::Invoke(&m11542_MI, ((t5 *)Castclass(L_3, InitializedTypeInfo(&t2382_TI))), ((t11*)Castclass(p1, (&t11_TI))));
		return;
	}

IL_00c2:
	{
		return;
	}
}
 t5 * m8986 (t1749 * __this, MethodInfo* method){
	t996 * V_0 = {0};
	int32_t V_1 = 0;
	t990  V_2 = {0};
	t5 * V_3 = {0};
	t5 * V_4 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t996_TI));
		t996 * L_0 = (t996 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t996_TI));
		m4773(L_0, &m4773_MI);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000a:
	{
		t585* L_1 = (__this->f2);
		int32_t L_2 = V_1;
		t5 * L_3 = (t5 *)VirtFuncInvoker1< t5 *, t11* >::Invoke(&m8984_MI, __this, (*(t11**)(t11**)SZArrayLdElema(L_1, L_2)));
		VirtFuncInvoker1< int32_t, t5 * >::Invoke(&m4784_MI, V_0, L_3);
		V_1 = ((int32_t)(V_1+1));
	}

IL_0023:
	{
		t585* L_4 = (__this->f2);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t107 *)L_4)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		t5 * L_5 = (__this->f0);
		if (!L_5)
		{
			goto IL_0091;
		}
	}
	{
		t5 * L_6 = (__this->f0);
		t5 * L_7 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4756_MI, L_6);
		V_3 = L_7;
	}

IL_0042:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0072;
		}

IL_0044:
		{
			t5 * L_8 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4765_MI, V_3);
			V_2 = ((*(t990 *)((t990 *)UnBox (L_8, InitializedTypeInfo(&t990_TI)))));
			t5 * L_9 = m7507((&V_2), &m7507_MI);
			bool L_10 = m8981(__this, ((t11*)Castclass(L_9, (&t11_TI))), &m8981_MI);
			if (L_10)
			{
				goto IL_0072;
			}
		}

IL_0064:
		{
			t5 * L_11 = m7508((&V_2), &m7508_MI);
			VirtFuncInvoker1< int32_t, t5 * >::Invoke(&m4784_MI, V_0, L_11);
		}

IL_0072:
		{
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m747_MI, V_3);
			if (L_12)
			{
				goto IL_0044;
			}
		}

IL_007a:
		{
			// IL_007a: leave.s IL_0091
			leaveInstructions[0] = 0x91; // 1
			THROW_SENTINEL(IL_0091);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_007c;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_007c;
	}

IL_007c:
	{ // begin finally (depth: 1)
		{
			V_4 = ((t5 *)IsInst(V_3, InitializedTypeInfo(&t132_TI)));
			if (V_4)
			{
				goto IL_0089;
			}
		}

IL_0088:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x91:
					goto IL_0091;
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

IL_0089:
		{
			InterfaceActionInvoker0::Invoke(&m516_MI, V_4);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x91:
					goto IL_0091;
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

IL_0091:
	{
		return V_0;
	}
}
 void m8987 (t1749 * __this, t5 * p0, t5 * p1, MethodInfo* method){
	t11* V_0 = {0};
	int32_t V_1 = 0;
	{
		V_0 = ((t11*)Castclass(p0, (&t11_TI)));
		V_1 = 0;
		goto IL_0028;
	}

IL_000b:
	{
		t585* L_0 = (__this->f2);
		int32_t L_1 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_2 = m2356(NULL, (*(t11**)(t11**)SZArrayLdElema(L_0, L_1)), V_0, &m2356_MI);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		VirtActionInvoker2< t11*, t5 * >::Invoke(&m8985_MI, __this, V_0, p1);
		return;
	}

IL_0024:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0028:
	{
		t585* L_3 = (__this->f2);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t107 *)L_3)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		t5 * L_4 = (__this->f0);
		if (L_4)
		{
			goto IL_0047;
		}
	}
	{
		t5 * L_5 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m8979_MI, __this);
		__this->f0 = L_5;
	}

IL_0047:
	{
		t5 * L_6 = (__this->f0);
		InterfaceActionInvoker2< t5 *, t5 * >::Invoke(&m4750_MI, L_6, p0, p1);
		return;
	}
}
 void m8988 (t1749 * __this, t5 * p0, MethodInfo* method){
	t11* V_0 = {0};
	int32_t V_1 = 0;
	{
		V_0 = ((t11*)Castclass(p0, (&t11_TI)));
		V_1 = 0;
		goto IL_002a;
	}

IL_000b:
	{
		t585* L_0 = (__this->f2);
		int32_t L_1 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_2 = m2356(NULL, (*(t11**)(t11**)SZArrayLdElema(L_0, L_1)), V_0, &m2356_MI);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		t160 * L_3 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2582(L_3, (t11*) &_stringLiteral1936, &m2582_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0026:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_002a:
	{
		t585* L_4 = (__this->f2);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t107 *)L_4)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		t5 * L_5 = (__this->f0);
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		t5 * L_6 = (__this->f0);
		InterfaceActionInvoker1< t5 * >::Invoke(&m4757_MI, L_6, p0);
	}

IL_0049:
	{
		return;
	}
}
 int32_t m8989 (t1749 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f0);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		t5 * L_1 = (__this->f0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m4748_MI, L_1);
		t585* L_3 = (__this->f2);
		return ((int32_t)(L_2+(((int32_t)(((t107 *)L_3)->max_length)))));
	}

IL_001d:
	{
		t585* L_4 = (__this->f2);
		return (((int32_t)(((t107 *)L_4)->max_length)));
	}
}
 bool m8990 (t1749 * __this, MethodInfo* method){
	{
		return 0;
	}
}
 t5 * m8991 (t1749 * __this, MethodInfo* method){
	{
		return __this;
	}
}
 void m8992 (t1749 * __this, t107 * p0, int32_t p1, MethodInfo* method){
	{
		t5 * L_0 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m8986_MI, __this);
		InterfaceActionInvoker2< t107 *, int32_t >::Invoke(&m4755_MI, L_0, p0, p1);
		return;
	}
}
 t5 * m8993 (t1749 * __this, MethodInfo* method){
	{
		t1757 * L_0 = (t1757 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1757_TI));
		m8970(L_0, __this, &m8970_MI);
		return L_0;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.MethodDictionary
extern Il2CppType t986_0_0_1;
FieldInfo t1749_f0_FieldInfo = 
{
	"_internalProperties", &t986_0_0_1, &t1749_TI, offsetof(t1749, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1756_0_0_4;
FieldInfo t1749_f1_FieldInfo = 
{
	"_message", &t1756_0_0_4, &t1749_TI, offsetof(t1749, f1), &EmptyCustomAttributesCache};
extern Il2CppType t585_0_0_1;
FieldInfo t1749_f2_FieldInfo = 
{
	"_methodKeys", &t585_0_0_1, &t1749_TI, offsetof(t1749, f2), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t1749_f3_FieldInfo = 
{
	"_ownProperties", &t108_0_0_1, &t1749_TI, offsetof(t1749, f3), &EmptyCustomAttributesCache};
extern Il2CppType t623_0_0_17;
extern CustomAttributesCache t1749__CustomAttributeCache_U3CU3Ef__switch$map21;
FieldInfo t1749_f4_FieldInfo = 
{
	"<>f__switch$map21", &t623_0_0_17, &t1749_TI, offsetof(t1749_SFs, f4), &t1749__CustomAttributeCache_U3CU3Ef__switch$map21};
extern Il2CppType t623_0_0_17;
extern CustomAttributesCache t1749__CustomAttributeCache_U3CU3Ef__switch$map22;
FieldInfo t1749_f5_FieldInfo = 
{
	"<>f__switch$map22", &t623_0_0_17, &t1749_TI, offsetof(t1749_SFs, f5), &t1749__CustomAttributeCache_U3CU3Ef__switch$map22};
static FieldInfo* t1749_FIs[] =
{
	&t1749_f0_FieldInfo,
	&t1749_f1_FieldInfo,
	&t1749_f2_FieldInfo,
	&t1749_f3_FieldInfo,
	&t1749_f4_FieldInfo,
	&t1749_f5_FieldInfo,
	NULL
};
static PropertyInfo t1749____MethodKeys_PropertyInfo = 
{
	&t1749_TI, "MethodKeys", NULL, &m8978_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1749____Item_PropertyInfo = 
{
	&t1749_TI, "Item", &m8982_MI, &m8983_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1749____Values_PropertyInfo = 
{
	&t1749_TI, "Values", &m8986_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1749____Count_PropertyInfo = 
{
	&t1749_TI, "Count", &m8989_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1749____IsSynchronized_PropertyInfo = 
{
	&t1749_TI, "IsSynchronized", &m8990_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1749____SyncRoot_PropertyInfo = 
{
	&t1749_TI, "SyncRoot", &m8991_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1749_PIs[] =
{
	&t1749____MethodKeys_PropertyInfo,
	&t1749____Item_PropertyInfo,
	&t1749____Values_PropertyInfo,
	&t1749____Count_PropertyInfo,
	&t1749____IsSynchronized_PropertyInfo,
	&t1749____SyncRoot_PropertyInfo,
	NULL
};
extern Il2CppType t1756_0_0_0;
static ParameterInfo t1749_m8976_ParameterInfos[] = 
{
	{"message", 0, 134222300, &EmptyCustomAttributesCache, &t1756_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8976_MI = 
{
	".ctor", (methodPointerType)&m8976, &t1749_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1749_m8976_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3785, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8977_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8977, &t1749_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 3786, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t585_0_0_0;
extern Il2CppType t585_0_0_0;
static ParameterInfo t1749_m8978_ParameterInfos[] = 
{
	{"value", 0, 134222301, &EmptyCustomAttributesCache, &t585_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8978_MI = 
{
	"set_MethodKeys", (methodPointerType)&m8978, &t1749_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1749_m8978_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 3787, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t986_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8979_MI = 
{
	"AllocInternalProperties", (methodPointerType)&m8979, &t1749_TI, &t986_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 452, 0, 14, 0, false, false, 3788, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t986_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8980_MI = 
{
	"GetInternalProperties", (methodPointerType)&m8980, &t1749_TI, &t986_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 3789, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1749_m8981_ParameterInfos[] = 
{
	{"key", 0, 134222302, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8981_MI = 
{
	"IsOverridenKey", (methodPointerType)&m8981, &t1749_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t1749_m8981_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 3790, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1749_m8982_ParameterInfos[] = 
{
	{"key", 0, 134222303, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8982_MI = 
{
	"get_Item", (methodPointerType)&m8982, &t1749_TI, &t5_0_0_0, RuntimeInvoker_t5_t5, t1749_m8982_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 9, 1, false, false, 3791, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1749_m8983_ParameterInfos[] = 
{
	{"key", 0, 134222304, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"value", 1, 134222305, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8983_MI = 
{
	"set_Item", (methodPointerType)&m8983, &t1749_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t1749_m8983_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 10, 2, false, false, 3792, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1749_m8984_ParameterInfos[] = 
{
	{"key", 0, 134222306, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8984_MI = 
{
	"GetMethodProperty", (methodPointerType)&m8984, &t1749_TI, &t5_0_0_0, RuntimeInvoker_t5_t5, t1749_m8984_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 15, 1, false, false, 3793, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1749_m8985_ParameterInfos[] = 
{
	{"key", 0, 134222307, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"value", 1, 134222308, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8985_MI = 
{
	"SetMethodProperty", (methodPointerType)&m8985, &t1749_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t1749_m8985_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 16, 2, false, false, 3794, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t811_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8986_MI = 
{
	"get_Values", (methodPointerType)&m8986, &t1749_TI, &t811_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 17, 0, false, false, 3795, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1749_m8987_ParameterInfos[] = 
{
	{"key", 0, 134222309, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"value", 1, 134222310, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8987_MI = 
{
	"Add", (methodPointerType)&m8987, &t1749_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t1749_m8987_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 11, 2, false, false, 3796, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1749_m8988_ParameterInfos[] = 
{
	{"key", 0, 134222311, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8988_MI = 
{
	"Remove", (methodPointerType)&m8988, &t1749_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1749_m8988_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 13, 1, false, false, 3797, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8989_MI = 
{
	"get_Count", (methodPointerType)&m8989, &t1749_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 5, 0, false, false, 3798, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8990_MI = 
{
	"get_IsSynchronized", (methodPointerType)&m8990, &t1749_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 3799, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8991_MI = 
{
	"get_SyncRoot", (methodPointerType)&m8991, &t1749_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, false, 3800, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t107_0_0_0;
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1749_m8992_ParameterInfos[] = 
{
	{"array", 0, 134222312, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134222313, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8992_MI = 
{
	"CopyTo", (methodPointerType)&m8992, &t1749_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t1749_m8992_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 8, 2, false, false, 3801, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t987_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8993_MI = 
{
	"GetEnumerator", (methodPointerType)&m8993, &t1749_TI, &t987_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 12, 0, false, false, 3802, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1749_MIs[] =
{
	&m8976_MI,
	&m8977_MI,
	&m8978_MI,
	&m8979_MI,
	&m8980_MI,
	&m8981_MI,
	&m8982_MI,
	&m8983_MI,
	&m8984_MI,
	&m8985_MI,
	&m8986_MI,
	&m8987_MI,
	&m8988_MI,
	&m8989_MI,
	&m8990_MI,
	&m8991_MI,
	&m8992_MI,
	&m8993_MI,
	NULL
};
extern TypeInfo t1757_TI;
static TypeInfo* t1749_TI__nestedTypes[2] =
{
	&t1757_TI,
	NULL
};
static MethodInfo* t1749_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m8977_MI,
	&m8989_MI,
	&m8990_MI,
	&m8991_MI,
	&m8992_MI,
	&m8982_MI,
	&m8983_MI,
	&m8987_MI,
	&m8993_MI,
	&m8988_MI,
	&m8979_MI,
	&m8984_MI,
	&m8985_MI,
	&m8986_MI,
};
static TypeInfo* t1749_ITIs[] = 
{
	&t739_TI,
	&t811_TI,
	&t986_TI,
};
static Il2CppInterfaceOffsetPair t1749_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t986_TI, 9},
};
extern TypeInfo t172_TI;
#include "t172.h"
#include "t172MD.h"
extern MethodInfo m657_MI;
void t1749_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t172 * tmp;
		tmp = (t172 *)il2cpp_codegen_object_new (&t172_TI);
		m657(tmp, il2cpp_codegen_string_new_wrapper("Item"), &m657_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1749_CustomAttributesCacheGenerator_U3CU3Ef__switch$map21(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1749_CustomAttributesCacheGenerator_U3CU3Ef__switch$map22(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1749__CustomAttributeCache = {
1,
NULL,
&t1749_CustomAttributesCacheGenerator
};
CustomAttributesCache t1749__CustomAttributeCache_U3CU3Ef__switch$map21 = {
1,
NULL,
&t1749_CustomAttributesCacheGenerator_U3CU3Ef__switch$map21
};
CustomAttributesCache t1749__CustomAttributeCache_U3CU3Ef__switch$map22 = {
1,
NULL,
&t1749_CustomAttributesCacheGenerator_U3CU3Ef__switch$map22
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1749_1_0_0;
struct t1749;
extern CustomAttributesCache t1749__CustomAttributeCache;
extern CustomAttributesCache t1749__CustomAttributeCache_U3CU3Ef__switch$map21;
extern CustomAttributesCache t1749__CustomAttributeCache_U3CU3Ef__switch$map22;
TypeInfo t1749_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MethodDictionary", "System.Runtime.Remoting.Messaging", t1749_MIs, t1749_PIs, t1749_FIs, NULL, &t5_TI, t1749_TI__nestedTypes, NULL, &t1749_TI, t1749_ITIs, t1749_VT, &t1749__CustomAttributeCache, &t1749_TI, &t1749_0_0_0, &t1749_1_0_0, t1749_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1749), 0, -1, sizeof(t1749_SFs), 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, 18, 6, 6, 0, 1, 18, 3, 3};
#include "t1758.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1758_TI;
#include "t1758MD.h"

extern TypeInfo t142_TI;


extern MethodInfo m8994_MI;
 void m8994 (t1758 * __this, t5 * p0, MethodInfo* method){
	{
		m8976(__this, p0, &m8976_MI);
		t142 * L_0 = (t142 *)InterfaceFuncInvoker0< t142 * >::Invoke(&m11553_MI, p0);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1758_TI));
		m8978(__this, (((t1758_SFs*)InitializedTypeInfo(&t1758_TI)->static_fields)->f6), &m8978_MI);
		goto IL_0027;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1758_TI));
		m8978(__this, (((t1758_SFs*)InitializedTypeInfo(&t1758_TI)->static_fields)->f7), &m8978_MI);
	}

IL_0027:
	{
		return;
	}
}
extern MethodInfo m8995_MI;
 void m8995 (t5 * __this, MethodInfo* method){
	{
		t585* L_0 = ((t585*)SZArrayNew(InitializedTypeInfo(&t585_TI), 7));
		ArrayElementTypeCheck (L_0, (t11*) &_stringLiteral1930);
		*((t11**)(t11**)SZArrayLdElema(L_0, 0)) = (t11*)(t11*) &_stringLiteral1930;
		t585* L_1 = L_0;
		ArrayElementTypeCheck (L_1, (t11*) &_stringLiteral1931);
		*((t11**)(t11**)SZArrayLdElema(L_1, 1)) = (t11*)(t11*) &_stringLiteral1931;
		t585* L_2 = L_1;
		ArrayElementTypeCheck (L_2, (t11*) &_stringLiteral1932);
		*((t11**)(t11**)SZArrayLdElema(L_2, 2)) = (t11*)(t11*) &_stringLiteral1932;
		t585* L_3 = L_2;
		ArrayElementTypeCheck (L_3, (t11*) &_stringLiteral1933);
		*((t11**)(t11**)SZArrayLdElema(L_3, 3)) = (t11*)(t11*) &_stringLiteral1933;
		t585* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t11*) &_stringLiteral1947);
		*((t11**)(t11**)SZArrayLdElema(L_4, 4)) = (t11*)(t11*) &_stringLiteral1947;
		t585* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t11*) &_stringLiteral1948);
		*((t11**)(t11**)SZArrayLdElema(L_5, 5)) = (t11*)(t11*) &_stringLiteral1948;
		t585* L_6 = L_5;
		ArrayElementTypeCheck (L_6, (t11*) &_stringLiteral1935);
		*((t11**)(t11**)SZArrayLdElema(L_6, 6)) = (t11*)(t11*) &_stringLiteral1935;
		((t1758_SFs*)InitializedTypeInfo(&t1758_TI)->static_fields)->f6 = L_6;
		t585* L_7 = ((t585*)SZArrayNew(InitializedTypeInfo(&t585_TI), 1));
		ArrayElementTypeCheck (L_7, (t11*) &_stringLiteral1935);
		*((t11**)(t11**)SZArrayLdElema(L_7, 0)) = (t11*)(t11*) &_stringLiteral1935;
		((t1758_SFs*)InitializedTypeInfo(&t1758_TI)->static_fields)->f7 = L_7;
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.MethodReturnDictionary
extern Il2CppType t585_0_0_22;
FieldInfo t1758_f6_FieldInfo = 
{
	"InternalReturnKeys", &t585_0_0_22, &t1758_TI, offsetof(t1758_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t585_0_0_22;
FieldInfo t1758_f7_FieldInfo = 
{
	"InternalExceptionKeys", &t585_0_0_22, &t1758_TI, offsetof(t1758_SFs, f7), &EmptyCustomAttributesCache};
static FieldInfo* t1758_FIs[] =
{
	&t1758_f6_FieldInfo,
	&t1758_f7_FieldInfo,
	NULL
};
extern Il2CppType t1759_0_0_0;
static ParameterInfo t1758_m8994_ParameterInfos[] = 
{
	{"message", 0, 134222315, &EmptyCustomAttributesCache, &t1759_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8994_MI = 
{
	".ctor", (methodPointerType)&m8994, &t1758_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1758_m8994_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3809, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8995_MI = 
{
	".cctor", (methodPointerType)&m8995, &t1758_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3810, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1758_MIs[] =
{
	&m8994_MI,
	&m8995_MI,
	NULL
};
static MethodInfo* t1758_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m8977_MI,
	&m8989_MI,
	&m8990_MI,
	&m8991_MI,
	&m8992_MI,
	&m8982_MI,
	&m8983_MI,
	&m8987_MI,
	&m8993_MI,
	&m8988_MI,
	&m8979_MI,
	&m8984_MI,
	&m8985_MI,
	&m8986_MI,
};
static Il2CppInterfaceOffsetPair t1758_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t986_TI, 9},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1758_0_0_0;
extern Il2CppType t1758_1_0_0;
struct t1758;
TypeInfo t1758_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MethodReturnDictionary", "System.Runtime.Remoting.Messaging", t1758_MIs, NULL, t1758_FIs, NULL, &t1749_TI, NULL, NULL, &t1758_TI, NULL, t1758_VT, &EmptyCustomAttributesCache, &t1758_TI, &t1758_0_0_0, &t1758_1_0_0, t1758_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1758), 0, -1, sizeof(t1758_SFs), 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, true, false, false, 2, 0, 2, 0, 0, 18, 0, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1744_TI;
#include "t1744MD.h"

#include "t1760.h"
#include "t1619.h"
extern TypeInfo t1619_TI;
#include "t1619MD.h"
extern MethodInfo m9011_MI;
extern MethodInfo m8651_MI;
extern MethodInfo m8643_MI;
extern MethodInfo m8650_MI;
extern MethodInfo m9008_MI;
extern MethodInfo m9119_MI;


extern MethodInfo m8996_MI;
 t5 * m8996 (t1744 * __this, MethodInfo* method){
	{
		t1755 * L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1755_TI));
		t1755 * L_1 = (t1755 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1755_TI));
		m8968(L_1, __this, &m8968_MI);
		__this->f8 = L_1;
	}

IL_0014:
	{
		t1755 * L_2 = (__this->f8);
		return L_2;
	}
}
extern MethodInfo m8997_MI;
 int32_t m8997 (t1744 * __this, MethodInfo* method){
	{
		int32_t L_0 = m9011(__this, &m9011_MI);
		if ((((uint32_t)L_0) != ((uint32_t)2)))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}

IL_000b:
	{
		t168* L_1 = (__this->f1);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		return 0;
	}

IL_0015:
	{
		t168* L_2 = (__this->f1);
		return (((int32_t)(((t107 *)L_2)->max_length)));
	}
}
extern MethodInfo m8998_MI;
 t168* m8998 (t1744 * __this, MethodInfo* method){
	{
		t168* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m8999_MI;
 t1752 * m8999 (t1744 * __this, MethodInfo* method){
	{
		t1752 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m9000_MI;
 t774 * m9000 (t1744 * __this, MethodInfo* method){
	{
		t1619 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m9001_MI;
 t11* m9001 (t1744 * __this, MethodInfo* method){
	{
		t1619 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		return (((t11_SFs*)(&t11_TI)->static_fields)->f2);
	}

IL_000e:
	{
		t1619 * L_1 = (__this->f0);
		t11* L_2 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m8651_MI, L_1);
		return L_2;
	}
}
extern MethodInfo m9002_MI;
 t5 * m9002 (t1744 * __this, MethodInfo* method){
	t776* V_0 = {0};
	int32_t V_1 = 0;
	{
		t675* L_0 = (__this->f9);
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		t1619 * L_1 = (__this->f0);
		t776* L_2 = (t776*)VirtFuncInvoker0< t776* >::Invoke(&m8643_MI, L_1);
		V_0 = L_2;
		__this->f9 = ((t675*)SZArrayNew(InitializedTypeInfo(&t675_TI), (((int32_t)(((t107 *)V_0)->max_length)))));
		V_1 = 0;
		goto IL_003a;
	}

IL_0026:
	{
		t675* L_3 = (__this->f9);
		int32_t L_4 = V_1;
		t114 * L_5 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3587_MI, (*(t775 **)(t775 **)SZArrayLdElema(V_0, L_4)));
		ArrayElementTypeCheck (L_3, L_5);
		*((t114 **)(t114 **)SZArrayLdElema(L_3, V_1)) = (t114 *)L_5;
		V_1 = ((int32_t)(V_1+1));
	}

IL_003a:
	{
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t107 *)V_0)->max_length))))))
		{
			goto IL_0026;
		}
	}

IL_0040:
	{
		t675* L_6 = (__this->f9);
		return (t5 *)L_6;
	}
}
extern MethodInfo m9003_MI;
 t11* m9003 (t1744 * __this, MethodInfo* method){
	{
		t1619 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		return (((t11_SFs*)(&t11_TI)->static_fields)->f2);
	}

IL_000e:
	{
		t1619 * L_1 = (__this->f0);
		t114 * L_2 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m8650_MI, L_1);
		t11* L_3 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3642_MI, L_2);
		return L_3;
	}
}
extern MethodInfo m9004_MI;
 t11* m9004 (t1744 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m9005_MI;
 void m9005 (t1744 * __this, t11* p0, MethodInfo* method){
	{
		__this->f7 = p0;
		return;
	}
}
extern MethodInfo m9006_MI;
 t5 * m9006 (t1744 * __this, int32_t p0, MethodInfo* method){
	{
		t168* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return NULL;
	}

IL_000a:
	{
		t168* L_1 = (__this->f1);
		int32_t L_2 = p0;
		return (*(t5 **)(t5 **)SZArrayLdElema(L_1, L_2));
	}
}
extern MethodInfo m9007_MI;
 t142 * m9007 (t1744 * __this, MethodInfo* method){
	{
		t142 * L_0 = (__this->f5);
		return L_0;
	}
}
 int32_t m9008 (t1744 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	t1044* V_2 = {0};
	int32_t V_3 = 0;
	{
		t168* L_0 = (__this->f1);
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
		V_0 = 0;
		t1044* L_1 = (__this->f2);
		V_2 = L_1;
		V_3 = 0;
		goto IL_0028;
	}

IL_0017:
	{
		int32_t L_2 = V_3;
		V_1 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(V_2, L_2));
		if (!((int32_t)((int32_t)V_1&(int32_t)2)))
		{
			goto IL_0024;
		}
	}
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0024:
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_0028:
	{
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((t107 *)V_2)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		return V_0;
	}
}
extern MethodInfo m9009_MI;
 t168* m9009 (t1744 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t168* V_3 = {0};
	uint8_t V_4 = 0x0;
	t1044* V_5 = {0};
	int32_t V_6 = 0;
	{
		t168* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (t168*)NULL;
	}

IL_000a:
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9008_MI, __this);
		V_2 = L_1;
		V_3 = ((t168*)SZArrayNew(InitializedTypeInfo(&t168_TI), V_2));
		int32_t L_2 = 0;
		V_1 = L_2;
		V_0 = L_2;
		t1044* L_3 = (__this->f2);
		V_5 = L_3;
		V_6 = 0;
		goto IL_004f;
	}

IL_0029:
	{
		int32_t L_4 = V_6;
		V_4 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(V_5, L_4));
		if (!((int32_t)((int32_t)V_4&(int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_5 = V_1;
		V_1 = ((int32_t)(L_5+1));
		t168* L_6 = (__this->f1);
		int32_t L_7 = V_0;
		ArrayElementTypeCheck (V_3, (*(t5 **)(t5 **)SZArrayLdElema(L_6, L_7)));
		*((t5 **)(t5 **)SZArrayLdElema(V_3, L_5)) = (t5 *)(*(t5 **)(t5 **)SZArrayLdElema(L_6, L_7));
	}

IL_0045:
	{
		V_0 = ((int32_t)(V_0+1));
		V_6 = ((int32_t)(V_6+1));
	}

IL_004f:
	{
		if ((((int32_t)V_6) < ((int32_t)(((int32_t)(((t107 *)V_5)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		return V_3;
	}
}
extern MethodInfo m9010_MI;
 t5 * m9010 (t1744 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f4);
		return L_0;
	}
}
 int32_t m9011 (t1744 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f6);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		t1619 * L_1 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1786_TI));
		bool L_2 = m9119(NULL, L_1, &m9119_MI);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		__this->f6 = 3;
	}

IL_001c:
	{
		int32_t L_3 = (__this->f6);
		return L_3;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.MonoMethodMessage
extern Il2CppType t1619_0_0_1;
FieldInfo t1744_f0_FieldInfo = 
{
	"method", &t1619_0_0_1, &t1744_TI, offsetof(t1744, f0), &EmptyCustomAttributesCache};
extern Il2CppType t168_0_0_1;
FieldInfo t1744_f1_FieldInfo = 
{
	"args", &t168_0_0_1, &t1744_TI, offsetof(t1744, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1044_0_0_1;
FieldInfo t1744_f2_FieldInfo = 
{
	"arg_types", &t1044_0_0_1, &t1744_TI, offsetof(t1744, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1752_0_0_6;
FieldInfo t1744_f3_FieldInfo = 
{
	"ctx", &t1752_0_0_6, &t1744_TI, offsetof(t1744, f3), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_6;
FieldInfo t1744_f4_FieldInfo = 
{
	"rval", &t5_0_0_6, &t1744_TI, offsetof(t1744, f4), &EmptyCustomAttributesCache};
extern Il2CppType t142_0_0_6;
FieldInfo t1744_f5_FieldInfo = 
{
	"exc", &t142_0_0_6, &t1744_TI, offsetof(t1744, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1760_0_0_1;
FieldInfo t1744_f6_FieldInfo = 
{
	"call_type", &t1760_0_0_1, &t1744_TI, offsetof(t1744, f6), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1744_f7_FieldInfo = 
{
	"uri", &t11_0_0_1, &t1744_TI, offsetof(t1744, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1755_0_0_1;
FieldInfo t1744_f8_FieldInfo = 
{
	"properties", &t1755_0_0_1, &t1744_TI, offsetof(t1744, f8), &EmptyCustomAttributesCache};
extern Il2CppType t675_0_0_1;
FieldInfo t1744_f9_FieldInfo = 
{
	"methodSignature", &t675_0_0_1, &t1744_TI, offsetof(t1744, f9), &EmptyCustomAttributesCache};
static FieldInfo* t1744_FIs[] =
{
	&t1744_f0_FieldInfo,
	&t1744_f1_FieldInfo,
	&t1744_f2_FieldInfo,
	&t1744_f3_FieldInfo,
	&t1744_f4_FieldInfo,
	&t1744_f5_FieldInfo,
	&t1744_f6_FieldInfo,
	&t1744_f7_FieldInfo,
	&t1744_f8_FieldInfo,
	&t1744_f9_FieldInfo,
	NULL
};
static PropertyInfo t1744____Properties_PropertyInfo = 
{
	&t1744_TI, "Properties", &m8996_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1744____ArgCount_PropertyInfo = 
{
	&t1744_TI, "ArgCount", &m8997_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1744____Args_PropertyInfo = 
{
	&t1744_TI, "Args", &m8998_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1744____LogicalCallContext_PropertyInfo = 
{
	&t1744_TI, "LogicalCallContext", &m8999_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1744____MethodBase_PropertyInfo = 
{
	&t1744_TI, "MethodBase", &m9000_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1744____MethodName_PropertyInfo = 
{
	&t1744_TI, "MethodName", &m9001_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1744____MethodSignature_PropertyInfo = 
{
	&t1744_TI, "MethodSignature", &m9002_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1744____TypeName_PropertyInfo = 
{
	&t1744_TI, "TypeName", &m9003_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1744____Uri_PropertyInfo = 
{
	&t1744_TI, "Uri", &m9004_MI, &m9005_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1744____Exception_PropertyInfo = 
{
	&t1744_TI, "Exception", &m9007_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1744____OutArgCount_PropertyInfo = 
{
	&t1744_TI, "OutArgCount", &m9008_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1744____OutArgs_PropertyInfo = 
{
	&t1744_TI, "OutArgs", &m9009_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1744____ReturnValue_PropertyInfo = 
{
	&t1744_TI, "ReturnValue", &m9010_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1744____CallType_PropertyInfo = 
{
	&t1744_TI, "CallType", &m9011_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1744_PIs[] =
{
	&t1744____Properties_PropertyInfo,
	&t1744____ArgCount_PropertyInfo,
	&t1744____Args_PropertyInfo,
	&t1744____LogicalCallContext_PropertyInfo,
	&t1744____MethodBase_PropertyInfo,
	&t1744____MethodName_PropertyInfo,
	&t1744____MethodSignature_PropertyInfo,
	&t1744____TypeName_PropertyInfo,
	&t1744____Uri_PropertyInfo,
	&t1744____Exception_PropertyInfo,
	&t1744____OutArgCount_PropertyInfo,
	&t1744____OutArgs_PropertyInfo,
	&t1744____ReturnValue_PropertyInfo,
	&t1744____CallType_PropertyInfo,
	NULL
};
extern Il2CppType t986_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8996_MI = 
{
	"get_Properties", (methodPointerType)&m8996, &t1744_TI, &t986_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 5, 0, false, false, 3811, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8997_MI = 
{
	"get_ArgCount", (methodPointerType)&m8997, &t1744_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 3812, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8998_MI = 
{
	"get_Args", (methodPointerType)&m8998, &t1744_TI, &t168_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, false, 3813, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1752_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8999_MI = 
{
	"get_LogicalCallContext", (methodPointerType)&m8999, &t1744_TI, &t1752_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 8, 0, false, false, 3814, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t774_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9000_MI = 
{
	"get_MethodBase", (methodPointerType)&m9000, &t1744_TI, &t774_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, false, 3815, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9001_MI = 
{
	"get_MethodName", (methodPointerType)&m9001, &t1744_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, false, 3816, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9002_MI = 
{
	"get_MethodSignature", (methodPointerType)&m9002, &t1744_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 11, 0, false, false, 3817, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9003_MI = 
{
	"get_TypeName", (methodPointerType)&m9003, &t1744_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 12, 0, false, false, 3818, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9004_MI = 
{
	"get_Uri", (methodPointerType)&m9004, &t1744_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 13, 0, false, false, 3819, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1744_m9005_ParameterInfos[] = 
{
	{"value", 0, 134222316, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9005_MI = 
{
	"set_Uri", (methodPointerType)&m9005, &t1744_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1744_m9005_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 4, 1, false, false, 3820, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1744_m9006_ParameterInfos[] = 
{
	{"arg_num", 0, 134222317, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m9006_MI = 
{
	"GetArg", (methodPointerType)&m9006, &t1744_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t1744_m9006_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 1, false, false, 3821, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t142_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9007_MI = 
{
	"get_Exception", (methodPointerType)&m9007, &t1744_TI, &t142_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 15, 0, false, false, 3822, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m9008_MI = 
{
	"get_OutArgCount", (methodPointerType)&m9008, &t1744_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 16, 0, false, false, 3823, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9009_MI = 
{
	"get_OutArgs", (methodPointerType)&m9009, &t1744_TI, &t168_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 17, 0, false, false, 3824, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9010_MI = 
{
	"get_ReturnValue", (methodPointerType)&m9010, &t1744_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 18, 0, false, false, 3825, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1760_0_0_0;
extern void* RuntimeInvoker_t1760 (MethodInfo* method, void* obj, void** args);
MethodInfo m9011_MI = 
{
	"get_CallType", (methodPointerType)&m9011, &t1744_TI, &t1760_0_0_0, RuntimeInvoker_t1760, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 3826, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1744_MIs[] =
{
	&m8996_MI,
	&m8997_MI,
	&m8998_MI,
	&m8999_MI,
	&m9000_MI,
	&m9001_MI,
	&m9002_MI,
	&m9003_MI,
	&m9004_MI,
	&m9005_MI,
	&m9006_MI,
	&m9007_MI,
	&m9008_MI,
	&m9009_MI,
	&m9010_MI,
	&m9011_MI,
	NULL
};
static MethodInfo* t1744_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m9005_MI,
	&m8996_MI,
	&m8997_MI,
	&m8998_MI,
	&m8999_MI,
	&m9000_MI,
	&m9001_MI,
	&m9002_MI,
	&m9003_MI,
	&m9004_MI,
	&m9006_MI,
	&m9007_MI,
	&m9008_MI,
	&m9009_MI,
	&m9010_MI,
};
static TypeInfo* t1744_ITIs[] = 
{
	&t2382_TI,
	&t1746_TI,
	&t1768_TI,
	&t1756_TI,
	&t1759_TI,
};
static Il2CppInterfaceOffsetPair t1744_IOs[] = 
{
	{ &t2382_TI, 4},
	{ &t1746_TI, 5},
	{ &t1768_TI, 6},
	{ &t1756_TI, 6},
	{ &t1759_TI, 15},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1744_1_0_0;
struct t1744;
TypeInfo t1744_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoMethodMessage", "System.Runtime.Remoting.Messaging", t1744_MIs, t1744_PIs, t1744_FIs, NULL, &t5_TI, NULL, NULL, &t1744_TI, t1744_ITIs, t1744_VT, &EmptyCustomAttributesCache, &t1744_TI, &t1744_0_0_0, &t1744_1_0_0, t1744_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1744), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, 16, 14, 10, 0, 0, 19, 5, 5};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1760_TI;
#include "t1760MD.h"



// Metadata Definition System.Runtime.Remoting.Messaging.CallType
extern Il2CppType t110_0_0_1542;
FieldInfo t1760_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1760_TI, offsetof(t1760, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1760_0_0_32854;
FieldInfo t1760_f2_FieldInfo = 
{
	"Sync", &t1760_0_0_32854, &t1760_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1760_0_0_32854;
FieldInfo t1760_f3_FieldInfo = 
{
	"BeginInvoke", &t1760_0_0_32854, &t1760_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1760_0_0_32854;
FieldInfo t1760_f4_FieldInfo = 
{
	"EndInvoke", &t1760_0_0_32854, &t1760_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1760_0_0_32854;
FieldInfo t1760_f5_FieldInfo = 
{
	"OneWay", &t1760_0_0_32854, &t1760_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1760_FIs[] =
{
	&t1760_f1_FieldInfo,
	&t1760_f2_FieldInfo,
	&t1760_f3_FieldInfo,
	&t1760_f4_FieldInfo,
	&t1760_f5_FieldInfo,
	NULL
};
static const int32_t t1760_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1760_f2_DefaultValue = 
{
	&t1760_f2_FieldInfo, { (char*)&t1760_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1760_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1760_f3_DefaultValue = 
{
	&t1760_f3_FieldInfo, { (char*)&t1760_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1760_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1760_f4_DefaultValue = 
{
	&t1760_f4_FieldInfo, { (char*)&t1760_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1760_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1760_f5_DefaultValue = 
{
	&t1760_f5_FieldInfo, { (char*)&t1760_f5_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1760_FDVs[] = 
{
	&t1760_f2_DefaultValue,
	&t1760_f3_DefaultValue,
	&t1760_f4_DefaultValue,
	&t1760_f5_DefaultValue,
	NULL
};
static MethodInfo* t1760_MIs[] =
{
	NULL
};
static MethodInfo* t1760_VT[] =
{
	&m482_MI,
	&m465_MI,
	&m483_MI,
	&m484_MI,
	&m485_MI,
	&m486_MI,
	&m487_MI,
	&m488_MI,
	&m489_MI,
	&m490_MI,
	&m491_MI,
	&m492_MI,
	&m493_MI,
	&m494_MI,
	&m495_MI,
	&m496_MI,
	&m497_MI,
	&m498_MI,
	&m499_MI,
	&m500_MI,
	&m501_MI,
	&m502_MI,
	&m503_MI,
};
static Il2CppInterfaceOffsetPair t1760_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1760_0_0_0;
extern Il2CppType t1760_1_0_0;
TypeInfo t1760_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CallType", "System.Runtime.Remoting.Messaging", t1760_MIs, NULL, t1760_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1760_VT, &EmptyCustomAttributesCache, &t110_TI, &t1760_0_0_0, &t1760_1_0_0, t1760_IOs, NULL, NULL, t1760_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1760)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 256, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#include "t1761.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1761_TI;
#include "t1761MD.h"



// Metadata Definition System.Runtime.Remoting.Messaging.OneWayAttribute
static MethodInfo* t1761_MIs[] =
{
	NULL
};
static MethodInfo* t1761_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
};
static Il2CppInterfaceOffsetPair t1761_IOs[] = 
{
	{ &t740_TI, 4},
};
void t1761_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t767 * tmp;
		tmp = (t767 *)il2cpp_codegen_object_new (&t767_TI);
		m3562(tmp, 64, &m3562_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1761__CustomAttributeCache = {
2,
NULL,
&t1761_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1761_0_0_0;
extern Il2CppType t1761_1_0_0;
struct t1761;
extern CustomAttributesCache t1761__CustomAttributeCache;
TypeInfo t1761_TI = 
{
	&g_mscorlib_dll_Image, NULL, "OneWayAttribute", "System.Runtime.Remoting.Messaging", t1761_MIs, NULL, NULL, NULL, &t628_TI, NULL, NULL, &t1761_TI, NULL, t1761_VT, &t1761__CustomAttributeCache, &t1761_TI, &t1761_0_0_0, &t1761_1_0_0, t1761_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1761), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 1};
#include "t1762.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1762_TI;
#include "t1762MD.h"

#include "t1770.h"
extern TypeInfo t1770_TI;
#include "t1770MD.h"
extern MethodInfo m10158_MI;
extern MethodInfo m9106_MI;
extern MethodInfo m9113_MI;
extern MethodInfo m9048_MI;
extern MethodInfo m9117_MI;


extern MethodInfo m9012_MI;
 void m9012 (t1762 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m9013_MI;
 void m9013 (t1762 * __this, t5 * p0, t829 * p1, t830  p2, MethodInfo* method){
	t1770 * V_0 = {0};
	{
		if (!p0)
		{
			goto IL_0006;
		}
	}
	{
		if (p1)
		{
			goto IL_000c;
		}
	}

IL_0006:
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m10158(L_0, &m10158_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1786_TI));
		bool L_1 = m9106(NULL, p0, &m9106_MI);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1786_TI));
		t1770 * L_2 = m9113(NULL, p0, &m9113_MI);
		V_0 = L_2;
		VirtActionInvoker2< t829 *, t830  >::Invoke(&m9048_MI, V_0, p1, p2);
		goto IL_002d;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1786_TI));
		m9117(NULL, p0, p1, p2, &m9117_MI);
	}

IL_002d:
	{
		return;
	}
}
extern MethodInfo m9014_MI;
 t5 * m9014 (t1762 * __this, t5 * p0, t829 * p1, t830  p2, t5 * p3, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m2164(L_0, &m2164_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.RemotingSurrogate
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m9012_MI = 
{
	".ctor", (methodPointerType)&m9012, &t1762_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3827, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1762_m9013_ParameterInfos[] = 
{
	{"obj", 0, 134222318, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"si", 1, 134222319, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"sc", 2, 134222320, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m9013_MI = 
{
	"GetObjectData", (methodPointerType)&m9013, &t1762_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t830, t1762_m9013_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 6, 3, false, false, 3828, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
extern Il2CppType t1763_0_0_0;
extern Il2CppType t1763_0_0_0;
static ParameterInfo t1762_m9014_ParameterInfos[] = 
{
	{"obj", 0, 134222321, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"si", 1, 134222322, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"sc", 2, 134222323, &EmptyCustomAttributesCache, &t830_0_0_0},
	{"selector", 3, 134222324, &EmptyCustomAttributesCache, &t1763_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t830_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9014_MI = 
{
	"SetObjectData", (methodPointerType)&m9014, &t1762_TI, &t5_0_0_0, RuntimeInvoker_t5_t5_t5_t830_t5, t1762_m9014_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 7, 4, false, false, 3829, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1762_MIs[] =
{
	&m9012_MI,
	&m9013_MI,
	&m9014_MI,
	NULL
};
static MethodInfo* t1762_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m9013_MI,
	&m9014_MI,
	&m9013_MI,
	&m9014_MI,
};
extern TypeInfo t1766_TI;
static TypeInfo* t1762_ITIs[] = 
{
	&t1766_TI,
};
static Il2CppInterfaceOffsetPair t1762_IOs[] = 
{
	{ &t1766_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1762_0_0_0;
extern Il2CppType t1762_1_0_0;
struct t1762;
TypeInfo t1762_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RemotingSurrogate", "System.Runtime.Remoting.Messaging", t1762_MIs, NULL, NULL, NULL, &t5_TI, NULL, NULL, &t1762_TI, t1762_ITIs, t1762_VT, &EmptyCustomAttributesCache, &t1762_TI, &t1762_0_0_0, &t1762_1_0_0, t1762_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1762), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 8, 1, 1};
#include "t1764.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1764_TI;
#include "t1764MD.h"

#include "t1427.h"
extern TypeInfo t1427_TI;
#include "t1427MD.h"
extern MethodInfo m9093_MI;
extern MethodInfo m4777_MI;
extern MethodInfo m4781_MI;


extern MethodInfo m9015_MI;
 void m9015 (t1764 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m9016_MI;
 void m9016 (t1764 * __this, t5 * p0, t829 * p1, t830  p2, MethodInfo* method){
	{
		if (!p0)
		{
			goto IL_0006;
		}
	}
	{
		if (p1)
		{
			goto IL_000c;
		}
	}

IL_0006:
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m10158(L_0, &m10158_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000c:
	{
		VirtActionInvoker2< t829 *, t830  >::Invoke(&m9093_MI, ((t1427 *)Castclass(p0, InitializedTypeInfo(&t1427_TI))), p1, p2);
		m4777(p1, (t11*) &_stringLiteral1950, 0, &m4777_MI);
		return;
	}
}
extern MethodInfo m9017_MI;
 t5 * m9017 (t1764 * __this, t5 * p0, t829 * p1, t830  p2, t5 * p3, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4781(L_0, (t11*) &_stringLiteral1951, &m4781_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.ObjRefSurrogate
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m9015_MI = 
{
	".ctor", (methodPointerType)&m9015, &t1764_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3830, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1764_m9016_ParameterInfos[] = 
{
	{"obj", 0, 134222325, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"si", 1, 134222326, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"sc", 2, 134222327, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m9016_MI = 
{
	"GetObjectData", (methodPointerType)&m9016, &t1764_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t830, t1764_m9016_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 6, 3, false, false, 3831, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
extern Il2CppType t1763_0_0_0;
static ParameterInfo t1764_m9017_ParameterInfos[] = 
{
	{"obj", 0, 134222328, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"si", 1, 134222329, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"sc", 2, 134222330, &EmptyCustomAttributesCache, &t830_0_0_0},
	{"selector", 3, 134222331, &EmptyCustomAttributesCache, &t1763_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t830_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9017_MI = 
{
	"SetObjectData", (methodPointerType)&m9017, &t1764_TI, &t5_0_0_0, RuntimeInvoker_t5_t5_t5_t830_t5, t1764_m9017_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 7, 4, false, false, 3832, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1764_MIs[] =
{
	&m9015_MI,
	&m9016_MI,
	&m9017_MI,
	NULL
};
static MethodInfo* t1764_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m9016_MI,
	&m9017_MI,
	&m9016_MI,
	&m9017_MI,
};
static TypeInfo* t1764_ITIs[] = 
{
	&t1766_TI,
};
static Il2CppInterfaceOffsetPair t1764_IOs[] = 
{
	{ &t1766_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1764_0_0_0;
extern Il2CppType t1764_1_0_0;
struct t1764;
TypeInfo t1764_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ObjRefSurrogate", "System.Runtime.Remoting.Messaging", t1764_MIs, NULL, NULL, NULL, &t5_TI, NULL, NULL, &t1764_TI, t1764_ITIs, t1764_VT, &EmptyCustomAttributesCache, &t1764_TI, &t1764_0_0_0, &t1764_1_0_0, t1764_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1764), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 8, 1, 1};
#include "t1765.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1765_TI;
#include "t1765MD.h"

extern TypeInfo t1763_TI;
extern Il2CppType t1427_0_0_0;
extern MethodInfo m6790_MI;
extern MethodInfo m3627_MI;
extern MethodInfo m11557_MI;


extern MethodInfo m9018_MI;
 void m9018 (t1765 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m9019_MI;
 void m9019 (t5 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_0 = m532(NULL, LoadTypeToken(&t1427_0_0_0), &m532_MI);
		((t1765_SFs*)InitializedTypeInfo(&t1765_TI)->static_fields)->f0 = L_0;
		t1764 * L_1 = (t1764 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1764_TI));
		m9015(L_1, &m9015_MI);
		((t1765_SFs*)InitializedTypeInfo(&t1765_TI)->static_fields)->f1 = L_1;
		t1762 * L_2 = (t1762 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1762_TI));
		m9012(L_2, &m9012_MI);
		((t1765_SFs*)InitializedTypeInfo(&t1765_TI)->static_fields)->f2 = L_2;
		return;
	}
}
extern MethodInfo m9020_MI;
 t5 * m9020 (t1765 * __this, t114 * p0, t830  p1, t5 ** p2, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6790_MI, p0);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		*((t5 **)(p2)) = (t5 *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1765_TI));
		return (((t1765_SFs*)InitializedTypeInfo(&t1765_TI)->static_fields)->f2);
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1765_TI));
		bool L_1 = (bool)VirtFuncInvoker1< bool, t114 * >::Invoke(&m3627_MI, (((t1765_SFs*)InitializedTypeInfo(&t1765_TI)->static_fields)->f0), p0);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		*((t5 **)(p2)) = (t5 *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1765_TI));
		return (((t1765_SFs*)InitializedTypeInfo(&t1765_TI)->static_fields)->f1);
	}

IL_0027:
	{
		t5 * L_2 = (__this->f3);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		t5 * L_3 = (__this->f3);
		t5 * L_4 = (t5 *)InterfaceFuncInvoker3< t5 *, t114 *, t830 , t5 ** >::Invoke(&m11557_MI, L_3, p0, p1, p2);
		return L_4;
	}

IL_003e:
	{
		*((t5 **)(p2)) = (t5 *)NULL;
		return (t5 *)NULL;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
extern Il2CppType t114_0_0_17;
FieldInfo t1765_f0_FieldInfo = 
{
	"s_cachedTypeObjRef", &t114_0_0_17, &t1765_TI, offsetof(t1765_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1764_0_0_17;
FieldInfo t1765_f1_FieldInfo = 
{
	"_objRefSurrogate", &t1764_0_0_17, &t1765_TI, offsetof(t1765_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1762_0_0_17;
FieldInfo t1765_f2_FieldInfo = 
{
	"_objRemotingSurrogate", &t1762_0_0_17, &t1765_TI, offsetof(t1765_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1763_0_0_1;
FieldInfo t1765_f3_FieldInfo = 
{
	"_next", &t1763_0_0_1, &t1765_TI, offsetof(t1765, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1765_FIs[] =
{
	&t1765_f0_FieldInfo,
	&t1765_f1_FieldInfo,
	&t1765_f2_FieldInfo,
	&t1765_f3_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m9018_MI = 
{
	".ctor", (methodPointerType)&m9018, &t1765_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3833, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m9019_MI = 
{
	".cctor", (methodPointerType)&m9019, &t1765_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3834, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t830_0_0_0;
extern Il2CppType t1763_1_0_2;
extern Il2CppType t1763_1_0_0;
static ParameterInfo t1765_m9020_ParameterInfos[] = 
{
	{"type", 0, 134222332, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"context", 1, 134222333, &EmptyCustomAttributesCache, &t830_0_0_0},
	{"ssout", 2, 134222334, &EmptyCustomAttributesCache, &t1763_1_0_2},
};
extern Il2CppType t1766_0_0_0;
extern void* RuntimeInvoker_t5_t5_t830_t2386 (MethodInfo* method, void* obj, void** args);
MethodInfo m9020_MI = 
{
	"GetSurrogate", (methodPointerType)&m9020, &t1765_TI, &t1766_0_0_0, RuntimeInvoker_t5_t5_t830_t2386, t1765_m9020_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 5, 3, false, false, 3835, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1765_MIs[] =
{
	&m9018_MI,
	&m9019_MI,
	&m9020_MI,
	NULL
};
static MethodInfo* t1765_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m9020_MI,
	&m9020_MI,
};
static TypeInfo* t1765_ITIs[] = 
{
	&t1763_TI,
};
static Il2CppInterfaceOffsetPair t1765_IOs[] = 
{
	{ &t1763_TI, 4},
};
void t1765_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1765__CustomAttributeCache = {
1,
NULL,
&t1765_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1765_0_0_0;
extern Il2CppType t1765_1_0_0;
struct t1765;
extern CustomAttributesCache t1765__CustomAttributeCache;
TypeInfo t1765_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RemotingSurrogateSelector", "System.Runtime.Remoting.Messaging", t1765_MIs, NULL, t1765_FIs, NULL, &t5_TI, NULL, NULL, &t1765_TI, t1765_ITIs, t1765_VT, &t1765__CustomAttributeCache, &t1765_TI, &t1765_0_0_0, &t1765_1_0_0, t1765_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1765), 0, -1, sizeof(t1765_SFs), 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, true, false, false, 3, 0, 4, 0, 0, 6, 1, 1};
#include "t1767.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1767_TI;
#include "t1767MD.h"

extern MethodInfo m9033_MI;
extern MethodInfo m9027_MI;


extern MethodInfo m9021_MI;
 void m9021 (t1767 * __this, t5 * p0, t168* p1, int32_t p2, t1752 * p3, t5 * p4, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		__this->f4 = p0;
		__this->f1 = p1;
		__this->f2 = p2;
		__this->f3 = p3;
		if (!p4)
		{
			goto IL_0041;
		}
	}
	{
		t11* L_0 = (t11*)InterfaceFuncInvoker0< t11* >::Invoke(&m11551_MI, p4);
		__this->f5 = L_0;
		t774 * L_1 = (t774 *)InterfaceFuncInvoker0< t774 * >::Invoke(&m11547_MI, p4);
		__this->f7 = L_1;
	}

IL_0041:
	{
		t168* L_2 = (__this->f1);
		if (L_2)
		{
			goto IL_0055;
		}
	}
	{
		__this->f1 = ((t168*)SZArrayNew(InitializedTypeInfo(&t168_TI), p2));
	}

IL_0055:
	{
		return;
	}
}
extern MethodInfo m9022_MI;
 void m9022 (t1767 * __this, t142 * p0, t5 * p1, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		__this->f6 = p0;
		if (!p1)
		{
			goto IL_0028;
		}
	}
	{
		t774 * L_0 = (t774 *)InterfaceFuncInvoker0< t774 * >::Invoke(&m11547_MI, p1);
		__this->f7 = L_0;
		t1752 * L_1 = (t1752 *)InterfaceFuncInvoker0< t1752 * >::Invoke(&m11546_MI, p1);
		__this->f3 = L_1;
	}

IL_0028:
	{
		__this->f1 = ((t168*)SZArrayNew(InitializedTypeInfo(&t168_TI), 0));
		return;
	}
}
extern MethodInfo m9023_MI;
 void m9023 (t1767 * __this, t11* p0, MethodInfo* method){
	{
		VirtActionInvoker1< t11* >::Invoke(&m9033_MI, __this, p0);
		return;
	}
}
extern MethodInfo m9024_MI;
 int32_t m9024 (t1767 * __this, MethodInfo* method){
	{
		t168* L_0 = (__this->f1);
		return (((int32_t)(((t107 *)L_0)->max_length)));
	}
}
extern MethodInfo m9025_MI;
 t168* m9025 (t1767 * __this, MethodInfo* method){
	{
		t168* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m9026_MI;
 t1752 * m9026 (t1767 * __this, MethodInfo* method){
	{
		t1752 * L_0 = (__this->f3);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1752 * L_1 = (t1752 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1752_TI));
		m8939(L_1, &m8939_MI);
		__this->f3 = L_1;
	}

IL_0013:
	{
		t1752 * L_2 = (__this->f3);
		return L_2;
	}
}
 t774 * m9027 (t1767 * __this, MethodInfo* method){
	{
		t774 * L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m9028_MI;
 t11* m9028 (t1767 * __this, MethodInfo* method){
	{
		t774 * L_0 = (__this->f7);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		t11* L_1 = (__this->f8);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		t774 * L_2 = (__this->f7);
		t11* L_3 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3571_MI, L_2);
		__this->f8 = L_3;
	}

IL_0021:
	{
		t11* L_4 = (__this->f8);
		return L_4;
	}
}
extern MethodInfo m9029_MI;
 t5 * m9029 (t1767 * __this, MethodInfo* method){
	t776* V_0 = {0};
	int32_t V_1 = 0;
	{
		t774 * L_0 = (__this->f7);
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		t675* L_1 = (__this->f9);
		if (L_1)
		{
			goto IL_0048;
		}
	}
	{
		t774 * L_2 = (__this->f7);
		t776* L_3 = (t776*)VirtFuncInvoker0< t776* >::Invoke(&m3586_MI, L_2);
		V_0 = L_3;
		__this->f9 = ((t675*)SZArrayNew(InitializedTypeInfo(&t675_TI), (((int32_t)(((t107 *)V_0)->max_length)))));
		V_1 = 0;
		goto IL_0042;
	}

IL_002e:
	{
		t675* L_4 = (__this->f9);
		int32_t L_5 = V_1;
		t114 * L_6 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3587_MI, (*(t775 **)(t775 **)SZArrayLdElema(V_0, L_5)));
		ArrayElementTypeCheck (L_4, L_6);
		*((t114 **)(t114 **)SZArrayLdElema(L_4, V_1)) = (t114 *)L_6;
		V_1 = ((int32_t)(V_1+1));
	}

IL_0042:
	{
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t107 *)V_0)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0048:
	{
		t675* L_7 = (__this->f9);
		return (t5 *)L_7;
	}
}
extern MethodInfo m9030_MI;
 t5 * m9030 (t1767 * __this, MethodInfo* method){
	{
		t1758 * L_0 = (__this->f11);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1758_TI));
		t1758 * L_1 = (t1758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1758_TI));
		m8994(L_1, __this, &m8994_MI);
		__this->f11 = L_1;
	}

IL_0014:
	{
		t1758 * L_2 = (__this->f11);
		return L_2;
	}
}
extern MethodInfo m9031_MI;
 t11* m9031 (t1767 * __this, MethodInfo* method){
	{
		t774 * L_0 = (__this->f7);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		t11* L_1 = (__this->f10);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		t774 * L_2 = (__this->f7);
		t114 * L_3 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3584_MI, L_2);
		t11* L_4 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3642_MI, L_3);
		__this->f10 = L_4;
	}

IL_0026:
	{
		t11* L_5 = (__this->f10);
		return L_5;
	}
}
extern MethodInfo m9032_MI;
 t11* m9032 (t1767 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f5);
		return L_0;
	}
}
 void m9033 (t1767 * __this, t11* p0, MethodInfo* method){
	{
		__this->f5 = p0;
		return;
	}
}
extern MethodInfo m9034_MI;
 t5 * m9034 (t1767 * __this, int32_t p0, MethodInfo* method){
	{
		t168* L_0 = (__this->f1);
		int32_t L_1 = p0;
		return (*(t5 **)(t5 **)SZArrayLdElema(L_0, L_1));
	}
}
extern MethodInfo m9035_MI;
 t142 * m9035 (t1767 * __this, MethodInfo* method){
	{
		t142 * L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m9036_MI;
 int32_t m9036 (t1767 * __this, MethodInfo* method){
	{
		t168* L_0 = (__this->f1);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		t168* L_1 = (__this->f1);
		if ((((int32_t)(((t107 *)L_1)->max_length))))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		return 0;
	}

IL_0014:
	{
		t1741 * L_2 = (__this->f12);
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		t774 * L_3 = (t774 *)VirtFuncInvoker0< t774 * >::Invoke(&m9027_MI, __this);
		t1741 * L_4 = (t1741 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1741_TI));
		m8896(L_4, L_3, 1, &m8896_MI);
		__this->f12 = L_4;
	}

IL_002e:
	{
		t1741 * L_5 = (__this->f12);
		int32_t L_6 = m8897(L_5, &m8897_MI);
		return L_6;
	}
}
extern MethodInfo m9037_MI;
 t168* m9037 (t1767 * __this, MethodInfo* method){
	{
		t168* L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0041;
		}
	}
	{
		t168* L_1 = (__this->f1);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		t1741 * L_2 = (__this->f12);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		t774 * L_3 = (t774 *)VirtFuncInvoker0< t774 * >::Invoke(&m9027_MI, __this);
		t1741 * L_4 = (t1741 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1741_TI));
		m8896(L_4, L_3, 1, &m8896_MI);
		__this->f12 = L_4;
	}

IL_002a:
	{
		t1741 * L_5 = (__this->f12);
		t168* L_6 = (__this->f1);
		t168* L_7 = m8898(L_5, L_6, &m8898_MI);
		__this->f0 = L_7;
	}

IL_0041:
	{
		t168* L_8 = (__this->f0);
		return L_8;
	}
}
extern MethodInfo m9038_MI;
 t5 * m9038 (t1767 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f4);
		return L_0;
	}
}
// Metadata Definition System.Runtime.Remoting.Messaging.ReturnMessage
extern Il2CppType t168_0_0_1;
FieldInfo t1767_f0_FieldInfo = 
{
	"_outArgs", &t168_0_0_1, &t1767_TI, offsetof(t1767, f0), &EmptyCustomAttributesCache};
extern Il2CppType t168_0_0_1;
FieldInfo t1767_f1_FieldInfo = 
{
	"_args", &t168_0_0_1, &t1767_TI, offsetof(t1767, f1), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1767_f2_FieldInfo = 
{
	"_outArgsCount", &t110_0_0_1, &t1767_TI, offsetof(t1767, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1752_0_0_1;
FieldInfo t1767_f3_FieldInfo = 
{
	"_callCtx", &t1752_0_0_1, &t1767_TI, offsetof(t1767, f3), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_1;
FieldInfo t1767_f4_FieldInfo = 
{
	"_returnValue", &t5_0_0_1, &t1767_TI, offsetof(t1767, f4), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1767_f5_FieldInfo = 
{
	"_uri", &t11_0_0_1, &t1767_TI, offsetof(t1767, f5), &EmptyCustomAttributesCache};
extern Il2CppType t142_0_0_1;
FieldInfo t1767_f6_FieldInfo = 
{
	"_exception", &t142_0_0_1, &t1767_TI, offsetof(t1767, f6), &EmptyCustomAttributesCache};
extern Il2CppType t774_0_0_1;
FieldInfo t1767_f7_FieldInfo = 
{
	"_methodBase", &t774_0_0_1, &t1767_TI, offsetof(t1767, f7), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1767_f8_FieldInfo = 
{
	"_methodName", &t11_0_0_1, &t1767_TI, offsetof(t1767, f8), &EmptyCustomAttributesCache};
extern Il2CppType t675_0_0_1;
FieldInfo t1767_f9_FieldInfo = 
{
	"_methodSignature", &t675_0_0_1, &t1767_TI, offsetof(t1767, f9), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1767_f10_FieldInfo = 
{
	"_typeName", &t11_0_0_1, &t1767_TI, offsetof(t1767, f10), &EmptyCustomAttributesCache};
extern Il2CppType t1758_0_0_1;
FieldInfo t1767_f11_FieldInfo = 
{
	"_properties", &t1758_0_0_1, &t1767_TI, offsetof(t1767, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1741_0_0_1;
FieldInfo t1767_f12_FieldInfo = 
{
	"_inArgInfo", &t1741_0_0_1, &t1767_TI, offsetof(t1767, f12), &EmptyCustomAttributesCache};
static FieldInfo* t1767_FIs[] =
{
	&t1767_f0_FieldInfo,
	&t1767_f1_FieldInfo,
	&t1767_f2_FieldInfo,
	&t1767_f3_FieldInfo,
	&t1767_f4_FieldInfo,
	&t1767_f5_FieldInfo,
	&t1767_f6_FieldInfo,
	&t1767_f7_FieldInfo,
	&t1767_f8_FieldInfo,
	&t1767_f9_FieldInfo,
	&t1767_f10_FieldInfo,
	&t1767_f11_FieldInfo,
	&t1767_f12_FieldInfo,
	NULL
};
static PropertyInfo t1767____System_Runtime_Remoting_Messaging_IInternalMessage_Uri_PropertyInfo = 
{
	&t1767_TI, "System.Runtime.Remoting.Messaging.IInternalMessage.Uri", NULL, &m9023_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1767____ArgCount_PropertyInfo = 
{
	&t1767_TI, "ArgCount", &m9024_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1767____Args_PropertyInfo = 
{
	&t1767_TI, "Args", &m9025_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1767____LogicalCallContext_PropertyInfo = 
{
	&t1767_TI, "LogicalCallContext", &m9026_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1767____MethodBase_PropertyInfo = 
{
	&t1767_TI, "MethodBase", &m9027_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1767____MethodName_PropertyInfo = 
{
	&t1767_TI, "MethodName", &m9028_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1767____MethodSignature_PropertyInfo = 
{
	&t1767_TI, "MethodSignature", &m9029_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1767____Properties_PropertyInfo = 
{
	&t1767_TI, "Properties", &m9030_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1767____TypeName_PropertyInfo = 
{
	&t1767_TI, "TypeName", &m9031_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1767____Uri_PropertyInfo = 
{
	&t1767_TI, "Uri", &m9032_MI, &m9033_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1767____Exception_PropertyInfo = 
{
	&t1767_TI, "Exception", &m9035_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1767____OutArgCount_PropertyInfo = 
{
	&t1767_TI, "OutArgCount", &m9036_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1767____OutArgs_PropertyInfo = 
{
	&t1767_TI, "OutArgs", &m9037_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1767____ReturnValue_PropertyInfo = 
{
	&t1767_TI, "ReturnValue", &m9038_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1767_PIs[] =
{
	&t1767____System_Runtime_Remoting_Messaging_IInternalMessage_Uri_PropertyInfo,
	&t1767____ArgCount_PropertyInfo,
	&t1767____Args_PropertyInfo,
	&t1767____LogicalCallContext_PropertyInfo,
	&t1767____MethodBase_PropertyInfo,
	&t1767____MethodName_PropertyInfo,
	&t1767____MethodSignature_PropertyInfo,
	&t1767____Properties_PropertyInfo,
	&t1767____TypeName_PropertyInfo,
	&t1767____Uri_PropertyInfo,
	&t1767____Exception_PropertyInfo,
	&t1767____OutArgCount_PropertyInfo,
	&t1767____OutArgs_PropertyInfo,
	&t1767____ReturnValue_PropertyInfo,
	NULL
};
extern Il2CppType t5_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1752_0_0_0;
extern Il2CppType t1768_0_0_0;
static ParameterInfo t1767_m9021_ParameterInfos[] = 
{
	{"ret", 0, 134222335, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"outArgs", 1, 134222336, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"outArgsCount", 2, 134222337, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"callCtx", 3, 134222338, &EmptyCustomAttributesCache, &t1752_0_0_0},
	{"mcm", 4, 134222339, &EmptyCustomAttributesCache, &t1768_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9021_MI = 
{
	".ctor", (methodPointerType)&m9021, &t1767_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t110_t5_t5, t1767_m9021_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 5, false, false, 3836, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t142_0_0_0;
extern Il2CppType t142_0_0_0;
extern Il2CppType t1768_0_0_0;
static ParameterInfo t1767_m9022_ParameterInfos[] = 
{
	{"e", 0, 134222340, &EmptyCustomAttributesCache, &t142_0_0_0},
	{"mcm", 1, 134222341, &EmptyCustomAttributesCache, &t1768_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9022_MI = 
{
	".ctor", (methodPointerType)&m9022, &t1767_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t1767_m9022_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 3837, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1767_m9023_ParameterInfos[] = 
{
	{"value", 0, 134222342, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9023_MI = 
{
	"System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri", (methodPointerType)&m9023, &t1767_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1767_m9023_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 4, 1, false, false, 3838, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m9024_MI = 
{
	"get_ArgCount", (methodPointerType)&m9024, &t1767_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 3839, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9025_MI = 
{
	"get_Args", (methodPointerType)&m9025, &t1767_TI, &t168_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, false, 3840, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1752_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9026_MI = 
{
	"get_LogicalCallContext", (methodPointerType)&m9026, &t1767_TI, &t1752_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 8, 0, false, false, 3841, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t774_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9027_MI = 
{
	"get_MethodBase", (methodPointerType)&m9027, &t1767_TI, &t774_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, false, 3842, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9028_MI = 
{
	"get_MethodName", (methodPointerType)&m9028, &t1767_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, false, 3843, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9029_MI = 
{
	"get_MethodSignature", (methodPointerType)&m9029, &t1767_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 11, 0, false, false, 3844, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t986_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9030_MI = 
{
	"get_Properties", (methodPointerType)&m9030, &t1767_TI, &t986_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2502, 0, 19, 0, false, false, 3845, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9031_MI = 
{
	"get_TypeName", (methodPointerType)&m9031, &t1767_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 12, 0, false, false, 3846, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9032_MI = 
{
	"get_Uri", (methodPointerType)&m9032, &t1767_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 13, 0, false, false, 3847, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1767_m9033_ParameterInfos[] = 
{
	{"value", 0, 134222343, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9033_MI = 
{
	"set_Uri", (methodPointerType)&m9033, &t1767_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1767_m9033_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 20, 1, false, false, 3848, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1767_m9034_ParameterInfos[] = 
{
	{"argNum", 0, 134222344, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m9034_MI = 
{
	"GetArg", (methodPointerType)&m9034, &t1767_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t1767_m9034_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 1, false, false, 3849, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t142_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9035_MI = 
{
	"get_Exception", (methodPointerType)&m9035, &t1767_TI, &t142_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 15, 0, false, false, 3850, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m9036_MI = 
{
	"get_OutArgCount", (methodPointerType)&m9036, &t1767_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 16, 0, false, false, 3851, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9037_MI = 
{
	"get_OutArgs", (methodPointerType)&m9037, &t1767_TI, &t168_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 17, 0, false, false, 3852, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9038_MI = 
{
	"get_ReturnValue", (methodPointerType)&m9038, &t1767_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2502, 0, 21, 0, false, false, 3853, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1767_MIs[] =
{
	&m9021_MI,
	&m9022_MI,
	&m9023_MI,
	&m9024_MI,
	&m9025_MI,
	&m9026_MI,
	&m9027_MI,
	&m9028_MI,
	&m9029_MI,
	&m9030_MI,
	&m9031_MI,
	&m9032_MI,
	&m9033_MI,
	&m9034_MI,
	&m9035_MI,
	&m9036_MI,
	&m9037_MI,
	&m9038_MI,
	NULL
};
static MethodInfo* t1767_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m9023_MI,
	&m9030_MI,
	&m9024_MI,
	&m9025_MI,
	&m9026_MI,
	&m9027_MI,
	&m9028_MI,
	&m9029_MI,
	&m9031_MI,
	&m9032_MI,
	&m9034_MI,
	&m9035_MI,
	&m9036_MI,
	&m9037_MI,
	&m9038_MI,
	&m9030_MI,
	&m9033_MI,
	&m9038_MI,
};
static TypeInfo* t1767_ITIs[] = 
{
	&t2382_TI,
	&t1746_TI,
	&t1756_TI,
	&t1759_TI,
};
static Il2CppInterfaceOffsetPair t1767_IOs[] = 
{
	{ &t2382_TI, 4},
	{ &t1746_TI, 5},
	{ &t1756_TI, 6},
	{ &t1759_TI, 15},
};
void t1767_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1767__CustomAttributeCache = {
1,
NULL,
&t1767_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1767_0_0_0;
extern Il2CppType t1767_1_0_0;
struct t1767;
extern CustomAttributesCache t1767__CustomAttributeCache;
TypeInfo t1767_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReturnMessage", "System.Runtime.Remoting.Messaging", t1767_MIs, t1767_PIs, t1767_FIs, NULL, &t5_TI, NULL, NULL, &t1767_TI, t1767_ITIs, t1767_VT, &t1767__CustomAttributeCache, &t1767_TI, &t1767_0_0_0, &t1767_1_0_0, t1767_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1767), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 18, 14, 13, 0, 0, 22, 4, 4};
#include "t1769.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1769_TI;
#include "t1769MD.h"

#include "t1774.h"
extern TypeInfo t1774_TI;
#include "t1774MD.h"
extern MethodInfo m9055_MI;
extern MethodInfo m9052_MI;
extern MethodInfo m9128_MI;


extern MethodInfo m9039_MI;
 t1037 * m9039 (t1769 * __this, t114 * p0, MethodInfo* method){
	t1774 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1722_TI));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1774_TI));
		t1774 * L_0 = (t1774 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1774_TI));
		m9055(L_0, p0, (((t1722_SFs*)InitializedTypeInfo(&t1722_TI)->static_fields)->f3), (t168*)(t168*)NULL, &m9055_MI);
		V_0 = L_0;
		t5 * L_1 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m9052_MI, V_0);
		return ((t1037 *)Castclass(L_1, InitializedTypeInfo(&t1037_TI)));
	}
}
extern MethodInfo m9040_MI;
 t1770 * m9040 (t1769 * __this, t1427 * p0, t114 * p1, t5 * p2, t1720 * p3, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1786_TI));
		t5 * L_0 = m9128(NULL, p0, p1, &m9128_MI);
		t1770 * L_1 = m9113(NULL, L_0, &m9113_MI);
		return L_1;
	}
}
extern MethodInfo m9041_MI;
 void m9041 (t1769 * __this, t5 * p0, MethodInfo* method){
	{
		return;
	}
}
extern MethodInfo m9042_MI;
 bool m9042 (t1769 * __this, t1720 * p0, t5 * p1, MethodInfo* method){
	{
		return 1;
	}
}
// Metadata Definition System.Runtime.Remoting.Proxies.ProxyAttribute
extern Il2CppType t114_0_0_0;
static ParameterInfo t1769_m9039_ParameterInfos[] = 
{
	{"serverType", 0, 134222345, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t1037_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9039_MI = 
{
	"CreateInstance", (methodPointerType)&m9039, &t1769_TI, &t1037_0_0_0, RuntimeInvoker_t5_t5, t1769_m9039_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 6, 1, false, false, 3854, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1427_0_0_0;
extern Il2CppType t114_0_0_0;
extern Il2CppType t5_0_0_0;
extern Il2CppType t1720_0_0_0;
static ParameterInfo t1769_m9040_ParameterInfos[] = 
{
	{"objRef", 0, 134222346, &EmptyCustomAttributesCache, &t1427_0_0_0},
	{"serverType", 1, 134222347, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"serverObject", 2, 134222348, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"serverContext", 3, 134222349, &EmptyCustomAttributesCache, &t1720_0_0_0},
};
extern Il2CppType t1770_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9040_MI = 
{
	"CreateProxy", (methodPointerType)&m9040, &t1769_TI, &t1770_0_0_0, RuntimeInvoker_t5_t5_t5_t5_t5, t1769_m9040_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 7, 4, false, false, 3855, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1719_0_0_0;
static ParameterInfo t1769_m9041_ParameterInfos[] = 
{
	{"msg", 0, 134222350, &EmptyCustomAttributesCache, &t1719_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1769__CustomAttributeCache_m9041;
MethodInfo m9041_MI = 
{
	"GetPropertiesForNewContext", (methodPointerType)&m9041, &t1769_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1769_m9041_ParameterInfos, &t1769__CustomAttributeCache_m9041, 486, 0, 4, 1, false, false, 3856, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1720_0_0_0;
extern Il2CppType t1719_0_0_0;
static ParameterInfo t1769_m9042_ParameterInfos[] = 
{
	{"ctx", 0, 134222351, &EmptyCustomAttributesCache, &t1720_0_0_0},
	{"msg", 1, 134222352, &EmptyCustomAttributesCache, &t1719_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1769__CustomAttributeCache_m9042;
MethodInfo m9042_MI = 
{
	"IsContextOK", (methodPointerType)&m9042, &t1769_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t1769_m9042_ParameterInfos, &t1769__CustomAttributeCache_m9042, 486, 0, 5, 2, false, false, 3857, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1769_MIs[] =
{
	&m9039_MI,
	&m9040_MI,
	&m9041_MI,
	&m9042_MI,
	NULL
};
static MethodInfo* t1769_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
	&m9041_MI,
	&m9042_MI,
	&m9039_MI,
	&m9040_MI,
};
static TypeInfo* t1769_ITIs[] = 
{
	&t2375_TI,
};
static Il2CppInterfaceOffsetPair t1769_IOs[] = 
{
	{ &t740_TI, 4},
	{ &t2375_TI, 4},
};
void t1769_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t767 * tmp;
		tmp = (t767 *)il2cpp_codegen_object_new (&t767_TI);
		m3562(tmp, 4, &m3562_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t1769_CustomAttributesCacheGenerator_m9041(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1769_CustomAttributesCacheGenerator_m9042(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1769__CustomAttributeCache = {
2,
NULL,
&t1769_CustomAttributesCacheGenerator
};
CustomAttributesCache t1769__CustomAttributeCache_m9041 = {
1,
NULL,
&t1769_CustomAttributesCacheGenerator_m9041
};
CustomAttributesCache t1769__CustomAttributeCache_m9042 = {
1,
NULL,
&t1769_CustomAttributesCacheGenerator_m9042
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1769_0_0_0;
extern Il2CppType t1769_1_0_0;
struct t1769;
extern CustomAttributesCache t1769__CustomAttributeCache;
extern CustomAttributesCache t1769__CustomAttributeCache_m9041;
extern CustomAttributesCache t1769__CustomAttributeCache_m9042;
TypeInfo t1769_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ProxyAttribute", "System.Runtime.Remoting.Proxies", t1769_MIs, NULL, NULL, NULL, &t628_TI, NULL, NULL, &t1769_TI, t1769_ITIs, t1769_VT, &t1769__CustomAttributeCache, &t1769_TI, &t1769_0_0_0, &t1769_1_0_0, t1769_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1769), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 8, 1, 2};
#include "t1771.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1771_TI;
#include "t1771MD.h"



// Metadata Definition System.Runtime.Remoting.Proxies.TransparentProxy
extern Il2CppType t1770_0_0_6;
FieldInfo t1771_f0_FieldInfo = 
{
	"_rp", &t1770_0_0_6, &t1771_TI, offsetof(t1771, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1771_FIs[] =
{
	&t1771_f0_FieldInfo,
	NULL
};
static MethodInfo* t1771_MIs[] =
{
	NULL
};
static MethodInfo* t1771_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1771_0_0_0;
extern Il2CppType t1771_1_0_0;
struct t1771;
TypeInfo t1771_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TransparentProxy", "System.Runtime.Remoting.Proxies", t1771_MIs, NULL, t1771_FIs, NULL, &t5_TI, NULL, NULL, &t1771_TI, NULL, t1771_VT, &EmptyCustomAttributesCache, &t1771_TI, &t1771_0_0_0, &t1771_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1771), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 1, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif

#include "t1772.h"
#include "t1773.h"
extern TypeInfo t124_TI;
extern TypeInfo t1782_TI;
#include "t124MD.h"
extern MethodInfo m9045_MI;
extern MethodInfo m3534_MI;
extern MethodInfo m9046_MI;
extern MethodInfo m11558_MI;
extern MethodInfo m9051_MI;


extern MethodInfo m9043_MI;
 void m9043 (t1770 * __this, t114 * p0, MethodInfo* method){
	{
		m9045(__this, p0, (((t124_SFs*)InitializedTypeInfo(&t124_TI)->static_fields)->f1), NULL, &m9045_MI);
		return;
	}
}
extern MethodInfo m9044_MI;
 void m9044 (t1770 * __this, t114 * p0, t1773 * p1, MethodInfo* method){
	{
		m9045(__this, p0, (((t124_SFs*)InitializedTypeInfo(&t124_TI)->static_fields)->f1), NULL, &m9045_MI);
		__this->f3 = p1;
		return;
	}
}
 void m9045 (t1770 * __this, t114 * p0, t124 p1, t5 * p2, MethodInfo* method){
	{
		__this->f1 = (-1);
		m460(__this, &m460_MI);
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6790_MI, p0);
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6789_MI, p0);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		t160 * L_2 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2582(L_2, (t11*) &_stringLiteral1952, &m2582_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0028:
	{
		__this->f0 = p0;
		bool L_3 = m3534(NULL, p1, (((t124_SFs*)InitializedTypeInfo(&t124_TI)->static_fields)->f1), &m3534_MI);
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		t491 * L_4 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4781(L_4, (t11*) &_stringLiteral1953, &m4781_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0047:
	{
		return;
	}
}
 t114 * m9046 (t5 * __this, t5 * p0, MethodInfo* method){
	typedef t114 * (*m9046_ftn) (t5 *);
	static m9046_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9046_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m9047_MI;
 t114 * m9047 (t1770 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f4);
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		t114 * L_1 = (__this->f0);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6789_MI, L_1);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_3 = m532(NULL, LoadTypeToken(&t1037_0_0_0), &m532_MI);
		return L_3;
	}

IL_0020:
	{
		t114 * L_4 = (__this->f0);
		return L_4;
	}

IL_0027:
	{
		t5 * L_5 = (__this->f4);
		t114 * L_6 = m9046(NULL, L_5, &m9046_MI);
		return L_6;
	}
}
 void m9048 (t1770 * __this, t829 * p0, t830  p1, MethodInfo* method){
	t5 * V_0 = {0};
	{
		t5 * L_0 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m9052_MI, __this);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1786_TI));
		m9117(NULL, V_0, p0, p1, &m9117_MI);
		return;
	}
}
extern MethodInfo m9049_MI;
 t1772 * m9049 (t1770 * __this, MethodInfo* method){
	{
		t1772 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m9050_MI;
 void m9050 (t1770 * __this, t1772 * p0, MethodInfo* method){
	{
		__this->f3 = p0;
		return;
	}
}
 t5 * m9051 (t1770 * __this, t11* p0, MethodInfo* method){
	typedef t5 * (*m9051_ftn) (t1770 *, t11*);
	static m9051_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9051_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)");
	return _il2cpp_icall_func(__this, p0);
}
 t5 * m9052 (t1770 * __this, MethodInfo* method){
	t11* V_0 = {0};
	t5 * V_1 = {0};
	{
		t5 * L_0 = (__this->f4);
		if (L_0)
		{
			goto IL_005a;
		}
	}
	{
		V_1 = ((t5 *)IsInst(__this, InitializedTypeInfo(&t1782_TI)));
		if (!V_1)
		{
			goto IL_0041;
		}
	}
	{
		t11* L_1 = (t11*)InterfaceFuncInvoker0< t11* >::Invoke(&m11558_MI, V_1);
		V_0 = L_1;
		if (!V_0)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_2 = m532(NULL, LoadTypeToken(&t1037_0_0_0), &m532_MI);
		t11* L_3 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3642_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_4 = m2356(NULL, V_0, L_3, &m2356_MI);
		if (!L_4)
		{
			goto IL_003f;
		}
	}

IL_0033:
	{
		t114 * L_5 = (__this->f0);
		t11* L_6 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3642_MI, L_5);
		V_0 = L_6;
	}

IL_003f:
	{
		goto IL_004d;
	}

IL_0041:
	{
		t114 * L_7 = (__this->f0);
		t11* L_8 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3642_MI, L_7);
		V_0 = L_8;
	}

IL_004d:
	{
		t5 * L_9 = (t5 *)VirtFuncInvoker1< t5 *, t11* >::Invoke(&m9051_MI, __this, V_0);
		__this->f4 = L_9;
	}

IL_005a:
	{
		t5 * L_10 = (__this->f4);
		return L_10;
	}
}
extern MethodInfo m9053_MI;
 void m9053 (t1770 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Proxies.RealProxy
extern Il2CppType t114_0_0_1;
FieldInfo t1770_f0_FieldInfo = 
{
	"class_to_proxy", &t114_0_0_1, &t1770_TI, offsetof(t1770, f0), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1770_f1_FieldInfo = 
{
	"_targetDomainId", &t110_0_0_1, &t1770_TI, offsetof(t1770, f1), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_3;
FieldInfo t1770_f2_FieldInfo = 
{
	"_targetUri", &t11_0_0_3, &t1770_TI, offsetof(t1770, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1772_0_0_3;
FieldInfo t1770_f3_FieldInfo = 
{
	"_objectIdentity", &t1772_0_0_3, &t1770_TI, offsetof(t1770, f3), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_1;
FieldInfo t1770_f4_FieldInfo = 
{
	"_objTP", &t5_0_0_1, &t1770_TI, offsetof(t1770, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1770_FIs[] =
{
	&t1770_f0_FieldInfo,
	&t1770_f1_FieldInfo,
	&t1770_f2_FieldInfo,
	&t1770_f3_FieldInfo,
	&t1770_f4_FieldInfo,
	NULL
};
static PropertyInfo t1770____ObjectIdentity_PropertyInfo = 
{
	&t1770_TI, "ObjectIdentity", &m9049_MI, &m9050_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1770_PIs[] =
{
	&t1770____ObjectIdentity_PropertyInfo,
	NULL
};
extern Il2CppType t114_0_0_0;
static ParameterInfo t1770_m9043_ParameterInfos[] = 
{
	{"classToProxy", 0, 134222353, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9043_MI = 
{
	".ctor", (methodPointerType)&m9043, &t1770_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1770_m9043_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 1, false, false, 3858, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t1773_0_0_0;
extern Il2CppType t1773_0_0_0;
static ParameterInfo t1770_m9044_ParameterInfos[] = 
{
	{"classToProxy", 0, 134222354, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"identity", 1, 134222355, &EmptyCustomAttributesCache, &t1773_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9044_MI = 
{
	".ctor", (methodPointerType)&m9044, &t1770_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t1770_m9044_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 3859, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1770_m9045_ParameterInfos[] = 
{
	{"classToProxy", 0, 134222356, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"stub", 1, 134222357, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"stubData", 2, 134222358, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9045_MI = 
{
	".ctor", (methodPointerType)&m9045, &t1770_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124_t5, t1770_m9045_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 3, false, false, 3860, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1770_m9046_ParameterInfos[] = 
{
	{"transparentProxy", 0, 134222359, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9046_MI = 
{
	"InternalGetProxyType", (methodPointerType)&m9046, &t1770_TI, &t114_0_0_0, RuntimeInvoker_t5_t5, t1770_m9046_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 1, false, false, 3861, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9047_MI = 
{
	"GetProxiedType", (methodPointerType)&m9047, &t1770_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 3862, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1770_m9048_ParameterInfos[] = 
{
	{"info", 0, 134222360, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134222361, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m9048_MI = 
{
	"GetObjectData", (methodPointerType)&m9048, &t1770_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1770_m9048_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 4, 2, false, false, 3863, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1772_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9049_MI = 
{
	"get_ObjectIdentity", (methodPointerType)&m9049, &t1770_TI, &t1772_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 3864, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1772_0_0_0;
extern Il2CppType t1772_0_0_0;
static ParameterInfo t1770_m9050_ParameterInfos[] = 
{
	{"value", 0, 134222362, &EmptyCustomAttributesCache, &t1772_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9050_MI = 
{
	"set_ObjectIdentity", (methodPointerType)&m9050, &t1770_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1770_m9050_ParameterInfos, &EmptyCustomAttributesCache, 2179, 0, 255, 1, false, false, 3865, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1770_m9051_ParameterInfos[] = 
{
	{"className", 0, 134222363, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9051_MI = 
{
	"InternalGetTransparentProxy", (methodPointerType)&m9051, &t1770_TI, &t5_0_0_0, RuntimeInvoker_t5_t5, t1770_m9051_ParameterInfos, &EmptyCustomAttributesCache, 451, 4096, 5, 1, false, false, 3866, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9052_MI = 
{
	"GetTransparentProxy", (methodPointerType)&m9052, &t1770_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 454, 0, 6, 0, false, false, 3867, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1770_m9053_ParameterInfos[] = 
{
	{"domainId", 0, 134222364, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m9053_MI = 
{
	"SetTargetDomain", (methodPointerType)&m9053, &t1770_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1770_m9053_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 3868, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1770_MIs[] =
{
	&m9043_MI,
	&m9044_MI,
	&m9045_MI,
	&m9046_MI,
	&m9047_MI,
	&m9048_MI,
	&m9049_MI,
	&m9050_MI,
	&m9051_MI,
	&m9052_MI,
	&m9053_MI,
	NULL
};
static MethodInfo* t1770_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m9048_MI,
	&m9051_MI,
	&m9052_MI,
};
void t1770_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1770__CustomAttributeCache = {
1,
NULL,
&t1770_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1770_0_0_0;
extern Il2CppType t1770_1_0_0;
struct t1770;
extern CustomAttributesCache t1770__CustomAttributeCache;
TypeInfo t1770_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RealProxy", "System.Runtime.Remoting.Proxies", t1770_MIs, t1770_PIs, t1770_FIs, NULL, &t5_TI, NULL, NULL, &t1770_TI, NULL, t1770_VT, &t1770__CustomAttributeCache, &t1770_TI, &t1770_0_0_0, &t1770_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1770), 0, -1, 0, 0, -1, 1048705, 0, false, false, false, false, false, false, false, false, false, false, false, false, 11, 1, 5, 0, 0, 7, 0, 0};
#ifndef _MSC_VER
#else
#endif

#include "t1787.h"
extern TypeInfo t1773_TI;
extern TypeInfo t1772_TI;
extern TypeInfo t1787_TI;
#include "t1772MD.h"
#include "t1773MD.h"
extern MethodInfo m11559_MI;
extern MethodInfo m9089_MI;
extern MethodInfo m9070_MI;
extern MethodInfo m9081_MI;
extern MethodInfo m6814_MI;
extern MethodInfo m9131_MI;


extern MethodInfo m9054_MI;
 void m9054 (t1774 * __this, t114 * p0, t1773 * p1, MethodInfo* method){
	{
		m9044(__this, p0, p1, &m9044_MI);
		t5 * L_0 = m9070(p1, &m9070_MI);
		__this->f7 = L_0;
		__this->f8 = 0;
		t11* L_1 = m9081(p1, &m9081_MI);
		__this->f2 = L_1;
		return;
	}
}
 void m9055 (t1774 * __this, t114 * p0, t11* p1, t168* p2, MethodInfo* method){
	{
		m9043(__this, p0, &m9043_MI);
		__this->f8 = 0;
		t1712 * L_0 = m8820(NULL, p0, p1, p2, &m8820_MI);
		__this->f9 = L_0;
		return;
	}
}
extern MethodInfo m9056_MI;
 void m9056 (t5 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_0 = m532(NULL, LoadTypeToken(&t5_0_0_0), &m532_MI);
		t695 * L_1 = (t695 *)VirtFuncInvoker1< t695 *, t11* >::Invoke(&m6814_MI, L_0, (t11*) &_stringLiteral1954);
		((t1774_SFs*)InitializedTypeInfo(&t1774_TI)->static_fields)->f5 = L_1;
		t114 * L_2 = m532(NULL, LoadTypeToken(&t5_0_0_0), &m532_MI);
		t695 * L_3 = (t695 *)VirtFuncInvoker1< t695 *, t11* >::Invoke(&m6814_MI, L_2, (t11*) &_stringLiteral1955);
		((t1774_SFs*)InitializedTypeInfo(&t1774_TI)->static_fields)->f6 = L_3;
		return;
	}
}
extern MethodInfo m9057_MI;
 t11* m9057 (t1774 * __this, MethodInfo* method){
	t1427 * V_0 = {0};
	{
		t1772 * L_0 = (__this->f3);
		if (!((t1773 *)IsInst(L_0, InitializedTypeInfo(&t1773_TI))))
		{
			goto IL_002e;
		}
	}
	{
		t1772 * L_1 = (__this->f3);
		t1427 * L_2 = (t1427 *)VirtFuncInvoker1< t1427 *, t114 * >::Invoke(&m11559_MI, L_1, (t114 *)NULL);
		V_0 = L_2;
		t5 * L_3 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m9089_MI, V_0);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		t5 * L_4 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m9089_MI, V_0);
		t11* L_5 = (t11*)InterfaceFuncInvoker0< t11* >::Invoke(&m11558_MI, L_4);
		return L_5;
	}

IL_002e:
	{
		t114 * L_6 = m9047(__this, &m9047_MI);
		t11* L_7 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3642_MI, L_6);
		return L_7;
	}
}
extern MethodInfo m9058_MI;
 void m9058 (t1774 * __this, MethodInfo* method){
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			t1772 * L_0 = (__this->f3);
			if (!L_0)
			{
				goto IL_0020;
			}
		}

IL_0008:
		{
			t1772 * L_1 = (__this->f3);
			if (((t1787 *)IsInst(L_1, InitializedTypeInfo(&t1787_TI))))
			{
				goto IL_0020;
			}
		}

IL_0015:
		{
			t1772 * L_2 = (__this->f3);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1786_TI));
			m9131(NULL, L_2, &m9131_MI);
		}

IL_0020:
		{
			// IL_0020: leave.s IL_0029
			leaveInstructions[0] = 0x29; // 1
			THROW_SENTINEL(IL_0029);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0022;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_0022;
	}

IL_0022:
	{ // begin finally (depth: 1)
		m465(__this, &m465_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x29:
				goto IL_0029;
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
	} // end finally (depth: 1)

IL_0029:
	{
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Proxies.RemotingProxy
extern Il2CppType t695_0_0_17;
FieldInfo t1774_f5_FieldInfo = 
{
	"_cache_GetTypeMethod", &t695_0_0_17, &t1774_TI, offsetof(t1774_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t695_0_0_17;
FieldInfo t1774_f6_FieldInfo = 
{
	"_cache_GetHashCodeMethod", &t695_0_0_17, &t1774_TI, offsetof(t1774_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1232_0_0_1;
FieldInfo t1774_f7_FieldInfo = 
{
	"_sink", &t1232_0_0_1, &t1774_TI, offsetof(t1774, f7), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t1774_f8_FieldInfo = 
{
	"_hasEnvoySink", &t108_0_0_1, &t1774_TI, offsetof(t1774, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1712_0_0_1;
FieldInfo t1774_f9_FieldInfo = 
{
	"_ctorCall", &t1712_0_0_1, &t1774_TI, offsetof(t1774, f9), &EmptyCustomAttributesCache};
static FieldInfo* t1774_FIs[] =
{
	&t1774_f5_FieldInfo,
	&t1774_f6_FieldInfo,
	&t1774_f7_FieldInfo,
	&t1774_f8_FieldInfo,
	&t1774_f9_FieldInfo,
	NULL
};
static PropertyInfo t1774____TypeName_PropertyInfo = 
{
	&t1774_TI, "TypeName", &m9057_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1774_PIs[] =
{
	&t1774____TypeName_PropertyInfo,
	NULL
};
extern Il2CppType t114_0_0_0;
extern Il2CppType t1773_0_0_0;
static ParameterInfo t1774_m9054_ParameterInfos[] = 
{
	{"type", 0, 134222365, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"identity", 1, 134222366, &EmptyCustomAttributesCache, &t1773_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9054_MI = 
{
	".ctor", (methodPointerType)&m9054, &t1774_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t1774_m9054_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 3869, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t11_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t1774_m9055_ParameterInfos[] = 
{
	{"type", 0, 134222367, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"activationUrl", 1, 134222368, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"activationAttributes", 2, 134222369, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9055_MI = 
{
	".ctor", (methodPointerType)&m9055, &t1774_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t5, t1774_m9055_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 3, false, false, 3870, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m9056_MI = 
{
	".cctor", (methodPointerType)&m9056, &t1774_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3871, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9057_MI = 
{
	"get_TypeName", (methodPointerType)&m9057, &t1774_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, false, 3872, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m9058_MI = 
{
	"Finalize", (methodPointerType)&m9058, &t1774_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 3873, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1774_MIs[] =
{
	&m9054_MI,
	&m9055_MI,
	&m9056_MI,
	&m9057_MI,
	&m9058_MI,
	NULL
};
static MethodInfo* t1774_VT[] =
{
	&m464_MI,
	&m9058_MI,
	&m466_MI,
	&m467_MI,
	&m9048_MI,
	&m9051_MI,
	&m9052_MI,
	&m9057_MI,
};
static TypeInfo* t1774_ITIs[] = 
{
	&t1782_TI,
};
static Il2CppInterfaceOffsetPair t1774_IOs[] = 
{
	{ &t1782_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1774_0_0_0;
extern Il2CppType t1774_1_0_0;
struct t1774;
TypeInfo t1774_TI = 
{
	&g_mscorlib_dll_Image, NULL, "RemotingProxy", "System.Runtime.Remoting.Proxies", t1774_MIs, t1774_PIs, t1774_FIs, NULL, &t1770_TI, NULL, NULL, &t1774_TI, t1774_ITIs, t1774_VT, &EmptyCustomAttributesCache, &t1774_TI, &t1774_0_0_0, &t1774_1_0_0, t1774_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1774), 0, -1, sizeof(t1774_SFs), 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, true, true, false, false, 5, 1, 5, 0, 0, 8, 1, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2387_TI;



// Metadata Definition System.Runtime.Remoting.Services.ITrackingHandler
extern Il2CppType t5_0_0_0;
static ParameterInfo t2387_m11560_ParameterInfos[] = 
{
	{"obj", 0, 134222370, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11560_MI = 
{
	"DisconnectedObject", NULL, &t2387_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t2387_m11560_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, false, 3874, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t1427_0_0_0;
static ParameterInfo t2387_m11561_ParameterInfos[] = 
{
	{"obj", 0, 134222371, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"or", 1, 134222372, &EmptyCustomAttributesCache, &t1427_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11561_MI = 
{
	"MarshaledObject", NULL, &t2387_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t2387_m11561_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, false, 3875, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t1427_0_0_0;
static ParameterInfo t2387_m11562_ParameterInfos[] = 
{
	{"obj", 0, 134222373, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"or", 1, 134222374, &EmptyCustomAttributesCache, &t1427_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11562_MI = 
{
	"UnmarshaledObject", NULL, &t2387_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t2387_m11562_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 2, false, false, 3876, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2387_MIs[] =
{
	&m11560_MI,
	&m11561_MI,
	&m11562_MI,
	NULL
};
void t2387_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t2387__CustomAttributeCache = {
1,
NULL,
&t2387_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2387_0_0_0;
extern Il2CppType t2387_1_0_0;
struct t2387;
extern CustomAttributesCache t2387__CustomAttributeCache;
TypeInfo t2387_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ITrackingHandler", "System.Runtime.Remoting.Services", t2387_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2387_TI, NULL, NULL, &t2387__CustomAttributeCache, &t2387_TI, &t2387_0_0_0, &t2387_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 0, 0, 0};
#include "t1775.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1775_TI;
#include "t1775MD.h"

extern TypeInfo t2388_TI;
extern MethodInfo m4952_MI;
extern MethodInfo m11561_MI;
extern MethodInfo m11562_MI;
extern MethodInfo m11560_MI;


extern MethodInfo m9059_MI;
 void m9059 (t5 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t996_TI));
		t996 * L_0 = (t996 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t996_TI));
		m4773(L_0, &m4773_MI);
		((t1775_SFs*)InitializedTypeInfo(&t1775_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m9060_MI;
 void m9060 (t5 * __this, t5 * p0, t1427 * p1, MethodInfo* method){
	t2388* V_0 = {0};
	t5 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1775_TI));
		t5 * L_0 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m4970_MI, (((t1775_SFs*)InitializedTypeInfo(&t1775_TI)->static_fields)->f0));
		V_1 = L_0;
		m4795(NULL, V_1, &m4795_MI);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1775_TI));
			int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4769_MI, (((t1775_SFs*)InitializedTypeInfo(&t1775_TI)->static_fields)->f0));
			if (L_1)
			{
				goto IL_001f;
			}
		}

IL_001d:
		{
			// IL_001d: leave.s IL_005a
			leaveInstructions[0] = 0x5A; // 1
			THROW_SENTINEL(IL_005a);
			// finally target depth: 1
		}

IL_001f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1775_TI));
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
			t114 * L_2 = m532(NULL, LoadTypeToken(&t2387_0_0_0), &m532_MI);
			t107 * L_3 = (t107 *)VirtFuncInvoker1< t107 *, t114 * >::Invoke(&m4952_MI, (((t1775_SFs*)InitializedTypeInfo(&t1775_TI)->static_fields)->f0), L_2);
			V_0 = ((t2388*)Castclass(L_3, InitializedTypeInfo(&t2388_TI)));
			// IL_0039: leave.s IL_0042
			leaveInstructions[0] = 0x42; // 1
			THROW_SENTINEL(IL_0042);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_003b;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_003b;
	}

IL_003b:
	{ // begin finally (depth: 1)
		m4796(NULL, V_1, &m4796_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x5A:
				goto IL_005a;
			case 0x42:
				goto IL_0042;
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
	} // end finally (depth: 1)

IL_0042:
	{
		V_2 = 0;
		goto IL_0054;
	}

IL_0046:
	{
		int32_t L_4 = V_2;
		InterfaceActionInvoker2< t5 *, t1427 * >::Invoke(&m11561_MI, (*(t5 **)(t5 **)SZArrayLdElema(V_0, L_4)), p0, p1);
		V_2 = ((int32_t)(V_2+1));
	}

IL_0054:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t107 *)V_0)->max_length))))))
		{
			goto IL_0046;
		}
	}

IL_005a:
	{
		return;
	}
}
extern MethodInfo m9061_MI;
 void m9061 (t5 * __this, t5 * p0, t1427 * p1, MethodInfo* method){
	t2388* V_0 = {0};
	t5 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1775_TI));
		t5 * L_0 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m4970_MI, (((t1775_SFs*)InitializedTypeInfo(&t1775_TI)->static_fields)->f0));
		V_1 = L_0;
		m4795(NULL, V_1, &m4795_MI);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1775_TI));
			int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4769_MI, (((t1775_SFs*)InitializedTypeInfo(&t1775_TI)->static_fields)->f0));
			if (L_1)
			{
				goto IL_001f;
			}
		}

IL_001d:
		{
			// IL_001d: leave.s IL_005a
			leaveInstructions[0] = 0x5A; // 1
			THROW_SENTINEL(IL_005a);
			// finally target depth: 1
		}

IL_001f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1775_TI));
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
			t114 * L_2 = m532(NULL, LoadTypeToken(&t2387_0_0_0), &m532_MI);
			t107 * L_3 = (t107 *)VirtFuncInvoker1< t107 *, t114 * >::Invoke(&m4952_MI, (((t1775_SFs*)InitializedTypeInfo(&t1775_TI)->static_fields)->f0), L_2);
			V_0 = ((t2388*)Castclass(L_3, InitializedTypeInfo(&t2388_TI)));
			// IL_0039: leave.s IL_0042
			leaveInstructions[0] = 0x42; // 1
			THROW_SENTINEL(IL_0042);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_003b;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_003b;
	}

IL_003b:
	{ // begin finally (depth: 1)
		m4796(NULL, V_1, &m4796_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x5A:
				goto IL_005a;
			case 0x42:
				goto IL_0042;
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
	} // end finally (depth: 1)

IL_0042:
	{
		V_2 = 0;
		goto IL_0054;
	}

IL_0046:
	{
		int32_t L_4 = V_2;
		InterfaceActionInvoker2< t5 *, t1427 * >::Invoke(&m11562_MI, (*(t5 **)(t5 **)SZArrayLdElema(V_0, L_4)), p0, p1);
		V_2 = ((int32_t)(V_2+1));
	}

IL_0054:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t107 *)V_0)->max_length))))))
		{
			goto IL_0046;
		}
	}

IL_005a:
	{
		return;
	}
}
extern MethodInfo m9062_MI;
 void m9062 (t5 * __this, t5 * p0, MethodInfo* method){
	t2388* V_0 = {0};
	t5 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1775_TI));
		t5 * L_0 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m4970_MI, (((t1775_SFs*)InitializedTypeInfo(&t1775_TI)->static_fields)->f0));
		V_1 = L_0;
		m4795(NULL, V_1, &m4795_MI);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1775_TI));
			int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4769_MI, (((t1775_SFs*)InitializedTypeInfo(&t1775_TI)->static_fields)->f0));
			if (L_1)
			{
				goto IL_001f;
			}
		}

IL_001d:
		{
			// IL_001d: leave.s IL_0059
			leaveInstructions[0] = 0x59; // 1
			THROW_SENTINEL(IL_0059);
			// finally target depth: 1
		}

IL_001f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1775_TI));
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
			t114 * L_2 = m532(NULL, LoadTypeToken(&t2387_0_0_0), &m532_MI);
			t107 * L_3 = (t107 *)VirtFuncInvoker1< t107 *, t114 * >::Invoke(&m4952_MI, (((t1775_SFs*)InitializedTypeInfo(&t1775_TI)->static_fields)->f0), L_2);
			V_0 = ((t2388*)Castclass(L_3, InitializedTypeInfo(&t2388_TI)));
			// IL_0039: leave.s IL_0042
			leaveInstructions[0] = 0x42; // 1
			THROW_SENTINEL(IL_0042);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_003b;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_003b;
	}

IL_003b:
	{ // begin finally (depth: 1)
		m4796(NULL, V_1, &m4796_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x59:
				goto IL_0059;
			case 0x42:
				goto IL_0042;
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
	} // end finally (depth: 1)

IL_0042:
	{
		V_2 = 0;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_4 = V_2;
		InterfaceActionInvoker1< t5 * >::Invoke(&m11560_MI, (*(t5 **)(t5 **)SZArrayLdElema(V_0, L_4)), p0);
		V_2 = ((int32_t)(V_2+1));
	}

IL_0053:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t107 *)V_0)->max_length))))))
		{
			goto IL_0046;
		}
	}

IL_0059:
	{
		return;
	}
}
// Metadata Definition System.Runtime.Remoting.Services.TrackingServices
extern Il2CppType t996_0_0_17;
FieldInfo t1775_f0_FieldInfo = 
{
	"_handlers", &t996_0_0_17, &t1775_TI, offsetof(t1775_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1775_FIs[] =
{
	&t1775_f0_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m9059_MI = 
{
	".cctor", (methodPointerType)&m9059, &t1775_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3877, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t1427_0_0_0;
static ParameterInfo t1775_m9060_ParameterInfos[] = 
{
	{"obj", 0, 134222375, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"or", 1, 134222376, &EmptyCustomAttributesCache, &t1427_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9060_MI = 
{
	"NotifyMarshaledObject", (methodPointerType)&m9060, &t1775_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t1775_m9060_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 3878, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t1427_0_0_0;
static ParameterInfo t1775_m9061_ParameterInfos[] = 
{
	{"obj", 0, 134222377, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"or", 1, 134222378, &EmptyCustomAttributesCache, &t1427_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9061_MI = 
{
	"NotifyUnmarshaledObject", (methodPointerType)&m9061, &t1775_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t1775_m9061_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 3879, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1775_m9062_ParameterInfos[] = 
{
	{"obj", 0, 134222379, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9062_MI = 
{
	"NotifyDisconnectedObject", (methodPointerType)&m9062, &t1775_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1775_m9062_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 3880, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1775_MIs[] =
{
	&m9059_MI,
	&m9060_MI,
	&m9061_MI,
	&m9062_MI,
	NULL
};
static MethodInfo* t1775_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t1775_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1775__CustomAttributeCache = {
1,
NULL,
&t1775_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1775_0_0_0;
extern Il2CppType t1775_1_0_0;
struct t1775;
extern CustomAttributesCache t1775__CustomAttributeCache;
TypeInfo t1775_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TrackingServices", "System.Runtime.Remoting.Services", t1775_MIs, NULL, t1775_FIs, NULL, &t5_TI, NULL, NULL, &t1775_TI, NULL, t1775_VT, &t1775__CustomAttributeCache, &t1775_TI, &t1775_0_0_0, &t1775_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1775), 0, -1, sizeof(t1775_SFs), 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, true, false, false, 4, 0, 1, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1776_TI;
#include "t1776MD.h"

#include "t1777MD.h"
extern MethodInfo m9147_MI;
extern MethodInfo m9146_MI;
extern MethodInfo m9063_MI;


 t11* m9063 (t1776 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m9064_MI;
 t1778* m9064 (t1776 * __this, MethodInfo* method){
	{
		return (t1778*)NULL;
	}
}
extern MethodInfo m9065_MI;
 t114 * m9065 (t1776 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m9066_MI;
 t11* m9066 (t1776 * __this, MethodInfo* method){
	{
		t11* L_0 = m9147(__this, &m9147_MI);
		t11* L_1 = m9146(__this, &m9146_MI);
		t11* L_2 = m9063(__this, &m9063_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_3 = m2328(NULL, L_0, L_1, L_2, &m2328_MI);
		return L_3;
	}
}
// Metadata Definition System.Runtime.Remoting.ActivatedClientTypeEntry
extern Il2CppType t11_0_0_1;
FieldInfo t1776_f2_FieldInfo = 
{
	"applicationUrl", &t11_0_0_1, &t1776_TI, offsetof(t1776, f2), &EmptyCustomAttributesCache};
extern Il2CppType t114_0_0_1;
FieldInfo t1776_f3_FieldInfo = 
{
	"obj_type", &t114_0_0_1, &t1776_TI, offsetof(t1776, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1776_FIs[] =
{
	&t1776_f2_FieldInfo,
	&t1776_f3_FieldInfo,
	NULL
};
static PropertyInfo t1776____ApplicationUrl_PropertyInfo = 
{
	&t1776_TI, "ApplicationUrl", &m9063_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1776____ContextAttributes_PropertyInfo = 
{
	&t1776_TI, "ContextAttributes", &m9064_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1776____ObjectType_PropertyInfo = 
{
	&t1776_TI, "ObjectType", &m9065_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1776_PIs[] =
{
	&t1776____ApplicationUrl_PropertyInfo,
	&t1776____ContextAttributes_PropertyInfo,
	&t1776____ObjectType_PropertyInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9063_MI = 
{
	"get_ApplicationUrl", (methodPointerType)&m9063, &t1776_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3881, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1778_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9064_MI = 
{
	"get_ContextAttributes", (methodPointerType)&m9064, &t1776_TI, &t1778_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3882, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9065_MI = 
{
	"get_ObjectType", (methodPointerType)&m9065, &t1776_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3883, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9066_MI = 
{
	"ToString", (methodPointerType)&m9066, &t1776_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 3884, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1776_MIs[] =
{
	&m9063_MI,
	&m9064_MI,
	&m9065_MI,
	&m9066_MI,
	NULL
};
static MethodInfo* t1776_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m9066_MI,
};
void t1776_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1776__CustomAttributeCache = {
1,
NULL,
&t1776_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1776_0_0_0;
extern Il2CppType t1776_1_0_0;
extern TypeInfo t1777_TI;
struct t1776;
extern CustomAttributesCache t1776__CustomAttributeCache;
TypeInfo t1776_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ActivatedClientTypeEntry", "System.Runtime.Remoting", t1776_MIs, t1776_PIs, t1776_FIs, NULL, &t1777_TI, NULL, NULL, &t1776_TI, NULL, t1776_VT, &t1776__CustomAttributeCache, &t1776_TI, &t1776_0_0_0, &t1776_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1776), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 4, 3, 2, 0, 0, 4, 0, 0};
#include "t1779.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1779_TI;
#include "t1779MD.h"



extern MethodInfo m9067_MI;
 void m9067 (t1779 * __this, t5 * p0, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m9068_MI;
 t5 * m9068 (t1779 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f0);
		return L_0;
	}
}
// Metadata Definition System.Runtime.Remoting.EnvoyInfo
extern Il2CppType t1232_0_0_1;
FieldInfo t1779_f0_FieldInfo = 
{
	"envoySinks", &t1232_0_0_1, &t1779_TI, offsetof(t1779, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1779_FIs[] =
{
	&t1779_f0_FieldInfo,
	NULL
};
static PropertyInfo t1779____EnvoySinks_PropertyInfo = 
{
	&t1779_TI, "EnvoySinks", &m9068_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1779_PIs[] =
{
	&t1779____EnvoySinks_PropertyInfo,
	NULL
};
extern Il2CppType t1232_0_0_0;
static ParameterInfo t1779_m9067_ParameterInfos[] = 
{
	{"sinks", 0, 134222380, &EmptyCustomAttributesCache, &t1232_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9067_MI = 
{
	".ctor", (methodPointerType)&m9067, &t1779_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1779_m9067_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3885, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1232_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9068_MI = 
{
	"get_EnvoySinks", (methodPointerType)&m9068, &t1779_TI, &t1232_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 3886, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1779_MIs[] =
{
	&m9067_MI,
	&m9068_MI,
	NULL
};
static MethodInfo* t1779_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m9068_MI,
};
extern TypeInfo t1783_TI;
static TypeInfo* t1779_ITIs[] = 
{
	&t1783_TI,
};
static Il2CppInterfaceOffsetPair t1779_IOs[] = 
{
	{ &t1783_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1779_0_0_0;
extern Il2CppType t1779_1_0_0;
struct t1779;
TypeInfo t1779_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EnvoyInfo", "System.Runtime.Remoting", t1779_MIs, t1779_PIs, t1779_FIs, NULL, &t5_TI, NULL, NULL, &t1779_TI, t1779_ITIs, t1779_VT, &EmptyCustomAttributesCache, &t1779_TI, &t1779_0_0_0, &t1779_1_0_0, t1779_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1779), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, 2, 1, 1, 0, 0, 5, 1, 1};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Runtime.Remoting.IChannelInfo
extern MethodInfo m11563_MI;
static PropertyInfo t1781____ChannelData_PropertyInfo = 
{
	&t1781_TI, "ChannelData", &m11563_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1781_PIs[] =
{
	&t1781____ChannelData_PropertyInfo,
	NULL
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11563_MI = 
{
	"get_ChannelData", NULL, &t1781_TI, &t168_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 3887, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1781_MIs[] =
{
	&m11563_MI,
	NULL
};
void t1781_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1781__CustomAttributeCache = {
1,
NULL,
&t1781_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1781_0_0_0;
extern Il2CppType t1781_1_0_0;
struct t1781;
extern CustomAttributesCache t1781__CustomAttributeCache;
TypeInfo t1781_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IChannelInfo", "System.Runtime.Remoting", t1781_MIs, t1781_PIs, NULL, NULL, NULL, NULL, NULL, &t1781_TI, NULL, NULL, &t1781__CustomAttributeCache, &t1781_TI, &t1781_0_0_0, &t1781_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition System.Runtime.Remoting.IEnvoyInfo
extern MethodInfo m11564_MI;
static PropertyInfo t1783____EnvoySinks_PropertyInfo = 
{
	&t1783_TI, "EnvoySinks", &m11564_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1783_PIs[] =
{
	&t1783____EnvoySinks_PropertyInfo,
	NULL
};
extern Il2CppType t1232_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11564_MI = 
{
	"get_EnvoySinks", NULL, &t1783_TI, &t1232_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 3888, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1783_MIs[] =
{
	&m11564_MI,
	NULL
};
void t1783_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1783__CustomAttributeCache = {
1,
NULL,
&t1783_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1783_0_0_0;
extern Il2CppType t1783_1_0_0;
struct t1783;
extern CustomAttributesCache t1783__CustomAttributeCache;
TypeInfo t1783_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnvoyInfo", "System.Runtime.Remoting", t1783_MIs, t1783_PIs, NULL, NULL, NULL, NULL, NULL, &t1783_TI, NULL, NULL, &t1783__CustomAttributeCache, &t1783_TI, &t1783_0_0_0, &t1783_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
